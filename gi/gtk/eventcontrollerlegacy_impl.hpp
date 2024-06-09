// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERLEGACY_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERLEGACY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* /*full*/ gtk_event_controller_legacy_new ();
// ::GtkEventControllerLegacy* /*full*/ gtk_event_controller_legacy_new ();
Gtk::EventControllerLegacy base::EventControllerLegacyBase::new_ () noexcept
{
  typedef ::GtkEventControllerLegacy* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_legacy_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerlegacy_extra_def_impl.hpp>)
#include <gtk/eventcontrollerlegacy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerlegacy_extra_impl.hpp>)
#include <gtk/eventcontrollerlegacy_extra_impl.hpp>
#endif
#endif

#endif
