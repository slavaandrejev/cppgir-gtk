// AUTO-GENERATED

#ifndef _GI_GIO_VOLUME_IMPL_HPP_
#define _GI_GIO_VOLUME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_volume_can_eject (GVolume* volume /*none*/);
// gboolean g_volume_can_eject (::GVolume* volume /*none*/);
bool base::VolumeBase::can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_can_eject;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// gboolean g_volume_can_mount (GVolume* volume /*none*/);
// gboolean g_volume_can_mount (::GVolume* volume /*none*/);
bool base::VolumeBase::can_mount () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_can_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// void g_volume_eject (GVolume* volume /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_volume_eject (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_volume_eject_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_volume_eject_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_volume_eject_with_operation (GVolume* volume /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_volume_eject_with_operation (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::VolumeBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::VolumeBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_volume_eject_with_operation_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_volume_eject_with_operation_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::VolumeBase::eject_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::VolumeBase::eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// char** /*full*/ g_volume_enumerate_identifiers (GVolume* volume /*none*/);
// char** /*full*/ g_volume_enumerate_identifiers (::GVolume* volume /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::VolumeBase::enumerate_identifiers () noexcept
{
  typedef char** (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_enumerate_identifiers;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GFile* /*full,nullable*/ g_volume_get_activation_root (GVolume* volume /*none*/);
// ::GFile* /*full,nullable*/ g_volume_get_activation_root (::GVolume* volume /*none*/);
Gio::File base::VolumeBase::get_activation_root () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_activation_root;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDrive* /*full,nullable*/ g_volume_get_drive (GVolume* volume /*none*/);
// ::GDrive* /*full,nullable*/ g_volume_get_drive (::GVolume* volume /*none*/);
Gio::Drive base::VolumeBase::get_drive () noexcept
{
  typedef ::GDrive* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_drive;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_volume_get_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ g_volume_get_icon (::GVolume* volume /*none*/);
Gio::Icon base::VolumeBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_volume_get_identifier (GVolume* volume /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ g_volume_get_identifier (::GVolume* volume /*none*/, const char* kind /*none*/);
gi::cstring base::VolumeBase::get_identifier (const gi::cstring_v kind) noexcept
{
  typedef char* (*call_wrap_t) (::GVolume* volume, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMount* /*full,nullable*/ g_volume_get_mount (GVolume* volume /*none*/);
// ::GMount* /*full,nullable*/ g_volume_get_mount (::GVolume* volume /*none*/);
Gio::Mount base::VolumeBase::get_mount () noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_volume_get_name (GVolume* volume /*none*/);
// char* /*full*/ g_volume_get_name (::GVolume* volume /*none*/);
gi::cstring base::VolumeBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_name;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_volume_get_sort_key (GVolume* volume /*none*/);
// const char* /*none,nullable*/ g_volume_get_sort_key (::GVolume* volume /*none*/);
gi::cstring_v base::VolumeBase::get_sort_key () noexcept
{
  typedef const char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_sort_key;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*full*/ g_volume_get_symbolic_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ g_volume_get_symbolic_icon (::GVolume* volume /*none*/);
Gio::Icon base::VolumeBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_volume_get_uuid (GVolume* volume /*none*/);
// char* /*full,nullable*/ g_volume_get_uuid (::GVolume* volume /*none*/);
gi::cstring base::VolumeBase::get_uuid () noexcept
{
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_get_uuid;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_volume_mount (GVolume* volume /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_volume_mount (::GVolume* volume /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::VolumeBase::mount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_mount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::VolumeBase::mount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_mount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_volume_mount_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_volume_mount_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::VolumeBase::mount_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_mount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::VolumeBase::mount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_mount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_volume_should_automount (GVolume* volume /*none*/);
// gboolean g_volume_should_automount (::GVolume* volume /*none*/);
bool base::VolumeBase::should_automount () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_should_automount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volume_extra_def_impl.hpp>)
#include <gio/volume_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volume_extra_impl.hpp>)
#include <gio/volume_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void VolumeIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GVolumeIface *methods = (::GVolumeIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_eject) methods->can_eject = (decltype (methods->can_eject)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_eject_>;
  if (init_data.can_mount) methods->can_mount = (decltype (methods->can_mount)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_mount_>;
  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.eject_with_operation) methods->eject_with_operation = (decltype (methods->eject_with_operation)) detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::eject_with_operation_>;
  if (init_data.eject_with_operation_finish) methods->eject_with_operation_finish = (decltype (methods->eject_with_operation_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::eject_with_operation_finish_>;
  if (init_data.enumerate_identifiers) methods->enumerate_identifiers = (decltype (methods->enumerate_identifiers)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::enumerate_identifiers_>;
  if (init_data.get_activation_root) methods->get_activation_root = (decltype (methods->get_activation_root)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_activation_root_>;
  if (init_data.get_drive) methods->get_drive = (decltype (methods->get_drive)) detail::method_wrapper<self, Gio::Drive (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_drive_>;
  if (init_data.get_icon) methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_icon_>;
  if (init_data.get_identifier) methods->get_identifier = (decltype (methods->get_identifier)) detail::method_wrapper<self, gi::cstring (*) (const gi::cstring_v kind), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_identifier_>;
  if (init_data.get_mount) methods->get_mount = (decltype (methods->get_mount)) detail::method_wrapper<self, Gio::Mount (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_mount_>;
  if (init_data.get_name) methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_name_>;
  if (init_data.get_sort_key) methods->get_sort_key = (decltype (methods->get_sort_key)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_sort_key_>;
  if (init_data.get_symbolic_icon) methods->get_symbolic_icon = (decltype (methods->get_symbolic_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_symbolic_icon_>;
  if (init_data.get_uuid) methods->get_uuid = (decltype (methods->get_uuid)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_uuid_>;
  if (init_data.mount_finish) methods->mount_finish = (decltype (methods->mount_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::mount_finish_>;
  if (init_data.mount_fn) methods->mount_fn = (decltype (methods->mount_fn)) detail::method_wrapper<self, void (*) (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::mount_fn_>;
  if (init_data.removed) methods->removed = (decltype (methods->removed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::removed_>;
  if (init_data.should_automount) methods->should_automount = (decltype (methods->should_automount)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::should_automount_>;
}

// gboolean Volume::can_eject (GVolume* volume /*none*/);
// gboolean Volume::can_eject (::GVolume* volume /*none*/);
bool VolumeIfaceClassImpl::can_eject_ () noexcept
{
  if (!get_struct_()->can_eject) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_eject;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// gboolean Volume::can_mount (GVolume* volume /*none*/);
// gboolean Volume::can_mount (::GVolume* volume /*none*/);
bool VolumeIfaceClassImpl::can_mount_ () noexcept
{
  if (!get_struct_()->can_mount) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

// void Volume::changed (GVolume* volume /*none*/);
// void Volume::changed (::GVolume* volume /*none*/);
void VolumeIfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GVolume*) (gobj_()));
}

// void Volume::eject (GVolume* volume /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::eject (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Volume::eject_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::eject_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Volume::eject_with_operation (GVolume* volume /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::eject_with_operation (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void VolumeIfaceClassImpl::eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->eject_with_operation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Volume::eject_with_operation_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::eject_with_operation_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool VolumeIfaceClassImpl::eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->eject_with_operation_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// char** /*full*/ Volume::enumerate_identifiers (GVolume* volume /*none*/);
// char** /*full*/ Volume::enumerate_identifiers (::GVolume* volume /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> VolumeIfaceClassImpl::enumerate_identifiers_ () noexcept
{
  if (!get_struct_()->enumerate_identifiers) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate_identifiers;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GFile* /*full,nullable*/ Volume::get_activation_root (GVolume* volume /*none*/);
// ::GFile* /*full,nullable*/ Volume::get_activation_root (::GVolume* volume /*none*/);
Gio::File VolumeIfaceClassImpl::get_activation_root_ () noexcept
{
  if (!get_struct_()->get_activation_root) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_activation_root;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDrive* /*full,nullable*/ Volume::get_drive (GVolume* volume /*none*/);
// ::GDrive* /*full,nullable*/ Volume::get_drive (::GVolume* volume /*none*/);
Gio::Drive VolumeIfaceClassImpl::get_drive_ () noexcept
{
  if (!get_struct_()->get_drive) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDrive* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_drive;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ Volume::get_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ Volume::get_icon (::GVolume* volume /*none*/);
Gio::Icon VolumeIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ Volume::get_identifier (GVolume* volume /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ Volume::get_identifier (::GVolume* volume /*none*/, const char* kind /*none*/);
gi::cstring VolumeIfaceClassImpl::get_identifier_ (const gi::cstring_v kind) noexcept
{
  if (!get_struct_()->get_identifier) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GVolume* volume, const char* kind);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_identifier;
  auto kind_to_c = gi::unwrap (kind, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (const char*) (kind_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMount* /*full,nullable*/ Volume::get_mount (GVolume* volume /*none*/);
// ::GMount* /*full,nullable*/ Volume::get_mount (::GVolume* volume /*none*/);
Gio::Mount VolumeIfaceClassImpl::get_mount_ () noexcept
{
  if (!get_struct_()->get_mount) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMount* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_mount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ Volume::get_name (GVolume* volume /*none*/);
// char* /*full*/ Volume::get_name (::GVolume* volume /*none*/);
gi::cstring VolumeIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ Volume::get_sort_key (GVolume* volume /*none*/);
// const char* /*none,nullable*/ Volume::get_sort_key (::GVolume* volume /*none*/);
gi::cstring_v VolumeIfaceClassImpl::get_sort_key_ () noexcept
{
  if (!get_struct_()->get_sort_key) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_sort_key;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*full*/ Volume::get_symbolic_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ Volume::get_symbolic_icon (::GVolume* volume /*none*/);
Gio::Icon VolumeIfaceClassImpl::get_symbolic_icon_ () noexcept
{
  if (!get_struct_()->get_symbolic_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ Volume::get_uuid (GVolume* volume /*none*/);
// char* /*full,nullable*/ Volume::get_uuid (::GVolume* volume /*none*/);
gi::cstring VolumeIfaceClassImpl::get_uuid_ () noexcept
{
  if (!get_struct_()->get_uuid) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uuid;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean Volume::mount_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::mount_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool VolumeIfaceClassImpl::mount_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->mount_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVolume* volume, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Volume::mount_fn (GVolume* volume /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::mount_fn (::GVolume* volume /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void VolumeIfaceClassImpl::mount_fn_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->mount_fn) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolume* volume, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_fn;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GVolume*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void Volume::removed (GVolume* volume /*none*/);
// void Volume::removed (::GVolume* volume /*none*/);
void VolumeIfaceClassImpl::removed_ () noexcept
{
  if (!get_struct_()->removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->removed;
  call_wrap_v ((::GVolume*) (gobj_()));
}

// gboolean Volume::should_automount (GVolume* volume /*none*/);
// gboolean Volume::should_automount (::GVolume* volume /*none*/);
bool VolumeIfaceClassImpl::should_automount_ () noexcept
{
  if (!get_struct_()->should_automount) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->should_automount;
  auto _temp_ret = call_wrap_v ((::GVolume*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
