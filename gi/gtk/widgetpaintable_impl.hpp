// AUTO-GENERATED

#ifndef _GI_GTK_WIDGETPAINTABLE_IMPL_HPP_
#define _GI_GTK_WIDGETPAINTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gdk::Paintable WidgetPaintableBase::interface_ (gi::interface_tag<Gdk::Paintable>)
{ return gi::wrap ((Gdk::Paintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

WidgetPaintableBase::operator Gdk::Paintable ()
{ return interface_ (gi::interface_tag<Gdk::Paintable>()); }

// GdkPaintable* /*full*/ gtk_widget_paintable_new (GtkWidget* widget /*none,nullable*/);
// ::GtkWidgetPaintable* /*full*/ gtk_widget_paintable_new (::GtkWidget* widget /*none,nullable*/);
Gtk::WidgetPaintable base::WidgetPaintableBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkWidgetPaintable* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_paintable_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::WidgetPaintable base::WidgetPaintableBase::new_ () noexcept
{
  typedef ::GtkWidgetPaintable* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_paintable_new;
  auto widget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkWidget* /*none,nullable*/ gtk_widget_paintable_get_widget (GtkWidgetPaintable* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_paintable_get_widget (::GtkWidgetPaintable* self /*none*/);
Gtk::Widget base::WidgetPaintableBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidgetPaintable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_paintable_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkWidgetPaintable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_widget_paintable_set_widget (GtkWidgetPaintable* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_widget_paintable_set_widget (::GtkWidgetPaintable* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::WidgetPaintableBase::set_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPaintable* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_paintable_set_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkWidgetPaintable*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::WidgetPaintableBase::set_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidgetPaintable* self, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_widget_paintable_set_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkWidgetPaintable*) (gobj_()), (::GtkWidget*) (widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widgetpaintable_extra_def_impl.hpp>)
#include <gtk/widgetpaintable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widgetpaintable_extra_impl.hpp>)
#include <gtk/widgetpaintable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WidgetPaintableClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkWidgetPaintableClass *methods = (::GtkWidgetPaintableClass *) class_struct;
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
