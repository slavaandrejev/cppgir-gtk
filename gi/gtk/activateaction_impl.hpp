// AUTO-GENERATED

#ifndef _GI_GTK_ACTIVATEACTION_IMPL_HPP_
#define _GI_GTK_ACTIVATEACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*none*/ gtk_activate_action_get ();
// ::GtkActivateAction* /*none*/ gtk_activate_action_get ();
Gtk::ActivateAction base::ActivateActionBase::get () noexcept
{
  typedef ::GtkActivateAction* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_activate_action_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/activateaction_extra_def_impl.hpp>)
#include <gtk/activateaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/activateaction_extra_impl.hpp>)
#include <gtk/activateaction_extra_impl.hpp>
#endif
#endif

#endif
