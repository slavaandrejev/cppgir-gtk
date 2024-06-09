// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONNECTABLE_IMPL_HPP_
#define _GI_GIO_SOCKETCONNECTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddressEnumerator* /*full*/ g_socket_connectable_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ g_socket_connectable_enumerate (::GSocketConnectable* connectable /*none*/);
Gio::SocketAddressEnumerator base::SocketConnectableBase::enumerate () noexcept
{
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connectable_enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketAddressEnumerator* /*full*/ g_socket_connectable_proxy_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ g_socket_connectable_proxy_enumerate (::GSocketConnectable* connectable /*none*/);
Gio::SocketAddressEnumerator base::SocketConnectableBase::proxy_enumerate () noexcept
{
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connectable_proxy_enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_socket_connectable_to_string (GSocketConnectable* connectable /*none*/);
// char* /*full*/ g_socket_connectable_to_string (::GSocketConnectable* connectable /*none*/);
gi::cstring base::SocketConnectableBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connectable_to_string;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketconnectable_extra_def_impl.hpp>)
#include <gio/socketconnectable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketconnectable_extra_impl.hpp>)
#include <gio/socketconnectable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketConnectableIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GSocketConnectableIface *methods = (::GSocketConnectableIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.enumerate) methods->enumerate = (decltype (methods->enumerate)) detail::method_wrapper<self, Gio::SocketAddressEnumerator (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::enumerate_>;
  if (init_data.proxy_enumerate) methods->proxy_enumerate = (decltype (methods->proxy_enumerate)) detail::method_wrapper<self, Gio::SocketAddressEnumerator (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::proxy_enumerate_>;
  if (init_data.to_string) methods->to_string = (decltype (methods->to_string)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::to_string_>;
}

// GSocketAddressEnumerator* /*full*/ SocketConnectable::enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ SocketConnectable::enumerate (::GSocketConnectable* connectable /*none*/);
Gio::SocketAddressEnumerator SocketConnectableIfaceClassImpl::enumerate_ () noexcept
{
  if (!get_struct_()->enumerate) { g_critical ("no method in class struct"); return {}; }
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketAddressEnumerator* /*full*/ SocketConnectable::proxy_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ SocketConnectable::proxy_enumerate (::GSocketConnectable* connectable /*none*/);
Gio::SocketAddressEnumerator SocketConnectableIfaceClassImpl::proxy_enumerate_ () noexcept
{
  if (!get_struct_()->proxy_enumerate) { g_critical ("no method in class struct"); return {}; }
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->proxy_enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ SocketConnectable::to_string (GSocketConnectable* connectable /*none*/);
// char* /*full*/ SocketConnectable::to_string (::GSocketConnectable* connectable /*none*/);
gi::cstring SocketConnectableIfaceClassImpl::to_string_ () noexcept
{
  if (!get_struct_()->to_string) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->to_string;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
