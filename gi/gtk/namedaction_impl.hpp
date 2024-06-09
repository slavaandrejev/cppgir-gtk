// AUTO-GENERATED

#ifndef _GI_GTK_NAMEDACTION_IMPL_HPP_
#define _GI_GTK_NAMEDACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutAction* /*full*/ gtk_named_action_new (const char* name /*none*/);
// ::GtkNamedAction* /*full*/ gtk_named_action_new (const char* name /*none*/);
Gtk::NamedAction base::NamedActionBase::new_ (const gi::cstring_v name) noexcept
{
  typedef ::GtkNamedAction* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_named_action_new;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_named_action_get_action_name (GtkNamedAction* self /*none*/);
// const char* /*none*/ gtk_named_action_get_action_name (::GtkNamedAction* self /*none*/);
gi::cstring_v base::NamedActionBase::get_action_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNamedAction* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_named_action_get_action_name;
  auto _temp_ret = call_wrap_v ((::GtkNamedAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/namedaction_extra_def_impl.hpp>)
#include <gtk/namedaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/namedaction_extra_impl.hpp>)
#include <gtk/namedaction_extra_impl.hpp>
#endif
#endif

#endif
