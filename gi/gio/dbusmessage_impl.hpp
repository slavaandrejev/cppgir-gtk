// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMESSAGE_IMPL_HPP_
#define _GI_GIO_DBUSMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusMessage* /*full*/ g_dbus_message_new ();
// ::GDBusMessage* /*full*/ g_dbus_message_new ();
Gio::DBusMessage base::DBusMessageBase::new_ () noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusMessage* /*full*/ g_dbus_message_new_from_blob (guchar* blob /*none*/, gsize blob_len, GDBusCapabilityFlags capabilities, GError ** error);
// ::GDBusMessage* /*full*/ g_dbus_message_new_from_blob (guint8* blob /*none*/, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
Gio::DBusMessage base::DBusMessageBase::new_from_blob (const guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities)
{
  typedef ::GDBusMessage* (*call_wrap_t) (guint8* blob, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_from_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  auto blob_to_c = blob;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_len), (::GDBusCapabilityFlags) (capabilities_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusMessage base::DBusMessageBase::new_from_blob (const guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (guint8* blob, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_from_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  auto blob_to_c = blob;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_len), (::GDBusCapabilityFlags) (capabilities_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusMessage* /*full*/ g_dbus_message_new_method_call (const gchar* name /*none,nullable*/, const gchar* path /*none*/, const gchar* interface_ /*none,nullable*/, const gchar* method /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_call (const char* name /*none,nullable*/, const char* path /*none*/, const char* interface_ /*none,nullable*/, const char* method /*none*/);
Gio::DBusMessage base::DBusMessageBase::new_method_call (const gi::cstring_v name, const gi::cstring_v path, const gi::cstring_v interface_, const gi::cstring_v method) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (const char* name, const char* path, const char* interface_, const char* method);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_method_call;
  auto method_to_c = gi::unwrap (method, gi::transfer_none);
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (path_to_c), (const char*) (interface__to_c), (const char*) (method_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusMessage base::DBusMessageBase::new_method_call (const gi::cstring_v path, const gi::cstring_v method) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (const char* name, const char* path, const char* interface_, const char* method);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_method_call;
  auto method_to_c = gi::unwrap (method, gi::transfer_none);
  auto interface__to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (path_to_c), (const char*) (interface__to_c), (const char*) (method_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusMessage* /*full*/ g_dbus_message_new_signal (const gchar* path /*none*/, const gchar* interface_ /*none*/, const gchar* signal /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_signal (const char* path /*none*/, const char* interface_ /*none*/, const char* signal /*none*/);
Gio::DBusMessage base::DBusMessageBase::new_signal (const gi::cstring_v path, const gi::cstring_v interface_, const gi::cstring_v signal) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (const char* path, const char* interface_, const char* signal);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_signal;
  auto signal_to_c = gi::unwrap (signal, gi::transfer_none);
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (const char*) (interface__to_c), (const char*) (signal_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gssize g_dbus_message_bytes_needed (guchar* blob /*none*/, gsize blob_len, GError ** error);
// gssize g_dbus_message_bytes_needed (guint8* blob /*none*/, gsize blob_len, GError ** error);
gssize base::DBusMessageBase::bytes_needed (const guint8 * blob, gsize blob_len)
{
  typedef gssize (*call_wrap_t) (guint8* blob, gsize blob_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_bytes_needed;
  auto blob_to_c = blob;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_len), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::DBusMessageBase::bytes_needed (const guint8 * blob, gsize blob_len, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (guint8* blob, gsize blob_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_bytes_needed;
  auto blob_to_c = blob;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_len), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GDBusMessage* /*full*/ g_dbus_message_copy (GDBusMessage* message /*none*/, GError ** error);
// ::GDBusMessage* /*full*/ g_dbus_message_copy (::GDBusMessage* message /*none*/, GError ** error);
Gio::DBusMessage base::DBusMessageBase::copy ()
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_copy;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::DBusMessage base::DBusMessageBase::copy (GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_copy;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_dbus_message_get_arg0 (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_arg0 (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_arg0 () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_arg0;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_dbus_message_get_arg0_path (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_arg0_path (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_arg0_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_arg0_path;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none,nullable*/ g_dbus_message_get_body (GDBusMessage* message /*none*/);
// ::GVariant* /*none,nullable*/ g_dbus_message_get_body (::GDBusMessage* message /*none*/);
GLib::Variant base::DBusMessageBase::get_body () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_body;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusMessageByteOrder g_dbus_message_get_byte_order (GDBusMessage* message /*none*/);
// ::GDBusMessageByteOrder g_dbus_message_get_byte_order (::GDBusMessage* message /*none*/);
Gio::DBusMessageByteOrder base::DBusMessageBase::get_byte_order () noexcept
{
  typedef ::GDBusMessageByteOrder (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_byte_order;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* /*none,nullable*/ g_dbus_message_get_destination (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_destination (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_destination () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_destination;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_dbus_message_get_error_name (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_error_name (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_error_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_error_name;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusMessageFlags g_dbus_message_get_flags (GDBusMessage* message /*none*/);
// ::GDBusMessageFlags g_dbus_message_get_flags (::GDBusMessage* message /*none*/);
Gio::DBusMessageFlags base::DBusMessageBase::get_flags () noexcept
{
  typedef ::GDBusMessageFlags (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GVariant* /*none,nullable*/ g_dbus_message_get_header (GDBusMessage* message /*none*/, GDBusMessageHeaderField header_field);
// ::GVariant* /*none,nullable*/ g_dbus_message_get_header (::GDBusMessage* message /*none*/, ::GDBusMessageHeaderField header_field);
GLib::Variant base::DBusMessageBase::get_header (Gio::DBusMessageHeaderField header_field) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageHeaderField header_field);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_header;
  auto header_field_to_c = gi::unwrap (header_field);
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageHeaderField) (header_field_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guchar* /*none*/ g_dbus_message_get_header_fields (GDBusMessage* message /*none*/);
// guint8* /*none*/ g_dbus_message_get_header_fields (::GDBusMessage* message /*none*/);
gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t> base::DBusMessageBase::get_header_fields () noexcept
{
  typedef guint8* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_header_fields;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, guint8, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_dbus_message_get_interface (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_interface (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_interface () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_interface;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_dbus_message_get_locked (GDBusMessage* message /*none*/);
// gboolean g_dbus_message_get_locked (::GDBusMessage* message /*none*/);
bool base::DBusMessageBase::get_locked () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_locked;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_dbus_message_get_member (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_member (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_member () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_member;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusMessageType g_dbus_message_get_message_type (GDBusMessage* message /*none*/);
// ::GDBusMessageType g_dbus_message_get_message_type (::GDBusMessage* message /*none*/);
Gio::DBusMessageType base::DBusMessageBase::get_message_type () noexcept
{
  typedef ::GDBusMessageType (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_message_type;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint32 g_dbus_message_get_num_unix_fds (GDBusMessage* message /*none*/);
// guint32 g_dbus_message_get_num_unix_fds (::GDBusMessage* message /*none*/);
guint32 base::DBusMessageBase::get_num_unix_fds () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_num_unix_fds;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_dbus_message_get_path (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_path (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_path;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint32 g_dbus_message_get_reply_serial (GDBusMessage* message /*none*/);
// guint32 g_dbus_message_get_reply_serial (::GDBusMessage* message /*none*/);
guint32 base::DBusMessageBase::get_reply_serial () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_reply_serial;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_dbus_message_get_sender (GDBusMessage* message /*none*/);
// const char* /*none,nullable*/ g_dbus_message_get_sender (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_sender () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_sender;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint32 g_dbus_message_get_serial (GDBusMessage* message /*none*/);
// guint32 g_dbus_message_get_serial (::GDBusMessage* message /*none*/);
guint32 base::DBusMessageBase::get_serial () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_serial;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ g_dbus_message_get_signature (GDBusMessage* message /*none*/);
// const char* /*none*/ g_dbus_message_get_signature (::GDBusMessage* message /*none*/);
gi::cstring_v base::DBusMessageBase::get_signature () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_signature;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GUnixFDList* /*none,nullable*/ g_dbus_message_get_unix_fd_list (GDBusMessage* message /*none*/);
// ::GUnixFDList* /*none,nullable*/ g_dbus_message_get_unix_fd_list (::GDBusMessage* message /*none*/);
Gio::UnixFDList base::DBusMessageBase::get_unix_fd_list () noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_get_unix_fd_list;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_dbus_message_lock (GDBusMessage* message /*none*/);
// void g_dbus_message_lock (::GDBusMessage* message /*none*/);
void base::DBusMessageBase::lock () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_lock;
  call_wrap_v ((::GDBusMessage*) (gobj_()));
}

// GDBusMessage* /*full*/ g_dbus_message_new_method_error (GDBusMessage* method_call_message /*none*/, const gchar* error_name /*none*/, const gchar* error_message_format /*none*/,  ..._ /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_error (::GDBusMessage* method_call_message /*none*/, const char* error_name /*none*/, const char* error_message_format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GDBusMessage* /*full*/ g_dbus_message_new_method_error_literal (GDBusMessage* method_call_message /*none*/, const gchar* error_name /*none*/, const gchar* error_message /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_error_literal (::GDBusMessage* method_call_message /*none*/, const char* error_name /*none*/, const char* error_message /*none*/);
Gio::DBusMessage base::DBusMessageBase::new_method_error_literal (const gi::cstring_v error_name, const gi::cstring_v error_message) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* method_call_message, const char* error_name, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_new_method_error_literal;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none);
  auto error_name_to_c = gi::unwrap (error_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (error_name_to_c), (const char*) (error_message_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusMessage* /*full*/ g_dbus_message_new_method_error_valist (GDBusMessage* method_call_message /*none*/, const gchar* error_name /*none*/, const gchar* error_message_format /*none*/, va_list var_args /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_error_valist (::GDBusMessage* method_call_message /*none*/, const char* error_name /*none*/, const char* error_message_format /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// GDBusMessage* /*full*/ g_dbus_message_new_method_reply (GDBusMessage* method_call_message /*none*/);
// ::GDBusMessage* /*full*/ g_dbus_message_new_method_reply (::GDBusMessage* method_call_message /*none*/);
Gio::DBusMessage base::DBusMessageBase::new_method_reply () noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* method_call_message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_new_method_reply;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_dbus_message_print (GDBusMessage* message /*none*/, guint indent);
// char* /*full*/ g_dbus_message_print (::GDBusMessage* message /*none*/, guint indent);
gi::cstring base::DBusMessageBase::print (guint indent) noexcept
{
  typedef char* (*call_wrap_t) (::GDBusMessage* message, guint indent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_print;
  auto indent_to_c = indent;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), (guint) (indent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_dbus_message_set_body (GDBusMessage* message /*none*/, GVariant* body /*none*/);
// void g_dbus_message_set_body (::GDBusMessage* message /*none*/, ::GVariant* body /*none*/);
void base::DBusMessageBase::set_body (GLib::Variant body) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GVariant* body);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_body;
  auto body_to_c = gi::unwrap (body, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GVariant*) (body_to_c));
}

// void g_dbus_message_set_byte_order (GDBusMessage* message /*none*/, GDBusMessageByteOrder byte_order);
// void g_dbus_message_set_byte_order (::GDBusMessage* message /*none*/, ::GDBusMessageByteOrder byte_order);
void base::DBusMessageBase::set_byte_order (Gio::DBusMessageByteOrder byte_order) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageByteOrder byte_order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_byte_order;
  auto byte_order_to_c = gi::unwrap (byte_order);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageByteOrder) (byte_order_to_c));
}

// void g_dbus_message_set_destination (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_destination (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
void base::DBusMessageBase::set_destination (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_destination;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_destination () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_destination;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_error_name (GDBusMessage* message /*none,nullable*/, const gchar* value /*none*/);
// void g_dbus_message_set_error_name (::GDBusMessage* message /*none,nullable*/, const char* value /*none*/);
void base::DBusMessageBase::set_error_name (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_error_name;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_flags (GDBusMessage* message /*none*/, GDBusMessageFlags flags);
// void g_dbus_message_set_flags (::GDBusMessage* message /*none*/, ::GDBusMessageFlags flags);
void base::DBusMessageBase::set_flags (Gio::DBusMessageFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageFlags) (flags_to_c));
}

// void g_dbus_message_set_header (GDBusMessage* message /*none*/, GDBusMessageHeaderField header_field, GVariant* value /*none,nullable*/);
// void g_dbus_message_set_header (::GDBusMessage* message /*none*/, ::GDBusMessageHeaderField header_field, ::GVariant* value /*none,nullable*/);
void base::DBusMessageBase::set_header (Gio::DBusMessageHeaderField header_field, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageHeaderField header_field, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_header;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto header_field_to_c = gi::unwrap (header_field);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageHeaderField) (header_field_to_c), (::GVariant*) (value_to_c));
}
void base::DBusMessageBase::set_header (Gio::DBusMessageHeaderField header_field) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageHeaderField header_field, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_header;
  auto value_to_c = nullptr;
  auto header_field_to_c = gi::unwrap (header_field);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageHeaderField) (header_field_to_c), (::GVariant*) (value_to_c));
}

// void g_dbus_message_set_interface (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_interface (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
void base::DBusMessageBase::set_interface (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_interface;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_interface () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_interface;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_member (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_member (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
void base::DBusMessageBase::set_member (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_member;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_member () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_member;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_message_type (GDBusMessage* message /*none*/, GDBusMessageType type);
// void g_dbus_message_set_message_type (::GDBusMessage* message /*none*/, ::GDBusMessageType type);
void base::DBusMessageBase::set_message_type (Gio::DBusMessageType type) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_message_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageType) (type_to_c));
}

// void g_dbus_message_set_num_unix_fds (GDBusMessage* message /*none*/, guint32 value);
// void g_dbus_message_set_num_unix_fds (::GDBusMessage* message /*none*/, guint32 value);
void base::DBusMessageBase::set_num_unix_fds (guint32 value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_num_unix_fds;
  auto value_to_c = value;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (guint32) (value_to_c));
}

// void g_dbus_message_set_path (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_path (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
void base::DBusMessageBase::set_path (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_path;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_path () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_path;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_reply_serial (GDBusMessage* message /*none*/, guint32 value);
// void g_dbus_message_set_reply_serial (::GDBusMessage* message /*none*/, guint32 value);
void base::DBusMessageBase::set_reply_serial (guint32 value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_reply_serial;
  auto value_to_c = value;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (guint32) (value_to_c));
}

// void g_dbus_message_set_sender (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_sender (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
void base::DBusMessageBase::set_sender (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_sender;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_sender () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_sender;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_serial (GDBusMessage* message /*none*/, guint32 serial);
// void g_dbus_message_set_serial (::GDBusMessage* message /*none*/, guint32 serial);
void base::DBusMessageBase::set_serial (guint32 serial) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, guint32 serial);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_serial;
  auto serial_to_c = serial;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (guint32) (serial_to_c));
}

// void g_dbus_message_set_signature (GDBusMessage* message /*none*/, const gchar* value /*none,nullable*/);
// void g_dbus_message_set_signature (::GDBusMessage* message /*none*/, const char* value /*none,nullable*/);
void base::DBusMessageBase::set_signature (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_signature;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_signature () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_signature;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_unix_fd_list (GDBusMessage* message /*none*/, GUnixFDList* fd_list /*none,nullable*/);
// void g_dbus_message_set_unix_fd_list (::GDBusMessage* message /*none*/, ::GUnixFDList* fd_list /*none,nullable*/);
void base::DBusMessageBase::set_unix_fd_list (Gio::UnixFDList fd_list) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_unix_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GUnixFDList*) (fd_list_to_c));
}
void base::DBusMessageBase::set_unix_fd_list () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_set_unix_fd_list;
  auto fd_list_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GUnixFDList*) (fd_list_to_c));
}

// guchar* /*full*/ g_dbus_message_to_blob (GDBusMessage* message /*none*/, gsize* out_size, GDBusCapabilityFlags capabilities, GError ** error);
// guint8* /*full*/ g_dbus_message_to_blob (::GDBusMessage* message /*none*/, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base::DBusMessageBase::to_blob (Gio::DBusCapabilityFlags capabilities)
{
  typedef guint8* (*call_wrap_t) (::GDBusMessage* message, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_to_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  gsize out_size;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GDBusMessage*) (gobj_()), (gsize*) (&out_size), (::GDBusCapabilityFlags) (capabilities_to_c), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, out_size, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base::DBusMessageBase::to_blob (Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDBusMessage* message, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_to_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  gsize out_size;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GDBusMessage*) (gobj_()), (gsize*) (&out_size), (::GDBusCapabilityFlags) (capabilities_to_c), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, out_size, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_dbus_message_to_gerror (GDBusMessage* message /*none*/, GError ** error);
// gboolean g_dbus_message_to_gerror (::GDBusMessage* message /*none*/, GError ** error);
bool base::DBusMessageBase::to_gerror ()
{
  typedef gboolean (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_to_gerror;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusMessageBase::to_gerror (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_message_to_gerror;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra_def_impl.hpp>)
#include <gio/dbusmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra_impl.hpp>)
#include <gio/dbusmessage_extra_impl.hpp>
#endif
#endif

#endif
