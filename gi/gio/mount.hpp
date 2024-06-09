// AUTO-GENERATED

#ifndef _GI_GIO_MOUNT_HPP_
#define _GI_GIO_MOUNT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Drive;
class File;
class Icon;
class MountOperation;
class Volume;

class Mount;

namespace base {


#define GI_GIO_MOUNT_BASE base::MountBase
class MountBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GMount BaseObjectType;

MountBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_mount_get_type(); } 

// gboolean g_mount_can_eject (GMount* mount /*none*/);
// gboolean g_mount_can_eject (::GMount* mount /*none*/);
GI_INLINE_DECL bool can_eject () noexcept;

// gboolean g_mount_can_unmount (GMount* mount /*none*/);
// gboolean g_mount_can_unmount (::GMount* mount /*none*/);
GI_INLINE_DECL bool can_unmount () noexcept;

// void g_mount_eject (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_eject (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_eject_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_eject_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_mount_eject_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_eject_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_mount_eject_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_eject_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_mount_get_default_location (GMount* mount /*none*/);
// ::GFile* /*full*/ g_mount_get_default_location (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::File get_default_location () noexcept;

// GDrive* /*full,nullable*/ g_mount_get_drive (GMount* mount /*none*/);
// ::GDrive* /*full,nullable*/ g_mount_get_drive (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Drive get_drive () noexcept;

// GIcon* /*full*/ g_mount_get_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ g_mount_get_icon (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// char* /*full*/ g_mount_get_name (GMount* mount /*none*/);
// char* /*full*/ g_mount_get_name (::GMount* mount /*none*/);
GI_INLINE_DECL gi::cstring get_name () noexcept;

// GFile* /*full*/ g_mount_get_root (GMount* mount /*none*/);
// ::GFile* /*full*/ g_mount_get_root (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::File get_root () noexcept;

// const gchar* /*none,nullable*/ g_mount_get_sort_key (GMount* mount /*none*/);
// const char* /*none,nullable*/ g_mount_get_sort_key (::GMount* mount /*none*/);
GI_INLINE_DECL gi::cstring_v get_sort_key () noexcept;

// GIcon* /*full*/ g_mount_get_symbolic_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ g_mount_get_symbolic_icon (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// char* /*full,nullable*/ g_mount_get_uuid (GMount* mount /*none*/);
// char* /*full,nullable*/ g_mount_get_uuid (::GMount* mount /*none*/);
GI_INLINE_DECL gi::cstring get_uuid () noexcept;

// GVolume* /*full,nullable*/ g_mount_get_volume (GMount* mount /*none*/);
// ::GVolume* /*full,nullable*/ g_mount_get_volume (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Volume get_volume () noexcept;

// void g_mount_guess_content_type (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_guess_content_type (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void guess_content_type (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void guess_content_type (gboolean force_rescan, Gio::AsyncReadyCallback callback) noexcept;

// gchar** /*full*/ g_mount_guess_content_type_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ g_mount_guess_content_type_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_mount_guess_content_type_sync (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ g_mount_guess_content_type_sync (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_sync (gboolean force_rescan);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_sync (gboolean force_rescan, GLib::Error * _error) noexcept;

// gboolean g_mount_is_shadowed (GMount* mount /*none*/);
// gboolean g_mount_is_shadowed (::GMount* mount /*none*/);
GI_INLINE_DECL bool is_shadowed () noexcept;

// void g_mount_remount (GMount* mount /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_remount (::GMount* mount /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void remount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void remount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_mount_remount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_remount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool remount_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool remount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_mount_shadow (GMount* mount /*none*/);
// void g_mount_shadow (::GMount* mount /*none*/);
GI_INLINE_DECL void shadow () noexcept;

// void g_mount_unmount (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_unmount (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_unmount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_unmount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_mount_unmount_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_unmount_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void unmount_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void unmount_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_mount_unmount_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_unmount_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool unmount_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool unmount_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_mount_unshadow (GMount* mount /*none*/);
// void g_mount_unshadow (::GMount* mount /*none*/);
GI_INLINE_DECL void unshadow () noexcept;

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gio::Mount)> signal_changed()
{ return gi::signal_proxy<void(Gio::Mount)> (*this, "changed"); }

// (signal) void pre-unmount ();
// (signal) void pre-unmount ();
gi::signal_proxy<void(Gio::Mount)> signal_pre_unmount()
{ return gi::signal_proxy<void(Gio::Mount)> (*this, "pre-unmount"); }

// (signal) void unmounted ();
// (signal) void unmounted ();
gi::signal_proxy<void(Gio::Mount)> signal_unmounted()
{ return gi::signal_proxy<void(Gio::Mount)> (*this, "unmounted"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mount_extra_def.hpp>)
#include <gio/mount_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mount_extra.hpp>)
#include <gio/mount_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Mount : public GI_GIO_MOUNT_BASE
{ typedef GI_GIO_MOUNT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMount>
{ typedef Gio::Mount type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MountIfaceDef
{
typedef MountIfaceDef self;
public:
typedef Gio::Mount instance_type;
typedef ::GMountIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(can_eject) = self;
using GI_MEMBER_CHECK_CONFLICT(can_unmount) = self;
using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_with_operation) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_with_operation_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(get_default_location) = self;
using GI_MEMBER_CHECK_CONFLICT(get_drive) = self;
using GI_MEMBER_CHECK_CONFLICT(get_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_root) = self;
using GI_MEMBER_CHECK_CONFLICT(get_sort_key) = self;
using GI_MEMBER_CHECK_CONFLICT(get_symbolic_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_uuid) = self;
using GI_MEMBER_CHECK_CONFLICT(get_volume) = self;
using GI_MEMBER_CHECK_CONFLICT(guess_content_type) = self;
using GI_MEMBER_CHECK_CONFLICT(guess_content_type_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(guess_content_type_sync) = self;
using GI_MEMBER_CHECK_CONFLICT(pre_unmount) = self;
using GI_MEMBER_CHECK_CONFLICT(remount) = self;
using GI_MEMBER_CHECK_CONFLICT(remount_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(unmount_with_operation) = self;
using GI_MEMBER_CHECK_CONFLICT(unmount_with_operation_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(unmounted) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MountIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Mount::can_eject (GMount* mount /*none*/);
// gboolean Mount::can_eject (::GMount* mount /*none*/);
virtual bool can_eject_ () noexcept = 0;

// gboolean Mount::can_unmount (GMount* mount /*none*/);
// gboolean Mount::can_unmount (::GMount* mount /*none*/);
virtual bool can_unmount_ () noexcept = 0;

// void Mount::changed (GMount* mount /*none*/);
// void Mount::changed (::GMount* mount /*none*/);
virtual void changed_ () noexcept = 0;

// void Mount::eject (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::eject (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Mount::eject_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::eject_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Mount::eject_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::eject_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Mount::eject_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::eject_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GFile* /*full*/ Mount::get_default_location (GMount* mount /*none*/);
// ::GFile* /*full*/ Mount::get_default_location (::GMount* mount /*none*/);
virtual Gio::File get_default_location_ () noexcept = 0;

// GDrive* /*full,nullable*/ Mount::get_drive (GMount* mount /*none*/);
// ::GDrive* /*full,nullable*/ Mount::get_drive (::GMount* mount /*none*/);
virtual Gio::Drive get_drive_ () noexcept = 0;

// GIcon* /*full*/ Mount::get_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ Mount::get_icon (::GMount* mount /*none*/);
virtual Gio::Icon get_icon_ () noexcept = 0;

// char* /*full*/ Mount::get_name (GMount* mount /*none*/);
// char* /*full*/ Mount::get_name (::GMount* mount /*none*/);
virtual gi::cstring get_name_ () noexcept = 0;

// GFile* /*full*/ Mount::get_root (GMount* mount /*none*/);
// ::GFile* /*full*/ Mount::get_root (::GMount* mount /*none*/);
virtual Gio::File get_root_ () noexcept = 0;

// const gchar* /*none,nullable*/ Mount::get_sort_key (GMount* mount /*none*/);
// const char* /*none,nullable*/ Mount::get_sort_key (::GMount* mount /*none*/);
virtual gi::cstring_v get_sort_key_ () noexcept = 0;

// GIcon* /*full*/ Mount::get_symbolic_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ Mount::get_symbolic_icon (::GMount* mount /*none*/);
virtual Gio::Icon get_symbolic_icon_ () noexcept = 0;

// char* /*full,nullable*/ Mount::get_uuid (GMount* mount /*none*/);
// char* /*full,nullable*/ Mount::get_uuid (::GMount* mount /*none*/);
virtual gi::cstring get_uuid_ () noexcept = 0;

// GVolume* /*full,nullable*/ Mount::get_volume (GMount* mount /*none*/);
// ::GVolume* /*full,nullable*/ Mount::get_volume (::GMount* mount /*none*/);
virtual Gio::Volume get_volume_ () noexcept = 0;

// void Mount::guess_content_type (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::guess_content_type (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void guess_content_type_ (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gchar** /*full*/ Mount::guess_content_type_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ Mount::guess_content_type_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gchar** /*full*/ Mount::guess_content_type_sync (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ Mount::guess_content_type_sync (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_sync_ (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Mount::pre_unmount (GMount* mount /*none*/);
// void Mount::pre_unmount (::GMount* mount /*none*/);
virtual void pre_unmount_ () noexcept = 0;

// void Mount::remount (GMount* mount /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::remount (::GMount* mount /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void remount_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Mount::remount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::remount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool remount_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Mount::unmount (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::unmount (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Mount::unmount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::unmount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Mount::unmount_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::unmount_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void unmount_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Mount::unmount_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::unmount_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool unmount_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Mount::unmounted (GMount* mount /*none*/);
// void Mount::unmounted (::GMount* mount /*none*/);
virtual void unmounted_ () noexcept = 0;


};

using MountImpl = detail::InterfaceImpl<MountIfaceDef>;

class MountIfaceClassImpl: public detail::InterfaceClassImpl<MountImpl>
{
friend class internal::MountIfaceDef;
typedef MountIfaceClassImpl self;
typedef detail::InterfaceClassImpl<MountImpl> super;

protected:
using super::super;

// gboolean Mount::can_eject (GMount* mount /*none*/);
// gboolean Mount::can_eject (::GMount* mount /*none*/);
GI_INLINE_DECL bool can_eject_ () noexcept override;

// gboolean Mount::can_unmount (GMount* mount /*none*/);
// gboolean Mount::can_unmount (::GMount* mount /*none*/);
GI_INLINE_DECL bool can_unmount_ () noexcept override;

// void Mount::changed (GMount* mount /*none*/);
// void Mount::changed (::GMount* mount /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// void Mount::eject (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::eject (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Mount::eject_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::eject_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Mount::eject_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::eject_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Mount::eject_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::eject_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GFile* /*full*/ Mount::get_default_location (GMount* mount /*none*/);
// ::GFile* /*full*/ Mount::get_default_location (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::File get_default_location_ () noexcept override;

// GDrive* /*full,nullable*/ Mount::get_drive (GMount* mount /*none*/);
// ::GDrive* /*full,nullable*/ Mount::get_drive (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Drive get_drive_ () noexcept override;

// GIcon* /*full*/ Mount::get_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ Mount::get_icon (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// char* /*full*/ Mount::get_name (GMount* mount /*none*/);
// char* /*full*/ Mount::get_name (::GMount* mount /*none*/);
GI_INLINE_DECL gi::cstring get_name_ () noexcept override;

// GFile* /*full*/ Mount::get_root (GMount* mount /*none*/);
// ::GFile* /*full*/ Mount::get_root (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::File get_root_ () noexcept override;

// const gchar* /*none,nullable*/ Mount::get_sort_key (GMount* mount /*none*/);
// const char* /*none,nullable*/ Mount::get_sort_key (::GMount* mount /*none*/);
GI_INLINE_DECL gi::cstring_v get_sort_key_ () noexcept override;

// GIcon* /*full*/ Mount::get_symbolic_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ Mount::get_symbolic_icon (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon_ () noexcept override;

// char* /*full,nullable*/ Mount::get_uuid (GMount* mount /*none*/);
// char* /*full,nullable*/ Mount::get_uuid (::GMount* mount /*none*/);
GI_INLINE_DECL gi::cstring get_uuid_ () noexcept override;

// GVolume* /*full,nullable*/ Mount::get_volume (GMount* mount /*none*/);
// ::GVolume* /*full,nullable*/ Mount::get_volume (::GMount* mount /*none*/);
GI_INLINE_DECL Gio::Volume get_volume_ () noexcept override;

// void Mount::guess_content_type (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::guess_content_type (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void guess_content_type_ (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gchar** /*full*/ Mount::guess_content_type_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ Mount::guess_content_type_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gchar** /*full*/ Mount::guess_content_type_sync (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ Mount::guess_content_type_sync (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> guess_content_type_sync_ (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Mount::pre_unmount (GMount* mount /*none*/);
// void Mount::pre_unmount (::GMount* mount /*none*/);
GI_INLINE_DECL void pre_unmount_ () noexcept override;

// void Mount::remount (GMount* mount /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::remount (::GMount* mount /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void remount_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Mount::remount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::remount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool remount_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Mount::unmount (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::unmount (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean Mount::unmount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::unmount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Mount::unmount_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::unmount_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void unmount_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Mount::unmount_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::unmount_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool unmount_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Mount::unmounted (GMount* mount /*none*/);
// void Mount::unmounted (::GMount* mount /*none*/);
GI_INLINE_DECL void unmounted_ () noexcept override;


};


struct MountIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(MountIfaceClassImpl, can_eject)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, can_unmount)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, changed)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, eject_with_operation)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, eject_with_operation_finish)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_default_location)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_drive)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_icon)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_name)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_root)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_sort_key)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_symbolic_icon)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_uuid)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, get_volume)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, guess_content_type)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, guess_content_type_finish)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, guess_content_type_sync)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, pre_unmount)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, remount)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, remount_finish)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, unmount_with_operation)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, unmount_with_operation_finish)
  GI_MEMBER_DEFINE(MountIfaceClassImpl, unmounted)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_eject),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_unmount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_with_operation),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_with_operation_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_default_location),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_drive),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_root),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_sort_key),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_symbolic_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_uuid),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_volume),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, guess_content_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, guess_content_type_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, guess_content_type_sync),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, pre_unmount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remount_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unmount_with_operation),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unmount_with_operation_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unmounted)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
