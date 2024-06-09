// AUTO-GENERATED

#ifndef _GI_GDK_CLIPBOARD_HPP_
#define _GI_GDK_CLIPBOARD_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ContentFormats;
class ContentFormats_Ref;
class ContentProvider;
class Display;
class Texture;

class Clipboard;

namespace base {


#define GI_GDK_CLIPBOARD_BASE base::ClipboardBase
class ClipboardBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkClipboard BaseObjectType;

ClipboardBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_clipboard_get_type(); } 

// GdkContentProvider* /*none,nullable*/ gdk_clipboard_get_content (GdkClipboard* clipboard /*none*/);
// ::GdkContentProvider* /*none,nullable*/ gdk_clipboard_get_content (::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL Gdk::ContentProvider get_content () noexcept;

// GdkDisplay* /*none*/ gdk_clipboard_get_display (GdkClipboard* clipboard /*none*/);
// ::GdkDisplay* /*none*/ gdk_clipboard_get_display (::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkContentFormats* /*none*/ gdk_clipboard_get_formats (GdkClipboard* clipboard /*none*/);
// ::GdkContentFormats* /*none*/ gdk_clipboard_get_formats (::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL Gdk::ContentFormats_Ref get_formats () noexcept;

// gboolean gdk_clipboard_is_local (GdkClipboard* clipboard /*none*/);
// gboolean gdk_clipboard_is_local (::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL bool is_local () noexcept;

// void gdk_clipboard_read_async (GdkClipboard* clipboard /*none*/, const char** mime_types /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_async (::GdkClipboard* clipboard /*none*/, const char** mime_types /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* /*full,nullable*/ gdk_clipboard_read_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, const char** out_mime_type /*none,out,opt*/, GError ** error);
// ::GInputStream* /*full,nullable*/ gdk_clipboard_read_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, const char** out_mime_type /*none,out,opt*/, GError ** error);
GI_INLINE_DECL Gio::InputStream read_finish (Gio::AsyncResult result, gi::cstring_v * out_mime_type);
GI_INLINE_DECL Gio::InputStream read_finish (Gio::AsyncResult result, gi::cstring_v * out_mime_type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring_v> read_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<Gio::InputStream, gi::cstring_v> read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_clipboard_read_text_async (GdkClipboard* clipboard /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_text_async (::GdkClipboard* clipboard /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_text_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_text_async (Gio::AsyncReadyCallback callback) noexcept;

// char* /*full,nullable*/ gdk_clipboard_read_text_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full,nullable*/ gdk_clipboard_read_text_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring read_text_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::cstring read_text_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_clipboard_read_texture_async (GdkClipboard* clipboard /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_texture_async (::GdkClipboard* clipboard /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_texture_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_texture_async (Gio::AsyncReadyCallback callback) noexcept;

// GdkTexture* /*full,nullable*/ gdk_clipboard_read_texture_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GdkTexture* /*full,nullable*/ gdk_clipboard_read_texture_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gdk::Texture read_texture_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gdk::Texture read_texture_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_clipboard_read_value_async (GdkClipboard* clipboard /*none*/, GType type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_value_async (::GdkClipboard* clipboard /*none*/, GType type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_value_async (GType type, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_value_async (GType type, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// const GValue* /*none*/ gdk_clipboard_read_value_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// const ::GValue* /*none*/ gdk_clipboard_read_value_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL GObject::Value_Ref read_value_finish (Gio::AsyncResult result);
GI_INLINE_DECL GObject::Value_Ref read_value_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gdk_clipboard_set (GdkClipboard* clipboard /*none*/, GType type,  ..._ /*none*/);
// void gdk_clipboard_set (::GdkClipboard* clipboard /*none*/, GType type,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_value, varargs not supported

// gboolean gdk_clipboard_set_content (GdkClipboard* clipboard /*none*/, GdkContentProvider* provider /*none,nullable*/);
// gboolean gdk_clipboard_set_content (::GdkClipboard* clipboard /*none*/, ::GdkContentProvider* provider /*none,nullable*/);
GI_INLINE_DECL bool set_content (Gdk::ContentProvider provider) noexcept;
GI_INLINE_DECL bool set_content () noexcept;

// void gdk_clipboard_set_text (GdkClipboard* clipboard /*none*/, const char* text /*none*/);
// void gdk_clipboard_set_text (::GdkClipboard* clipboard /*none*/, const char* text /*none*/);
GI_INLINE_DECL void set_text (const gi::cstring_v text) noexcept;

// void gdk_clipboard_set_texture (GdkClipboard* clipboard /*none*/, GdkTexture* texture /*none*/);
// void gdk_clipboard_set_texture (::GdkClipboard* clipboard /*none*/, ::GdkTexture* texture /*none*/);
GI_INLINE_DECL void set_texture (Gdk::Texture texture) noexcept;

// void gdk_clipboard_set_valist (GdkClipboard* clipboard /*none*/, GType type, va_list args /*none*/);
// void gdk_clipboard_set_valist (::GdkClipboard* clipboard /*none*/, GType type,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void gdk_clipboard_set_value (GdkClipboard* clipboard /*none*/, const GValue* value /*none*/);
// void gdk_clipboard_set_value (::GdkClipboard* clipboard /*none*/, const ::GValue* value /*none*/);
GI_INLINE_DECL void set (const GObject::Value_Ref value) noexcept;

// void gdk_clipboard_store_async (GdkClipboard* clipboard /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_store_async (::GdkClipboard* clipboard /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void store_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void store_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gdk_clipboard_store_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gdk_clipboard_store_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool store_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool store_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<Gdk::ContentProvider, base::ClipboardBase> property_content()
{ return gi::property_proxy<Gdk::ContentProvider, base::ClipboardBase> (*this, "content"); }
const gi::property_proxy<Gdk::ContentProvider, base::ClipboardBase> property_content() const
{ return gi::property_proxy<Gdk::ContentProvider, base::ClipboardBase> (*this, "content"); }

gi::property_proxy<Gdk::Display, base::ClipboardBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::ClipboardBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::ClipboardBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::ClipboardBase> (*this, "display"); }

gi::property_proxy<Gdk::ContentFormats, base::ClipboardBase> property_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::ClipboardBase> (*this, "formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::ClipboardBase> property_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::ClipboardBase> (*this, "formats"); }

gi::property_proxy<bool, base::ClipboardBase> property_local()
{ return gi::property_proxy<bool, base::ClipboardBase> (*this, "local"); }
const gi::property_proxy<bool, base::ClipboardBase> property_local() const
{ return gi::property_proxy<bool, base::ClipboardBase> (*this, "local"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gdk::Clipboard)> signal_changed()
{ return gi::signal_proxy<void(Gdk::Clipboard)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/clipboard_extra_def.hpp>)
#include <gdk/clipboard_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/clipboard_extra.hpp>)
#include <gdk/clipboard_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Clipboard : public GI_GDK_CLIPBOARD_BASE
{ typedef GI_GDK_CLIPBOARD_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkClipboard>
{ typedef Gdk::Clipboard type; }; 

} // namespace repository

} // namespace gi

#endif
