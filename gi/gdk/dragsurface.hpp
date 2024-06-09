// AUTO-GENERATED

#ifndef _GI_GDK_DRAGSURFACE_HPP_
#define _GI_GDK_DRAGSURFACE_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class DragSurface;

namespace base {


#define GI_GDK_DRAGSURFACE_BASE base::DragSurfaceBase
class DragSurfaceBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GdkDragSurface BaseObjectType;

DragSurfaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_drag_surface_get_type(); } 

// gboolean gdk_drag_surface_present (GdkDragSurface* drag_surface /*none*/, int width, int height);
// gboolean gdk_drag_surface_present (::GdkDragSurface* drag_surface /*none*/, gint width, gint height);
GI_INLINE_DECL bool present (gint width, gint height) noexcept;

// (signal) void compute-size ( size /*none*/);
// (signal) void compute-size ( size /*none*/);
// SKIP; size type  not supported

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/dragsurface_extra_def.hpp>)
#include <gdk/dragsurface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/dragsurface_extra.hpp>)
#include <gdk/dragsurface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DragSurface : public GI_GDK_DRAGSURFACE_BASE
{ typedef GI_GDK_DRAGSURFACE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDragSurface>
{ typedef Gdk::DragSurface type; }; 

} // namespace repository

} // namespace gi

#endif
