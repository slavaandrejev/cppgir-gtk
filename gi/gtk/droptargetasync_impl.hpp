// AUTO-GENERATED

#ifndef _GI_GTK_DROPTARGETASYNC_IMPL_HPP_
#define _GI_GTK_DROPTARGETASYNC_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkDropTargetAsync* /*full*/ gtk_drop_target_async_new (GdkContentFormats* formats /*full,nullable*/, GdkDragAction actions);
// ::GtkDropTargetAsync* /*full*/ gtk_drop_target_async_new (::GdkContentFormats* formats /*full,nullable*/, ::GdkDragAction actions);
Gtk::DropTargetAsync base::DropTargetAsyncBase::new_ (Gdk::ContentFormats formats, Gdk::DragAction actions) noexcept
{
  typedef ::GtkDropTargetAsync* (*call_wrap_t) (::GdkContentFormats* formats, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drop_target_async_new;
  auto actions_to_c = gi::unwrap (actions);
  auto formats_to_c = gi::unwrap (std::move(formats), gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (formats_to_c), (::GdkDragAction) (actions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::DropTargetAsync base::DropTargetAsyncBase::new_ (Gdk::DragAction actions) noexcept
{
  typedef ::GtkDropTargetAsync* (*call_wrap_t) (::GdkContentFormats* formats, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drop_target_async_new;
  auto actions_to_c = gi::unwrap (actions);
  auto formats_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (formats_to_c), (::GdkDragAction) (actions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkDragAction gtk_drop_target_async_get_actions (GtkDropTargetAsync* self /*none*/);
// ::GdkDragAction gtk_drop_target_async_get_actions (::GtkDropTargetAsync* self /*none*/);
Gdk::DragAction base::DropTargetAsyncBase::get_actions () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GtkDropTargetAsync* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_async_get_actions;
  auto _temp_ret = call_wrap_v ((::GtkDropTargetAsync*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkContentFormats* /*full,nullable*/ gtk_drop_target_async_get_formats (GtkDropTargetAsync* self /*none*/);
// ::GdkContentFormats* /*full,nullable*/ gtk_drop_target_async_get_formats (::GtkDropTargetAsync* self /*none*/);
Gdk::ContentFormats base::DropTargetAsyncBase::get_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GtkDropTargetAsync* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_async_get_formats;
  auto _temp_ret = call_wrap_v ((::GtkDropTargetAsync*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_drop_target_async_reject_drop (GtkDropTargetAsync* self /*none*/, GdkDrop* drop /*none*/);
// void gtk_drop_target_async_reject_drop (::GtkDropTargetAsync* self /*none*/, ::GdkDrop* drop /*none*/);
void base::DropTargetAsyncBase::reject_drop (Gdk::Drop drop) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTargetAsync* self, ::GdkDrop* drop);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_async_reject_drop;
  auto drop_to_c = gi::unwrap (drop, gi::transfer_none);
  call_wrap_v ((::GtkDropTargetAsync*) (gobj_()), (::GdkDrop*) (drop_to_c));
}

// void gtk_drop_target_async_set_actions (GtkDropTargetAsync* self /*none*/, GdkDragAction actions);
// void gtk_drop_target_async_set_actions (::GtkDropTargetAsync* self /*none*/, ::GdkDragAction actions);
void base::DropTargetAsyncBase::set_actions (Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTargetAsync* self, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_async_set_actions;
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::GtkDropTargetAsync*) (gobj_()), (::GdkDragAction) (actions_to_c));
}

// void gtk_drop_target_async_set_formats (GtkDropTargetAsync* self /*none*/, GdkContentFormats* formats /*none,nullable*/);
// void gtk_drop_target_async_set_formats (::GtkDropTargetAsync* self /*none*/, ::GdkContentFormats* formats /*none,nullable*/);
void base::DropTargetAsyncBase::set_formats (Gdk::ContentFormats_Ref formats) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTargetAsync* self, ::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_async_set_formats;
  auto formats_to_c = gi::unwrap (formats, gi::transfer_none);
  call_wrap_v ((::GtkDropTargetAsync*) (gobj_()), (::GdkContentFormats*) (formats_to_c));
}
void base::DropTargetAsyncBase::set_formats () noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTargetAsync* self, ::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_async_set_formats;
  auto formats_to_c = nullptr;
  call_wrap_v ((::GtkDropTargetAsync*) (gobj_()), (::GdkContentFormats*) (formats_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/droptargetasync_extra_def_impl.hpp>)
#include <gtk/droptargetasync_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/droptargetasync_extra_impl.hpp>)
#include <gtk/droptargetasync_extra_impl.hpp>
#endif
#endif

#endif
