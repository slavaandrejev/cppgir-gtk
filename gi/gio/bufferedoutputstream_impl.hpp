// AUTO-GENERATED

#ifndef _GI_GIO_BUFFEREDOUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_BUFFEREDOUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable BufferedOutputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BufferedOutputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GOutputStream* /*full*/ g_buffered_output_stream_new (GOutputStream* base_stream /*none*/);
// ::GBufferedOutputStream* /*full*/ g_buffered_output_stream_new (::GOutputStream* base_stream /*none*/);
Gio::BufferedOutputStream base::BufferedOutputStreamBase::new_ (Gio::OutputStream base_stream) noexcept
{
  typedef ::GBufferedOutputStream* (*call_wrap_t) (::GOutputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_output_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GOutputStream* /*full*/ g_buffered_output_stream_new_sized (GOutputStream* base_stream /*none*/, gsize size);
// ::GBufferedOutputStream* /*full*/ g_buffered_output_stream_new_sized (::GOutputStream* base_stream /*none*/, gsize size);
Gio::BufferedOutputStream base::BufferedOutputStreamBase::new_sized (Gio::OutputStream base_stream, gsize size) noexcept
{
  typedef ::GBufferedOutputStream* (*call_wrap_t) (::GOutputStream* base_stream, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_output_stream_new_sized;
  auto size_to_c = size;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (base_stream_to_c), (gsize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_buffered_output_stream_get_auto_grow (GBufferedOutputStream* stream /*none*/);
// gboolean g_buffered_output_stream_get_auto_grow (::GBufferedOutputStream* stream /*none*/);
bool base::BufferedOutputStreamBase::get_auto_grow () noexcept
{
  typedef gboolean (*call_wrap_t) (::GBufferedOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_output_stream_get_auto_grow;
  auto _temp_ret = call_wrap_v ((::GBufferedOutputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_buffered_output_stream_get_buffer_size (GBufferedOutputStream* stream /*none*/);
// gsize g_buffered_output_stream_get_buffer_size (::GBufferedOutputStream* stream /*none*/);
gsize base::BufferedOutputStreamBase::get_buffer_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_output_stream_get_buffer_size;
  auto _temp_ret = call_wrap_v ((::GBufferedOutputStream*) (gobj_()));
  return _temp_ret;
}

// void g_buffered_output_stream_set_auto_grow (GBufferedOutputStream* stream /*none*/, gboolean auto_grow);
// void g_buffered_output_stream_set_auto_grow (::GBufferedOutputStream* stream /*none*/, gboolean auto_grow);
void base::BufferedOutputStreamBase::set_auto_grow (gboolean auto_grow) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedOutputStream* stream, gboolean auto_grow);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_output_stream_set_auto_grow;
  auto auto_grow_to_c = auto_grow;
  call_wrap_v ((::GBufferedOutputStream*) (gobj_()), (gboolean) (auto_grow_to_c));
}

// void g_buffered_output_stream_set_buffer_size (GBufferedOutputStream* stream /*none*/, gsize size);
// void g_buffered_output_stream_set_buffer_size (::GBufferedOutputStream* stream /*none*/, gsize size);
void base::BufferedOutputStreamBase::set_buffer_size (gsize size) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedOutputStream* stream, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_buffered_output_stream_set_buffer_size;
  auto size_to_c = size;
  call_wrap_v ((::GBufferedOutputStream*) (gobj_()), (gsize) (size_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bufferedoutputstream_extra_def_impl.hpp>)
#include <gio/bufferedoutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bufferedoutputstream_extra_impl.hpp>)
#include <gio/bufferedoutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void BufferedOutputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GBufferedOutputStreamClass *methods = (::GBufferedOutputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
