// AUTO-GENERATED

#ifndef _GI_GIO_UNIXFDLIST_IMPL_HPP_
#define _GI_GIO_UNIXFDLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GUnixFDList* /*full*/ g_unix_fd_list_new ();
// ::GUnixFDList* /*full*/ g_unix_fd_list_new ();
Gio::UnixFDList base::UnixFDListBase::new_ () noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_list_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GUnixFDList* /*full*/ g_unix_fd_list_new_from_array (const gint* fds /*none*/, gint n_fds);
// ::GUnixFDList* /*full*/ g_unix_fd_list_new_from_array (const gint* fds /*none*/, gint n_fds);
Gio::UnixFDList base::UnixFDListBase::new_from_array (const gint * fds, gint n_fds) noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) (const gint* fds, gint n_fds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_list_new_from_array;
  auto fds_to_c = fds;
  auto _temp_ret = call_wrap_v ((const gint*) (fds_to_c), (gint) (n_fds));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_unix_fd_list_append (GUnixFDList* list /*none*/, gint fd, GError ** error);
// gint g_unix_fd_list_append (::GUnixFDList* list /*none*/, gint fd, GError ** error);
gint base::UnixFDListBase::append (gint fd)
{
  typedef gint (*call_wrap_t) (::GUnixFDList* list, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_append;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (gobj_()), (gint) (fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::UnixFDListBase::append (gint fd, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixFDList* list, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_append;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (gobj_()), (gint) (fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint g_unix_fd_list_get (GUnixFDList* list /*none*/, gint index_, GError ** error);
// gint g_unix_fd_list_get (::GUnixFDList* list /*none*/, gint index_, GError ** error);
gint base::UnixFDListBase::get (gint index_)
{
  typedef gint (*call_wrap_t) (::GUnixFDList* list, gint index_, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_get;
  auto index__to_c = index_;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (gobj_()), (gint) (index__to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::UnixFDListBase::get (gint index_, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixFDList* list, gint index_, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_get;
  auto index__to_c = index_;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (gobj_()), (gint) (index__to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint g_unix_fd_list_get_length (GUnixFDList* list /*none*/);
// gint g_unix_fd_list_get_length (::GUnixFDList* list /*none*/);
gint base::UnixFDListBase::get_length () noexcept
{
  typedef gint (*call_wrap_t) (::GUnixFDList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_get_length;
  auto _temp_ret = call_wrap_v ((::GUnixFDList*) (gobj_()));
  return _temp_ret;
}

// const gint* /*none*/ g_unix_fd_list_peek_fds (GUnixFDList* list /*none*/, gint* length);
// const gint* /*none*/ g_unix_fd_list_peek_fds (::GUnixFDList* list /*none*/, gint* length);
gi::Collection<gi::DSpan, gint, gi::transfer_none_t> base::UnixFDListBase::peek_fds () noexcept
{
  typedef const gint* (*call_wrap_t) (::GUnixFDList* list, gint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_peek_fds;
  gint length;
  auto _ret_o = call_wrap_v ((::GUnixFDList*) (gobj_()), (gint*) (&length));
  gi::Collection<gi::DSpan, gint, gi::transfer_none_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_none_t>>(_ret_o, length, gi::transfer_none);
  return _temp_ret;
}

// gint* /*full*/ g_unix_fd_list_steal_fds (GUnixFDList* list /*none*/, gint* length);
// gint* /*full*/ g_unix_fd_list_steal_fds (::GUnixFDList* list /*none*/, gint* length);
gi::Collection<gi::DSpan, gint, gi::transfer_full_t> base::UnixFDListBase::steal_fds () noexcept
{
  typedef gint* (*call_wrap_t) (::GUnixFDList* list, gint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_fd_list_steal_fds;
  gint length;
  auto _ret_o = call_wrap_v ((::GUnixFDList*) (gobj_()), (gint*) (&length));
  gi::Collection<gi::DSpan, gint, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixfdlist_extra_def_impl.hpp>)
#include <gio/unixfdlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixfdlist_extra_impl.hpp>)
#include <gio/unixfdlist_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixFDListClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GUnixFDListClass *methods = (::GUnixFDListClass *) class_struct;
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
