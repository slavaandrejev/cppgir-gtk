// AUTO-GENERATED

#ifndef _GI_GTK_FILELAUNCHER_HPP_
#define _GI_GTK_FILELAUNCHER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class FileLauncher;

namespace base {


#define GI_GTK_FILELAUNCHER_BASE base::FileLauncherBase
class FileLauncherBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkFileLauncher BaseObjectType;

FileLauncherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_launcher_get_type(); } 

// GtkFileLauncher* /*full*/ gtk_file_launcher_new (GFile* file /*none,nullable*/);
// ::GtkFileLauncher* /*full*/ gtk_file_launcher_new (::GFile* file /*none,nullable*/);
static GI_INLINE_DECL Gtk::FileLauncher new_ (Gio::File file) noexcept;
static GI_INLINE_DECL Gtk::FileLauncher new_ () noexcept;

// gboolean gtk_file_launcher_get_always_ask (GtkFileLauncher* self /*none*/);
// gboolean gtk_file_launcher_get_always_ask (::GtkFileLauncher* self /*none*/);
GI_INLINE_DECL bool get_always_ask () noexcept;

// GFile* /*none,nullable*/ gtk_file_launcher_get_file (GtkFileLauncher* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_file_launcher_get_file (::GtkFileLauncher* self /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// void gtk_file_launcher_launch (GtkFileLauncher* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_launcher_launch (::GtkFileLauncher* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void launch (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void launch (Gio::AsyncReadyCallback callback) noexcept;

// gboolean gtk_file_launcher_launch_finish (GtkFileLauncher* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_file_launcher_launch_finish (::GtkFileLauncher* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool launch_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool launch_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_launcher_open_containing_folder (GtkFileLauncher* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_launcher_open_containing_folder (::GtkFileLauncher* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void open_containing_folder (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void open_containing_folder (Gio::AsyncReadyCallback callback) noexcept;

// gboolean gtk_file_launcher_open_containing_folder_finish (GtkFileLauncher* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_file_launcher_open_containing_folder_finish (::GtkFileLauncher* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool open_containing_folder_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool open_containing_folder_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_file_launcher_set_always_ask (GtkFileLauncher* self /*none*/, gboolean always_ask);
// void gtk_file_launcher_set_always_ask (::GtkFileLauncher* self /*none*/, gboolean always_ask);
GI_INLINE_DECL void set_always_ask (gboolean always_ask) noexcept;

// void gtk_file_launcher_set_file (GtkFileLauncher* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_file_launcher_set_file (::GtkFileLauncher* self /*none*/, ::GFile* file /*none,nullable*/);
GI_INLINE_DECL void set_file (Gio::File file) noexcept;
GI_INLINE_DECL void set_file () noexcept;

gi::property_proxy<bool, base::FileLauncherBase> property_always_ask()
{ return gi::property_proxy<bool, base::FileLauncherBase> (*this, "always-ask"); }
const gi::property_proxy<bool, base::FileLauncherBase> property_always_ask() const
{ return gi::property_proxy<bool, base::FileLauncherBase> (*this, "always-ask"); }

gi::property_proxy<Gio::File, base::FileLauncherBase> property_file()
{ return gi::property_proxy<Gio::File, base::FileLauncherBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::FileLauncherBase> property_file() const
{ return gi::property_proxy<Gio::File, base::FileLauncherBase> (*this, "file"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filelauncher_extra_def.hpp>)
#include <gtk/filelauncher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filelauncher_extra.hpp>)
#include <gtk/filelauncher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileLauncher : public GI_GTK_FILELAUNCHER_BASE
{ typedef GI_GTK_FILELAUNCHER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileLauncher>
{ typedef Gtk::FileLauncher type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FileLauncherClassDef
{
typedef FileLauncherClassDef self;
public:
typedef Gtk::FileLauncher instance_type;
typedef ::GtkFileLauncherClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FileLauncherClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileLauncherClass: public detail::ClassTemplate<Gtk::impl::internal::FileLauncherClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FileLauncherClassDef;
typedef FileLauncherClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FileLauncherClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FileLauncherClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FileLauncherImpl = detail::ObjectImpl<FileLauncher, internal::FileLauncherClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
