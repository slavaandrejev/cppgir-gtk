// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINFO_HPP_
#define _GI_GIO_DBUSMETHODINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusMethodInfo_Ref;

class DBusMethodInfo;

namespace base {


#define GI_GIO_DBUSMETHODINFO_BASE base::DBusMethodInfoBase
class DBusMethodInfoBase : public gi::detail::GBoxedWrapperBase<DBusMethodInfoBase, ::GDBusMethodInfo>
{
typedef gi::detail::GBoxedWrapperBase<DBusMethodInfoBase, ::GDBusMethodInfo> super_type;
public:

DBusMethodInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_method_info_get_type(); } 

// gint DBusMethodInfo::ref_count (const ::GDBusMethodInfo* obj /*none*/);
// gint DBusMethodInfo::ref_count (const ::GDBusMethodInfo* obj /*none*/);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusMethodInfo::ref_count (::GDBusMethodInfo* obj /*none*/, gint _value);
// void DBusMethodInfo::ref_count (::GDBusMethodInfo* obj /*none*/, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* /*none*/ DBusMethodInfo::name (const ::GDBusMethodInfo* obj /*none*/);
// char* /*none*/ DBusMethodInfo::name (const ::GDBusMethodInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// GDBusMethodInfo* /*full*/ g_dbus_method_info_ref (GDBusMethodInfo* info /*none*/);
// ::GDBusMethodInfo* /*full*/ g_dbus_method_info_ref (::GDBusMethodInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_method_info_unref (GDBusMethodInfo* info /*none*/);
// void g_dbus_method_info_unref (::GDBusMethodInfo* info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinfo_extra_def.hpp>)
#include <gio/dbusmethodinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinfo_extra.hpp>)
#include <gio/dbusmethodinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMethodInfo_Ref;

class DBusMethodInfo : public gi::detail::GBoxedWrapper<DBusMethodInfo, ::GDBusMethodInfo, GI_GIO_DBUSMETHODINFO_BASE, DBusMethodInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<DBusMethodInfo, ::GDBusMethodInfo, GI_GIO_DBUSMETHODINFO_BASE, DBusMethodInfo_Ref> super_type; using super_type::super_type; };


class DBusMethodInfo_Ref : public gi::detail::GBoxedRefWrapper<DBusMethodInfo, ::GDBusMethodInfo, GI_GIO_DBUSMETHODINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DBusMethodInfo, ::GDBusMethodInfo, GI_GIO_DBUSMETHODINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMethodInfo>
{ typedef Gio::DBusMethodInfo type; }; 

} // namespace repository

} // namespace gi

#endif
