// AUTO-GENERATED

#ifndef _GI_GIO_INETADDRESS_IMPL_HPP_
#define _GI_GIO_INETADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GInetAddress* /*full*/ g_inet_address_new_any (GSocketFamily family);
// ::GInetAddress* /*full*/ g_inet_address_new_any (::GSocketFamily family);
Gio::InetAddress base::InetAddressBase::new_any (Gio::SocketFamily family) noexcept
{
  typedef ::GInetAddress* (*call_wrap_t) (::GSocketFamily family);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_new_any;
  auto family_to_c = gi::unwrap (family);
  auto _temp_ret = call_wrap_v ((::GSocketFamily) (family_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInetAddress* /*full*/ g_inet_address_new_from_bytes ( bytes /*none*/, GSocketFamily family);
// ::GInetAddress* /*full*/ g_inet_address_new_from_bytes (* bytes /*none*/, ::GSocketFamily family);
// SKIP; inconsistent array info

// GInetAddress* /*full,nullable*/ g_inet_address_new_from_string (const gchar* string /*none*/);
// ::GInetAddress* /*full,nullable*/ g_inet_address_new_from_string (const char* string /*none*/);
Gio::InetAddress base::InetAddressBase::new_from_string (const gi::cstring_v string) noexcept
{
  typedef ::GInetAddress* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_new_from_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInetAddress* /*full*/ g_inet_address_new_loopback (GSocketFamily family);
// ::GInetAddress* /*full*/ g_inet_address_new_loopback (::GSocketFamily family);
Gio::InetAddress base::InetAddressBase::new_loopback (Gio::SocketFamily family) noexcept
{
  typedef ::GInetAddress* (*call_wrap_t) (::GSocketFamily family);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_address_new_loopback;
  auto family_to_c = gi::unwrap (family);
  auto _temp_ret = call_wrap_v ((::GSocketFamily) (family_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_inet_address_equal (GInetAddress* address /*none*/, GInetAddress* other_address /*none*/);
// gboolean g_inet_address_equal (::GInetAddress* address /*none*/, ::GInetAddress* other_address /*none*/);
bool base::InetAddressBase::equal (Gio::InetAddress other_address) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address, ::GInetAddress* other_address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_equal;
  auto other_address_to_c = gi::unwrap (other_address, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()), (::GInetAddress*) (other_address_to_c));
  return _temp_ret;
}

// GSocketFamily g_inet_address_get_family (GInetAddress* address /*none*/);
// ::GSocketFamily g_inet_address_get_family (::GInetAddress* address /*none*/);
Gio::SocketFamily base::InetAddressBase::get_family () noexcept
{
  typedef ::GSocketFamily (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_family;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_inet_address_get_is_any (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_any (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_any () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_any;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_link_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_link_local (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_link_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_link_local;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_loopback (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_loopback (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_loopback () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_loopback;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_mc_global (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_global (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_mc_global () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_mc_global;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_mc_link_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_link_local (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_mc_link_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_mc_link_local;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_mc_node_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_node_local (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_mc_node_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_mc_node_local;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_mc_org_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_org_local (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_mc_org_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_mc_org_local;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_mc_site_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_site_local (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_mc_site_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_mc_site_local;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_multicast (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_multicast (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_multicast () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_multicast;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_inet_address_get_is_site_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_site_local (::GInetAddress* address /*none*/);
bool base::InetAddressBase::get_is_site_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_is_site_local;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// gsize g_inet_address_get_native_size (GInetAddress* address /*none*/);
// gsize g_inet_address_get_native_size (::GInetAddress* address /*none*/);
gsize base::InetAddressBase::get_native_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_get_native_size;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return _temp_ret;
}

// const guint8* g_inet_address_to_bytes (GInetAddress* address /*none*/);
// const guint8 g_inet_address_to_bytes (::GInetAddress* address /*none*/);
// IGNORE; not introspectable, inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_inet_address_to_string (GInetAddress* address /*none*/);
// char* /*full*/ g_inet_address_to_string (::GInetAddress* address /*none*/);
gi::cstring base::InetAddressBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_inet_address_to_string;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inetaddress_extra_def_impl.hpp>)
#include <gio/inetaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inetaddress_extra_impl.hpp>)
#include <gio/inetaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InetAddressClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GInetAddressClass *methods = (::GInetAddressClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.to_string) methods->to_string = (decltype (methods->to_string)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::to_string_>;
}

// gchar* /*full*/ InetAddress::to_string (GInetAddress* address /*none*/);
// char* /*full*/ InetAddress::to_string (::GInetAddress* address /*none*/);
gi::cstring InetAddressClass::to_string_ () noexcept
{
  if (!get_struct_()->to_string) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GInetAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->to_string;
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
