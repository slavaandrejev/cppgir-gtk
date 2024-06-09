// AUTO-GENERATED

#ifndef _GI_GDK_DRAG_HPP_
#define _GI_GDK_DRAG_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ContentFormats;
class ContentFormats_Ref;
class ContentProvider;
class Device;
class Display;
class Surface;

class Drag;

namespace base {


#define GI_GDK_DRAG_BASE base::DragBase
class DragBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDrag BaseObjectType;

DragBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_drag_get_type(); } 

// GdkDrag* /*full,nullable*/ gdk_drag_begin (GdkSurface* surface /*none*/, GdkDevice* device /*none*/, GdkContentProvider* content /*none*/, GdkDragAction actions, double dx, double dy);
// ::GdkDrag* /*full,nullable*/ gdk_drag_begin (::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, ::GdkContentProvider* content /*none*/, ::GdkDragAction actions, gdouble dx, gdouble dy);
static GI_INLINE_DECL Gdk::Drag begin (Gdk::Surface surface, Gdk::Device device, Gdk::ContentProvider content, Gdk::DragAction actions, gdouble dx, gdouble dy) noexcept;

// void gdk_drag_drop_done (GdkDrag* drag /*none*/, gboolean success);
// void gdk_drag_drop_done (::GdkDrag* drag /*none*/, gboolean success);
GI_INLINE_DECL void drop_done (gboolean success) noexcept;

// GdkDragAction gdk_drag_get_actions (GdkDrag* drag /*none*/);
// ::GdkDragAction gdk_drag_get_actions (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::DragAction get_actions () noexcept;

// GdkContentProvider* /*none*/ gdk_drag_get_content (GdkDrag* drag /*none*/);
// ::GdkContentProvider* /*none*/ gdk_drag_get_content (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::ContentProvider get_content () noexcept;

// GdkDevice* /*none*/ gdk_drag_get_device (GdkDrag* drag /*none*/);
// ::GdkDevice* /*none*/ gdk_drag_get_device (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::Device get_device () noexcept;

// GdkDisplay* /*none*/ gdk_drag_get_display (GdkDrag* drag /*none*/);
// ::GdkDisplay* /*none*/ gdk_drag_get_display (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkSurface* /*none,nullable*/ gdk_drag_get_drag_surface (GdkDrag* drag /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_drag_get_drag_surface (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::Surface get_drag_surface () noexcept;

// GdkContentFormats* /*none*/ gdk_drag_get_formats (GdkDrag* drag /*none*/);
// ::GdkContentFormats* /*none*/ gdk_drag_get_formats (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::ContentFormats_Ref get_formats () noexcept;

// GdkDragAction gdk_drag_get_selected_action (GdkDrag* drag /*none*/);
// ::GdkDragAction gdk_drag_get_selected_action (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::DragAction get_selected_action () noexcept;

// GdkSurface* /*none*/ gdk_drag_get_surface (GdkDrag* drag /*none*/);
// ::GdkSurface* /*none*/ gdk_drag_get_surface (::GdkDrag* drag /*none*/);
GI_INLINE_DECL Gdk::Surface get_surface () noexcept;

// void gdk_drag_set_hotspot (GdkDrag* drag /*none*/, int hot_x, int hot_y);
// void gdk_drag_set_hotspot (::GdkDrag* drag /*none*/, gint hot_x, gint hot_y);
GI_INLINE_DECL void set_hotspot (gint hot_x, gint hot_y) noexcept;

gi::property_proxy<Gdk::DragAction, base::DragBase> property_actions()
{ return gi::property_proxy<Gdk::DragAction, base::DragBase> (*this, "actions"); }
const gi::property_proxy<Gdk::DragAction, base::DragBase> property_actions() const
{ return gi::property_proxy<Gdk::DragAction, base::DragBase> (*this, "actions"); }

gi::property_proxy<Gdk::ContentProvider, base::DragBase> property_content()
{ return gi::property_proxy<Gdk::ContentProvider, base::DragBase> (*this, "content"); }
const gi::property_proxy<Gdk::ContentProvider, base::DragBase> property_content() const
{ return gi::property_proxy<Gdk::ContentProvider, base::DragBase> (*this, "content"); }

gi::property_proxy<Gdk::Device, base::DragBase> property_device()
{ return gi::property_proxy<Gdk::Device, base::DragBase> (*this, "device"); }
const gi::property_proxy<Gdk::Device, base::DragBase> property_device() const
{ return gi::property_proxy<Gdk::Device, base::DragBase> (*this, "device"); }

gi::property_proxy<Gdk::Display, base::DragBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DragBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DragBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DragBase> (*this, "display"); }

gi::property_proxy<Gdk::ContentFormats, base::DragBase> property_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::DragBase> (*this, "formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::DragBase> property_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::DragBase> (*this, "formats"); }

gi::property_proxy<Gdk::DragAction, base::DragBase> property_selected_action()
{ return gi::property_proxy<Gdk::DragAction, base::DragBase> (*this, "selected-action"); }
const gi::property_proxy<Gdk::DragAction, base::DragBase> property_selected_action() const
{ return gi::property_proxy<Gdk::DragAction, base::DragBase> (*this, "selected-action"); }

gi::property_proxy<Gdk::Surface, base::DragBase> property_surface()
{ return gi::property_proxy<Gdk::Surface, base::DragBase> (*this, "surface"); }
const gi::property_proxy<Gdk::Surface, base::DragBase> property_surface() const
{ return gi::property_proxy<Gdk::Surface, base::DragBase> (*this, "surface"); }

// (signal) void cancel ( reason);
// (signal) void cancel (::GdkDragCancelReason reason);
gi::signal_proxy<void(Gdk::Drag, Gdk::DragCancelReason reason)> signal_cancel()
{ return gi::signal_proxy<void(Gdk::Drag, Gdk::DragCancelReason reason)> (*this, "cancel"); }

// (signal) void dnd-finished ();
// (signal) void dnd-finished ();
gi::signal_proxy<void(Gdk::Drag)> signal_dnd_finished()
{ return gi::signal_proxy<void(Gdk::Drag)> (*this, "dnd-finished"); }

// (signal) void drop-performed ();
// (signal) void drop-performed ();
gi::signal_proxy<void(Gdk::Drag)> signal_drop_performed()
{ return gi::signal_proxy<void(Gdk::Drag)> (*this, "drop-performed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drag_extra_def.hpp>)
#include <gdk/drag_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drag_extra.hpp>)
#include <gdk/drag_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Drag : public GI_GDK_DRAG_BASE
{ typedef GI_GDK_DRAG_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDrag>
{ typedef Gdk::Drag type; }; 

} // namespace repository

} // namespace gi

#endif
