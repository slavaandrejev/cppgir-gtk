// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKMONITOR_IMPL_HPP_
#define _GI_GIO_NETWORKMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GNetworkMonitor* /*none*/ g_network_monitor_get_default ();
// ::GNetworkMonitor* /*none*/ g_network_monitor_get_default ();
Gio::NetworkMonitor base::NetworkMonitorBase::get_default () noexcept
{
  typedef ::GNetworkMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_network_monitor_can_reach (GNetworkMonitor* monitor /*none*/, GSocketConnectable* connectable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_network_monitor_can_reach (::GNetworkMonitor* monitor /*none*/, ::GSocketConnectable* connectable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::NetworkMonitorBase::can_reach (Gio::SocketConnectable connectable, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::NetworkMonitorBase::can_reach (Gio::SocketConnectable connectable)
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach;
  auto cancellable_to_c = nullptr;
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::NetworkMonitorBase::can_reach (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::NetworkMonitorBase::can_reach (Gio::SocketConnectable connectable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach;
  auto cancellable_to_c = nullptr;
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_network_monitor_can_reach_async (GNetworkMonitor* monitor /*none*/, GSocketConnectable* connectable /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_network_monitor_can_reach_async (::GNetworkMonitor* monitor /*none*/, ::GSocketConnectable* connectable /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::NetworkMonitorBase::can_reach_async (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::NetworkMonitorBase::can_reach_async (Gio::SocketConnectable connectable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_network_monitor_can_reach_finish (GNetworkMonitor* monitor /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_network_monitor_can_reach_finish (::GNetworkMonitor* monitor /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::NetworkMonitorBase::can_reach_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::NetworkMonitorBase::can_reach_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_can_reach_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GNetworkConnectivity g_network_monitor_get_connectivity (GNetworkMonitor* monitor /*none*/);
// ::GNetworkConnectivity g_network_monitor_get_connectivity (::GNetworkMonitor* monitor /*none*/);
Gio::NetworkConnectivity base::NetworkMonitorBase::get_connectivity () noexcept
{
  typedef ::GNetworkConnectivity (*call_wrap_t) (::GNetworkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_get_connectivity;
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_network_monitor_get_network_available (GNetworkMonitor* monitor /*none*/);
// gboolean g_network_monitor_get_network_available (::GNetworkMonitor* monitor /*none*/);
bool base::NetworkMonitorBase::get_network_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_get_network_available;
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()));
  return _temp_ret;
}

// gboolean g_network_monitor_get_network_metered (GNetworkMonitor* monitor /*none*/);
// gboolean g_network_monitor_get_network_metered (::GNetworkMonitor* monitor /*none*/);
bool base::NetworkMonitorBase::get_network_metered () noexcept
{
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_network_monitor_get_network_metered;
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkmonitor_extra_def_impl.hpp>)
#include <gio/networkmonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkmonitor_extra_impl.hpp>)
#include <gio/networkmonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void NetworkMonitorInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GNetworkMonitorInterface *methods = (::GNetworkMonitorInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_reach) methods->can_reach = (decltype (methods->can_reach)) detail::method_wrapper<self, bool (*) (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::can_reach_>;
  if (init_data.can_reach_async) methods->can_reach_async = (decltype (methods->can_reach_async)) detail::method_wrapper<self, void (*) (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::can_reach_async_>;
  if (init_data.can_reach_finish) methods->can_reach_finish = (decltype (methods->can_reach_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::can_reach_finish_>;
  if (init_data.network_changed) methods->network_changed = (decltype (methods->network_changed)) detail::method_wrapper<self, void (*) (gboolean network_available), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::network_changed_>;
}

// gboolean NetworkMonitor::can_reach (GNetworkMonitor* monitor /*none*/, GSocketConnectable* connectable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean NetworkMonitor::can_reach (::GNetworkMonitor* monitor /*none*/, ::GSocketConnectable* connectable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool NetworkMonitorInterfaceClassImpl::can_reach_ (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->can_reach) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_reach;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void NetworkMonitor::can_reach_async (GNetworkMonitor* monitor /*none*/, GSocketConnectable* connectable /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void NetworkMonitor::can_reach_async (::GNetworkMonitor* monitor /*none*/, ::GSocketConnectable* connectable /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void NetworkMonitorInterfaceClassImpl::can_reach_async_ (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->can_reach_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_reach_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none);
  call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean NetworkMonitor::can_reach_finish (GNetworkMonitor* monitor /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean NetworkMonitor::can_reach_finish (::GNetworkMonitor* monitor /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool NetworkMonitorInterfaceClassImpl::can_reach_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->can_reach_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GNetworkMonitor* monitor, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_reach_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GNetworkMonitor*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void NetworkMonitor::network_changed (GNetworkMonitor* monitor /*none*/, gboolean network_available);
// void NetworkMonitor::network_changed (::GNetworkMonitor* monitor /*none*/, gboolean network_available);
void NetworkMonitorInterfaceClassImpl::network_changed_ (gboolean network_available) noexcept
{
  if (!get_struct_()->network_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GNetworkMonitor* monitor, gboolean network_available);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->network_changed;
  auto network_available_to_c = network_available;
  call_wrap_v ((::GNetworkMonitor*) (gobj_()), (gboolean) (network_available_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
