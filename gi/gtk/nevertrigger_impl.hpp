// AUTO-GENERATED

#ifndef _GI_GTK_NEVERTRIGGER_IMPL_HPP_
#define _GI_GTK_NEVERTRIGGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutTrigger* /*none*/ gtk_never_trigger_get ();
// ::GtkNeverTrigger* /*none*/ gtk_never_trigger_get ();
Gtk::NeverTrigger base::NeverTriggerBase::get () noexcept
{
  typedef ::GtkNeverTrigger* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_never_trigger_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/nevertrigger_extra_def_impl.hpp>)
#include <gtk/nevertrigger_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/nevertrigger_extra_impl.hpp>)
#include <gtk/nevertrigger_extra_impl.hpp>
#endif
#endif

#endif
