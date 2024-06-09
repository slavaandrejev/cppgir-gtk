// AUTO-GENERATED

#ifndef _GI_PANGO_SCRIPTITER_IMPL_HPP_
#define _GI_PANGO_SCRIPTITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoScriptIter* /*full*/ pango_script_iter_new (const char* text /*none*/, int length);
// ::PangoScriptIter* /*full*/ pango_script_iter_new (const char* text /*none*/, gint length);
Pango::ScriptIter base::ScriptIterBase::new_ (const gi::cstring_v text, gint length) noexcept
{
  typedef ::PangoScriptIter* (*call_wrap_t) (const char* text, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_script_iter_new;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_script_iter_free (PangoScriptIter* iter /*none*/);
// void pango_script_iter_free (::PangoScriptIter* iter /*none*/);
// IGNORE; marked ignore

// void pango_script_iter_get_range (PangoScriptIter* iter /*none*/, const char** start /*full,out,opt*/, const char** end /*full,out,opt*/, PangoScript* script);
// void pango_script_iter_get_range (::PangoScriptIter* iter /*none*/, const char** start /*full,out,opt*/, const char** end /*full,out,opt*/, ::PangoScript* script);
void base::ScriptIterBase::get_range (gi::cstring * start, gi::cstring * end, Pango::Script * script) noexcept
{
  typedef void (*call_wrap_t) (::PangoScriptIter* iter, const char** start, const char** end, ::PangoScript* script);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_script_iter_get_range;
  ::PangoScript script_o {};
  const char* end_o {};
  const char* start_o {};
  call_wrap_v ((::PangoScriptIter*) (gobj_()), (const char**) (start ? &start_o : nullptr), (const char**) (end ? &end_o : nullptr), (::PangoScript*) (script ? &script_o : nullptr));
  if (script) *script = gi::wrap (script_o);
  if (end) *end = gi::wrap (end_o, gi::transfer_full);
  if (start) *start = gi::wrap (start_o, gi::transfer_full);
}
std::tuple<gi::cstring, gi::cstring, Pango::Script> base::ScriptIterBase::get_range () noexcept
{
  typedef void (*call_wrap_t) (::PangoScriptIter* iter, const char** start, const char** end, ::PangoScript* script);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_script_iter_get_range;
  ::PangoScript script_o {};
  const char* end_o {};
  const char* start_o {};
  call_wrap_v ((::PangoScriptIter*) (gobj_()), (const char**) (&start_o), (const char**) (&end_o), (::PangoScript*) (&script_o));
  auto &&tmp_return_1 = gi::wrap (start_o, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (end_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (script_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean pango_script_iter_next (PangoScriptIter* iter /*none*/);
// gboolean pango_script_iter_next (::PangoScriptIter* iter /*none*/);
bool base::ScriptIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoScriptIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_script_iter_next;
  auto _temp_ret = call_wrap_v ((::PangoScriptIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra_def_impl.hpp>)
#include <pango/scriptiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra_impl.hpp>)
#include <pango/scriptiter_extra_impl.hpp>
#endif
#endif

#endif
