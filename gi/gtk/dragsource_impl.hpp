// AUTO-GENERATED

#ifndef _GI_GTK_DRAGSOURCE_IMPL_HPP_
#define _GI_GTK_DRAGSOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkDragSource* /*full*/ gtk_drag_source_new ();
// ::GtkDragSource* /*full*/ gtk_drag_source_new ();
Gtk::DragSource base::DragSourceBase::new_ () noexcept
{
  typedef ::GtkDragSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_drag_source_drag_cancel (GtkDragSource* source /*none*/);
// void gtk_drag_source_drag_cancel (::GtkDragSource* source /*none*/);
void base::DragSourceBase::drag_cancel () noexcept
{
  typedef void (*call_wrap_t) (::GtkDragSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_drag_cancel;
  call_wrap_v ((::GtkDragSource*) (gobj_()));
}

// GdkDragAction gtk_drag_source_get_actions (GtkDragSource* source /*none*/);
// ::GdkDragAction gtk_drag_source_get_actions (::GtkDragSource* source /*none*/);
Gdk::DragAction base::DragSourceBase::get_actions () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GtkDragSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_get_actions;
  auto _temp_ret = call_wrap_v ((::GtkDragSource*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkContentProvider* /*none,nullable*/ gtk_drag_source_get_content (GtkDragSource* source /*none*/);
// ::GdkContentProvider* /*none,nullable*/ gtk_drag_source_get_content (::GtkDragSource* source /*none*/);
Gdk::ContentProvider base::DragSourceBase::get_content () noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GtkDragSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_get_content;
  auto _temp_ret = call_wrap_v ((::GtkDragSource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDrag* /*none,nullable*/ gtk_drag_source_get_drag (GtkDragSource* source /*none*/);
// ::GdkDrag* /*none,nullable*/ gtk_drag_source_get_drag (::GtkDragSource* source /*none*/);
Gdk::Drag base::DragSourceBase::get_drag () noexcept
{
  typedef ::GdkDrag* (*call_wrap_t) (::GtkDragSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_get_drag;
  auto _temp_ret = call_wrap_v ((::GtkDragSource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_drag_source_set_actions (GtkDragSource* source /*none*/, GdkDragAction actions);
// void gtk_drag_source_set_actions (::GtkDragSource* source /*none*/, ::GdkDragAction actions);
void base::DragSourceBase::set_actions (Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkDragSource* source, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_set_actions;
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::GtkDragSource*) (gobj_()), (::GdkDragAction) (actions_to_c));
}

// void gtk_drag_source_set_content (GtkDragSource* source /*none*/, GdkContentProvider* content /*none,nullable*/);
// void gtk_drag_source_set_content (::GtkDragSource* source /*none*/, ::GdkContentProvider* content /*none,nullable*/);
void base::DragSourceBase::set_content (Gdk::ContentProvider content) noexcept
{
  typedef void (*call_wrap_t) (::GtkDragSource* source, ::GdkContentProvider* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_set_content;
  auto content_to_c = gi::unwrap (content, gi::transfer_none);
  call_wrap_v ((::GtkDragSource*) (gobj_()), (::GdkContentProvider*) (content_to_c));
}
void base::DragSourceBase::set_content () noexcept
{
  typedef void (*call_wrap_t) (::GtkDragSource* source, ::GdkContentProvider* content);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_set_content;
  auto content_to_c = nullptr;
  call_wrap_v ((::GtkDragSource*) (gobj_()), (::GdkContentProvider*) (content_to_c));
}

// void gtk_drag_source_set_icon (GtkDragSource* source /*none*/, GdkPaintable* paintable /*none,nullable*/, int hot_x, int hot_y);
// void gtk_drag_source_set_icon (::GtkDragSource* source /*none*/, ::GdkPaintable* paintable /*none,nullable*/, gint hot_x, gint hot_y);
void base::DragSourceBase::set_icon (Gdk::Paintable paintable, gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkDragSource* source, ::GdkPaintable* paintable, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_set_icon;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  call_wrap_v ((::GtkDragSource*) (gobj_()), (::GdkPaintable*) (paintable_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}
void base::DragSourceBase::set_icon (gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkDragSource* source, ::GdkPaintable* paintable, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_source_set_icon;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto paintable_to_c = nullptr;
  call_wrap_v ((::GtkDragSource*) (gobj_()), (::GdkPaintable*) (paintable_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dragsource_extra_def_impl.hpp>)
#include <gtk/dragsource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dragsource_extra_impl.hpp>)
#include <gtk/dragsource_extra_impl.hpp>
#endif
#endif

#endif
