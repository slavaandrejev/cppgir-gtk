// AUTO-GENERATED

#ifndef _GI_GIO_SOCKET_IMPL_HPP_
#define _GI_GIO_SOCKET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DatagramBased SocketBase::interface_ (gi::interface_tag<Gio::DatagramBased>)
{ return gi::wrap ((Gio::DatagramBased::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SocketBase::operator Gio::DatagramBased ()
{ return interface_ (gi::interface_tag<Gio::DatagramBased>()); }

Gio::Initable SocketBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SocketBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GSocket* /*full*/ g_socket_new (GSocketFamily family, GSocketType type, GSocketProtocol protocol, GError ** error);
// ::GSocket* /*full*/ g_socket_new (::GSocketFamily family, ::GSocketType type, ::GSocketProtocol protocol, GError ** error);
Gio::Socket base::SocketBase::new_ (Gio::SocketFamily family, Gio::SocketType type, Gio::SocketProtocol protocol)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketFamily family, ::GSocketType type, ::GSocketProtocol protocol, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_new;
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto family_to_c = gi::unwrap (family);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketFamily) (family_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Socket base::SocketBase::new_ (Gio::SocketFamily family, Gio::SocketType type, Gio::SocketProtocol protocol, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketFamily family, ::GSocketType type, ::GSocketProtocol protocol, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_new;
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto family_to_c = gi::unwrap (family);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketFamily) (family_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocket* /*full*/ g_socket_new_from_fd (gint fd, GError ** error);
// ::GSocket* /*full*/ g_socket_new_from_fd (gint fd, GError ** error);
Gio::Socket base::SocketBase::new_from_fd (gint fd)
{
  typedef ::GSocket* (*call_wrap_t) (gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_new_from_fd;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Socket base::SocketBase::new_from_fd (gint fd, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_new_from_fd;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocket* /*full*/ g_socket_accept (GSocket* socket /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GSocket* /*full*/ g_socket_accept (::GSocket* socket /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::Socket base::SocketBase::accept (Gio::Cancellable cancellable)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocket* socket, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_accept;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Socket base::SocketBase::accept ()
{
  typedef ::GSocket* (*call_wrap_t) (::GSocket* socket, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_accept;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Socket base::SocketBase::accept (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocket* socket, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_accept;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Socket base::SocketBase::accept (GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocket* socket, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_accept;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_socket_bind (GSocket* socket /*none*/, GSocketAddress* address /*none*/, gboolean allow_reuse, GError ** error);
// gboolean g_socket_bind (::GSocket* socket /*none*/, ::GSocketAddress* address /*none*/, gboolean allow_reuse, GError ** error);
bool base::SocketBase::bind (Gio::SocketAddress address, gboolean allow_reuse)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, gboolean allow_reuse, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_bind;
  auto allow_reuse_to_c = allow_reuse;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (gboolean) (allow_reuse_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::bind (Gio::SocketAddress address, gboolean allow_reuse, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, gboolean allow_reuse, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_bind;
  auto allow_reuse_to_c = allow_reuse;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (gboolean) (allow_reuse_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_check_connect_result (GSocket* socket /*none*/, GError ** error);
// gboolean g_socket_check_connect_result (::GSocket* socket /*none*/, GError ** error);
bool base::SocketBase::check_connect_result ()
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_check_connect_result;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::check_connect_result (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_check_connect_result;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_close (GSocket* socket /*none*/, GError ** error);
// gboolean g_socket_close (::GSocket* socket /*none*/, GError ** error);
bool base::SocketBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_close;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_close;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GIOCondition g_socket_condition_check (GSocket* socket /*none*/, GIOCondition condition);
// ::GIOCondition g_socket_condition_check (::GSocket* socket /*none*/, ::GIOCondition condition);
GLib::IOCondition base::SocketBase::condition_check (GLib::IOCondition condition) noexcept
{
  typedef ::GIOCondition (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_check;
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean g_socket_condition_timed_wait (GSocket* socket /*none*/, GIOCondition condition, gint64 timeout_us, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_socket_condition_timed_wait (::GSocket* socket /*none*/, ::GIOCondition condition, gint64 timeout_us, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SocketBase::condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_timed_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto condition_to_c = gi::unwrap (condition);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_timed_wait;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto condition_to_c = gi::unwrap (condition);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_timed_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto condition_to_c = gi::unwrap (condition);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::condition_timed_wait (GLib::IOCondition condition, gint64 timeout_us, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_timed_wait;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto condition_to_c = gi::unwrap (condition);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_condition_wait (GSocket* socket /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_socket_condition_wait (::GSocket* socket /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SocketBase::condition_wait (GLib::IOCondition condition, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto condition_to_c = gi::unwrap (condition);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::condition_wait (GLib::IOCondition condition)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_wait;
  auto cancellable_to_c = nullptr;
  auto condition_to_c = gi::unwrap (condition);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::condition_wait (GLib::IOCondition condition, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto condition_to_c = gi::unwrap (condition);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::condition_wait (GLib::IOCondition condition, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_condition_wait;
  auto cancellable_to_c = nullptr;
  auto condition_to_c = gi::unwrap (condition);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_connect (GSocket* socket /*none*/, GSocketAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_socket_connect (::GSocket* socket /*none*/, ::GSocketAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SocketBase::connect (Gio::SocketAddress address, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::connect (Gio::SocketAddress address)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connect;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::connect (Gio::SocketAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::connect (Gio::SocketAddress address, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connect;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GSocketConnection* /*full*/ g_socket_connection_factory_create_connection (GSocket* socket /*none*/);
// ::GSocketConnection* /*full*/ g_socket_connection_factory_create_connection (::GSocket* socket /*none*/);
Gio::SocketConnection base::SocketBase::connection_factory_create_connection () noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_connection_factory_create_connection;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSource* /*full*/ g_socket_create_source (GSocket* socket /*none*/, GIOCondition condition, GCancellable* cancellable /*none,nullable*/);
// ::GSource* /*full*/ g_socket_create_source (::GSocket* socket /*none*/, ::GIOCondition condition, ::GCancellable* cancellable /*none,nullable*/);
GLib::Source base::SocketBase::create_source (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Source base::SocketBase::create_source (GLib::IOCondition condition) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GSocket* socket, ::GIOCondition condition, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_create_source;
  auto cancellable_to_c = nullptr;
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gssize g_socket_get_available_bytes (GSocket* socket /*none*/);
// gssize g_socket_get_available_bytes (::GSocket* socket /*none*/);
gssize base::SocketBase::get_available_bytes () noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_available_bytes;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_get_blocking (GSocket* socket /*none*/);
// gboolean g_socket_get_blocking (::GSocket* socket /*none*/);
bool base::SocketBase::get_blocking () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_blocking;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_get_broadcast (GSocket* socket /*none*/);
// gboolean g_socket_get_broadcast (::GSocket* socket /*none*/);
bool base::SocketBase::get_broadcast () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_broadcast;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// GCredentials* /*full*/ g_socket_get_credentials (GSocket* socket /*none*/, GError ** error);
// ::GCredentials* /*full*/ g_socket_get_credentials (::GSocket* socket /*none*/, GError ** error);
Gio::Credentials base::SocketBase::get_credentials ()
{
  typedef ::GCredentials* (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_credentials;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Credentials base::SocketBase::get_credentials (GLib::Error * _error) noexcept
{
  typedef ::GCredentials* (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_credentials;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketFamily g_socket_get_family (GSocket* socket /*none*/);
// ::GSocketFamily g_socket_get_family (::GSocket* socket /*none*/);
Gio::SocketFamily base::SocketBase::get_family () noexcept
{
  typedef ::GSocketFamily (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_family;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int g_socket_get_fd (GSocket* socket /*none*/);
// gint g_socket_get_fd (::GSocket* socket /*none*/);
gint base::SocketBase::get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_fd;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_get_keepalive (GSocket* socket /*none*/);
// gboolean g_socket_get_keepalive (::GSocket* socket /*none*/);
bool base::SocketBase::get_keepalive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_keepalive;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gint g_socket_get_listen_backlog (GSocket* socket /*none*/);
// gint g_socket_get_listen_backlog (::GSocket* socket /*none*/);
gint base::SocketBase::get_listen_backlog () noexcept
{
  typedef gint (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_listen_backlog;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// GSocketAddress* /*full*/ g_socket_get_local_address (GSocket* socket /*none*/, GError ** error);
// ::GSocketAddress* /*full*/ g_socket_get_local_address (::GSocket* socket /*none*/, GError ** error);
Gio::SocketAddress base::SocketBase::get_local_address ()
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_local_address;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SocketAddress base::SocketBase::get_local_address (GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_local_address;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_socket_get_multicast_loopback (GSocket* socket /*none*/);
// gboolean g_socket_get_multicast_loopback (::GSocket* socket /*none*/);
bool base::SocketBase::get_multicast_loopback () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_multicast_loopback;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// guint g_socket_get_multicast_ttl (GSocket* socket /*none*/);
// guint g_socket_get_multicast_ttl (::GSocket* socket /*none*/);
guint base::SocketBase::get_multicast_ttl () noexcept
{
  typedef guint (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_multicast_ttl;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_get_option (GSocket* socket /*none*/, gint level, gint optname, gint* value, GError ** error);
// gboolean g_socket_get_option (::GSocket* socket /*none*/, gint level, gint optname, gint* value, GError ** error);
bool base::SocketBase::get_option (gint level, gint optname, gint & value)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gint level, gint optname, gint* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_option;
  gint value_o {};
  auto optname_to_c = optname;
  auto level_to_c = level;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gint) (level_to_c), (gint) (optname_to_c), (gint*) (&value_o), &error);
  value = value_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::get_option (gint level, gint optname, gint & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gint level, gint optname, gint* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_option;
  gint value_o {};
  auto optname_to_c = optname;
  auto level_to_c = level;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gint) (level_to_c), (gint) (optname_to_c), (gint*) (&value_o), _error ? &_error_o : nullptr);
  value = value_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gint> base::SocketBase::get_option (gint level, gint optname)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gint level, gint optname, gint* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_option;
  gint value_o {};
  auto optname_to_c = optname;
  auto level_to_c = level;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gint) (level_to_c), (gint) (optname_to_c), (gint*) (&value_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gint> base::SocketBase::get_option (gint level, gint optname, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gint level, gint optname, gint* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_option;
  gint value_o {};
  auto optname_to_c = optname;
  auto level_to_c = level;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gint) (level_to_c), (gint) (optname_to_c), (gint*) (&value_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GSocketProtocol g_socket_get_protocol (GSocket* socket /*none*/);
// ::GSocketProtocol g_socket_get_protocol (::GSocket* socket /*none*/);
Gio::SocketProtocol base::SocketBase::get_protocol () noexcept
{
  typedef ::GSocketProtocol (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_protocol;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GSocketAddress* /*full*/ g_socket_get_remote_address (GSocket* socket /*none*/, GError ** error);
// ::GSocketAddress* /*full*/ g_socket_get_remote_address (::GSocket* socket /*none*/, GError ** error);
Gio::SocketAddress base::SocketBase::get_remote_address ()
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_remote_address;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::SocketAddress base::SocketBase::get_remote_address (GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_remote_address;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketType g_socket_get_socket_type (GSocket* socket /*none*/);
// ::GSocketType g_socket_get_socket_type (::GSocket* socket /*none*/);
Gio::SocketType base::SocketBase::get_socket_type () noexcept
{
  typedef ::GSocketType (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_socket_type;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_socket_get_timeout (GSocket* socket /*none*/);
// guint g_socket_get_timeout (::GSocket* socket /*none*/);
guint base::SocketBase::get_timeout () noexcept
{
  typedef guint (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_timeout;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// guint g_socket_get_ttl (GSocket* socket /*none*/);
// guint g_socket_get_ttl (::GSocket* socket /*none*/);
guint base::SocketBase::get_ttl () noexcept
{
  typedef guint (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_get_ttl;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_is_closed (GSocket* socket /*none*/);
// gboolean g_socket_is_closed (::GSocket* socket /*none*/);
bool base::SocketBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_is_closed;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_is_connected (GSocket* socket /*none*/);
// gboolean g_socket_is_connected (::GSocket* socket /*none*/);
bool base::SocketBase::is_connected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_is_connected;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_join_multicast_group (GSocket* socket /*none*/, GInetAddress* group /*none*/, gboolean source_specific, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_join_multicast_group (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, gboolean source_specific, const char* iface /*none,nullable*/, GError ** error);
bool base::SocketBase::join_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::join_multicast_group (Gio::InetAddress group, gboolean source_specific)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::join_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::join_multicast_group (Gio::InetAddress group, gboolean source_specific, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_join_multicast_group_ssm (GSocket* socket /*none*/, GInetAddress* group /*none*/, GInetAddress* source_specific /*none,nullable*/, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_join_multicast_group_ssm (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, ::GInetAddress* source_specific /*none,nullable*/, const char* iface /*none,nullable*/, GError ** error);
bool base::SocketBase::join_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group_ssm;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = gi::unwrap (source_specific, gi::transfer_none);
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::join_multicast_group_ssm (Gio::InetAddress group)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group_ssm;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = nullptr;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::join_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group_ssm;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = gi::unwrap (source_specific, gi::transfer_none);
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::join_multicast_group_ssm (Gio::InetAddress group, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_join_multicast_group_ssm;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = nullptr;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_leave_multicast_group (GSocket* socket /*none*/, GInetAddress* group /*none*/, gboolean source_specific, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_leave_multicast_group (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, gboolean source_specific, const char* iface /*none,nullable*/, GError ** error);
bool base::SocketBase::leave_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::leave_multicast_group (Gio::InetAddress group, gboolean source_specific)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::leave_multicast_group (Gio::InetAddress group, gboolean source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::leave_multicast_group (Gio::InetAddress group, gboolean source_specific, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, gboolean source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = source_specific;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (gboolean) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_leave_multicast_group_ssm (GSocket* socket /*none*/, GInetAddress* group /*none*/, GInetAddress* source_specific /*none,nullable*/, const gchar* iface /*none,nullable*/, GError ** error);
// gboolean g_socket_leave_multicast_group_ssm (::GSocket* socket /*none*/, ::GInetAddress* group /*none*/, ::GInetAddress* source_specific /*none,nullable*/, const char* iface /*none,nullable*/, GError ** error);
bool base::SocketBase::leave_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group_ssm;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = gi::unwrap (source_specific, gi::transfer_none);
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::leave_multicast_group_ssm (Gio::InetAddress group)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group_ssm;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = nullptr;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::leave_multicast_group_ssm (Gio::InetAddress group, Gio::InetAddress source_specific, const gi::cstring_v iface, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group_ssm;
  auto iface_to_c = gi::unwrap (iface, gi::transfer_none);
  auto source_specific_to_c = gi::unwrap (source_specific, gi::transfer_none);
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SocketBase::leave_multicast_group_ssm (Gio::InetAddress group, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, ::GInetAddress* group, ::GInetAddress* source_specific, const char* iface, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_leave_multicast_group_ssm;
  auto iface_to_c = nullptr;
  auto source_specific_to_c = nullptr;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GInetAddress*) (group_to_c), (::GInetAddress*) (source_specific_to_c), (const char*) (iface_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_listen (GSocket* socket /*none*/, GError ** error);
// gboolean g_socket_listen (::GSocket* socket /*none*/, GError ** error);
bool base::SocketBase::listen ()
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_listen;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::listen (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_listen;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_socket_receive (GSocket* socket /*none*/, gchar* buffer /*none,out,ca*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive (::GSocket* socket /*none*/, guint8* buffer /*none,out,ca*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::SocketBase::receive (guint8 * buffer, gsize size, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::receive (guint8 * buffer, gsize size)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::receive (guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::SocketBase::receive (guint8 * buffer, gsize size, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GBytes* /*full*/ g_socket_receive_bytes (GSocket* socket /*none*/, gsize size, gint64 timeout_us, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_socket_receive_bytes (::GSocket* socket /*none*/, gsize size, gint64 timeout_us, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GLib::Bytes base::SocketBase::receive_bytes (gsize size, gint64 timeout_us, Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::SocketBase::receive_bytes (gsize size, gint64 timeout_us)
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::SocketBase::receive_bytes (gsize size, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::SocketBase::receive_bytes (gsize size, gint64 timeout_us, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*full*/ g_socket_receive_bytes_from (GSocket* socket /*none*/, GSocketAddress** address /*full,out,opt*/, gsize size, gint64 timeout_us, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_socket_receive_bytes_from (::GSocket* socket /*none*/, ::GSocketAddress** address /*full,out,opt*/, gsize size, gint64 timeout_us, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GLib::Bytes base::SocketBase::receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us, Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::SocketBase::receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us)
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::SocketBase::receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::SocketBase::receive_bytes_from (Gio::SocketAddress * address, gsize size, gint64 timeout_us, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<GLib::Bytes, Gio::SocketAddress> base::SocketBase::receive_bytes_from (gsize size, gint64 timeout_us, Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, Gio::SocketAddress> base::SocketBase::receive_bytes_from (gsize size, gint64 timeout_us)
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, Gio::SocketAddress> base::SocketBase::receive_bytes_from (gsize size, gint64 timeout_us, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, Gio::SocketAddress> base::SocketBase::receive_bytes_from (gsize size, gint64 timeout_us, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, gsize size, gint64 timeout_us, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_bytes_from;
  auto cancellable_to_c = nullptr;
  auto timeout_us_to_c = timeout_us;
  auto size_to_c = size;
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (gsize) (size_to_c), (gint64) (timeout_us_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gssize g_socket_receive_from (GSocket* socket /*none*/, GSocketAddress** address /*full,out,opt*/, gchar* buffer /*none,out,ca*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive_from (::GSocket* socket /*none*/, ::GSocketAddress** address /*full,out,opt*/, guint8* buffer /*none,out,ca*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::SocketBase::receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = nullptr;
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::SocketBase::receive_from (Gio::SocketAddress * address, guint8 * buffer, gsize size, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = nullptr;
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (address ? &address_o : nullptr), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (address) *address = gi::wrap (address_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<gssize, Gio::SocketAddress> base::SocketBase::receive_from (guint8 * buffer, gsize size, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gssize, Gio::SocketAddress> base::SocketBase::receive_from (guint8 * buffer, gsize size)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = nullptr;
  ::GSocketAddress* address_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gssize, Gio::SocketAddress> base::SocketBase::receive_from (guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gssize, Gio::SocketAddress> base::SocketBase::receive_from (guint8 * buffer, gsize size, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress** address, guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_from;
  auto cancellable_to_c = nullptr;
  ::GSocketAddress* address_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress**) (&address_o), (guint8*) (buffer), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (address_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gssize g_socket_receive_message (GSocket* socket /*none*/, GSocketAddress** address /*full,out,opt*/, GInputVector* vectors /*none*/, gint num_vectors, GSocketControlMessage*** messages /*full,out,opt,nullable*/, gint* num_messages, gint* flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive_message (::GSocket* socket /*none*/, ::GSocketAddress** address /*full,out,opt*/, ::GInputVector** vectors /*none*/, gint num_vectors, ::GSocketControlMessage*** messages /*full,out,opt,nullable*/, gint* num_messages, gint* flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; vectors in boxed array not supported (depth 1)

// gint g_socket_receive_messages (GSocket* socket /*none*/, GInputMessage* messages /*none*/, guint num_messages, gint flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_socket_receive_messages (::GSocket* socket /*none*/, ::GInputMessage** messages /*none*/, guint num_messages, gint flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; messages in boxed array not supported (depth 1)

// gssize g_socket_receive_with_blocking (GSocket* socket /*none*/, gchar* buffer /*none,out,ca*/, gsize size, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_receive_with_blocking (::GSocket* socket /*none*/, guint8* buffer /*none,out,ca*/, gsize size, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::SocketBase::receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_with_blocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_with_blocking;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_with_blocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::SocketBase::receive_with_blocking (guint8 * buffer, gsize size, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_receive_with_blocking;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (guint8*) (buffer), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_socket_send (GSocket* socket /*none*/, const gchar* buffer /*none*/, gsize size, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_send (::GSocket* socket /*none*/, const guint8* buffer /*none*/, gsize size, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::SocketBase::send (const guint8 * buffer, gsize size, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::send (const guint8 * buffer, gsize size)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::send (const guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::SocketBase::send (const guint8 * buffer, gsize size, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

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
gssize base::SocketBase::send_to (Gio::SocketAddress address, const guint8 * buffer, gsize size, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::send_to (const guint8 * buffer, gsize size)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_to;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  auto address_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::send_to (Gio::SocketAddress address, const guint8 * buffer, gsize size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto buffer_to_c = buffer;
  auto address_to_c = gi::unwrap (address, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::SocketBase::send_to (const guint8 * buffer, gsize size, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, ::GSocketAddress* address, const guint8* buffer, gsize size, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_to;
  auto cancellable_to_c = nullptr;
  auto buffer_to_c = buffer;
  auto address_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (::GSocketAddress*) (address_to_c), (const guint8*) (buffer_to_c), (gsize) (size), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gssize g_socket_send_with_blocking (GSocket* socket /*none*/, const gchar* buffer /*none*/, gsize size, gboolean blocking, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gssize g_socket_send_with_blocking (::GSocket* socket /*none*/, const guint8* buffer /*none*/, gsize size, gboolean blocking, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gssize base::SocketBase::send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_with_blocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking)
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_with_blocking;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::SocketBase::send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_with_blocking;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gssize base::SocketBase::send_with_blocking (const guint8 * buffer, gsize size, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GSocket* socket, const guint8* buffer, gsize size, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_send_with_blocking;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_to_c = buffer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (size), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_socket_set_blocking (GSocket* socket /*none*/, gboolean blocking);
// void g_socket_set_blocking (::GSocket* socket /*none*/, gboolean blocking);
void base::SocketBase::set_blocking (gboolean blocking) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, gboolean blocking);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_blocking;
  auto blocking_to_c = blocking;
  call_wrap_v ((::GSocket*) (gobj_()), (gboolean) (blocking_to_c));
}

// void g_socket_set_broadcast (GSocket* socket /*none*/, gboolean broadcast);
// void g_socket_set_broadcast (::GSocket* socket /*none*/, gboolean broadcast);
void base::SocketBase::set_broadcast (gboolean broadcast) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, gboolean broadcast);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_broadcast;
  auto broadcast_to_c = broadcast;
  call_wrap_v ((::GSocket*) (gobj_()), (gboolean) (broadcast_to_c));
}

// void g_socket_set_keepalive (GSocket* socket /*none*/, gboolean keepalive);
// void g_socket_set_keepalive (::GSocket* socket /*none*/, gboolean keepalive);
void base::SocketBase::set_keepalive (gboolean keepalive) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, gboolean keepalive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_keepalive;
  auto keepalive_to_c = keepalive;
  call_wrap_v ((::GSocket*) (gobj_()), (gboolean) (keepalive_to_c));
}

// void g_socket_set_listen_backlog (GSocket* socket /*none*/, gint backlog);
// void g_socket_set_listen_backlog (::GSocket* socket /*none*/, gint backlog);
void base::SocketBase::set_listen_backlog (gint backlog) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, gint backlog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_listen_backlog;
  auto backlog_to_c = backlog;
  call_wrap_v ((::GSocket*) (gobj_()), (gint) (backlog_to_c));
}

// void g_socket_set_multicast_loopback (GSocket* socket /*none*/, gboolean loopback);
// void g_socket_set_multicast_loopback (::GSocket* socket /*none*/, gboolean loopback);
void base::SocketBase::set_multicast_loopback (gboolean loopback) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, gboolean loopback);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_multicast_loopback;
  auto loopback_to_c = loopback;
  call_wrap_v ((::GSocket*) (gobj_()), (gboolean) (loopback_to_c));
}

// void g_socket_set_multicast_ttl (GSocket* socket /*none*/, guint ttl);
// void g_socket_set_multicast_ttl (::GSocket* socket /*none*/, guint ttl);
void base::SocketBase::set_multicast_ttl (guint ttl) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, guint ttl);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_multicast_ttl;
  auto ttl_to_c = ttl;
  call_wrap_v ((::GSocket*) (gobj_()), (guint) (ttl_to_c));
}

// gboolean g_socket_set_option (GSocket* socket /*none*/, gint level, gint optname, gint value, GError ** error);
// gboolean g_socket_set_option (::GSocket* socket /*none*/, gint level, gint optname, gint value, GError ** error);
bool base::SocketBase::set_option (gint level, gint optname, gint value)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gint level, gint optname, gint value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_option;
  auto value_to_c = value;
  auto optname_to_c = optname;
  auto level_to_c = level;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gint) (level_to_c), (gint) (optname_to_c), (gint) (value_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::set_option (gint level, gint optname, gint value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gint level, gint optname, gint value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_option;
  auto value_to_c = value;
  auto optname_to_c = optname;
  auto level_to_c = level;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gint) (level_to_c), (gint) (optname_to_c), (gint) (value_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_socket_set_timeout (GSocket* socket /*none*/, guint timeout);
// void g_socket_set_timeout (::GSocket* socket /*none*/, guint timeout);
void base::SocketBase::set_timeout (guint timeout) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, guint timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_timeout;
  auto timeout_to_c = timeout;
  call_wrap_v ((::GSocket*) (gobj_()), (guint) (timeout_to_c));
}

// void g_socket_set_ttl (GSocket* socket /*none*/, guint ttl);
// void g_socket_set_ttl (::GSocket* socket /*none*/, guint ttl);
void base::SocketBase::set_ttl (guint ttl) noexcept
{
  typedef void (*call_wrap_t) (::GSocket* socket, guint ttl);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_set_ttl;
  auto ttl_to_c = ttl;
  call_wrap_v ((::GSocket*) (gobj_()), (guint) (ttl_to_c));
}

// gboolean g_socket_shutdown (GSocket* socket /*none*/, gboolean shutdown_read, gboolean shutdown_write, GError ** error);
// gboolean g_socket_shutdown (::GSocket* socket /*none*/, gboolean shutdown_read, gboolean shutdown_write, GError ** error);
bool base::SocketBase::shutdown (gboolean shutdown_read, gboolean shutdown_write)
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gboolean shutdown_read, gboolean shutdown_write, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_shutdown;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket, gboolean shutdown_read, gboolean shutdown_write, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_shutdown;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_socket_speaks_ipv4 (GSocket* socket /*none*/);
// gboolean g_socket_speaks_ipv4 (::GSocket* socket /*none*/);
bool base::SocketBase::speaks_ipv4 () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_speaks_ipv4;
  auto _temp_ret = call_wrap_v ((::GSocket*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socket_extra_def_impl.hpp>)
#include <gio/socket_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socket_extra_impl.hpp>)
#include <gio/socket_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSocketClass *methods = (::GSocketClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
