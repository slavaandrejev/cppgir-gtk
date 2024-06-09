// AUTO-GENERATED

#ifndef _GI_GLIB_BOOKMARKFILE_IMPL_HPP_
#define _GI_GLIB_BOOKMARKFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GBookmarkFile* /*full*/ g_bookmark_file_new ();
// ::GBookmarkFile* /*full*/ g_bookmark_file_new ();
GLib::BookmarkFile base::BookmarkFileBase::new_ () noexcept
{
  typedef ::GBookmarkFile* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_bookmark_file_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_bookmark_file_add_application (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none,nullable*/, const gchar* exec /*none,nullable*/);
// void g_bookmark_file_add_application (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none,nullable*/, const char* exec /*none,nullable*/);
void base::BookmarkFileBase::add_application (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, const char* exec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_add_application;
  auto exec_to_c = gi::unwrap (exec, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (const char*) (exec_to_c));
}
void base::BookmarkFileBase::add_application (const gi::cstring_v uri) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, const char* exec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_add_application;
  auto exec_to_c = nullptr;
  auto name_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (const char*) (exec_to_c));
}

// void g_bookmark_file_add_group (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* group /*none*/);
// void g_bookmark_file_add_group (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* group /*none*/);
void base::BookmarkFileBase::add_group (const gi::cstring_v uri, const gi::cstring_v group) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_add_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (group_to_c));
}

// GBookmarkFile* /*full*/ g_bookmark_file_copy (GBookmarkFile* bookmark /*none*/);
// ::GBookmarkFile* /*full*/ g_bookmark_file_copy (::GBookmarkFile* bookmark /*none*/);
GLib::BookmarkFile base::BookmarkFileBase::copy () noexcept
{
  typedef ::GBookmarkFile* (*call_wrap_t) (::GBookmarkFile* bookmark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_copy;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_bookmark_file_free (GBookmarkFile* bookmark /*none*/);
// void g_bookmark_file_free (::GBookmarkFile* bookmark /*none*/);
// IGNORE; marked ignore

// time_t g_bookmark_file_get_added (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// glong g_bookmark_file_get_added (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// IGNORE; deprecated

// GDateTime* /*none*/ g_bookmark_file_get_added_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// ::GDateTime* /*none*/ g_bookmark_file_get_added_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GLib::DateTime_Ref base::BookmarkFileBase::get_added_date_time (const gi::cstring_v uri)
{
  typedef ::GDateTime* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_added_date_time;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GLib::DateTime_Ref base::BookmarkFileBase::get_added_date_time (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_added_date_time;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_bookmark_file_get_app_info (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, gchar** exec /*full,out,opt*/, guint* count, time_t* stamp, GError ** error);
// gboolean g_bookmark_file_get_app_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, char** exec /*full,out,opt*/, guint* count, glong* stamp, GError ** error);
// IGNORE; deprecated

// gboolean g_bookmark_file_get_application_info (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, char** exec /*full,out,opt*/, unsigned int* count, GDateTime** stamp /*none,out,opt*/, GError ** error);
// gboolean g_bookmark_file_get_application_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, char** exec /*full,out,opt*/, guint* count, ::GDateTime** stamp /*none,out,opt*/, GError ** error);
bool base::BookmarkFileBase::get_application_info (const gi::cstring_v uri, const gi::cstring_v name, gi::cstring * exec, guint * count, GLib::DateTime_Ref * stamp)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, char** exec, guint* count, ::GDateTime** stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_application_info;
  ::GDateTime* stamp_o {};
  guint count_o {};
  char* exec_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (char**) (exec ? &exec_o : nullptr), (guint*) (count ? &count_o : nullptr), (::GDateTime**) (stamp ? &stamp_o : nullptr), &error);
  if (stamp) *stamp = gi::wrap (stamp_o, gi::transfer_none);
  if (count) *count = count_o;
  if (exec) *exec = gi::wrap (exec_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::get_application_info (const gi::cstring_v uri, const gi::cstring_v name, gi::cstring * exec, guint * count, GLib::DateTime_Ref * stamp, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, char** exec, guint* count, ::GDateTime** stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_application_info;
  ::GDateTime* stamp_o {};
  guint count_o {};
  char* exec_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (char**) (exec ? &exec_o : nullptr), (guint*) (count ? &count_o : nullptr), (::GDateTime**) (stamp ? &stamp_o : nullptr), _error ? &_error_o : nullptr);
  if (stamp) *stamp = gi::wrap (stamp_o, gi::transfer_none);
  if (count) *count = count_o;
  if (exec) *exec = gi::wrap (exec_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, guint, GLib::DateTime_Ref> base::BookmarkFileBase::get_application_info (const gi::cstring_v uri, const gi::cstring_v name)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, char** exec, guint* count, ::GDateTime** stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_application_info;
  ::GDateTime* stamp_o {};
  guint count_o {};
  char* exec_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (char**) (&exec_o), (guint*) (&count_o), (::GDateTime**) (&stamp_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (exec_o, gi::transfer_full);
  auto &&tmp_return_3 = count_o;
  auto &&tmp_return_4 = gi::wrap (stamp_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, gi::cstring, guint, GLib::DateTime_Ref> base::BookmarkFileBase::get_application_info (const gi::cstring_v uri, const gi::cstring_v name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, char** exec, guint* count, ::GDateTime** stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_application_info;
  ::GDateTime* stamp_o {};
  guint count_o {};
  char* exec_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (char**) (&exec_o), (guint*) (&count_o), (::GDateTime**) (&stamp_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (exec_o, gi::transfer_full);
  auto &&tmp_return_3 = count_o;
  auto &&tmp_return_4 = gi::wrap (stamp_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gchar** /*full*/ g_bookmark_file_get_applications (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_bookmark_file_get_applications (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, gsize* length, GError ** error);
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::BookmarkFileBase::get_applications (const gi::cstring_v uri)
{
  typedef char** (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_applications;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  gsize length;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::BookmarkFileBase::get_applications (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_applications;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  gsize length;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar* /*full*/ g_bookmark_file_get_description (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// char* /*full*/ g_bookmark_file_get_description (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
gi::cstring base::BookmarkFileBase::get_description (const gi::cstring_v uri)
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_description;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::BookmarkFileBase::get_description (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_description;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_bookmark_file_get_groups (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_bookmark_file_get_groups (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, gsize* length, GError ** error);
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::BookmarkFileBase::get_groups (const gi::cstring_v uri)
{
  typedef char** (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_groups;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  gsize length;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::BookmarkFileBase::get_groups (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_groups;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  gsize length;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_get_icon (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gchar** href /*full,out,opt*/, gchar** mime_type /*full,out,opt*/, GError ** error);
// gboolean g_bookmark_file_get_icon (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, char** href /*full,out,opt*/, char** mime_type /*full,out,opt*/, GError ** error);
bool base::BookmarkFileBase::get_icon (const gi::cstring_v uri, gi::cstring * href, gi::cstring * mime_type)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, char** href, char** mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_icon;
  char* mime_type_o {};
  char* href_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (char**) (href ? &href_o : nullptr), (char**) (mime_type ? &mime_type_o : nullptr), &error);
  if (mime_type) *mime_type = gi::wrap (mime_type_o, gi::transfer_full);
  if (href) *href = gi::wrap (href_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::get_icon (const gi::cstring_v uri, gi::cstring * href, gi::cstring * mime_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, char** href, char** mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_icon;
  char* mime_type_o {};
  char* href_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (char**) (href ? &href_o : nullptr), (char**) (mime_type ? &mime_type_o : nullptr), _error ? &_error_o : nullptr);
  if (mime_type) *mime_type = gi::wrap (mime_type_o, gi::transfer_full);
  if (href) *href = gi::wrap (href_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring> base::BookmarkFileBase::get_icon (const gi::cstring_v uri)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, char** href, char** mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_icon;
  char* mime_type_o {};
  char* href_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (char**) (&href_o), (char**) (&mime_type_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (href_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (mime_type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::BookmarkFileBase::get_icon (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, char** href, char** mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_icon;
  char* mime_type_o {};
  char* href_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (char**) (&href_o), (char**) (&mime_type_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (href_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (mime_type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean g_bookmark_file_get_is_private (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// gboolean g_bookmark_file_get_is_private (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
bool base::BookmarkFileBase::get_is_private (const gi::cstring_v uri)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_is_private;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::get_is_private (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_is_private;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar* /*full*/ g_bookmark_file_get_mime_type (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// char* /*full*/ g_bookmark_file_get_mime_type (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
gi::cstring base::BookmarkFileBase::get_mime_type (const gi::cstring_v uri)
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_mime_type;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::BookmarkFileBase::get_mime_type (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_mime_type;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// time_t g_bookmark_file_get_modified (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// glong g_bookmark_file_get_modified (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// IGNORE; deprecated

// GDateTime* /*none*/ g_bookmark_file_get_modified_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// ::GDateTime* /*none*/ g_bookmark_file_get_modified_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GLib::DateTime_Ref base::BookmarkFileBase::get_modified_date_time (const gi::cstring_v uri)
{
  typedef ::GDateTime* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_modified_date_time;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GLib::DateTime_Ref base::BookmarkFileBase::get_modified_date_time (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_modified_date_time;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint g_bookmark_file_get_size (GBookmarkFile* bookmark /*none*/);
// gint g_bookmark_file_get_size (::GBookmarkFile* bookmark /*none*/);
gint base::BookmarkFileBase::get_size () noexcept
{
  typedef gint (*call_wrap_t) (::GBookmarkFile* bookmark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_size;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()));
  return _temp_ret;
}

// gchar* /*full*/ g_bookmark_file_get_title (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none,nullable*/, GError ** error);
// char* /*full*/ g_bookmark_file_get_title (::GBookmarkFile* bookmark /*none*/, const char* uri /*none,nullable*/, GError ** error);
gi::cstring base::BookmarkFileBase::get_title (const gi::cstring_v uri)
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_title;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::BookmarkFileBase::get_title ()
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_title;
  auto uri_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::BookmarkFileBase::get_title (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_title;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::BookmarkFileBase::get_title (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_title;
  auto uri_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_bookmark_file_get_uris (GBookmarkFile* bookmark /*none*/, gsize* length);
// char** /*full*/ g_bookmark_file_get_uris (::GBookmarkFile* bookmark /*none*/, gsize* length);
gi::Collection<gi::DSpan, char*, gi::transfer_full_t> base::BookmarkFileBase::get_uris () noexcept
{
  typedef char** (*call_wrap_t) (::GBookmarkFile* bookmark, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_uris;
  gsize length;
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (gsize*) (&length));
  gi::Collection<gi::DSpan, char*, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, char*, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  return _temp_ret;
}

// time_t g_bookmark_file_get_visited (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// glong g_bookmark_file_get_visited (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// IGNORE; deprecated

// GDateTime* /*none*/ g_bookmark_file_get_visited_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// ::GDateTime* /*none*/ g_bookmark_file_get_visited_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GLib::DateTime_Ref base::BookmarkFileBase::get_visited_date_time (const gi::cstring_v uri)
{
  typedef ::GDateTime* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_visited_date_time;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GLib::DateTime_Ref base::BookmarkFileBase::get_visited_date_time (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_get_visited_date_time;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_bookmark_file_has_application (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, GError ** error);
// gboolean g_bookmark_file_has_application (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, GError ** error);
bool base::BookmarkFileBase::has_application (const gi::cstring_v uri, const gi::cstring_v name)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_has_application;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::has_application (const gi::cstring_v uri, const gi::cstring_v name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_has_application;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_has_group (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* group /*none*/, GError ** error);
// gboolean g_bookmark_file_has_group (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* group /*none*/, GError ** error);
bool base::BookmarkFileBase::has_group (const gi::cstring_v uri, const gi::cstring_v group)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* group, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_has_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (group_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::has_group (const gi::cstring_v uri, const gi::cstring_v group, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* group, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_has_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (group_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_has_item (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/);
// gboolean g_bookmark_file_has_item (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/);
bool base::BookmarkFileBase::has_item (const gi::cstring_v uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_has_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// gboolean g_bookmark_file_load_from_data (GBookmarkFile* bookmark /*none*/, const gchar* data /*none*/, gsize length, GError ** error);
// gboolean g_bookmark_file_load_from_data (::GBookmarkFile* bookmark /*none*/, const guint8* data /*none*/, gsize length, GError ** error);
bool base::BookmarkFileBase::load_from_data (const guint8 * data, gsize length)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const guint8* data, gsize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_data;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const guint8*) (data_to_c), (gsize) (length), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::load_from_data (const guint8 * data, gsize length, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const guint8* data, gsize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_data;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const guint8*) (data_to_c), (gsize) (length), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_load_from_data_dirs (GBookmarkFile* bookmark /*none*/, const gchar* file /*none*/, gchar** full_path /*full,out,opt*/, GError ** error);
// gboolean g_bookmark_file_load_from_data_dirs (::GBookmarkFile* bookmark /*none*/, const char* file /*none*/, char** full_path /*full,out,opt*/, GError ** error);
bool base::BookmarkFileBase::load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* file, char** full_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_data_dirs;
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (file_to_c), (char**) (full_path ? &full_path_o : nullptr), &error);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* file, char** full_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_data_dirs;
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (file_to_c), (char**) (full_path ? &full_path_o : nullptr), _error ? &_error_o : nullptr);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring> base::BookmarkFileBase::load_from_data_dirs (const gi::cstring_v file)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* file, char** full_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_data_dirs;
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (file_to_c), (char**) (&full_path_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (full_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::BookmarkFileBase::load_from_data_dirs (const gi::cstring_v file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* file, char** full_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_data_dirs;
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (file_to_c), (char**) (&full_path_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (full_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_bookmark_file_load_from_file (GBookmarkFile* bookmark /*none*/, const gchar* filename /*none*/, GError ** error);
// gboolean g_bookmark_file_load_from_file (::GBookmarkFile* bookmark /*none*/, const char* filename /*none*/, GError ** error);
bool base::BookmarkFileBase::load_from_file (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::load_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_load_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_move_item (GBookmarkFile* bookmark /*none*/, const gchar* old_uri /*none*/, const gchar* new_uri /*none,nullable*/, GError ** error);
// gboolean g_bookmark_file_move_item (::GBookmarkFile* bookmark /*none*/, const char* old_uri /*none*/, const char* new_uri /*none,nullable*/, GError ** error);
bool base::BookmarkFileBase::move_item (const gi::cstring_v old_uri, const gi::cstring_v new_uri)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* old_uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_move_item;
  auto new_uri_to_c = gi::unwrap (new_uri, gi::transfer_none);
  auto old_uri_to_c = gi::unwrap (old_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (old_uri_to_c), (const char*) (new_uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::move_item (const gi::cstring_v old_uri)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* old_uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_move_item;
  auto new_uri_to_c = nullptr;
  auto old_uri_to_c = gi::unwrap (old_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (old_uri_to_c), (const char*) (new_uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::move_item (const gi::cstring_v old_uri, const gi::cstring_v new_uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* old_uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_move_item;
  auto new_uri_to_c = gi::unwrap (new_uri, gi::transfer_none);
  auto old_uri_to_c = gi::unwrap (old_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (old_uri_to_c), (const char*) (new_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::BookmarkFileBase::move_item (const gi::cstring_v old_uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* old_uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_move_item;
  auto new_uri_to_c = nullptr;
  auto old_uri_to_c = gi::unwrap (old_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (old_uri_to_c), (const char*) (new_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_remove_application (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, GError ** error);
// gboolean g_bookmark_file_remove_application (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, GError ** error);
bool base::BookmarkFileBase::remove_application (const gi::cstring_v uri, const gi::cstring_v name)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_remove_application;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::remove_application (const gi::cstring_v uri, const gi::cstring_v name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_remove_application;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_remove_group (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* group /*none*/, GError ** error);
// gboolean g_bookmark_file_remove_group (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* group /*none*/, GError ** error);
bool base::BookmarkFileBase::remove_group (const gi::cstring_v uri, const gi::cstring_v group)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* group, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_remove_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (group_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::remove_group (const gi::cstring_v uri, const gi::cstring_v group, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* group, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_remove_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (group_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_remove_item (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// gboolean g_bookmark_file_remove_item (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
bool base::BookmarkFileBase::remove_item (const gi::cstring_v uri)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_remove_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::remove_item (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_remove_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_bookmark_file_set_added (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, time_t added);
// void g_bookmark_file_set_added (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, glong added);
// IGNORE; deprecated

// void g_bookmark_file_set_added_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GDateTime* added /*none*/);
// void g_bookmark_file_set_added_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, ::GDateTime* added /*none*/);
void base::BookmarkFileBase::set_added_date_time (const gi::cstring_v uri, GLib::DateTime_Ref added) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, ::GDateTime* added);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_added_date_time;
  auto added_to_c = gi::unwrap (added, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (::GDateTime*) (added_to_c));
}

// gboolean g_bookmark_file_set_app_info (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, const gchar* exec /*none*/, gint count, time_t stamp, GError ** error);
// gboolean g_bookmark_file_set_app_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, const char* exec /*none*/, gint count, glong stamp, GError ** error);
// IGNORE; deprecated

// gboolean g_bookmark_file_set_application_info (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, const char* exec /*none*/, int count, GDateTime* stamp /*none,nullable*/, GError ** error);
// gboolean g_bookmark_file_set_application_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, const char* exec /*none*/, gint count, ::GDateTime* stamp /*none,nullable*/, GError ** error);
bool base::BookmarkFileBase::set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count, GLib::DateTime_Ref stamp)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, const char* exec, gint count, ::GDateTime* stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_application_info;
  auto stamp_to_c = gi::unwrap (stamp, gi::transfer_none);
  auto count_to_c = count;
  auto exec_to_c = gi::unwrap (exec, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (const char*) (exec_to_c), (gint) (count_to_c), (::GDateTime*) (stamp_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, const char* exec, gint count, ::GDateTime* stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_application_info;
  auto stamp_to_c = nullptr;
  auto count_to_c = count;
  auto exec_to_c = gi::unwrap (exec, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (const char*) (exec_to_c), (gint) (count_to_c), (::GDateTime*) (stamp_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count, GLib::DateTime_Ref stamp, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, const char* exec, gint count, ::GDateTime* stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_application_info;
  auto stamp_to_c = gi::unwrap (stamp, gi::transfer_none);
  auto count_to_c = count;
  auto exec_to_c = gi::unwrap (exec, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (const char*) (exec_to_c), (gint) (count_to_c), (::GDateTime*) (stamp_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::BookmarkFileBase::set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* name, const char* exec, gint count, ::GDateTime* stamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_application_info;
  auto stamp_to_c = nullptr;
  auto count_to_c = count;
  auto exec_to_c = gi::unwrap (exec, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (name_to_c), (const char*) (exec_to_c), (gint) (count_to_c), (::GDateTime*) (stamp_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_bookmark_file_set_description (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none,nullable*/, const gchar* description /*none*/);
// void g_bookmark_file_set_description (::GBookmarkFile* bookmark /*none*/, const char* uri /*none,nullable*/, const char* description /*none*/);
void base::BookmarkFileBase::set_description (const gi::cstring_v uri, const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (description_to_c));
}
void base::BookmarkFileBase::set_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  auto uri_to_c = nullptr;
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (description_to_c));
}

// void g_bookmark_file_set_groups (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar** groups /*none,nullable*/, gsize length);
// void g_bookmark_file_set_groups (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char** groups /*none,nullable*/, gsize length);
void base::BookmarkFileBase::set_groups (const gi::cstring_v uri, gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> groups) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char** groups, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_groups;
  auto groups_w = unwrap (std::move(groups), gi::transfer_none);
  auto groups_to_c = groups_w;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char**) (groups_to_c), (gsize) (groups._size()));
}

// void g_bookmark_file_set_icon (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* href /*none,nullable*/, const gchar* mime_type /*none*/);
// void g_bookmark_file_set_icon (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* href /*none,nullable*/, const char* mime_type /*none*/);
void base::BookmarkFileBase::set_icon (const gi::cstring_v uri, const gi::cstring_v href, const gi::cstring_v mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* href, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_icon;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto href_to_c = gi::unwrap (href, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (href_to_c), (const char*) (mime_type_to_c));
}
void base::BookmarkFileBase::set_icon (const gi::cstring_v uri, const gi::cstring_v mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* href, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_icon;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto href_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (href_to_c), (const char*) (mime_type_to_c));
}

// void g_bookmark_file_set_is_private (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gboolean is_private);
// void g_bookmark_file_set_is_private (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, gboolean is_private);
void base::BookmarkFileBase::set_is_private (const gi::cstring_v uri, gboolean is_private) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, gboolean is_private);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_is_private;
  auto is_private_to_c = is_private;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (gboolean) (is_private_to_c));
}

// void g_bookmark_file_set_mime_type (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* mime_type /*none*/);
// void g_bookmark_file_set_mime_type (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* mime_type /*none*/);
void base::BookmarkFileBase::set_mime_type (const gi::cstring_v uri, const gi::cstring_v mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (mime_type_to_c));
}

// void g_bookmark_file_set_modified (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, time_t modified);
// void g_bookmark_file_set_modified (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, glong modified);
// IGNORE; deprecated

// void g_bookmark_file_set_modified_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GDateTime* modified /*none*/);
// void g_bookmark_file_set_modified_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, ::GDateTime* modified /*none*/);
void base::BookmarkFileBase::set_modified_date_time (const gi::cstring_v uri, GLib::DateTime_Ref modified) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, ::GDateTime* modified);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_modified_date_time;
  auto modified_to_c = gi::unwrap (modified, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (::GDateTime*) (modified_to_c));
}

// void g_bookmark_file_set_title (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none,nullable*/, const gchar* title /*none*/);
// void g_bookmark_file_set_title (::GBookmarkFile* bookmark /*none*/, const char* uri /*none,nullable*/, const char* title /*none*/);
void base::BookmarkFileBase::set_title (const gi::cstring_v uri, const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (title_to_c));
}
void base::BookmarkFileBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto uri_to_c = nullptr;
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (const char*) (title_to_c));
}

// void g_bookmark_file_set_visited (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, time_t visited);
// void g_bookmark_file_set_visited (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, glong visited);
// IGNORE; deprecated

// void g_bookmark_file_set_visited_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GDateTime* visited /*none*/);
// void g_bookmark_file_set_visited_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, ::GDateTime* visited /*none*/);
void base::BookmarkFileBase::set_visited_date_time (const gi::cstring_v uri, GLib::DateTime_Ref visited) noexcept
{
  typedef void (*call_wrap_t) (::GBookmarkFile* bookmark, const char* uri, ::GDateTime* visited);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_set_visited_date_time;
  auto visited_to_c = gi::unwrap (visited, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (uri_to_c), (::GDateTime*) (visited_to_c));
}

// gchar* /*full*/ g_bookmark_file_to_data (GBookmarkFile* bookmark /*none*/, gsize* length, GError ** error);
// guint8* /*full*/ g_bookmark_file_to_data (::GBookmarkFile* bookmark /*none*/, gsize* length, GError ** error);
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base::BookmarkFileBase::to_data ()
{
  typedef guint8* (*call_wrap_t) (::GBookmarkFile* bookmark, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_to_data;
  gsize length;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> base::BookmarkFileBase::to_data (GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GBookmarkFile* bookmark, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_to_data;
  gsize length;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GBookmarkFile*) (gobj_()), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(_ret_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_bookmark_file_to_file (GBookmarkFile* bookmark /*none*/, const gchar* filename /*none*/, GError ** error);
// gboolean g_bookmark_file_to_file (::GBookmarkFile* bookmark /*none*/, const char* filename /*none*/, GError ** error);
bool base::BookmarkFileBase::to_file (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::BookmarkFileBase::to_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GBookmarkFile* bookmark, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBookmarkFile*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GQuark g_bookmark_file_error_quark ();
// ::GQuark g_bookmark_file_error_quark ();
GLib::Quark base::BookmarkFileBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_bookmark_file_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bookmarkfile_extra_def_impl.hpp>)
#include <glib/bookmarkfile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bookmarkfile_extra_impl.hpp>)
#include <glib/bookmarkfile_extra_impl.hpp>
#endif
#endif

#endif
