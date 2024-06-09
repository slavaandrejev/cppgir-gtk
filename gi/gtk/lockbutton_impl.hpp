// AUTO-GENERATED

#ifndef _GI_GTK_LOCKBUTTON_IMPL_HPP_
#define _GI_GTK_LOCKBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_lock_button_new (GPermission* permission /*none,nullable*/);
// ::GtkLockButton* /*none*/ gtk_lock_button_new (::GPermission* permission /*none,nullable*/);
Gtk::LockButton base::LockButtonBase::new_ (Gio::Permission permission) noexcept
{
  typedef ::GtkLockButton* (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_new;
  auto permission_to_c = gi::unwrap (permission, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GPermission*) (permission_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::LockButton base::LockButtonBase::new_ () noexcept
{
  typedef ::GtkLockButton* (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_new;
  auto permission_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPermission*) (permission_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GPermission* /*none,nullable*/ gtk_lock_button_get_permission (GtkLockButton* button /*none*/);
// ::GPermission* /*none,nullable*/ gtk_lock_button_get_permission (::GtkLockButton* button /*none*/);
Gio::Permission base::LockButtonBase::get_permission () noexcept
{
  typedef ::GPermission* (*call_wrap_t) (::GtkLockButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_lock_button_get_permission;
  auto _temp_ret = call_wrap_v ((::GtkLockButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_lock_button_set_permission (GtkLockButton* button /*none*/, GPermission* permission /*none,nullable*/);
// void gtk_lock_button_set_permission (::GtkLockButton* button /*none*/, ::GPermission* permission /*none,nullable*/);
void base::LockButtonBase::set_permission (Gio::Permission permission) noexcept
{
  typedef void (*call_wrap_t) (::GtkLockButton* button, ::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_lock_button_set_permission;
  auto permission_to_c = gi::unwrap (permission, gi::transfer_none);
  call_wrap_v ((::GtkLockButton*) (gobj_()), (::GPermission*) (permission_to_c));
}
void base::LockButtonBase::set_permission () noexcept
{
  typedef void (*call_wrap_t) (::GtkLockButton* button, ::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_lock_button_set_permission;
  auto permission_to_c = nullptr;
  call_wrap_v ((::GtkLockButton*) (gobj_()), (::GPermission*) (permission_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/lockbutton_extra_def_impl.hpp>)
#include <gtk/lockbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/lockbutton_extra_impl.hpp>)
#include <gtk/lockbutton_extra_impl.hpp>
#endif
#endif

#endif
