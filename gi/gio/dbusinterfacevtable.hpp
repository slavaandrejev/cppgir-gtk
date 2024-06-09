// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACEVTABLE_HPP_
#define _GI_GIO_DBUSINTERFACEVTABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DBusInterfaceVTable;

namespace base {


#define GI_GIO_DBUSINTERFACEVTABLE_BASE base::DBusInterfaceVTableBase
class DBusInterfaceVTableBase : public gi::detail::CBoxedWrapperBase<DBusInterfaceVTableBase, ::GDBusInterfaceVTable>
{
typedef gi::detail::CBoxedWrapperBase<DBusInterfaceVTableBase, ::GDBusInterfaceVTable> super_type;
public:

DBusInterfaceVTableBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfacevtable_extra_def.hpp>)
#include <gio/dbusinterfacevtable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfacevtable_extra.hpp>)
#include <gio/dbusinterfacevtable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceVTable_Ref;

class DBusInterfaceVTable : public gi::detail::CBoxedWrapper<DBusInterfaceVTable, ::GDBusInterfaceVTable, GI_GIO_DBUSINTERFACEVTABLE_BASE, DBusInterfaceVTable_Ref>
{ typedef gi::detail::CBoxedWrapper<DBusInterfaceVTable, ::GDBusInterfaceVTable, GI_GIO_DBUSINTERFACEVTABLE_BASE, DBusInterfaceVTable_Ref> super_type; using super_type::super_type; };


class DBusInterfaceVTable_Ref : public gi::detail::CBoxedRefWrapper<DBusInterfaceVTable, ::GDBusInterfaceVTable, GI_GIO_DBUSINTERFACEVTABLE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<DBusInterfaceVTable, ::GDBusInterfaceVTable, GI_GIO_DBUSINTERFACEVTABLE_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterfaceVTable>
{ typedef Gio::DBusInterfaceVTable type; }; 

} // namespace repository

} // namespace gi

#endif
