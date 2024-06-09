// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMESSAGE_HPP_
#define _GI_GIO_DBUSMESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class UnixFDList;

class DBusMessage;

namespace base {


#define GI_GIO_DBUSMESSAGE_BASE base::DBusMessageBase
class DBusMessageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusMessage BaseObjectType;

DBusMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_message_get_type(); } 

// GDBusMessage* /*full*/ g_dbus_message_new ();
// ::GDBusMessage* /*full*/ g_dbus_message_new ();
static GI_INLINE_DECL Gio::DBusMessage new_ () noexcept;

// GDBusMessage* /*full*/ g_dbus_message_new_from_blob (guchar* blob /*none*/, gsize blob_len, GDBusCapabilityFlags capabilities, GError ** error);
// ::GDBusMessage* /*full*/ g_dbus_message_new_from_blob (guint8* blob /*none*/, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
static GI_INLINE_DECL Gio::DBusMessage new_from_blob (const guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities);
static GI_INLINE_DECL Gio::DBusMessage new_from_blob (const guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept;

// GDBusMessage* /*full*/ g_dbus_message_new_method_call (const gchar* name /*none,nullable*/, const gchar* path /*none*/, const gchar* interface_ /*none,nullable*/, const gchar* method /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_call (const char* name /*none,nullable*/, const char* path /*none*/, const char* interface_ /*none,nullable*/, const char* method /*none*/);
static GI_INLINE_DECL Gio::DBusMessage new_method_call (const gi::cstring_v name, const gi::cstring_v path, const gi::cstring_v interface_, const gi::cstring_v method) noexcept;
static GI_INLINE_DECL Gio::DBusMessage new_method_call (const gi::cstring_v path, const gi::cstring_v method) noexcept;

// GDBusMessage* /*full*/ g_dbus_message_new_signal (const gchar* path /*none*/, const gchar* interface_ /*none*/, const gchar* signal /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_signal (const char* path /*none*/, const char* interface_ /*none*/, const char* signal /*none*/);
static GI_INLINE_DECL Gio::DBusMessage new_signal (const gi::cstring_v path, const gi::cstring_v interface_, const gi::cstring_v signal) noexcept;

// gssize g_dbus_message_bytes_needed (guchar* blob /*none*/, gsize blob_len, GError ** error);
// gssize g_dbus_message_bytes_needed (guint8* blob /*none*/, gsize blob_len, GError ** error);
static GI_INLINE_DECL gssize bytes_needed (const guint8 * blob, gsize blob_len);
static GI_INLINE_DECL gssize bytes_needed (const guint8 * blob, gsize blob_len, GLib::Error * _error) noexcept;

// GDBusMessage* /*full*/ g_dbus_message_copy (GDBusMessage* message /*none*/, GError ** error);
// ::GDBusMessage* /*full*/ g_dbus_message_copy (::GDBusMessage* message /*none*/, GError ** error);
GI_INLINE_DECL Gio::DBusMessage copy ();
GI_INLINE_DECL Gio::DBusMessage copy (GLib::Error * _error) noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_arg0 (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_arg0 (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_arg0 () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_arg0_path (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_arg0_path (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_arg0_path () noexcept;

// GVariant* /*none,nullable*/ g_dbus_message_get_body (GDBusMessage* message /*none*/);
// ::GVariant* /*none,nullable*/ g_dbus_message_get_body (::GDBusMessage* message /*none*/);
GI_INLINE_DECL GLib::Variant get_body () noexcept;

// GDBusMessageByteOrder g_dbus_message_get_byte_order (GDBusMessage* message /*none*/);
// ::GDBusMessageByteOrder g_dbus_message_get_byte_order (::GDBusMessage* message /*none*/);
GI_INLINE_DECL Gio::DBusMessageByteOrder get_byte_order () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_destination (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_destination (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_destination () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_error_name (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_error_name (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_error_name () noexcept;

// GDBusMessageFlags g_dbus_message_get_flags (GDBusMessage* message /*none*/);
// ::GDBusMessageFlags g_dbus_message_get_flags (::GDBusMessage* message /*none*/);
GI_INLINE_DECL Gio::DBusMessageFlags get_flags () noexcept;

// GVariant* /*none,nullable*/ g_dbus_message_get_header (GDBusMessage* message /*none*/, GDBusMessageHeaderField header_field);
// ::GVariant* /*none,nullable*/ g_dbus_message_get_header (::GDBusMessage* message /*none*/, ::GDBusMessageHeaderField header_field);
GI_INLINE_DECL GLib::Variant get_header (Gio::DBusMessageHeaderField header_field) noexcept;

// guchar* /*none*/ g_dbus_message_get_header_fields (GDBusMessage* message /*none*/);
// guint8* /*none*/ g_dbus_message_get_header_fields (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t> get_header_fields () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_interface (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_interface (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_interface () noexcept;

// gboolean g_dbus_message_get_locked (GDBusMessage* message /*none*/);
// gboolean g_dbus_message_get_locked (::GDBusMessage* message /*none*/);
GI_INLINE_DECL bool get_locked () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_member (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_member (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_member () noexcept;

// GDBusMessageType g_dbus_message_get_message_type (GDBusMessage* message /*none*/);
// ::GDBusMessageType g_dbus_message_get_message_type (::GDBusMessage* message /*none*/);
GI_INLINE_DECL Gio::DBusMessageType get_message_type () noexcept;

// guint32 g_dbus_message_get_num_unix_fds (GDBusMessage* message /*none*/);
// guint32 g_dbus_message_get_num_unix_fds (::GDBusMessage* message /*none*/);
GI_INLINE_DECL guint32 get_num_unix_fds () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_path (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_path (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_path () noexcept;

// guint32 g_dbus_message_get_reply_serial (GDBusMessage* message /*none*/);
// guint32 g_dbus_message_get_reply_serial (::GDBusMessage* message /*none*/);
GI_INLINE_DECL guint32 get_reply_serial () noexcept;

// const gchar* /*none,nullable*/ g_dbus_message_get_sender (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_sender (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_sender () noexcept;

// guint32 g_dbus_message_get_serial (GDBusMessage* message /*none*/);
// guint32 g_dbus_message_get_serial (::GDBusMessage* message /*none*/);
GI_INLINE_DECL guint32 get_serial () noexcept;

// const gchar* /*none*/ g_dbus_message_get_signature (GDBusMessage* message /*none*/);
// const char* /*none*/ g_dbus_message_get_signature (::GDBusMessage* message /*none*/);
GI_INLINE_DECL gi::cstring_v get_signature () noexcept;

// GUnixFDList* /*none,nullable*/ g_dbus_message_get_unix_fd_list (GDBusMessage* message /*none*/);
// ::GUnixFDList* /*none,nullable*/ g_dbus_message_get_unix_fd_list (::GDBusMessage* message /*none*/);
GI_INLINE_DECL Gio::UnixFDList get_unix_fd_list () noexcept;

// void g_dbus_message_lock (GDBusMessage* message /*none*/);
// void g_dbus_message_lock (::GDBusMessage* message /*none*/);
GI_INLINE_DECL void lock () noexcept;

// GDBusMessage* /*full*/ g_dbus_message_new_method_error (GDBusMessage* method_call_message /*none*/, const gchar* error_name /*none*/, const gchar* error_message_format /*none*/,  ..._ /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_error (::GDBusMessage* method_call_message /*none*/, const char* error_name /*none*/, const char* error_message_format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GDBusMessage* /*full*/ g_dbus_message_new_method_error_literal (GDBusMessage* method_call_message /*none*/, const gchar* error_name /*none*/, const gchar* error_message /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_error_literal (::GDBusMessage* method_call_message /*none*/, const char* error_name /*none*/, const char* error_message /*none*/);
GI_INLINE_DECL Gio::DBusMessage new_method_error_literal (const gi::cstring_v error_name, const gi::cstring_v error_message) noexcept;

// GDBusMessage* /*full*/ g_dbus_message_new_method_error_valist (GDBusMessage* method_call_message /*none*/, const gchar* error_name /*none*/, const gchar* error_message_format /*none*/, va_list var_args /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_error_valist (::GDBusMessage* method_call_message /*none*/, const char* error_name /*none*/, const char* error_message_format /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// GDBusMessage* /*full*/ g_dbus_message_new_method_reply (GDBusMessage* method_call_message /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_reply (::GDBusMessage* method_call_message /*none*/);
GI_INLINE_DECL Gio::DBusMessage new_method_reply () noexcept;

// gchar* /*full*/ g_dbus_message_print (GDBusMessage* message /*none*/, guint indent);
// char* /*full*/ g_dbus_message_print (::GDBusMessage* message /*none*/, guint indent);
GI_INLINE_DECL gi::cstring print (guint indent) noexcept;

// void g_dbus_message_set_body (GDBusMessage* message /*none*/, GVariant* body /*none*/);
// void g_dbus_message_set_body (::GDBusMessage* message /*none*/, ::GVariant* body /*none*/);
GI_INLINE_DECL void set_body (GLib::Variant body) noexcept;

// void g_dbus_message_set_byte_order (GDBusMessage* message /*none*/, GDBusMessageByteOrder byte_order);
// void g_dbus_message_set_byte_order (::GDBusMessage* message /*none*/, ::GDBusMessageByteOrder byte_order);
GI_INLINE_DECL void set_byte_order (Gio::DBusMessageByteOrder byte_order) noexcept;

// void g_dbus_message_set_destination (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_destination (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set_destination (const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set_destination () noexcept;

// void g_dbus_message_set_error_name (GDBusMessage* message /*none,nullable*/, const gchar* value /*none*/);
// void g_dbus_message_set_error_name (::GDBusMessage* message /*none,nullable*/, const char* value /*none*/);
GI_INLINE_DECL void set_error_name (const gi::cstring_v value) noexcept;

// void g_dbus_message_set_flags (GDBusMessage* message /*none*/, GDBusMessageFlags flags);
// void g_dbus_message_set_flags (::GDBusMessage* message /*none*/, ::GDBusMessageFlags flags);
GI_INLINE_DECL void set_flags (Gio::DBusMessageFlags flags) noexcept;

// void g_dbus_message_set_header (GDBusMessage* message /*none*/, GDBusMessageHeaderField header_field, GVariant* value /*none,nullable*/);
// void g_dbus_message_set_header (::GDBusMessage* message /*none*/, ::GDBusMessageHeaderField header_field, ::GVariant* value /*none,nullable*/);
GI_INLINE_DECL void set_header (Gio::DBusMessageHeaderField header_field, GLib::Variant value) noexcept;
GI_INLINE_DECL void set_header (Gio::DBusMessageHeaderField header_field) noexcept;

// void g_dbus_message_set_interface (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_interface (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set_interface (const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set_interface () noexcept;

// void g_dbus_message_set_member (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_member (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set_member (const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set_member () noexcept;

// void g_dbus_message_set_message_type (GDBusMessage* message /*none*/, GDBusMessageType type);
// void g_dbus_message_set_message_type (::GDBusMessage* message /*none*/, ::GDBusMessageType type);
GI_INLINE_DECL void set_message_type (Gio::DBusMessageType type) noexcept;

// void g_dbus_message_set_num_unix_fds (GDBusMessage* message /*none*/, guint32 value);
// void g_dbus_message_set_num_unix_fds (::GDBusMessage* message /*none*/, guint32 value);
GI_INLINE_DECL void set_num_unix_fds (guint32 value) noexcept;

// void g_dbus_message_set_path (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_path (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set_path (const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set_path () noexcept;

// void g_dbus_message_set_reply_serial (GDBusMessage* message /*none*/, guint32 value);
// void g_dbus_message_set_reply_serial (::GDBusMessage* message /*none*/, guint32 value);
GI_INLINE_DECL void set_reply_serial (guint32 value) noexcept;

// void g_dbus_message_set_sender (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_sender (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set_sender (const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set_sender () noexcept;

// void g_dbus_message_set_serial (GDBusMessage* message /*none*/, guint32 serial);
// void g_dbus_message_set_serial (::GDBusMessage* message /*none*/, guint32 serial);
GI_INLINE_DECL void set_serial (guint32 serial) noexcept;

// void g_dbus_message_set_signature (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_signature (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set_signature (const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set_signature () noexcept;

// void g_dbus_message_set_unix_fd_list (GDBusMessage* message /*none*/, GUnixFDList* fd_list /*none,nullable*/);
// void g_dbus_message_set_unix_fd_list (::GDBusMessage* message /*none*/, ::GUnixFDList* fd_list /*none,nullable*/);
GI_INLINE_DECL void set_unix_fd_list (Gio::UnixFDList fd_list) noexcept;
GI_INLINE_DECL void set_unix_fd_list () noexcept;

// guchar* /*full*/ g_dbus_message_to_blob (GDBusMessage* message /*none*/, gsize* out_size, GDBusCapabilityFlags capabilities, GError ** error);
// guint8* /*full*/ g_dbus_message_to_blob (::GDBusMessage* message /*none*/, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> to_blob (Gio::DBusCapabilityFlags capabilities);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> to_blob (Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept;

// gboolean g_dbus_message_to_gerror (GDBusMessage* message /*none*/, GError ** error);
// gboolean g_dbus_message_to_gerror (::GDBusMessage* message /*none*/, GError ** error);
GI_INLINE_DECL bool to_gerror ();
GI_INLINE_DECL bool to_gerror (GLib::Error * _error) noexcept;

gi::property_proxy<bool, base::DBusMessageBase> property_locked()
{ return gi::property_proxy<bool, base::DBusMessageBase> (*this, "locked"); }
const gi::property_proxy<bool, base::DBusMessageBase> property_locked() const
{ return gi::property_proxy<bool, base::DBusMessageBase> (*this, "locked"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra_def.hpp>)
#include <gio/dbusmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra.hpp>)
#include <gio/dbusmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMessage : public GI_GIO_DBUSMESSAGE_BASE
{ typedef GI_GIO_DBUSMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMessage>
{ typedef Gio::DBusMessage type; }; 

} // namespace repository

} // namespace gi

#endif
