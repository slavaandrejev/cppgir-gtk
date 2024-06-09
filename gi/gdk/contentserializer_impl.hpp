// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTSERIALIZER_IMPL_HPP_
#define _GI_GDK_CONTENTSERIALIZER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

Gio::AsyncResult ContentSerializerBase::interface_ (gi::interface_tag<Gio::AsyncResult>)
{ return gi::wrap ((Gio::AsyncResult::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ContentSerializerBase::operator Gio::AsyncResult ()
{ return interface_ (gi::interface_tag<Gio::AsyncResult>()); }

// GCancellable* /*none,nullable*/ gdk_content_serializer_get_cancellable (GdkContentSerializer* serializer /*none*/);
// ::GCancellable* /*none,nullable*/ gdk_content_serializer_get_cancellable (::GdkContentSerializer* serializer /*none*/);
Gio::Cancellable base::ContentSerializerBase::get_cancellable () noexcept
{
  typedef ::GCancellable* (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_cancellable;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType gdk_content_serializer_get_gtype (GdkContentSerializer* serializer /*none*/);
// GType gdk_content_serializer_get_gtype (::GdkContentSerializer* serializer /*none*/);
GType base::ContentSerializerBase::get_gtype () noexcept
{
  typedef GType (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_gtype;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gdk_content_serializer_get_mime_type (GdkContentSerializer* serializer /*none*/);
// const char* /*none*/ gdk_content_serializer_get_mime_type (::GdkContentSerializer* serializer /*none*/);
gi::cstring_v base::ContentSerializerBase::get_mime_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_mime_type;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GOutputStream* /*none*/ gdk_content_serializer_get_output_stream (GdkContentSerializer* serializer /*none*/);
// ::GOutputStream* /*none*/ gdk_content_serializer_get_output_stream (::GdkContentSerializer* serializer /*none*/);
Gio::OutputStream base::ContentSerializerBase::get_output_stream () noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_output_stream;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_content_serializer_get_priority (GdkContentSerializer* serializer /*none*/);
// gint gdk_content_serializer_get_priority (::GdkContentSerializer* serializer /*none*/);
gint base::ContentSerializerBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_priority;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return _temp_ret;
}

// gpointer gdk_content_serializer_get_task_data (GdkContentSerializer* serializer /*none*/);
// void* gdk_content_serializer_get_task_data (::GdkContentSerializer* serializer /*none*/);
gpointer base::ContentSerializerBase::get_task_data () noexcept
{
  typedef void* (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_task_data;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return _temp_ret;
}

// gpointer gdk_content_serializer_get_user_data (GdkContentSerializer* serializer /*none*/);
// void* gdk_content_serializer_get_user_data (::GdkContentSerializer* serializer /*none*/);
gpointer base::ContentSerializerBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_user_data;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return _temp_ret;
}

// const GValue* /*none*/ gdk_content_serializer_get_value (GdkContentSerializer* serializer /*none*/);
// const ::GValue* /*none*/ gdk_content_serializer_get_value (::GdkContentSerializer* serializer /*none*/);
GObject::Value_Ref base::ContentSerializerBase::get_value () noexcept
{
  typedef const ::GValue* (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_get_value;
  auto _temp_ret = call_wrap_v ((::GdkContentSerializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_content_serializer_return_error (GdkContentSerializer* serializer /*none*/, GError* error /*full*/);
// void gdk_content_serializer_return_error (::GdkContentSerializer* serializer /*none*/, ::GError* error /*full*/);
void base::ContentSerializerBase::return_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentSerializer* serializer, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_return_error;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  call_wrap_v ((::GdkContentSerializer*) (gobj_()), (::GError*) (error_to_c));
}

// void gdk_content_serializer_return_success (GdkContentSerializer* serializer /*none*/);
// void gdk_content_serializer_return_success (::GdkContentSerializer* serializer /*none*/);
void base::ContentSerializerBase::return_success () noexcept
{
  typedef void (*call_wrap_t) (::GdkContentSerializer* serializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_serializer_return_success;
  call_wrap_v ((::GdkContentSerializer*) (gobj_()));
}

// void gdk_content_serializer_set_task_data (GdkContentSerializer* serializer /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_serializer_set_task_data (::GdkContentSerializer* serializer /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; callback misses closure info


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentserializer_extra_def_impl.hpp>)
#include <gdk/contentserializer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentserializer_extra_impl.hpp>)
#include <gdk/contentserializer_extra_impl.hpp>
#endif
#endif

#endif
