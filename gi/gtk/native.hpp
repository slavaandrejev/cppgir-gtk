// AUTO-GENERATED

#ifndef _GI_GTK_NATIVE_HPP_
#define _GI_GTK_NATIVE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Native;

namespace base {


#define GI_GTK_NATIVE_BASE base::NativeBase
class NativeBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkNative BaseObjectType;

NativeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_native_get_type(); } 

// GtkNative* /*none,nullable*/ gtk_native_get_for_surface (GdkSurface* surface /*none*/);
// ::GtkNative* /*none,nullable*/ gtk_native_get_for_surface (::GdkSurface* surface /*none*/);
static GI_INLINE_DECL Gtk::Native get_for_surface (Gdk::Surface surface) noexcept;

// GskRenderer* /*none*/ gtk_native_get_renderer (GtkNative* self /*none*/);
// ::GskRenderer* /*none*/ gtk_native_get_renderer (::GtkNative* self /*none*/);
GI_INLINE_DECL Gsk::Renderer get_renderer () noexcept;

// GdkSurface* /*none*/ gtk_native_get_surface (GtkNative* self /*none*/);
// ::GdkSurface* /*none*/ gtk_native_get_surface (::GtkNative* self /*none*/);
GI_INLINE_DECL Gdk::Surface get_surface () noexcept;

// void gtk_native_get_surface_transform (GtkNative* self /*none*/, double* x, double* y);
// void gtk_native_get_surface_transform (::GtkNative* self /*none*/, gdouble* x, gdouble* y);
GI_INLINE_DECL void get_surface_transform (gdouble & x, gdouble & y) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_surface_transform () noexcept;

// void gtk_native_realize (GtkNative* self /*none*/);
// void gtk_native_realize (::GtkNative* self /*none*/);
GI_INLINE_DECL void realize () noexcept;

// void gtk_native_unrealize (GtkNative* self /*none*/);
// void gtk_native_unrealize (::GtkNative* self /*none*/);
GI_INLINE_DECL void unrealize () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/native_extra_def.hpp>)
#include <gtk/native_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/native_extra.hpp>)
#include <gtk/native_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Native : public GI_GTK_NATIVE_BASE
{ typedef GI_GTK_NATIVE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNative>
{ typedef Gtk::Native type; }; 

} // namespace repository

} // namespace gi

#endif
