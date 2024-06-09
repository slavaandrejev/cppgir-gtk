// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATION_HPP_
#define _GI_GIO_APPLICATION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ActionGroup;
class ActionMap;
class ApplicationCommandLine;
class Cancellable;
class DBusConnection;
class File;
class Notification;

class Application;

namespace base {


#define GI_GIO_APPLICATION_BASE base::ApplicationBase
class ApplicationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GApplication BaseObjectType;

ApplicationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_application_get_type(); } 

GI_INLINE_DECL Gio::ActionGroup interface_ (gi::interface_tag<Gio::ActionGroup>);

GI_INLINE_DECL operator Gio::ActionGroup ();

GI_INLINE_DECL Gio::ActionMap interface_ (gi::interface_tag<Gio::ActionMap>);

GI_INLINE_DECL operator Gio::ActionMap ();

// GApplication* /*full*/ g_application_new (const gchar* application_id /*none,nullable*/, GApplicationFlags flags);
// ::GApplication* /*full*/ g_application_new (const char* application_id /*none,nullable*/, ::GApplicationFlags flags);
static GI_INLINE_DECL Gio::Application new_ (const gi::cstring_v application_id, Gio::ApplicationFlags flags) noexcept;
static GI_INLINE_DECL Gio::Application new_ (Gio::ApplicationFlags flags) noexcept;

// GApplication* /*none,nullable*/ g_application_get_default ();
// ::GApplication* /*none,nullable*/ g_application_get_default ();
static GI_INLINE_DECL Gio::Application get_default () noexcept;

// gboolean g_application_id_is_valid (const gchar* application_id /*none*/);
// gboolean g_application_id_is_valid (const char* application_id /*none*/);
static GI_INLINE_DECL bool id_is_valid (const gi::cstring_v application_id) noexcept;

// void g_application_activate (GApplication* application /*none*/);
// void g_application_activate (::GApplication* application /*none*/);
GI_INLINE_DECL void activate () noexcept;

// void g_application_add_main_option (GApplication* application /*none*/, const char* long_name /*none*/, char short_name, GOptionFlags flags, GOptionArg arg, const char* description /*none*/, const char* arg_description /*none,nullable*/);
// void g_application_add_main_option (::GApplication* application /*none*/, const char* long_name /*none*/, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description /*none*/, const char* arg_description /*none,nullable*/);
GI_INLINE_DECL void add_main_option (const gi::cstring_v long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const gi::cstring_v description, const gi::cstring_v arg_description) noexcept;
GI_INLINE_DECL void add_main_option (const gi::cstring_v long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const gi::cstring_v description) noexcept;

// void g_application_add_main_option_entries (GApplication* application /*none*/, const GOptionEntry* entries /*none*/);
// void g_application_add_main_option_entries (::GApplication* application /*none*/, const ::GOptionEntry** entries /*none*/);
// SKIP; entries in boxed array not supported (depth 1)

// void g_application_add_option_group (GApplication* application /*none*/, GOptionGroup* group /*full*/);
// void g_application_add_option_group (::GApplication* application /*none*/, ::GOptionGroup* group /*full*/);
GI_INLINE_DECL void add_option_group (GLib::OptionGroup group) noexcept;

// void g_application_bind_busy_property (GApplication* application /*none*/, gpointer object /*none*/, const gchar* property /*none*/);
// void g_application_bind_busy_property (::GApplication* application /*none*/, ::GObject* object /*none*/, const char* property /*none*/);
GI_INLINE_DECL void bind_busy_property (GObject::Object object, const gi::cstring_v property) noexcept;

// const gchar* /*none,nullable*/ g_application_get_application_id (GApplication* application /*none*/);
// const char* /*none,nullable*/ g_application_get_application_id (::GApplication* application /*none*/);
GI_INLINE_DECL gi::cstring_v get_application_id () noexcept;

// GDBusConnection* /*none,nullable*/ g_application_get_dbus_connection (GApplication* application /*none*/);
// ::GDBusConnection* /*none,nullable*/ g_application_get_dbus_connection (::GApplication* application /*none*/);
GI_INLINE_DECL Gio::DBusConnection get_dbus_connection () noexcept;

// const gchar* /*none,nullable*/ g_application_get_dbus_object_path (GApplication* application /*none*/);
// const char* /*none,nullable*/ g_application_get_dbus_object_path (::GApplication* application /*none*/);
GI_INLINE_DECL gi::cstring_v get_dbus_object_path () noexcept;

// GApplicationFlags g_application_get_flags (GApplication* application /*none*/);
// ::GApplicationFlags g_application_get_flags (::GApplication* application /*none*/);
GI_INLINE_DECL Gio::ApplicationFlags get_flags () noexcept;

// guint g_application_get_inactivity_timeout (GApplication* application /*none*/);
// guint g_application_get_inactivity_timeout (::GApplication* application /*none*/);
GI_INLINE_DECL guint get_inactivity_timeout () noexcept;

// gboolean g_application_get_is_busy (GApplication* application /*none*/);
// gboolean g_application_get_is_busy (::GApplication* application /*none*/);
GI_INLINE_DECL bool get_is_busy () noexcept;

// gboolean g_application_get_is_registered (GApplication* application /*none*/);
// gboolean g_application_get_is_registered (::GApplication* application /*none*/);
GI_INLINE_DECL bool get_is_registered () noexcept;

// gboolean g_application_get_is_remote (GApplication* application /*none*/);
// gboolean g_application_get_is_remote (::GApplication* application /*none*/);
GI_INLINE_DECL bool get_is_remote () noexcept;

// const gchar* /*none,nullable*/ g_application_get_resource_base_path (GApplication* application /*none*/);
// const char* /*none,nullable*/ g_application_get_resource_base_path (::GApplication* application /*none*/);
GI_INLINE_DECL gi::cstring_v get_resource_base_path () noexcept;

// void g_application_hold (GApplication* application /*none*/);
// void g_application_hold (::GApplication* application /*none*/);
GI_INLINE_DECL void hold () noexcept;

// void g_application_mark_busy (GApplication* application /*none*/);
// void g_application_mark_busy (::GApplication* application /*none*/);
GI_INLINE_DECL void mark_busy () noexcept;

// void g_application_open (GApplication* application /*none*/, GFile** files /*none*/, gint n_files, const gchar* hint /*none*/);
// void g_application_open (::GApplication* application /*none*/, ::GFile** files /*none*/, gint n_files, const char* hint /*none*/);
GI_INLINE_DECL void open (gi::CollectionParameter<gi::DSpan, ::GFile*, gi::transfer_none_t> files, const gi::cstring_v hint) noexcept;

// void g_application_quit (GApplication* application /*none*/);
// void g_application_quit (::GApplication* application /*none*/);
GI_INLINE_DECL void quit () noexcept;

// gboolean g_application_register (GApplication* application /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_application_register (::GApplication* application /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool register_ (Gio::Cancellable cancellable);
GI_INLINE_DECL bool register_ ();
GI_INLINE_DECL bool register_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool register_ (GLib::Error * _error) noexcept;

// void g_application_release (GApplication* application /*none*/);
// void g_application_release (::GApplication* application /*none*/);
GI_INLINE_DECL void release () noexcept;

// int g_application_run (GApplication* application /*none*/, int argc, char** argv /*none,nullable*/);
// gint g_application_run (::GApplication* application /*none*/, gint argc, char** argv /*none,nullable*/);
GI_INLINE_DECL gint run (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> argv) noexcept;

// void g_application_send_notification (GApplication* application /*none*/, const gchar* id /*none,nullable*/, GNotification* notification /*none*/);
// void g_application_send_notification (::GApplication* application /*none*/, const char* id /*none,nullable*/, ::GNotification* notification /*none*/);
GI_INLINE_DECL void send_notification (const gi::cstring_v id, Gio::Notification notification) noexcept;
GI_INLINE_DECL void send_notification (Gio::Notification notification) noexcept;

// void g_application_set_action_group (GApplication* application /*none*/, GActionGroup* action_group /*none,nullable*/);
// void g_application_set_action_group (::GApplication* application /*none*/, ::GActionGroup* action_group /*none,nullable*/);
// IGNORE; deprecated

// void g_application_set_application_id (GApplication* application /*none*/, const gchar* application_id /*none,nullable*/);
// void g_application_set_application_id (::GApplication* application /*none*/, const char* application_id /*none,nullable*/);
GI_INLINE_DECL void set_application_id (const gi::cstring_v application_id) noexcept;
GI_INLINE_DECL void set_application_id () noexcept;

// void g_application_set_default (GApplication* application /*none,nullable*/);
// void g_application_set_default (::GApplication* application /*none,nullable*/);
GI_INLINE_DECL void set_default () noexcept;

// void g_application_set_flags (GApplication* application /*none*/, GApplicationFlags flags);
// void g_application_set_flags (::GApplication* application /*none*/, ::GApplicationFlags flags);
GI_INLINE_DECL void set_flags (Gio::ApplicationFlags flags) noexcept;

// void g_application_set_inactivity_timeout (GApplication* application /*none*/, guint inactivity_timeout);
// void g_application_set_inactivity_timeout (::GApplication* application /*none*/, guint inactivity_timeout);
GI_INLINE_DECL void set_inactivity_timeout (guint inactivity_timeout) noexcept;

// void g_application_set_option_context_description (GApplication* application /*none*/, const gchar* description /*none,nullable*/);
// void g_application_set_option_context_description (::GApplication* application /*none*/, const char* description /*none,nullable*/);
GI_INLINE_DECL void set_option_context_description (const gi::cstring_v description) noexcept;
GI_INLINE_DECL void set_option_context_description () noexcept;

// void g_application_set_option_context_parameter_string (GApplication* application /*none*/, const gchar* parameter_string /*none,nullable*/);
// void g_application_set_option_context_parameter_string (::GApplication* application /*none*/, const char* parameter_string /*none,nullable*/);
GI_INLINE_DECL void set_option_context_parameter_string (const gi::cstring_v parameter_string) noexcept;
GI_INLINE_DECL void set_option_context_parameter_string () noexcept;

// void g_application_set_option_context_summary (GApplication* application /*none*/, const gchar* summary /*none,nullable*/);
// void g_application_set_option_context_summary (::GApplication* application /*none*/, const char* summary /*none,nullable*/);
GI_INLINE_DECL void set_option_context_summary (const gi::cstring_v summary) noexcept;
GI_INLINE_DECL void set_option_context_summary () noexcept;

// void g_application_set_resource_base_path (GApplication* application /*none*/, const gchar* resource_path /*none,nullable*/);
// void g_application_set_resource_base_path (::GApplication* application /*none*/, const char* resource_path /*none,nullable*/);
GI_INLINE_DECL void set_resource_base_path (const gi::cstring_v resource_path) noexcept;
GI_INLINE_DECL void set_resource_base_path () noexcept;

// void g_application_unbind_busy_property (GApplication* application /*none*/, gpointer object /*none*/, const gchar* property /*none*/);
// void g_application_unbind_busy_property (::GApplication* application /*none*/, ::GObject* object /*none*/, const char* property /*none*/);
GI_INLINE_DECL void unbind_busy_property (GObject::Object object, const gi::cstring_v property) noexcept;

// void g_application_unmark_busy (GApplication* application /*none*/);
// void g_application_unmark_busy (::GApplication* application /*none*/);
GI_INLINE_DECL void unmark_busy () noexcept;

// void g_application_withdraw_notification (GApplication* application /*none*/, const gchar* id /*none*/);
// void g_application_withdraw_notification (::GApplication* application /*none*/, const char* id /*none*/);
GI_INLINE_DECL void withdraw_notification (const gi::cstring_v id) noexcept;

gi::property_proxy_write<Gio::ActionGroup, base::ApplicationBase> property_action_group()
{ return gi::property_proxy_write<Gio::ActionGroup, base::ApplicationBase> (*this, "action-group"); }

gi::property_proxy<gi::cstring, base::ApplicationBase> property_application_id()
{ return gi::property_proxy<gi::cstring, base::ApplicationBase> (*this, "application-id"); }
const gi::property_proxy<gi::cstring, base::ApplicationBase> property_application_id() const
{ return gi::property_proxy<gi::cstring, base::ApplicationBase> (*this, "application-id"); }

gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> property_flags()
{ return gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> (*this, "flags"); }
const gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> property_flags() const
{ return gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> (*this, "flags"); }

gi::property_proxy<guint, base::ApplicationBase> property_inactivity_timeout()
{ return gi::property_proxy<guint, base::ApplicationBase> (*this, "inactivity-timeout"); }
const gi::property_proxy<guint, base::ApplicationBase> property_inactivity_timeout() const
{ return gi::property_proxy<guint, base::ApplicationBase> (*this, "inactivity-timeout"); }

gi::property_proxy<bool, base::ApplicationBase> property_is_busy()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-busy"); }
const gi::property_proxy<bool, base::ApplicationBase> property_is_busy() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-busy"); }

gi::property_proxy<bool, base::ApplicationBase> property_is_registered()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-registered"); }
const gi::property_proxy<bool, base::ApplicationBase> property_is_registered() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-registered"); }

gi::property_proxy<bool, base::ApplicationBase> property_is_remote()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-remote"); }
const gi::property_proxy<bool, base::ApplicationBase> property_is_remote() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-remote"); }

gi::property_proxy<gi::cstring, base::ApplicationBase> property_resource_base_path()
{ return gi::property_proxy<gi::cstring, base::ApplicationBase> (*this, "resource-base-path"); }
const gi::property_proxy<gi::cstring, base::ApplicationBase> property_resource_base_path() const
{ return gi::property_proxy<gi::cstring, base::ApplicationBase> (*this, "resource-base-path"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gio::Application)> signal_activate()
{ return gi::signal_proxy<void(Gio::Application)> (*this, "activate"); }

// (signal) gint command-line ( command_line /*none*/);
// (signal) gint command-line (::GApplicationCommandLine* command_line /*none*/);
gi::signal_proxy<gint(Gio::Application, Gio::ApplicationCommandLine command_line)> signal_command_line()
{ return gi::signal_proxy<gint(Gio::Application, Gio::ApplicationCommandLine command_line)> (*this, "command-line"); }

// (signal) gint handle-local-options ( options /*none*/);
// (signal) gint handle-local-options (::GVariantDict* options /*none*/);
gi::signal_proxy<gint(Gio::Application, GLib::VariantDict_Ref options)> signal_handle_local_options()
{ return gi::signal_proxy<gint(Gio::Application, GLib::VariantDict_Ref options)> (*this, "handle-local-options"); }

// (signal) gboolean name-lost ();
// (signal) gboolean name-lost ();
gi::signal_proxy<bool(Gio::Application)> signal_name_lost()
{ return gi::signal_proxy<bool(Gio::Application)> (*this, "name-lost"); }

// (signal) void open (gpointer files /*none*/, gint n_files, gchar* hint /*none*/);
// (signal) void open (::GFile** files /*none*/, gint n_files, char* hint /*none*/);
// SKIP; glib:signal in array parameter not supported

// (signal) void shutdown ();
// (signal) void shutdown ();
gi::signal_proxy<void(Gio::Application)> signal_shutdown()
{ return gi::signal_proxy<void(Gio::Application)> (*this, "shutdown"); }

// (signal) void startup ();
// (signal) void startup ();
gi::signal_proxy<void(Gio::Application)> signal_startup()
{ return gi::signal_proxy<void(Gio::Application)> (*this, "startup"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/application_extra_def.hpp>)
#include <gio/application_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/application_extra.hpp>)
#include <gio/application_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Application : public GI_GIO_APPLICATION_BASE
{ typedef GI_GIO_APPLICATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GApplication>
{ typedef Gio::Application type; }; 

} // namespace repository

} // namespace gi

#include "actiongroup.hpp"
#include "actionmap.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ApplicationClassDef
{
typedef ApplicationClassDef self;
public:
typedef Gio::Application instance_type;
typedef ::GApplicationClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;
using GI_MEMBER_CHECK_CONFLICT(add_platform_data) = self;
using GI_MEMBER_CHECK_CONFLICT(after_emit) = self;
using GI_MEMBER_CHECK_CONFLICT(before_emit) = self;
using GI_MEMBER_CHECK_CONFLICT(command_line) = self;
using GI_MEMBER_CHECK_CONFLICT(dbus_register) = self;
using GI_MEMBER_CHECK_CONFLICT(dbus_unregister) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_local_options) = self;
using GI_MEMBER_CHECK_CONFLICT(local_command_line) = self;
using GI_MEMBER_CHECK_CONFLICT(name_lost) = self;
using GI_MEMBER_CHECK_CONFLICT(open) = self;
using GI_MEMBER_CHECK_CONFLICT(quit_mainloop) = self;
using GI_MEMBER_CHECK_CONFLICT(run_mainloop) = self;
using GI_MEMBER_CHECK_CONFLICT(shutdown) = self;
using GI_MEMBER_CHECK_CONFLICT(startup) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ApplicationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Application::activate (GApplication* application /*none*/);
// void Application::activate (::GApplication* application /*none*/);
virtual void activate_ () noexcept = 0;

// void Application::add_platform_data (GApplication* application /*none*/, GVariantBuilder* builder /*none*/);
// void Application::add_platform_data (::GApplication* application /*none*/, ::GVariantBuilder* builder /*none*/);
virtual void add_platform_data_ (GLib::VariantBuilder_Ref builder) noexcept = 0;

// void Application::after_emit (GApplication* application /*none*/, GVariant* platform_data /*none*/);
// void Application::after_emit (::GApplication* application /*none*/, ::GVariant* platform_data /*none*/);
virtual void after_emit_ (GLib::Variant platform_data) noexcept = 0;

// void Application::before_emit (GApplication* application /*none*/, GVariant* platform_data /*none*/);
// void Application::before_emit (::GApplication* application /*none*/, ::GVariant* platform_data /*none*/);
virtual void before_emit_ (GLib::Variant platform_data) noexcept = 0;

// int Application::command_line (GApplication* application /*none*/, GApplicationCommandLine* command_line /*none*/);
// gint Application::command_line (::GApplication* application /*none*/, ::GApplicationCommandLine* command_line /*none*/);
virtual gint command_line_ (Gio::ApplicationCommandLine command_line) noexcept = 0;

// gboolean Application::dbus_register (GApplication* application /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GError ** error);
// gboolean Application::dbus_register (::GApplication* application /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/, GError ** error);
virtual bool dbus_register_ (Gio::DBusConnection connection, const gi::cstring_v object_path, GLib::Error * _error) = 0;

// void Application::dbus_unregister (GApplication* application /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// void Application::dbus_unregister (::GApplication* application /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
virtual void dbus_unregister_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept = 0;

// gint Application::handle_local_options (GApplication* application /*none*/, GVariantDict* options /*none*/);
// gint Application::handle_local_options (::GApplication* application /*none*/, ::GVariantDict* options /*none*/);
virtual gint handle_local_options_ (GLib::VariantDict_Ref options) noexcept = 0;

// gboolean Application::local_command_line (GApplication* application /*none*/, gchar*** arguments /*full,inout*/, int* exit_status);
// gboolean Application::local_command_line (::GApplication* application /*none*/, char*** arguments /*full,inout*/, gint* exit_status);
virtual bool local_command_line_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & arguments, gint & exit_status) noexcept = 0;

// gboolean Application::name_lost (GApplication* application /*none*/);
// gboolean Application::name_lost (::GApplication* application /*none*/);
virtual bool name_lost_ () noexcept = 0;

// void Application::open (GApplication* application /*none*/, GFile** files /*none*/, gint n_files, const gchar* hint /*none*/);
// void Application::open (::GApplication* application /*none*/, ::GFile** files /*none*/, gint n_files, const char* hint /*none*/);
virtual void open_ (gi::Collection<gi::DSpan, ::GFile*, gi::transfer_none_t> files, const gi::cstring_v hint) noexcept = 0;

// void Application::quit_mainloop (GApplication* application /*none*/);
// void Application::quit_mainloop (::GApplication* application /*none*/);
virtual void quit_mainloop_ () noexcept = 0;

// void Application::run_mainloop (GApplication* application /*none*/);
// void Application::run_mainloop (::GApplication* application /*none*/);
virtual void run_mainloop_ () noexcept = 0;

// void Application::shutdown (GApplication* application /*none*/);
// void Application::shutdown (::GApplication* application /*none*/);
virtual void shutdown_ () noexcept = 0;

// void Application::startup (GApplication* application /*none*/);
// void Application::startup (::GApplication* application /*none*/);
virtual void startup_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ApplicationClass: public detail::ClassTemplate<Gio::impl::internal::ApplicationClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl>
{
friend class internal::ApplicationClassDef;
typedef ApplicationClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ApplicationClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ActionGroupInterfaceClassImpl GActionGroupInterface_type;
typedef Gio::impl::internal::ActionMapInterfaceClassImpl GActionMapInterface_type;


// void Application::activate (GApplication* application /*none*/);
// void Application::activate (::GApplication* application /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;

// void Application::add_platform_data (GApplication* application /*none*/, GVariantBuilder* builder /*none*/);
// void Application::add_platform_data (::GApplication* application /*none*/, ::GVariantBuilder* builder /*none*/);
GI_INLINE_DECL void add_platform_data_ (GLib::VariantBuilder_Ref builder) noexcept override;

// void Application::after_emit (GApplication* application /*none*/, GVariant* platform_data /*none*/);
// void Application::after_emit (::GApplication* application /*none*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void after_emit_ (GLib::Variant platform_data) noexcept override;

// void Application::before_emit (GApplication* application /*none*/, GVariant* platform_data /*none*/);
// void Application::before_emit (::GApplication* application /*none*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void before_emit_ (GLib::Variant platform_data) noexcept override;

// int Application::command_line (GApplication* application /*none*/, GApplicationCommandLine* command_line /*none*/);
// gint Application::command_line (::GApplication* application /*none*/, ::GApplicationCommandLine* command_line /*none*/);
GI_INLINE_DECL gint command_line_ (Gio::ApplicationCommandLine command_line) noexcept override;

// gboolean Application::dbus_register (GApplication* application /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GError ** error);
// gboolean Application::dbus_register (::GApplication* application /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/, GError ** error);
GI_INLINE_DECL bool dbus_register_ (Gio::DBusConnection connection, const gi::cstring_v object_path, GLib::Error * _error) override;

// void Application::dbus_unregister (GApplication* application /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// void Application::dbus_unregister (::GApplication* application /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
GI_INLINE_DECL void dbus_unregister_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept override;

// gint Application::handle_local_options (GApplication* application /*none*/, GVariantDict* options /*none*/);
// gint Application::handle_local_options (::GApplication* application /*none*/, ::GVariantDict* options /*none*/);
GI_INLINE_DECL gint handle_local_options_ (GLib::VariantDict_Ref options) noexcept override;

// gboolean Application::local_command_line (GApplication* application /*none*/, gchar*** arguments /*full,inout*/, int* exit_status);
// gboolean Application::local_command_line (::GApplication* application /*none*/, char*** arguments /*full,inout*/, gint* exit_status);
GI_INLINE_DECL bool local_command_line_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & arguments, gint & exit_status) noexcept override;

// gboolean Application::name_lost (GApplication* application /*none*/);
// gboolean Application::name_lost (::GApplication* application /*none*/);
GI_INLINE_DECL bool name_lost_ () noexcept override;

// void Application::open (GApplication* application /*none*/, GFile** files /*none*/, gint n_files, const gchar* hint /*none*/);
// void Application::open (::GApplication* application /*none*/, ::GFile** files /*none*/, gint n_files, const char* hint /*none*/);
GI_INLINE_DECL void open_ (gi::Collection<gi::DSpan, ::GFile*, gi::transfer_none_t> files, const gi::cstring_v hint) noexcept override;

// void Application::quit_mainloop (GApplication* application /*none*/);
// void Application::quit_mainloop (::GApplication* application /*none*/);
GI_INLINE_DECL void quit_mainloop_ () noexcept override;

// void Application::run_mainloop (GApplication* application /*none*/);
// void Application::run_mainloop (::GApplication* application /*none*/);
GI_INLINE_DECL void run_mainloop_ () noexcept override;

// void Application::shutdown (GApplication* application /*none*/);
// void Application::shutdown (::GApplication* application /*none*/);
GI_INLINE_DECL void shutdown_ () noexcept override;

// void Application::startup (GApplication* application /*none*/);
// void Application::startup (::GApplication* application /*none*/);
GI_INLINE_DECL void startup_ () noexcept override;


};


struct ApplicationClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ApplicationClass, activate)
  GI_MEMBER_DEFINE(ApplicationClass, add_platform_data)
  GI_MEMBER_DEFINE(ApplicationClass, after_emit)
  GI_MEMBER_DEFINE(ApplicationClass, before_emit)
  GI_MEMBER_DEFINE(ApplicationClass, command_line)
  GI_MEMBER_DEFINE(ApplicationClass, dbus_register)
  GI_MEMBER_DEFINE(ApplicationClass, dbus_unregister)
  GI_MEMBER_DEFINE(ApplicationClass, handle_local_options)
  GI_MEMBER_DEFINE(ApplicationClass, local_command_line)
  GI_MEMBER_DEFINE(ApplicationClass, name_lost)
  GI_MEMBER_DEFINE(ApplicationClass, open)
  GI_MEMBER_DEFINE(ApplicationClass, quit_mainloop)
  GI_MEMBER_DEFINE(ApplicationClass, run_mainloop)
  GI_MEMBER_DEFINE(ApplicationClass, shutdown)
  GI_MEMBER_DEFINE(ApplicationClass, startup)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_platform_data),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, after_emit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, before_emit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, command_line),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, dbus_register),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, dbus_unregister),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_local_options),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, local_command_line),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, name_lost),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, open),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, quit_mainloop),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, run_mainloop),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, shutdown),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, startup)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ApplicationImpl = detail::ObjectImpl<Application, internal::ApplicationClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
