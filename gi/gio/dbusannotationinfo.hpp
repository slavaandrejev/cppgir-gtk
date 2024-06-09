// AUTO-GENERATED

#ifndef _GI_GIO_DBUSANNOTATIONINFO_HPP_
#define _GI_GIO_DBUSANNOTATIONINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusAnnotationInfo_Ref;

class DBusAnnotationInfo;

namespace base {


#define GI_GIO_DBUSANNOTATIONINFO_BASE base::DBusAnnotationInfoBase
class DBusAnnotationInfoBase : public gi::detail::GBoxedWrapperBase<DBusAnnotationInfoBase, ::GDBusAnnotationInfo>
{
typedef gi::detail::GBoxedWrapperBase<DBusAnnotationInfoBase, ::GDBusAnnotationInfo> super_type;
public:

DBusAnnotationInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dbus_annotation_info_get_type(); } 

// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj /*none*/);
// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj /*none*/);
GI_INLINE_DECL gint ref_count_ () const noexcept;

//  DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj /*none*/, gint _value);
// void DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj /*none*/, gint _value);
GI_INLINE_DECL void ref_count_ (gint _value) noexcept;

// char* /*none*/ DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj /*none*/);
// char* /*none*/ DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v key_ () const noexcept;

// char* /*none*/ DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj /*none*/);
// char* /*none*/ DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v value_ () const noexcept;

// GDBusAnnotationInfo* /*full*/ g_dbus_annotation_info_ref (GDBusAnnotationInfo* info /*none*/);
// ::GDBusAnnotationInfo* /*full*/ g_dbus_annotation_info_ref (::GDBusAnnotationInfo* info /*none*/);
// IGNORE; marked ignore

// void g_dbus_annotation_info_unref (GDBusAnnotationInfo* info /*none*/);
// void g_dbus_annotation_info_unref (::GDBusAnnotationInfo* info /*none*/);
// IGNORE; marked ignore

// const gchar* /*none,nullable*/ g_dbus_annotation_info_lookup (GDBusAnnotationInfo** annotations /*none,nullable*/, const gchar* name /*none*/);
// const char* /*none,nullable*/ g_dbus_annotation_info_lookup (::GDBusAnnotationInfo** annotations /*none,nullable*/, const char* name /*none*/);
static GI_INLINE_DECL gi::cstring_v lookup (gi::CollectionParameter<gi::ZTSpan, ::GDBusAnnotationInfo*, gi::transfer_none_t> annotations, const gi::cstring_v name) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra_def.hpp>)
#include <gio/dbusannotationinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra.hpp>)
#include <gio/dbusannotationinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusAnnotationInfo_Ref;

class DBusAnnotationInfo : public gi::detail::GBoxedWrapper<DBusAnnotationInfo, ::GDBusAnnotationInfo, GI_GIO_DBUSANNOTATIONINFO_BASE, DBusAnnotationInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<DBusAnnotationInfo, ::GDBusAnnotationInfo, GI_GIO_DBUSANNOTATIONINFO_BASE, DBusAnnotationInfo_Ref> super_type; using super_type::super_type; };


class DBusAnnotationInfo_Ref : public gi::detail::GBoxedRefWrapper<DBusAnnotationInfo, ::GDBusAnnotationInfo, GI_GIO_DBUSANNOTATIONINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DBusAnnotationInfo, ::GDBusAnnotationInfo, GI_GIO_DBUSANNOTATIONINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusAnnotationInfo>
{ typedef Gio::DBusAnnotationInfo type; }; 

} // namespace repository

} // namespace gi

#endif
