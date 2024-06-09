// AUTO-GENERATED

#ifndef _GI_GTK_PADCONTROLLER_IMPL_HPP_
#define _GI_GTK_PADCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPadController* /*full*/ gtk_pad_controller_new (GActionGroup* group /*none*/, GdkDevice* pad /*none,nullable*/);
// ::GtkPadController* /*full*/ gtk_pad_controller_new (::GActionGroup* group /*none*/, ::GdkDevice* pad /*none,nullable*/);
Gtk::PadController base::PadControllerBase::new_ (Gio::ActionGroup group, Gdk::Device pad) noexcept
{
  typedef ::GtkPadController* (*call_wrap_t) (::GActionGroup* group, ::GdkDevice* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_pad_controller_new;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none);
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (group_to_c), (::GdkDevice*) (pad_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PadController base::PadControllerBase::new_ (Gio::ActionGroup group) noexcept
{
  typedef ::GtkPadController* (*call_wrap_t) (::GActionGroup* group, ::GdkDevice* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_pad_controller_new;
  auto pad_to_c = nullptr;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (group_to_c), (::GdkDevice*) (pad_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_pad_controller_set_action (GtkPadController* controller /*none*/, GtkPadActionType type, int index, int mode, const char* label /*none*/, const char* action_name /*none*/);
// void gtk_pad_controller_set_action (::GtkPadController* controller /*none*/, ::GtkPadActionType type, gint index, gint mode, const char* label /*none*/, const char* action_name /*none*/);
void base::PadControllerBase::set_action (Gtk::PadActionType type, gint index, gint mode, const gi::cstring_v label, const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPadController* controller, ::GtkPadActionType type, gint index, gint mode, const char* label, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_pad_controller_set_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto mode_to_c = mode;
  auto index_to_c = index;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkPadController*) (gobj_()), (::GtkPadActionType) (type_to_c), (gint) (index_to_c), (gint) (mode_to_c), (const char*) (label_to_c), (const char*) (action_name_to_c));
}

// void gtk_pad_controller_set_action_entries (GtkPadController* controller /*none*/, const GtkPadActionEntry* entries /*none*/, int n_entries);
// void gtk_pad_controller_set_action_entries (::GtkPadController* controller /*none*/, const ::GtkPadActionEntry** entries /*none*/, gint n_entries);
// SKIP; entries in boxed array not supported (depth 1)


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/padcontroller_extra_def_impl.hpp>)
#include <gtk/padcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/padcontroller_extra_impl.hpp>)
#include <gtk/padcontroller_extra_impl.hpp>
#endif
#endif

#endif
