// AUTO-GENERATED

#ifndef _GI_GIO_CONVERTER_IMPL_HPP_
#define _GI_GIO_CONVERTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GConverterResult g_converter_convert (GConverter* converter /*none*/, void* inbuf /*none*/, gsize inbuf_size, void* outbuf /*none*/, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult g_converter_convert (::GConverter* converter /*none*/, guint8* inbuf /*none*/, gsize inbuf_size, guint8* outbuf /*none*/, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
Gio::ConverterResult base::ConverterBase::convert (const guint8 * inbuf, gsize inbuf_size, const guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written)
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_to_c = outbuf;
  auto inbuf_to_c = inbuf;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_size), (guint8*) (outbuf_to_c), (gsize) (outbuf_size), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  bytes_written = bytes_written_o;
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::ConverterResult base::ConverterBase::convert (const guint8 * inbuf, gsize inbuf_size, const guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written, GLib::Error * _error) noexcept
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_to_c = outbuf;
  auto inbuf_to_c = inbuf;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_size), (guint8*) (outbuf_to_c), (gsize) (outbuf_size), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}
std::tuple<Gio::ConverterResult, gsize, gsize> base::ConverterBase::convert (const guint8 * inbuf, gsize inbuf_size, const guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags)
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_to_c = outbuf;
  auto inbuf_to_c = inbuf;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_size), (guint8*) (outbuf_to_c), (gsize) (outbuf_size), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<Gio::ConverterResult, gsize, gsize> base::ConverterBase::convert (const guint8 * inbuf, gsize inbuf_size, const guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_to_c = outbuf;
  auto inbuf_to_c = inbuf;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_size), (guint8*) (outbuf_to_c), (gsize) (outbuf_size), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret);
  auto &&tmp_return_2 = bytes_read_o;
  auto &&tmp_return_3 = bytes_written_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_converter_reset (GConverter* converter /*none*/);
// void g_converter_reset (::GConverter* converter /*none*/);
void base::ConverterBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_converter_reset;
  call_wrap_v ((::GConverter*) (gobj_()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/converter_extra_def_impl.hpp>)
#include <gio/converter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/converter_extra_impl.hpp>)
#include <gio/converter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ConverterIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GConverterIface *methods = (::GConverterIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.convert) methods->convert = (decltype (methods->convert)) detail::method_wrapper<self, Gio::ConverterResult (*) (const guint8 * inbuf, gsize inbuf_size, const guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::convert_>;
  if (init_data.reset) methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::reset_>;
}

// GConverterResult Converter::convert (GConverter* converter /*none*/, void* inbuf /*none,nullable*/, gsize inbuf_size, void* outbuf /*none*/, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
// ::GConverterResult Converter::convert (::GConverter* converter /*none*/, guint8* inbuf /*none,nullable*/, gsize inbuf_size, guint8* outbuf /*none*/, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
Gio::ConverterResult ConverterIfaceClassImpl::convert_ (const guint8 * inbuf, gsize inbuf_size, const guint8 * outbuf, gsize outbuf_size, Gio::ConverterFlags flags, gsize & bytes_read, gsize & bytes_written, GLib::Error * _error)
{
  if (!get_struct_()->convert) { g_critical ("no method in class struct"); return {}; }
  typedef ::GConverterResult (*call_wrap_t) (::GConverter* converter, guint8* inbuf, gsize inbuf_size, guint8* outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->convert;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto outbuf_to_c = outbuf;
  auto inbuf_to_c = inbuf;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GConverter*) (gobj_()), (guint8*) (inbuf_to_c), (gsize) (inbuf_size), (guint8*) (outbuf_to_c), (gsize) (outbuf_size), (::GConverterFlags) (flags_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret);
}

// void Converter::reset (GConverter* converter /*none*/);
// void Converter::reset (::GConverter* converter /*none*/);
void ConverterIfaceClassImpl::reset_ () noexcept
{
  if (!get_struct_()->reset) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::GConverter*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
