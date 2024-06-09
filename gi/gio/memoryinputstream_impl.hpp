// AUTO-GENERATED

#ifndef _GI_GIO_MEMORYINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_MEMORYINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::PollableInputStream MemoryInputStreamBase::interface_ (gi::interface_tag<Gio::PollableInputStream>)
{ return gi::wrap ((Gio::PollableInputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MemoryInputStreamBase::operator Gio::PollableInputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableInputStream>()); }

Gio::Seekable MemoryInputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MemoryInputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GInputStream* /*full*/ g_memory_input_stream_new ();
// ::GMemoryInputStream* /*full*/ g_memory_input_stream_new ();
Gio::MemoryInputStream base::MemoryInputStreamBase::new_ () noexcept
{
  typedef ::GMemoryInputStream* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_input_stream_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInputStream* /*full*/ g_memory_input_stream_new_from_bytes (GBytes* bytes /*none*/);
// ::GMemoryInputStream* /*full*/ g_memory_input_stream_new_from_bytes (::GBytes* bytes /*none*/);
Gio::MemoryInputStream base::MemoryInputStreamBase::new_from_bytes (GLib::Bytes_Ref bytes) noexcept
{
  typedef ::GMemoryInputStream* (*call_wrap_t) (::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_input_stream_new_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInputStream* /*full*/ g_memory_input_stream_new_from_data (void* data /*full*/, gssize len, GDestroyNotify destroy /*none,nullable*/);
// ::GMemoryInputStream* /*full*/ g_memory_input_stream_new_from_data (guint8* data /*full*/, gssize len, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info

// void g_memory_input_stream_add_bytes (GMemoryInputStream* stream /*none*/, GBytes* bytes /*none*/);
// void g_memory_input_stream_add_bytes (::GMemoryInputStream* stream /*none*/, ::GBytes* bytes /*none*/);
void base::MemoryInputStreamBase::add_bytes (GLib::Bytes_Ref bytes) noexcept
{
  typedef void (*call_wrap_t) (::GMemoryInputStream* stream, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_memory_input_stream_add_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  call_wrap_v ((::GMemoryInputStream*) (gobj_()), (::GBytes*) (bytes_to_c));
}

// void g_memory_input_stream_add_data (GMemoryInputStream* stream /*none*/, void* data /*full*/, gssize len, GDestroyNotify destroy /*none,nullable*/);
// void g_memory_input_stream_add_data (::GMemoryInputStream* stream /*none*/, guint8* data /*full*/, gssize len, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/memoryinputstream_extra_def_impl.hpp>)
#include <gio/memoryinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/memoryinputstream_extra_impl.hpp>)
#include <gio/memoryinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MemoryInputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GMemoryInputStreamClass *methods = (::GMemoryInputStreamClass *) class_struct;
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
