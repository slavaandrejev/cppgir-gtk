// AUTO-GENERATED

#ifndef _GI_GTK_ATCONTEXT_IMPL_HPP_
#define _GI_GTK_ATCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkATContext* /*full,nullable*/ gtk_at_context_create (GtkAccessibleRole accessible_role, GtkAccessible* accessible /*none*/, GdkDisplay* display /*none*/);
// ::GtkATContext* /*full,nullable*/ gtk_at_context_create (::GtkAccessibleRole accessible_role, ::GtkAccessible* accessible /*none*/, ::GdkDisplay* display /*none*/);
Gtk::ATContext base::ATContextBase::create (Gtk::AccessibleRole accessible_role, Gtk::Accessible accessible, Gdk::Display display) noexcept
{
  typedef ::GtkATContext* (*call_wrap_t) (::GtkAccessibleRole accessible_role, ::GtkAccessible* accessible, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_at_context_create;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none);
  auto accessible_role_to_c = gi::unwrap (accessible_role);
  auto _temp_ret = call_wrap_v ((::GtkAccessibleRole) (accessible_role_to_c), (::GtkAccessible*) (accessible_to_c), (::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkAccessible* /*none*/ gtk_at_context_get_accessible (GtkATContext* self /*none*/);
// ::GtkAccessible* /*none*/ gtk_at_context_get_accessible (::GtkATContext* self /*none*/);
Gtk::Accessible base::ATContextBase::get_accessible () noexcept
{
  typedef ::GtkAccessible* (*call_wrap_t) (::GtkATContext* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_at_context_get_accessible;
  auto _temp_ret = call_wrap_v ((::GtkATContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkAccessibleRole gtk_at_context_get_accessible_role (GtkATContext* self /*none*/);
// ::GtkAccessibleRole gtk_at_context_get_accessible_role (::GtkATContext* self /*none*/);
Gtk::AccessibleRole base::ATContextBase::get_accessible_role () noexcept
{
  typedef ::GtkAccessibleRole (*call_wrap_t) (::GtkATContext* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_at_context_get_accessible_role;
  auto _temp_ret = call_wrap_v ((::GtkATContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/atcontext_extra_def_impl.hpp>)
#include <gtk/atcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/atcontext_extra_impl.hpp>)
#include <gtk/atcontext_extra_impl.hpp>
#endif
#endif

#endif
