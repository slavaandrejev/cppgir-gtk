#include <gtk/gtk.hpp>

namespace Gio = gi::repository::Gio;
namespace Gtk = gi::repository::Gtk;

class MainWindow : public Gtk::impl::ApplicationWindowImpl
{
public:
    MainWindow(Gtk::ApplicationWindow cobj, Gtk::Builder builder)
      : Gtk::impl::ApplicationWindowImpl(cobj, this)
      , builder(builder)
    {
        label = builder.get_object<Gtk::Label>("label");
    }

    static gi::ref_ptr<MainWindow> new_() {
        auto builder = Gtk::Builder::new_();
        if (builder.add_from_resource("/cppgir-gtk.ui")) {
            return builder.get_object_derived<MainWindow>("main-window");
        }
        return gi::ref_ptr<MainWindow>();
    }

 private:
    Gtk::Builder builder;
    Gtk::Label   label;
};

int main (int argc, char *argv[]) {
    auto app = Gtk::Application::new_(Gio::ApplicationFlags::DEFAULT_FLAGS_);

    auto main_window = gi::ref_ptr<MainWindow>{};
    app.signal_activate().connect([&](Gio::Application) {
        main_window = MainWindow::new_();
        app.add_window(*main_window);
        main_window->present();
    });
    app.signal_window_removed().connect([&](Gtk::Application, Gtk::Window window) {
        if (main_window && *main_window == window) {
            main_window.reset();
        }
    });

    return app.run({argv, size_t(argc)});
}
