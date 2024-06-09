// AUTO-GENERATED

#ifndef _GI_GDK_DROP_HPP_
#define _GI_GDK_DROP_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ContentFormats;
class ContentFormats_Ref;
class Device;
class Display;
class Drag;
class Surface;

class Drop;

namespace base {


#define GI_GDK_DROP_BASE base::DropBase
class DropBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDrop BaseObjectType;

DropBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_drop_get_type(); } 

// void gdk_drop_finish (GdkDrop* self /*none*/, GdkDragAction action);
// void gdk_drop_finish (::GdkDrop* self /*none*/, ::GdkDragAction action);
GI_INLINE_DECL void finish (Gdk::DragAction action) noexcept;

// GdkDragAction gdk_drop_get_actions (GdkDrop* self /*none*/);
// ::GdkDragAction gdk_drop_get_actions (::GdkDrop* self /*none*/);
GI_INLINE_DECL Gdk::DragAction get_actions () noexcept;

// GdkDevice* /*none*/ gdk_drop_get_device (GdkDrop* self /*none*/);
// ::GdkDevice* /*none*/ gdk_drop_get_device (::GdkDrop* self /*none*/);
GI_INLINE_DECL Gdk::Device get_device () noexcept;

// GdkDisplay* /*none*/ gdk_drop_get_display (GdkDrop* self /*none*/);
// ::GdkDisplay* /*none*/ gdk_drop_get_display (::GdkDrop* self /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkDrag* /*none,nullable*/ gdk_drop_get_drag (GdkDrop* self /*none*/);
// ::GdkDrag* /*none,nullable*/ gdk_drop_get_drag (::GdkDrop* self /*none*/);
GI_INLINE_DECL Gdk::Drag get_drag () noexcept;

// GdkContentFormats* /*none*/ gdk_drop_get_formats (GdkDrop* self /*none*/);
// ::GdkContentFormats* /*none*/ gdk_drop_get_formats (::GdkDrop* self /*none*/);
GI_INLINE_DECL Gdk::ContentFormats_Ref get_formats () noexcept;

// GdkSurface* /*none*/ gdk_drop_get_surface (GdkDrop* self /*none*/);
// ::GdkSurface* /*none*/ gdk_drop_get_surface (::GdkDrop* self /*none*/);
GI_INLINE_DECL Gdk::Surface get_surface () noexcept;

// void gdk_drop_read_async (GdkDrop* self /*none*/, const char** mime_types /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_drop_read_async (::GdkDrop* self /*none*/, const char** mime_types /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* /*full,nullable*/ gdk_drop_read_finish (GdkDrop* self /*none*/, GAsyncResult* result /*none*/, const char** out_mime_type /*full,out*/, GError ** error);
// ::GInputStream* /*full,nullable*/ gdk_drop_read_finish (::GdkDrop* self /*none*/, ::GAsyncResult* result /*none*/, const char** out_mime_type /*full,out*/, GError ** error);
GI_INLINE_DECL Gio::InputStream read_finish (Gio::AsyncResult result, gi::cstring & out_mime_type);
GI_INLINE_DECL Gio::InputStream read_finish (Gio::AsyncResult result, gi::cstring & out_mime_type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> read_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring> read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_drop_read_value_async (GdkDrop* self /*none*/, GType type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_drop_read_value_async (::GdkDrop* self /*none*/, GType type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_value_async (GType type, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_value_async (GType type, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// const GValue* /*none*/ gdk_drop_read_value_finish (GdkDrop* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// const ::GValue* /*none*/ gdk_drop_read_value_finish (::GdkDrop* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL GObject::Value_Ref read_value_finish (Gio::AsyncResult result);
GI_INLINE_DECL GObject::Value_Ref read_value_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_drop_status (GdkDrop* self /*none*/, GdkDragAction actions, GdkDragAction preferred);
// void gdk_drop_status (::GdkDrop* self /*none*/, ::GdkDragAction actions, ::GdkDragAction preferred);
GI_INLINE_DECL void status (Gdk::DragAction actions, Gdk::DragAction preferred) noexcept;

gi::property_proxy<Gdk::DragAction, base::DropBase> property_actions()
{ return gi::property_proxy<Gdk::DragAction, base::DropBase> (*this, "actions"); }
const gi::property_proxy<Gdk::DragAction, base::DropBase> property_actions() const
{ return gi::property_proxy<Gdk::DragAction, base::DropBase> (*this, "actions"); }

gi::property_proxy<Gdk::Device, base::DropBase> property_device()
{ return gi::property_proxy<Gdk::Device, base::DropBase> (*this, "device"); }
const gi::property_proxy<Gdk::Device, base::DropBase> property_device() const
{ return gi::property_proxy<Gdk::Device, base::DropBase> (*this, "device"); }

gi::property_proxy<Gdk::Display, base::DropBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DropBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DropBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DropBase> (*this, "display"); }

gi::property_proxy<Gdk::Drag, base::DropBase> property_drag()
{ return gi::property_proxy<Gdk::Drag, base::DropBase> (*this, "drag"); }
const gi::property_proxy<Gdk::Drag, base::DropBase> property_drag() const
{ return gi::property_proxy<Gdk::Drag, base::DropBase> (*this, "drag"); }

gi::property_proxy<Gdk::ContentFormats, base::DropBase> property_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::DropBase> (*this, "formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::DropBase> property_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::DropBase> (*this, "formats"); }

gi::property_proxy<Gdk::Surface, base::DropBase> property_surface()
{ return gi::property_proxy<Gdk::Surface, base::DropBase> (*this, "surface"); }
const gi::property_proxy<Gdk::Surface, base::DropBase> property_surface() const
{ return gi::property_proxy<Gdk::Surface, base::DropBase> (*this, "surface"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drop_extra_def.hpp>)
#include <gdk/drop_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drop_extra.hpp>)
#include <gdk/drop_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Drop : public GI_GDK_DROP_BASE
{ typedef GI_GDK_DROP_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDrop>
{ typedef Gdk::Drop type; }; 

} // namespace repository

} // namespace gi

#endif
