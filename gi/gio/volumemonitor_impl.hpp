// AUTO-GENERATED

#ifndef _GI_GIO_VOLUMEMONITOR_IMPL_HPP_
#define _GI_GIO_VOLUMEMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GVolume* /*full*/ g_volume_monitor_adopt_orphan_mount (GMount* mount /*none*/);
// ::GVolume* /*full*/ g_volume_monitor_adopt_orphan_mount (::GMount* mount /*none*/);
// IGNORE; deprecated

// GVolumeMonitor* /*full*/ g_volume_monitor_get ();
// ::GVolumeMonitor* /*full*/ g_volume_monitor_get ();
Gio::VolumeMonitor base::VolumeMonitorBase::get () noexcept
{
  typedef ::GVolumeMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_monitor_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_volume_monitor_get_connected_drives (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ g_volume_monitor_get_connected_drives (::GVolumeMonitor* volume_monitor /*none*/);
gi::Collection<GList, ::GDrive*, gi::transfer_full_t> base::VolumeMonitorBase::get_connected_drives () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_monitor_get_connected_drives;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDrive*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GMount* /*full,nullable*/ g_volume_monitor_get_mount_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GMount* /*full,nullable*/ g_volume_monitor_get_mount_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
Gio::Mount base::VolumeMonitorBase::get_mount_for_uuid (const gi::cstring_v uuid) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_monitor_get_mount_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_volume_monitor_get_mounts (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ g_volume_monitor_get_mounts (::GVolumeMonitor* volume_monitor /*none*/);
gi::Collection<GList, ::GMount*, gi::transfer_full_t> base::VolumeMonitorBase::get_mounts () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_monitor_get_mounts;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GMount*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GVolume* /*full,nullable*/ g_volume_monitor_get_volume_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GVolume* /*full,nullable*/ g_volume_monitor_get_volume_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
Gio::Volume base::VolumeMonitorBase::get_volume_for_uuid (const gi::cstring_v uuid) noexcept
{
  typedef ::GVolume* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_monitor_get_volume_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ g_volume_monitor_get_volumes (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ g_volume_monitor_get_volumes (::GVolumeMonitor* volume_monitor /*none*/);
gi::Collection<GList, ::GVolume*, gi::transfer_full_t> base::VolumeMonitorBase::get_volumes () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_volume_monitor_get_volumes;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GVolume*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}














} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra_def_impl.hpp>)
#include <gio/volumemonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra_impl.hpp>)
#include <gio/volumemonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void VolumeMonitorClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GVolumeMonitorClass *methods = (::GVolumeMonitorClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.drive_changed) methods->drive_changed = (decltype (methods->drive_changed)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drive_changed_>;
  if (init_data.drive_connected) methods->drive_connected = (decltype (methods->drive_connected)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drive_connected_>;
  if (init_data.drive_disconnected) methods->drive_disconnected = (decltype (methods->drive_disconnected)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drive_disconnected_>;
  if (init_data.drive_eject_button) methods->drive_eject_button = (decltype (methods->drive_eject_button)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drive_eject_button_>;
  if (init_data.drive_stop_button) methods->drive_stop_button = (decltype (methods->drive_stop_button)) detail::method_wrapper<self, void (*) (Gio::Drive drive), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drive_stop_button_>;
  if (init_data.get_connected_drives) methods->get_connected_drives = (decltype (methods->get_connected_drives)) detail::method_wrapper<self, gi::Collection<GList, ::GDrive*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_connected_drives_>;
  if (init_data.get_mount_for_uuid) methods->get_mount_for_uuid = (decltype (methods->get_mount_for_uuid)) detail::method_wrapper<self, Gio::Mount (*) (const gi::cstring_v uuid), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_mount_for_uuid_>;
  if (init_data.get_mounts) methods->get_mounts = (decltype (methods->get_mounts)) detail::method_wrapper<self, gi::Collection<GList, ::GMount*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_mounts_>;
  if (init_data.get_volume_for_uuid) methods->get_volume_for_uuid = (decltype (methods->get_volume_for_uuid)) detail::method_wrapper<self, Gio::Volume (*) (const gi::cstring_v uuid), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_volume_for_uuid_>;
  if (init_data.get_volumes) methods->get_volumes = (decltype (methods->get_volumes)) detail::method_wrapper<self, gi::Collection<GList, ::GVolume*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_volumes_>;
  if (init_data.mount_added) methods->mount_added = (decltype (methods->mount_added)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::mount_added_>;
  if (init_data.mount_changed) methods->mount_changed = (decltype (methods->mount_changed)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::mount_changed_>;
  if (init_data.mount_pre_unmount) methods->mount_pre_unmount = (decltype (methods->mount_pre_unmount)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::mount_pre_unmount_>;
  if (init_data.mount_removed) methods->mount_removed = (decltype (methods->mount_removed)) detail::method_wrapper<self, void (*) (Gio::Mount mount), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::mount_removed_>;
  if (init_data.volume_added) methods->volume_added = (decltype (methods->volume_added)) detail::method_wrapper<self, void (*) (Gio::Volume volume), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::volume_added_>;
  if (init_data.volume_changed) methods->volume_changed = (decltype (methods->volume_changed)) detail::method_wrapper<self, void (*) (Gio::Volume volume), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::volume_changed_>;
  if (init_data.volume_removed) methods->volume_removed = (decltype (methods->volume_removed)) detail::method_wrapper<self, void (*) (Gio::Volume volume), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::volume_removed_>;
}

// void VolumeMonitor::drive_changed (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
void VolumeMonitorClass::drive_changed_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_changed;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_connected (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_connected (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
void VolumeMonitorClass::drive_connected_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_connected) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_connected;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_disconnected (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_disconnected (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
void VolumeMonitorClass::drive_disconnected_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_disconnected) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_disconnected;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_eject_button (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_eject_button (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
void VolumeMonitorClass::drive_eject_button_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_eject_button) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_eject_button;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// void VolumeMonitor::drive_stop_button (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_stop_button (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
void VolumeMonitorClass::drive_stop_button_ (Gio::Drive drive) noexcept
{
  if (!get_struct_()->drive_stop_button) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GDrive* drive);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drive_stop_button;
  auto drive_to_c = gi::unwrap (drive, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GDrive*) (drive_to_c));
}

// GList* /*full*/ VolumeMonitor::get_connected_drives (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_connected_drives (::GVolumeMonitor* volume_monitor /*none*/);
gi::Collection<GList, ::GDrive*, gi::transfer_full_t> VolumeMonitorClass::get_connected_drives_ () noexcept
{
  if (!get_struct_()->get_connected_drives) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_connected_drives;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GDrive*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GMount* /*full,nullable*/ VolumeMonitor::get_mount_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GMount* /*full,nullable*/ VolumeMonitor::get_mount_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
Gio::Mount VolumeMonitorClass::get_mount_for_uuid_ (const gi::cstring_v uuid) noexcept
{
  if (!get_struct_()->get_mount_for_uuid) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMount* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_mount_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ VolumeMonitor::get_mounts (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_mounts (::GVolumeMonitor* volume_monitor /*none*/);
gi::Collection<GList, ::GMount*, gi::transfer_full_t> VolumeMonitorClass::get_mounts_ () noexcept
{
  if (!get_struct_()->get_mounts) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_mounts;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GMount*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GVolume* /*full,nullable*/ VolumeMonitor::get_volume_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GVolume* /*full,nullable*/ VolumeMonitor::get_volume_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
Gio::Volume VolumeMonitorClass::get_volume_for_uuid_ (const gi::cstring_v uuid) noexcept
{
  if (!get_struct_()->get_volume_for_uuid) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVolume* (*call_wrap_t) (::GVolumeMonitor* volume_monitor, const char* uuid);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_volume_for_uuid;
  auto uuid_to_c = gi::unwrap (uuid, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()), (const char*) (uuid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GList* /*full*/ VolumeMonitor::get_volumes (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_volumes (::GVolumeMonitor* volume_monitor /*none*/);
gi::Collection<GList, ::GVolume*, gi::transfer_full_t> VolumeMonitorClass::get_volumes_ () noexcept
{
  if (!get_struct_()->get_volumes) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GVolumeMonitor* volume_monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_volumes;
  auto _temp_ret = call_wrap_v ((::GVolumeMonitor*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GVolume*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void VolumeMonitor::mount_added (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_added (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
void VolumeMonitorClass::mount_added_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_added;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::mount_changed (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
void VolumeMonitorClass::mount_changed_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_changed;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::mount_pre_unmount (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_pre_unmount (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
void VolumeMonitorClass::mount_pre_unmount_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_pre_unmount) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_pre_unmount;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::mount_removed (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_removed (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
void VolumeMonitorClass::mount_removed_ (Gio::Mount mount) noexcept
{
  if (!get_struct_()->mount_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_removed;
  auto mount_to_c = gi::unwrap (mount, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GMount*) (mount_to_c));
}

// void VolumeMonitor::volume_added (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_added (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
void VolumeMonitorClass::volume_added_ (Gio::Volume volume) noexcept
{
  if (!get_struct_()->volume_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->volume_added;
  auto volume_to_c = gi::unwrap (volume, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GVolume*) (volume_to_c));
}

// void VolumeMonitor::volume_changed (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
void VolumeMonitorClass::volume_changed_ (Gio::Volume volume) noexcept
{
  if (!get_struct_()->volume_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->volume_changed;
  auto volume_to_c = gi::unwrap (volume, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GVolume*) (volume_to_c));
}

// void VolumeMonitor::volume_removed (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_removed (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
void VolumeMonitorClass::volume_removed_ (Gio::Volume volume) noexcept
{
  if (!get_struct_()->volume_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVolumeMonitor* volume_monitor, ::GVolume* volume);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->volume_removed;
  auto volume_to_c = gi::unwrap (volume, gi::transfer_none);
  call_wrap_v ((::GVolumeMonitor*) (gobj_()), (::GVolume*) (volume_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
