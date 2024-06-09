// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUTLINE_IMPL_HPP_
#define _GI_PANGO_LAYOUTLINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoLayout* _field_layout_get (const ::PangoLayoutLine* obj) { return (::PangoLayout*) obj->layout; }
// ::PangoLayout* /*none*/ LayoutLine::layout (const ::PangoLayoutLine* obj /*none*/);
// ::PangoLayout* /*none*/ LayoutLine::layout (const ::PangoLayoutLine* obj /*none*/);
Pango::Layout base::LayoutLineBase::layout_ () const noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (const ::PangoLayoutLine* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_layout_get;
  auto _temp_ret = call_wrap_v ((const ::PangoLayoutLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static gint _field_start_index_get (const ::PangoLayoutLine* obj) { return (gint) obj->start_index; }
// gint LayoutLine::start_index (const ::PangoLayoutLine* obj /*none*/);
// gint LayoutLine::start_index (const ::PangoLayoutLine* obj /*none*/);
gint base::LayoutLineBase::start_index_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoLayoutLine* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

static void _field_start_index_set (::PangoLayoutLine* obj, gint _value) { obj->start_index = (decltype(obj->start_index)) _value; }
//  LayoutLine::start_index (::PangoLayoutLine* obj /*none*/, gint _value);
// void LayoutLine::start_index (::PangoLayoutLine* obj /*none*/, gint _value);
void base::LayoutLineBase::start_index_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_length_get (const ::PangoLayoutLine* obj) { return (gint) obj->length; }
// gint LayoutLine::length (const ::PangoLayoutLine* obj /*none*/);
// gint LayoutLine::length (const ::PangoLayoutLine* obj /*none*/);
gint base::LayoutLineBase::length_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoLayoutLine* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::PangoLayoutLine* obj, gint _value) { obj->length = (decltype(obj->length)) _value; }
//  LayoutLine::length (::PangoLayoutLine* obj /*none*/, gint _value);
// void LayoutLine::length (::PangoLayoutLine* obj /*none*/, gint _value);
void base::LayoutLineBase::length_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (_value_to_c));
}

static guint _field_is_paragraph_start_get (const ::PangoLayoutLine* obj) { return (guint) obj->is_paragraph_start; }
// guint LayoutLine::is_paragraph_start (const ::PangoLayoutLine* obj /*none*/);
// guint LayoutLine::is_paragraph_start (const ::PangoLayoutLine* obj /*none*/);
guint base::LayoutLineBase::is_paragraph_start_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoLayoutLine* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_paragraph_start_get;
  auto _temp_ret = call_wrap_v ((const ::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

static void _field_is_paragraph_start_set (::PangoLayoutLine* obj, guint _value) { obj->is_paragraph_start = (decltype(obj->is_paragraph_start)) _value; }
//  LayoutLine::is_paragraph_start (::PangoLayoutLine* obj /*none*/, guint _value);
// void LayoutLine::is_paragraph_start (::PangoLayoutLine* obj /*none*/, guint _value);
void base::LayoutLineBase::is_paragraph_start_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_paragraph_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_resolved_dir_get (const ::PangoLayoutLine* obj) { return (guint) obj->resolved_dir; }
// guint LayoutLine::resolved_dir (const ::PangoLayoutLine* obj /*none*/);
// guint LayoutLine::resolved_dir (const ::PangoLayoutLine* obj /*none*/);
guint base::LayoutLineBase::resolved_dir_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoLayoutLine* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_resolved_dir_get;
  auto _temp_ret = call_wrap_v ((const ::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

static void _field_resolved_dir_set (::PangoLayoutLine* obj, guint _value) { obj->resolved_dir = (decltype(obj->resolved_dir)) _value; }
//  LayoutLine::resolved_dir (::PangoLayoutLine* obj /*none*/, guint _value);
// void LayoutLine::resolved_dir (::PangoLayoutLine* obj /*none*/, guint _value);
void base::LayoutLineBase::resolved_dir_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_resolved_dir_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (guint) (_value_to_c));
}

// void pango_layout_line_get_extents (PangoLayoutLine* line /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_line_get_extents (::PangoLayoutLine* line /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutLineBase::get_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutLineBase::get_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_layout_line_get_height (PangoLayoutLine* line /*none*/, int* height);
// void pango_layout_line_get_height (::PangoLayoutLine* line /*none*/, gint* height);
void base::LayoutLineBase::get_height (gint * height) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_height;
  gint height_o {};
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
}
gint base::LayoutLineBase::get_height () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_height;
  gint height_o {};
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint*) (&height_o));
  return height_o;
}

// int pango_layout_line_get_length (PangoLayoutLine* line /*none*/);
// gint pango_layout_line_get_length (::PangoLayoutLine* line /*none*/);
gint base::LayoutLineBase::get_length () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutLine* line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_length;
  auto _temp_ret = call_wrap_v ((::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_line_get_pixel_extents (PangoLayoutLine* layout_line /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_line_get_pixel_extents (::PangoLayoutLine* layout_line /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutLineBase::get_pixel_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* layout_line, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_pixel_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutLineBase::get_pixel_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* layout_line, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_pixel_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoDirection pango_layout_line_get_resolved_direction (PangoLayoutLine* line /*none*/);
// ::PangoDirection pango_layout_line_get_resolved_direction (::PangoLayoutLine* line /*none*/);
Pango::Direction base::LayoutLineBase::get_resolved_direction () noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (::PangoLayoutLine* line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_resolved_direction;
  auto _temp_ret = call_wrap_v ((::PangoLayoutLine*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int pango_layout_line_get_start_index (PangoLayoutLine* line /*none*/);
// gint pango_layout_line_get_start_index (::PangoLayoutLine* line /*none*/);
gint base::LayoutLineBase::get_start_index () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutLine* line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_start_index;
  auto _temp_ret = call_wrap_v ((::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_line_get_x_ranges (PangoLayoutLine* line /*none*/, int start_index, int end_index, int** ranges /*full,out*/, int* n_ranges);
// void pango_layout_line_get_x_ranges (::PangoLayoutLine* line /*none*/, gint start_index, gint end_index, gint** ranges /*full,out*/, gint* n_ranges);
void base::LayoutLineBase::get_x_ranges (gint start_index, gint end_index, gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & ranges) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, gint start_index, gint end_index, gint** ranges, gint* n_ranges);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_x_ranges;
  typedef gint ranges_cpptype;
  typedef traits::ctype<ranges_cpptype>::type ranges_ctype;
  ranges_ctype *ranges_o;
  gint n_ranges;
  auto end_index_to_c = end_index;
  auto start_index_to_c = start_index;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (start_index_to_c), (gint) (end_index_to_c), (gint**) ((gint**) &ranges_o), (gint*) (&n_ranges));
  ranges = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(ranges_o, n_ranges, gi::transfer_full);
}
gi::Collection<gi::DSpan, gint, gi::transfer_full_t> base::LayoutLineBase::get_x_ranges (gint start_index, gint end_index) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, gint start_index, gint end_index, gint** ranges, gint* n_ranges);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_get_x_ranges;
  typedef gint ranges_cpptype;
  typedef traits::ctype<ranges_cpptype>::type ranges_ctype;
  ranges_ctype *ranges_o;
  gint n_ranges;
  auto end_index_to_c = end_index;
  auto start_index_to_c = start_index;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (start_index_to_c), (gint) (end_index_to_c), (gint**) ((gint**) &ranges_o), (gint*) (&n_ranges));
  gi::Collection<gi::DSpan, gint, gi::transfer_full_t> ranges;
  ranges = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(ranges_o, n_ranges, gi::transfer_full);
  return ranges;
}

// void pango_layout_line_index_to_x (PangoLayoutLine* line /*none*/, int index_, gboolean trailing, int* x_pos);
// void pango_layout_line_index_to_x (::PangoLayoutLine* line /*none*/, gint index_, gboolean trailing, gint* x_pos);
void base::LayoutLineBase::index_to_x (gint index_, gboolean trailing, gint & x_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_index_to_x;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  x_pos = x_pos_o;
}
gint base::LayoutLineBase::index_to_x (gint index_, gboolean trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutLine* line, gint index_, gboolean trailing, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_index_to_x;
  gint x_pos_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&x_pos_o));
  return x_pos_o;
}

// gboolean pango_layout_line_is_paragraph_start (PangoLayoutLine* line /*none*/);
// gboolean pango_layout_line_is_paragraph_start (::PangoLayoutLine* line /*none*/);
bool base::LayoutLineBase::is_paragraph_start () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutLine* line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_is_paragraph_start;
  auto _temp_ret = call_wrap_v ((::PangoLayoutLine*) (gobj_()));
  return _temp_ret;
}

// PangoLayoutLine* /*full,nullable*/ pango_layout_line_ref (PangoLayoutLine* line /*none,nullable*/);
// ::PangoLayoutLine* /*full,nullable*/ pango_layout_line_ref (::PangoLayoutLine* line /*none,nullable*/);
// IGNORE; marked ignore

// void pango_layout_line_unref (PangoLayoutLine* line /*none*/);
// void pango_layout_line_unref (::PangoLayoutLine* line /*none*/);
// IGNORE; marked ignore

// gboolean pango_layout_line_x_to_index (PangoLayoutLine* line /*none*/, int x_pos, int* index_, int* trailing);
// gboolean pango_layout_line_x_to_index (::PangoLayoutLine* line /*none*/, gint x_pos, gint* index_, gint* trailing);
bool base::LayoutLineBase::x_to_index (gint x_pos, gint & index_, gint & trailing) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutLine* line, gint x_pos, gint* index_, gint* trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_x_to_index;
  gint trailing_o {};
  gint index__o {};
  auto x_pos_to_c = x_pos;
  auto _temp_ret = call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (x_pos_to_c), (gint*) (&index__o), (gint*) (&trailing_o));
  trailing = trailing_o;
  index_ = index__o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::LayoutLineBase::x_to_index (gint x_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutLine* line, gint x_pos, gint* index_, gint* trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_line_x_to_index;
  gint trailing_o {};
  gint index__o {};
  auto x_pos_to_c = x_pos;
  auto _temp_ret = call_wrap_v ((::PangoLayoutLine*) (gobj_()), (gint) (x_pos_to_c), (gint*) (&index__o), (gint*) (&trailing_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = index__o;
  auto &&tmp_return_3 = trailing_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layoutline_extra_def_impl.hpp>)
#include <pango/layoutline_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layoutline_extra_impl.hpp>)
#include <pango/layoutline_extra_impl.hpp>
#endif
#endif

#endif
