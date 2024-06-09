// AUTO-GENERATED

#ifndef _GI_GLIB_OPTIONGROUP_HPP_
#define _GI_GLIB_OPTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace GLib {

class OptionEntry;
class OptionEntry_Ref;
class OptionGroup_Ref;

class OptionGroup;

namespace base {


#define GI_GLIB_OPTIONGROUP_BASE base::OptionGroupBase
class OptionGroupBase : public gi::detail::GBoxedWrapperBase<OptionGroupBase, ::GOptionGroup>
{
typedef gi::detail::GBoxedWrapperBase<OptionGroupBase, ::GOptionGroup> super_type;
public:

OptionGroupBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_option_group_get_type(); } 

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
GI_INLINE_DECL void set_translate_func (GLib::TranslateFunc func) noexcept;

// void g_option_group_set_translation_domain (GOptionGroup* group /*none*/, const gchar* domain /*none*/);
// void g_option_group_set_translation_domain (::GOptionGroup* group /*none*/, const char* domain /*none*/);
GI_INLINE_DECL void set_translation_domain (const gi::cstring_v domain) noexcept;

// void g_option_group_unref (GOptionGroup* group /*none*/);
// void g_option_group_unref (::GOptionGroup* group /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra_def.hpp>)
#include <glib/optiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/optiongroup_extra.hpp>)
#include <glib/optiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class OptionGroup_Ref;

class OptionGroup : public gi::detail::GBoxedWrapper<OptionGroup, ::GOptionGroup, GI_GLIB_OPTIONGROUP_BASE, OptionGroup_Ref>
{ typedef gi::detail::GBoxedWrapper<OptionGroup, ::GOptionGroup, GI_GLIB_OPTIONGROUP_BASE, OptionGroup_Ref> super_type; using super_type::super_type; };


class OptionGroup_Ref : public gi::detail::GBoxedRefWrapper<OptionGroup, ::GOptionGroup, GI_GLIB_OPTIONGROUP_BASE>
{ typedef gi::detail::GBoxedRefWrapper<OptionGroup, ::GOptionGroup, GI_GLIB_OPTIONGROUP_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GOptionGroup>
{ typedef GLib::OptionGroup type; }; 

} // namespace repository

} // namespace gi

#endif
