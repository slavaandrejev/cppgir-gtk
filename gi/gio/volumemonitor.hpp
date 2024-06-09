// AUTO-GENERATED

#ifndef _GI_GIO_VOLUMEMONITOR_HPP_
#define _GI_GIO_VOLUMEMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Drive;
class Mount;
class Volume;

class VolumeMonitor;

namespace base {


#define GI_GIO_VOLUMEMONITOR_BASE base::VolumeMonitorBase
class VolumeMonitorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GVolumeMonitor BaseObjectType;

VolumeMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_volume_monitor_get_type(); } 

// GVolume* /*full*/ g_volume_monitor_adopt_orphan_mount (GMount* mount /*none*/);
// ::GVolume* /*full*/ g_volume_monitor_adopt_orphan_mount (::GMount* mount /*none*/);
// IGNORE; deprecated

// GVolumeMonitor* /*full*/ g_volume_monitor_get ();
// ::GVolumeMonitor* /*full*/ g_volume_monitor_get ();
static GI_INLINE_DECL Gio::VolumeMonitor get () noexcept;

// GList* /*full*/ g_volume_monitor_get_connected_drives (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ g_volume_monitor_get_connected_drives (::GVolumeMonitor* volume_monitor /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDrive*, gi::transfer_full_t> get_connected_drives () noexcept;

// GMount* /*full,nullable*/ g_volume_monitor_get_mount_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GMount* /*full,nullable*/ g_volume_monitor_get_mount_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
GI_INLINE_DECL Gio::Mount get_mount_for_uuid (const gi::cstring_v uuid) noexcept;

// GList* /*full*/ g_volume_monitor_get_mounts (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ g_volume_monitor_get_mounts (::GVolumeMonitor* volume_monitor /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GMount*, gi::transfer_full_t> get_mounts () noexcept;

// GVolume* /*full,nullable*/ g_volume_monitor_get_volume_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GVolume* /*full,nullable*/ g_volume_monitor_get_volume_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
GI_INLINE_DECL Gio::Volume get_volume_for_uuid (const gi::cstring_v uuid) noexcept;

// GList* /*full*/ g_volume_monitor_get_volumes (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ g_volume_monitor_get_volumes (::GVolumeMonitor* volume_monitor /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GVolume*, gi::transfer_full_t> get_volumes () noexcept;

// (signal) void drive-changed ( drive /*none*/);
// (signal) void drive-changed (::GDrive* drive /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_changed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-changed"); }

// (signal) void drive-connected ( drive /*none*/);
// (signal) void drive-connected (::GDrive* drive /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_connected()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-connected"); }

// (signal) void drive-disconnected ( drive /*none*/);
// (signal) void drive-disconnected (::GDrive* drive /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_disconnected()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-disconnected"); }

// (signal) void drive-eject-button ( drive /*none*/);
// (signal) void drive-eject-button (::GDrive* drive /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_eject_button()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-eject-button"); }

// (signal) void drive-stop-button ( drive /*none*/);
// (signal) void drive-stop-button (::GDrive* drive /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> signal_drive_stop_button()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Drive drive)> (*this, "drive-stop-button"); }

// (signal) void mount-added ( mount /*none*/);
// (signal) void mount-added (::GMount* mount /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_added()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-added"); }

// (signal) void mount-changed ( mount /*none*/);
// (signal) void mount-changed (::GMount* mount /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_changed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-changed"); }

// (signal) void mount-pre-unmount ( mount /*none*/);
// (signal) void mount-pre-unmount (::GMount* mount /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_pre_unmount()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-pre-unmount"); }

// (signal) void mount-removed ( mount /*none*/);
// (signal) void mount-removed (::GMount* mount /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> signal_mount_removed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Mount mount)> (*this, "mount-removed"); }

// (signal) void volume-added ( volume /*none*/);
// (signal) void volume-added (::GVolume* volume /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> signal_volume_added()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> (*this, "volume-added"); }

// (signal) void volume-changed ( volume /*none*/);
// (signal) void volume-changed (::GVolume* volume /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> signal_volume_changed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> (*this, "volume-changed"); }

// (signal) void volume-removed ( volume /*none*/);
// (signal) void volume-removed (::GVolume* volume /*none*/);
gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> signal_volume_removed()
{ return gi::signal_proxy<void(Gio::VolumeMonitor, Gio::Volume volume)> (*this, "volume-removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra_def.hpp>)
#include <gio/volumemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volumemonitor_extra.hpp>)
#include <gio/volumemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class VolumeMonitor : public GI_GIO_VOLUMEMONITOR_BASE
{ typedef GI_GIO_VOLUMEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GVolumeMonitor>
{ typedef Gio::VolumeMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class VolumeMonitorClassDef
{
typedef VolumeMonitorClassDef self;
public:
typedef Gio::VolumeMonitor instance_type;
typedef ::GVolumeMonitorClass class_type;

using GI_MEMBER_CHECK_CONFLICT(drive_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(drive_connected) = self;
using GI_MEMBER_CHECK_CONFLICT(drive_disconnected) = self;
using GI_MEMBER_CHECK_CONFLICT(drive_eject_button) = self;
using GI_MEMBER_CHECK_CONFLICT(drive_stop_button) = self;
using GI_MEMBER_CHECK_CONFLICT(get_connected_drives) = self;
using GI_MEMBER_CHECK_CONFLICT(get_mount_for_uuid) = self;
using GI_MEMBER_CHECK_CONFLICT(get_mounts) = self;
using GI_MEMBER_CHECK_CONFLICT(get_volume_for_uuid) = self;
using GI_MEMBER_CHECK_CONFLICT(get_volumes) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_added) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_pre_unmount) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_removed) = self;
using GI_MEMBER_CHECK_CONFLICT(volume_added) = self;
using GI_MEMBER_CHECK_CONFLICT(volume_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(volume_removed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~VolumeMonitorClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void VolumeMonitor::drive_changed (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
virtual void drive_changed_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_connected (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_connected (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
virtual void drive_connected_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_disconnected (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_disconnected (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
virtual void drive_disconnected_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_eject_button (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_eject_button (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
virtual void drive_eject_button_ (Gio::Drive drive) noexcept = 0;

// void VolumeMonitor::drive_stop_button (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_stop_button (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
virtual void drive_stop_button_ (Gio::Drive drive) noexcept = 0;

// GList* /*full*/ VolumeMonitor::get_connected_drives (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_connected_drives (::GVolumeMonitor* volume_monitor /*none*/);
virtual gi::Collection<GList, ::GDrive*, gi::transfer_full_t> get_connected_drives_ () noexcept = 0;

// GMount* /*full,nullable*/ VolumeMonitor::get_mount_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GMount* /*full,nullable*/ VolumeMonitor::get_mount_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
virtual Gio::Mount get_mount_for_uuid_ (const gi::cstring_v uuid) noexcept = 0;

// GList* /*full*/ VolumeMonitor::get_mounts (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_mounts (::GVolumeMonitor* volume_monitor /*none*/);
virtual gi::Collection<GList, ::GMount*, gi::transfer_full_t> get_mounts_ () noexcept = 0;

// GVolume* /*full,nullable*/ VolumeMonitor::get_volume_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GVolume* /*full,nullable*/ VolumeMonitor::get_volume_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
virtual Gio::Volume get_volume_for_uuid_ (const gi::cstring_v uuid) noexcept = 0;

// GList* /*full*/ VolumeMonitor::get_volumes (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_volumes (::GVolumeMonitor* volume_monitor /*none*/);
virtual gi::Collection<GList, ::GVolume*, gi::transfer_full_t> get_volumes_ () noexcept = 0;

// void VolumeMonitor::mount_added (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_added (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
virtual void mount_added_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::mount_changed (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
virtual void mount_changed_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::mount_pre_unmount (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_pre_unmount (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
virtual void mount_pre_unmount_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::mount_removed (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_removed (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
virtual void mount_removed_ (Gio::Mount mount) noexcept = 0;

// void VolumeMonitor::volume_added (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_added (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
virtual void volume_added_ (Gio::Volume volume) noexcept = 0;

// void VolumeMonitor::volume_changed (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
virtual void volume_changed_ (Gio::Volume volume) noexcept = 0;

// void VolumeMonitor::volume_removed (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_removed (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
virtual void volume_removed_ (Gio::Volume volume) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class VolumeMonitorClass: public detail::ClassTemplate<Gio::impl::internal::VolumeMonitorClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::VolumeMonitorClassDef;
typedef VolumeMonitorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::VolumeMonitorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void VolumeMonitor::drive_changed (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
GI_INLINE_DECL void drive_changed_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_connected (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_connected (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
GI_INLINE_DECL void drive_connected_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_disconnected (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_disconnected (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
GI_INLINE_DECL void drive_disconnected_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_eject_button (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_eject_button (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
GI_INLINE_DECL void drive_eject_button_ (Gio::Drive drive) noexcept override;

// void VolumeMonitor::drive_stop_button (GVolumeMonitor* volume_monitor /*none*/, GDrive* drive /*none*/);
// void VolumeMonitor::drive_stop_button (::GVolumeMonitor* volume_monitor /*none*/, ::GDrive* drive /*none*/);
GI_INLINE_DECL void drive_stop_button_ (Gio::Drive drive) noexcept override;

// GList* /*full*/ VolumeMonitor::get_connected_drives (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_connected_drives (::GVolumeMonitor* volume_monitor /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GDrive*, gi::transfer_full_t> get_connected_drives_ () noexcept override;

// GMount* /*full,nullable*/ VolumeMonitor::get_mount_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GMount* /*full,nullable*/ VolumeMonitor::get_mount_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
GI_INLINE_DECL Gio::Mount get_mount_for_uuid_ (const gi::cstring_v uuid) noexcept override;

// GList* /*full*/ VolumeMonitor::get_mounts (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_mounts (::GVolumeMonitor* volume_monitor /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GMount*, gi::transfer_full_t> get_mounts_ () noexcept override;

// GVolume* /*full,nullable*/ VolumeMonitor::get_volume_for_uuid (GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
// ::GVolume* /*full,nullable*/ VolumeMonitor::get_volume_for_uuid (::GVolumeMonitor* volume_monitor /*none*/, const char* uuid /*none*/);
GI_INLINE_DECL Gio::Volume get_volume_for_uuid_ (const gi::cstring_v uuid) noexcept override;

// GList* /*full*/ VolumeMonitor::get_volumes (GVolumeMonitor* volume_monitor /*none*/);
// ::GList* /*full*/ VolumeMonitor::get_volumes (::GVolumeMonitor* volume_monitor /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GVolume*, gi::transfer_full_t> get_volumes_ () noexcept override;

// void VolumeMonitor::mount_added (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_added (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
GI_INLINE_DECL void mount_added_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::mount_changed (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
GI_INLINE_DECL void mount_changed_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::mount_pre_unmount (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_pre_unmount (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
GI_INLINE_DECL void mount_pre_unmount_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::mount_removed (GVolumeMonitor* volume_monitor /*none*/, GMount* mount /*none*/);
// void VolumeMonitor::mount_removed (::GVolumeMonitor* volume_monitor /*none*/, ::GMount* mount /*none*/);
GI_INLINE_DECL void mount_removed_ (Gio::Mount mount) noexcept override;

// void VolumeMonitor::volume_added (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_added (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
GI_INLINE_DECL void volume_added_ (Gio::Volume volume) noexcept override;

// void VolumeMonitor::volume_changed (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_changed (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
GI_INLINE_DECL void volume_changed_ (Gio::Volume volume) noexcept override;

// void VolumeMonitor::volume_removed (GVolumeMonitor* volume_monitor /*none*/, GVolume* volume /*none*/);
// void VolumeMonitor::volume_removed (::GVolumeMonitor* volume_monitor /*none*/, ::GVolume* volume /*none*/);
GI_INLINE_DECL void volume_removed_ (Gio::Volume volume) noexcept override;


};


struct VolumeMonitorClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(VolumeMonitorClass, drive_changed)
  GI_MEMBER_DEFINE(VolumeMonitorClass, drive_connected)
  GI_MEMBER_DEFINE(VolumeMonitorClass, drive_disconnected)
  GI_MEMBER_DEFINE(VolumeMonitorClass, drive_eject_button)
  GI_MEMBER_DEFINE(VolumeMonitorClass, drive_stop_button)
  GI_MEMBER_DEFINE(VolumeMonitorClass, get_connected_drives)
  GI_MEMBER_DEFINE(VolumeMonitorClass, get_mount_for_uuid)
  GI_MEMBER_DEFINE(VolumeMonitorClass, get_mounts)
  GI_MEMBER_DEFINE(VolumeMonitorClass, get_volume_for_uuid)
  GI_MEMBER_DEFINE(VolumeMonitorClass, get_volumes)
  GI_MEMBER_DEFINE(VolumeMonitorClass, mount_added)
  GI_MEMBER_DEFINE(VolumeMonitorClass, mount_changed)
  GI_MEMBER_DEFINE(VolumeMonitorClass, mount_pre_unmount)
  GI_MEMBER_DEFINE(VolumeMonitorClass, mount_removed)
  GI_MEMBER_DEFINE(VolumeMonitorClass, volume_added)
  GI_MEMBER_DEFINE(VolumeMonitorClass, volume_changed)
  GI_MEMBER_DEFINE(VolumeMonitorClass, volume_removed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drive_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drive_connected),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drive_disconnected),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drive_eject_button),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, drive_stop_button),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_connected_drives),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_mount_for_uuid),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_mounts),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_volume_for_uuid),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_volumes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_pre_unmount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_removed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, volume_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, volume_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, volume_removed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using VolumeMonitorImpl = detail::ObjectImpl<VolumeMonitor, internal::VolumeMonitorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
