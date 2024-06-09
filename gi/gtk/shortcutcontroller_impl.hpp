// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTCONTROLLER_IMPL_HPP_
#define _GI_GTK_SHORTCUTCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ListModel ShortcutControllerBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ShortcutControllerBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

Gtk::Buildable ShortcutControllerBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ShortcutControllerBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkEventController* /*full*/ gtk_shortcut_controller_new ();
// ::GtkShortcutController* /*full*/ gtk_shortcut_controller_new ();
Gtk::ShortcutController base::ShortcutControllerBase::new_ () noexcept
{
  typedef ::GtkShortcutController* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_controller_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkEventController* /*full*/ gtk_shortcut_controller_new_for_model (GListModel* model /*none*/);
// ::GtkShortcutController* /*full*/ gtk_shortcut_controller_new_for_model (::GListModel* model /*none*/);
Gtk::ShortcutController base::ShortcutControllerBase::new_for_model (Gio::ListModel model) noexcept
{
  typedef ::GtkShortcutController* (*call_wrap_t) (::GListModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_controller_new_for_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GListModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_shortcut_controller_add_shortcut (GtkShortcutController* self /*none*/, GtkShortcut* shortcut /*full*/);
// void gtk_shortcut_controller_add_shortcut (::GtkShortcutController* self /*none*/, ::GtkShortcut* shortcut /*full*/);
void base::ShortcutControllerBase::add_shortcut (Gtk::Shortcut shortcut) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutController* self, ::GtkShortcut* shortcut);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_controller_add_shortcut;
  auto shortcut_to_c = gi::unwrap (shortcut, gi::transfer_full);
  call_wrap_v ((::GtkShortcutController*) (gobj_()), (::GtkShortcut*) (shortcut_to_c));
}

// GdkModifierType gtk_shortcut_controller_get_mnemonics_modifiers (GtkShortcutController* self /*none*/);
// ::GdkModifierType gtk_shortcut_controller_get_mnemonics_modifiers (::GtkShortcutController* self /*none*/);
Gdk::ModifierType base::ShortcutControllerBase::get_mnemonics_modifiers () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GtkShortcutController* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_controller_get_mnemonics_modifiers;
  auto _temp_ret = call_wrap_v ((::GtkShortcutController*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkShortcutScope gtk_shortcut_controller_get_scope (GtkShortcutController* self /*none*/);
// ::GtkShortcutScope gtk_shortcut_controller_get_scope (::GtkShortcutController* self /*none*/);
Gtk::ShortcutScope base::ShortcutControllerBase::get_scope () noexcept
{
  typedef ::GtkShortcutScope (*call_wrap_t) (::GtkShortcutController* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_controller_get_scope;
  auto _temp_ret = call_wrap_v ((::GtkShortcutController*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_shortcut_controller_remove_shortcut (GtkShortcutController* self /*none*/, GtkShortcut* shortcut /*none*/);
// void gtk_shortcut_controller_remove_shortcut (::GtkShortcutController* self /*none*/, ::GtkShortcut* shortcut /*none*/);
void base::ShortcutControllerBase::remove_shortcut (Gtk::Shortcut shortcut) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutController* self, ::GtkShortcut* shortcut);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_controller_remove_shortcut;
  auto shortcut_to_c = gi::unwrap (shortcut, gi::transfer_none);
  call_wrap_v ((::GtkShortcutController*) (gobj_()), (::GtkShortcut*) (shortcut_to_c));
}

// void gtk_shortcut_controller_set_mnemonics_modifiers (GtkShortcutController* self /*none*/, GdkModifierType modifiers);
// void gtk_shortcut_controller_set_mnemonics_modifiers (::GtkShortcutController* self /*none*/, ::GdkModifierType modifiers);
void base::ShortcutControllerBase::set_mnemonics_modifiers (Gdk::ModifierType modifiers) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutController* self, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_controller_set_mnemonics_modifiers;
  auto modifiers_to_c = gi::unwrap (modifiers);
  call_wrap_v ((::GtkShortcutController*) (gobj_()), (::GdkModifierType) (modifiers_to_c));
}

// void gtk_shortcut_controller_set_scope (GtkShortcutController* self /*none*/, GtkShortcutScope scope);
// void gtk_shortcut_controller_set_scope (::GtkShortcutController* self /*none*/, ::GtkShortcutScope scope);
void base::ShortcutControllerBase::set_scope (Gtk::ShortcutScope scope) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutController* self, ::GtkShortcutScope scope);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_controller_set_scope;
  auto scope_to_c = gi::unwrap (scope);
  call_wrap_v ((::GtkShortcutController*) (gobj_()), (::GtkShortcutScope) (scope_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutcontroller_extra_def_impl.hpp>)
#include <gtk/shortcutcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutcontroller_extra_impl.hpp>)
#include <gtk/shortcutcontroller_extra_impl.hpp>
#endif
#endif

#endif
