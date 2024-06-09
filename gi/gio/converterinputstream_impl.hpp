// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTERINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_CONVERTERINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::PollableInputStream ConverterInputStreamBase::interface_ (gi::interface_tag<Gio::PollableInputStream>)
{ return gi::wrap ((Gio::PollableInputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ConverterInputStreamBase::operator Gio::PollableInputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableInputStream>()); }

// GInputStream* /*full*/ g_converter_input_stream_new (GInputStream* base_stream /*none*/, GConverter* converter /*none*/);
// ::GConverterInputStream* /*full*/ g_converter_input_stream_new (::GInputStream* base_stream /*none*/, ::GConverter* converter /*none*/);
Gio::ConverterInputStream base::ConverterInputStreamBase::new_ (Gio::InputStream base_stream, Gio::Converter converter) noexcept
{
  typedef ::GConverterInputStream* (*call_wrap_t) (::GInputStream* base_stream, ::GConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_input_stream_new;
  auto converter_to_c = gi::unwrap (converter, gi::transfer_none);
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c), (::GConverter*) (converter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GConverter* /*none*/ g_converter_input_stream_get_converter (GConverterInputStream* converter_stream /*none*/);
// ::GConverter* /*none*/ g_converter_input_stream_get_converter (::GConverterInputStream* converter_stream /*none*/);
Gio::Converter base::ConverterInputStreamBase::get_converter () noexcept
{
  typedef ::GConverter* (*call_wrap_t) (::GConverterInputStream* converter_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_input_stream_get_converter;
  auto _temp_ret = call_wrap_v ((::GConverterInputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converterinputstream_extra_def_impl.hpp>)
#include <gio/converterinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converterinputstream_extra_impl.hpp>)
#include <gio/converterinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ConverterInputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GConverterInputStreamClass *methods = (::GConverterInputStreamClass *) class_struct;
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
