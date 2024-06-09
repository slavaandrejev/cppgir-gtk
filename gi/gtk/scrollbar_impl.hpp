// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLBAR_IMPL_HPP_
#define _GI_GTK_SCROLLBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable ScrollbarBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ScrollbarBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_scrollbar_new (GtkOrientation orientation, GtkAdjustment* adjustment /*none,nullable*/);
// ::GtkScrollbar* /*none*/ gtk_scrollbar_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment /*none,nullable*/);
Gtk::Scrollbar base::ScrollbarBase::new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept
{
  typedef ::GtkScrollbar* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollbar_new;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Scrollbar base::ScrollbarBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkScrollbar* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scrollbar_new;
  auto adjustment_to_c = nullptr;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAdjustment* /*none*/ gtk_scrollbar_get_adjustment (GtkScrollbar* self /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scrollbar_get_adjustment (::GtkScrollbar* self /*none*/);
Gtk::Adjustment base::ScrollbarBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScrollbar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollbar_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkScrollbar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_scrollbar_set_adjustment (GtkScrollbar* self /*none*/, GtkAdjustment* adjustment /*none,nullable*/);
// void gtk_scrollbar_set_adjustment (::GtkScrollbar* self /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/);
void base::ScrollbarBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollbar* self, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollbar_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkScrollbar*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}
void base::ScrollbarBase::set_adjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollbar* self, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scrollbar_set_adjustment;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::GtkScrollbar*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra_def_impl.hpp>)
#include <gtk/scrollbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra_impl.hpp>)
#include <gtk/scrollbar_extra_impl.hpp>
#endif
#endif

#endif
