// AUTO-GENERATED

#ifndef _GI_GLIB_KEYFILE_IMPL_HPP_
#define _GI_GLIB_KEYFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GKeyFile* /*full*/ g_key_file_new ();
// ::GKeyFile* /*full*/ g_key_file_new ();
GLib::KeyFile base::KeyFileBase::new_ () noexcept
{
  typedef ::GKeyFile* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_key_file_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_key_file_free (GKeyFile* key_file /*none*/);
// void g_key_file_free (::GKeyFile* key_file /*none*/);
// IGNORE; marked ignore

// gboolean g_key_file_get_boolean (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gboolean g_key_file_get_boolean (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
bool base::KeyFileBase::get_boolean (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::get_boolean (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean* /*container*/ g_key_file_get_boolean_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// gboolean* /*container*/ g_key_file_get_boolean_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t> base::KeyFileBase::get_boolean_list (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gboolean* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_boolean_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  gsize length;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t> base::KeyFileBase::get_boolean_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gboolean* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_boolean_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  gsize length;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar* /*full*/ g_key_file_get_comment (GKeyFile* key_file /*none*/, const gchar* group_name /*none,nullable*/, const gchar* key /*none,nullable*/, GError ** error);
// char* /*full*/ g_key_file_get_comment (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, const char* key /*none,nullable*/, GError ** error);
gi::cstring base::KeyFileBase::get_comment (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_comment ()
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_comment (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_comment (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gdouble g_key_file_get_double (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gdouble g_key_file_get_double (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
gdouble base::KeyFileBase::get_double (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gdouble (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gdouble base::KeyFileBase::get_double (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gdouble (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gdouble* /*container*/ g_key_file_get_double_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// gdouble* /*container*/ g_key_file_get_double_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t> base::KeyFileBase::get_double_list (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gdouble* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_double_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  gsize length;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t> base::KeyFileBase::get_double_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gdouble* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_double_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  gsize length;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar** /*full*/ g_key_file_get_groups (GKeyFile* key_file /*none*/, gsize* length);
// char** /*full*/ g_key_file_get_groups (::GKeyFile* key_file /*none*/, gsize* length);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_groups (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_groups () noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (&length_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gint64 g_key_file_get_int64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gint64 g_key_file_get_int64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
gint64 base::KeyFileBase::get_int64 (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_int64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint64 base::KeyFileBase::get_int64 (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_int64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint g_key_file_get_integer (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gint g_key_file_get_integer (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
gint base::KeyFileBase::get_integer (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gint (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_integer;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::KeyFileBase::get_integer (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_integer;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gint* /*container*/ g_key_file_get_integer_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// gint* /*container*/ g_key_file_get_integer_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
gi::Collection<gi::DSpan, gint, gi::transfer_container_t> base::KeyFileBase::get_integer_list (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gint* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_integer_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  gsize length;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), &error);
  gi::Collection<gi::DSpan, gint, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  gi::check_error (error);
  return _temp_ret;
}
gi::Collection<gi::DSpan, gint, gi::transfer_container_t> base::KeyFileBase::get_integer_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gint* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_integer_list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  gsize length;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, gint, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_container_t>>(_ret_o, length, gi::transfer_container);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar** /*full*/ g_key_file_get_keys (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_key_file_get_keys (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, gsize* length, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_keys (const gi::cstring_v group_name, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_keys (const gi::cstring_v group_name, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_keys (const gi::cstring_v group_name)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_keys (const gi::cstring_v group_name, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_keys;
  gsize length_o {};
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full,nullable*/ g_key_file_get_locale_for_key (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none,nullable*/);
// char* /*full,nullable*/ g_key_file_get_locale_for_key (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none,nullable*/);
gi::cstring base::KeyFileBase::get_locale_for_key (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_for_key;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_locale_for_key (const gi::cstring_v group_name, const gi::cstring_v key) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_for_key;
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_key_file_get_locale_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none,nullable*/, GError ** error);
// char* /*full*/ g_key_file_get_locale_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none,nullable*/, GError ** error);
gi::cstring base::KeyFileBase::get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string;
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string;
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_key_file_get_locale_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none,nullable*/, gsize* length, GError ** error);
// char** /*full*/ g_key_file_get_locale_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none,nullable*/, gsize* length, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_locale_string_list;
  gsize length_o {};
  auto locale_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gchar* /*full,nullable*/ g_key_file_get_start_group (GKeyFile* key_file /*none*/);
// char* /*full,nullable*/ g_key_file_get_start_group (::GKeyFile* key_file /*none*/);
gi::cstring base::KeyFileBase::get_start_group () noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_start_group;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ g_key_file_get_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// char* /*full*/ g_key_file_get_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
gi::cstring base::KeyFileBase::get_string (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_string (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_key_file_get_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_key_file_get_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::KeyFileBase::get_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_string_list (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> base::KeyFileBase::get_string_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_string_list;
  gsize length_o {};
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// guint64 g_key_file_get_uint64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// guint64 g_key_file_get_uint64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
guint64 base::KeyFileBase::get_uint64 (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef guint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_uint64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint64 base::KeyFileBase::get_uint64 (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef guint64 (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_uint64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gchar* /*full*/ g_key_file_get_value (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// char* /*full*/ g_key_file_get_value (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
gi::cstring base::KeyFileBase::get_value (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::get_value (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_get_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_key_file_has_group (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/);
// gboolean g_key_file_has_group (::GKeyFile* key_file /*none*/, const char* group_name /*none*/);
bool base::KeyFileBase::has_group (const gi::cstring_v group_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_has_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c));
  return _temp_ret;
}

// gboolean g_key_file_has_key (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gboolean g_key_file_has_key (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
bool base::KeyFileBase::has_key (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::has_key (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_key_file_load_from_bytes (GKeyFile* key_file /*none*/, GBytes* bytes /*none*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_bytes (::GKeyFile* key_file /*none*/, ::GBytes* bytes /*none*/, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_bytes (GLib::Bytes_Ref bytes, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, ::GBytes* bytes, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_bytes;
  auto flags_to_c = gi::unwrap (flags);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (::GBytes*) (bytes_to_c), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_bytes (GLib::Bytes_Ref bytes, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, ::GBytes* bytes, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_bytes;
  auto flags_to_c = gi::unwrap (flags);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (::GBytes*) (bytes_to_c), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_key_file_load_from_data (GKeyFile* key_file /*none*/, const gchar* data /*none*/, gsize length, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data (::GKeyFile* key_file /*none*/, const char* data /*none*/, gsize length, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_data (const gi::cstring_v data, gsize length, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* data, gsize length, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_data;
  auto flags_to_c = gi::unwrap (flags);
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (data_to_c), (gsize) (length_to_c), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_data (const gi::cstring_v data, gsize length, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* data, gsize length, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_data;
  auto flags_to_c = gi::unwrap (flags);
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (data_to_c), (gsize) (length_to_c), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_key_file_load_from_data_dirs (GKeyFile* key_file /*none*/, const gchar* file /*none*/, gchar** full_path /*full,out,opt*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data_dirs (::GKeyFile* key_file /*none*/, const char* file /*none*/, char** full_path /*full,out,opt*/, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), &error);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring> base::KeyFileBase::load_from_data_dirs (const gi::cstring_v file, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (full_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::KeyFileBase::load_from_data_dirs (const gi::cstring_v file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_data_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (full_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_key_file_load_from_dirs (GKeyFile* key_file /*none*/, const gchar* file /*none*/, const gchar** search_dirs /*none*/, gchar** full_path /*full,out,opt*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_dirs (::GKeyFile* key_file /*none*/, const char* file /*none*/, const char** search_dirs /*none*/, char** full_path /*full,out,opt*/, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, gi::cstring * full_path, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_w = unwrap (std::move(search_dirs), gi::transfer_none);
  auto search_dirs_to_c = search_dirs_w;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), &error);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, gi::cstring * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_w = unwrap (std::move(search_dirs), gi::transfer_none);
  auto search_dirs_to_c = search_dirs_w;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (full_path ? &full_path_o : nullptr), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (full_path) *full_path = gi::wrap (full_path_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring> base::KeyFileBase::load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_w = unwrap (std::move(search_dirs), gi::transfer_none);
  auto search_dirs_to_c = search_dirs_w;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (full_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::KeyFileBase::load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_dirs;
  auto flags_to_c = gi::unwrap (flags);
  char* full_path_o {};
  auto search_dirs_w = unwrap (std::move(search_dirs), gi::transfer_none);
  auto search_dirs_to_c = search_dirs_w;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (const char**) (search_dirs_to_c), (char**) (&full_path_o), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (full_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_key_file_load_from_file (GKeyFile* key_file /*none*/, const gchar* file /*none*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_file (::GKeyFile* key_file /*none*/, const char* file /*none*/, ::GKeyFileFlags flags, GError ** error);
bool base::KeyFileBase::load_from_file (const gi::cstring_v file, GLib::KeyFileFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_file;
  auto flags_to_c = gi::unwrap (flags);
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (::GKeyFileFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::load_from_file (const gi::cstring_v file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* file, ::GKeyFileFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_load_from_file;
  auto flags_to_c = gi::unwrap (flags);
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (file_to_c), (::GKeyFileFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GKeyFile* /*full*/ g_key_file_ref (GKeyFile* key_file /*none*/);
// ::GKeyFile* /*full*/ g_key_file_ref (::GKeyFile* key_file /*none*/);
// IGNORE; marked ignore

// gboolean g_key_file_remove_comment (GKeyFile* key_file /*none*/, const gchar* group_name /*none,nullable*/, const gchar* key /*none,nullable*/, GError ** error);
// gboolean g_key_file_remove_comment (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, const char* key /*none,nullable*/, GError ** error);
bool base::KeyFileBase::remove_comment (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_comment ()
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_comment (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_comment;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::KeyFileBase::remove_comment (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_comment;
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_key_file_remove_group (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, GError ** error);
// gboolean g_key_file_remove_group (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, GError ** error);
bool base::KeyFileBase::remove_group (const gi::cstring_v group_name)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_group (const gi::cstring_v group_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_key_file_remove_key (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gboolean g_key_file_remove_key (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
bool base::KeyFileBase::remove_key (const gi::cstring_v group_name, const gi::cstring_v key)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::remove_key (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_remove_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_key_file_save_to_file (GKeyFile* key_file /*none*/, const gchar* filename /*none*/, GError ** error);
// gboolean g_key_file_save_to_file (::GKeyFile* key_file /*none*/, const char* filename /*none*/, GError ** error);
bool base::KeyFileBase::save_to_file (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_save_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::save_to_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_save_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_key_file_set_boolean (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gboolean value);
// void g_key_file_set_boolean (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gboolean value);
void base::KeyFileBase::set_boolean (const gi::cstring_v group_name, const gi::cstring_v key, gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_boolean;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gboolean) (value_to_c));
}

// void g_key_file_set_boolean_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gboolean* list /*none*/, gsize length);
// void g_key_file_set_boolean_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gboolean* list /*none*/, gsize length);
void base::KeyFileBase::set_boolean_list (const gi::cstring_v group_name, const gi::cstring_v key, const gboolean * list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gboolean* list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_boolean_list;
  auto list_to_c = list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gboolean*) (list_to_c), (gsize) (length));
}

// gboolean g_key_file_set_comment (GKeyFile* key_file /*none*/, const gchar* group_name /*none,nullable*/, const gchar* key /*none,nullable*/, const gchar* comment /*none*/, GError ** error);
// gboolean g_key_file_set_comment (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, const char* key /*none,nullable*/, const char* comment /*none*/, GError ** error);
bool base::KeyFileBase::set_comment (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v comment)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::set_comment (const gi::cstring_v comment)
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none);
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::KeyFileBase::set_comment (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v comment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::KeyFileBase::set_comment (const gi::cstring_v comment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_comment;
  auto comment_to_c = gi::unwrap (comment, gi::transfer_none);
  auto key_to_c = nullptr;
  auto group_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (comment_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_key_file_set_double (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gdouble value);
// void g_key_file_set_double (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gdouble value);
void base::KeyFileBase::set_double (const gi::cstring_v group_name, const gi::cstring_v key, gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_double;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gdouble) (value_to_c));
}

// void g_key_file_set_double_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gdouble* list /*none*/, gsize length);
// void g_key_file_set_double_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gdouble* list /*none*/, gsize length);
void base::KeyFileBase::set_double_list (const gi::cstring_v group_name, const gi::cstring_v key, const gdouble * list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gdouble* list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_double_list;
  auto list_to_c = list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gdouble*) (list_to_c), (gsize) (length));
}

// void g_key_file_set_int64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gint64 value);
// void g_key_file_set_int64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gint64 value);
void base::KeyFileBase::set_int64 (const gi::cstring_v group_name, const gi::cstring_v key, gint64 value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_int64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gint64) (value_to_c));
}

// void g_key_file_set_integer (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gint value);
// void g_key_file_set_integer (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gint value);
void base::KeyFileBase::set_integer (const gi::cstring_v group_name, const gi::cstring_v key, gint value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_integer;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gint) (value_to_c));
}

// void g_key_file_set_integer_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gint* list /*none*/, gsize length);
// void g_key_file_set_integer_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gint* list /*none*/, gsize length);
void base::KeyFileBase::set_integer_list (const gi::cstring_v group_name, const gi::cstring_v key, const gint * list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, gint* list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_integer_list;
  auto list_to_c = list;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (gint*) (list_to_c), (gsize) (length));
}

// void g_key_file_set_list_separator (GKeyFile* key_file /*none*/, gchar separator);
// void g_key_file_set_list_separator (::GKeyFile* key_file /*none*/, gchar separator);
void base::KeyFileBase::set_list_separator (gchar separator) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, gchar separator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_list_separator;
  auto separator_to_c = separator;
  call_wrap_v ((::GKeyFile*) (gobj_()), (gchar) (separator_to_c));
}

// void g_key_file_set_locale_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none*/, const gchar* string /*none*/);
// void g_key_file_set_locale_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none*/, const char* string /*none*/);
void base::KeyFileBase::set_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, const gi::cstring_v string) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_locale_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (const char*) (string_to_c));
}

// void g_key_file_set_locale_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none*/, const gchar* const* list /*none*/, gsize length);
// void g_key_file_set_locale_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none*/, const char** list /*none*/, gsize length);
void base::KeyFileBase::set_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char** list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_locale_string_list;
  auto length_to_c = length;
  auto list_w = unwrap (std::move(list), gi::transfer_none);
  auto list_to_c = list_w;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (locale_to_c), (const char**) (list_to_c), (gsize) (length_to_c));
}

// void g_key_file_set_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* string /*none*/);
// void g_key_file_set_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* string /*none*/);
void base::KeyFileBase::set_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v string) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (string_to_c));
}

// void g_key_file_set_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* const* list /*none*/, gsize length);
// void g_key_file_set_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char** list /*none*/, gsize length);
void base::KeyFileBase::set_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> list, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char** list, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_string_list;
  auto length_to_c = length;
  auto list_w = unwrap (std::move(list), gi::transfer_none);
  auto list_to_c = list_w;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char**) (list_to_c), (gsize) (length_to_c));
}

// void g_key_file_set_uint64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, guint64 value);
// void g_key_file_set_uint64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, guint64 value);
void base::KeyFileBase::set_uint64 (const gi::cstring_v group_name, const gi::cstring_v key, guint64 value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_uint64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (guint64) (value_to_c));
}

// void g_key_file_set_value (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* value /*none*/);
// void g_key_file_set_value (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* value /*none*/);
void base::KeyFileBase::set_value (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GKeyFile*) (gobj_()), (const char*) (group_name_to_c), (const char*) (key_to_c), (const char*) (value_to_c));
}

// gchar* /*full*/ g_key_file_to_data (GKeyFile* key_file /*none*/, gsize* length, GError ** error);
// char* /*full*/ g_key_file_to_data (::GKeyFile* key_file /*none*/, gsize* length, GError ** error);
gi::cstring base::KeyFileBase::to_data (gsize * length)
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_to_data;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::KeyFileBase::to_data (gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_to_data;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<gi::cstring, gsize> base::KeyFileBase::to_data ()
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_to_data;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (&length_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<gi::cstring, gsize> base::KeyFileBase::to_data (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GKeyFile* key_file, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_to_data;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (gobj_()), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = length_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_key_file_unref (GKeyFile* key_file /*none*/);
// void g_key_file_unref (::GKeyFile* key_file /*none*/);
// IGNORE; marked ignore

// GQuark g_key_file_error_quark ();
// ::GQuark g_key_file_error_quark ();
GLib::Quark base::KeyFileBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_key_file_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra_def_impl.hpp>)
#include <glib/keyfile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra_impl.hpp>)
#include <glib/keyfile_extra_impl.hpp>
#endif
#endif

#endif
