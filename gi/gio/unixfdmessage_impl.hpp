// AUTO-GENERATED

#ifndef _GI_GIO_UNIXFDMESSAGE_IMPL_HPP_
#define _GI_GIO_UNIXFDMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* /*full*/ g_unix_fd_message_new ();
// ::GUnixFDMessage* /*full*/ g_unix_fd_message_new ();
Gio::UnixFDMessage base::UnixFDMessageBase::new_ () noexcept
{
  typedef ::GUnixFDMessage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketControlMessage* /*full*/ g_unix_fd_message_new_with_fd_list (GUnixFDList* fd_list /*none*/);
// ::GUnixFDMessage* /*full*/ g_unix_fd_message_new_with_fd_list (::GUnixFDList* fd_list /*none*/);
Gio::UnixFDMessage base::UnixFDMessageBase::new_with_fd_list (Gio::UnixFDList fd_list) noexcept
{
  typedef ::GUnixFDMessage* (*call_wrap_t) (::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_message_new_with_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (fd_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_fd_message_append_fd (GUnixFDMessage* message /*none*/, gint fd, GError ** error);
// gboolean g_unix_fd_message_append_fd (::GUnixFDMessage* message /*none*/, gint fd, GError ** error);
bool base::UnixFDMessageBase::append_fd (gint fd)
{
  typedef gboolean (*call_wrap_t) (::GUnixFDMessage* message, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_message_append_fd;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixFDMessage*) (gobj_()), (gint) (fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UnixFDMessageBase::append_fd (gint fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixFDMessage* message, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_message_append_fd;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixFDMessage*) (gobj_()), (gint) (fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GUnixFDList* /*none*/ g_unix_fd_message_get_fd_list (GUnixFDMessage* message /*none*/);
// ::GUnixFDList* /*none*/ g_unix_fd_message_get_fd_list (::GUnixFDMessage* message /*none*/);
Gio::UnixFDList base::UnixFDMessageBase::get_fd_list () noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) (::GUnixFDMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_message_get_fd_list;
  auto _temp_ret = call_wrap_v ((::GUnixFDMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint* /*full*/ g_unix_fd_message_steal_fds (GUnixFDMessage* message /*none*/, gint* length);
// gint* /*full*/ g_unix_fd_message_steal_fds (::GUnixFDMessage* message /*none*/, gint* length);
gi::Collection<gi::DSpan, gint, gi::transfer_full_t> base::UnixFDMessageBase::steal_fds () noexcept
{
  typedef gint* (*call_wrap_t) (::GUnixFDMessage* message, gint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_message_steal_fds;
  gint length;
  auto _ret_o = call_wrap_v ((::GUnixFDMessage*) (gobj_()), (gint*) (&length));
  gi::Collection<gi::DSpan, gint, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixfdmessage_extra_def_impl.hpp>)
#include <gio/unixfdmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixfdmessage_extra_impl.hpp>)
#include <gio/unixfdmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixFDMessageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GUnixFDMessageClass *methods = (::GUnixFDMessageClass *) class_struct;
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
