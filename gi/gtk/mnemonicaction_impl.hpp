// AUTO-GENERATED

#ifndef _GI_GTK_MNEMONICACTION_IMPL_HPP_
#define _GI_GTK_MNEMONICACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*none*/ gtk_mnemonic_action_get ();
// ::GtkMnemonicAction* /*none*/ gtk_mnemonic_action_get ();
Gtk::MnemonicAction base::MnemonicActionBase::get () noexcept
{
  typedef ::GtkMnemonicAction* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mnemonic_action_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mnemonicaction_extra_def_impl.hpp>)
#include <gtk/mnemonicaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mnemonicaction_extra_impl.hpp>)
#include <gtk/mnemonicaction_extra_impl.hpp>
#endif
#endif

#endif