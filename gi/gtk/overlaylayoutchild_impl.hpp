// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAYLAYOUTCHILD_IMPL_HPP_
#define _GI_GTK_OVERLAYLAYOUTCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_overlay_layout_child_get_clip_overlay (GtkOverlayLayoutChild* child /*none*/);
// gboolean gtk_overlay_layout_child_get_clip_overlay (::GtkOverlayLayoutChild* child /*none*/);
bool base::OverlayLayoutChildBase::get_clip_overlay () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkOverlayLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_layout_child_get_clip_overlay;
  auto _temp_ret = call_wrap_v ((::GtkOverlayLayoutChild*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_overlay_layout_child_get_measure (GtkOverlayLayoutChild* child /*none*/);
// gboolean gtk_overlay_layout_child_get_measure (::GtkOverlayLayoutChild* child /*none*/);
bool base::OverlayLayoutChildBase::get_measure () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkOverlayLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_layout_child_get_measure;
  auto _temp_ret = call_wrap_v ((::GtkOverlayLayoutChild*) (gobj_()));
  return _temp_ret;
}

// void gtk_overlay_layout_child_set_clip_overlay (GtkOverlayLayoutChild* child /*none*/, gboolean clip_overlay);
// void gtk_overlay_layout_child_set_clip_overlay (::GtkOverlayLayoutChild* child /*none*/, gboolean clip_overlay);
void base::OverlayLayoutChildBase::set_clip_overlay (gboolean clip_overlay) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlayLayoutChild* child, gboolean clip_overlay);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_layout_child_set_clip_overlay;
  auto clip_overlay_to_c = clip_overlay;
  call_wrap_v ((::GtkOverlayLayoutChild*) (gobj_()), (gboolean) (clip_overlay_to_c));
}

// void gtk_overlay_layout_child_set_measure (GtkOverlayLayoutChild* child /*none*/, gboolean measure);
// void gtk_overlay_layout_child_set_measure (::GtkOverlayLayoutChild* child /*none*/, gboolean measure);
void base::OverlayLayoutChildBase::set_measure (gboolean measure) noexcept
{
  typedef void (*call_wrap_t) (::GtkOverlayLayoutChild* child, gboolean measure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_overlay_layout_child_set_measure;
  auto measure_to_c = measure;
  call_wrap_v ((::GtkOverlayLayoutChild*) (gobj_()), (gboolean) (measure_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlaylayoutchild_extra_def_impl.hpp>)
#include <gtk/overlaylayoutchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlaylayoutchild_extra_impl.hpp>)
#include <gtk/overlaylayoutchild_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void OverlayLayoutChildClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkOverlayLayoutChildClass *methods = (::GtkOverlayLayoutChildClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
