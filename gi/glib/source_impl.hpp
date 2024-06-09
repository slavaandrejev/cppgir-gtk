// AUTO-GENERATED

#ifndef _GI_GLIB_SOURCE_IMPL_HPP_
#define _GI_GLIB_SOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GSource* /*full*/ g_source_new (GSourceFuncs* source_funcs /*none*/, guint struct_size);
// ::GSource* /*full*/ g_source_new (::GSourceFuncs* source_funcs /*none*/, guint struct_size);
GLib::Source base::SourceBase::new_ (GLib::SourceFuncs_Ref source_funcs, guint struct_size) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GSourceFuncs* source_funcs, guint struct_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_source_new;
  auto struct_size_to_c = struct_size;
  auto source_funcs_to_c = gi::unwrap (source_funcs, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSourceFuncs*) (source_funcs_to_c), (guint) (struct_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_source_add_child_source (GSource* source /*none*/, GSource* child_source /*none*/);
// void g_source_add_child_source (::GSource* source /*none*/, ::GSource* child_source /*none*/);
void base::SourceBase::add_child_source (GLib::Source_Ref child_source) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, ::GSource* child_source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_add_child_source;
  auto child_source_to_c = gi::unwrap (child_source, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (::GSource*) (child_source_to_c));
}

// void g_source_add_poll (GSource* source /*none*/, GPollFD* fd /*none*/);
// void g_source_add_poll (::GSource* source /*none*/, ::GPollFD* fd /*none*/);
void base::SourceBase::add_poll (GLib::PollFD_Ref fd) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, ::GPollFD* fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_add_poll;
  auto fd_to_c = gi::unwrap (fd, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (::GPollFD*) (fd_to_c));
}

// gpointer g_source_add_unix_fd (GSource* source /*none*/, gint fd, GIOCondition events);
// void* g_source_add_unix_fd (::GSource* source /*none*/, gint fd, ::GIOCondition events);
gpointer base::SourceBase::add_unix_fd (gint fd, GLib::IOCondition events) noexcept
{
  typedef void* (*call_wrap_t) (::GSource* source, gint fd, ::GIOCondition events);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_add_unix_fd;
  auto events_to_c = gi::unwrap (events);
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()), (gint) (fd_to_c), (::GIOCondition) (events_to_c));
  return _temp_ret;
}

// guint g_source_attach (GSource* source /*none*/, GMainContext* context /*none,nullable*/);
// guint g_source_attach (::GSource* source /*none*/, ::GMainContext* context /*none,nullable*/);
guint base::SourceBase::attach (GLib::MainContext_Ref context) noexcept
{
  typedef guint (*call_wrap_t) (::GSource* source, ::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_attach;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()), (::GMainContext*) (context_to_c));
  return _temp_ret;
}
guint base::SourceBase::attach () noexcept
{
  typedef guint (*call_wrap_t) (::GSource* source, ::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_attach;
  auto context_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()), (::GMainContext*) (context_to_c));
  return _temp_ret;
}

// void g_source_destroy (GSource* source /*none*/);
// void g_source_destroy (::GSource* source /*none*/);
void base::SourceBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_destroy;
  call_wrap_v ((::GSource*) (gobj_()));
}

// gboolean g_source_get_can_recurse (GSource* source /*none*/);
// gboolean g_source_get_can_recurse (::GSource* source /*none*/);
bool base::SourceBase::get_can_recurse () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_can_recurse;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return _temp_ret;
}

// GMainContext* /*none,nullable*/ g_source_get_context (GSource* source /*none*/);
// ::GMainContext* /*none,nullable*/ g_source_get_context (::GSource* source /*none*/);
GLib::MainContext_Ref base::SourceBase::get_context () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_context;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_source_get_current_time (GSource* source /*none*/, GTimeVal* timeval /*none*/);
// void g_source_get_current_time (::GSource* source /*none*/,  timeval /*none*/);
// IGNORE; deprecated

// guint g_source_get_id (GSource* source /*none*/);
// guint g_source_get_id (::GSource* source /*none*/);
guint base::SourceBase::get_id () noexcept
{
  typedef guint (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_id;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_source_get_name (GSource* source /*none*/);
// const char* /*none,nullable*/ g_source_get_name (::GSource* source /*none*/);
gi::cstring_v base::SourceBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_name;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_source_get_priority (GSource* source /*none*/);
// gint g_source_get_priority (::GSource* source /*none*/);
gint base::SourceBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_priority;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return _temp_ret;
}

// gint64 g_source_get_ready_time (GSource* source /*none*/);
// gint64 g_source_get_ready_time (::GSource* source /*none*/);
gint64 base::SourceBase::get_ready_time () noexcept
{
  typedef gint64 (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_ready_time;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return _temp_ret;
}

// gint64 g_source_get_time (GSource* source /*none*/);
// gint64 g_source_get_time (::GSource* source /*none*/);
gint64 base::SourceBase::get_time () noexcept
{
  typedef gint64 (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_get_time;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return _temp_ret;
}

// gboolean g_source_is_destroyed (GSource* source /*none*/);
// gboolean g_source_is_destroyed (::GSource* source /*none*/);
bool base::SourceBase::is_destroyed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_is_destroyed;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()));
  return _temp_ret;
}

// void g_source_modify_unix_fd (GSource* source /*none*/, gpointer tag, GIOCondition new_events);
// void g_source_modify_unix_fd (::GSource* source /*none*/, void* tag, ::GIOCondition new_events);
void base::SourceBase::modify_unix_fd (void* tag, GLib::IOCondition new_events) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, void* tag, ::GIOCondition new_events);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_modify_unix_fd;
  auto new_events_to_c = gi::unwrap (new_events);
  auto tag_to_c = tag;
  call_wrap_v ((::GSource*) (gobj_()), (void*) (tag_to_c), (::GIOCondition) (new_events_to_c));
}

// GIOCondition g_source_query_unix_fd (GSource* source /*none*/, gpointer tag);
// ::GIOCondition g_source_query_unix_fd (::GSource* source /*none*/, void* tag);
GLib::IOCondition base::SourceBase::query_unix_fd (void* tag) noexcept
{
  typedef ::GIOCondition (*call_wrap_t) (::GSource* source, void* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_query_unix_fd;
  auto tag_to_c = tag;
  auto _temp_ret = call_wrap_v ((::GSource*) (gobj_()), (void*) (tag_to_c));
  return gi::wrap (_temp_ret);
}

// GSource* /*full*/ g_source_ref (GSource* source /*none*/);
// ::GSource* /*full*/ g_source_ref (::GSource* source /*none*/);
// IGNORE; marked ignore

// void g_source_remove_child_source (GSource* source /*none*/, GSource* child_source /*none*/);
// void g_source_remove_child_source (::GSource* source /*none*/, ::GSource* child_source /*none*/);
void base::SourceBase::remove_child_source (GLib::Source_Ref child_source) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, ::GSource* child_source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_remove_child_source;
  auto child_source_to_c = gi::unwrap (child_source, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (::GSource*) (child_source_to_c));
}

// void g_source_remove_poll (GSource* source /*none*/, GPollFD* fd /*none*/);
// void g_source_remove_poll (::GSource* source /*none*/, ::GPollFD* fd /*none*/);
void base::SourceBase::remove_poll (GLib::PollFD_Ref fd) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, ::GPollFD* fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_remove_poll;
  auto fd_to_c = gi::unwrap (fd, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (::GPollFD*) (fd_to_c));
}

// void g_source_remove_unix_fd (GSource* source /*none*/, gpointer tag);
// void g_source_remove_unix_fd (::GSource* source /*none*/, void* tag);
void base::SourceBase::remove_unix_fd (void* tag) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, void* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_remove_unix_fd;
  auto tag_to_c = tag;
  call_wrap_v ((::GSource*) (gobj_()), (void*) (tag_to_c));
}

// void g_source_set_callback (GSource* source /*none*/, GSourceFunc func /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// void g_source_set_callback (::GSource* source /*none*/, GLib::SourceFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
// IGNORE; marked ignore

// void g_source_set_callback_indirect (GSource* source /*none*/, gpointer callback_data, GSourceCallbackFuncs* callback_funcs /*none*/);
// void g_source_set_callback_indirect (::GSource* source /*none*/, void* callback_data, ::GSourceCallbackFuncs* callback_funcs /*none*/);
// IGNORE; marked ignore

// void g_source_set_can_recurse (GSource* source /*none*/, gboolean can_recurse);
// void g_source_set_can_recurse (::GSource* source /*none*/, gboolean can_recurse);
void base::SourceBase::set_can_recurse (gboolean can_recurse) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, gboolean can_recurse);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_can_recurse;
  auto can_recurse_to_c = can_recurse;
  call_wrap_v ((::GSource*) (gobj_()), (gboolean) (can_recurse_to_c));
}

// void g_source_set_dispose_function (GSource* source /*none*/, GSourceDisposeFunc dispose /*none*/);
// void g_source_set_dispose_function (::GSource* source /*none*/,  dispose /*none*/);
// IGNORE; not introspectable, dispose type  not supported

// void g_source_set_funcs (GSource* source /*none*/, GSourceFuncs* funcs /*none*/);
// void g_source_set_funcs (::GSource* source /*none*/, ::GSourceFuncs* funcs /*none*/);
void base::SourceBase::set_funcs (GLib::SourceFuncs_Ref funcs) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, ::GSourceFuncs* funcs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_funcs;
  auto funcs_to_c = gi::unwrap (funcs, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (::GSourceFuncs*) (funcs_to_c));
}

// void g_source_set_name (GSource* source /*none*/, const char* name /*none*/);
// void g_source_set_name (::GSource* source /*none*/, const char* name /*none*/);
void base::SourceBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (const char*) (name_to_c));
}

// void g_source_set_priority (GSource* source /*none*/, gint priority);
// void g_source_set_priority (::GSource* source /*none*/, gint priority);
void base::SourceBase::set_priority (gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_priority;
  auto priority_to_c = priority;
  call_wrap_v ((::GSource*) (gobj_()), (gint) (priority_to_c));
}

// void g_source_set_ready_time (GSource* source /*none*/, gint64 ready_time);
// void g_source_set_ready_time (::GSource* source /*none*/, gint64 ready_time);
void base::SourceBase::set_ready_time (gint64 ready_time) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, gint64 ready_time);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_ready_time;
  auto ready_time_to_c = ready_time;
  call_wrap_v ((::GSource*) (gobj_()), (gint64) (ready_time_to_c));
}

// void g_source_set_static_name (GSource* source /*none*/, const char* name /*none*/);
// void g_source_set_static_name (::GSource* source /*none*/, const char* name /*none*/);
void base::SourceBase::set_static_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_static_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GSource*) (gobj_()), (const char*) (name_to_c));
}

// void g_source_unref (GSource* source /*none*/);
// void g_source_unref (::GSource* source /*none*/);
// IGNORE; marked ignore

// gboolean g_source_remove (guint tag);
// gboolean g_source_remove (guint tag);
bool base::SourceBase::remove (guint tag) noexcept
{
  typedef gboolean (*call_wrap_t) (guint tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_remove;
  auto tag_to_c = tag;
  auto _temp_ret = call_wrap_v ((guint) (tag_to_c));
  return _temp_ret;
}

// gboolean g_source_remove_by_funcs_user_data (GSourceFuncs* funcs /*none*/, gpointer user_data);
// gboolean g_source_remove_by_funcs_user_data (::GSourceFuncs* funcs /*none*/, void* user_data);
bool base::SourceBase::remove_by_funcs_user_data (GLib::SourceFuncs_Ref funcs, void* user_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSourceFuncs* funcs, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_remove_by_funcs_user_data;
  auto user_data_to_c = user_data;
  auto funcs_to_c = gi::unwrap (funcs, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSourceFuncs*) (funcs_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}

// gboolean g_source_remove_by_user_data (gpointer user_data);
// gboolean g_source_remove_by_user_data (void* user_data);
bool base::SourceBase::remove_by_user_data (void* user_data) noexcept
{
  typedef gboolean (*call_wrap_t) (void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_remove_by_user_data;
  auto user_data_to_c = user_data;
  auto _temp_ret = call_wrap_v ((void*) (user_data_to_c));
  return _temp_ret;
}

// void g_source_set_name_by_id (guint tag, const char* name /*none*/);
// void g_source_set_name_by_id (guint tag, const char* name /*none*/);
void base::SourceBase::set_name_by_id (guint tag, const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (guint tag, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_source_set_name_by_id;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto tag_to_c = tag;
  call_wrap_v ((guint) (tag_to_c), (const char*) (name_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/source_extra_def_impl.hpp>)
#include <glib/source_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/source_extra_impl.hpp>)
#include <glib/source_extra_impl.hpp>
#endif
#endif

#endif
