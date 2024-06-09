// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINVOCATION_IMPL_HPP_
#define _GI_GIO_DBUSMETHODINVOCATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusConnection* /*none*/ g_dbus_method_invocation_get_connection (GDBusMethodInvocation* invocation /*none*/);
// ::GDBusConnection* /*none*/ g_dbus_method_invocation_get_connection (::GDBusMethodInvocation* invocation /*none*/);
Gio::DBusConnection base::DBusMethodInvocationBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dbus_method_invocation_get_interface_name (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_interface_name (::GDBusMethodInvocation* invocation /*none*/);
gi::cstring_v base::DBusMethodInvocationBase::get_interface_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_interface_name;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusMessage* /*none*/ g_dbus_method_invocation_get_message (GDBusMethodInvocation* invocation /*none*/);
// ::GDBusMessage* /*none*/ g_dbus_method_invocation_get_message (::GDBusMethodInvocation* invocation /*none*/);
Gio::DBusMessage base::DBusMethodInvocationBase::get_message () noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_message;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GDBusMethodInfo* /*none,nullable*/ g_dbus_method_invocation_get_method_info (GDBusMethodInvocation* invocation /*none*/);
// const ::GDBusMethodInfo* /*none,nullable*/ g_dbus_method_invocation_get_method_info (::GDBusMethodInvocation* invocation /*none*/);
Gio::DBusMethodInfo_Ref base::DBusMethodInvocationBase::get_method_info () noexcept
{
  typedef const ::GDBusMethodInfo* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_method_info;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dbus_method_invocation_get_method_name (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_method_name (::GDBusMethodInvocation* invocation /*none*/);
gi::cstring_v base::DBusMethodInvocationBase::get_method_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_method_name;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dbus_method_invocation_get_object_path (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_object_path (::GDBusMethodInvocation* invocation /*none*/);
gi::cstring_v base::DBusMethodInvocationBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*none*/ g_dbus_method_invocation_get_parameters (GDBusMethodInvocation* invocation /*none*/);
// ::GVariant* /*none*/ g_dbus_method_invocation_get_parameters (::GDBusMethodInvocation* invocation /*none*/);
GLib::Variant base::DBusMethodInvocationBase::get_parameters () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_parameters;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GDBusPropertyInfo* /*none,nullable*/ g_dbus_method_invocation_get_property_info (GDBusMethodInvocation* invocation /*none*/);
// const ::GDBusPropertyInfo* /*none,nullable*/ g_dbus_method_invocation_get_property_info (::GDBusMethodInvocation* invocation /*none*/);
Gio::DBusPropertyInfo_Ref base::DBusMethodInvocationBase::get_property_info () noexcept
{
  typedef const ::GDBusPropertyInfo* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_property_info;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none*/ g_dbus_method_invocation_get_sender (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_sender (::GDBusMethodInvocation* invocation /*none*/);
gi::cstring_v base::DBusMethodInvocationBase::get_sender () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_sender;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gpointer g_dbus_method_invocation_get_user_data (GDBusMethodInvocation* invocation /*none*/);
// void* g_dbus_method_invocation_get_user_data (::GDBusMethodInvocation* invocation /*none*/);
gpointer base::DBusMethodInvocationBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_get_user_data;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return _temp_ret;
}

// void g_dbus_method_invocation_return_dbus_error (GDBusMethodInvocation* invocation /*full*/, const gchar* error_name /*none*/, const gchar* error_message /*none*/);
// void g_dbus_method_invocation_return_dbus_error (::GDBusMethodInvocation* invocation /*full*/, const char* error_name /*none*/, const char* error_message /*none*/);
void base::DBusMethodInvocationBase::return_dbus_error (const gi::cstring_v error_name, const gi::cstring_v error_message) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, const char* error_name, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_dbus_error;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none);
  auto error_name_to_c = gi::unwrap (error_name, gi::transfer_none);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (const char*) (error_name_to_c), (const char*) (error_message_to_c));
}

// void g_dbus_method_invocation_return_error (GDBusMethodInvocation* invocation /*full*/, GQuark domain, gint code, const gchar* format /*none*/,  ..._ /*none*/);
// void g_dbus_method_invocation_return_error (::GDBusMethodInvocation* invocation /*full*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_method_invocation_return_error_literal (GDBusMethodInvocation* invocation /*full*/, GQuark domain, gint code, const gchar* message /*none*/);
// void g_dbus_method_invocation_return_error_literal (::GDBusMethodInvocation* invocation /*full*/, ::GQuark domain, gint code, const char* message /*none*/);
void base::DBusMethodInvocationBase::return_error_literal (::GQuark domain, gint code, const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  auto code_to_c = code;
  auto domain_to_c = domain;
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
}

// void g_dbus_method_invocation_return_error_valist (GDBusMethodInvocation* invocation /*full*/, GQuark domain, gint code, const gchar* format /*none*/, va_list var_args /*none*/);
// void g_dbus_method_invocation_return_error_valist (::GDBusMethodInvocation* invocation /*full*/, ::GQuark domain, gint code, const char* format /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void g_dbus_method_invocation_return_gerror (GDBusMethodInvocation* invocation /*full*/, const GError* error /*none*/);
// void g_dbus_method_invocation_return_gerror (::GDBusMethodInvocation* invocation /*full*/, const ::GError* error /*none*/);
void base::DBusMethodInvocationBase::return_gerror (const GLib::Error_Ref error) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_gerror;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (const ::GError*) (error_to_c));
}

// void g_dbus_method_invocation_return_value (GDBusMethodInvocation* invocation /*full*/, GVariant* parameters /*none,nullable*/);
// void g_dbus_method_invocation_return_value (::GDBusMethodInvocation* invocation /*full*/, ::GVariant* parameters /*none,nullable*/);
void base::DBusMethodInvocationBase::return_value (GLib::Variant parameters) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_value;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c));
}
void base::DBusMethodInvocationBase::return_value () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_value;
  auto parameters_to_c = nullptr;
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c));
}

// void g_dbus_method_invocation_return_value_with_unix_fd_list (GDBusMethodInvocation* invocation /*full*/, GVariant* parameters /*none,nullable*/, GUnixFDList* fd_list /*none,nullable*/);
// void g_dbus_method_invocation_return_value_with_unix_fd_list (::GDBusMethodInvocation* invocation /*full*/, ::GVariant* parameters /*none,nullable*/, ::GUnixFDList* fd_list /*none,nullable*/);
void base::DBusMethodInvocationBase::return_value_with_unix_fd_list (GLib::Variant parameters, Gio::UnixFDList fd_list) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_value_with_unix_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c), (::GUnixFDList*) (fd_list_to_c));
}
void base::DBusMethodInvocationBase::return_value_with_unix_fd_list () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_return_value_with_unix_fd_list;
  auto fd_list_to_c = nullptr;
  auto parameters_to_c = nullptr;
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c), (::GUnixFDList*) (fd_list_to_c));
}

// void g_dbus_method_invocation_take_error (GDBusMethodInvocation* invocation /*full*/, GError* error /*full*/);
// void g_dbus_method_invocation_take_error (::GDBusMethodInvocation* invocation /*full*/, ::GError* error /*full*/);
void base::DBusMethodInvocationBase::take_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_dbus_method_invocation_take_error;
  auto error_to_c = gi::unwrap (std::move(error), gi::transfer_full);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GError*) (error_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra_def_impl.hpp>)
#include <gio/dbusmethodinvocation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra_impl.hpp>)
#include <gio/dbusmethodinvocation_extra_impl.hpp>
#endif
#endif

#endif
