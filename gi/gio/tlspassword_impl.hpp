// AUTO-GENERATED

#ifndef _GI_GIO_TLSPASSWORD_IMPL_HPP_
#define _GI_GIO_TLSPASSWORD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsPassword* /*full*/ g_tls_password_new (GTlsPasswordFlags flags, const gchar* description /*none*/);
// ::GTlsPassword* /*full*/ g_tls_password_new (::GTlsPasswordFlags flags, const char* description /*none*/);
Gio::TlsPassword base::TlsPasswordBase::new_ (Gio::TlsPasswordFlags flags, const gi::cstring_v description) noexcept
{
  typedef ::GTlsPassword* (*call_wrap_t) (::GTlsPasswordFlags flags, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_new;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GTlsPasswordFlags) (flags_to_c), (const char*) (description_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none*/ g_tls_password_get_description (GTlsPassword* password /*none*/);
// const char* /*none*/ g_tls_password_get_description (::GTlsPassword* password /*none*/);
gi::cstring_v base::TlsPasswordBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_get_description;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GTlsPasswordFlags g_tls_password_get_flags (GTlsPassword* password /*none*/);
// ::GTlsPasswordFlags g_tls_password_get_flags (::GTlsPassword* password /*none*/);
Gio::TlsPasswordFlags base::TlsPasswordBase::get_flags () noexcept
{
  typedef ::GTlsPasswordFlags (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_get_flags;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const guchar* /*none*/ g_tls_password_get_value (GTlsPassword* password /*none*/, gsize* length);
// const guint8* /*none*/ g_tls_password_get_value (::GTlsPassword* password /*none*/, gsize* length);
gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> base::TlsPasswordBase::get_value () noexcept
{
  typedef const guint8* (*call_wrap_t) (::GTlsPassword* password, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_get_value;
  gsize length;
  auto _ret_o = call_wrap_v ((::GTlsPassword*) (gobj_()), (gsize*) (&length));
  gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_none_t>>(_ret_o, length, gi::transfer_none);
  return _temp_ret;
}

// const gchar* /*none*/ g_tls_password_get_warning (GTlsPassword* password /*none*/);
// const char* /*none*/ g_tls_password_get_warning (::GTlsPassword* password /*none*/);
gi::cstring_v base::TlsPasswordBase::get_warning () noexcept
{
  typedef const char* (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_get_warning;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_tls_password_set_description (GTlsPassword* password /*none*/, const gchar* description /*none*/);
// void g_tls_password_set_description (::GTlsPassword* password /*none*/, const char* description /*none*/);
void base::TlsPasswordBase::set_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (const char*) (description_to_c));
}

// void g_tls_password_set_flags (GTlsPassword* password /*none*/, GTlsPasswordFlags flags);
// void g_tls_password_set_flags (::GTlsPassword* password /*none*/, ::GTlsPasswordFlags flags);
void base::TlsPasswordBase::set_flags (Gio::TlsPasswordFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, ::GTlsPasswordFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (::GTlsPasswordFlags) (flags_to_c));
}

// void g_tls_password_set_value (GTlsPassword* password /*none*/, const guchar* value /*none*/, gssize length);
// void g_tls_password_set_value (::GTlsPassword* password /*none*/, const guint8* value /*none*/, gssize length);
void base::TlsPasswordBase::set_value (const guint8 * value, gssize length) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, const guint8* value, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GTlsPassword*) (gobj_()), (const guint8*) (value_to_c), (gssize) (length));
}

// void g_tls_password_set_value_full (GTlsPassword* password /*none*/, guchar* value /*none*/, gssize length, GDestroyNotify destroy /*none,nullable*/);
// void g_tls_password_set_value_full (::GTlsPassword* password /*none*/, guint8* value /*none*/, gssize length, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info

// void g_tls_password_set_warning (GTlsPassword* password /*none*/, const gchar* warning /*none*/);
// void g_tls_password_set_warning (::GTlsPassword* password /*none*/, const char* warning /*none*/);
void base::TlsPasswordBase::set_warning (const gi::cstring_v warning) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, const char* warning);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tls_password_set_warning;
  auto warning_to_c = gi::unwrap (warning, gi::transfer_none);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (const char*) (warning_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra_def_impl.hpp>)
#include <gio/tlspassword_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra_impl.hpp>)
#include <gio/tlspassword_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsPasswordClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GTlsPasswordClass *methods = (::GTlsPasswordClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_default_warning) methods->get_default_warning = (decltype (methods->get_default_warning)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_default_warning_>;
}

// const gchar* /*none*/ TlsPassword::get_default_warning (GTlsPassword* password /*none*/);
// const char* /*none*/ TlsPassword::get_default_warning (::GTlsPassword* password /*none*/);
gi::cstring_v TlsPasswordClass::get_default_warning_ () noexcept
{
  if (!get_struct_()->get_default_warning) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_default_warning;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const guchar* /*none*/ TlsPassword::get_value (GTlsPassword* password /*none*/, gsize* length);
// const guint8* /*none*/ TlsPassword::get_value (::GTlsPassword* password /*none*/, gsize* length);
// SKIP; virtual-method return array not supported

// void TlsPassword::set_value (GTlsPassword* password /*none*/, guchar* value /*none*/, gssize length, GDestroyNotify destroy /*none,nullable*/);
// void TlsPassword::set_value (::GTlsPassword* password /*none*/, guint8* value /*none*/, gssize length, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
