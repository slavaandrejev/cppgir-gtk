// AUTO-GENERATED

#ifndef _GI_GTK_CALLBACKACTION_IMPL_HPP_
#define _GI_GTK_CALLBACKACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*full*/ gtk_callback_action_new (GtkShortcutFunc callback /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none*/);
// ::GtkCallbackAction* /*full*/ gtk_callback_action_new (Gtk::ShortcutFunc::cfunction_type callback /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
Gtk::CallbackAction base::CallbackActionBase::new_ (Gtk::ShortcutFunc callback) noexcept
{
  typedef ::GtkCallbackAction* (*call_wrap_t) (Gtk::ShortcutFunc::cfunction_type callback, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_callback_action_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((Gtk::ShortcutFunc::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/callbackaction_extra_def_impl.hpp>)
#include <gtk/callbackaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/callbackaction_extra_impl.hpp>)
#include <gtk/callbackaction_extra_impl.hpp>
#endif
#endif

#endif
