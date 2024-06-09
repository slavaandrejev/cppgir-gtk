// AUTO-GENERATED

#ifndef _GI_GIO_DBUSARGINFO_HPP_
#define _GI_GIO_DBUSARGINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusArgInfo_Ref;

class DBusArgInfo;

namespace base {


#define GI_GIO_DBUSARGINFO_BASE base::DBusArgInfoBase
class DBusArgInfoBase : public gi::detail::GBoxedWrapperBase<DBusArgInfoBase, ::GDBusArgInfo>
{
typedef gi::detail::GBoxedWrapperBase<DBusArgInfoBase, ::GDBusArgInfo> super_type;
public:

DBusArgInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_arg_info_get_type(); } 

// gint DBusArgInfo::ref_count (const ::GDBusArgInfo* obj /*none*/);
// gint DBusArgInfo::ref_count (const ::GDBusArgInfo* obj /*none*/);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusArgInfo::ref_count (::GDBusArgInfo* obj /*none*/, gint _value);
// void DBusArgInfo::ref_count (::GDBusArgInfo* obj /*none*/, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* /*none*/ DBusArgInfo::name (const ::GDBusArgInfo* obj /*none*/);
// char* /*none*/ DBusArgInfo::name (const ::GDBusArgInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// char* /*none*/ DBusArgInfo::signature (const ::GDBusArgInfo* obj /*none*/);
// char* /*none*/ DBusArgInfo::signature (const ::GDBusArgInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v signature_ () const noexcept;

// GDBusArgInfo* /*full*/ g_dbus_arg_info_ref (GDBusArgInfo* info /*none*/);
// ::GDBusArgInfo* /*full*/ g_dbus_arg_info_ref (::GDBusArgInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_arg_info_unref (GDBusArgInfo* info /*none*/);
// void g_dbus_arg_info_unref (::GDBusArgInfo* info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusarginfo_extra_def.hpp>)
#include <gio/dbusarginfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusarginfo_extra.hpp>)
#include <gio/dbusarginfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusArgInfo_Ref;

class DBusArgInfo : public gi::detail::GBoxedWrapper<DBusArgInfo, ::GDBusArgInfo, GI_GIO_DBUSARGINFO_BASE, DBusArgInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<DBusArgInfo, ::GDBusArgInfo, GI_GIO_DBUSARGINFO_BASE, DBusArgInfo_Ref> super_type; using super_type::super_type; };


class DBusArgInfo_Ref : public gi::detail::GBoxedRefWrapper<DBusArgInfo, ::GDBusArgInfo, GI_GIO_DBUSARGINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DBusArgInfo, ::GDBusArgInfo, GI_GIO_DBUSARGINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusArgInfo>
{ typedef Gio::DBusArgInfo type; }; 

} // namespace repository

} // namespace gi

#endif
