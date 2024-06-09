// AUTO-GENERATED

#ifndef _GI_GIO_DBUSAUTHOBSERVER_HPP_
#define _GI_GIO_DBUSAUTHOBSERVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Credentials;
class IOStream;

class DBusAuthObserver;

namespace base {


#define GI_GIO_DBUSAUTHOBSERVER_BASE base::DBusAuthObserverBase
class DBusAuthObserverBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusAuthObserver BaseObjectType;

DBusAuthObserverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_auth_observer_get_type(); } 

// GDBusAuthObserver* /*full*/ g_dbus_auth_observer_new ();
// ::GDBusAuthObserver* /*full*/ g_dbus_auth_observer_new ();
static GI_INLINE_DECL Gio::DBusAuthObserver new_ () noexcept;

// gboolean g_dbus_auth_observer_allow_mechanism (GDBusAuthObserver* observer /*none*/, const gchar* mechanism /*none*/);
// gboolean g_dbus_auth_observer_allow_mechanism (::GDBusAuthObserver* observer /*none*/, const char* mechanism /*none*/);
GI_INLINE_DECL bool allow_mechanism (const gi::cstring_v mechanism) noexcept;

// gboolean g_dbus_auth_observer_authorize_authenticated_peer (GDBusAuthObserver* observer /*none*/, GIOStream* stream /*none*/, GCredentials* credentials /*none,nullable*/);
// gboolean g_dbus_auth_observer_authorize_authenticated_peer (::GDBusAuthObserver* observer /*none*/, ::GIOStream* stream /*none*/, ::GCredentials* credentials /*none,nullable*/);
GI_INLINE_DECL bool authorize_authenticated_peer (Gio::IOStream stream, Gio::Credentials credentials) noexcept;
GI_INLINE_DECL bool authorize_authenticated_peer (Gio::IOStream stream) noexcept;

// (signal) gboolean allow-mechanism (gchar* mechanism /*none*/);
// (signal) gboolean allow-mechanism (char* mechanism /*none*/);
gi::signal_proxy<bool(Gio::DBusAuthObserver, gi::cstring_v mechanism)> signal_allow_mechanism()
{ return gi::signal_proxy<bool(Gio::DBusAuthObserver, gi::cstring_v mechanism)> (*this, "allow-mechanism"); }

// (signal) gboolean authorize-authenticated-peer ( stream /*none*/,  credentials /*none,nullable*/);
// (signal) gboolean authorize-authenticated-peer (::GIOStream* stream /*none*/, ::GCredentials* credentials /*none,nullable*/);
gi::signal_proxy<bool(Gio::DBusAuthObserver, Gio::IOStream stream, Gio::Credentials credentials)> signal_authorize_authenticated_peer()
{ return gi::signal_proxy<bool(Gio::DBusAuthObserver, Gio::IOStream stream, Gio::Credentials credentials)> (*this, "authorize-authenticated-peer"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusauthobserver_extra_def.hpp>)
#include <gio/dbusauthobserver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusauthobserver_extra.hpp>)
#include <gio/dbusauthobserver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusAuthObserver : public GI_GIO_DBUSAUTHOBSERVER_BASE
{ typedef GI_GIO_DBUSAUTHOBSERVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusAuthObserver>
{ typedef Gio::DBusAuthObserver type; }; 

} // namespace repository

} // namespace gi

#endif
