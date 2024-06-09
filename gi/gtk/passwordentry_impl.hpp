// AUTO-GENERATED

#ifndef _GI_GTK_PASSWORDENTRY_IMPL_HPP_
#define _GI_GTK_PASSWORDENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Editable PasswordEntryBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PasswordEntryBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ gtk_password_entry_new ();
// ::GtkPasswordEntry* /*none*/ gtk_password_entry_new ();
Gtk::PasswordEntry base::PasswordEntryBase::new_ () noexcept
{
  typedef ::GtkPasswordEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_password_entry_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GMenuModel* /*none,nullable*/ gtk_password_entry_get_extra_menu (GtkPasswordEntry* entry /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_password_entry_get_extra_menu (::GtkPasswordEntry* entry /*none*/);
Gio::MenuModel base::PasswordEntryBase::get_extra_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkPasswordEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_password_entry_get_extra_menu;
  auto _temp_ret = call_wrap_v ((::GtkPasswordEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_password_entry_get_show_peek_icon (GtkPasswordEntry* entry /*none*/);
// gboolean gtk_password_entry_get_show_peek_icon (::GtkPasswordEntry* entry /*none*/);
bool base::PasswordEntryBase::get_show_peek_icon () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPasswordEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_password_entry_get_show_peek_icon;
  auto _temp_ret = call_wrap_v ((::GtkPasswordEntry*) (gobj_()));
  return _temp_ret;
}

// void gtk_password_entry_set_extra_menu (GtkPasswordEntry* entry /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_password_entry_set_extra_menu (::GtkPasswordEntry* entry /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::PasswordEntryBase::set_extra_menu (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkPasswordEntry* entry, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_password_entry_set_extra_menu;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkPasswordEntry*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::PasswordEntryBase::set_extra_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkPasswordEntry* entry, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_password_entry_set_extra_menu;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkPasswordEntry*) (gobj_()), (::GMenuModel*) (model_to_c));
}

// void gtk_password_entry_set_show_peek_icon (GtkPasswordEntry* entry /*none*/, gboolean show_peek_icon);
// void gtk_password_entry_set_show_peek_icon (::GtkPasswordEntry* entry /*none*/, gboolean show_peek_icon);
void base::PasswordEntryBase::set_show_peek_icon (gboolean show_peek_icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkPasswordEntry* entry, gboolean show_peek_icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_password_entry_set_show_peek_icon;
  auto show_peek_icon_to_c = show_peek_icon;
  call_wrap_v ((::GtkPasswordEntry*) (gobj_()), (gboolean) (show_peek_icon_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/passwordentry_extra_def_impl.hpp>)
#include <gtk/passwordentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/passwordentry_extra_impl.hpp>)
#include <gtk/passwordentry_extra_impl.hpp>
#endif
#endif

#endif
