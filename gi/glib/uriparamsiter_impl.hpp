// AUTO-GENERATED

#ifndef _GI_GLIB_URIPARAMSITER_IMPL_HPP_
#define _GI_GLIB_URIPARAMSITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_uri_params_iter_init (GUriParamsIter* iter /*none*/, const gchar* params /*none*/, gssize length, const gchar* separators /*none*/, GUriParamsFlags flags);
// void g_uri_params_iter_init (::GUriParamsIter* iter /*none*/, const char* params /*none*/, gssize length, const char* separators /*none*/, ::GUriParamsFlags flags);
void base::UriParamsIterBase::init (const gi::cstring_v params, gssize length, const gi::cstring_v separators, GLib::UriParamsFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GUriParamsIter* iter, const char* params, gssize length, const char* separators, ::GUriParamsFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_params_iter_init;
  auto flags_to_c = gi::unwrap (flags);
  auto separators_to_c = gi::unwrap (separators, gi::transfer_none);
  auto length_to_c = length;
  auto params_to_c = gi::unwrap (params, gi::transfer_none);
  call_wrap_v ((::GUriParamsIter*) (gobj_()), (const char*) (params_to_c), (gssize) (length_to_c), (const char*) (separators_to_c), (::GUriParamsFlags) (flags_to_c));
}

// gboolean g_uri_params_iter_next (GUriParamsIter* iter /*none*/, gchar** attribute /*full,out,opt,nullable*/, gchar** value /*full,out,opt,nullable*/, GError ** error);
// gboolean g_uri_params_iter_next (::GUriParamsIter* iter /*none*/, char** attribute /*full,out,opt,nullable*/, char** value /*full,out,opt,nullable*/, GError ** error);
bool base::UriParamsIterBase::next (gi::cstring * attribute, gi::cstring * value)
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (attribute ? &attribute_o : nullptr), (char**) (value ? &value_o : nullptr), &error);
  if (value) *value = gi::wrap (value_o, gi::transfer_full);
  if (attribute) *attribute = gi::wrap (attribute_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriParamsIterBase::next (gi::cstring * attribute, gi::cstring * value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (attribute ? &attribute_o : nullptr), (char**) (value ? &value_o : nullptr), _error ? &_error_o : nullptr);
  if (value) *value = gi::wrap (value_o, gi::transfer_full);
  if (attribute) *attribute = gi::wrap (attribute_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring> base::UriParamsIterBase::next ()
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (&attribute_o), (char**) (&value_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (attribute_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::UriParamsIterBase::next (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (&attribute_o), (char**) (&value_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (attribute_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra_def_impl.hpp>)
#include <glib/uriparamsiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra_impl.hpp>)
#include <glib/uriparamsiter_extra_impl.hpp>
#endif
#endif

#endif
