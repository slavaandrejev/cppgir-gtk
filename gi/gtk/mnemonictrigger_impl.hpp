// AUTO-GENERATED

#ifndef _GI_GTK_MNEMONICTRIGGER_IMPL_HPP_
#define _GI_GTK_MNEMONICTRIGGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutTrigger* /*full*/ gtk_mnemonic_trigger_new (guint keyval);
// ::GtkMnemonicTrigger* /*full*/ gtk_mnemonic_trigger_new (guint keyval);
Gtk::MnemonicTrigger base::MnemonicTriggerBase::new_ (guint keyval) noexcept
{
  typedef ::GtkMnemonicTrigger* (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mnemonic_trigger_new;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint gtk_mnemonic_trigger_get_keyval (GtkMnemonicTrigger* self /*none*/);
// guint gtk_mnemonic_trigger_get_keyval (::GtkMnemonicTrigger* self /*none*/);
guint base::MnemonicTriggerBase::get_keyval () noexcept
{
  typedef guint (*call_wrap_t) (::GtkMnemonicTrigger* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mnemonic_trigger_get_keyval;
  auto _temp_ret = call_wrap_v ((::GtkMnemonicTrigger*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mnemonictrigger_extra_def_impl.hpp>)
#include <gtk/mnemonictrigger_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mnemonictrigger_extra_impl.hpp>)
#include <gtk/mnemonictrigger_extra_impl.hpp>
#endif
#endif

#endif
