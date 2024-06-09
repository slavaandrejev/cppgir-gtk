// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTEROUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_CONVERTEROUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::PollableOutputStream ConverterOutputStreamBase::interface_ (gi::interface_tag<Gio::PollableOutputStream>)
{ return gi::wrap ((Gio::PollableOutputStream::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ConverterOutputStreamBase::operator Gio::PollableOutputStream ()
{ return interface_ (gi::interface_tag<Gio::PollableOutputStream>()); }

// GOutputStream* /*full*/ g_converter_output_stream_new (GOutputStream* base_stream /*none*/, GConverter* converter /*none*/);
// ::GConverterOutputStream* /*full*/ g_converter_output_stream_new (::GOutputStream* base_stream /*none*/, ::GConverter* converter /*none*/);
Gio::ConverterOutputStream base::ConverterOutputStreamBase::new_ (Gio::OutputStream base_stream, Gio::Converter converter) noexcept
{
  typedef ::GConverterOutputStream* (*call_wrap_t) (::GOutputStream* base_stream, ::GConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_converter_output_stream_new;
  auto converter_to_c = gi::unwrap (converter, gi::transfer_none);
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (base_stream_to_c), (::GConverter*) (converter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GConverter* /*none*/ g_converter_output_stream_get_converter (GConverterOutputStream* converter_stream /*none*/);
// ::GConverter* /*none*/ g_converter_output_stream_get_converter (::GConverterOutputStream* converter_stream /*none*/);
Gio::Converter base::ConverterOutputStreamBase::get_converter () noexcept
{
  typedef ::GConverter* (*call_wrap_t) (::GConverterOutputStream* converter_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_output_stream_get_converter;
  auto _temp_ret = call_wrap_v ((::GConverterOutputStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converteroutputstream_extra_def_impl.hpp>)
#include <gio/converteroutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converteroutputstream_extra_impl.hpp>)
#include <gio/converteroutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ConverterOutputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GConverterOutputStreamClass *methods = (::GConverterOutputStreamClass *) class_struct;
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
