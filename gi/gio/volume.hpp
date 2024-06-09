// AUTO-GENERATED

#ifndef _GI_GIO_VOLUME_HPP_
#define _GI_GIO_VOLUME_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Drive;
class File;
class Icon;
class Mount;
class MountOperation;

class Volume;

namespace base {


#define GI_GIO_VOLUME_BASE base::VolumeBase
class VolumeBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GVolume BaseObjectType;

VolumeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_volume_get_type(); } 

// gboolean g_volume_can_eject (GVolume* volume /*none*/);
// gboolean g_volume_can_eject (::GVolume* volume /*none*/);
GI_INLINE_DECL bool can_eject () noexcept;

// gboolean g_volume_can_mount (GVolume* volume /*none*/);
// gboolean g_volume_can_mount (::GVolume* volume /*none*/);
GI_INLINE_DECL bool can_mount () noexcept;

// void g_volume_eject (GVolume* volume /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_volume_eject (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_volume_eject_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_volume_eject_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_volume_eject_with_operation (GVolume* volume /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_volume_eject_with_operation (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_volume_eject_with_operation_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_volume_eject_with_operation_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char** /*full*/ g_volume_enumerate_identifiers (GVolume* volume /*none*/);
// char** /*full*/ g_volume_enumerate_identifiers (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_identifiers () noexcept;

// GFile* /*full,nullable*/ g_volume_get_activation_root (GVolume* volume /*none*/);
// ::GFile* /*full,nullable*/ g_volume_get_activation_root (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::File get_activation_root () noexcept;

// GDrive* /*full,nullable*/ g_volume_get_drive (GVolume* volume /*none*/);
// ::GDrive* /*full,nullable*/ g_volume_get_drive (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Drive get_drive () noexcept;

// GIcon* /*full*/ g_volume_get_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ g_volume_get_icon (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// char* /*full,nullable*/ g_volume_get_identifier (GVolume* volume /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ g_volume_get_identifier (::GVolume* volume /*none*/, const char* kind /*none*/);
GI_INLINE_DECL gi::cstring get_identifier (const gi::cstring_v kind) noexcept;

// GMount* /*full,nullable*/ g_volume_get_mount (GVolume* volume /*none*/);
// ::GMount* /*full,nullable*/ g_volume_get_mount (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Mount get_mount () noexcept;

// char* /*full*/ g_volume_get_name (GVolume* volume /*none*/);
// char* /*full*/ g_volume_get_name (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::cstring get_name () noexcept;

// const gchar* /*none,nullable*/ g_volume_get_sort_key (GVolume* volume /*none*/);
// const char* /*none,nullable*/ g_volume_get_sort_key (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::cstring_v get_sort_key () noexcept;

// GIcon* /*full*/ g_volume_get_symbolic_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ g_volume_get_symbolic_icon (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// char* /*full,nullable*/ g_volume_get_uuid (GVolume* volume /*none*/);
// char* /*full,nullable*/ g_volume_get_uuid (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::cstring get_uuid () noexcept;

// void g_volume_mount (GVolume* volume /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_volume_mount (::GVolume* volume /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void mount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void mount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_volume_mount_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_volume_mount_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool mount_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool mount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_volume_should_automount (GVolume* volume /*none*/);
// gboolean g_volume_should_automount (::GVolume* volume /*none*/);
GI_INLINE_DECL bool should_automount () noexcept;

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gio::Volume)> signal_changed()
{ return gi::signal_proxy<void(Gio::Volume)> (*this, "changed"); }

// (signal) void removed ();
// (signal) void removed ();
gi::signal_proxy<void(Gio::Volume)> signal_removed()
{ return gi::signal_proxy<void(Gio::Volume)> (*this, "removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/volume_extra_def.hpp>)
#include <gio/volume_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/volume_extra.hpp>)
#include <gio/volume_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Volume : public GI_GIO_VOLUME_BASE
{ typedef GI_GIO_VOLUME_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GVolume>
{ typedef Gio::Volume type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class VolumeIfaceDef
{
typedef VolumeIfaceDef self;
public:
typedef Gio::Volume instance_type;
typedef ::GVolumeIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(can_eject) = self;
using GI_MEMBER_CHECK_CONFLICT(can_mount) = self;
using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_with_operation) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_with_operation_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(enumerate_identifiers) = self;
using GI_MEMBER_CHECK_CONFLICT(get_activation_root) = self;
using GI_MEMBER_CHECK_CONFLICT(get_drive) = self;
using GI_MEMBER_CHECK_CONFLICT(get_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_identifier) = self;
using GI_MEMBER_CHECK_CONFLICT(get_mount) = self;
using GI_MEMBER_CHECK_CONFLICT(get_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_sort_key) = self;
using GI_MEMBER_CHECK_CONFLICT(get_symbolic_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_uuid) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(removed) = self;
using GI_MEMBER_CHECK_CONFLICT(should_automount) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~VolumeIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Volume::can_eject (GVolume* volume /*none*/);
// gboolean Volume::can_eject (::GVolume* volume /*none*/);
virtual bool can_eject_ () noexcept = 0;

// gboolean Volume::can_mount (GVolume* volume /*none*/);
// gboolean Volume::can_mount (::GVolume* volume /*none*/);
virtual bool can_mount_ () noexcept = 0;

// void Volume::changed (GVolume* volume /*none*/);
// void Volume::changed (::GVolume* volume /*none*/);
virtual void changed_ () noexcept = 0;

// void Volume::eject (GVolume* volume /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::eject (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Volume::eject_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::eject_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Volume::eject_with_operation (GVolume* volume /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::eject_with_operation (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Volume::eject_with_operation_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::eject_with_operation_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// char** /*full*/ Volume::enumerate_identifiers (GVolume* volume /*none*/);
// char** /*full*/ Volume::enumerate_identifiers (::GVolume* volume /*none*/);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_identifiers_ () noexcept = 0;

// GFile* /*full,nullable*/ Volume::get_activation_root (GVolume* volume /*none*/);
// ::GFile* /*full,nullable*/ Volume::get_activation_root (::GVolume* volume /*none*/);
virtual Gio::File get_activation_root_ () noexcept = 0;

// GDrive* /*full,nullable*/ Volume::get_drive (GVolume* volume /*none*/);
// ::GDrive* /*full,nullable*/ Volume::get_drive (::GVolume* volume /*none*/);
virtual Gio::Drive get_drive_ () noexcept = 0;

// GIcon* /*full*/ Volume::get_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ Volume::get_icon (::GVolume* volume /*none*/);
virtual Gio::Icon get_icon_ () noexcept = 0;

// char* /*full,nullable*/ Volume::get_identifier (GVolume* volume /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ Volume::get_identifier (::GVolume* volume /*none*/, const char* kind /*none*/);
virtual gi::cstring get_identifier_ (const gi::cstring_v kind) noexcept = 0;

// GMount* /*full,nullable*/ Volume::get_mount (GVolume* volume /*none*/);
// ::GMount* /*full,nullable*/ Volume::get_mount (::GVolume* volume /*none*/);
virtual Gio::Mount get_mount_ () noexcept = 0;

// char* /*full*/ Volume::get_name (GVolume* volume /*none*/);
// char* /*full*/ Volume::get_name (::GVolume* volume /*none*/);
virtual gi::cstring get_name_ () noexcept = 0;

// const gchar* /*none,nullable*/ Volume::get_sort_key (GVolume* volume /*none*/);
// const char* /*none,nullable*/ Volume::get_sort_key (::GVolume* volume /*none*/);
virtual gi::cstring_v get_sort_key_ () noexcept = 0;

// GIcon* /*full*/ Volume::get_symbolic_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ Volume::get_symbolic_icon (::GVolume* volume /*none*/);
virtual Gio::Icon get_symbolic_icon_ () noexcept = 0;

// char* /*full,nullable*/ Volume::get_uuid (GVolume* volume /*none*/);
// char* /*full,nullable*/ Volume::get_uuid (::GVolume* volume /*none*/);
virtual gi::cstring get_uuid_ () noexcept = 0;

// gboolean Volume::mount_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::mount_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool mount_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Volume::mount_fn (GVolume* volume /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::mount_fn (::GVolume* volume /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void mount_fn_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// void Volume::removed (GVolume* volume /*none*/);
// void Volume::removed (::GVolume* volume /*none*/);
virtual void removed_ () noexcept = 0;

// gboolean Volume::should_automount (GVolume* volume /*none*/);
// gboolean Volume::should_automount (::GVolume* volume /*none*/);
virtual bool should_automount_ () noexcept = 0;


};

using VolumeImpl = detail::InterfaceImpl<VolumeIfaceDef>;

class VolumeIfaceClassImpl: public detail::InterfaceClassImpl<VolumeImpl>
{
friend class internal::VolumeIfaceDef;
typedef VolumeIfaceClassImpl self;
typedef detail::InterfaceClassImpl<VolumeImpl> super;

protected:
using super::super;

// gboolean Volume::can_eject (GVolume* volume /*none*/);
// gboolean Volume::can_eject (::GVolume* volume /*none*/);
GI_INLINE_DECL bool can_eject_ () noexcept override;

// gboolean Volume::can_mount (GVolume* volume /*none*/);
// gboolean Volume::can_mount (::GVolume* volume /*none*/);
GI_INLINE_DECL bool can_mount_ () noexcept override;

// void Volume::changed (GVolume* volume /*none*/);
// void Volume::changed (::GVolume* volume /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// void Volume::eject (GVolume* volume /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::eject (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Volume::eject_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::eject_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Volume::eject_with_operation (GVolume* volume /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::eject_with_operation (::GVolume* volume /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Volume::eject_with_operation_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::eject_with_operation_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// char** /*full*/ Volume::enumerate_identifiers (GVolume* volume /*none*/);
// char** /*full*/ Volume::enumerate_identifiers (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_identifiers_ () noexcept override;

// GFile* /*full,nullable*/ Volume::get_activation_root (GVolume* volume /*none*/);
// ::GFile* /*full,nullable*/ Volume::get_activation_root (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::File get_activation_root_ () noexcept override;

// GDrive* /*full,nullable*/ Volume::get_drive (GVolume* volume /*none*/);
// ::GDrive* /*full,nullable*/ Volume::get_drive (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Drive get_drive_ () noexcept override;

// GIcon* /*full*/ Volume::get_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ Volume::get_icon (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// char* /*full,nullable*/ Volume::get_identifier (GVolume* volume /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ Volume::get_identifier (::GVolume* volume /*none*/, const char* kind /*none*/);
GI_INLINE_DECL gi::cstring get_identifier_ (const gi::cstring_v kind) noexcept override;

// GMount* /*full,nullable*/ Volume::get_mount (GVolume* volume /*none*/);
// ::GMount* /*full,nullable*/ Volume::get_mount (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Mount get_mount_ () noexcept override;

// char* /*full*/ Volume::get_name (GVolume* volume /*none*/);
// char* /*full*/ Volume::get_name (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::cstring get_name_ () noexcept override;

// const gchar* /*none,nullable*/ Volume::get_sort_key (GVolume* volume /*none*/);
// const char* /*none,nullable*/ Volume::get_sort_key (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::cstring_v get_sort_key_ () noexcept override;

// GIcon* /*full*/ Volume::get_symbolic_icon (GVolume* volume /*none*/);
// ::GIcon* /*full*/ Volume::get_symbolic_icon (::GVolume* volume /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon_ () noexcept override;

// char* /*full,nullable*/ Volume::get_uuid (GVolume* volume /*none*/);
// char* /*full,nullable*/ Volume::get_uuid (::GVolume* volume /*none*/);
GI_INLINE_DECL gi::cstring get_uuid_ () noexcept override;

// gboolean Volume::mount_finish (GVolume* volume /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Volume::mount_finish (::GVolume* volume /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool mount_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Volume::mount_fn (GVolume* volume /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Volume::mount_fn (::GVolume* volume /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void mount_fn_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// void Volume::removed (GVolume* volume /*none*/);
// void Volume::removed (::GVolume* volume /*none*/);
GI_INLINE_DECL void removed_ () noexcept override;

// gboolean Volume::should_automount (GVolume* volume /*none*/);
// gboolean Volume::should_automount (::GVolume* volume /*none*/);
GI_INLINE_DECL bool should_automount_ () noexcept override;


};


struct VolumeIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, can_eject)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, can_mount)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, changed)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, eject_with_operation)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, eject_with_operation_finish)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, enumerate_identifiers)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_activation_root)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_drive)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_icon)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_identifier)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_mount)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_name)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_sort_key)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_symbolic_icon)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, get_uuid)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, mount_finish)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, mount_fn)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, removed)
  GI_MEMBER_DEFINE(VolumeIfaceClassImpl, should_automount)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_eject),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_mount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_with_operation),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_with_operation_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enumerate_identifiers),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_activation_root),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_drive),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_identifier),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_mount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_sort_key),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_symbolic_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_uuid),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, removed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, should_automount)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
