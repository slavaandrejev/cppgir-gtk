// AUTO-GENERATED

#ifndef _GI_GTK_APPLICATION_HPP_
#define _GI_GTK_APPLICATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class Application;

namespace base {


#define GI_GTK_APPLICATION_BASE base::ApplicationBase
class ApplicationBase : public Gio::Application
{
typedef Gio::Application super_type;
public:
typedef ::GtkApplication BaseObjectType;

ApplicationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_application_get_type(); } 

// GtkApplication* /*full*/ gtk_application_new (const char* application_id /*none,nullable*/, GApplicationFlags flags);
// ::GtkApplication* /*full*/ gtk_application_new (const char* application_id /*none,nullable*/, ::GApplicationFlags flags);
static GI_INLINE_DECL Gtk::Application new_ (const gi::cstring_v application_id, Gio::ApplicationFlags flags) noexcept;
static GI_INLINE_DECL Gtk::Application new_ (Gio::ApplicationFlags flags) noexcept;

// void gtk_application_add_window (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void gtk_application_add_window (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
GI_INLINE_DECL void add_window (Gtk::Window window) noexcept;

// char** /*full*/ gtk_application_get_accels_for_action (GtkApplication* application /*none*/, const char* detailed_action_name /*none*/);
// char** /*full*/ gtk_application_get_accels_for_action (::GtkApplication* application /*none*/, const char* detailed_action_name /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_accels_for_action (const gi::cstring_v detailed_action_name) noexcept;

// char** /*full*/ gtk_application_get_actions_for_accel (GtkApplication* application /*none*/, const char* accel /*none*/);
// char** /*full*/ gtk_application_get_actions_for_accel (::GtkApplication* application /*none*/, const char* accel /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_actions_for_accel (const gi::cstring_v accel) noexcept;

// GtkWindow* /*none,nullable*/ gtk_application_get_active_window (GtkApplication* application /*none*/);
// ::GtkWindow* /*none,nullable*/ gtk_application_get_active_window (::GtkApplication* application /*none*/);
GI_INLINE_DECL Gtk::Window get_active_window () noexcept;

// GMenu* /*none,nullable*/ gtk_application_get_menu_by_id (GtkApplication* application /*none*/, const char* id /*none*/);
// ::GMenu* /*none,nullable*/ gtk_application_get_menu_by_id (::GtkApplication* application /*none*/, const char* id /*none*/);
GI_INLINE_DECL Gio::Menu get_menu_by_id (const gi::cstring_v id) noexcept;

// GMenuModel* /*none,nullable*/ gtk_application_get_menubar (GtkApplication* application /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_application_get_menubar (::GtkApplication* application /*none*/);
GI_INLINE_DECL Gio::MenuModel get_menubar () noexcept;

// GtkWindow* /*none,nullable*/ gtk_application_get_window_by_id (GtkApplication* application /*none*/, guint id);
// ::GtkWindow* /*none,nullable*/ gtk_application_get_window_by_id (::GtkApplication* application /*none*/, guint id);
GI_INLINE_DECL Gtk::Window get_window_by_id (guint id) noexcept;

// GList* /*none*/ gtk_application_get_windows (GtkApplication* application /*none*/);
// ::GList* /*none*/ gtk_application_get_windows (::GtkApplication* application /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkWindow*, gi::transfer_none_t> get_windows () noexcept;

// guint gtk_application_inhibit (GtkApplication* application /*none*/, GtkWindow* window /*none,nullable*/, GtkApplicationInhibitFlags flags, const char* reason /*none,nullable*/);
// guint gtk_application_inhibit (::GtkApplication* application /*none*/, ::GtkWindow* window /*none,nullable*/, ::GtkApplicationInhibitFlags flags, const char* reason /*none,nullable*/);
GI_INLINE_DECL guint inhibit (Gtk::Window window, Gtk::ApplicationInhibitFlags flags, const gi::cstring_v reason) noexcept;
GI_INLINE_DECL guint inhibit (Gtk::ApplicationInhibitFlags flags) noexcept;

// char** /*full*/ gtk_application_list_action_descriptions (GtkApplication* application /*none*/);
// char** /*full*/ gtk_application_list_action_descriptions (::GtkApplication* application /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_action_descriptions () noexcept;

// void gtk_application_remove_window (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void gtk_application_remove_window (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
GI_INLINE_DECL void remove_window (Gtk::Window window) noexcept;

// void gtk_application_set_accels_for_action (GtkApplication* application /*none*/, const char* detailed_action_name /*none*/, const char* const* accels /*none*/);
// void gtk_application_set_accels_for_action (::GtkApplication* application /*none*/, const char* detailed_action_name /*none*/, const char** accels /*none*/);
GI_INLINE_DECL void set_accels_for_action (const gi::cstring_v detailed_action_name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> accels) noexcept;

// void gtk_application_set_menubar (GtkApplication* application /*none*/, GMenuModel* menubar /*none,nullable*/);
// void gtk_application_set_menubar (::GtkApplication* application /*none*/, ::GMenuModel* menubar /*none,nullable*/);
GI_INLINE_DECL void set_menubar (Gio::MenuModel menubar) noexcept;
GI_INLINE_DECL void set_menubar () noexcept;

// void gtk_application_uninhibit (GtkApplication* application /*none*/, guint cookie);
// void gtk_application_uninhibit (::GtkApplication* application /*none*/, guint cookie);
GI_INLINE_DECL void uninhibit (guint cookie) noexcept;

gi::property_proxy<Gtk::Window, base::ApplicationBase> property_active_window()
{ return gi::property_proxy<Gtk::Window, base::ApplicationBase> (*this, "active-window"); }
const gi::property_proxy<Gtk::Window, base::ApplicationBase> property_active_window() const
{ return gi::property_proxy<Gtk::Window, base::ApplicationBase> (*this, "active-window"); }

gi::property_proxy<Gio::MenuModel, base::ApplicationBase> property_menubar()
{ return gi::property_proxy<Gio::MenuModel, base::ApplicationBase> (*this, "menubar"); }
const gi::property_proxy<Gio::MenuModel, base::ApplicationBase> property_menubar() const
{ return gi::property_proxy<Gio::MenuModel, base::ApplicationBase> (*this, "menubar"); }

gi::property_proxy<bool, base::ApplicationBase> property_register_session()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "register-session"); }
const gi::property_proxy<bool, base::ApplicationBase> property_register_session() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "register-session"); }

gi::property_proxy<bool, base::ApplicationBase> property_screensaver_active()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "screensaver-active"); }
const gi::property_proxy<bool, base::ApplicationBase> property_screensaver_active() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "screensaver-active"); }

// (signal) void query-end ();
// (signal) void query-end ();
gi::signal_proxy<void(Gtk::Application)> signal_query_end()
{ return gi::signal_proxy<void(Gtk::Application)> (*this, "query-end"); }

// (signal) void window-added ( window /*none*/);
// (signal) void window-added (::GtkWindow* window /*none*/);
gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> signal_window_added()
{ return gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> (*this, "window-added"); }

// (signal) void window-removed ( window /*none*/);
// (signal) void window-removed (::GtkWindow* window /*none*/);
gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> signal_window_removed()
{ return gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> (*this, "window-removed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/application_extra_def.hpp>)
#include <gtk/application_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/application_extra.hpp>)
#include <gtk/application_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Application : public GI_GTK_APPLICATION_BASE
{ typedef GI_GTK_APPLICATION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkApplication>
{ typedef Gtk::Application type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ApplicationClassDef
{
typedef ApplicationClassDef self;
public:
typedef Gtk::Application instance_type;
typedef ::GtkApplicationClass class_type;

using GI_MEMBER_CHECK_CONFLICT(window_added) = self;
using GI_MEMBER_CHECK_CONFLICT(window_removed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ApplicationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Application::window_added (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void Application::window_added (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
virtual void window_added_ (Gtk::Window window) noexcept = 0;

// void Application::window_removed (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void Application::window_removed (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
virtual void window_removed_ (Gtk::Window window) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ApplicationClass: public detail::ClassTemplate<Gtk::impl::internal::ApplicationClassDef, Gio::impl::internal::ApplicationClass>
{
friend class internal::ApplicationClassDef;
typedef ApplicationClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ApplicationClassDef, Gio::impl::internal::ApplicationClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Application::window_added (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void Application::window_added (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
GI_INLINE_DECL void window_added_ (Gtk::Window window) noexcept override;

// void Application::window_removed (GtkApplication* application /*none*/, GtkWindow* window /*none*/);
// void Application::window_removed (::GtkApplication* application /*none*/, ::GtkWindow* window /*none*/);
GI_INLINE_DECL void window_removed_ (Gtk::Window window) noexcept override;


};


struct ApplicationClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ApplicationClass, window_added)
  GI_MEMBER_DEFINE(ApplicationClass, window_removed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, window_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, window_removed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ApplicationImpl = detail::ObjectImpl<Application, internal::ApplicationClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
