// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUT_IMPL_HPP_
#define _GI_GTK_SHORTCUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcut* /*full*/ gtk_shortcut_new (GtkShortcutTrigger* trigger /*full,nullable*/, GtkShortcutAction* action /*full,nullable*/);
// ::GtkShortcut* /*full*/ gtk_shortcut_new (::GtkShortcutTrigger* trigger /*full,nullable*/, ::GtkShortcutAction* action /*full,nullable*/);
Gtk::Shortcut base::ShortcutBase::new_ (Gtk::ShortcutTrigger trigger, Gtk::ShortcutAction action) noexcept
{
  typedef ::GtkShortcut* (*call_wrap_t) (::GtkShortcutTrigger* trigger, ::GtkShortcutAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_new;
  auto action_to_c = gi::unwrap (action, gi::transfer_full);
  auto trigger_to_c = gi::unwrap (trigger, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkShortcutTrigger*) (trigger_to_c), (::GtkShortcutAction*) (action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::Shortcut base::ShortcutBase::new_ () noexcept
{
  typedef ::GtkShortcut* (*call_wrap_t) (::GtkShortcutTrigger* trigger, ::GtkShortcutAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_new;
  auto action_to_c = nullptr;
  auto trigger_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkShortcutTrigger*) (trigger_to_c), (::GtkShortcutAction*) (action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkShortcut* /*full*/ gtk_shortcut_new_with_arguments (GtkShortcutTrigger* trigger /*full,nullable*/, GtkShortcutAction* action /*full,nullable*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// ::GtkShortcut* /*full*/ gtk_shortcut_new_with_arguments (::GtkShortcutTrigger* trigger /*full,nullable*/, ::GtkShortcutAction* action /*full,nullable*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkShortcutAction* /*none,nullable*/ gtk_shortcut_get_action (GtkShortcut* self /*none*/);
// ::GtkShortcutAction* /*none,nullable*/ gtk_shortcut_get_action (::GtkShortcut* self /*none*/);
Gtk::ShortcutAction base::ShortcutBase::get_action () noexcept
{
  typedef ::GtkShortcutAction* (*call_wrap_t) (::GtkShortcut* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_get_action;
  auto _temp_ret = call_wrap_v ((::GtkShortcut*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none,nullable*/ gtk_shortcut_get_arguments (GtkShortcut* self /*none*/);
// ::GVariant* /*none,nullable*/ gtk_shortcut_get_arguments (::GtkShortcut* self /*none*/);
GLib::Variant base::ShortcutBase::get_arguments () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkShortcut* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_get_arguments;
  auto _temp_ret = call_wrap_v ((::GtkShortcut*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkShortcutTrigger* /*none,nullable*/ gtk_shortcut_get_trigger (GtkShortcut* self /*none*/);
// ::GtkShortcutTrigger* /*none,nullable*/ gtk_shortcut_get_trigger (::GtkShortcut* self /*none*/);
Gtk::ShortcutTrigger base::ShortcutBase::get_trigger () noexcept
{
  typedef ::GtkShortcutTrigger* (*call_wrap_t) (::GtkShortcut* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_get_trigger;
  auto _temp_ret = call_wrap_v ((::GtkShortcut*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_shortcut_set_action (GtkShortcut* self /*none*/, GtkShortcutAction* action /*full,nullable*/);
// void gtk_shortcut_set_action (::GtkShortcut* self /*none*/, ::GtkShortcutAction* action /*full,nullable*/);
void base::ShortcutBase::set_action (Gtk::ShortcutAction action) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcut* self, ::GtkShortcutAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_set_action;
  auto action_to_c = gi::unwrap (action, gi::transfer_full);
  call_wrap_v ((::GtkShortcut*) (gobj_()), (::GtkShortcutAction*) (action_to_c));
}
void base::ShortcutBase::set_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcut* self, ::GtkShortcutAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_set_action;
  auto action_to_c = nullptr;
  call_wrap_v ((::GtkShortcut*) (gobj_()), (::GtkShortcutAction*) (action_to_c));
}

// void gtk_shortcut_set_arguments (GtkShortcut* self /*none*/, GVariant* args /*none,nullable*/);
// void gtk_shortcut_set_arguments (::GtkShortcut* self /*none*/, ::GVariant* args /*none,nullable*/);
void base::ShortcutBase::set_arguments (GLib::Variant args) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcut* self, ::GVariant* args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_set_arguments;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  call_wrap_v ((::GtkShortcut*) (gobj_()), (::GVariant*) (args_to_c));
}
void base::ShortcutBase::set_arguments () noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcut* self, ::GVariant* args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_set_arguments;
  auto args_to_c = nullptr;
  call_wrap_v ((::GtkShortcut*) (gobj_()), (::GVariant*) (args_to_c));
}

// void gtk_shortcut_set_trigger (GtkShortcut* self /*none*/, GtkShortcutTrigger* trigger /*full,nullable*/);
// void gtk_shortcut_set_trigger (::GtkShortcut* self /*none*/, ::GtkShortcutTrigger* trigger /*full,nullable*/);
void base::ShortcutBase::set_trigger (Gtk::ShortcutTrigger trigger) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcut* self, ::GtkShortcutTrigger* trigger);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_set_trigger;
  auto trigger_to_c = gi::unwrap (trigger, gi::transfer_full);
  call_wrap_v ((::GtkShortcut*) (gobj_()), (::GtkShortcutTrigger*) (trigger_to_c));
}
void base::ShortcutBase::set_trigger () noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcut* self, ::GtkShortcutTrigger* trigger);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_set_trigger;
  auto trigger_to_c = nullptr;
  call_wrap_v ((::GtkShortcut*) (gobj_()), (::GtkShortcutTrigger*) (trigger_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcut_extra_def_impl.hpp>)
#include <gtk/shortcut_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcut_extra_impl.hpp>)
#include <gtk/shortcut_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ShortcutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkShortcutClass *methods = (::GtkShortcutClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
