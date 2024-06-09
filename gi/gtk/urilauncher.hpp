// AUTO-GENERATED

#ifndef _GI_GTK_URILAUNCHER_HPP_
#define _GI_GTK_URILAUNCHER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class UriLauncher;

namespace base {


#define GI_GTK_URILAUNCHER_BASE base::UriLauncherBase
class UriLauncherBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkUriLauncher BaseObjectType;

UriLauncherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_uri_launcher_get_type(); } 

// GtkUriLauncher* /*full*/ gtk_uri_launcher_new (const char* uri /*none,nullable*/);
// ::GtkUriLauncher* /*full*/ gtk_uri_launcher_new (const char* uri /*none,nullable*/);
static GI_INLINE_DECL Gtk::UriLauncher new_ (const gi::cstring_v uri) noexcept;
static GI_INLINE_DECL Gtk::UriLauncher new_ () noexcept;

// const char* /*none,nullable*/ gtk_uri_launcher_get_uri (GtkUriLauncher* self /*none*/);
// const char* /*none,nullable*/ gtk_uri_launcher_get_uri (::GtkUriLauncher* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_uri () noexcept;

// void gtk_uri_launcher_launch (GtkUriLauncher* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_uri_launcher_launch (::GtkUriLauncher* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void launch (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void launch (Gio::AsyncReadyCallback callback) noexcept;

// gboolean gtk_uri_launcher_launch_finish (GtkUriLauncher* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_uri_launcher_launch_finish (::GtkUriLauncher* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool launch_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool launch_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_uri_launcher_set_uri (GtkUriLauncher* self /*none*/, const char* uri /*none,nullable*/);
// void gtk_uri_launcher_set_uri (::GtkUriLauncher* self /*none*/, const char* uri /*none,nullable*/);
GI_INLINE_DECL void set_uri (const gi::cstring_v uri) noexcept;
GI_INLINE_DECL void set_uri () noexcept;

gi::property_proxy<gi::cstring, base::UriLauncherBase> property_uri()
{ return gi::property_proxy<gi::cstring, base::UriLauncherBase> (*this, "uri"); }
const gi::property_proxy<gi::cstring, base::UriLauncherBase> property_uri() const
{ return gi::property_proxy<gi::cstring, base::UriLauncherBase> (*this, "uri"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/urilauncher_extra_def.hpp>)
#include <gtk/urilauncher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/urilauncher_extra.hpp>)
#include <gtk/urilauncher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class UriLauncher : public GI_GTK_URILAUNCHER_BASE
{ typedef GI_GTK_URILAUNCHER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkUriLauncher>
{ typedef Gtk::UriLauncher type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class UriLauncherClassDef
{
typedef UriLauncherClassDef self;
public:
typedef Gtk::UriLauncher instance_type;
typedef ::GtkUriLauncherClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~UriLauncherClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UriLauncherClass: public detail::ClassTemplate<Gtk::impl::internal::UriLauncherClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::UriLauncherClassDef;
typedef UriLauncherClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::UriLauncherClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct UriLauncherClassDef::TypeInitData
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

using UriLauncherImpl = detail::ObjectImpl<UriLauncher, internal::UriLauncherClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
