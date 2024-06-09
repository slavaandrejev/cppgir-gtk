// AUTO-GENERATED

#ifndef _GI_GTK_PANED_IMPL_HPP_
#define _GI_GTK_PANED_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AccessibleRange PanedBase::interface_ (gi::interface_tag<Gtk::AccessibleRange>)
{ return gi::wrap ((Gtk::AccessibleRange::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PanedBase::operator Gtk::AccessibleRange ()
{ return interface_ (gi::interface_tag<Gtk::AccessibleRange>()); }

Gtk::Orientable PanedBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PanedBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_paned_new (GtkOrientation orientation);
// ::GtkPaned* /*none*/ gtk_paned_new (::GtkOrientation orientation);
Gtk::Paned base::PanedBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkPaned* (*call_wrap_t) (::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paned_new;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_paned_get_end_child (GtkPaned* paned /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_paned_get_end_child (::GtkPaned* paned /*none*/);
Gtk::Widget base::PanedBase::get_end_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_end_child;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_paned_get_position (GtkPaned* paned /*none*/);
// gint gtk_paned_get_position (::GtkPaned* paned /*none*/);
gint base::PanedBase::get_position () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_position;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_paned_get_resize_end_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_resize_end_child (::GtkPaned* paned /*none*/);
bool base::PanedBase::get_resize_end_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_resize_end_child;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_paned_get_resize_start_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_resize_start_child (::GtkPaned* paned /*none*/);
bool base::PanedBase::get_resize_start_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_resize_start_child;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_paned_get_shrink_end_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_shrink_end_child (::GtkPaned* paned /*none*/);
bool base::PanedBase::get_shrink_end_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_shrink_end_child;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_paned_get_shrink_start_child (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_shrink_start_child (::GtkPaned* paned /*none*/);
bool base::PanedBase::get_shrink_start_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_shrink_start_child;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_paned_get_start_child (GtkPaned* paned /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_paned_get_start_child (::GtkPaned* paned /*none*/);
Gtk::Widget base::PanedBase::get_start_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_start_child;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_paned_get_wide_handle (GtkPaned* paned /*none*/);
// gboolean gtk_paned_get_wide_handle (::GtkPaned* paned /*none*/);
bool base::PanedBase::get_wide_handle () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaned* paned);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_get_wide_handle;
  auto _temp_ret = call_wrap_v ((::GtkPaned*) (gobj_()));
  return _temp_ret;
}

// void gtk_paned_set_end_child (GtkPaned* paned /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_paned_set_end_child (::GtkPaned* paned /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::PanedBase::set_end_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_end_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::PanedBase::set_end_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_end_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_paned_set_position (GtkPaned* paned /*none*/, int position);
// void gtk_paned_set_position (::GtkPaned* paned /*none*/, gint position);
void base::PanedBase::set_position (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_position;
  auto position_to_c = position;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gint) (position_to_c));
}

// void gtk_paned_set_resize_end_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_resize_end_child (::GtkPaned* paned /*none*/, gboolean resize);
void base::PanedBase::set_resize_end_child (gboolean resize) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gboolean resize);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_resize_end_child;
  auto resize_to_c = resize;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (resize_to_c));
}

// void gtk_paned_set_resize_start_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_resize_start_child (::GtkPaned* paned /*none*/, gboolean resize);
void base::PanedBase::set_resize_start_child (gboolean resize) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gboolean resize);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_resize_start_child;
  auto resize_to_c = resize;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (resize_to_c));
}

// void gtk_paned_set_shrink_end_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_shrink_end_child (::GtkPaned* paned /*none*/, gboolean resize);
void base::PanedBase::set_shrink_end_child (gboolean resize) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gboolean resize);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_shrink_end_child;
  auto resize_to_c = resize;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (resize_to_c));
}

// void gtk_paned_set_shrink_start_child (GtkPaned* paned /*none*/, gboolean resize);
// void gtk_paned_set_shrink_start_child (::GtkPaned* paned /*none*/, gboolean resize);
void base::PanedBase::set_shrink_start_child (gboolean resize) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gboolean resize);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_shrink_start_child;
  auto resize_to_c = resize;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (resize_to_c));
}

// void gtk_paned_set_start_child (GtkPaned* paned /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_paned_set_start_child (::GtkPaned* paned /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::PanedBase::set_start_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_start_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::PanedBase::set_start_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_start_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkPaned*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_paned_set_wide_handle (GtkPaned* paned /*none*/, gboolean wide);
// void gtk_paned_set_wide_handle (::GtkPaned* paned /*none*/, gboolean wide);
void base::PanedBase::set_wide_handle (gboolean wide) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaned* paned, gboolean wide);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_paned_set_wide_handle;
  auto wide_to_c = wide;
  call_wrap_v ((::GtkPaned*) (gobj_()), (gboolean) (wide_to_c));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/paned_extra_def_impl.hpp>)
#include <gtk/paned_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/paned_extra_impl.hpp>)
#include <gtk/paned_extra_impl.hpp>
#endif
#endif

#endif
