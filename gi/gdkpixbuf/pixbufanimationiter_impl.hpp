// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFANIMATIONITER_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFANIMATIONITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

// gboolean gdk_pixbuf_animation_iter_advance (GdkPixbufAnimationIter* iter /*none*/, const GTimeVal* current_time /*none,nullable*/);
// gboolean gdk_pixbuf_animation_iter_advance (::GdkPixbufAnimationIter* iter /*none*/, const  current_time /*none,nullable*/);
// SKIP; current_time type  not supported

// int gdk_pixbuf_animation_iter_get_delay_time (GdkPixbufAnimationIter* iter /*none*/);
// gint gdk_pixbuf_animation_iter_get_delay_time (::GdkPixbufAnimationIter* iter /*none*/);
gint base::PixbufAnimationIterBase::get_delay_time () noexcept
{
  typedef gint (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_iter_get_delay_time;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* /*none*/ gdk_pixbuf_animation_iter_get_pixbuf (GdkPixbufAnimationIter* iter /*none*/);
// ::GdkPixbuf* /*none*/ gdk_pixbuf_animation_iter_get_pixbuf (::GdkPixbufAnimationIter* iter /*none*/);
GdkPixbuf::Pixbuf base::PixbufAnimationIterBase::get_pixbuf () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_iter_get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (GdkPixbufAnimationIter* iter /*none*/);
// gboolean gdk_pixbuf_animation_iter_on_currently_loading_frame (::GdkPixbufAnimationIter* iter /*none*/);
bool base::PixbufAnimationIterBase::on_currently_loading_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_animation_iter_on_currently_loading_frame;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufanimationiter_extra_impl.hpp>)
#include <gdkpixbuf/pixbufanimationiter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace impl {

namespace internal {

void PixbufAnimationIterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GdkPixbufAnimationIterClass *methods = (::GdkPixbufAnimationIterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_delay_time) methods->get_delay_time = (decltype (methods->get_delay_time)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_delay_time_>;
  if (init_data.get_pixbuf) methods->get_pixbuf = (decltype (methods->get_pixbuf)) detail::method_wrapper<self, GdkPixbuf::Pixbuf (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_pixbuf_>;
  if (init_data.on_currently_loading_frame) methods->on_currently_loading_frame = (decltype (methods->on_currently_loading_frame)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::on_currently_loading_frame_>;
}

// gboolean PixbufAnimationIter::advance (GdkPixbufAnimationIter* iter /*none*/, const GTimeVal* current_time /*none,nullable*/);
// gboolean PixbufAnimationIter::advance (::GdkPixbufAnimationIter* iter /*none*/, const  current_time /*none,nullable*/);
// SKIP; current_time type  not supported

// int PixbufAnimationIter::get_delay_time (GdkPixbufAnimationIter* iter /*none*/);
// gint PixbufAnimationIter::get_delay_time (::GdkPixbufAnimationIter* iter /*none*/);
gint PixbufAnimationIterClass::get_delay_time_ () noexcept
{
  if (!get_struct_()->get_delay_time) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_delay_time;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* /*none*/ PixbufAnimationIter::get_pixbuf (GdkPixbufAnimationIter* iter /*none*/);
// ::GdkPixbuf* /*none*/ PixbufAnimationIter::get_pixbuf (::GdkPixbufAnimationIter* iter /*none*/);
GdkPixbuf::Pixbuf PixbufAnimationIterClass::get_pixbuf_ () noexcept
{
  if (!get_struct_()->get_pixbuf) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean PixbufAnimationIter::on_currently_loading_frame (GdkPixbufAnimationIter* iter /*none*/);
// gboolean PixbufAnimationIter::on_currently_loading_frame (::GdkPixbufAnimationIter* iter /*none*/);
bool PixbufAnimationIterClass::on_currently_loading_frame_ () noexcept
{
  if (!get_struct_()->on_currently_loading_frame) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GdkPixbufAnimationIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->on_currently_loading_frame;
  auto _temp_ret = call_wrap_v ((::GdkPixbufAnimationIter*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi

#endif
