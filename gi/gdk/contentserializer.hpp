// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTSERIALIZER_HPP_
#define _GI_GDK_CONTENTSERIALIZER_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class ContentSerializer;

namespace base {


#define GI_GDK_CONTENTSERIALIZER_BASE base::ContentSerializerBase
class ContentSerializerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkContentSerializer BaseObjectType;

ContentSerializerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_content_serializer_get_type(); } 

GI_INLINE_DECL Gio::AsyncResult interface_ (gi::interface_tag<Gio::AsyncResult>);

GI_INLINE_DECL operator Gio::AsyncResult ();

// GCancellable* /*none,nullable*/ gdk_content_serializer_get_cancellable (GdkContentSerializer* serializer /*none*/);
// ::GCancellable* /*none,nullable*/ gdk_content_serializer_get_cancellable (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL Gio::Cancellable get_cancellable () noexcept;

// GType gdk_content_serializer_get_gtype (GdkContentSerializer* serializer /*none*/);
// GType gdk_content_serializer_get_gtype (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL GType get_gtype () noexcept;

// const char* /*none*/ gdk_content_serializer_get_mime_type (GdkContentSerializer* serializer /*none*/);
// const char* /*none*/ gdk_content_serializer_get_mime_type (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL gi::cstring_v get_mime_type () noexcept;

// GOutputStream* /*none*/ gdk_content_serializer_get_output_stream (GdkContentSerializer* serializer /*none*/);
// ::GOutputStream* /*none*/ gdk_content_serializer_get_output_stream (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL Gio::OutputStream get_output_stream () noexcept;

// int gdk_content_serializer_get_priority (GdkContentSerializer* serializer /*none*/);
// gint gdk_content_serializer_get_priority (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL gint get_priority () noexcept;

// gpointer gdk_content_serializer_get_task_data (GdkContentSerializer* serializer /*none*/);
// void* gdk_content_serializer_get_task_data (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL gpointer get_task_data () noexcept;

// gpointer gdk_content_serializer_get_user_data (GdkContentSerializer* serializer /*none*/);
// void* gdk_content_serializer_get_user_data (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// const GValue* /*none*/ gdk_content_serializer_get_value (GdkContentSerializer* serializer /*none*/);
// const ::GValue* /*none*/ gdk_content_serializer_get_value (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL GObject::Value_Ref get_value () noexcept;

// void gdk_content_serializer_return_error (GdkContentSerializer* serializer /*none*/, GError* error /*full*/);
// void gdk_content_serializer_return_error (::GdkContentSerializer* serializer /*none*/, ::GError* error /*full*/);
GI_INLINE_DECL void return_error (GLib::Error error) noexcept;

// void gdk_content_serializer_return_success (GdkContentSerializer* serializer /*none*/);
// void gdk_content_serializer_return_success (::GdkContentSerializer* serializer /*none*/);
GI_INLINE_DECL void return_success () noexcept;

// void gdk_content_serializer_set_task_data (GdkContentSerializer* serializer /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_serializer_set_task_data (::GdkContentSerializer* serializer /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; callback misses closure info

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentserializer_extra_def.hpp>)
#include <gdk/contentserializer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentserializer_extra.hpp>)
#include <gdk/contentserializer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ContentSerializer : public GI_GDK_CONTENTSERIALIZER_BASE
{ typedef GI_GDK_CONTENTSERIALIZER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkContentSerializer>
{ typedef Gdk::ContentSerializer type; }; 

} // namespace repository

} // namespace gi

#endif
