// AUTO-GENERATED

#ifndef _GI_PANGO_LANGUAGE_IMPL_HPP_
#define _GI_PANGO_LANGUAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// const char* /*none*/ pango_language_get_sample_string (PangoLanguage* language /*none,nullable*/);
// const char* /*none*/ pango_language_get_sample_string (::PangoLanguage* language /*none,nullable*/);
gi::cstring_v base::LanguageBase::get_sample_string () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_get_sample_string;
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const PangoScript* /*none,nullable*/ pango_language_get_scripts (PangoLanguage* language /*none,nullable*/, int* num_scripts);
// const ::PangoScript* /*none,nullable*/ pango_language_get_scripts (::PangoLanguage* language /*none,nullable*/, gint* num_scripts);
gi::Collection<gi::DSpan, ::PangoScript, gi::transfer_none_t> base::LanguageBase::get_scripts () noexcept
{
  typedef const ::PangoScript* (*call_wrap_t) (::PangoLanguage* language, gint* num_scripts);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_get_scripts;
  gint num_scripts;
  auto _ret_o = call_wrap_v ((::PangoLanguage*) (gobj_()), (gint*) (&num_scripts));
  gi::Collection<gi::DSpan, ::PangoScript, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoScript, gi::transfer_none_t>>(_ret_o, num_scripts, gi::transfer_none);
  return _temp_ret;
}

// gboolean pango_language_includes_script (PangoLanguage* language /*none,nullable*/, PangoScript script);
// gboolean pango_language_includes_script (::PangoLanguage* language /*none,nullable*/, ::PangoScript script);
bool base::LanguageBase::includes_script (Pango::Script script) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLanguage* language, ::PangoScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_includes_script;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()), (::PangoScript) (script_to_c));
  return _temp_ret;
}

// gboolean pango_language_matches (PangoLanguage* language /*none,nullable*/, const char* range_list /*none*/);
// gboolean pango_language_matches (::PangoLanguage* language /*none,nullable*/, const char* range_list /*none*/);
bool base::LanguageBase::matches (const gi::cstring_v range_list) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLanguage* language, const char* range_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_matches;
  auto range_list_to_c = gi::unwrap (range_list, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()), (const char*) (range_list_to_c));
  return _temp_ret;
}

// const char* /*none*/ pango_language_to_string (PangoLanguage* language /*none*/);
// const char* /*none*/ pango_language_to_string (::PangoLanguage* language /*none*/);
gi::cstring_v base::LanguageBase::to_string () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_to_string;
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoLanguage* /*none,nullable*/ pango_language_from_string (const char* language /*none,nullable*/);
// ::PangoLanguage* /*none,nullable*/ pango_language_from_string (const char* language /*none,nullable*/);
Pango::Language_Ref base::LanguageBase::from_string (const gi::cstring_v language) noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const char* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_from_string;
  auto language_to_c = gi::unwrap (language, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Pango::Language_Ref base::LanguageBase::from_string () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const char* language);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_from_string;
  auto language_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoLanguage* /*none*/ pango_language_get_default ();
// ::PangoLanguage* /*none*/ pango_language_get_default ();
Pango::Language_Ref base::LanguageBase::get_default () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoLanguage** /*none,nullable*/ pango_language_get_preferred ();
// ::PangoLanguage** /*none,nullable*/ pango_language_get_preferred ();
gi::Collection<gi::ZTSpan, ::PangoLanguage*, gi::transfer_none_t> base::LanguageBase::get_preferred () noexcept
{
  typedef ::PangoLanguage** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_language_get_preferred;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap_to<gi::Collection<gi::ZTSpan, ::PangoLanguage*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/language_extra_def_impl.hpp>)
#include <pango/language_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/language_extra_impl.hpp>)
#include <pango/language_extra_impl.hpp>
#endif
#endif

#endif
