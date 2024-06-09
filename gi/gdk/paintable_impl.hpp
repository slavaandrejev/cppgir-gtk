// AUTO-GENERATED

#ifndef _GI_GDK_PAINTABLE_IMPL_HPP_
#define _GI_GDK_PAINTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkPaintable* /*full*/ gdk_paintable_new_empty (int intrinsic_width, int intrinsic_height);
// ::GdkPaintable* /*full*/ gdk_paintable_new_empty (gint intrinsic_width, gint intrinsic_height);
Gdk::Paintable base::PaintableBase::new_empty (gint intrinsic_width, gint intrinsic_height) noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (gint intrinsic_width, gint intrinsic_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_new_empty;
  auto intrinsic_height_to_c = intrinsic_height;
  auto intrinsic_width_to_c = intrinsic_width;
  auto _temp_ret = call_wrap_v ((gint) (intrinsic_width_to_c), (gint) (intrinsic_height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_paintable_compute_concrete_size (GdkPaintable* paintable /*none*/, double specified_width, double specified_height, double default_width, double default_height, double* concrete_width, double* concrete_height);
// void gdk_paintable_compute_concrete_size (::GdkPaintable* paintable /*none*/, gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height, gdouble* concrete_width, gdouble* concrete_height);
void base::PaintableBase::compute_concrete_size (gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height, gdouble & concrete_width, gdouble & concrete_height) noexcept
{
  typedef void (*call_wrap_t) (::GdkPaintable* paintable, gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height, gdouble* concrete_width, gdouble* concrete_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_compute_concrete_size;
  gdouble concrete_height_o {};
  gdouble concrete_width_o {};
  auto default_height_to_c = default_height;
  auto default_width_to_c = default_width;
  auto specified_height_to_c = specified_height;
  auto specified_width_to_c = specified_width;
  call_wrap_v ((::GdkPaintable*) (gobj_()), (gdouble) (specified_width_to_c), (gdouble) (specified_height_to_c), (gdouble) (default_width_to_c), (gdouble) (default_height_to_c), (gdouble*) (&concrete_width_o), (gdouble*) (&concrete_height_o));
  concrete_height = concrete_height_o;
  concrete_width = concrete_width_o;
}
std::tuple<gdouble, gdouble> base::PaintableBase::compute_concrete_size (gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height) noexcept
{
  typedef void (*call_wrap_t) (::GdkPaintable* paintable, gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height, gdouble* concrete_width, gdouble* concrete_height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_compute_concrete_size;
  gdouble concrete_height_o {};
  gdouble concrete_width_o {};
  auto default_height_to_c = default_height;
  auto default_width_to_c = default_width;
  auto specified_height_to_c = specified_height;
  auto specified_width_to_c = specified_width;
  call_wrap_v ((::GdkPaintable*) (gobj_()), (gdouble) (specified_width_to_c), (gdouble) (specified_height_to_c), (gdouble) (default_width_to_c), (gdouble) (default_height_to_c), (gdouble*) (&concrete_width_o), (gdouble*) (&concrete_height_o));
  auto &&tmp_return_1 = concrete_width_o;
  auto &&tmp_return_2 = concrete_height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GdkPaintable* /*full*/ gdk_paintable_get_current_image (GdkPaintable* paintable /*none*/);
// ::GdkPaintable* /*full*/ gdk_paintable_get_current_image (::GdkPaintable* paintable /*none*/);
Gdk::Paintable base::PaintableBase::get_current_image () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_get_current_image;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPaintableFlags gdk_paintable_get_flags (GdkPaintable* paintable /*none*/);
// ::GdkPaintableFlags gdk_paintable_get_flags (::GdkPaintable* paintable /*none*/);
Gdk::PaintableFlags base::PaintableBase::get_flags () noexcept
{
  typedef ::GdkPaintableFlags (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_get_flags;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double gdk_paintable_get_intrinsic_aspect_ratio (GdkPaintable* paintable /*none*/);
// gdouble gdk_paintable_get_intrinsic_aspect_ratio (::GdkPaintable* paintable /*none*/);
gdouble base::PaintableBase::get_intrinsic_aspect_ratio () noexcept
{
  typedef gdouble (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_get_intrinsic_aspect_ratio;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return _temp_ret;
}

// int gdk_paintable_get_intrinsic_height (GdkPaintable* paintable /*none*/);
// gint gdk_paintable_get_intrinsic_height (::GdkPaintable* paintable /*none*/);
gint base::PaintableBase::get_intrinsic_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_get_intrinsic_height;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return _temp_ret;
}

// int gdk_paintable_get_intrinsic_width (GdkPaintable* paintable /*none*/);
// gint gdk_paintable_get_intrinsic_width (::GdkPaintable* paintable /*none*/);
gint base::PaintableBase::get_intrinsic_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_get_intrinsic_width;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return _temp_ret;
}

// void gdk_paintable_invalidate_contents (GdkPaintable* paintable /*none*/);
// void gdk_paintable_invalidate_contents (::GdkPaintable* paintable /*none*/);
void base::PaintableBase::invalidate_contents () noexcept
{
  typedef void (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_invalidate_contents;
  call_wrap_v ((::GdkPaintable*) (gobj_()));
}

// void gdk_paintable_invalidate_size (GdkPaintable* paintable /*none*/);
// void gdk_paintable_invalidate_size (::GdkPaintable* paintable /*none*/);
void base::PaintableBase::invalidate_size () noexcept
{
  typedef void (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_invalidate_size;
  call_wrap_v ((::GdkPaintable*) (gobj_()));
}

// void gdk_paintable_snapshot (GdkPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height);
// void gdk_paintable_snapshot (::GdkPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height);
void base::PaintableBase::snapshot (Gdk::Snapshot snapshot, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GdkPaintable* paintable, ::GdkSnapshot* snapshot, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_paintable_snapshot;
  auto height_to_c = height;
  auto width_to_c = width;
  auto snapshot_to_c = gi::unwrap (snapshot, gi::transfer_none);
  call_wrap_v ((::GdkPaintable*) (gobj_()), (::GdkSnapshot*) (snapshot_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}




} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/paintable_extra_def_impl.hpp>)
#include <gdk/paintable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/paintable_extra_impl.hpp>)
#include <gdk/paintable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

namespace impl {

namespace internal {

void PaintableInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GdkPaintableInterface *methods = (::GdkPaintableInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_current_image) methods->get_current_image = (decltype (methods->get_current_image)) detail::method_wrapper<self, Gdk::Paintable (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_current_image_>;
  if (init_data.get_flags) methods->get_flags = (decltype (methods->get_flags)) detail::method_wrapper<self, Gdk::PaintableFlags (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_flags_>;
  if (init_data.get_intrinsic_aspect_ratio) methods->get_intrinsic_aspect_ratio = (decltype (methods->get_intrinsic_aspect_ratio)) detail::method_wrapper<self, gdouble (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_intrinsic_aspect_ratio_>;
  if (init_data.get_intrinsic_height) methods->get_intrinsic_height = (decltype (methods->get_intrinsic_height)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_intrinsic_height_>;
  if (init_data.get_intrinsic_width) methods->get_intrinsic_width = (decltype (methods->get_intrinsic_width)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_intrinsic_width_>;
  if (init_data.snapshot) methods->snapshot = (decltype (methods->snapshot)) detail::method_wrapper<self, void (*) (Gdk::Snapshot snapshot, gdouble width, gdouble height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::snapshot_>;
}

// GdkPaintable* /*full*/ Paintable::get_current_image (GdkPaintable* paintable /*none*/);
// ::GdkPaintable* /*full*/ Paintable::get_current_image (::GdkPaintable* paintable /*none*/);
Gdk::Paintable PaintableInterfaceClassImpl::get_current_image_ () noexcept
{
  if (!get_struct_()->get_current_image) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkPaintable* (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_current_image;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkPaintableFlags Paintable::get_flags (GdkPaintable* paintable /*none*/);
// ::GdkPaintableFlags Paintable::get_flags (::GdkPaintable* paintable /*none*/);
Gdk::PaintableFlags PaintableInterfaceClassImpl::get_flags_ () noexcept
{
  if (!get_struct_()->get_flags) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkPaintableFlags (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_flags;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double Paintable::get_intrinsic_aspect_ratio (GdkPaintable* paintable /*none*/);
// gdouble Paintable::get_intrinsic_aspect_ratio (::GdkPaintable* paintable /*none*/);
gdouble PaintableInterfaceClassImpl::get_intrinsic_aspect_ratio_ () noexcept
{
  if (!get_struct_()->get_intrinsic_aspect_ratio) { g_critical ("no method in class struct"); return {}; }
  typedef gdouble (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_intrinsic_aspect_ratio;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return _temp_ret;
}

// int Paintable::get_intrinsic_height (GdkPaintable* paintable /*none*/);
// gint Paintable::get_intrinsic_height (::GdkPaintable* paintable /*none*/);
gint PaintableInterfaceClassImpl::get_intrinsic_height_ () noexcept
{
  if (!get_struct_()->get_intrinsic_height) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_intrinsic_height;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return _temp_ret;
}

// int Paintable::get_intrinsic_width (GdkPaintable* paintable /*none*/);
// gint Paintable::get_intrinsic_width (::GdkPaintable* paintable /*none*/);
gint PaintableInterfaceClassImpl::get_intrinsic_width_ () noexcept
{
  if (!get_struct_()->get_intrinsic_width) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_intrinsic_width;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (gobj_()));
  return _temp_ret;
}

// void Paintable::snapshot (GdkPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height);
// void Paintable::snapshot (::GdkPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height);
void PaintableInterfaceClassImpl::snapshot_ (Gdk::Snapshot snapshot, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->snapshot) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkPaintable* paintable, ::GdkSnapshot* snapshot, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->snapshot;
  auto height_to_c = height;
  auto width_to_c = width;
  auto snapshot_to_c = gi::unwrap (snapshot, gi::transfer_none);
  call_wrap_v ((::GdkPaintable*) (gobj_()), (::GdkSnapshot*) (snapshot_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
