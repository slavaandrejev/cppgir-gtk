// AUTO-GENERATED

#ifndef _GI_GTK_KEYVALTRIGGER_IMPL_HPP_
#define _GI_GTK_KEYVALTRIGGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutTrigger* /*full*/ gtk_keyval_trigger_new (guint keyval, GdkModifierType modifiers);
// ::GtkKeyvalTrigger* /*full*/ gtk_keyval_trigger_new (guint keyval, ::GdkModifierType modifiers);
Gtk::KeyvalTrigger base::KeyvalTriggerBase::new_ (guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef ::GtkKeyvalTrigger* (*call_wrap_t) (guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_keyval_trigger_new;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint gtk_keyval_trigger_get_keyval (GtkKeyvalTrigger* self /*none*/);
// guint gtk_keyval_trigger_get_keyval (::GtkKeyvalTrigger* self /*none*/);
guint base::KeyvalTriggerBase::get_keyval () noexcept
{
  typedef guint (*call_wrap_t) (::GtkKeyvalTrigger* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_keyval_trigger_get_keyval;
  auto _temp_ret = call_wrap_v ((::GtkKeyvalTrigger*) (gobj_()));
  return _temp_ret;
}

// GdkModifierType gtk_keyval_trigger_get_modifiers (GtkKeyvalTrigger* self /*none*/);
// ::GdkModifierType gtk_keyval_trigger_get_modifiers (::GtkKeyvalTrigger* self /*none*/);
Gdk::ModifierType base::KeyvalTriggerBase::get_modifiers () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GtkKeyvalTrigger* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_keyval_trigger_get_modifiers;
  auto _temp_ret = call_wrap_v ((::GtkKeyvalTrigger*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/keyvaltrigger_extra_def_impl.hpp>)
#include <gtk/keyvaltrigger_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/keyvaltrigger_extra_impl.hpp>)
#include <gtk/keyvaltrigger_extra_impl.hpp>
#endif
#endif

#endif
