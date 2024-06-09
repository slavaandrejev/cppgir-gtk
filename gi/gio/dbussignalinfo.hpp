// AUTO-GENERATED

#ifndef _GI_GIO_DBUSSIGNALINFO_HPP_
#define _GI_GIO_DBUSSIGNALINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusSignalInfo_Ref;

class DBusSignalInfo;

namespace base {


#define GI_GIO_DBUSSIGNALINFO_BASE base::DBusSignalInfoBase
class DBusSignalInfoBase : public gi::detail::GBoxedWrapperBase<DBusSignalInfoBase, ::GDBusSignalInfo>
{
typedef gi::detail::GBoxedWrapperBase<DBusSignalInfoBase, ::GDBusSignalInfo> super_type;
public:

DBusSignalInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_signal_info_get_type(); } 

// gint DBusSignalInfo::ref_count (const ::GDBusSignalInfo* obj /*none*/);
// gint DBusSignalInfo::ref_count (const ::GDBusSignalInfo* obj /*none*/);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusSignalInfo::ref_count (::GDBusSignalInfo* obj /*none*/, gint _value);
// void DBusSignalInfo::ref_count (::GDBusSignalInfo* obj /*none*/, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* /*none*/ DBusSignalInfo::name (const ::GDBusSignalInfo* obj /*none*/);
// char* /*none*/ DBusSignalInfo::name (const ::GDBusSignalInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// GDBusSignalInfo* /*full*/ g_dbus_signal_info_ref (GDBusSignalInfo* info /*none*/);
// ::GDBusSignalInfo* /*full*/ g_dbus_signal_info_ref (::GDBusSignalInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_signal_info_unref (GDBusSignalInfo* info /*none*/);
// void g_dbus_signal_info_unref (::GDBusSignalInfo* info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbussignalinfo_extra_def.hpp>)
#include <gio/dbussignalinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbussignalinfo_extra.hpp>)
#include <gio/dbussignalinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusSignalInfo_Ref;

class DBusSignalInfo : public gi::detail::GBoxedWrapper<DBusSignalInfo, ::GDBusSignalInfo, GI_GIO_DBUSSIGNALINFO_BASE, DBusSignalInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<DBusSignalInfo, ::GDBusSignalInfo, GI_GIO_DBUSSIGNALINFO_BASE, DBusSignalInfo_Ref> super_type; using super_type::super_type; };


class DBusSignalInfo_Ref : public gi::detail::GBoxedRefWrapper<DBusSignalInfo, ::GDBusSignalInfo, GI_GIO_DBUSSIGNALINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DBusSignalInfo, ::GDBusSignalInfo, GI_GIO_DBUSSIGNALINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusSignalInfo>
{ typedef Gio::DBusSignalInfo type; }; 

} // namespace repository

} // namespace gi

#endif
