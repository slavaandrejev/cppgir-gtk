// AUTO-GENERATED

#ifndef _GI_GDK_POPUPLAYOUT_IMPL_HPP_
#define _GI_GDK_POPUPLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkPopupLayout* /*full*/ gdk_popup_layout_new (const GdkRectangle* anchor_rect /*none*/, GdkGravity rect_anchor, GdkGravity surface_anchor);
// ::GdkPopupLayout* /*full*/ gdk_popup_layout_new (const ::GdkRectangle* anchor_rect /*none*/, ::GdkGravity rect_anchor, ::GdkGravity surface_anchor);
Gdk::PopupLayout base::PopupLayoutBase::new_ (const Gdk::Rectangle_Ref anchor_rect, Gdk::Gravity rect_anchor, Gdk::Gravity surface_anchor) noexcept
{
  typedef ::GdkPopupLayout* (*call_wrap_t) (const ::GdkRectangle* anchor_rect, ::GdkGravity rect_anchor, ::GdkGravity surface_anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_popup_layout_new;
  auto surface_anchor_to_c = gi::unwrap (surface_anchor);
  auto rect_anchor_to_c = gi::unwrap (rect_anchor);
  auto anchor_rect_to_c = gi::unwrap (anchor_rect, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkRectangle*) (anchor_rect_to_c), (::GdkGravity) (rect_anchor_to_c), (::GdkGravity) (surface_anchor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPopupLayout* /*full*/ gdk_popup_layout_copy (GdkPopupLayout* layout /*none*/);
// ::GdkPopupLayout* /*full*/ gdk_popup_layout_copy (::GdkPopupLayout* layout /*none*/);
Gdk::PopupLayout base::PopupLayoutBase::copy () noexcept
{
  typedef ::GdkPopupLayout* (*call_wrap_t) (::GdkPopupLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_copy;
  auto _temp_ret = call_wrap_v ((::GdkPopupLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_popup_layout_equal (GdkPopupLayout* layout /*none*/, GdkPopupLayout* other /*none*/);
// gboolean gdk_popup_layout_equal (::GdkPopupLayout* layout /*none*/, ::GdkPopupLayout* other /*none*/);
bool base::PopupLayoutBase::equal (Gdk::PopupLayout_Ref other) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPopupLayout* layout, ::GdkPopupLayout* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_equal;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPopupLayout*) (gobj_()), (::GdkPopupLayout*) (other_to_c));
  return _temp_ret;
}

// GdkAnchorHints gdk_popup_layout_get_anchor_hints (GdkPopupLayout* layout /*none*/);
// ::GdkAnchorHints gdk_popup_layout_get_anchor_hints (::GdkPopupLayout* layout /*none*/);
Gdk::AnchorHints base::PopupLayoutBase::get_anchor_hints () noexcept
{
  typedef ::GdkAnchorHints (*call_wrap_t) (::GdkPopupLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_anchor_hints;
  auto _temp_ret = call_wrap_v ((::GdkPopupLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const GdkRectangle* /*none*/ gdk_popup_layout_get_anchor_rect (GdkPopupLayout* layout /*none*/);
// const ::GdkRectangle* /*none*/ gdk_popup_layout_get_anchor_rect (::GdkPopupLayout* layout /*none*/);
Gdk::Rectangle_Ref base::PopupLayoutBase::get_anchor_rect () noexcept
{
  typedef const ::GdkRectangle* (*call_wrap_t) (::GdkPopupLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_anchor_rect;
  auto _temp_ret = call_wrap_v ((::GdkPopupLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_popup_layout_get_offset (GdkPopupLayout* layout /*none*/, int* dx, int* dy);
// void gdk_popup_layout_get_offset (::GdkPopupLayout* layout /*none*/, gint* dx, gint* dy);
void base::PopupLayoutBase::get_offset (gint & dx, gint & dy) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, gint* dx, gint* dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_offset;
  gint dy_o {};
  gint dx_o {};
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (gint*) (&dx_o), (gint*) (&dy_o));
  dy = dy_o;
  dx = dx_o;
}
std::tuple<gint, gint> base::PopupLayoutBase::get_offset () noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, gint* dx, gint* dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_offset;
  gint dy_o {};
  gint dx_o {};
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (gint*) (&dx_o), (gint*) (&dy_o));
  auto &&tmp_return_1 = dx_o;
  auto &&tmp_return_2 = dy_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GdkGravity gdk_popup_layout_get_rect_anchor (GdkPopupLayout* layout /*none*/);
// ::GdkGravity gdk_popup_layout_get_rect_anchor (::GdkPopupLayout* layout /*none*/);
Gdk::Gravity base::PopupLayoutBase::get_rect_anchor () noexcept
{
  typedef ::GdkGravity (*call_wrap_t) (::GdkPopupLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_rect_anchor;
  auto _temp_ret = call_wrap_v ((::GdkPopupLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gdk_popup_layout_get_shadow_width (GdkPopupLayout* layout /*none*/, int* left, int* right, int* top, int* bottom);
// void gdk_popup_layout_get_shadow_width (::GdkPopupLayout* layout /*none*/, gint* left, gint* right, gint* top, gint* bottom);
void base::PopupLayoutBase::get_shadow_width (gint & left, gint & right, gint & top, gint & bottom) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, gint* left, gint* right, gint* top, gint* bottom);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_shadow_width;
  gint bottom_o {};
  gint top_o {};
  gint right_o {};
  gint left_o {};
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (gint*) (&left_o), (gint*) (&right_o), (gint*) (&top_o), (gint*) (&bottom_o));
  bottom = bottom_o;
  top = top_o;
  right = right_o;
  left = left_o;
}
std::tuple<gint, gint, gint, gint> base::PopupLayoutBase::get_shadow_width () noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, gint* left, gint* right, gint* top, gint* bottom);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_shadow_width;
  gint bottom_o {};
  gint top_o {};
  gint right_o {};
  gint left_o {};
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (gint*) (&left_o), (gint*) (&right_o), (gint*) (&top_o), (gint*) (&bottom_o));
  auto &&tmp_return_1 = left_o;
  auto &&tmp_return_2 = right_o;
  auto &&tmp_return_3 = top_o;
  auto &&tmp_return_4 = bottom_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// GdkGravity gdk_popup_layout_get_surface_anchor (GdkPopupLayout* layout /*none*/);
// ::GdkGravity gdk_popup_layout_get_surface_anchor (::GdkPopupLayout* layout /*none*/);
Gdk::Gravity base::PopupLayoutBase::get_surface_anchor () noexcept
{
  typedef ::GdkGravity (*call_wrap_t) (::GdkPopupLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_get_surface_anchor;
  auto _temp_ret = call_wrap_v ((::GdkPopupLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkPopupLayout* /*full*/ gdk_popup_layout_ref (GdkPopupLayout* layout /*none*/);
// ::GdkPopupLayout* /*full*/ gdk_popup_layout_ref (::GdkPopupLayout* layout /*none*/);
// IGNORE; marked ignore

// void gdk_popup_layout_set_anchor_hints (GdkPopupLayout* layout /*none*/, GdkAnchorHints anchor_hints);
// void gdk_popup_layout_set_anchor_hints (::GdkPopupLayout* layout /*none*/, ::GdkAnchorHints anchor_hints);
void base::PopupLayoutBase::set_anchor_hints (Gdk::AnchorHints anchor_hints) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, ::GdkAnchorHints anchor_hints);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_set_anchor_hints;
  auto anchor_hints_to_c = gi::unwrap (anchor_hints);
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (::GdkAnchorHints) (anchor_hints_to_c));
}

// void gdk_popup_layout_set_anchor_rect (GdkPopupLayout* layout /*none*/, const GdkRectangle* anchor_rect /*none*/);
// void gdk_popup_layout_set_anchor_rect (::GdkPopupLayout* layout /*none*/, const ::GdkRectangle* anchor_rect /*none*/);
void base::PopupLayoutBase::set_anchor_rect (const Gdk::Rectangle_Ref anchor_rect) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, const ::GdkRectangle* anchor_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_set_anchor_rect;
  auto anchor_rect_to_c = gi::unwrap (anchor_rect, gi::transfer_none);
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (const ::GdkRectangle*) (anchor_rect_to_c));
}

// void gdk_popup_layout_set_offset (GdkPopupLayout* layout /*none*/, int dx, int dy);
// void gdk_popup_layout_set_offset (::GdkPopupLayout* layout /*none*/, gint dx, gint dy);
void base::PopupLayoutBase::set_offset (gint dx, gint dy) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, gint dx, gint dy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_set_offset;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (gint) (dx_to_c), (gint) (dy_to_c));
}

// void gdk_popup_layout_set_rect_anchor (GdkPopupLayout* layout /*none*/, GdkGravity anchor);
// void gdk_popup_layout_set_rect_anchor (::GdkPopupLayout* layout /*none*/, ::GdkGravity anchor);
void base::PopupLayoutBase::set_rect_anchor (Gdk::Gravity anchor) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, ::GdkGravity anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_set_rect_anchor;
  auto anchor_to_c = gi::unwrap (anchor);
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (::GdkGravity) (anchor_to_c));
}

// void gdk_popup_layout_set_shadow_width (GdkPopupLayout* layout /*none*/, int left, int right, int top, int bottom);
// void gdk_popup_layout_set_shadow_width (::GdkPopupLayout* layout /*none*/, gint left, gint right, gint top, gint bottom);
void base::PopupLayoutBase::set_shadow_width (gint left, gint right, gint top, gint bottom) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, gint left, gint right, gint top, gint bottom);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_set_shadow_width;
  auto bottom_to_c = bottom;
  auto top_to_c = top;
  auto right_to_c = right;
  auto left_to_c = left;
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (gint) (left_to_c), (gint) (right_to_c), (gint) (top_to_c), (gint) (bottom_to_c));
}

// void gdk_popup_layout_set_surface_anchor (GdkPopupLayout* layout /*none*/, GdkGravity anchor);
// void gdk_popup_layout_set_surface_anchor (::GdkPopupLayout* layout /*none*/, ::GdkGravity anchor);
void base::PopupLayoutBase::set_surface_anchor (Gdk::Gravity anchor) noexcept
{
  typedef void (*call_wrap_t) (::GdkPopupLayout* layout, ::GdkGravity anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_popup_layout_set_surface_anchor;
  auto anchor_to_c = gi::unwrap (anchor);
  call_wrap_v ((::GdkPopupLayout*) (gobj_()), (::GdkGravity) (anchor_to_c));
}

// void gdk_popup_layout_unref (GdkPopupLayout* layout /*none*/);
// void gdk_popup_layout_unref (::GdkPopupLayout* layout /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/popuplayout_extra_def_impl.hpp>)
#include <gdk/popuplayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/popuplayout_extra_impl.hpp>)
#include <gdk/popuplayout_extra_impl.hpp>
#endif
#endif

#endif
