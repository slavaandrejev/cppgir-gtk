// AUTO-GENERATED

#ifndef _GI_GTK_DROPTARGET_IMPL_HPP_
#define _GI_GTK_DROPTARGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkDropTarget* /*full*/ gtk_drop_target_new (GType type, GdkDragAction actions);
// ::GtkDropTarget* /*full*/ gtk_drop_target_new (GType type, ::GdkDragAction actions);
Gtk::DropTarget base::DropTargetBase::new_ (GType type, Gdk::DragAction actions) noexcept
{
  typedef ::GtkDropTarget* (*call_wrap_t) (GType type, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drop_target_new;
  auto actions_to_c = gi::unwrap (actions);
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (::GdkDragAction) (actions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkDragAction gtk_drop_target_get_actions (GtkDropTarget* self /*none*/);
// ::GdkDragAction gtk_drop_target_get_actions (::GtkDropTarget* self /*none*/);
Gdk::DragAction base::DropTargetBase::get_actions () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_actions;
  auto _temp_ret = call_wrap_v ((::GtkDropTarget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDrop* /*none,nullable*/ gtk_drop_target_get_current_drop (GtkDropTarget* self /*none*/);
// ::GdkDrop* /*none,nullable*/ gtk_drop_target_get_current_drop (::GtkDropTarget* self /*none*/);
Gdk::Drop base::DropTargetBase::get_current_drop () noexcept
{
  typedef ::GdkDrop* (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_current_drop;
  auto _temp_ret = call_wrap_v ((::GtkDropTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDrop* /*none,nullable*/ gtk_drop_target_get_drop (GtkDropTarget* self /*none*/);
// ::GdkDrop* /*none,nullable*/ gtk_drop_target_get_drop (::GtkDropTarget* self /*none*/);
Gdk::Drop base::DropTargetBase::get_drop () noexcept
{
  typedef ::GdkDrop* (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_drop;
  auto _temp_ret = call_wrap_v ((::GtkDropTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkContentFormats* /*none,nullable*/ gtk_drop_target_get_formats (GtkDropTarget* self /*none*/);
// ::GdkContentFormats* /*none,nullable*/ gtk_drop_target_get_formats (::GtkDropTarget* self /*none*/);
Gdk::ContentFormats_Ref base::DropTargetBase::get_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_formats;
  auto _temp_ret = call_wrap_v ((::GtkDropTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GType* /*none,nullable*/ gtk_drop_target_get_gtypes (GtkDropTarget* self /*none*/, gsize* n_types);
// const GType* /*none,nullable*/ gtk_drop_target_get_gtypes (::GtkDropTarget* self /*none*/, gsize* n_types);
gi::Collection<gi::DSpan, GType, gi::transfer_none_t> base::DropTargetBase::get_gtypes () noexcept
{
  typedef const GType* (*call_wrap_t) (::GtkDropTarget* self, gsize* n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_gtypes;
  gsize n_types;
  auto _ret_o = call_wrap_v ((::GtkDropTarget*) (gobj_()), (gsize*) (&n_types));
  gi::Collection<gi::DSpan, GType, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, GType, gi::transfer_none_t>>(_ret_o, n_types, gi::transfer_none);
  return _temp_ret;
}

// gboolean gtk_drop_target_get_preload (GtkDropTarget* self /*none*/);
// gboolean gtk_drop_target_get_preload (::GtkDropTarget* self /*none*/);
bool base::DropTargetBase::get_preload () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_preload;
  auto _temp_ret = call_wrap_v ((::GtkDropTarget*) (gobj_()));
  return _temp_ret;
}

// const GValue* /*none,nullable*/ gtk_drop_target_get_value (GtkDropTarget* self /*none*/);
// const ::GValue* /*none,nullable*/ gtk_drop_target_get_value (::GtkDropTarget* self /*none*/);
GObject::Value_Ref base::DropTargetBase::get_value () noexcept
{
  typedef const ::GValue* (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_get_value;
  auto _temp_ret = call_wrap_v ((::GtkDropTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_drop_target_reject (GtkDropTarget* self /*none*/);
// void gtk_drop_target_reject (::GtkDropTarget* self /*none*/);
void base::DropTargetBase::reject () noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTarget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_reject;
  call_wrap_v ((::GtkDropTarget*) (gobj_()));
}

// void gtk_drop_target_set_actions (GtkDropTarget* self /*none*/, GdkDragAction actions);
// void gtk_drop_target_set_actions (::GtkDropTarget* self /*none*/, ::GdkDragAction actions);
void base::DropTargetBase::set_actions (Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTarget* self, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_set_actions;
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::GtkDropTarget*) (gobj_()), (::GdkDragAction) (actions_to_c));
}

// void gtk_drop_target_set_gtypes (GtkDropTarget* self /*none*/, GType* types /*none,nullable*/, gsize n_types);
// void gtk_drop_target_set_gtypes (::GtkDropTarget* self /*none*/, GType* types /*none,nullable*/, gsize n_types);
void base::DropTargetBase::set_gtypes (const GType * types, gsize n_types) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTarget* self, GType* types, gsize n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_set_gtypes;
  auto types_to_c = types;
  call_wrap_v ((::GtkDropTarget*) (gobj_()), (GType*) (types_to_c), (gsize) (n_types));
}

// void gtk_drop_target_set_preload (GtkDropTarget* self /*none*/, gboolean preload);
// void gtk_drop_target_set_preload (::GtkDropTarget* self /*none*/, gboolean preload);
void base::DropTargetBase::set_preload (gboolean preload) noexcept
{
  typedef void (*call_wrap_t) (::GtkDropTarget* self, gboolean preload);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drop_target_set_preload;
  auto preload_to_c = preload;
  call_wrap_v ((::GtkDropTarget*) (gobj_()), (gboolean) (preload_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/droptarget_extra_def_impl.hpp>)
#include <gtk/droptarget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/droptarget_extra_impl.hpp>)
#include <gtk/droptarget_extra_impl.hpp>
#endif
#endif

#endif
