// AUTO-GENERATED

#ifndef _GI_GTK_ASPECTFRAME_IMPL_HPP_
#define _GI_GTK_ASPECTFRAME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_aspect_frame_new (float xalign, float yalign, float ratio, gboolean obey_child);
// ::GtkAspectFrame* /*none*/ gtk_aspect_frame_new (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
Gtk::AspectFrame base::AspectFrameBase::new_ (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept
{
  typedef ::GtkAspectFrame* (*call_wrap_t) (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_aspect_frame_new;
  auto obey_child_to_c = obey_child;
  auto ratio_to_c = ratio;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  auto _temp_ret = call_wrap_v ((gfloat) (xalign_to_c), (gfloat) (yalign_to_c), (gfloat) (ratio_to_c), (gboolean) (obey_child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_aspect_frame_get_child (GtkAspectFrame* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_aspect_frame_get_child (::GtkAspectFrame* self /*none*/);
Gtk::Widget base::AspectFrameBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkAspectFrame* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_get_child;
  auto _temp_ret = call_wrap_v ((::GtkAspectFrame*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_aspect_frame_get_obey_child (GtkAspectFrame* self /*none*/);
// gboolean gtk_aspect_frame_get_obey_child (::GtkAspectFrame* self /*none*/);
bool base::AspectFrameBase::get_obey_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAspectFrame* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_get_obey_child;
  auto _temp_ret = call_wrap_v ((::GtkAspectFrame*) (gobj_()));
  return _temp_ret;
}

// float gtk_aspect_frame_get_ratio (GtkAspectFrame* self /*none*/);
// gfloat gtk_aspect_frame_get_ratio (::GtkAspectFrame* self /*none*/);
gfloat base::AspectFrameBase::get_ratio () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkAspectFrame* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_get_ratio;
  auto _temp_ret = call_wrap_v ((::GtkAspectFrame*) (gobj_()));
  return _temp_ret;
}

// float gtk_aspect_frame_get_xalign (GtkAspectFrame* self /*none*/);
// gfloat gtk_aspect_frame_get_xalign (::GtkAspectFrame* self /*none*/);
gfloat base::AspectFrameBase::get_xalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkAspectFrame* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_get_xalign;
  auto _temp_ret = call_wrap_v ((::GtkAspectFrame*) (gobj_()));
  return _temp_ret;
}

// float gtk_aspect_frame_get_yalign (GtkAspectFrame* self /*none*/);
// gfloat gtk_aspect_frame_get_yalign (::GtkAspectFrame* self /*none*/);
gfloat base::AspectFrameBase::get_yalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkAspectFrame* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_get_yalign;
  auto _temp_ret = call_wrap_v ((::GtkAspectFrame*) (gobj_()));
  return _temp_ret;
}

// void gtk_aspect_frame_set_child (GtkAspectFrame* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_aspect_frame_set_child (::GtkAspectFrame* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::AspectFrameBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::AspectFrameBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_aspect_frame_set_obey_child (GtkAspectFrame* self /*none*/, gboolean obey_child);
// void gtk_aspect_frame_set_obey_child (::GtkAspectFrame* self /*none*/, gboolean obey_child);
void base::AspectFrameBase::set_obey_child (gboolean obey_child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* self, gboolean obey_child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_set_obey_child;
  auto obey_child_to_c = obey_child;
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (gboolean) (obey_child_to_c));
}

// void gtk_aspect_frame_set_ratio (GtkAspectFrame* self /*none*/, float ratio);
// void gtk_aspect_frame_set_ratio (::GtkAspectFrame* self /*none*/, gfloat ratio);
void base::AspectFrameBase::set_ratio (gfloat ratio) noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* self, gfloat ratio);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_set_ratio;
  auto ratio_to_c = ratio;
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (gfloat) (ratio_to_c));
}

// void gtk_aspect_frame_set_xalign (GtkAspectFrame* self /*none*/, float xalign);
// void gtk_aspect_frame_set_xalign (::GtkAspectFrame* self /*none*/, gfloat xalign);
void base::AspectFrameBase::set_xalign (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* self, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_set_xalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_aspect_frame_set_yalign (GtkAspectFrame* self /*none*/, float yalign);
// void gtk_aspect_frame_set_yalign (::GtkAspectFrame* self /*none*/, gfloat yalign);
void base::AspectFrameBase::set_yalign (gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* self, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_aspect_frame_set_yalign;
  auto yalign_to_c = yalign;
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (gfloat) (yalign_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra_def_impl.hpp>)
#include <gtk/aspectframe_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra_impl.hpp>)
#include <gtk/aspectframe_extra_impl.hpp>
#endif
#endif

#endif
