// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEACTION_IMPL_HPP_
#define _GI_GIO_SIMPLEACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Action SimpleActionBase::interface_ (gi::interface_tag<Gio::Action>)
{ return gi::wrap ((Gio::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SimpleActionBase::operator Gio::Action ()
{ return interface_ (gi::interface_tag<Gio::Action>()); }

// GSimpleAction* /*full*/ g_simple_action_new (const gchar* name /*none*/, const GVariantType* parameter_type /*none,nullable*/);
// ::GSimpleAction* /*full*/ g_simple_action_new (const char* name /*none*/, const ::GVariantType* parameter_type /*none,nullable*/);
Gio::SimpleAction base::SimpleActionBase::new_ (const gi::cstring_v name, const GLib::VariantType_Ref parameter_type) noexcept
{
  typedef ::GSimpleAction* (*call_wrap_t) (const char* name, const ::GVariantType* parameter_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_action_new;
  auto parameter_type_to_c = gi::unwrap (parameter_type, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GVariantType*) (parameter_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SimpleAction base::SimpleActionBase::new_ (const gi::cstring_v name) noexcept
{
  typedef ::GSimpleAction* (*call_wrap_t) (const char* name, const ::GVariantType* parameter_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_action_new;
  auto parameter_type_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GVariantType*) (parameter_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSimpleAction* /*full*/ g_simple_action_new_stateful (const gchar* name /*none*/, const GVariantType* parameter_type /*none,nullable*/, GVariant* state /*none*/);
// ::GSimpleAction* /*full*/ g_simple_action_new_stateful (const char* name /*none*/, const ::GVariantType* parameter_type /*none,nullable*/, ::GVariant* state /*none*/);
Gio::SimpleAction base::SimpleActionBase::new_stateful (const gi::cstring_v name, const GLib::VariantType_Ref parameter_type, GLib::Variant state) noexcept
{
  typedef ::GSimpleAction* (*call_wrap_t) (const char* name, const ::GVariantType* parameter_type, ::GVariant* state);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_action_new_stateful;
  auto state_to_c = gi::unwrap (state, gi::transfer_none);
  auto parameter_type_to_c = gi::unwrap (parameter_type, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GVariantType*) (parameter_type_to_c), (::GVariant*) (state_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SimpleAction base::SimpleActionBase::new_stateful (const gi::cstring_v name, GLib::Variant state) noexcept
{
  typedef ::GSimpleAction* (*call_wrap_t) (const char* name, const ::GVariantType* parameter_type, ::GVariant* state);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_action_new_stateful;
  auto state_to_c = gi::unwrap (state, gi::transfer_none);
  auto parameter_type_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GVariantType*) (parameter_type_to_c), (::GVariant*) (state_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_simple_action_set_enabled (GSimpleAction* simple /*none*/, gboolean enabled);
// void g_simple_action_set_enabled (::GSimpleAction* simple /*none*/, gboolean enabled);
void base::SimpleActionBase::set_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleAction* simple, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_action_set_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::GSimpleAction*) (gobj_()), (gboolean) (enabled_to_c));
}

// void g_simple_action_set_state (GSimpleAction* simple /*none*/, GVariant* value /*none*/);
// void g_simple_action_set_state (::GSimpleAction* simple /*none*/, ::GVariant* value /*none*/);
void base::SimpleActionBase::set_state (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleAction* simple, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_action_set_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GSimpleAction*) (gobj_()), (::GVariant*) (value_to_c));
}

// void g_simple_action_set_state_hint (GSimpleAction* simple /*none*/, GVariant* state_hint /*none,nullable*/);
// void g_simple_action_set_state_hint (::GSimpleAction* simple /*none*/, ::GVariant* state_hint /*none,nullable*/);
void base::SimpleActionBase::set_state_hint (GLib::Variant state_hint) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleAction* simple, ::GVariant* state_hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_action_set_state_hint;
  auto state_hint_to_c = gi::unwrap (state_hint, gi::transfer_none);
  call_wrap_v ((::GSimpleAction*) (gobj_()), (::GVariant*) (state_hint_to_c));
}
void base::SimpleActionBase::set_state_hint () noexcept
{
  typedef void (*call_wrap_t) (::GSimpleAction* simple, ::GVariant* state_hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_simple_action_set_state_hint;
  auto state_hint_to_c = nullptr;
  call_wrap_v ((::GSimpleAction*) (gobj_()), (::GVariant*) (state_hint_to_c));
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleaction_extra_def_impl.hpp>)
#include <gio/simpleaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleaction_extra_impl.hpp>)
#include <gio/simpleaction_extra_impl.hpp>
#endif
#endif

#endif
