// AUTO-GENERATED

#ifndef _GI_GTK_SIGNALACTION_IMPL_HPP_
#define _GI_GTK_SIGNALACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*full*/ gtk_signal_action_new (const char* signal_name /*none*/);
// ::GtkSignalAction* /*full*/ gtk_signal_action_new (const char* signal_name /*none*/);
Gtk::SignalAction base::SignalActionBase::new_ (const gi::cstring_v signal_name) noexcept
{
  typedef ::GtkSignalAction* (*call_wrap_t) (const char* signal_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_signal_action_new;
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (signal_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_signal_action_get_signal_name (GtkSignalAction* self /*none*/);
// const char* /*none*/ gtk_signal_action_get_signal_name (::GtkSignalAction* self /*none*/);
gi::cstring_v base::SignalActionBase::get_signal_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkSignalAction* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_signal_action_get_signal_name;
  auto _temp_ret = call_wrap_v ((::GtkSignalAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/signalaction_extra_def_impl.hpp>)
#include <gtk/signalaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/signalaction_extra_impl.hpp>)
#include <gtk/signalaction_extra_impl.hpp>
#endif
#endif

#endif
