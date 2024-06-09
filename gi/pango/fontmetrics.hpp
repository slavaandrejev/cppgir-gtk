// AUTO-GENERATED

#ifndef _GI_PANGO_FONTMETRICS_HPP_
#define _GI_PANGO_FONTMETRICS_HPP_


namespace gi {

namespace repository {

namespace Pango {

class FontMetrics_Ref;

class FontMetrics;

namespace base {


#define GI_PANGO_FONTMETRICS_BASE base::FontMetricsBase
class FontMetricsBase : public gi::detail::GBoxedWrapperBase<FontMetricsBase, ::PangoFontMetrics>
{
typedef gi::detail::GBoxedWrapperBase<FontMetricsBase, ::PangoFontMetrics> super_type;
public:

FontMetricsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_font_metrics_get_type(); } 

// int pango_font_metrics_get_approximate_char_width (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_approximate_char_width (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_approximate_char_width () noexcept;

// int pango_font_metrics_get_approximate_digit_width (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_approximate_digit_width (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_approximate_digit_width () noexcept;

// int pango_font_metrics_get_ascent (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_ascent (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_ascent () noexcept;

// int pango_font_metrics_get_descent (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_descent (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_descent () noexcept;

// int pango_font_metrics_get_height (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_height (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// int pango_font_metrics_get_strikethrough_position (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_strikethrough_position (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_strikethrough_position () noexcept;

// int pango_font_metrics_get_strikethrough_thickness (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_strikethrough_thickness (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_strikethrough_thickness () noexcept;

// int pango_font_metrics_get_underline_position (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_underline_position (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_underline_position () noexcept;

// int pango_font_metrics_get_underline_thickness (PangoFontMetrics* metrics /*none*/);
// gint pango_font_metrics_get_underline_thickness (::PangoFontMetrics* metrics /*none*/);
GI_INLINE_DECL gint get_underline_thickness () noexcept;

// PangoFontMetrics* /*full,nullable*/ pango_font_metrics_ref (PangoFontMetrics* metrics /*none,nullable*/);
// ::PangoFontMetrics* /*full,nullable*/ pango_font_metrics_ref (::PangoFontMetrics* metrics /*none,nullable*/);
// IGNORE; marked ignore

// void pango_font_metrics_unref (PangoFontMetrics* metrics /*none,nullable*/);
// void pango_font_metrics_unref (::PangoFontMetrics* metrics /*none,nullable*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontmetrics_extra_def.hpp>)
#include <pango/fontmetrics_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontmetrics_extra.hpp>)
#include <pango/fontmetrics_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontMetrics_Ref;

class FontMetrics : public gi::detail::GBoxedWrapper<FontMetrics, ::PangoFontMetrics, GI_PANGO_FONTMETRICS_BASE, FontMetrics_Ref>
{ typedef gi::detail::GBoxedWrapper<FontMetrics, ::PangoFontMetrics, GI_PANGO_FONTMETRICS_BASE, FontMetrics_Ref> super_type; using super_type::super_type; };


class FontMetrics_Ref : public gi::detail::GBoxedRefWrapper<FontMetrics, ::PangoFontMetrics, GI_PANGO_FONTMETRICS_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FontMetrics, ::PangoFontMetrics, GI_PANGO_FONTMETRICS_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontMetrics>
{ typedef Pango::FontMetrics type; }; 

} // namespace repository

} // namespace gi

#endif
