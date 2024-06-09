// AUTO-GENERATED

#ifndef _GI_GIO_DRIVE_HPP_
#define _GI_GIO_DRIVE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Icon;
class MountOperation;
class Volume;

class Drive;

namespace base {


#define GI_GIO_DRIVE_BASE base::DriveBase
class DriveBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDrive BaseObjectType;

DriveBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_drive_get_type(); } 

// gboolean g_drive_can_eject (GDrive* drive /*none*/);
// gboolean g_drive_can_eject (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_eject () noexcept;

// gboolean g_drive_can_poll_for_media (GDrive* drive /*none*/);
// gboolean g_drive_can_poll_for_media (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_poll_for_media () noexcept;

// gboolean g_drive_can_start (GDrive* drive /*none*/);
// gboolean g_drive_can_start (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_start () noexcept;

// gboolean g_drive_can_start_degraded (GDrive* drive /*none*/);
// gboolean g_drive_can_start_degraded (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_start_degraded () noexcept;

// gboolean g_drive_can_stop (GDrive* drive /*none*/);
// gboolean g_drive_can_stop (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_stop () noexcept;

// void g_drive_eject (GDrive* drive /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_eject (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_drive_eject_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_eject_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_drive_eject_with_operation (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_eject_with_operation (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_eject_with_operation_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_eject_with_operation_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char** /*full*/ g_drive_enumerate_identifiers (GDrive* drive /*none*/);
// char** /*full*/ g_drive_enumerate_identifiers (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_identifiers () noexcept;

// GIcon* /*full*/ g_drive_get_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ g_drive_get_icon (::GDrive* drive /*none*/);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// char* /*full,nullable*/ g_drive_get_identifier (GDrive* drive /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ g_drive_get_identifier (::GDrive* drive /*none*/, const char* kind /*none*/);
GI_INLINE_DECL gi::cstring get_identifier (const gi::cstring_v kind) noexcept;

// char* /*full*/ g_drive_get_name (GDrive* drive /*none*/);
// char* /*full*/ g_drive_get_name (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::cstring get_name () noexcept;

// const gchar* /*none,nullable*/ g_drive_get_sort_key (GDrive* drive /*none*/);
// const char* /*none,nullable*/ g_drive_get_sort_key (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::cstring_v get_sort_key () noexcept;

// GDriveStartStopType g_drive_get_start_stop_type (GDrive* drive /*none*/);
// ::GDriveStartStopType g_drive_get_start_stop_type (::GDrive* drive /*none*/);
GI_INLINE_DECL Gio::DriveStartStopType get_start_stop_type () noexcept;

// GIcon* /*full*/ g_drive_get_symbolic_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ g_drive_get_symbolic_icon (::GDrive* drive /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// GList* /*full*/ g_drive_get_volumes (GDrive* drive /*none*/);
// ::GList* /*full*/ g_drive_get_volumes (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GVolume*, gi::transfer_full_t> get_volumes () noexcept;

// gboolean g_drive_has_media (GDrive* drive /*none*/);
// gboolean g_drive_has_media (::GDrive* drive /*none*/);
GI_INLINE_DECL bool has_media () noexcept;

// gboolean g_drive_has_volumes (GDrive* drive /*none*/);
// gboolean g_drive_has_volumes (::GDrive* drive /*none*/);
GI_INLINE_DECL bool has_volumes () noexcept;

// gboolean g_drive_is_media_check_automatic (GDrive* drive /*none*/);
// gboolean g_drive_is_media_check_automatic (::GDrive* drive /*none*/);
GI_INLINE_DECL bool is_media_check_automatic () noexcept;

// gboolean g_drive_is_media_removable (GDrive* drive /*none*/);
// gboolean g_drive_is_media_removable (::GDrive* drive /*none*/);
GI_INLINE_DECL bool is_media_removable () noexcept;

// gboolean g_drive_is_removable (GDrive* drive /*none*/);
// gboolean g_drive_is_removable (::GDrive* drive /*none*/);
GI_INLINE_DECL bool is_removable () noexcept;

// void g_drive_poll_for_media (GDrive* drive /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_poll_for_media (::GDrive* drive /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void poll_for_media (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void poll_for_media (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_poll_for_media_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_poll_for_media_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool poll_for_media_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool poll_for_media_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_drive_start (GDrive* drive /*none*/, GDriveStartFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_start (::GDrive* drive /*none*/, ::GDriveStartFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void start (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void start (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_start_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_start_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool start_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool start_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_drive_stop (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_drive_stop (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void stop (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void stop (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_drive_stop_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_drive_stop_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool stop_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool stop_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gio::Drive)> signal_changed()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "changed"); }

// (signal) void disconnected ();
// (signal) void disconnected ();
gi::signal_proxy<void(Gio::Drive)> signal_disconnected()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "disconnected"); }

// (signal) void eject-button ();
// (signal) void eject-button ();
gi::signal_proxy<void(Gio::Drive)> signal_eject_button()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "eject-button"); }

// (signal) void stop-button ();
// (signal) void stop-button ();
gi::signal_proxy<void(Gio::Drive)> signal_stop_button()
{ return gi::signal_proxy<void(Gio::Drive)> (*this, "stop-button"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/drive_extra_def.hpp>)
#include <gio/drive_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/drive_extra.hpp>)
#include <gio/drive_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Drive : public GI_GIO_DRIVE_BASE
{ typedef GI_GIO_DRIVE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDrive>
{ typedef Gio::Drive type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DriveIfaceDef
{
typedef DriveIfaceDef self;
public:
typedef Gio::Drive instance_type;
typedef ::GDriveIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(can_eject) = self;
using GI_MEMBER_CHECK_CONFLICT(can_poll_for_media) = self;
using GI_MEMBER_CHECK_CONFLICT(can_start) = self;
using GI_MEMBER_CHECK_CONFLICT(can_start_degraded) = self;
using GI_MEMBER_CHECK_CONFLICT(can_stop) = self;
using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(disconnected) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_button) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_with_operation) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_with_operation_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(enumerate_identifiers) = self;
using GI_MEMBER_CHECK_CONFLICT(get_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_identifier) = self;
using GI_MEMBER_CHECK_CONFLICT(get_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_sort_key) = self;
using GI_MEMBER_CHECK_CONFLICT(get_start_stop_type) = self;
using GI_MEMBER_CHECK_CONFLICT(get_symbolic_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_volumes) = self;
using GI_MEMBER_CHECK_CONFLICT(has_media) = self;
using GI_MEMBER_CHECK_CONFLICT(has_volumes) = self;
using GI_MEMBER_CHECK_CONFLICT(is_media_check_automatic) = self;
using GI_MEMBER_CHECK_CONFLICT(is_media_removable) = self;
using GI_MEMBER_CHECK_CONFLICT(is_removable) = self;
using GI_MEMBER_CHECK_CONFLICT(poll_for_media) = self;
using GI_MEMBER_CHECK_CONFLICT(poll_for_media_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(start) = self;
using GI_MEMBER_CHECK_CONFLICT(start_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(stop) = self;
using GI_MEMBER_CHECK_CONFLICT(stop_button) = self;
using GI_MEMBER_CHECK_CONFLICT(stop_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DriveIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Drive::can_eject (GDrive* drive /*none*/);
// gboolean Drive::can_eject (::GDrive* drive /*none*/);
virtual bool can_eject_ () noexcept = 0;

// gboolean Drive::can_poll_for_media (GDrive* drive /*none*/);
// gboolean Drive::can_poll_for_media (::GDrive* drive /*none*/);
virtual bool can_poll_for_media_ () noexcept = 0;

// gboolean Drive::can_start (GDrive* drive /*none*/);
// gboolean Drive::can_start (::GDrive* drive /*none*/);
virtual bool can_start_ () noexcept = 0;

// gboolean Drive::can_start_degraded (GDrive* drive /*none*/);
// gboolean Drive::can_start_degraded (::GDrive* drive /*none*/);
virtual bool can_start_degraded_ () noexcept = 0;

// gboolean Drive::can_stop (GDrive* drive /*none*/);
// gboolean Drive::can_stop (::GDrive* drive /*none*/);
virtual bool can_stop_ () noexcept = 0;

// void Drive::changed (GDrive* drive /*none*/);
// void Drive::changed (::GDrive* drive /*none*/);
virtual void changed_ () noexcept = 0;

// void Drive::disconnected (GDrive* drive /*none*/);
// void Drive::disconnected (::GDrive* drive /*none*/);
virtual void disconnected_ () noexcept = 0;

// void Drive::eject (GDrive* drive /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::eject (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// void Drive::eject_button (GDrive* drive /*none*/);
// void Drive::eject_button (::GDrive* drive /*none*/);
virtual void eject_button_ () noexcept = 0;

// gboolean Drive::eject_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::eject_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Drive::eject_with_operation (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::eject_with_operation (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Drive::eject_with_operation_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::eject_with_operation_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// char** /*full*/ Drive::enumerate_identifiers (GDrive* drive /*none*/);
// char** /*full*/ Drive::enumerate_identifiers (::GDrive* drive /*none*/);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_identifiers_ () noexcept = 0;

// GIcon* /*full*/ Drive::get_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ Drive::get_icon (::GDrive* drive /*none*/);
virtual Gio::Icon get_icon_ () noexcept = 0;

// char* /*full,nullable*/ Drive::get_identifier (GDrive* drive /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ Drive::get_identifier (::GDrive* drive /*none*/, const char* kind /*none*/);
virtual gi::cstring get_identifier_ (const gi::cstring_v kind) noexcept = 0;

// char* /*full*/ Drive::get_name (GDrive* drive /*none*/);
// char* /*full*/ Drive::get_name (::GDrive* drive /*none*/);
virtual gi::cstring get_name_ () noexcept = 0;

// const gchar* /*none,nullable*/ Drive::get_sort_key (GDrive* drive /*none*/);
// const char* /*none,nullable*/ Drive::get_sort_key (::GDrive* drive /*none*/);
virtual gi::cstring_v get_sort_key_ () noexcept = 0;

// GDriveStartStopType Drive::get_start_stop_type (GDrive* drive /*none*/);
// ::GDriveStartStopType Drive::get_start_stop_type (::GDrive* drive /*none*/);
virtual Gio::DriveStartStopType get_start_stop_type_ () noexcept = 0;

// GIcon* /*full*/ Drive::get_symbolic_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ Drive::get_symbolic_icon (::GDrive* drive /*none*/);
virtual Gio::Icon get_symbolic_icon_ () noexcept = 0;

// GList* /*full*/ Drive::get_volumes (GDrive* drive /*none*/);
// ::GList* /*full*/ Drive::get_volumes (::GDrive* drive /*none*/);
virtual gi::Collection<GList, ::GVolume*, gi::transfer_full_t> get_volumes_ () noexcept = 0;

// gboolean Drive::has_media (GDrive* drive /*none*/);
// gboolean Drive::has_media (::GDrive* drive /*none*/);
virtual bool has_media_ () noexcept = 0;

// gboolean Drive::has_volumes (GDrive* drive /*none*/);
// gboolean Drive::has_volumes (::GDrive* drive /*none*/);
virtual bool has_volumes_ () noexcept = 0;

// gboolean Drive::is_media_check_automatic (GDrive* drive /*none*/);
// gboolean Drive::is_media_check_automatic (::GDrive* drive /*none*/);
virtual bool is_media_check_automatic_ () noexcept = 0;

// gboolean Drive::is_media_removable (GDrive* drive /*none*/);
// gboolean Drive::is_media_removable (::GDrive* drive /*none*/);
virtual bool is_media_removable_ () noexcept = 0;

// gboolean Drive::is_removable (GDrive* drive /*none*/);
// gboolean Drive::is_removable (::GDrive* drive /*none*/);
virtual bool is_removable_ () noexcept = 0;

// void Drive::poll_for_media (GDrive* drive /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::poll_for_media (::GDrive* drive /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void poll_for_media_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Drive::poll_for_media_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::poll_for_media_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool poll_for_media_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Drive::start (GDrive* drive /*none*/, GDriveStartFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::start (::GDrive* drive /*none*/, ::GDriveStartFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void start_ (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean Drive::start_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::start_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool start_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Drive::stop (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::stop (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void stop_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// void Drive::stop_button (GDrive* drive /*none*/);
// void Drive::stop_button (::GDrive* drive /*none*/);
virtual void stop_button_ () noexcept = 0;

// gboolean Drive::stop_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::stop_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool stop_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

using DriveImpl = detail::InterfaceImpl<DriveIfaceDef>;

class DriveIfaceClassImpl: public detail::InterfaceClassImpl<DriveImpl>
{
friend class internal::DriveIfaceDef;
typedef DriveIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DriveImpl> super;

protected:
using super::super;

// gboolean Drive::can_eject (GDrive* drive /*none*/);
// gboolean Drive::can_eject (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_eject_ () noexcept override;

// gboolean Drive::can_poll_for_media (GDrive* drive /*none*/);
// gboolean Drive::can_poll_for_media (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_poll_for_media_ () noexcept override;

// gboolean Drive::can_start (GDrive* drive /*none*/);
// gboolean Drive::can_start (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_start_ () noexcept override;

// gboolean Drive::can_start_degraded (GDrive* drive /*none*/);
// gboolean Drive::can_start_degraded (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_start_degraded_ () noexcept override;

// gboolean Drive::can_stop (GDrive* drive /*none*/);
// gboolean Drive::can_stop (::GDrive* drive /*none*/);
GI_INLINE_DECL bool can_stop_ () noexcept override;

// void Drive::changed (GDrive* drive /*none*/);
// void Drive::changed (::GDrive* drive /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// void Drive::disconnected (GDrive* drive /*none*/);
// void Drive::disconnected (::GDrive* drive /*none*/);
GI_INLINE_DECL void disconnected_ () noexcept override;

// void Drive::eject (GDrive* drive /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::eject (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// void Drive::eject_button (GDrive* drive /*none*/);
// void Drive::eject_button (::GDrive* drive /*none*/);
GI_INLINE_DECL void eject_button_ () noexcept override;

// gboolean Drive::eject_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::eject_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void Drive::eject_with_operation (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::eject_with_operation (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Drive::eject_with_operation_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::eject_with_operation_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// char** /*full*/ Drive::enumerate_identifiers (GDrive* drive /*none*/);
// char** /*full*/ Drive::enumerate_identifiers (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_identifiers_ () noexcept override;

// GIcon* /*full*/ Drive::get_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ Drive::get_icon (::GDrive* drive /*none*/);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// char* /*full,nullable*/ Drive::get_identifier (GDrive* drive /*none*/, const char* kind /*none*/);
// char* /*full,nullable*/ Drive::get_identifier (::GDrive* drive /*none*/, const char* kind /*none*/);
GI_INLINE_DECL gi::cstring get_identifier_ (const gi::cstring_v kind) noexcept override;

// char* /*full*/ Drive::get_name (GDrive* drive /*none*/);
// char* /*full*/ Drive::get_name (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::cstring get_name_ () noexcept override;

// const gchar* /*none,nullable*/ Drive::get_sort_key (GDrive* drive /*none*/);
// const char* /*none,nullable*/ Drive::get_sort_key (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::cstring_v get_sort_key_ () noexcept override;

// GDriveStartStopType Drive::get_start_stop_type (GDrive* drive /*none*/);
// ::GDriveStartStopType Drive::get_start_stop_type (::GDrive* drive /*none*/);
GI_INLINE_DECL Gio::DriveStartStopType get_start_stop_type_ () noexcept override;

// GIcon* /*full*/ Drive::get_symbolic_icon (GDrive* drive /*none*/);
// ::GIcon* /*full*/ Drive::get_symbolic_icon (::GDrive* drive /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon_ () noexcept override;

// GList* /*full*/ Drive::get_volumes (GDrive* drive /*none*/);
// ::GList* /*full*/ Drive::get_volumes (::GDrive* drive /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GVolume*, gi::transfer_full_t> get_volumes_ () noexcept override;

// gboolean Drive::has_media (GDrive* drive /*none*/);
// gboolean Drive::has_media (::GDrive* drive /*none*/);
GI_INLINE_DECL bool has_media_ () noexcept override;

// gboolean Drive::has_volumes (GDrive* drive /*none*/);
// gboolean Drive::has_volumes (::GDrive* drive /*none*/);
GI_INLINE_DECL bool has_volumes_ () noexcept override;

// gboolean Drive::is_media_check_automatic (GDrive* drive /*none*/);
// gboolean Drive::is_media_check_automatic (::GDrive* drive /*none*/);
GI_INLINE_DECL bool is_media_check_automatic_ () noexcept override;

// gboolean Drive::is_media_removable (GDrive* drive /*none*/);
// gboolean Drive::is_media_removable (::GDrive* drive /*none*/);
GI_INLINE_DECL bool is_media_removable_ () noexcept override;

// gboolean Drive::is_removable (GDrive* drive /*none*/);
// gboolean Drive::is_removable (::GDrive* drive /*none*/);
GI_INLINE_DECL bool is_removable_ () noexcept override;

// void Drive::poll_for_media (GDrive* drive /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::poll_for_media (::GDrive* drive /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void poll_for_media_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Drive::poll_for_media_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::poll_for_media_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool poll_for_media_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Drive::start (GDrive* drive /*none*/, GDriveStartFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::start (::GDrive* drive /*none*/, ::GDriveStartFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void start_ (Gio::DriveStartFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean Drive::start_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::start_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool start_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Drive::stop (GDrive* drive /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Drive::stop (::GDrive* drive /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void stop_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// void Drive::stop_button (GDrive* drive /*none*/);
// void Drive::stop_button (::GDrive* drive /*none*/);
GI_INLINE_DECL void stop_button_ () noexcept override;

// gboolean Drive::stop_finish (GDrive* drive /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Drive::stop_finish (::GDrive* drive /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool stop_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct DriveIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, can_eject)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, can_poll_for_media)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, can_start)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, can_start_degraded)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, can_stop)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, changed)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, disconnected)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, eject_button)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, eject_with_operation)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, eject_with_operation_finish)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, enumerate_identifiers)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_icon)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_identifier)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_name)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_sort_key)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_start_stop_type)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_symbolic_icon)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, get_volumes)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, has_media)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, has_volumes)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, is_media_check_automatic)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, is_media_removable)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, is_removable)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, poll_for_media)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, poll_for_media_finish)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, start)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, start_finish)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, stop)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, stop_button)
  GI_MEMBER_DEFINE(DriveIfaceClassImpl, stop_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_eject),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_poll_for_media),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_start),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_start_degraded),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_stop),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, disconnected),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_button),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_with_operation),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_with_operation_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enumerate_identifiers),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_identifier),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_sort_key),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_start_stop_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_symbolic_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_volumes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, has_media),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, has_volumes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_media_check_automatic),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_media_removable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_removable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, poll_for_media),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, poll_for_media_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, start),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, start_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, stop),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, stop_button),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, stop_finish)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
