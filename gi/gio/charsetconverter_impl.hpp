// AUTO-GENERATED

#ifndef _GI_GIO_CHARSETCONVERTER_IMPL_HPP_
#define _GI_GIO_CHARSETCONVERTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Converter CharsetConverterBase::interface_ (gi::interface_tag<Gio::Converter>)
{ return gi::wrap ((Gio::Converter::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CharsetConverterBase::operator Gio::Converter ()
{ return interface_ (gi::interface_tag<Gio::Converter>()); }

Gio::Initable CharsetConverterBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CharsetConverterBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GCharsetConverter* /*full*/ g_charset_converter_new (const gchar* to_charset /*none*/, const gchar* from_charset /*none*/, GError ** error);
// ::GCharsetConverter* /*full*/ g_charset_converter_new (const char* to_charset /*none*/, const char* from_charset /*none*/, GError ** error);
Gio::CharsetConverter base::CharsetConverterBase::new_ (const gi::cstring_v to_charset, const gi::cstring_v from_charset)
{
  typedef ::GCharsetConverter* (*call_wrap_t) (const char* to_charset, const char* from_charset, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_charset_converter_new;
  auto from_charset_to_c = gi::unwrap (from_charset, gi::transfer_none);
  auto to_charset_to_c = gi::unwrap (to_charset, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (to_charset_to_c), (const char*) (from_charset_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::CharsetConverter base::CharsetConverterBase::new_ (const gi::cstring_v to_charset, const gi::cstring_v from_charset, GLib::Error * _error) noexcept
{
  typedef ::GCharsetConverter* (*call_wrap_t) (const char* to_charset, const char* from_charset, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_charset_converter_new;
  auto from_charset_to_c = gi::unwrap (from_charset, gi::transfer_none);
  auto to_charset_to_c = gi::unwrap (to_charset, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (to_charset_to_c), (const char*) (from_charset_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint g_charset_converter_get_num_fallbacks (GCharsetConverter* converter /*none*/);
// guint g_charset_converter_get_num_fallbacks (::GCharsetConverter* converter /*none*/);
guint base::CharsetConverterBase::get_num_fallbacks () noexcept
{
  typedef guint (*call_wrap_t) (::GCharsetConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_charset_converter_get_num_fallbacks;
  auto _temp_ret = call_wrap_v ((::GCharsetConverter*) (gobj_()));
  return _temp_ret;
}

// gboolean g_charset_converter_get_use_fallback (GCharsetConverter* converter /*none*/);
// gboolean g_charset_converter_get_use_fallback (::GCharsetConverter* converter /*none*/);
bool base::CharsetConverterBase::get_use_fallback () noexcept
{
  typedef gboolean (*call_wrap_t) (::GCharsetConverter* converter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_charset_converter_get_use_fallback;
  auto _temp_ret = call_wrap_v ((::GCharsetConverter*) (gobj_()));
  return _temp_ret;
}

// void g_charset_converter_set_use_fallback (GCharsetConverter* converter /*none*/, gboolean use_fallback);
// void g_charset_converter_set_use_fallback (::GCharsetConverter* converter /*none*/, gboolean use_fallback);
void base::CharsetConverterBase::set_use_fallback (gboolean use_fallback) noexcept
{
  typedef void (*call_wrap_t) (::GCharsetConverter* converter, gboolean use_fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_charset_converter_set_use_fallback;
  auto use_fallback_to_c = use_fallback;
  call_wrap_v ((::GCharsetConverter*) (gobj_()), (gboolean) (use_fallback_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/charsetconverter_extra_def_impl.hpp>)
#include <gio/charsetconverter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/charsetconverter_extra_impl.hpp>)
#include <gio/charsetconverter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void CharsetConverterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GCharsetConverterClass *methods = (::GCharsetConverterClass *) class_struct;
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
