// AUTO-GENERATED

#ifndef _GI_GTK_NOTHINGACTION_IMPL_HPP_
#define _GI_GTK_NOTHINGACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*none*/ gtk_nothing_action_get ();
// ::GtkNothingAction* /*none*/ gtk_nothing_action_get ();
Gtk::NothingAction base::NothingActionBase::get () noexcept
{
  typedef ::GtkNothingAction* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_nothing_action_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/nothingaction_extra_def_impl.hpp>)
#include <gtk/nothingaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/nothingaction_extra_impl.hpp>)
#include <gtk/nothingaction_extra_impl.hpp>
#endif
#endif

#endif
