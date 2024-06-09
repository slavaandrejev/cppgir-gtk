// AUTO-GENERATED

#ifndef _GI_GIO_REMOTEACTIONGROUP_IMPL_HPP_
#define _GI_GIO_REMOTEACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_remote_action_group_activate_action_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/, GVariant* platform_data /*none*/);
// void g_remote_action_group_activate_action_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/, ::GVariant* platform_data /*none*/);
void base::RemoteActionGroupBase::activate_action_full (const gi::cstring_v action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept
{
  typedef void (*call_wrap_t) (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* parameter, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_remote_action_group_activate_action_full;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GRemoteActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c), (::GVariant*) (platform_data_to_c));
}
void base::RemoteActionGroupBase::activate_action_full (const gi::cstring_v action_name, GLib::Variant platform_data) noexcept
{
  typedef void (*call_wrap_t) (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* parameter, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_remote_action_group_activate_action_full;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto parameter_to_c = nullptr;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GRemoteActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c), (::GVariant*) (platform_data_to_c));
}

// void g_remote_action_group_change_action_state_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/, GVariant* platform_data /*none*/);
// void g_remote_action_group_change_action_state_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/, ::GVariant* platform_data /*none*/);
void base::RemoteActionGroupBase::change_action_state_full (const gi::cstring_v action_name, GLib::Variant value, GLib::Variant platform_data) noexcept
{
  typedef void (*call_wrap_t) (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* value, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_remote_action_group_change_action_state_full;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GRemoteActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (value_to_c), (::GVariant*) (platform_data_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/remoteactiongroup_extra_def_impl.hpp>)
#include <gio/remoteactiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/remoteactiongroup_extra_impl.hpp>)
#include <gio/remoteactiongroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void RemoteActionGroupInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GRemoteActionGroupInterface *methods = (::GRemoteActionGroupInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate_action_full) methods->activate_action_full = (decltype (methods->activate_action_full)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name, GLib::Variant parameter, GLib::Variant platform_data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::activate_action_full_>;
  if (init_data.change_action_state_full) methods->change_action_state_full = (decltype (methods->change_action_state_full)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name, GLib::Variant value, GLib::Variant platform_data), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::change_action_state_full_>;
}

// void RemoteActionGroup::activate_action_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/, GVariant* platform_data /*none*/);
// void RemoteActionGroup::activate_action_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/, ::GVariant* platform_data /*none*/);
void RemoteActionGroupInterfaceClassImpl::activate_action_full_ (const gi::cstring_v action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->activate_action_full) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* parameter, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_action_full;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GRemoteActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c), (::GVariant*) (platform_data_to_c));
}

// void RemoteActionGroup::change_action_state_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/, GVariant* platform_data /*none*/);
// void RemoteActionGroup::change_action_state_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/, ::GVariant* platform_data /*none*/);
void RemoteActionGroupInterfaceClassImpl::change_action_state_full_ (const gi::cstring_v action_name, GLib::Variant value, GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->change_action_state_full) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* value, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_action_state_full;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GRemoteActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (value_to_c), (::GVariant*) (platform_data_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
