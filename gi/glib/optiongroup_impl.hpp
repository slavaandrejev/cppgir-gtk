// AUTO-GENERATED

#ifndef _GI_GLIB_OPTIONGROUP_IMPL_HPP_
#define _GI_GLIB_OPTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GOptionGroup* /*full*/ g_option_group_new (const gchar* name /*none*/, const gchar* description /*none*/, const gchar* help_description /*none*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// ::GOptionGroup* /*full*/ g_option_group_new (const char* name /*none*/, const char* description /*none*/, const char* help_description /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info

// void g_option_group_add_entries (GOptionGroup* group /*none*/, const GOptionEntry* entries /*none*/);
// void g_option_group_add_entries (::GOptionGroup* group /*none*/, const ::GOptionEntry** entries /*none*/);
// SKIP; entries in boxed array not supported (depth 1)

// void g_option_group_free (GOptionGroup* group /*none*/);
// void g_option_group_free (::GOptionGroup* group /*none*/);
// IGNORE; marked ignore

// GOptionGroup* /*full*/ g_option_group_ref (GOptionGroup* group /*none*/);
// ::GOptionGroup* /*full*/ g_option_group_ref (::GOptionGroup* group /*none*/);
// IGNORE; marked ignore

// void g_option_group_set_error_hook (GOptionGroup* group /*none*/, GOptionErrorFunc error_func /*none*/);
// void g_option_group_set_error_hook (::GOptionGroup* group /*none*/,  error_func /*none*/);
// IGNORE; not introspectable, error_func type  not supported

// void g_option_group_set_parse_hooks (GOptionGroup* group /*none*/, GOptionParseFunc pre_parse_func /*none,nullable*/, GOptionParseFunc post_parse_func /*none,nullable*/);
// void g_option_group_set_parse_hooks (::GOptionGroup* group /*none*/,  pre_parse_func /*none,nullable*/,  post_parse_func /*none,nullable*/);
// IGNORE; not introspectable, post_parse_func type  not supported, pre_parse_func type  not supported

// void g_option_group_set_translate_func (GOptionGroup* group /*none*/, GTranslateFunc func /*none,nullable*/, gpointer data, GDestroyNotify destroy_notify /*none,nullable*/);
// void g_option_group_set_translate_func (::GOptionGroup* group /*none*/, GLib::TranslateFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy_notify /*none,nullable*/);
void base::OptionGroupBase::set_translate_func (GLib::TranslateFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GOptionGroup* group, GLib::TranslateFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_option_group_set_translate_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GOptionGroup*) (gobj_()), (GLib::TranslateFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void g_option_group_set_translation_domain (GOptionGroup* group /*none*/, const gchar* domain /*none*/);
// void g_option_group_set_translation_domain (::GOptionGroup* group /*none*/, const char* domain /*none*/);
void base::OptionGroupBase::set_translation_domain (const gi::cstring_v domain) noexcept
{
  typedef void (*call_wrap_t) (::GOptionGroup* group, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_option_group_set_translation_domain;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((::GOptionGroup*) (gobj_()), (const char*) (domain_to_c));
}

// void g_option_group_unref (GOptionGroup* group /*none*/);
// void g_option_group_unref (::GOptionGroup* group /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra_def_impl.hpp>)
#include <glib/optiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra_impl.hpp>)
#include <glib/optiongroup_extra_impl.hpp>
#endif
#endif

#endif
