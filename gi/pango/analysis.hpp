// AUTO-GENERATED

#ifndef _GI_PANGO_ANALYSIS_HPP_
#define _GI_PANGO_ANALYSIS_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Analysis_Ref;
class Font;
class Language;
class Language_Ref;

class Analysis;

namespace base {


#define GI_PANGO_ANALYSIS_BASE base::AnalysisBase
class AnalysisBase : public gi::detail::CBoxedWrapperBase<AnalysisBase, ::PangoAnalysis>
{
typedef gi::detail::CBoxedWrapperBase<AnalysisBase, ::PangoAnalysis> super_type;
public:

AnalysisBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoFont* /*none*/ Analysis::font (const ::PangoAnalysis* obj /*none*/);
// ::PangoFont* /*none*/ Analysis::font (const ::PangoAnalysis* obj /*none*/);
GI_INLINE_DECL Pango::Font font_ () const noexcept;

// guint8 Analysis::level (const ::PangoAnalysis* obj /*none*/);
// guint8 Analysis::level (const ::PangoAnalysis* obj /*none*/);
GI_INLINE_DECL guint8 level_ () const noexcept;

//  Analysis::level (::PangoAnalysis* obj /*none*/, guint8 _value);
// void Analysis::level (::PangoAnalysis* obj /*none*/, guint8 _value);
GI_INLINE_DECL void level_ (guint8 _value) noexcept;

// guint8 Analysis::gravity (const ::PangoAnalysis* obj /*none*/);
// guint8 Analysis::gravity (const ::PangoAnalysis* obj /*none*/);
GI_INLINE_DECL guint8 gravity_ () const noexcept;

//  Analysis::gravity (::PangoAnalysis* obj /*none*/, guint8 _value);
// void Analysis::gravity (::PangoAnalysis* obj /*none*/, guint8 _value);
GI_INLINE_DECL void gravity_ (guint8 _value) noexcept;

// guint8 Analysis::flags (const ::PangoAnalysis* obj /*none*/);
// guint8 Analysis::flags (const ::PangoAnalysis* obj /*none*/);
GI_INLINE_DECL guint8 flags_ () const noexcept;

//  Analysis::flags (::PangoAnalysis* obj /*none*/, guint8 _value);
// void Analysis::flags (::PangoAnalysis* obj /*none*/, guint8 _value);
GI_INLINE_DECL void flags_ (guint8 _value) noexcept;

// guint8 Analysis::script (const ::PangoAnalysis* obj /*none*/);
// guint8 Analysis::script (const ::PangoAnalysis* obj /*none*/);
GI_INLINE_DECL guint8 script_ () const noexcept;

//  Analysis::script (::PangoAnalysis* obj /*none*/, guint8 _value);
// void Analysis::script (::PangoAnalysis* obj /*none*/, guint8 _value);
GI_INLINE_DECL void script_ (guint8 _value) noexcept;

// ::PangoLanguage* /*none*/ Analysis::language (const ::PangoAnalysis* obj /*none*/);
// ::PangoLanguage* /*none*/ Analysis::language (const ::PangoAnalysis* obj /*none*/);
GI_INLINE_DECL Pango::Language_Ref language_ () const noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/analysis_extra_def.hpp>)
#include <pango/analysis_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/analysis_extra.hpp>)
#include <pango/analysis_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Analysis_Ref;

class Analysis : public gi::detail::CBoxedWrapper<Analysis, ::PangoAnalysis, GI_PANGO_ANALYSIS_BASE, Analysis_Ref>
{ typedef gi::detail::CBoxedWrapper<Analysis, ::PangoAnalysis, GI_PANGO_ANALYSIS_BASE, Analysis_Ref> super_type; using super_type::super_type; };


class Analysis_Ref : public gi::detail::CBoxedRefWrapper<Analysis, ::PangoAnalysis, GI_PANGO_ANALYSIS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Analysis, ::PangoAnalysis, GI_PANGO_ANALYSIS_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAnalysis>
{ typedef Pango::Analysis type; }; 

} // namespace repository

} // namespace gi

#endif
