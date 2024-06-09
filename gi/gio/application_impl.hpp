// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATION_IMPL_HPP_
#define _GI_GIO_APPLICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ActionGroup ApplicationBase::interface_ (gi::interface_tag<Gio::ActionGroup>)
{ return gi::wrap ((Gio::ActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ApplicationBase::operator Gio::ActionGroup ()
{ return interface_ (gi::interface_tag<Gio::ActionGroup>()); }

Gio::ActionMap ApplicationBase::interface_ (gi::interface_tag<Gio::ActionMap>)
{ return gi::wrap ((Gio::ActionMap::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ApplicationBase::operator Gio::ActionMap ()
{ return interface_ (gi::interface_tag<Gio::ActionMap>()); }

// GApplication* /*full*/ g_application_new (const gchar* application_id /*none,nullable*/, GApplicationFlags flags);
// ::GApplication* /*full*/ g_application_new (const char* application_id /*none,nullable*/, ::GApplicationFlags flags);
Gio::Application base::ApplicationBase::new_ (const gi::cstring_v application_id, Gio::ApplicationFlags flags) noexcept
{
  typedef ::GApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Application base::ApplicationBase::new_ (Gio::ApplicationFlags flags) noexcept
{
  typedef ::GApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GApplication* /*none,nullable*/ g_application_get_default ();
// ::GApplication* /*none,nullable*/ g_application_get_default ();
Gio::Application base::ApplicationBase::get_default () noexcept
{
  typedef ::GApplication* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_application_id_is_valid (const gchar* application_id /*none*/);
// gboolean g_application_id_is_valid (const char* application_id /*none*/);
bool base::ApplicationBase::id_is_valid (const gi::cstring_v application_id) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* application_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_id_is_valid;
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c));
  return _temp_ret;
}

// void g_application_activate (GApplication* application /*none*/);
// void g_application_activate (::GApplication* application /*none*/);
void base::ApplicationBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_activate;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_add_main_option (GApplication* application /*none*/, const char* long_name /*none*/, char short_name, GOptionFlags flags, GOptionArg arg, const char* description /*none*/, const char* arg_description /*none,nullable*/);
// void g_application_add_main_option (::GApplication* application /*none*/, const char* long_name /*none*/, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description /*none*/, const char* arg_description /*none,nullable*/);
void base::ApplicationBase::add_main_option (const gi::cstring_v long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const gi::cstring_v description, const gi::cstring_v arg_description) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* long_name, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description, const char* arg_description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_add_main_option;
  auto arg_description_to_c = gi::unwrap (arg_description, gi::transfer_none);
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  auto arg_to_c = gi::unwrap (arg);
  auto flags_to_c = gi::unwrap (flags);
  auto short_name_to_c = short_name;
  auto long_name_to_c = gi::unwrap (long_name, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (long_name_to_c), (gchar) (short_name_to_c), (::GOptionFlags) (flags_to_c), (::GOptionArg) (arg_to_c), (const char*) (description_to_c), (const char*) (arg_description_to_c));
}
void base::ApplicationBase::add_main_option (const gi::cstring_v long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* long_name, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description, const char* arg_description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_add_main_option;
  auto arg_description_to_c = nullptr;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  auto arg_to_c = gi::unwrap (arg);
  auto flags_to_c = gi::unwrap (flags);
  auto short_name_to_c = short_name;
  auto long_name_to_c = gi::unwrap (long_name, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (long_name_to_c), (gchar) (short_name_to_c), (::GOptionFlags) (flags_to_c), (::GOptionArg) (arg_to_c), (const char*) (description_to_c), (const char*) (arg_description_to_c));
}

// void g_application_add_main_option_entries (GApplication* application /*none*/, const GOptionEntry* entries /*none*/);
// void g_application_add_main_option_entries (::GApplication* application /*none*/, const ::GOptionEntry** entries /*none*/);
// SKIP; entries in boxed array not supported (depth 1)

// void g_application_add_option_group (GApplication* application /*none*/, GOptionGroup* group /*full*/);
// void g_application_add_option_group (::GApplication* application /*none*/, ::GOptionGroup* group /*full*/);
void base::ApplicationBase::add_option_group (GLib::OptionGroup group) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GOptionGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_add_option_group;
  auto group_to_c = gi::unwrap (std::move(group), gi::transfer_full);
  call_wrap_v ((::GApplication*) (gobj_()), (::GOptionGroup*) (group_to_c));
}

// void g_application_bind_busy_property (GApplication* application /*none*/, gpointer object /*none*/, const gchar* property /*none*/);
// void g_application_bind_busy_property (::GApplication* application /*none*/, ::GObject* object /*none*/, const char* property /*none*/);
void base::ApplicationBase::bind_busy_property (GObject::Object object, const gi::cstring_v property) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GObject* object, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_bind_busy_property;
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (::GObject*) (object_to_c), (const char*) (property_to_c));
}

// const gchar* /*none,nullable*/ g_application_get_application_id (GApplication* application /*none*/);
// const char* /*none,nullable*/ g_application_get_application_id (::GApplication* application /*none*/);
gi::cstring_v base::ApplicationBase::get_application_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_application_id;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDBusConnection* /*none,nullable*/ g_application_get_dbus_connection (GApplication* application /*none*/);
// ::GDBusConnection* /*none,nullable*/ g_application_get_dbus_connection (::GApplication* application /*none*/);
Gio::DBusConnection base::ApplicationBase::get_dbus_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_dbus_connection;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* /*none,nullable*/ g_application_get_dbus_object_path (GApplication* application /*none*/);
// const char* /*none,nullable*/ g_application_get_dbus_object_path (::GApplication* application /*none*/);
gi::cstring_v base::ApplicationBase::get_dbus_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_dbus_object_path;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GApplicationFlags g_application_get_flags (GApplication* application /*none*/);
// ::GApplicationFlags g_application_get_flags (::GApplication* application /*none*/);
Gio::ApplicationFlags base::ApplicationBase::get_flags () noexcept
{
  typedef ::GApplicationFlags (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_flags;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_application_get_inactivity_timeout (GApplication* application /*none*/);
// guint g_application_get_inactivity_timeout (::GApplication* application /*none*/);
guint base::ApplicationBase::get_inactivity_timeout () noexcept
{
  typedef guint (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_inactivity_timeout;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_get_is_busy (GApplication* application /*none*/);
// gboolean g_application_get_is_busy (::GApplication* application /*none*/);
bool base::ApplicationBase::get_is_busy () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_is_busy;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_get_is_registered (GApplication* application /*none*/);
// gboolean g_application_get_is_registered (::GApplication* application /*none*/);
bool base::ApplicationBase::get_is_registered () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_is_registered;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_get_is_remote (GApplication* application /*none*/);
// gboolean g_application_get_is_remote (::GApplication* application /*none*/);
bool base::ApplicationBase::get_is_remote () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_is_remote;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_application_get_resource_base_path (GApplication* application /*none*/);
// const char* /*none,nullable*/ g_application_get_resource_base_path (::GApplication* application /*none*/);
gi::cstring_v base::ApplicationBase::get_resource_base_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_get_resource_base_path;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_application_hold (GApplication* application /*none*/);
// void g_application_hold (::GApplication* application /*none*/);
void base::ApplicationBase::hold () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_hold;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_mark_busy (GApplication* application /*none*/);
// void g_application_mark_busy (::GApplication* application /*none*/);
void base::ApplicationBase::mark_busy () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_mark_busy;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_open (GApplication* application /*none*/, GFile** files /*none*/, gint n_files, const gchar* hint /*none*/);
// void g_application_open (::GApplication* application /*none*/, ::GFile** files /*none*/, gint n_files, const char* hint /*none*/);
void base::ApplicationBase::open (gi::CollectionParameter<gi::DSpan, ::GFile*, gi::transfer_none_t> files, const gi::cstring_v hint) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_open;
  auto hint_to_c = gi::unwrap (hint, gi::transfer_none);
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  call_wrap_v ((::GApplication*) (gobj_()), (::GFile**) (files_to_c), (gint) (files._size()), (const char*) (hint_to_c));
}

// void g_application_quit (GApplication* application /*none*/);
// void g_application_quit (::GApplication* application /*none*/);
void base::ApplicationBase::quit () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_quit;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// gboolean g_application_register (GApplication* application /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_application_register (::GApplication* application /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::ApplicationBase::register_ (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_register;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ApplicationBase::register_ ()
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_register;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ApplicationBase::register_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_register;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::ApplicationBase::register_ (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_register;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_application_release (GApplication* application /*none*/);
// void g_application_release (::GApplication* application /*none*/);
void base::ApplicationBase::release () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_release;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// int g_application_run (GApplication* application /*none*/, int argc, char** argv /*none,nullable*/);
// gint g_application_run (::GApplication* application /*none*/, gint argc, char** argv /*none,nullable*/);
gint base::ApplicationBase::run (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> argv) noexcept
{
  typedef gint (*call_wrap_t) (::GApplication* application, gint argc, char** argv);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_run;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (gint) (argv._size()), (char**) (argv_to_c));
  return _temp_ret;
}

// void g_application_send_notification (GApplication* application /*none*/, const gchar* id /*none,nullable*/, GNotification* notification /*none*/);
// void g_application_send_notification (::GApplication* application /*none*/, const char* id /*none,nullable*/, ::GNotification* notification /*none*/);
void base::ApplicationBase::send_notification (const gi::cstring_v id, Gio::Notification notification) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* id, ::GNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_send_notification;
  auto notification_to_c = gi::unwrap (notification, gi::transfer_none);
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (id_to_c), (::GNotification*) (notification_to_c));
}
void base::ApplicationBase::send_notification (Gio::Notification notification) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* id, ::GNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_send_notification;
  auto notification_to_c = gi::unwrap (notification, gi::transfer_none);
  auto id_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (id_to_c), (::GNotification*) (notification_to_c));
}

// void g_application_set_action_group (GApplication* application /*none*/, GActionGroup* action_group /*none,nullable*/);
// void g_application_set_action_group (::GApplication* application /*none*/, ::GActionGroup* action_group /*none,nullable*/);
// IGNORE; deprecated

// void g_application_set_application_id (GApplication* application /*none*/, const gchar* application_id /*none,nullable*/);
// void g_application_set_application_id (::GApplication* application /*none*/, const char* application_id /*none,nullable*/);
void base::ApplicationBase::set_application_id (const gi::cstring_v application_id) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* application_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_application_id;
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (application_id_to_c));
}
void base::ApplicationBase::set_application_id () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* application_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_application_id;
  auto application_id_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (application_id_to_c));
}

// void g_application_set_default (GApplication* application /*none,nullable*/);
// void g_application_set_default (::GApplication* application /*none,nullable*/);
void base::ApplicationBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_default;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_set_flags (GApplication* application /*none*/, GApplicationFlags flags);
// void g_application_set_flags (::GApplication* application /*none*/, ::GApplicationFlags flags);
void base::ApplicationBase::set_flags (Gio::ApplicationFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GApplication*) (gobj_()), (::GApplicationFlags) (flags_to_c));
}

// void g_application_set_inactivity_timeout (GApplication* application /*none*/, guint inactivity_timeout);
// void g_application_set_inactivity_timeout (::GApplication* application /*none*/, guint inactivity_timeout);
void base::ApplicationBase::set_inactivity_timeout (guint inactivity_timeout) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, guint inactivity_timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_inactivity_timeout;
  auto inactivity_timeout_to_c = inactivity_timeout;
  call_wrap_v ((::GApplication*) (gobj_()), (guint) (inactivity_timeout_to_c));
}

// void g_application_set_option_context_description (GApplication* application /*none*/, const gchar* description /*none,nullable*/);
// void g_application_set_option_context_description (::GApplication* application /*none*/, const char* description /*none,nullable*/);
void base::ApplicationBase::set_option_context_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_option_context_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (description_to_c));
}
void base::ApplicationBase::set_option_context_description () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_option_context_description;
  auto description_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (description_to_c));
}

// void g_application_set_option_context_parameter_string (GApplication* application /*none*/, const gchar* parameter_string /*none,nullable*/);
// void g_application_set_option_context_parameter_string (::GApplication* application /*none*/, const char* parameter_string /*none,nullable*/);
void base::ApplicationBase::set_option_context_parameter_string (const gi::cstring_v parameter_string) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* parameter_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_option_context_parameter_string;
  auto parameter_string_to_c = gi::unwrap (parameter_string, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (parameter_string_to_c));
}
void base::ApplicationBase::set_option_context_parameter_string () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* parameter_string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_option_context_parameter_string;
  auto parameter_string_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (parameter_string_to_c));
}

// void g_application_set_option_context_summary (GApplication* application /*none*/, const gchar* summary /*none,nullable*/);
// void g_application_set_option_context_summary (::GApplication* application /*none*/, const char* summary /*none,nullable*/);
void base::ApplicationBase::set_option_context_summary (const gi::cstring_v summary) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_option_context_summary;
  auto summary_to_c = gi::unwrap (summary, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (summary_to_c));
}
void base::ApplicationBase::set_option_context_summary () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_option_context_summary;
  auto summary_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (summary_to_c));
}

// void g_application_set_resource_base_path (GApplication* application /*none*/, const gchar* resource_path /*none,nullable*/);
// void g_application_set_resource_base_path (::GApplication* application /*none*/, const char* resource_path /*none,nullable*/);
void base::ApplicationBase::set_resource_base_path (const gi::cstring_v resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_resource_base_path;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::ApplicationBase::set_resource_base_path () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_set_resource_base_path;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (resource_path_to_c));
}

// void g_application_unbind_busy_property (GApplication* application /*none*/, gpointer object /*none*/, const gchar* property /*none*/);
// void g_application_unbind_busy_property (::GApplication* application /*none*/, ::GObject* object /*none*/, const char* property /*none*/);
void base::ApplicationBase::unbind_busy_property (GObject::Object object, const gi::cstring_v property) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GObject* object, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_unbind_busy_property;
  auto property_to_c = gi::unwrap (property, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (::GObject*) (object_to_c), (const char*) (property_to_c));
}

// void g_application_unmark_busy (GApplication* application /*none*/);
// void g_application_unmark_busy (::GApplication* application /*none*/);
void base::ApplicationBase::unmark_busy () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_unmark_busy;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_withdraw_notification (GApplication* application /*none*/, const gchar* id /*none*/);
// void g_application_withdraw_notification (::GApplication* application /*none*/, const char* id /*none*/);
void base::ApplicationBase::withdraw_notification (const gi::cstring_v id) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_application_withdraw_notification;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (id_to_c));
}









} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/application_extra_def_impl.hpp>)
#include <gio/application_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/application_extra_impl.hpp>)
#include <gio/application_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ApplicationClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GApplicationClass *methods = (::GApplicationClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
  if (init_data.add_platform_data) methods->add_platform_data = (decltype (methods->add_platform_data)) detail::method_wrapper<self, void (*) (GLib::VariantBuilder_Ref builder), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::add_platform_data_>;
  if (init_data.after_emit) methods->after_emit = (decltype (methods->after_emit)) detail::method_wrapper<self, void (*) (GLib::Variant platform_data), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::after_emit_>;
  if (init_data.before_emit) methods->before_emit = (decltype (methods->before_emit)) detail::method_wrapper<self, void (*) (GLib::Variant platform_data), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::before_emit_>;
  if (init_data.command_line) methods->command_line = (decltype (methods->command_line)) detail::method_wrapper<self, gint (*) (Gio::ApplicationCommandLine command_line), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::command_line_>;
  if (init_data.dbus_register) methods->dbus_register = (decltype (methods->dbus_register)) detail::method_wrapper<self, bool (*) (Gio::DBusConnection connection, const gi::cstring_v object_path, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::dbus_register_>;
  if (init_data.dbus_unregister) methods->dbus_unregister = (decltype (methods->dbus_unregister)) detail::method_wrapper<self, void (*) (Gio::DBusConnection connection, const gi::cstring_v object_path), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::dbus_unregister_>;
  if (init_data.handle_local_options) methods->handle_local_options = (decltype (methods->handle_local_options)) detail::method_wrapper<self, gint (*) (GLib::VariantDict_Ref options), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_local_options_>;
  if (init_data.local_command_line) methods->local_command_line = (decltype (methods->local_command_line)) detail::method_wrapper<self, bool (*) (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & arguments, gint & exit_status), gi::transfer_none_t, std::tuple<detail::arg_info<gi::transfer_full_t, true>, gi::transfer_full_t>>::wrapper<&self::local_command_line_>;
  if (init_data.name_lost) methods->name_lost = (decltype (methods->name_lost)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::name_lost_>;
  if (init_data.open) methods->open = (decltype (methods->open)) detail::method_wrapper<self, void (*) (gi::Collection<gi::DSpan, ::GFile*, gi::transfer_none_t> files, const gi::cstring_v hint), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0, 1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>>, void  (::GFile** files, gint n_files, const char* hint)>::wrapper<&self::open_>;
  if (init_data.quit_mainloop) methods->quit_mainloop = (decltype (methods->quit_mainloop)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::quit_mainloop_>;
  if (init_data.run_mainloop) methods->run_mainloop = (decltype (methods->run_mainloop)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::run_mainloop_>;
  if (init_data.shutdown) methods->shutdown = (decltype (methods->shutdown)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::shutdown_>;
  if (init_data.startup) methods->startup = (decltype (methods->startup)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::startup_>;
}

// void Application::activate (GApplication* application /*none*/);
// void Application::activate (::GApplication* application /*none*/);
void ApplicationClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::add_platform_data (GApplication* application /*none*/, GVariantBuilder* builder /*none*/);
// void Application::add_platform_data (::GApplication* application /*none*/, ::GVariantBuilder* builder /*none*/);
void ApplicationClass::add_platform_data_ (GLib::VariantBuilder_Ref builder) noexcept
{
  if (!get_struct_()->add_platform_data) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application, ::GVariantBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_platform_data;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (::GVariantBuilder*) (builder_to_c));
}

// void Application::after_emit (GApplication* application /*none*/, GVariant* platform_data /*none*/);
// void Application::after_emit (::GApplication* application /*none*/, ::GVariant* platform_data /*none*/);
void ApplicationClass::after_emit_ (GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->after_emit) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->after_emit;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (::GVariant*) (platform_data_to_c));
}

// void Application::before_emit (GApplication* application /*none*/, GVariant* platform_data /*none*/);
// void Application::before_emit (::GApplication* application /*none*/, ::GVariant* platform_data /*none*/);
void ApplicationClass::before_emit_ (GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->before_emit) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->before_emit;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (::GVariant*) (platform_data_to_c));
}

// int Application::command_line (GApplication* application /*none*/, GApplicationCommandLine* command_line /*none*/);
// gint Application::command_line (::GApplication* application /*none*/, ::GApplicationCommandLine* command_line /*none*/);
gint ApplicationClass::command_line_ (Gio::ApplicationCommandLine command_line) noexcept
{
  if (!get_struct_()->command_line) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GApplication* application, ::GApplicationCommandLine* command_line);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->command_line;
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GApplicationCommandLine*) (command_line_to_c));
  return _temp_ret;
}

// gboolean Application::dbus_register (GApplication* application /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/, GError ** error);
// gboolean Application::dbus_register (::GApplication* application /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/, GError ** error);
bool ApplicationClass::dbus_register_ (Gio::DBusConnection connection, const gi::cstring_v object_path, GLib::Error * _error)
{
  if (!get_struct_()->dbus_register) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GDBusConnection* connection, const char* object_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dbus_register;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Application::dbus_unregister (GApplication* application /*none*/, GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// void Application::dbus_unregister (::GApplication* application /*none*/, ::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
void ApplicationClass::dbus_unregister_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept
{
  if (!get_struct_()->dbus_unregister) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application, ::GDBusConnection* connection, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dbus_unregister;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GApplication*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c));
}

// gint Application::handle_local_options (GApplication* application /*none*/, GVariantDict* options /*none*/);
// gint Application::handle_local_options (::GApplication* application /*none*/, ::GVariantDict* options /*none*/);
gint ApplicationClass::handle_local_options_ (GLib::VariantDict_Ref options) noexcept
{
  if (!get_struct_()->handle_local_options) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GApplication* application, ::GVariantDict* options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_local_options;
  auto options_to_c = gi::unwrap (options, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GVariantDict*) (options_to_c));
  return _temp_ret;
}

// gboolean Application::local_command_line (GApplication* application /*none*/, gchar*** arguments /*full,inout*/, int* exit_status);
// gboolean Application::local_command_line (::GApplication* application /*none*/, char*** arguments /*full,inout*/, gint* exit_status);
bool ApplicationClass::local_command_line_ (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> & arguments, gint & exit_status) noexcept
{
  if (!get_struct_()->local_command_line) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GApplication* application, char*** arguments, gint* exit_status);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->local_command_line;
  gint exit_status_o {};
  auto arguments_w = unwrap (std::move(arguments), gi::transfer_full);
  auto arguments_to_c = arguments_w;
  char** arguments_o = arguments_to_c;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (char***) (&arguments_o), (gint*) (&exit_status_o));
  exit_status = exit_status_o;
  arguments = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(arguments_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean Application::name_lost (GApplication* application /*none*/);
// gboolean Application::name_lost (::GApplication* application /*none*/);
bool ApplicationClass::name_lost_ () noexcept
{
  if (!get_struct_()->name_lost) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->name_lost;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// void Application::open (GApplication* application /*none*/, GFile** files /*none*/, gint n_files, const gchar* hint /*none*/);
// void Application::open (::GApplication* application /*none*/, ::GFile** files /*none*/, gint n_files, const char* hint /*none*/);
void ApplicationClass::open_ (gi::Collection<gi::DSpan, ::GFile*, gi::transfer_none_t> files, const gi::cstring_v hint) noexcept
{
  if (!get_struct_()->open) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->open;
  auto hint_to_c = gi::unwrap (hint, gi::transfer_none);
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  call_wrap_v ((::GApplication*) (gobj_()), (::GFile**) (files_to_c), (gint) (files._size()), (const char*) (hint_to_c));
}

// void Application::quit_mainloop (GApplication* application /*none*/);
// void Application::quit_mainloop (::GApplication* application /*none*/);
void ApplicationClass::quit_mainloop_ () noexcept
{
  if (!get_struct_()->quit_mainloop) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->quit_mainloop;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::run_mainloop (GApplication* application /*none*/);
// void Application::run_mainloop (::GApplication* application /*none*/);
void ApplicationClass::run_mainloop_ () noexcept
{
  if (!get_struct_()->run_mainloop) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->run_mainloop;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::shutdown (GApplication* application /*none*/);
// void Application::shutdown (::GApplication* application /*none*/);
void ApplicationClass::shutdown_ () noexcept
{
  if (!get_struct_()->shutdown) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->shutdown;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::startup (GApplication* application /*none*/);
// void Application::startup (::GApplication* application /*none*/);
void ApplicationClass::startup_ () noexcept
{
  if (!get_struct_()->startup) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->startup;
  call_wrap_v ((::GApplication*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
