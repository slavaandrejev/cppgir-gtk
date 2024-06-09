// AUTO-GENERATED

#ifndef _GI_GIO_TESTDBUS_IMPL_HPP_
#define _GI_GIO_TESTDBUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTestDBus* /*full*/ g_test_dbus_new (GTestDBusFlags flags);
// ::GTestDBus* /*full*/ g_test_dbus_new (::GTestDBusFlags flags);
Gio::TestDBus base::TestDBusBase::new_ (Gio::TestDBusFlags flags) noexcept
{
  typedef ::GTestDBus* (*call_wrap_t) (::GTestDBusFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_dbus_new;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GTestDBusFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_test_dbus_unset ();
// void g_test_dbus_unset ();
void base::TestDBusBase::unset () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_unset;
  call_wrap_v ();
}

// void g_test_dbus_add_service_dir (GTestDBus* self /*none*/, const gchar* path /*none*/);
// void g_test_dbus_add_service_dir (::GTestDBus* self /*none*/, const char* path /*none*/);
void base::TestDBusBase::add_service_dir (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GTestDBus* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_add_service_dir;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GTestDBus*) (gobj_()), (const char*) (path_to_c));
}

// void g_test_dbus_down (GTestDBus* self /*none*/);
// void g_test_dbus_down (::GTestDBus* self /*none*/);
void base::TestDBusBase::down () noexcept
{
  typedef void (*call_wrap_t) (::GTestDBus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_down;
  call_wrap_v ((::GTestDBus*) (gobj_()));
}

// const gchar* /*none,nullable*/ g_test_dbus_get_bus_address (GTestDBus* self /*none*/);
// const char* /*none,nullable*/ g_test_dbus_get_bus_address (::GTestDBus* self /*none*/);
gi::cstring_v base::TestDBusBase::get_bus_address () noexcept
{
  typedef const char* (*call_wrap_t) (::GTestDBus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_get_bus_address;
  auto _temp_ret = call_wrap_v ((::GTestDBus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GTestDBusFlags g_test_dbus_get_flags (GTestDBus* self /*none*/);
// ::GTestDBusFlags g_test_dbus_get_flags (::GTestDBus* self /*none*/);
Gio::TestDBusFlags base::TestDBusBase::get_flags () noexcept
{
  typedef ::GTestDBusFlags (*call_wrap_t) (::GTestDBus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_get_flags;
  auto _temp_ret = call_wrap_v ((::GTestDBus*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void g_test_dbus_stop (GTestDBus* self /*none*/);
// void g_test_dbus_stop (::GTestDBus* self /*none*/);
void base::TestDBusBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GTestDBus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_stop;
  call_wrap_v ((::GTestDBus*) (gobj_()));
}

// void g_test_dbus_up (GTestDBus* self /*none*/);
// void g_test_dbus_up (::GTestDBus* self /*none*/);
void base::TestDBusBase::up () noexcept
{
  typedef void (*call_wrap_t) (::GTestDBus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_test_dbus_up;
  call_wrap_v ((::GTestDBus*) (gobj_()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/testdbus_extra_def_impl.hpp>)
#include <gio/testdbus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/testdbus_extra_impl.hpp>)
#include <gio/testdbus_extra_impl.hpp>
#endif
#endif

#endif
