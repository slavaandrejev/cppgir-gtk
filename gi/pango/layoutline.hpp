// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUTLINE_HPP_
#define _GI_PANGO_LAYOUTLINE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Layout;
class LayoutLine_Ref;
class Rectangle;
class Rectangle_Ref;

class LayoutLine;

namespace base {


#define GI_PANGO_LAYOUTLINE_BASE base::LayoutLineBase
class LayoutLineBase : public gi::detail::GBoxedWrapperBase<LayoutLineBase, ::PangoLayoutLine>
{
typedef gi::detail::GBoxedWrapperBase<LayoutLineBase, ::PangoLayoutLine> super_type;
public:

LayoutLineBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_layout_line_get_type(); } 

// ::PangoLayout* /*none*/ LayoutLine::layout (const ::PangoLayoutLine* obj /*none*/);
// ::PangoLayout* /*none*/ LayoutLine::layout (const ::PangoLayoutLine* obj /*none*/);
GI_INLINE_DECL Pango::Layout layout_ () const noexcept;

// gint LayoutLine::start_index (const ::PangoLayoutLine* obj /*none*/);
// gint LayoutLine::start_index (const ::PangoLayoutLine* obj /*none*/);
GI_INLINE_DECL gint start_index_ () const noexcept;

//  LayoutLine::start_index (::PangoLayoutLine* obj /*none*/, gint _value);
// void LayoutLine::start_index (::PangoLayoutLine* obj /*none*/, gint _value);
GI_INLINE_DECL void start_index_ (gint _value) noexcept;

// gint LayoutLine::length (const ::PangoLayoutLine* obj /*none*/);
// gint LayoutLine::length (const ::PangoLayoutLine* obj /*none*/);
GI_INLINE_DECL gint length_ () const noexcept;

//  LayoutLine::length (::PangoLayoutLine* obj /*none*/, gint _value);
// void LayoutLine::length (::PangoLayoutLine* obj /*none*/, gint _value);
GI_INLINE_DECL void length_ (gint _value) noexcept;

// guint LayoutLine::is_paragraph_start (const ::PangoLayoutLine* obj /*none*/);
// guint LayoutLine::is_paragraph_start (const ::PangoLayoutLine* obj /*none*/);
GI_INLINE_DECL guint is_paragraph_start_ () const noexcept;

//  LayoutLine::is_paragraph_start (::PangoLayoutLine* obj /*none*/, guint _value);
// void LayoutLine::is_paragraph_start (::PangoLayoutLine* obj /*none*/, guint _value);
GI_INLINE_DECL void is_paragraph_start_ (guint _value) noexcept;

// guint LayoutLine::resolved_dir (const ::PangoLayoutLine* obj /*none*/);
// guint LayoutLine::resolved_dir (const ::PangoLayoutLine* obj /*none*/);
GI_INLINE_DECL guint resolved_dir_ () const noexcept;

//  LayoutLine::resolved_dir (::PangoLayoutLine* obj /*none*/, guint _value);
// void LayoutLine::resolved_dir (::PangoLayoutLine* obj /*none*/, guint _value);
GI_INLINE_DECL void resolved_dir_ (guint _value) noexcept;

// void pango_layout_line_get_extents (PangoLayoutLine* line /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_line_get_extents (::PangoLayoutLine* line /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void get_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_extents () noexcept;

// void pango_layout_line_get_height (PangoLayoutLine* line /*none*/, int* height);
// void pango_layout_line_get_height (::PangoLayoutLine* line /*none*/, gint* height);
GI_INLINE_DECL void get_height (gint * height) noexcept;
GI_INLINE_DECL gint get_height () noexcept;

// int pango_layout_line_get_length (PangoLayoutLine* line /*none*/);
// gint pango_layout_line_get_length (::PangoLayoutLine* line /*none*/);
GI_INLINE_DECL gint get_length () noexcept;

// void pango_layout_line_get_pixel_extents (PangoLayoutLine* layout_line /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_line_get_pixel_extents (::PangoLayoutLine* layout_line /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void get_pixel_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_pixel_extents () noexcept;

// PangoDirection pango_layout_line_get_resolved_direction (PangoLayoutLine* line /*none*/);
// ::PangoDirection pango_layout_line_get_resolved_direction (::PangoLayoutLine* line /*none*/);
GI_INLINE_DECL Pango::Direction get_resolved_direction () noexcept;

// int pango_layout_line_get_start_index (PangoLayoutLine* line /*none*/);
// gint pango_layout_line_get_start_index (::PangoLayoutLine* line /*none*/);
GI_INLINE_DECL gint get_start_index () noexcept;

// void pango_layout_line_get_x_ranges (PangoLayoutLine* line /*none*/, int start_index, int end_index, int** ranges /*full,out*/, int* n_ranges);
// void pango_layout_line_get_x_ranges (::PangoLayoutLine* line /*none*/, gint start_index, gint end_index, gint** ranges /*full,out*/, gint* n_ranges);
GI_INLINE_DECL void get_x_ranges (gint start_index, gint end_index, gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & ranges) noexcept;
GI_INLINE_DECL gi::Collection<gi::DSpan, gint, gi::transfer_full_t> get_x_ranges (gint start_index, gint end_index) noexcept;

// void pango_layout_line_index_to_x (PangoLayoutLine* line /*none*/, int index_, gboolean trailing, int* x_pos);
// void pango_layout_line_index_to_x (::PangoLayoutLine* line /*none*/, gint index_, gboolean trailing, gint* x_pos);
GI_INLINE_DECL void index_to_x (gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL gint index_to_x (gint index_, gboolean trailing) noexcept;

// gboolean pango_layout_line_is_paragraph_start (PangoLayoutLine* line /*none*/);
// gboolean pango_layout_line_is_paragraph_start (::PangoLayoutLine* line /*none*/);
GI_INLINE_DECL bool is_paragraph_start () noexcept;

// PangoLayoutLine* /*full,nullable*/ pango_layout_line_ref (PangoLayoutLine* line /*none,nullable*/);
// ::PangoLayoutLine* /*full,nullable*/ pango_layout_line_ref (::PangoLayoutLine* line /*none,nullable*/);
// IGNORE; marked ignore

// void pango_layout_line_unref (PangoLayoutLine* line /*none*/);
// void pango_layout_line_unref (::PangoLayoutLine* line /*none*/);
// IGNORE; marked ignore

// gboolean pango_layout_line_x_to_index (PangoLayoutLine* line /*none*/, int x_pos, int* index_, int* trailing);
// gboolean pango_layout_line_x_to_index (::PangoLayoutLine* line /*none*/, gint x_pos, gint* index_, gint* trailing);
GI_INLINE_DECL bool x_to_index (gint x_pos, gint & index_, gint & trailing) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> x_to_index (gint x_pos) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layoutline_extra_def.hpp>)
#include <pango/layoutline_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layoutline_extra.hpp>)
#include <pango/layoutline_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class LayoutLine_Ref;

class LayoutLine : public gi::detail::GBoxedWrapper<LayoutLine, ::PangoLayoutLine, GI_PANGO_LAYOUTLINE_BASE, LayoutLine_Ref>
{ typedef gi::detail::GBoxedWrapper<LayoutLine, ::PangoLayoutLine, GI_PANGO_LAYOUTLINE_BASE, LayoutLine_Ref> super_type; using super_type::super_type; };


class LayoutLine_Ref : public gi::detail::GBoxedRefWrapper<LayoutLine, ::PangoLayoutLine, GI_PANGO_LAYOUTLINE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<LayoutLine, ::PangoLayoutLine, GI_PANGO_LAYOUTLINE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoLayoutLine>
{ typedef Pango::LayoutLine type; }; 

} // namespace repository

} // namespace gi

#endif
