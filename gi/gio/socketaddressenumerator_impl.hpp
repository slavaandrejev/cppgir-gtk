// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETADDRESSENUMERATOR_IMPL_HPP_
#define _GI_GIO_SOCKETADDRESSENUMERATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::SocketAddress base::SocketAddressEnumeratorBase::next (Gio::Cancellable cancellable)
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next ()
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next (GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_socket_address_enumerator_next_async (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_socket_address_enumerator_next_async (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SocketAddressEnumeratorBase::next_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketAddressEnumeratorBase::next_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next_finish (GSocketAddressEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ g_socket_address_enumerator_next_finish (::GSocketAddressEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::SocketAddress base::SocketAddressEnumeratorBase::next_finish (Gio::AsyncResult result)
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_address_enumerator_next_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra_def_impl.hpp>)
#include <gio/socketaddressenumerator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra_impl.hpp>)
#include <gio/socketaddressenumerator_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketAddressEnumeratorClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSocketAddressEnumeratorClass *methods = (::GSocketAddressEnumeratorClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.next) methods->next = (decltype (methods->next)) detail::method_wrapper<self, Gio::SocketAddress (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::next_>;
  if (init_data.next_async) methods->next_async = (decltype (methods->next_async)) detail::method_wrapper<self, void (*) (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<1, 2>>>, void  (::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::next_async_>;
  if (init_data.next_finish) methods->next_finish = (decltype (methods->next_finish)) detail::method_wrapper<self, Gio::SocketAddress (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::next_finish_>;
}

// GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::SocketAddress SocketAddressEnumeratorClass::next_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->next) { g_critical ("no method in class struct"); return {}; }
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void SocketAddressEnumerator::next_async (GSocketAddressEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void SocketAddressEnumerator::next_async (::GSocketAddressEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void SocketAddressEnumeratorClass::next_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->next_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next_finish (GSocketAddressEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GSocketAddress* /*full,nullable*/ SocketAddressEnumerator::next_finish (::GSocketAddressEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::SocketAddress SocketAddressEnumeratorClass::next_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->next_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
