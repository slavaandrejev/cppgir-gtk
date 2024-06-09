// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTDESERIALIZER_HPP_
#define _GI_GDK_CONTENTDESERIALIZER_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class ContentDeserializer;

namespace base {


#define GI_GDK_CONTENTDESERIALIZER_BASE base::ContentDeserializerBase
class ContentDeserializerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkContentDeserializer BaseObjectType;

ContentDeserializerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_content_deserializer_get_type(); } 

GI_INLINE_DECL Gio::AsyncResult interface_ (gi::interface_tag<Gio::AsyncResult>);

GI_INLINE_DECL operator Gio::AsyncResult ();

// GCancellable* /*none,nullable*/ gdk_content_deserializer_get_cancellable (GdkContentDeserializer* deserializer /*none*/);
// ::GCancellable* /*none,nullable*/ gdk_content_deserializer_get_cancellable (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL Gio::Cancellable get_cancellable () noexcept;

// GType gdk_content_deserializer_get_gtype (GdkContentDeserializer* deserializer /*none*/);
// GType gdk_content_deserializer_get_gtype (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL GType get_gtype () noexcept;

// GInputStream* /*none*/ gdk_content_deserializer_get_input_stream (GdkContentDeserializer* deserializer /*none*/);
// ::GInputStream* /*none*/ gdk_content_deserializer_get_input_stream (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL Gio::InputStream get_input_stream () noexcept;

// const char* /*none*/ gdk_content_deserializer_get_mime_type (GdkContentDeserializer* deserializer /*none*/);
// const char* /*none*/ gdk_content_deserializer_get_mime_type (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL gi::cstring_v get_mime_type () noexcept;

// int gdk_content_deserializer_get_priority (GdkContentDeserializer* deserializer /*none*/);
// gint gdk_content_deserializer_get_priority (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL gint get_priority () noexcept;

// gpointer gdk_content_deserializer_get_task_data (GdkContentDeserializer* deserializer /*none*/);
// void* gdk_content_deserializer_get_task_data (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL gpointer get_task_data () noexcept;

// gpointer gdk_content_deserializer_get_user_data (GdkContentDeserializer* deserializer /*none*/);
// void* gdk_content_deserializer_get_user_data (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// GValue* /*none*/ gdk_content_deserializer_get_value (GdkContentDeserializer* deserializer /*none*/);
// ::GValue* /*none*/ gdk_content_deserializer_get_value (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL GObject::Value_Ref get_value () noexcept;

// void gdk_content_deserializer_return_error (GdkContentDeserializer* deserializer /*none*/, GError* error /*full*/);
// void gdk_content_deserializer_return_error (::GdkContentDeserializer* deserializer /*none*/, ::GError* error /*full*/);
GI_INLINE_DECL void return_error (GLib::Error error) noexcept;

// void gdk_content_deserializer_return_success (GdkContentDeserializer* deserializer /*none*/);
// void gdk_content_deserializer_return_success (::GdkContentDeserializer* deserializer /*none*/);
GI_INLINE_DECL void return_success () noexcept;

// void gdk_content_deserializer_set_task_data (GdkContentDeserializer* deserializer /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_deserializer_set_task_data (::GdkContentDeserializer* deserializer /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; callback misses closure info

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentdeserializer_extra_def.hpp>)
#include <gdk/contentdeserializer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentdeserializer_extra.hpp>)
#include <gdk/contentdeserializer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ContentDeserializer : public GI_GDK_CONTENTDESERIALIZER_BASE
{ typedef GI_GDK_CONTENTDESERIALIZER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkContentDeserializer>
{ typedef Gdk::ContentDeserializer type; }; 

} // namespace repository

} // namespace gi

#endif
