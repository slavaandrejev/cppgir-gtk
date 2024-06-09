// AUTO-GENERATED

#ifndef _GI_GIO_SOCKET_HPP_
#define _GI_GIO_SOCKET_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class Credentials;
class DatagramBased;
class InetAddress;
class Initable;
class InputMessage;
class InputMessage_Ref;
class InputVector;
class InputVector_Ref;
class OutputMessage;
class OutputMessage_Ref;
class OutputVector;
class OutputVector_Ref;
class SocketAddress;
class SocketConnection;
class SocketControlMessage;

class Socket;

namespace base {


#define GI_GIO_SOCKET_BASE base::SocketBase
class SocketBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocket BaseObjectType;

SocketBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_get_type(); } 

GI_INLINE_DECL Gio::DatagramBased interface_ (gi::interface_tag<Gio::DatagramBased>);

GI_INLINE_DECL operator Gio::DatagramBased ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GSocket* /*full*/ g_socket_new (GSocketFamily family, GSocketType type, GSocketProtocol protocol, GError ** error);
// ::GSocket* /*full*/ g_socket_new (::GSocketFamily family, ::GSocketType type, ::GSocketProtocol protocol, GError ** error);
static GI_INLINE_DECL Gio::Socket new_ (Gio::SocketFamily family, Gio::SocketType type, Gio::SocketProtocol protocol);
static GI_INLINE_DECL Gio::Socket new_ (Gio::SocketFamily family, Gio::SocketType type, Gio::SocketProtocol protocol, GLib::Error * _error) noexcept;

// GSocket* /*full*/ g_socket_new_from_fd (gint fd, GError ** error);
// ::GSocket* /*full*/ g_socket_new_from_fd (gint fd, GError ** error);
static GI_INLINE_DECL Gio::Socket new_from_fd (gint fd);
static GI_INLINE_DECL Gio::Socket new_from_fd (gint fd, GLib::Error * _error) noexcept;

// GSocket* /*full*/ g_socket_accept (GSocket* socket /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocket* /*full*/ g_socket_accept (::GSocket* socket /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::Socket accept (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::Socket accept ();
GI_INLINE_DECL Gio::Socket accept (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::Socket accept (GLib::Error * _error) noexcept;

// gboolean g_socket_bind (GSocket* socket /*none*/, GSocketAddress* address /*none*/, gboolean allow_reuse, GError ** error);
// gboolean g_socket_bind (::GSocket* socket /*none*/, ::GSocketAddress* address /*none*/, gboolean allow_reuse, GError ** error);
GI_INLINE_DECL bool bind (Gio::SocketAddress address, gboolean allow_reuse);
GI_INLINE_DECL bool bind (Gio::SocketAddress address, gboolean allow_reuse, GLib::Error * _error) noexcept;

// gboolean g_socket_check_connect_result (GSocket* socket /*none*/, GError ** error);
// gboolean g_socket_check_connect_result (::GSocket* socket /*none*/, GError ** error);
GI_INLINE_DECL bool check_connect_result ();
GI_INLINE_DECL bool check_connect_result (GLib::Error * _error) noexcept;

// gboolean g_socket_close (GSocket* socket /*none*/, GError ** error);
// gboolean g_socket_close (::GSocket* socket /*none*/, GError ** error);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// GIOCondition g_socket_condition_check (GSocket* socket /*none*/, GIOCondition condition);
// ::GIOCondition g_socket_condition_check (::GSocket* socket /*none*/, ::GIOCondition condition);
GI_INLINE_DECL GLib::IOCondition condition_check (GLib::IOCondition condition) noexcept;

// gboolean g_socket_condition_timed_wait (GSocket* socket /*none*/, GIOCondition condition, gint64 timeout_us, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_socket_condition_timed_wait (::GSocket* socket /*none*/, ::GIOCondition condition, gint64 timeout_us, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us, Gio::Cancellable cancellable);
GI_INLINE_DECL bool condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us);
GI_INLINE_DECL bool condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us, GLib::Error * _error) noexcept;

// gboolean g_socket_condition_wait (GSocket* socket /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_socket_condition_wait (::GSocket* socket /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, Gio::Cancellable cancellable);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, GLib::Error * _error) noexcept;

// gboolean g_socket_connect (GSocket* socket /*none*/, GSocketAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_socket_connect (::GSocket* socket /*none*/, ::GSocketAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool connect (Gio::SocketAddress address, Gio::Cancellable cancellable);
GI_INLINE_DECL bool connect (Gio::SocketAddress address);
GI_INLINE_DECL bool connect (Gio::SocketAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool connect (Gio::SocketAddress address, GLib::Error * _error) noexcept;

// GSocketConnection* /*full*/ g_socket_connection_factory_create_connection (GSocket* socket /*none*/);
// ::GSocketConnection* /*full*/ g_socket_connection_factory_create_connection (::GSocket* socket /*none*/);
GI_INLINE_DECL Gio::SocketConnection connection_factory_create_connection () noexcept;

// GSource* /*full*/ g_socket_create_source (GSocket* socket /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_socket_create_source (::GSocket* socket /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL GLib::Source create_source (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source (GLib::IOCondition condition) noexcept;

// gssize g_socket_get_available_bytes (GSocket* socket /*none*/);
// gssize g_socket_get_available_bytes (::GSocket* socket /*none*/);
GI_INLINE_DECL gssize get_available_bytes () noexcept;

// gboolean g_socket_get_blocking (GSocket* socket /*none*/);
// gboolean g_socket_get_blocking (::GSocket* socket /*none*/);
GI_INLINE_DECL bool get_blocking () noexcept;

// gboolean g_socket_get_broadcast (GSocket* socket /*none*/);
// gboolean g_socket_get_broadcast (::GSocket* socket /*none*/);
GI_INLINE_DECL bool get_broadcast () noexcept;

// GCredentials* /*full*/ g_socket_get_credentials (GSocket* socket /*none*/, GError ** error);
// ::GCredentials* /*full*/ g_socket_get_credentials (::GSocket* socket /*none*/, GError ** error);
GI_INLINE_DECL Gio::Credentials get_credentials ();
GI_INLINE_DECL Gio::Credentials get_credentials (GLib::Error * _error) noexcept;

// GSocketFamily g_socket_get_family (GSocket* socket /*none*/);
// ::GSocketFamily g_socket_get_family (::GSocket* socket /*none*/);
GI_INLINE_DECL Gio::SocketFamily get_family () noexcept;

// int g_socket_get_fd (GSocket* socket /*none*/);
// gint g_socket_get_fd (::GSocket* socket /*none*/);
GI_INLINE_DECL gint get_fd () noexcept;

// gboolean g_socket_get_keepalive (GSocket* socket /*none*/);
// gboolean g_socket_get_keepalive (::GSocket* socket /*none*/);
GI_INLINE_DECL bool get_keepalive () noexcept;

// gint g_socket_get_listen_backlog (GSocket* socket /*none*/);
// gint g_socket_get_listen_backlog (::GSocket* socket /*none*/);
GI_INLINE_DECL gint get_listen_backlog () noexcept;

// GSocketAddress* /*full*/ g_socket_get_local_address (GSocket* socket /*none*/, GError ** error);
// ::GSocketAddress* /*full*/ g_socket_get_local_address (::GSocket* socket /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketAddress get_local_address ();
GI_INLINE_DECL Gio::SocketAddress get_local_address (GLib::Error * _error) noexcept;

// gboolean g_socket_get_multicast_loopback (GSocket* socket /*none*/);
// gboolean g_socket_get_multicast_loopback (::GSocket* socket /*none*/);
GI_INLINE_DECL bool get_multicast_loopback () noexcept;

// guint g_socket_get_multicast_ttl (GSocket* socket /*none*/);
// guint g_socket_get_multicast_ttl (::GSocket* socket /*none*/);
GI_INLINE_DECL guint get_multicast_ttl () noexcept;

// gboolean g_socket_get_option (GSocket* socket /*none*/, gint level, gint optname, gint* value, GError ** error);
// gboolean g_socket_get_option (::GSocket* socket /*none*/, gint level, gint optname, gint* value, GError ** error);
GI_INLINE_DECL bool get_option (gint level, gint optname, gint & value);
GI_INLINE_DECL bool get_option (gint level, gint optname, gint & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> get_option (gint level, gint optname);
GI_INLINE_DECL std::tuple<bool, gint> get_option (gint level, gint optname, GLib::Error * _error) noexcept;

// GSocketProtocol g_socket_get_protocol (GSocket* socket /*none*/);
// ::GSocketProtocol g_socket_get_protocol (::GSocket* socket /*none*/);
GI_INLINE_DECL Gio::SocketProtocol get_protocol () noexcept;

// GSocketAddress* /*full*/ g_socket_get_remote_address (GSocket* socket /*none*/, GError ** error);
// ::GSocketAddress* /*full*/ g_socket_get_remote_address (::GSocket* socket /*none*/, GError ** error);
GI_INLINE_DECL Gio::SocketAddress get_remote_address ();
GI_INLINE_DECL Gio::SocketAddress get_remote_address (GLib::Error * _error) noexcept;

// GSocketType g_socket_get_socket_type (GSocket* socket /*none*/);
// ::GSocketType g_socket_get_socket_type (::GSocket* socket /*none*/);
GI_INLINE_DECL Gio::SocketType get_socket_type () noexcept;

// guint g_socket_get_timeout (GSocket* socket /*none*/);
// guint g_socket_get_timeout (::GSocket* socket /*none*/);
GI_INLINE_DECL guint get_timeout () noexcept;

// guint g_socket_get_ttl (GSocket* socket /*none*/);
// guint g_socket_get_ttl (::GSocket* socket /*none*/);
GI_INLINE_DECL guint get_ttl () noexcept;

// gboolean g_socket_is_closed (GSocket* socket /*none*/);
// gboolean g_socket_is_closed (::GSocket* socket /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_socket_is_connected (GSocket* socket /*none*/);
// gboolean g_socket_is_connected (::GSocket* socket /*none*/);
GI_INLINE_DECL bool is_connected () noexcept;

// gboolean g_socket_join_multicast_group (GSocket* socket /*none*/, GInetAddress* group /*none*/, gboolean source_specific, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_join_multicast_group (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, gboolean source_specific, const char* iface /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool join_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface);
GI_INLINE_DECL bool join_multicast_group (Gio::InetAddress group, gboolean source_specific);
GI_INLINE_DECL bool join_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool join_multicast_group (Gio::InetAddress group, gboolean source_specific, GLib::Error * _error) noexcept;

// gboolean g_socket_join_multicast_group_ssm (GSocket* socket /*none*/, GInetAddress* group /*none*/, GInetAddress* source_specific /*none,nullable*/, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_join_multicast_group_ssm (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, ::GInetAddress* source_specific /*none,nullable*/, const char* iface /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool join_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface);
GI_INLINE_DECL bool join_multicast_group_ssm (Gio::InetAddress group);
GI_INLINE_DECL bool join_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool join_multicast_group_ssm (Gio::InetAddress group, GLib::Error * _error) noexcept;

// gboolean g_socket_leave_multicast_group (GSocket* socket /*none*/, GInetAddress* group /*none*/, gboolean source_specific, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_leave_multicast_group (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, gboolean source_specific, const char* iface /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool leave_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface);
GI_INLINE_DECL bool leave_multicast_group (Gio::InetAddress group, gboolean source_specific);
GI_INLINE_DECL bool leave_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool leave_multicast_group (Gio::InetAddress group, gboolean source_specific, GLib::Error * _error) noexcept;

// gboolean g_socket_leave_multicast_group_ssm (GSocket* socket /*none*/, GInetAddress* group /*none*/, GInetAddress* source_specific /*none,nullable*/, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_leave_multicast_group_ssm (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, ::GInetAddress* source_specific /*none,nullable*/, const char* iface /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool leave_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface);
GI_INLINE_DECL bool leave_multicast_group_ssm (Gio::InetAddress group);
GI_INLINE_DECL bool leave_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool leave_multicast_group_ssm (Gio::InetAddress group, GLib::Error * _error) noexcept;

// gboolean g_socket_listen (GSocket* socket /*none*/, GError ** error);
// gboolean g_socket_listen (::GSocket* socket /*none*/, GError ** error);
GI_INLINE_DECL bool listen ();
GI_INLINE_DECL bool listen (GLib::Error * _error) noexcept;

// gssize g_socket_receive (GSocket* socket /*none*/, gchar* buffer /*none,out,ca*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive (::GSocket* socket /*none*/, guint8* buffer /*none,out,ca*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize receive (guint8 * buffer, gsize size, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize receive (guint8 * buffer, gsize size);
GI_INLINE_DECL gssize receive (guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize receive (guint8 * buffer, gsize size, GLib::Error * _error) noexcept;

// GBytes* /*full*/ g_socket_receive_bytes (GSocket* socket /*none*/, gsize size, gint64 timeout_us, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_socket_receive_bytes (::GSocket* socket /*none*/, gsize size, gint64 timeout_us, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Bytes receive_bytes (gsize size, gint64 timeout_us, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Bytes receive_bytes (gsize size, gint64 timeout_us);
GI_INLINE_DECL GLib::Bytes receive_bytes (gsize size, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Bytes receive_bytes (gsize size, gint64 timeout_us, GLib::Error * _error) noexcept;

// GBytes* /*full*/ g_socket_receive_bytes_from (GSocket* socket /*none*/, GSocketAddress** address /*full,out,opt*/, gsize size, gint64 timeout_us, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_socket_receive_bytes_from (::GSocket* socket /*none*/, ::GSocketAddress** address /*full,out,opt*/, gsize size, gint64 timeout_us, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Bytes receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Bytes receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us);
GI_INLINE_DECL GLib::Bytes receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Bytes receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, Gio::SocketAddress> receive_bytes_from (gsize size, gint64 timeout_us, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Bytes, Gio::SocketAddress> receive_bytes_from (gsize size, gint64 timeout_us);
GI_INLINE_DECL std::tuple<GLib::Bytes, Gio::SocketAddress> receive_bytes_from (gsize size, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, Gio::SocketAddress> receive_bytes_from (gsize size, gint64 timeout_us, GLib::Error * _error) noexcept;

// gssize g_socket_receive_from (GSocket* socket /*none*/, GSocketAddress** address /*full,out,opt*/, gchar* buffer /*none,out,ca*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive_from (::GSocket* socket /*none*/, ::GSocketAddress** address /*full,out,opt*/, guint8* buffer /*none,out,ca*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size);
GI_INLINE_DECL gssize receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gssize, Gio::SocketAddress> receive_from (guint8 * buffer, gsize size, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<gssize, Gio::SocketAddress> receive_from (guint8 * buffer, gsize size);
GI_INLINE_DECL std::tuple<gssize, Gio::SocketAddress> receive_from (guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gssize, Gio::SocketAddress> receive_from (guint8 * buffer, gsize size, GLib::Error * _error) noexcept;

// gssize g_socket_receive_message (GSocket* socket /*none*/, GSocketAddress** address /*full,out,opt*/, GInputVector* vectors /*none*/, gint num_vectors, GSocketControlMessage*** messages /*full,out,opt,nullable*/, gint* num_messages, gint* flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive_message (::GSocket* socket /*none*/, ::GSocketAddress** address /*full,out,opt*/, ::GInputVector** vectors /*none*/, gint num_vectors, ::GSocketControlMessage*** messages /*full,out,opt,nullable*/, gint* num_messages, gint* flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// gint g_socket_receive_messages (GSocket* socket /*none*/, GInputMessage* messages /*none*/, guint num_messages, gint flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_socket_receive_messages (::GSocket* socket /*none*/, ::GInputMessage** messages /*none*/, guint num_messages, gint flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

// gssize g_socket_receive_with_blocking (GSocket* socket /*none*/, gchar* buffer /*none,out,ca*/, gsize size, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive_with_blocking (::GSocket* socket /*none*/, guint8* buffer /*none,out,ca*/, gsize size, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking);
GI_INLINE_DECL gssize receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking, GLib::Error * _error) noexcept;

// gssize g_socket_send (GSocket* socket /*none*/, const gchar* buffer /*none*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_send (::GSocket* socket /*none*/, const guint8* buffer /*none*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize send (const guint8 * buffer, gsize size, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize send (const guint8 * buffer, gsize size);
GI_INLINE_DECL gssize send (const guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize send (const guint8 * buffer, gsize size, GLib::Error * _error) noexcept;

// gssize g_socket_send_message (GSocket* socket /*none*/, GSocketAddress* address /*none,nullable*/, GOutputVector* vectors /*none*/, gint num_vectors, GSocketControlMessage** messages /*none,nullable*/, gint num_messages, gint flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_send_message (::GSocket* socket /*none*/, ::GSocketAddress* address /*none,nullable*/, ::GOutputVector** vectors /*none*/, gint num_vectors, ::GSocketControlMessage** messages /*none,nullable*/, gint num_messages, gint flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// GPollableReturn g_socket_send_message_with_timeout (GSocket* socket /*none*/, GSocketAddress* address /*none,nullable*/, const GOutputVector* vectors /*none*/, gint num_vectors, GSocketControlMessage** messages /*none,nullable*/, gint num_messages, gint flags, gint64 timeout_us, gsize* bytes_written, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GPollableReturn g_socket_send_message_with_timeout (::GSocket* socket /*none*/, ::GSocketAddress* address /*none,nullable*/, const ::GOutputVector** vectors /*none*/, gint num_vectors, ::GSocketControlMessage** messages /*none,nullable*/, gint num_messages, gint flags, gint64 timeout_us, gsize* bytes_written, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// gint g_socket_send_messages (GSocket* socket /*none*/, GOutputMessage* messages /*none*/, guint num_messages, gint flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_socket_send_messages (::GSocket* socket /*none*/, ::GOutputMessage** messages /*none*/, guint num_messages, gint flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

// gssize g_socket_send_to (GSocket* socket /*none*/, GSocketAddress* address /*none,nullable*/, const gchar* buffer /*none*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_send_to (::GSocket* socket /*none*/, ::GSocketAddress* address /*none,nullable*/, const guint8* buffer /*none*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize send_to (Gio::SocketAddress address, const guint8 * buffer, gsize size, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize send_to (const guint8 * buffer, gsize size);
GI_INLINE_DECL gssize send_to (Gio::SocketAddress address, const guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize send_to (const guint8 * buffer, gsize size, GLib::Error * _error) noexcept;

// gssize g_socket_send_with_blocking (GSocket* socket /*none*/, const gchar* buffer /*none*/, gsize size, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_send_with_blocking (::GSocket* socket /*none*/, const guint8* buffer /*none*/, gsize size, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gssize send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking);
GI_INLINE_DECL gssize send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking, GLib::Error * _error) noexcept;

// void g_socket_set_blocking (GSocket* socket /*none*/, gboolean blocking);
// void g_socket_set_blocking (::GSocket* socket /*none*/, gboolean blocking);
GI_INLINE_DECL void set_blocking (gboolean blocking) noexcept;

// void g_socket_set_broadcast (GSocket* socket /*none*/, gboolean broadcast);
// void g_socket_set_broadcast (::GSocket* socket /*none*/, gboolean broadcast);
GI_INLINE_DECL void set_broadcast (gboolean broadcast) noexcept;

// void g_socket_set_keepalive (GSocket* socket /*none*/, gboolean keepalive);
// void g_socket_set_keepalive (::GSocket* socket /*none*/, gboolean keepalive);
GI_INLINE_DECL void set_keepalive (gboolean keepalive) noexcept;

// void g_socket_set_listen_backlog (GSocket* socket /*none*/, gint backlog);
// void g_socket_set_listen_backlog (::GSocket* socket /*none*/, gint backlog);
GI_INLINE_DECL void set_listen_backlog (gint backlog) noexcept;

// void g_socket_set_multicast_loopback (GSocket* socket /*none*/, gboolean loopback);
// void g_socket_set_multicast_loopback (::GSocket* socket /*none*/, gboolean loopback);
GI_INLINE_DECL void set_multicast_loopback (gboolean loopback) noexcept;

// void g_socket_set_multicast_ttl (GSocket* socket /*none*/, guint ttl);
// void g_socket_set_multicast_ttl (::GSocket* socket /*none*/, guint ttl);
GI_INLINE_DECL void set_multicast_ttl (guint ttl) noexcept;

// gboolean g_socket_set_option (GSocket* socket /*none*/, gint level, gint optname, gint value, GError ** error);
// gboolean g_socket_set_option (::GSocket* socket /*none*/, gint level, gint optname, gint value, GError ** error);
GI_INLINE_DECL bool set_option (gint level, gint optname, gint value);
GI_INLINE_DECL bool set_option (gint level, gint optname, gint value, GLib::Error * _error) noexcept;

// void g_socket_set_timeout (GSocket* socket /*none*/, guint timeout);
// void g_socket_set_timeout (::GSocket* socket /*none*/, guint timeout);
GI_INLINE_DECL void set_timeout (guint timeout) noexcept;

// void g_socket_set_ttl (GSocket* socket /*none*/, guint ttl);
// void g_socket_set_ttl (::GSocket* socket /*none*/, guint ttl);
GI_INLINE_DECL void set_ttl (guint ttl) noexcept;

// gboolean g_socket_shutdown (GSocket* socket /*none*/, gboolean shutdown_read, gboolean shutdown_write, GError ** error);
// gboolean g_socket_shutdown (::GSocket* socket /*none*/, gboolean shutdown_read, gboolean shutdown_write, GError ** error);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, GLib::Error * _error) noexcept;

// gboolean g_socket_speaks_ipv4 (GSocket* socket /*none*/);
// gboolean g_socket_speaks_ipv4 (::GSocket* socket /*none*/);
GI_INLINE_DECL bool speaks_ipv4 () noexcept;

gi::property_proxy<bool, base::SocketBase> property_blocking()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "blocking"); }
const gi::property_proxy<bool, base::SocketBase> property_blocking() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "blocking"); }

gi::property_proxy<bool, base::SocketBase> property_broadcast()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "broadcast"); }
const gi::property_proxy<bool, base::SocketBase> property_broadcast() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "broadcast"); }

gi::property_proxy<Gio::SocketFamily, base::SocketBase> property_family()
{ return gi::property_proxy<Gio::SocketFamily, base::SocketBase> (*this, "family"); }
const gi::property_proxy<Gio::SocketFamily, base::SocketBase> property_family() const
{ return gi::property_proxy<Gio::SocketFamily, base::SocketBase> (*this, "family"); }

gi::property_proxy<gint, base::SocketBase> property_fd()
{ return gi::property_proxy<gint, base::SocketBase> (*this, "fd"); }
const gi::property_proxy<gint, base::SocketBase> property_fd() const
{ return gi::property_proxy<gint, base::SocketBase> (*this, "fd"); }

gi::property_proxy<bool, base::SocketBase> property_keepalive()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "keepalive"); }
const gi::property_proxy<bool, base::SocketBase> property_keepalive() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "keepalive"); }

gi::property_proxy<gint, base::SocketBase> property_listen_backlog()
{ return gi::property_proxy<gint, base::SocketBase> (*this, "listen-backlog"); }
const gi::property_proxy<gint, base::SocketBase> property_listen_backlog() const
{ return gi::property_proxy<gint, base::SocketBase> (*this, "listen-backlog"); }

gi::property_proxy<Gio::SocketAddress, base::SocketBase> property_local_address()
{ return gi::property_proxy<Gio::SocketAddress, base::SocketBase> (*this, "local-address"); }
const gi::property_proxy<Gio::SocketAddress, base::SocketBase> property_local_address() const
{ return gi::property_proxy<Gio::SocketAddress, base::SocketBase> (*this, "local-address"); }

gi::property_proxy<bool, base::SocketBase> property_multicast_loopback()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "multicast-loopback"); }
const gi::property_proxy<bool, base::SocketBase> property_multicast_loopback() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "multicast-loopback"); }

gi::property_proxy<guint, base::SocketBase> property_multicast_ttl()
{ return gi::property_proxy<guint, base::SocketBase> (*this, "multicast-ttl"); }
const gi::property_proxy<guint, base::SocketBase> property_multicast_ttl() const
{ return gi::property_proxy<guint, base::SocketBase> (*this, "multicast-ttl"); }

gi::property_proxy<Gio::SocketProtocol, base::SocketBase> property_protocol()
{ return gi::property_proxy<Gio::SocketProtocol, base::SocketBase> (*this, "protocol"); }
const gi::property_proxy<Gio::SocketProtocol, base::SocketBase> property_protocol() const
{ return gi::property_proxy<Gio::SocketProtocol, base::SocketBase> (*this, "protocol"); }

gi::property_proxy<Gio::SocketAddress, base::SocketBase> property_remote_address()
{ return gi::property_proxy<Gio::SocketAddress, base::SocketBase> (*this, "remote-address"); }
const gi::property_proxy<Gio::SocketAddress, base::SocketBase> property_remote_address() const
{ return gi::property_proxy<Gio::SocketAddress, base::SocketBase> (*this, "remote-address"); }

gi::property_proxy<guint, base::SocketBase> property_timeout()
{ return gi::property_proxy<guint, base::SocketBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::SocketBase> property_timeout() const
{ return gi::property_proxy<guint, base::SocketBase> (*this, "timeout"); }

gi::property_proxy<guint, base::SocketBase> property_ttl()
{ return gi::property_proxy<guint, base::SocketBase> (*this, "ttl"); }
const gi::property_proxy<guint, base::SocketBase> property_ttl() const
{ return gi::property_proxy<guint, base::SocketBase> (*this, "ttl"); }

gi::property_proxy<Gio::SocketType, base::SocketBase> property_type()
{ return gi::property_proxy<Gio::SocketType, base::SocketBase> (*this, "type"); }
const gi::property_proxy<Gio::SocketType, base::SocketBase> property_type() const
{ return gi::property_proxy<Gio::SocketType, base::SocketBase> (*this, "type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socket_extra_def.hpp>)
#include <gio/socket_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socket_extra.hpp>)
#include <gio/socket_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Socket : public GI_GIO_SOCKET_BASE
{ typedef GI_GIO_SOCKET_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocket>
{ typedef Gio::Socket type; }; 

} // namespace repository

} // namespace gi

#include "datagrambased.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketClassDef
{
typedef SocketClassDef self;
public:
typedef Gio::Socket instance_type;
typedef ::GSocketClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SocketClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SocketClass: public detail::ClassTemplate<Gio::impl::internal::SocketClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DatagramBasedInterfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
friend class internal::SocketClassDef;
typedef SocketClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DatagramBasedInterfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DatagramBasedInterfaceClassImpl GDatagramBasedInterface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;



};


struct SocketClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SocketImpl = detail::ObjectImpl<Socket, internal::SocketClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
