// AUTO-GENERATED

#ifndef _GI_GTK_RECENTINFO_IMPL_HPP_
#define _GI_GTK_RECENTINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GAppInfo* /*full,nullable*/ gtk_recent_info_create_app_info (GtkRecentInfo* info /*none*/, const char* app_name /*none,nullable*/, GError ** error);
// ::GAppInfo* /*full,nullable*/ gtk_recent_info_create_app_info (::GtkRecentInfo* info /*none*/, const char* app_name /*none,nullable*/, GError ** error);
Gio::AppInfo base::RecentInfoBase::create_app_info (const gi::cstring_v app_name)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_create_app_info;
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::RecentInfoBase::create_app_info ()
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_create_app_info;
  auto app_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::RecentInfoBase::create_app_info (const gi::cstring_v app_name, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_create_app_info;
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::RecentInfoBase::create_app_info (GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_create_app_info;
  auto app_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_recent_info_exists (GtkRecentInfo* info /*none*/);
// gboolean gtk_recent_info_exists (::GtkRecentInfo* info /*none*/);
bool base::RecentInfoBase::exists () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_exists;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// GDateTime* /*none*/ gtk_recent_info_get_added (GtkRecentInfo* info /*none*/);
// ::GDateTime* /*none*/ gtk_recent_info_get_added (::GtkRecentInfo* info /*none*/);
GLib::DateTime_Ref base::RecentInfoBase::get_added () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_added;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_recent_info_get_age (GtkRecentInfo* info /*none*/);
// gint gtk_recent_info_get_age (::GtkRecentInfo* info /*none*/);
gint base::RecentInfoBase::get_age () noexcept
{
  typedef gint (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_age;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_info_get_application_info (GtkRecentInfo* info /*none*/, const char* app_name /*none*/, const char** app_exec /*none,out*/, guint* count, GDateTime** stamp /*none,out*/);
// gboolean gtk_recent_info_get_application_info (::GtkRecentInfo* info /*none*/, const char* app_name /*none*/, const char** app_exec /*none,out*/, guint* count, ::GDateTime** stamp /*none,out*/);
bool base::RecentInfoBase::get_application_info (const gi::cstring_v app_name, gi::cstring_v & app_exec, guint & count, GLib::DateTime_Ref & stamp) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, const char** app_exec, guint* count, ::GDateTime** stamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_application_info;
  ::GDateTime* stamp_o {};
  guint count_o {};
  const char* app_exec_o {};
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), (const char**) (&app_exec_o), (guint*) (&count_o), (::GDateTime**) (&stamp_o));
  stamp = gi::wrap (stamp_o, gi::transfer_none);
  count = count_o;
  app_exec = gi::wrap (app_exec_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, gi::cstring_v, guint, GLib::DateTime_Ref> base::RecentInfoBase::get_application_info (const gi::cstring_v app_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, const char** app_exec, guint* count, ::GDateTime** stamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_application_info;
  ::GDateTime* stamp_o {};
  guint count_o {};
  const char* app_exec_o {};
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), (const char**) (&app_exec_o), (guint*) (&count_o), (::GDateTime**) (&stamp_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (app_exec_o, gi::transfer_none);
  auto &&tmp_return_3 = count_o;
  auto &&tmp_return_4 = gi::wrap (stamp_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// char** /*full*/ gtk_recent_info_get_applications (GtkRecentInfo* info /*none*/, gsize* length);
// char** /*full*/ gtk_recent_info_get_applications (::GtkRecentInfo* info /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::RecentInfoBase::get_applications (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_applications;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::RecentInfoBase::get_applications () noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_applications;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const char* /*none*/ gtk_recent_info_get_description (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_description (::GtkRecentInfo* info /*none*/);
gi::cstring_v base::RecentInfoBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_description;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_recent_info_get_display_name (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_display_name (::GtkRecentInfo* info /*none*/);
gi::cstring_v base::RecentInfoBase::get_display_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_display_name;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*full,nullable*/ gtk_recent_info_get_gicon (GtkRecentInfo* info /*none*/);
// ::GIcon* /*full,nullable*/ gtk_recent_info_get_gicon (::GtkRecentInfo* info /*none*/);
Gio::Icon base::RecentInfoBase::get_gicon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_gicon;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char** /*full*/ gtk_recent_info_get_groups (GtkRecentInfo* info /*none*/, gsize* length);
// char** /*full*/ gtk_recent_info_get_groups (::GtkRecentInfo* info /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::RecentInfoBase::get_groups (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::RecentInfoBase::get_groups () noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const char* /*none*/ gtk_recent_info_get_mime_type (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_mime_type (::GtkRecentInfo* info /*none*/);
gi::cstring_v base::RecentInfoBase::get_mime_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_mime_type;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDateTime* /*none*/ gtk_recent_info_get_modified (GtkRecentInfo* info /*none*/);
// ::GDateTime* /*none*/ gtk_recent_info_get_modified (::GtkRecentInfo* info /*none*/);
GLib::DateTime_Ref base::RecentInfoBase::get_modified () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_modified;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_recent_info_get_private_hint (GtkRecentInfo* info /*none*/);
// gboolean gtk_recent_info_get_private_hint (::GtkRecentInfo* info /*none*/);
bool base::RecentInfoBase::get_private_hint () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_private_hint;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// char* /*full*/ gtk_recent_info_get_short_name (GtkRecentInfo* info /*none*/);
// char* /*full*/ gtk_recent_info_get_short_name (::GtkRecentInfo* info /*none*/);
gi::cstring base::RecentInfoBase::get_short_name () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_short_name;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_recent_info_get_uri (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_uri (::GtkRecentInfo* info /*none*/);
gi::cstring_v base::RecentInfoBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_uri;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// char* /*full,nullable*/ gtk_recent_info_get_uri_display (GtkRecentInfo* info /*none*/);
// char* /*full,nullable*/ gtk_recent_info_get_uri_display (::GtkRecentInfo* info /*none*/);
gi::cstring base::RecentInfoBase::get_uri_display () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_uri_display;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDateTime* /*none*/ gtk_recent_info_get_visited (GtkRecentInfo* info /*none*/);
// ::GDateTime* /*none*/ gtk_recent_info_get_visited (::GtkRecentInfo* info /*none*/);
GLib::DateTime_Ref base::RecentInfoBase::get_visited () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_get_visited;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_recent_info_has_application (GtkRecentInfo* info /*none*/, const char* app_name /*none*/);
// gboolean gtk_recent_info_has_application (::GtkRecentInfo* info /*none*/, const char* app_name /*none*/);
bool base::RecentInfoBase::has_application (const gi::cstring_v app_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_has_application;
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c));
  return _temp_ret;
}

// gboolean gtk_recent_info_has_group (GtkRecentInfo* info /*none*/, const char* group_name /*none*/);
// gboolean gtk_recent_info_has_group (::GtkRecentInfo* info /*none*/, const char* group_name /*none*/);
bool base::RecentInfoBase::has_group (const gi::cstring_v group_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_has_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (group_name_to_c));
  return _temp_ret;
}

// gboolean gtk_recent_info_is_local (GtkRecentInfo* info /*none*/);
// gboolean gtk_recent_info_is_local (::GtkRecentInfo* info /*none*/);
bool base::RecentInfoBase::is_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_is_local;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// char* /*full*/ gtk_recent_info_last_application (GtkRecentInfo* info /*none*/);
// char* /*full*/ gtk_recent_info_last_application (::GtkRecentInfo* info /*none*/);
gi::cstring base::RecentInfoBase::last_application () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_last_application;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_recent_info_match (GtkRecentInfo* info_a /*none*/, GtkRecentInfo* info_b /*none*/);
// gboolean gtk_recent_info_match (::GtkRecentInfo* info_a /*none*/, ::GtkRecentInfo* info_b /*none*/);
bool base::RecentInfoBase::match (Gtk::RecentInfo_Ref info_b) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info_a, ::GtkRecentInfo* info_b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_info_match;
  auto info_b_to_c = gi::unwrap (info_b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (::GtkRecentInfo*) (info_b_to_c));
  return _temp_ret;
}

// GtkRecentInfo* /*full*/ gtk_recent_info_ref (GtkRecentInfo* info /*none*/);
// ::GtkRecentInfo* /*full*/ gtk_recent_info_ref (::GtkRecentInfo* info /*none*/);
// IGNORE; marked ignore

// void gtk_recent_info_unref (GtkRecentInfo* info /*none*/);
// void gtk_recent_info_unref (::GtkRecentInfo* info /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra_def_impl.hpp>)
#include <gtk/recentinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra_impl.hpp>)
#include <gtk/recentinfo_extra_impl.hpp>
#endif
#endif

#endif
