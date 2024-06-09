// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUTITER_IMPL_HPP_
#define _GI_PANGO_LAYOUTITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// gboolean pango_layout_iter_at_last_line (PangoLayoutIter* iter /*none*/);
// gboolean pango_layout_iter_at_last_line (::PangoLayoutIter* iter /*none*/);
bool base::LayoutIterBase::at_last_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_at_last_line;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// PangoLayoutIter* /*full,nullable*/ pango_layout_iter_copy (PangoLayoutIter* iter /*none,nullable*/);
// ::PangoLayoutIter* /*full,nullable*/ pango_layout_iter_copy (::PangoLayoutIter* iter /*none,nullable*/);
Pango::LayoutIter base::LayoutIterBase::copy () noexcept
{
  typedef ::PangoLayoutIter* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_copy;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_layout_iter_free (PangoLayoutIter* iter /*none,nullable*/);
// void pango_layout_iter_free (::PangoLayoutIter* iter /*none,nullable*/);
// IGNORE; marked ignore

// int pango_layout_iter_get_baseline (PangoLayoutIter* iter /*none*/);
// gint pango_layout_iter_get_baseline (::PangoLayoutIter* iter /*none*/);
gint base::LayoutIterBase::get_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_baseline;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_iter_get_char_extents (PangoLayoutIter* iter /*none*/, PangoRectangle* logical_rect /*none,out,ca*/);
// void pango_layout_iter_get_char_extents (::PangoLayoutIter* iter /*none*/, ::PangoRectangle* logical_rect /*none,out,ca*/);
void base::LayoutIterBase::get_char_extents (Pango::Rectangle & logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_char_extents;
  detail::allocate(logical_rect);
  static_assert(sizeof(::PangoRectangle) == sizeof(*(logical_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) (logical_rect).gobj_()));
}
Pango::Rectangle base::LayoutIterBase::get_char_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_char_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  detail::allocate(*logical_rect);
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  return logical_rect_c;
}

// void pango_layout_iter_get_cluster_extents (PangoLayoutIter* iter /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_iter_get_cluster_extents (::PangoLayoutIter* iter /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutIterBase::get_cluster_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_cluster_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_cluster_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_cluster_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// int pango_layout_iter_get_index (PangoLayoutIter* iter /*none*/);
// gint pango_layout_iter_get_index (::PangoLayoutIter* iter /*none*/);
gint base::LayoutIterBase::get_index () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_index;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// PangoLayout* /*none,nullable*/ pango_layout_iter_get_layout (PangoLayoutIter* iter /*none*/);
// ::PangoLayout* /*none,nullable*/ pango_layout_iter_get_layout (::PangoLayoutIter* iter /*none*/);
Pango::Layout base::LayoutIterBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_layout;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void pango_layout_iter_get_layout_extents (PangoLayoutIter* iter /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_iter_get_layout_extents (::PangoLayoutIter* iter /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutIterBase::get_layout_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_layout_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_layout_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_layout_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoLayoutLine* /*none,nullable*/ pango_layout_iter_get_line (PangoLayoutIter* iter /*none*/);
// ::PangoLayoutLine* /*none,nullable*/ pango_layout_iter_get_line (::PangoLayoutIter* iter /*none*/);
Pango::LayoutLine_Ref base::LayoutIterBase::get_line () noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_line;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void pango_layout_iter_get_line_extents (PangoLayoutIter* iter /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_iter_get_line_extents (::PangoLayoutIter* iter /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutIterBase::get_line_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_line_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_line_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_line_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoLayoutLine* /*none,nullable*/ pango_layout_iter_get_line_readonly (PangoLayoutIter* iter /*none*/);
// ::PangoLayoutLine* /*none,nullable*/ pango_layout_iter_get_line_readonly (::PangoLayoutIter* iter /*none*/);
Pango::LayoutLine_Ref base::LayoutIterBase::get_line_readonly () noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_line_readonly;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void pango_layout_iter_get_line_yrange (PangoLayoutIter* iter /*none*/, int* y0_, int* y1_);
// void pango_layout_iter_get_line_yrange (::PangoLayoutIter* iter /*none*/, gint* y0_, gint* y1_);
void base::LayoutIterBase::get_line_yrange (gint * y0_, gint * y1_) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, gint* y0_, gint* y1_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_line_yrange;
  gint y1__o {};
  gint y0__o {};
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (gint*) (y0_ ? &y0__o : nullptr), (gint*) (y1_ ? &y1__o : nullptr));
  if (y1_) *y1_ = y1__o;
  if (y0_) *y0_ = y0__o;
}
std::tuple<gint, gint> base::LayoutIterBase::get_line_yrange () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, gint* y0_, gint* y1_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_line_yrange;
  gint y1__o {};
  gint y0__o {};
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (gint*) (&y0__o), (gint*) (&y1__o));
  auto &&tmp_return_1 = y0__o;
  auto &&tmp_return_2 = y1__o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoLayoutRun* /*none,nullable*/ pango_layout_iter_get_run (PangoLayoutIter* iter /*none*/);
//  /*none,nullable*/ pango_layout_iter_get_run (::PangoLayoutIter* iter /*none*/);
// SKIP;  type  not supported

// int pango_layout_iter_get_run_baseline (PangoLayoutIter* iter /*none*/);
// gint pango_layout_iter_get_run_baseline (::PangoLayoutIter* iter /*none*/);
gint base::LayoutIterBase::get_run_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_run_baseline;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_iter_get_run_extents (PangoLayoutIter* iter /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_iter_get_run_extents (::PangoLayoutIter* iter /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutIterBase::get_run_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_run_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_run_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_get_run_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoLayoutRun* /*none,nullable*/ pango_layout_iter_get_run_readonly (PangoLayoutIter* iter /*none*/);
//  /*none,nullable*/ pango_layout_iter_get_run_readonly (::PangoLayoutIter* iter /*none*/);
// SKIP;  type  not supported

// gboolean pango_layout_iter_next_char (PangoLayoutIter* iter /*none*/);
// gboolean pango_layout_iter_next_char (::PangoLayoutIter* iter /*none*/);
bool base::LayoutIterBase::next_char () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_next_char;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_iter_next_cluster (PangoLayoutIter* iter /*none*/);
// gboolean pango_layout_iter_next_cluster (::PangoLayoutIter* iter /*none*/);
bool base::LayoutIterBase::next_cluster () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_next_cluster;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_iter_next_line (PangoLayoutIter* iter /*none*/);
// gboolean pango_layout_iter_next_line (::PangoLayoutIter* iter /*none*/);
bool base::LayoutIterBase::next_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_next_line;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_iter_next_run (PangoLayoutIter* iter /*none*/);
// gboolean pango_layout_iter_next_run (::PangoLayoutIter* iter /*none*/);
bool base::LayoutIterBase::next_run () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_iter_next_run;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layoutiter_extra_def_impl.hpp>)
#include <pango/layoutiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layoutiter_extra_impl.hpp>)
#include <pango/layoutiter_extra_impl.hpp>
#endif
#endif

#endif
