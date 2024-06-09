// AUTO-GENERATED

#ifndef _GI_GIO_UNIXCREDENTIALSMESSAGE_IMPL_HPP_
#define _GI_GIO_UNIXCREDENTIALSMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* /*full*/ g_unix_credentials_message_new ();
// ::GUnixCredentialsMessage* /*full*/ g_unix_credentials_message_new ();
Gio::UnixCredentialsMessage base::UnixCredentialsMessageBase::new_ () noexcept
{
  typedef ::GUnixCredentialsMessage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_credentials_message_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSocketControlMessage* /*full*/ g_unix_credentials_message_new_with_credentials (GCredentials* credentials /*none*/);
// ::GUnixCredentialsMessage* /*full*/ g_unix_credentials_message_new_with_credentials (::GCredentials* credentials /*none*/);
Gio::UnixCredentialsMessage base::UnixCredentialsMessageBase::new_with_credentials (Gio::Credentials credentials) noexcept
{
  typedef ::GUnixCredentialsMessage* (*call_wrap_t) (::GCredentials* credentials);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_credentials_message_new_with_credentials;
  auto credentials_to_c = gi::unwrap (credentials, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GCredentials*) (credentials_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_credentials_message_is_supported ();
// gboolean g_unix_credentials_message_is_supported ();
bool base::UnixCredentialsMessageBase::is_supported () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_credentials_message_is_supported;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GCredentials* /*none*/ g_unix_credentials_message_get_credentials (GUnixCredentialsMessage* message /*none*/);
// ::GCredentials* /*none*/ g_unix_credentials_message_get_credentials (::GUnixCredentialsMessage* message /*none*/);
Gio::Credentials base::UnixCredentialsMessageBase::get_credentials () noexcept
{
  typedef ::GCredentials* (*call_wrap_t) (::GUnixCredentialsMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_credentials_message_get_credentials;
  auto _temp_ret = call_wrap_v ((::GUnixCredentialsMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixcredentialsmessage_extra_def_impl.hpp>)
#include <gio/unixcredentialsmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixcredentialsmessage_extra_impl.hpp>)
#include <gio/unixcredentialsmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixCredentialsMessageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GUnixCredentialsMessageClass *methods = (::GUnixCredentialsMessageClass *) class_struct;
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
