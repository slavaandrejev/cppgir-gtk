// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTDESERIALIZER_IMPL_HPP_
#define _GI_GDK_CONTENTDESERIALIZER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

Gio::AsyncResult ContentDeserializerBase::interface_ (gi::interface_tag<Gio::AsyncResult>)
{ return gi::wrap ((Gio::AsyncResult::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ContentDeserializerBase::operator Gio::AsyncResult ()
{ return interface_ (gi::interface_tag<Gio::AsyncResult>()); }

// GCancellable* /*none,nullable*/ gdk_content_deserializer_get_cancellable (GdkContentDeserializer* deserializer /*none*/);
// ::GCancellable* /*none,nullable*/ gdk_content_deserializer_get_cancellable (::GdkContentDeserializer* deserializer /*none*/);
Gio::Cancellable base::ContentDeserializerBase::get_cancellable () noexcept
{
  typedef ::GCancellable* (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_cancellable;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType gdk_content_deserializer_get_gtype (GdkContentDeserializer* deserializer /*none*/);
// GType gdk_content_deserializer_get_gtype (::GdkContentDeserializer* deserializer /*none*/);
GType base::ContentDeserializerBase::get_gtype () noexcept
{
  typedef GType (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_gtype;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return _temp_ret;
}

// GInputStream* /*none*/ gdk_content_deserializer_get_input_stream (GdkContentDeserializer* deserializer /*none*/);
// ::GInputStream* /*none*/ gdk_content_deserializer_get_input_stream (::GdkContentDeserializer* deserializer /*none*/);
Gio::InputStream base::ContentDeserializerBase::get_input_stream () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_input_stream;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gdk_content_deserializer_get_mime_type (GdkContentDeserializer* deserializer /*none*/);
// const char* /*none*/ gdk_content_deserializer_get_mime_type (::GdkContentDeserializer* deserializer /*none*/);
gi::cstring_v base::ContentDeserializerBase::get_mime_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_mime_type;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gdk_content_deserializer_get_priority (GdkContentDeserializer* deserializer /*none*/);
// gint gdk_content_deserializer_get_priority (::GdkContentDeserializer* deserializer /*none*/);
gint base::ContentDeserializerBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_priority;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return _temp_ret;
}

// gpointer gdk_content_deserializer_get_task_data (GdkContentDeserializer* deserializer /*none*/);
// void* gdk_content_deserializer_get_task_data (::GdkContentDeserializer* deserializer /*none*/);
gpointer base::ContentDeserializerBase::get_task_data () noexcept
{
  typedef void* (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_task_data;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return _temp_ret;
}

// gpointer gdk_content_deserializer_get_user_data (GdkContentDeserializer* deserializer /*none*/);
// void* gdk_content_deserializer_get_user_data (::GdkContentDeserializer* deserializer /*none*/);
gpointer base::ContentDeserializerBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_user_data;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return _temp_ret;
}

// GValue* /*none*/ gdk_content_deserializer_get_value (GdkContentDeserializer* deserializer /*none*/);
// ::GValue* /*none*/ gdk_content_deserializer_get_value (::GdkContentDeserializer* deserializer /*none*/);
GObject::Value_Ref base::ContentDeserializerBase::get_value () noexcept
{
  typedef ::GValue* (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_get_value;
  auto _temp_ret = call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_content_deserializer_return_error (GdkContentDeserializer* deserializer /*none*/, GError* error /*full*/);
// void gdk_content_deserializer_return_error (::GdkContentDeserializer* deserializer /*none*/, ::GError* error /*full*/);
void base::ContentDeserializerBase::return_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentDeserializer* deserializer, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_return_error;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  call_wrap_v ((::GdkContentDeserializer*) (gobj_()), (::GError*) (error_to_c));
}

// void gdk_content_deserializer_return_success (GdkContentDeserializer* deserializer /*none*/);
// void gdk_content_deserializer_return_success (::GdkContentDeserializer* deserializer /*none*/);
void base::ContentDeserializerBase::return_success () noexcept
{
  typedef void (*call_wrap_t) (::GdkContentDeserializer* deserializer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_deserializer_return_success;
  call_wrap_v ((::GdkContentDeserializer*) (gobj_()));
}

// void gdk_content_deserializer_set_task_data (GdkContentDeserializer* deserializer /*none*/, gpointer data, GDestroyNotify notify /*none*/);
// void gdk_content_deserializer_set_task_data (::GdkContentDeserializer* deserializer /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none*/);
// SKIP; callback misses closure info


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentdeserializer_extra_def_impl.hpp>)
#include <gdk/contentdeserializer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentdeserializer_extra_impl.hpp>)
#include <gdk/contentdeserializer_extra_impl.hpp>
#endif
#endif

#endif
