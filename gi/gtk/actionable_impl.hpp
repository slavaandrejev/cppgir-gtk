// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONABLE_IMPL_HPP_
#define _GI_GTK_ACTIONABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// const char* /*none,nullable*/ gtk_actionable_get_action_name (GtkActionable* actionable /*none*/);
// const char* /*none,nullable*/ gtk_actionable_get_action_name (::GtkActionable* actionable /*none*/);
gi::cstring_v base::ActionableBase::get_action_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkActionable* actionable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_get_action_name;
  auto _temp_ret = call_wrap_v ((::GtkActionable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none,nullable*/ gtk_actionable_get_action_target_value (GtkActionable* actionable /*none*/);
// ::GVariant* /*none,nullable*/ gtk_actionable_get_action_target_value (::GtkActionable* actionable /*none*/);
GLib::Variant base::ActionableBase::get_action_target_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkActionable* actionable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_get_action_target_value;
  auto _temp_ret = call_wrap_v ((::GtkActionable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_actionable_set_action_name (GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
// void gtk_actionable_set_action_name (::GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
void base::ActionableBase::set_action_name (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_set_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (action_name_to_c));
}
void base::ActionableBase::set_action_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_set_action_name;
  auto action_name_to_c = nullptr;
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (action_name_to_c));
}

// void gtk_actionable_set_action_target (GtkActionable* actionable /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// void gtk_actionable_set_action_target (::GtkActionable* actionable /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_actionable_set_action_target_value (GtkActionable* actionable /*none*/, GVariant* target_value /*none,nullable*/);
// void gtk_actionable_set_action_target_value (::GtkActionable* actionable /*none*/, ::GVariant* target_value /*none,nullable*/);
void base::ActionableBase::set_action_target_value (GLib::Variant target_value) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_set_action_target_value;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none);
  call_wrap_v ((::GtkActionable*) (gobj_()), (::GVariant*) (target_value_to_c));
}
void base::ActionableBase::set_action_target_value () noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_set_action_target_value;
  auto target_value_to_c = nullptr;
  call_wrap_v ((::GtkActionable*) (gobj_()), (::GVariant*) (target_value_to_c));
}

// void gtk_actionable_set_detailed_action_name (GtkActionable* actionable /*none*/, const char* detailed_action_name /*none*/);
// void gtk_actionable_set_detailed_action_name (::GtkActionable* actionable /*none*/, const char* detailed_action_name /*none*/);
void base::ActionableBase::set_detailed_action_name (const gi::cstring_v detailed_action_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* detailed_action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_actionable_set_detailed_action_name;
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none);
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (detailed_action_name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra_def_impl.hpp>)
#include <gtk/actionable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra_impl.hpp>)
#include <gtk/actionable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ActionableInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkActionableInterface *methods = (::GtkActionableInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_action_name) methods->get_action_name = (decltype (methods->get_action_name)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_action_name_>;
  if (init_data.get_action_target_value) methods->get_action_target_value = (decltype (methods->get_action_target_value)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_action_target_value_>;
  if (init_data.set_action_name) methods->set_action_name = (decltype (methods->set_action_name)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_action_name_>;
  if (init_data.set_action_target_value) methods->set_action_target_value = (decltype (methods->set_action_target_value)) detail::method_wrapper<self, void (*) (GLib::Variant target_value), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_action_target_value_>;
}

// const char* /*none,nullable*/ Actionable::get_action_name (GtkActionable* actionable /*none*/);
// const char* /*none,nullable*/ Actionable::get_action_name (::GtkActionable* actionable /*none*/);
gi::cstring_v ActionableInterfaceClassImpl::get_action_name_ () noexcept
{
  if (!get_struct_()->get_action_name) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GtkActionable* actionable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_name;
  auto _temp_ret = call_wrap_v ((::GtkActionable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none,nullable*/ Actionable::get_action_target_value (GtkActionable* actionable /*none*/);
// ::GVariant* /*none,nullable*/ Actionable::get_action_target_value (::GtkActionable* actionable /*none*/);
GLib::Variant ActionableInterfaceClassImpl::get_action_target_value_ () noexcept
{
  if (!get_struct_()->get_action_target_value) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GtkActionable* actionable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_target_value;
  auto _temp_ret = call_wrap_v ((::GtkActionable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void Actionable::set_action_name (GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
// void Actionable::set_action_name (::GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
void ActionableInterfaceClassImpl::set_action_name_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->set_action_name) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (action_name_to_c));
}

// void Actionable::set_action_target_value (GtkActionable* actionable /*none*/, GVariant* target_value /*none,nullable*/);
// void Actionable::set_action_target_value (::GtkActionable* actionable /*none*/, ::GVariant* target_value /*none,nullable*/);
void ActionableInterfaceClassImpl::set_action_target_value_ (GLib::Variant target_value) noexcept
{
  if (!get_struct_()->set_action_target_value) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkActionable* actionable, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_action_target_value;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none);
  call_wrap_v ((::GtkActionable*) (gobj_()), (::GVariant*) (target_value_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
