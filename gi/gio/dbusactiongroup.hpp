// AUTO-GENERATED

#ifndef _GI_GIO_DBUSACTIONGROUP_HPP_
#define _GI_GIO_DBUSACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ActionGroup;
class DBusConnection;
class RemoteActionGroup;

class DBusActionGroup;

namespace base {


#define GI_GIO_DBUSACTIONGROUP_BASE base::DBusActionGroupBase
class DBusActionGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusActionGroup BaseObjectType;

DBusActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_action_group_get_type(); } 

GI_INLINE_DECL Gio::ActionGroup interface_ (gi::interface_tag<Gio::ActionGroup>);

GI_INLINE_DECL operator Gio::ActionGroup ();

GI_INLINE_DECL Gio::RemoteActionGroup interface_ (gi::interface_tag<Gio::RemoteActionGroup>);

GI_INLINE_DECL operator Gio::RemoteActionGroup ();

// GDBusActionGroup* /*full*/ g_dbus_action_group_get (GDBusConnection* connection /*none*/, const gchar* bus_name /*none,nullable*/, const gchar* object_path /*none*/);
// ::GDBusActionGroup* /*full*/ g_dbus_action_group_get (::GDBusConnection* connection /*none*/, const char* bus_name /*none,nullable*/, const char* object_path /*none*/);
static GI_INLINE_DECL Gio::DBusActionGroup get (Gio::DBusConnection connection, const gi::cstring_v bus_name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Gio::DBusActionGroup get (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusactiongroup_extra_def.hpp>)
#include <gio/dbusactiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusactiongroup_extra.hpp>)
#include <gio/dbusactiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusActionGroup : public GI_GIO_DBUSACTIONGROUP_BASE
{ typedef GI_GIO_DBUSACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusActionGroup>
{ typedef Gio::DBusActionGroup type; }; 

} // namespace repository

} // namespace gi

#endif
