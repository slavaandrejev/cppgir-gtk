// AUTO-GENERATED

#ifndef _GI_PANGO_SCRIPTITER_HPP_
#define _GI_PANGO_SCRIPTITER_HPP_


namespace gi {

namespace repository {

namespace Pango {

class ScriptIter_Ref;

class ScriptIter;

namespace base {


#define GI_PANGO_SCRIPTITER_BASE base::ScriptIterBase
class ScriptIterBase : public gi::detail::GBoxedWrapperBase<ScriptIterBase, ::PangoScriptIter>
{
typedef gi::detail::GBoxedWrapperBase<ScriptIterBase, ::PangoScriptIter> super_type;
public:

ScriptIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_script_iter_get_type(); } 

// PangoScriptIter* /*full*/ pango_script_iter_new (const char* text /*none*/, int length);
// ::PangoScriptIter* /*full*/ pango_script_iter_new (const char* text /*none*/, gint length);
static GI_INLINE_DECL Pango::ScriptIter new_ (const gi::cstring_v text, gint length) noexcept;

// void pango_script_iter_free (PangoScriptIter* iter /*none*/);
// void pango_script_iter_free (::PangoScriptIter* iter /*none*/);
// IGNORE; marked ignore

// void pango_script_iter_get_range (PangoScriptIter* iter /*none*/, const char** start /*full,out,opt*/, const char** end /*full,out,opt*/, PangoScript* script);
// void pango_script_iter_get_range (::PangoScriptIter* iter /*none*/, const char** start /*full,out,opt*/, const char** end /*full,out,opt*/, ::PangoScript* script);
GI_INLINE_DECL void get_range (gi::cstring * start, gi::cstring * end, Pango::Script * script) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gi::cstring, Pango::Script> get_range () noexcept;

// gboolean pango_script_iter_next (PangoScriptIter* iter /*none*/);
// gboolean pango_script_iter_next (::PangoScriptIter* iter /*none*/);
GI_INLINE_DECL bool next () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra_def.hpp>)
#include <pango/scriptiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra.hpp>)
#include <pango/scriptiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class ScriptIter_Ref;

class ScriptIter : public gi::detail::GBoxedWrapper<ScriptIter, ::PangoScriptIter, GI_PANGO_SCRIPTITER_BASE, ScriptIter_Ref>
{ typedef gi::detail::GBoxedWrapper<ScriptIter, ::PangoScriptIter, GI_PANGO_SCRIPTITER_BASE, ScriptIter_Ref> super_type; using super_type::super_type; };


class ScriptIter_Ref : public gi::detail::GBoxedRefWrapper<ScriptIter, ::PangoScriptIter, GI_PANGO_SCRIPTITER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ScriptIter, ::PangoScriptIter, GI_PANGO_SCRIPTITER_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoScriptIter>
{ typedef Pango::ScriptIter type; }; 

} // namespace repository

} // namespace gi

#endif
