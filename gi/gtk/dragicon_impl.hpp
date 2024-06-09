// AUTO-GENERATED

#ifndef _GI_GTK_DRAGICON_IMPL_HPP_
#define _GI_GTK_DRAGICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Native DragIconBase::interface_ (gi::interface_tag<Gtk::Native>)
{ return gi::wrap ((Gtk::Native::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DragIconBase::operator Gtk::Native ()
{ return interface_ (gi::interface_tag<Gtk::Native>()); }

Gtk::Root DragIconBase::interface_ (gi::interface_tag<Gtk::Root>)
{ return gi::wrap ((Gtk::Root::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DragIconBase::operator Gtk::Root ()
{ return interface_ (gi::interface_tag<Gtk::Root>()); }

// GtkWidget* /*full,nullable*/ gtk_drag_icon_create_widget_for_value (const GValue* value /*none*/);
// ::GtkWidget* /*full,nullable*/ gtk_drag_icon_create_widget_for_value (const ::GValue* value /*none*/);
Gtk::Widget base::DragIconBase::create_widget_for_value (const GObject::Value_Ref value) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_icon_create_widget_for_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkWidget* /*none*/ gtk_drag_icon_get_for_drag (GdkDrag* drag /*none*/);
// ::GtkWidget* /*none*/ gtk_drag_icon_get_for_drag (::GdkDrag* drag /*none*/);
Gtk::Widget base::DragIconBase::get_for_drag (Gdk::Drag drag) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GdkDrag* drag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_icon_get_for_drag;
  auto drag_to_c = gi::unwrap (drag, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDrag*) (drag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_drag_icon_set_from_paintable (GdkDrag* drag /*none*/, GdkPaintable* paintable /*none*/, int hot_x, int hot_y);
// void gtk_drag_icon_set_from_paintable (::GdkDrag* drag /*none*/, ::GdkPaintable* paintable /*none*/, gint hot_x, gint hot_y);
void base::DragIconBase::set_from_paintable (Gdk::Drag drag, Gdk::Paintable paintable, gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrag* drag, ::GdkPaintable* paintable, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_icon_set_from_paintable;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  auto drag_to_c = gi::unwrap (drag, gi::transfer_none);
  call_wrap_v ((::GdkDrag*) (drag_to_c), (::GdkPaintable*) (paintable_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}

// GtkWidget* /*none,nullable*/ gtk_drag_icon_get_child (GtkDragIcon* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_drag_icon_get_child (::GtkDragIcon* self /*none*/);
Gtk::Widget base::DragIconBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkDragIcon* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_icon_get_child;
  auto _temp_ret = call_wrap_v ((::GtkDragIcon*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_drag_icon_set_child (GtkDragIcon* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_drag_icon_set_child (::GtkDragIcon* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::DragIconBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkDragIcon* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_icon_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkDragIcon*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::DragIconBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkDragIcon* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drag_icon_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkDragIcon*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dragicon_extra_def_impl.hpp>)
#include <gtk/dragicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dragicon_extra_impl.hpp>)
#include <gtk/dragicon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void DragIconClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkDragIconClass *methods = (::GtkDragIconClass *) class_struct;
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
