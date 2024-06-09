// AUTO-GENERATED

#ifndef _GI_GIO_TCPWRAPPERCONNECTION_IMPL_HPP_
#define _GI_GIO_TCPWRAPPERCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketConnection* /*full*/ g_tcp_wrapper_connection_new (GIOStream* base_io_stream /*none*/, GSocket* socket /*none*/);
// ::GTcpWrapperConnection* /*full*/ g_tcp_wrapper_connection_new (::GIOStream* base_io_stream /*none*/, ::GSocket* socket /*none*/);
Gio::TcpWrapperConnection base::TcpWrapperConnectionBase::new_ (Gio::IOStream base_io_stream, Gio::Socket socket) noexcept
{
  typedef ::GTcpWrapperConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tcp_wrapper_connection_new;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none);
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GSocket*) (socket_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIOStream* /*none*/ g_tcp_wrapper_connection_get_base_io_stream (GTcpWrapperConnection* conn /*none*/);
// ::GIOStream* /*none*/ g_tcp_wrapper_connection_get_base_io_stream (::GTcpWrapperConnection* conn /*none*/);
Gio::IOStream base::TcpWrapperConnectionBase::get_base_io_stream () noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GTcpWrapperConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_tcp_wrapper_connection_get_base_io_stream;
  auto _temp_ret = call_wrap_v ((::GTcpWrapperConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tcpwrapperconnection_extra_def_impl.hpp>)
#include <gio/tcpwrapperconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tcpwrapperconnection_extra_impl.hpp>)
#include <gio/tcpwrapperconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TcpWrapperConnectionClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GTcpWrapperConnectionClass *methods = (::GTcpWrapperConnectionClass *) class_struct;
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
