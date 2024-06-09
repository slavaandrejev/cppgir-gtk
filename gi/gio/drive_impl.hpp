// AUTO-GENERATED

#ifndef _GI_GIO_DRIVE_IMPL_HPP_
#define _GI_GIO_DRIVE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_drive_can_eject (GDrive* drive /*none*/);
// gboolean g_drive_can_eject (::GDrive* drive /*none*/);
bool base::DriveBase::can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_can_eject;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_poll_for_media (GDrive* drive /*none*/);
// gboolean g_drive_can_poll_for_media (::GDrive* drive /*none*/);
bool base::DriveBase::can_poll_for_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_can_poll_for_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_start (GDrive* drive /*none*/);
// gboolean g_drive_can_start (::GDrive* drive /*none*/);
bool base::DriveBase::can_start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_can_start;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_start_degraded (GDrive* drive /*none*/);
// gboolean g_drive_can_start_degraded (::GDrive* drive /*none*/);
bool base::DriveBase::can_start_degraded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_can_start_degraded;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_can_stop (GDrive* drive /*none*/);
// gboolean g_drive_can_stop (::GDrive* drive /*none*/);
bool base::DriveBase::can_stop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_can_stop;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void g_drive_eject (GDrive* drive /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_eject (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_drive_eject_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_eject_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_drive_eject_with_operation (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_eject_with_operation (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DriveBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_eject_with_operation_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_eject_with_operation_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DriveBase::eject_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// char** /*full*/ g_drive_enumerate_identifiers (GDrive* drive /*none*/);
// char** /*full*/ g_drive_enumerate_identifiers (::GDrive* drive /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::DriveBase::enumerate_identifiers () noexcept
{
  typedef char** (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_enumerate_identifiers;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_drive_get_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ g_drive_get_icon (::GDrive* drive /*none*/);
Gio::Icon base::DriveBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_drive_get_identifier (GDrive* drive /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ g_drive_get_identifier (::GDrive* drive /*none*/, const char* kind /*none*/);
gi::cstring base::DriveBase::get_identifier (const gi::cstring_v kind) noexcept
{
  typedef char* (*call_wrap_t) (::GDrive* drive, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_drive_get_name (GDrive* drive /*none*/);
// char* /*full*/ g_drive_get_name (::GDrive* drive /*none*/);
gi::cstring base::DriveBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_name;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_drive_get_sort_key (GDrive* drive /*none*/);
// const char* /*none,nullable*/ g_drive_get_sort_key (::GDrive* drive /*none*/);
gi::cstring_v base::DriveBase::get_sort_key () noexcept
{
  typedef const char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_sort_key;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDriveStartStopType g_drive_get_start_stop_type (GDrive* drive /*none*/);
// ::GDriveStartStopType g_drive_get_start_stop_type (::GDrive* drive /*none*/);
Gio::DriveStartStopType base::DriveBase::get_start_stop_type () noexcept
{
  typedef ::GDriveStartStopType (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_start_stop_type;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GIcon* /*full*/ g_drive_get_symbolic_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ g_drive_get_symbolic_icon (::GDrive* drive /*none*/);
Gio::Icon base::DriveBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_drive_get_volumes (GDrive* drive /*none*/);
// ::GList* /*full*/ g_drive_get_volumes (::GDrive* drive /*none*/);
gi::Collection<GList, ::GVolume*, gi::transfer_full_t> base::DriveBase::get_volumes () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_get_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GVolume*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_drive_has_media (GDrive* drive /*none*/);
// gboolean g_drive_has_media (::GDrive* drive /*none*/);
bool base::DriveBase::has_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_has_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_has_volumes (GDrive* drive /*none*/);
// gboolean g_drive_has_volumes (::GDrive* drive /*none*/);
bool base::DriveBase::has_volumes () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_has_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_is_media_check_automatic (GDrive* drive /*none*/);
// gboolean g_drive_is_media_check_automatic (::GDrive* drive /*none*/);
bool base::DriveBase::is_media_check_automatic () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_is_media_check_automatic;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_is_media_removable (GDrive* drive /*none*/);
// gboolean g_drive_is_media_removable (::GDrive* drive /*none*/);
bool base::DriveBase::is_media_removable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_is_media_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean g_drive_is_removable (GDrive* drive /*none*/);
// gboolean g_drive_is_removable (::GDrive* drive /*none*/);
bool base::DriveBase::is_removable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_is_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void g_drive_poll_for_media (GDrive* drive /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_poll_for_media (::GDrive* drive /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DriveBase::poll_for_media (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_poll_for_media;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GDrive*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::poll_for_media (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_poll_for_media;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GDrive*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_poll_for_media_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_poll_for_media_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DriveBase::poll_for_media_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_poll_for_media_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::poll_for_media_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_poll_for_media_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_drive_start (GDrive* drive /*none*/, GDriveStartFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_start (::GDrive* drive /*none*/, ::GDriveStartFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DriveBase::start (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_start;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::start (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_start;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_start_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_start_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DriveBase::start_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_start_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::start_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_start_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_drive_stop (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_stop (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DriveBase::stop (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DriveBase::stop (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_drive_stop_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_stop_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::DriveBase::stop_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_stop_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DriveBase::stop_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_drive_stop_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/drive_extra_def_impl.hpp>)
#include <gio/drive_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/drive_extra_impl.hpp>)
#include <gio/drive_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DriveIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GDriveIface *methods = (::GDriveIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_eject) methods->can_eject = (decltype (methods->can_eject)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_eject_>;
  if (init_data.can_poll_for_media) methods->can_poll_for_media = (decltype (methods->can_poll_for_media)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_poll_for_media_>;
  if (init_data.can_start) methods->can_start = (decltype (methods->can_start)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_start_>;
  if (init_data.can_start_degraded) methods->can_start_degraded = (decltype (methods->can_start_degraded)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_start_degraded_>;
  if (init_data.can_stop) methods->can_stop = (decltype (methods->can_stop)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_stop_>;
  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.disconnected) methods->disconnected = (decltype (methods->disconnected)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::disconnected_>;
  if (init_data.eject_button) methods->eject_button = (decltype (methods->eject_button)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::eject_button_>;
  if (init_data.eject_with_operation) methods->eject_with_operation = (decltype (methods->eject_with_operation)) detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::eject_with_operation_>;
  if (init_data.eject_with_operation_finish) methods->eject_with_operation_finish = (decltype (methods->eject_with_operation_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::eject_with_operation_finish_>;
  if (init_data.enumerate_identifiers) methods->enumerate_identifiers = (decltype (methods->enumerate_identifiers)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::enumerate_identifiers_>;
  if (init_data.get_icon) methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_icon_>;
  if (init_data.get_identifier) methods->get_identifier = (decltype (methods->get_identifier)) detail::method_wrapper<self, gi::cstring (*) (const gi::cstring_v kind), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_identifier_>;
  if (init_data.get_name) methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_name_>;
  if (init_data.get_sort_key) methods->get_sort_key = (decltype (methods->get_sort_key)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_sort_key_>;
  if (init_data.get_start_stop_type) methods->get_start_stop_type = (decltype (methods->get_start_stop_type)) detail::method_wrapper<self, Gio::DriveStartStopType (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_start_stop_type_>;
  if (init_data.get_symbolic_icon) methods->get_symbolic_icon = (decltype (methods->get_symbolic_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_symbolic_icon_>;
  if (init_data.get_volumes) methods->get_volumes = (decltype (methods->get_volumes)) detail::method_wrapper<self, gi::Collection<GList, ::GVolume*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_volumes_>;
  if (init_data.has_media) methods->has_media = (decltype (methods->has_media)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::has_media_>;
  if (init_data.has_volumes) methods->has_volumes = (decltype (methods->has_volumes)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::has_volumes_>;
  if (init_data.is_media_check_automatic) methods->is_media_check_automatic = (decltype (methods->is_media_check_automatic)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_media_check_automatic_>;
  if (init_data.is_media_removable) methods->is_media_removable = (decltype (methods->is_media_removable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_media_removable_>;
  if (init_data.is_removable) methods->is_removable = (decltype (methods->is_removable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_removable_>;
  if (init_data.poll_for_media) methods->poll_for_media = (decltype (methods->poll_for_media)) detail::method_wrapper<self, void (*) (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<1, 2>>>, void  (::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::poll_for_media_>;
  if (init_data.poll_for_media_finish) methods->poll_for_media_finish = (decltype (methods->poll_for_media_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::poll_for_media_finish_>;
  if (init_data.start) methods->start = (decltype (methods->start)) detail::method_wrapper<self, void (*) (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::start_>;
  if (init_data.start_finish) methods->start_finish = (decltype (methods->start_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::start_finish_>;
  if (init_data.stop) methods->stop = (decltype (methods->stop)) detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::stop_>;
  if (init_data.stop_button) methods->stop_button = (decltype (methods->stop_button)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::stop_button_>;
  if (init_data.stop_finish) methods->stop_finish = (decltype (methods->stop_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::stop_finish_>;
}

// gboolean Drive::can_eject (GDrive* drive /*none*/);
// gboolean Drive::can_eject (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::can_eject_ () noexcept
{
  if (!get_struct_()->can_eject) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_eject;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_poll_for_media (GDrive* drive /*none*/);
// gboolean Drive::can_poll_for_media (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::can_poll_for_media_ () noexcept
{
  if (!get_struct_()->can_poll_for_media) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_poll_for_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_start (GDrive* drive /*none*/);
// gboolean Drive::can_start (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::can_start_ () noexcept
{
  if (!get_struct_()->can_start) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_start;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_start_degraded (GDrive* drive /*none*/);
// gboolean Drive::can_start_degraded (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::can_start_degraded_ () noexcept
{
  if (!get_struct_()->can_start_degraded) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_start_degraded;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::can_stop (GDrive* drive /*none*/);
// gboolean Drive::can_stop (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::can_stop_ () noexcept
{
  if (!get_struct_()->can_stop) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_stop;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void Drive::changed (GDrive* drive /*none*/);
// void Drive::changed (::GDrive* drive /*none*/);
void DriveIfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// void Drive::disconnected (GDrive* drive /*none*/);
// void Drive::disconnected (::GDrive* drive /*none*/);
void DriveIfaceClassImpl::disconnected_ () noexcept
{
  if (!get_struct_()->disconnected) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->disconnected;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// void Drive::eject (GDrive* drive /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::eject (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// void Drive::eject_button (GDrive* drive /*none*/);
// void Drive::eject_button (::GDrive* drive /*none*/);
void DriveIfaceClassImpl::eject_button_ () noexcept
{
  if (!get_struct_()->eject_button) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_button;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// gboolean Drive::eject_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::eject_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Drive::eject_with_operation (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::eject_with_operation (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void DriveIfaceClassImpl::eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->eject_with_operation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Drive::eject_with_operation_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::eject_with_operation_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool DriveIfaceClassImpl::eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->eject_with_operation_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// char** /*full*/ Drive::enumerate_identifiers (GDrive* drive /*none*/);
// char** /*full*/ Drive::enumerate_identifiers (::GDrive* drive /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> DriveIfaceClassImpl::enumerate_identifiers_ () noexcept
{
  if (!get_struct_()->enumerate_identifiers) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate_identifiers;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ Drive::get_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ Drive::get_icon (::GDrive* drive /*none*/);
Gio::Icon DriveIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ Drive::get_identifier (GDrive* drive /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ Drive::get_identifier (::GDrive* drive /*none*/, const char* kind /*none*/);
gi::cstring DriveIfaceClassImpl::get_identifier_ (const gi::cstring_v kind) noexcept
{
  if (!get_struct_()->get_identifier) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GDrive* drive, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ Drive::get_name (GDrive* drive /*none*/);
// char* /*full*/ Drive::get_name (::GDrive* drive /*none*/);
gi::cstring DriveIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ Drive::get_sort_key (GDrive* drive /*none*/);
// const char* /*none,nullable*/ Drive::get_sort_key (::GDrive* drive /*none*/);
gi::cstring_v DriveIfaceClassImpl::get_sort_key_ () noexcept
{
  if (!get_struct_()->get_sort_key) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_sort_key;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDriveStartStopType Drive::get_start_stop_type (GDrive* drive /*none*/);
// ::GDriveStartStopType Drive::get_start_stop_type (::GDrive* drive /*none*/);
Gio::DriveStartStopType DriveIfaceClassImpl::get_start_stop_type_ () noexcept
{
  if (!get_struct_()->get_start_stop_type) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDriveStartStopType (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_start_stop_type;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GIcon* /*full*/ Drive::get_symbolic_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ Drive::get_symbolic_icon (::GDrive* drive /*none*/);
Gio::Icon DriveIfaceClassImpl::get_symbolic_icon_ () noexcept
{
  if (!get_struct_()->get_symbolic_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ Drive::get_volumes (GDrive* drive /*none*/);
// ::GList* /*full*/ Drive::get_volumes (::GDrive* drive /*none*/);
gi::Collection<GList, ::GVolume*, gi::transfer_full_t> DriveIfaceClassImpl::get_volumes_ () noexcept
{
  if (!get_struct_()->get_volumes) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GVolume*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean Drive::has_media (GDrive* drive /*none*/);
// gboolean Drive::has_media (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::has_media_ () noexcept
{
  if (!get_struct_()->has_media) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_media;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::has_volumes (GDrive* drive /*none*/);
// gboolean Drive::has_volumes (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::has_volumes_ () noexcept
{
  if (!get_struct_()->has_volumes) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_volumes;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::is_media_check_automatic (GDrive* drive /*none*/);
// gboolean Drive::is_media_check_automatic (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::is_media_check_automatic_ () noexcept
{
  if (!get_struct_()->is_media_check_automatic) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_media_check_automatic;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::is_media_removable (GDrive* drive /*none*/);
// gboolean Drive::is_media_removable (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::is_media_removable_ () noexcept
{
  if (!get_struct_()->is_media_removable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_media_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// gboolean Drive::is_removable (GDrive* drive /*none*/);
// gboolean Drive::is_removable (::GDrive* drive /*none*/);
bool DriveIfaceClassImpl::is_removable_ () noexcept
{
  if (!get_struct_()->is_removable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_removable;
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()));
  return _temp_ret;
}

// void Drive::poll_for_media (GDrive* drive /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::poll_for_media (::GDrive* drive /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void DriveIfaceClassImpl::poll_for_media_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->poll_for_media) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->poll_for_media;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GDrive*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Drive::poll_for_media_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::poll_for_media_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool DriveIfaceClassImpl::poll_for_media_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->poll_for_media_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->poll_for_media_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Drive::start (GDrive* drive /*none*/, GDriveStartFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::start (::GDrive* drive /*none*/, ::GDriveStartFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void DriveIfaceClassImpl::start_ (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->start) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive, ::GDriveStartFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Drive::start_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::start_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool DriveIfaceClassImpl::start_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->start_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Drive::stop (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::stop (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void DriveIfaceClassImpl::stop_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->stop) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDrive*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void Drive::stop_button (GDrive* drive /*none*/);
// void Drive::stop_button (::GDrive* drive /*none*/);
void DriveIfaceClassImpl::stop_button_ () noexcept
{
  if (!get_struct_()->stop_button) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop_button;
  call_wrap_v ((::GDrive*) (gobj_()));
}

// gboolean Drive::stop_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::stop_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool DriveIfaceClassImpl::stop_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->stop_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GDrive* drive, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDrive*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
