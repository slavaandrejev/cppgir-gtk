// AUTO-GENERATED

#ifndef _GI_GIO_PERMISSION_IMPL_HPP_
#define _GI_GIO_PERMISSION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_permission_acquire (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_permission_acquire (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::PermissionBase::acquire (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::acquire ()
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::acquire (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::PermissionBase::acquire (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_permission_acquire_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_permission_acquire_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PermissionBase::acquire_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PermissionBase::acquire_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_permission_acquire_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_permission_acquire_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::PermissionBase::acquire_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::acquire_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_acquire_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_permission_get_allowed (GPermission* permission /*none*/);
// gboolean g_permission_get_allowed (::GPermission* permission /*none*/);
bool base::PermissionBase::get_allowed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_get_allowed;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()));
  return _temp_ret;
}

// gboolean g_permission_get_can_acquire (GPermission* permission /*none*/);
// gboolean g_permission_get_can_acquire (::GPermission* permission /*none*/);
bool base::PermissionBase::get_can_acquire () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_get_can_acquire;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()));
  return _temp_ret;
}

// gboolean g_permission_get_can_release (GPermission* permission /*none*/);
// gboolean g_permission_get_can_release (::GPermission* permission /*none*/);
bool base::PermissionBase::get_can_release () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_get_can_release;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()));
  return _temp_ret;
}

// void g_permission_impl_update (GPermission* permission /*none*/, gboolean allowed, gboolean can_acquire, gboolean can_release);
// void g_permission_impl_update (::GPermission* permission /*none*/, gboolean allowed, gboolean can_acquire, gboolean can_release);
void base::PermissionBase::impl_update (gboolean allowed, gboolean can_acquire, gboolean can_release) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, gboolean allowed, gboolean can_acquire, gboolean can_release);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_impl_update;
  auto can_release_to_c = can_release;
  auto can_acquire_to_c = can_acquire;
  auto allowed_to_c = allowed;
  call_wrap_v ((::GPermission*) (gobj_()), (gboolean) (allowed_to_c), (gboolean) (can_acquire_to_c), (gboolean) (can_release_to_c));
}

// gboolean g_permission_release (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_permission_release (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::PermissionBase::release (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::release ()
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::release (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::PermissionBase::release (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_permission_release_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_permission_release_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::PermissionBase::release_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PermissionBase::release_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_permission_release_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_permission_release_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::PermissionBase::release_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PermissionBase::release_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_permission_release_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/permission_extra_def_impl.hpp>)
#include <gio/permission_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/permission_extra_impl.hpp>)
#include <gio/permission_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PermissionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GPermissionClass *methods = (::GPermissionClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.acquire) methods->acquire = (decltype (methods->acquire)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::acquire_>;
  if (init_data.acquire_async) methods->acquire_async = (decltype (methods->acquire_async)) detail::method_wrapper<self, void (*) (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<1, 2>>>, void  (::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::acquire_async_>;
  if (init_data.acquire_finish) methods->acquire_finish = (decltype (methods->acquire_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::acquire_finish_>;
  if (init_data.release) methods->release = (decltype (methods->release)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::release_>;
  if (init_data.release_async) methods->release_async = (decltype (methods->release_async)) detail::method_wrapper<self, void (*) (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<1, 2>>>, void  (::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::release_async_>;
  if (init_data.release_finish) methods->release_finish = (decltype (methods->release_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::release_finish_>;
}

// gboolean Permission::acquire (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Permission::acquire (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool PermissionClass::acquire_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->acquire) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->acquire;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Permission::acquire_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Permission::acquire_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void PermissionClass::acquire_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->acquire_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->acquire_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Permission::acquire_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Permission::acquire_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool PermissionClass::acquire_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->acquire_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->acquire_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean Permission::release (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Permission::release (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool PermissionClass::release_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->release) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->release;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Permission::release_async (GPermission* permission /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Permission::release_async (::GPermission* permission /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void PermissionClass::release_async_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->release_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GPermission* permission, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->release_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GPermission*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Permission::release_finish (GPermission* permission /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Permission::release_finish (::GPermission* permission /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool PermissionClass::release_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->release_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GPermission* permission, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->release_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GPermission*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
