// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINVOCATION_HPP_
#define _GI_GIO_DBUSMETHODINVOCATION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;
class DBusMessage;
class DBusMethodInfo;
class DBusMethodInfo_Ref;
class DBusPropertyInfo;
class DBusPropertyInfo_Ref;
class UnixFDList;

class DBusMethodInvocation;

namespace base {


#define GI_GIO_DBUSMETHODINVOCATION_BASE base::DBusMethodInvocationBase
class DBusMethodInvocationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusMethodInvocation BaseObjectType;

DBusMethodInvocationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_method_invocation_get_type(); } 

// GDBusConnection* /*none*/ g_dbus_method_invocation_get_connection (GDBusMethodInvocation* invocation /*none*/);
// ::GDBusConnection* /*none*/ g_dbus_method_invocation_get_connection (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// const gchar* /*none*/ g_dbus_method_invocation_get_interface_name (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_interface_name (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL gi::cstring_v get_interface_name () noexcept;

// GDBusMessage* /*none*/ g_dbus_method_invocation_get_message (GDBusMethodInvocation* invocation /*none*/);
// ::GDBusMessage* /*none*/ g_dbus_method_invocation_get_message (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL Gio::DBusMessage get_message () noexcept;

// const GDBusMethodInfo* /*none,nullable*/ g_dbus_method_invocation_get_method_info (GDBusMethodInvocation* invocation /*none*/);
// const ::GDBusMethodInfo* /*none,nullable*/ g_dbus_method_invocation_get_method_info (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL Gio::DBusMethodInfo_Ref get_method_info () noexcept;

// const gchar* /*none*/ g_dbus_method_invocation_get_method_name (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_method_name (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL gi::cstring_v get_method_name () noexcept;

// const gchar* /*none*/ g_dbus_method_invocation_get_object_path (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_object_path (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL gi::cstring_v get_object_path () noexcept;

// GVariant* /*none*/ g_dbus_method_invocation_get_parameters (GDBusMethodInvocation* invocation /*none*/);
// ::GVariant* /*none*/ g_dbus_method_invocation_get_parameters (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL GLib::Variant get_parameters () noexcept;

// const GDBusPropertyInfo* /*none,nullable*/ g_dbus_method_invocation_get_property_info (GDBusMethodInvocation* invocation /*none*/);
// const ::GDBusPropertyInfo* /*none,nullable*/ g_dbus_method_invocation_get_property_info (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL Gio::DBusPropertyInfo_Ref get_property_info () noexcept;

// const gchar* /*none*/ g_dbus_method_invocation_get_sender (GDBusMethodInvocation* invocation /*none*/);
// const char* /*none*/ g_dbus_method_invocation_get_sender (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL gi::cstring_v get_sender () noexcept;

// gpointer g_dbus_method_invocation_get_user_data (GDBusMethodInvocation* invocation /*none*/);
// void* g_dbus_method_invocation_get_user_data (::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// void g_dbus_method_invocation_return_dbus_error (GDBusMethodInvocation* invocation /*full*/, const gchar* error_name /*none*/, const gchar* error_message /*none*/);
// void g_dbus_method_invocation_return_dbus_error (::GDBusMethodInvocation* invocation /*full*/, const char* error_name /*none*/, const char* error_message /*none*/);
GI_INLINE_DECL void return_dbus_error (const gi::cstring_v error_name, const gi::cstring_v error_message) noexcept;

// void g_dbus_method_invocation_return_error (GDBusMethodInvocation* invocation /*full*/, GQuark domain, gint code, const gchar* format /*none*/,  ..._ /*none*/);
// void g_dbus_method_invocation_return_error (::GDBusMethodInvocation* invocation /*full*/, ::GQuark domain, gint code, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_method_invocation_return_error_literal (GDBusMethodInvocation* invocation /*full*/, GQuark domain, gint code, const gchar* message /*none*/);
// void g_dbus_method_invocation_return_error_literal (::GDBusMethodInvocation* invocation /*full*/, ::GQuark domain, gint code, const char* message /*none*/);
GI_INLINE_DECL void return_error_literal (::GQuark domain, gint code, const gi::cstring_v message) noexcept;

// void g_dbus_method_invocation_return_error_valist (GDBusMethodInvocation* invocation /*full*/, GQuark domain, gint code, const gchar* format /*none*/, va_list var_args /*none*/);
// void g_dbus_method_invocation_return_error_valist (::GDBusMethodInvocation* invocation /*full*/, ::GQuark domain, gint code, const char* format /*none*/,  var_args /*none*/);
// IGNORE; not introspectable, var_args type  not supported

// void g_dbus_method_invocation_return_gerror (GDBusMethodInvocation* invocation /*full*/, const GError* error /*none*/);
// void g_dbus_method_invocation_return_gerror (::GDBusMethodInvocation* invocation /*full*/, const ::GError* error /*none*/);
GI_INLINE_DECL void return_gerror (const GLib::Error_Ref error) noexcept;

// void g_dbus_method_invocation_return_value (GDBusMethodInvocation* invocation /*full*/, GVariant* parameters /*none,nullable*/);
// void g_dbus_method_invocation_return_value (::GDBusMethodInvocation* invocation /*full*/, ::GVariant* parameters /*none,nullable*/);
GI_INLINE_DECL void return_value (GLib::Variant parameters) noexcept;
GI_INLINE_DECL void return_value () noexcept;

// void g_dbus_method_invocation_return_value_with_unix_fd_list (GDBusMethodInvocation* invocation /*full*/, GVariant* parameters /*none,nullable*/, GUnixFDList* fd_list /*none,nullable*/);
// void g_dbus_method_invocation_return_value_with_unix_fd_list (::GDBusMethodInvocation* invocation /*full*/, ::GVariant* parameters /*none,nullable*/, ::GUnixFDList* fd_list /*none,nullable*/);
GI_INLINE_DECL void return_value_with_unix_fd_list (GLib::Variant parameters, Gio::UnixFDList fd_list) noexcept;
GI_INLINE_DECL void return_value_with_unix_fd_list () noexcept;

// void g_dbus_method_invocation_take_error (GDBusMethodInvocation* invocation /*full*/, GError* error /*full*/);
// void g_dbus_method_invocation_take_error (::GDBusMethodInvocation* invocation /*full*/, ::GError* error /*full*/);
GI_INLINE_DECL void take_error (GLib::Error error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra_def.hpp>)
#include <gio/dbusmethodinvocation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra.hpp>)
#include <gio/dbusmethodinvocation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMethodInvocation : public GI_GIO_DBUSMETHODINVOCATION_BASE
{ typedef GI_GIO_DBUSMETHODINVOCATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMethodInvocation>
{ typedef Gio::DBusMethodInvocation type; }; 

} // namespace repository

} // namespace gi

#endif
