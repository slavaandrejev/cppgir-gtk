// AUTO-GENERATED

#ifndef _GI_GIO_FILEINFO_IMPL_HPP_
#define _GI_GIO_FILEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFileInfo* /*full*/ g_file_info_new ();
// ::GFileInfo* /*full*/ g_file_info_new ();
Gio::FileInfo base::FileInfoBase::new_ () noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_info_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_info_clear_status (GFileInfo* info /*none*/);
// void g_file_info_clear_status (::GFileInfo* info /*none*/);
void base::FileInfoBase::clear_status () noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_clear_status;
  call_wrap_v ((::GFileInfo*) (gobj_()));
}

// void g_file_info_copy_into (GFileInfo* src_info /*none*/, GFileInfo* dest_info /*none*/);
// void g_file_info_copy_into (::GFileInfo* src_info /*none*/, ::GFileInfo* dest_info /*none*/);
void base::FileInfoBase::copy_into (Gio::FileInfo dest_info) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* src_info, ::GFileInfo* dest_info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_copy_into;
  auto dest_info_to_c = gi::unwrap (dest_info, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GFileInfo*) (dest_info_to_c));
}

// GFileInfo* /*full*/ g_file_info_dup (GFileInfo* other /*none*/);
// ::GFileInfo* /*full*/ g_file_info_dup (::GFileInfo* other /*none*/);
Gio::FileInfo base::FileInfoBase::dup () noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInfo* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_dup;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDateTime* /*full,nullable*/ g_file_info_get_access_date_time (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_access_date_time (::GFileInfo* info /*none*/);
GLib::DateTime base::FileInfoBase::get_access_date_time () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_access_date_time;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_file_info_get_attribute_as_string (GFileInfo* info /*none*/, const char* attribute /*none*/);
// char* /*full,nullable*/ g_file_info_get_attribute_as_string (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gi::cstring base::FileInfoBase::get_attribute_as_string (const gi::cstring_v attribute) noexcept
{
  typedef char* (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_as_string;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_info_get_attribute_boolean (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gboolean g_file_info_get_attribute_boolean (::GFileInfo* info /*none*/, const char* attribute /*none*/);
bool base::FileInfoBase::get_attribute_boolean (const gi::cstring_v attribute) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_boolean;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_file_info_get_attribute_byte_string (GFileInfo* info /*none*/, const char* attribute /*none*/);
// const char* /*none,nullable*/ g_file_info_get_attribute_byte_string (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gi::cstring_v base::FileInfoBase::get_attribute_byte_string (const gi::cstring_v attribute) noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_byte_string;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_file_info_get_attribute_data (GFileInfo* info /*none*/, const char* attribute /*none*/, GFileAttributeType* type, gpointer* value_pp, GFileAttributeStatus* status);
// gboolean g_file_info_get_attribute_data (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GFileAttributeType* type, void** value_pp, ::GFileAttributeStatus* status);
bool base::FileInfoBase::get_attribute_data (const gi::cstring_v attribute, Gio::FileAttributeType * type, gpointer * value_pp, Gio::FileAttributeStatus * status) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info, const char* attribute, ::GFileAttributeType* type, void** value_pp, ::GFileAttributeStatus* status);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_data;
  ::GFileAttributeStatus status_o {};
  void* value_pp_o {};
  ::GFileAttributeType type_o {};
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType*) (type ? &type_o : nullptr), (void**) (value_pp ? &value_pp_o : nullptr), (::GFileAttributeStatus*) (status ? &status_o : nullptr));
  if (status) *status = gi::wrap (status_o);
  if (value_pp) *value_pp = value_pp_o;
  if (type) *type = gi::wrap (type_o);
  return _temp_ret;
}
std::tuple<bool, Gio::FileAttributeType, gpointer, Gio::FileAttributeStatus> base::FileInfoBase::get_attribute_data (const gi::cstring_v attribute) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info, const char* attribute, ::GFileAttributeType* type, void** value_pp, ::GFileAttributeStatus* status);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_data;
  ::GFileAttributeStatus status_o {};
  void* value_pp_o {};
  ::GFileAttributeType type_o {};
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType*) (&type_o), (void**) (&value_pp_o), (::GFileAttributeStatus*) (&status_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (type_o);
  auto &&tmp_return_3 = value_pp_o;
  auto &&tmp_return_4 = gi::wrap (status_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// const char* /*none,nullable*/ g_file_info_get_attribute_file_path (GFileInfo* info /*none*/, const char* attribute /*none*/);
// const char* /*none,nullable*/ g_file_info_get_attribute_file_path (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gi::cstring_v base::FileInfoBase::get_attribute_file_path (const gi::cstring_v attribute) noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_file_path;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint32 g_file_info_get_attribute_int32 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gint32 g_file_info_get_attribute_int32 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gint32 base::FileInfoBase::get_attribute_int32 (const gi::cstring_v attribute) noexcept
{
  typedef gint32 (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_int32;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// gint64 g_file_info_get_attribute_int64 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gint64 g_file_info_get_attribute_int64 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gint64 base::FileInfoBase::get_attribute_int64 (const gi::cstring_v attribute) noexcept
{
  typedef gint64 (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_int64;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// GObject* /*none,nullable*/ g_file_info_get_attribute_object (GFileInfo* info /*none*/, const char* attribute /*none*/);
// ::GObject* /*none,nullable*/ g_file_info_get_attribute_object (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GObject::Object base::FileInfoBase::get_attribute_object (const gi::cstring_v attribute) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_object;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFileAttributeStatus g_file_info_get_attribute_status (GFileInfo* info /*none*/, const char* attribute /*none*/);
// ::GFileAttributeStatus g_file_info_get_attribute_status (::GFileInfo* info /*none*/, const char* attribute /*none*/);
Gio::FileAttributeStatus base::FileInfoBase::get_attribute_status (const gi::cstring_v attribute) noexcept
{
  typedef ::GFileAttributeStatus (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_status;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ g_file_info_get_attribute_string (GFileInfo* info /*none*/, const char* attribute /*none*/);
// const char* /*none,nullable*/ g_file_info_get_attribute_string (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gi::cstring_v base::FileInfoBase::get_attribute_string (const gi::cstring_v attribute) noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_string;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// char** /*none,nullable*/ g_file_info_get_attribute_stringv (GFileInfo* info /*none*/, const char* attribute /*none*/);
// char** /*none,nullable*/ g_file_info_get_attribute_stringv (::GFileInfo* info /*none*/, const char* attribute /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::FileInfoBase::get_attribute_stringv (const gi::cstring_v attribute) noexcept
{
  typedef char** (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_stringv;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// GFileAttributeType g_file_info_get_attribute_type (GFileInfo* info /*none*/, const char* attribute /*none*/);
// ::GFileAttributeType g_file_info_get_attribute_type (::GFileInfo* info /*none*/, const char* attribute /*none*/);
Gio::FileAttributeType base::FileInfoBase::get_attribute_type (const gi::cstring_v attribute) noexcept
{
  typedef ::GFileAttributeType (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_type;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return gi::wrap (_temp_ret);
}

// guint32 g_file_info_get_attribute_uint32 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// guint32 g_file_info_get_attribute_uint32 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
guint32 base::FileInfoBase::get_attribute_uint32 (const gi::cstring_v attribute) noexcept
{
  typedef guint32 (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_uint32;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// guint64 g_file_info_get_attribute_uint64 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// guint64 g_file_info_get_attribute_uint64 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
guint64 base::FileInfoBase::get_attribute_uint64 (const gi::cstring_v attribute) noexcept
{
  typedef guint64 (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_attribute_uint64;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_file_info_get_content_type (GFileInfo* info /*none*/);
// const char* /*none,nullable*/ g_file_info_get_content_type (::GFileInfo* info /*none*/);
gi::cstring_v base::FileInfoBase::get_content_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_content_type;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GDateTime* /*full,nullable*/ g_file_info_get_creation_date_time (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_creation_date_time (::GFileInfo* info /*none*/);
GLib::DateTime base::FileInfoBase::get_creation_date_time () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_creation_date_time;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDateTime* /*full,nullable*/ g_file_info_get_deletion_date (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_deletion_date (::GFileInfo* info /*none*/);
GLib::DateTime base::FileInfoBase::get_deletion_date () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_deletion_date;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ g_file_info_get_display_name (GFileInfo* info /*none*/);
// const char* /*none*/ g_file_info_get_display_name (::GFileInfo* info /*none*/);
gi::cstring_v base::FileInfoBase::get_display_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_display_name;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_file_info_get_edit_name (GFileInfo* info /*none*/);
// const char* /*none*/ g_file_info_get_edit_name (::GFileInfo* info /*none*/);
gi::cstring_v base::FileInfoBase::get_edit_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_edit_name;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_file_info_get_etag (GFileInfo* info /*none*/);
// const char* /*none,nullable*/ g_file_info_get_etag (::GFileInfo* info /*none*/);
gi::cstring_v base::FileInfoBase::get_etag () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_etag;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFileType g_file_info_get_file_type (GFileInfo* info /*none*/);
// ::GFileType g_file_info_get_file_type (::GFileInfo* info /*none*/);
Gio::FileType base::FileInfoBase::get_file_type () noexcept
{
  typedef ::GFileType (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_file_type;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GIcon* /*none,nullable*/ g_file_info_get_icon (GFileInfo* info /*none*/);
// ::GIcon* /*none,nullable*/ g_file_info_get_icon (::GFileInfo* info /*none*/);
Gio::Icon base::FileInfoBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_icon;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_file_info_get_is_backup (GFileInfo* info /*none*/);
// gboolean g_file_info_get_is_backup (::GFileInfo* info /*none*/);
bool base::FileInfoBase::get_is_backup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_is_backup;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_info_get_is_hidden (GFileInfo* info /*none*/);
// gboolean g_file_info_get_is_hidden (::GFileInfo* info /*none*/);
bool base::FileInfoBase::get_is_hidden () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_is_hidden;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_info_get_is_symlink (GFileInfo* info /*none*/);
// gboolean g_file_info_get_is_symlink (::GFileInfo* info /*none*/);
bool base::FileInfoBase::get_is_symlink () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_is_symlink;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return _temp_ret;
}

// GDateTime* /*full,nullable*/ g_file_info_get_modification_date_time (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_modification_date_time (::GFileInfo* info /*none*/);
GLib::DateTime base::FileInfoBase::get_modification_date_time () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_modification_date_time;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_info_get_modification_time (GFileInfo* info /*none*/, GTimeVal* result /*none,out,ca*/);
// void g_file_info_get_modification_time (::GFileInfo* info /*none*/,  result /*none,out,ca*/);
// IGNORE; deprecated

// const char* /*none*/ g_file_info_get_name (GFileInfo* info /*none*/);
// const char* /*none*/ g_file_info_get_name (::GFileInfo* info /*none*/);
gi::cstring_v base::FileInfoBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_name;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// goffset g_file_info_get_size (GFileInfo* info /*none*/);
// gint64 g_file_info_get_size (::GFileInfo* info /*none*/);
gint64 base::FileInfoBase::get_size () noexcept
{
  typedef gint64 (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_size;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return _temp_ret;
}

// gint32 g_file_info_get_sort_order (GFileInfo* info /*none*/);
// gint32 g_file_info_get_sort_order (::GFileInfo* info /*none*/);
gint32 base::FileInfoBase::get_sort_order () noexcept
{
  typedef gint32 (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_sort_order;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return _temp_ret;
}

// GIcon* /*none,nullable*/ g_file_info_get_symbolic_icon (GFileInfo* info /*none*/);
// ::GIcon* /*none,nullable*/ g_file_info_get_symbolic_icon (::GFileInfo* info /*none*/);
Gio::Icon base::FileInfoBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_file_info_get_symlink_target (GFileInfo* info /*none*/);
// const char* /*none,nullable*/ g_file_info_get_symlink_target (::GFileInfo* info /*none*/);
gi::cstring_v base::FileInfoBase::get_symlink_target () noexcept
{
  typedef const char* (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_get_symlink_target;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_file_info_has_attribute (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gboolean g_file_info_has_attribute (::GFileInfo* info /*none*/, const char* attribute /*none*/);
bool base::FileInfoBase::has_attribute (const gi::cstring_v attribute) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_has_attribute;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
  return _temp_ret;
}

// gboolean g_file_info_has_namespace (GFileInfo* info /*none*/, const char* name_space /*none*/);
// gboolean g_file_info_has_namespace (::GFileInfo* info /*none*/, const char* name_space /*none*/);
bool base::FileInfoBase::has_namespace (const gi::cstring_v name_space) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info, const char* name_space);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_has_namespace;
  auto name_space_to_c = gi::unwrap (name_space, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (name_space_to_c));
  return _temp_ret;
}

// char** /*full,nullable*/ g_file_info_list_attributes (GFileInfo* info /*none*/, const char* name_space /*none,nullable*/);
// char** /*full,nullable*/ g_file_info_list_attributes (::GFileInfo* info /*none*/, const char* name_space /*none,nullable*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::FileInfoBase::list_attributes (const gi::cstring_v name_space) noexcept
{
  typedef char** (*call_wrap_t) (::GFileInfo* info, const char* name_space);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_list_attributes;
  auto name_space_to_c = gi::unwrap (name_space, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (name_space_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::FileInfoBase::list_attributes () noexcept
{
  typedef char** (*call_wrap_t) (::GFileInfo* info, const char* name_space);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_list_attributes;
  auto name_space_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (name_space_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_file_info_remove_attribute (GFileInfo* info /*none*/, const char* attribute /*none*/);
// void g_file_info_remove_attribute (::GFileInfo* info /*none*/, const char* attribute /*none*/);
void base::FileInfoBase::remove_attribute (const gi::cstring_v attribute) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_remove_attribute;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c));
}

// void g_file_info_set_access_date_time (GFileInfo* info /*none*/, GDateTime* atime /*none*/);
// void g_file_info_set_access_date_time (::GFileInfo* info /*none*/, ::GDateTime* atime /*none*/);
void base::FileInfoBase::set_access_date_time (GLib::DateTime_Ref atime) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GDateTime* atime);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_access_date_time;
  auto atime_to_c = gi::unwrap (atime, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GDateTime*) (atime_to_c));
}

// void g_file_info_set_attribute (GFileInfo* info /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p);
// void g_file_info_set_attribute (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p);
void base::FileInfoBase::set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, ::GFileAttributeType type, void* value_p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute;
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c));
}

// void g_file_info_set_attribute_boolean (GFileInfo* info /*none*/, const char* attribute /*none*/, gboolean attr_value);
// void g_file_info_set_attribute_boolean (::GFileInfo* info /*none*/, const char* attribute /*none*/, gboolean attr_value);
void base::FileInfoBase::set_attribute_boolean (const gi::cstring_v attribute, gboolean attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, gboolean attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_boolean;
  auto attr_value_to_c = attr_value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (gboolean) (attr_value_to_c));
}

// void g_file_info_set_attribute_byte_string (GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
// void g_file_info_set_attribute_byte_string (::GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
void base::FileInfoBase::set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, const char* attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_byte_string;
  auto attr_value_to_c = gi::unwrap (attr_value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (const char*) (attr_value_to_c));
}

// void g_file_info_set_attribute_file_path (GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
// void g_file_info_set_attribute_file_path (::GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
void base::FileInfoBase::set_attribute_file_path (const gi::cstring_v attribute, const gi::cstring_v attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, const char* attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_file_path;
  auto attr_value_to_c = gi::unwrap (attr_value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (const char*) (attr_value_to_c));
}

// void g_file_info_set_attribute_int32 (GFileInfo* info /*none*/, const char* attribute /*none*/, gint32 attr_value);
// void g_file_info_set_attribute_int32 (::GFileInfo* info /*none*/, const char* attribute /*none*/, gint32 attr_value);
void base::FileInfoBase::set_attribute_int32 (const gi::cstring_v attribute, gint32 attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, gint32 attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_int32;
  auto attr_value_to_c = attr_value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (gint32) (attr_value_to_c));
}

// void g_file_info_set_attribute_int64 (GFileInfo* info /*none*/, const char* attribute /*none*/, gint64 attr_value);
// void g_file_info_set_attribute_int64 (::GFileInfo* info /*none*/, const char* attribute /*none*/, gint64 attr_value);
void base::FileInfoBase::set_attribute_int64 (const gi::cstring_v attribute, gint64 attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, gint64 attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_int64;
  auto attr_value_to_c = attr_value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (gint64) (attr_value_to_c));
}

// void g_file_info_set_attribute_mask (GFileInfo* info /*none*/, GFileAttributeMatcher* mask /*none*/);
// void g_file_info_set_attribute_mask (::GFileInfo* info /*none*/, ::GFileAttributeMatcher* mask /*none*/);
void base::FileInfoBase::set_attribute_mask (Gio::FileAttributeMatcher_Ref mask) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GFileAttributeMatcher* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_mask;
  auto mask_to_c = gi::unwrap (mask, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GFileAttributeMatcher*) (mask_to_c));
}

// void g_file_info_set_attribute_object (GFileInfo* info /*none*/, const char* attribute /*none*/, GObject* attr_value /*none*/);
// void g_file_info_set_attribute_object (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GObject* attr_value /*none*/);
void base::FileInfoBase::set_attribute_object (const gi::cstring_v attribute, GObject::Object attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, ::GObject* attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_object;
  auto attr_value_to_c = gi::unwrap (attr_value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (::GObject*) (attr_value_to_c));
}

// gboolean g_file_info_set_attribute_status (GFileInfo* info /*none*/, const char* attribute /*none*/, GFileAttributeStatus status);
// gboolean g_file_info_set_attribute_status (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GFileAttributeStatus status);
bool base::FileInfoBase::set_attribute_status (const gi::cstring_v attribute, Gio::FileAttributeStatus status) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileInfo* info, const char* attribute, ::GFileAttributeStatus status);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_status;
  auto status_to_c = gi::unwrap (status);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeStatus) (status_to_c));
  return _temp_ret;
}

// void g_file_info_set_attribute_string (GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
// void g_file_info_set_attribute_string (::GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
void base::FileInfoBase::set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, const char* attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_string;
  auto attr_value_to_c = gi::unwrap (attr_value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (const char*) (attr_value_to_c));
}

// void g_file_info_set_attribute_stringv (GFileInfo* info /*none*/, const char* attribute /*none*/, char** attr_value /*none*/);
// void g_file_info_set_attribute_stringv (::GFileInfo* info /*none*/, const char* attribute /*none*/, char** attr_value /*none*/);
void base::FileInfoBase::set_attribute_stringv (const gi::cstring_v attribute, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, char** attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_stringv;
  auto attr_value_w = unwrap (std::move(attr_value), gi::transfer_none);
  auto attr_value_to_c = attr_value_w;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (char**) (attr_value_to_c));
}

// void g_file_info_set_attribute_uint32 (GFileInfo* info /*none*/, const char* attribute /*none*/, guint32 attr_value);
// void g_file_info_set_attribute_uint32 (::GFileInfo* info /*none*/, const char* attribute /*none*/, guint32 attr_value);
void base::FileInfoBase::set_attribute_uint32 (const gi::cstring_v attribute, guint32 attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, guint32 attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_uint32;
  auto attr_value_to_c = attr_value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (guint32) (attr_value_to_c));
}

// void g_file_info_set_attribute_uint64 (GFileInfo* info /*none*/, const char* attribute /*none*/, guint64 attr_value);
// void g_file_info_set_attribute_uint64 (::GFileInfo* info /*none*/, const char* attribute /*none*/, guint64 attr_value);
void base::FileInfoBase::set_attribute_uint64 (const gi::cstring_v attribute, guint64 attr_value) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* attribute, guint64 attr_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_attribute_uint64;
  auto attr_value_to_c = attr_value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (attribute_to_c), (guint64) (attr_value_to_c));
}

// void g_file_info_set_content_type (GFileInfo* info /*none*/, const char* content_type /*none*/);
// void g_file_info_set_content_type (::GFileInfo* info /*none*/, const char* content_type /*none*/);
void base::FileInfoBase::set_content_type (const gi::cstring_v content_type) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_content_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (content_type_to_c));
}

// void g_file_info_set_creation_date_time (GFileInfo* info /*none*/, GDateTime* creation_time /*none*/);
// void g_file_info_set_creation_date_time (::GFileInfo* info /*none*/, ::GDateTime* creation_time /*none*/);
void base::FileInfoBase::set_creation_date_time (GLib::DateTime_Ref creation_time) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GDateTime* creation_time);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_creation_date_time;
  auto creation_time_to_c = gi::unwrap (creation_time, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GDateTime*) (creation_time_to_c));
}

// void g_file_info_set_display_name (GFileInfo* info /*none*/, const char* display_name /*none*/);
// void g_file_info_set_display_name (::GFileInfo* info /*none*/, const char* display_name /*none*/);
void base::FileInfoBase::set_display_name (const gi::cstring_v display_name) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* display_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_display_name;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (display_name_to_c));
}

// void g_file_info_set_edit_name (GFileInfo* info /*none*/, const char* edit_name /*none*/);
// void g_file_info_set_edit_name (::GFileInfo* info /*none*/, const char* edit_name /*none*/);
void base::FileInfoBase::set_edit_name (const gi::cstring_v edit_name) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* edit_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_edit_name;
  auto edit_name_to_c = gi::unwrap (edit_name, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (edit_name_to_c));
}

// void g_file_info_set_file_type (GFileInfo* info /*none*/, GFileType type);
// void g_file_info_set_file_type (::GFileInfo* info /*none*/, ::GFileType type);
void base::FileInfoBase::set_file_type (Gio::FileType type) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GFileType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_file_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GFileType) (type_to_c));
}

// void g_file_info_set_icon (GFileInfo* info /*none*/, GIcon* icon /*none*/);
// void g_file_info_set_icon (::GFileInfo* info /*none*/, ::GIcon* icon /*none*/);
void base::FileInfoBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void g_file_info_set_is_hidden (GFileInfo* info /*none*/, gboolean is_hidden);
// void g_file_info_set_is_hidden (::GFileInfo* info /*none*/, gboolean is_hidden);
void base::FileInfoBase::set_is_hidden (gboolean is_hidden) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, gboolean is_hidden);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_is_hidden;
  auto is_hidden_to_c = is_hidden;
  call_wrap_v ((::GFileInfo*) (gobj_()), (gboolean) (is_hidden_to_c));
}

// void g_file_info_set_is_symlink (GFileInfo* info /*none*/, gboolean is_symlink);
// void g_file_info_set_is_symlink (::GFileInfo* info /*none*/, gboolean is_symlink);
void base::FileInfoBase::set_is_symlink (gboolean is_symlink) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, gboolean is_symlink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_is_symlink;
  auto is_symlink_to_c = is_symlink;
  call_wrap_v ((::GFileInfo*) (gobj_()), (gboolean) (is_symlink_to_c));
}

// void g_file_info_set_modification_date_time (GFileInfo* info /*none*/, GDateTime* mtime /*none*/);
// void g_file_info_set_modification_date_time (::GFileInfo* info /*none*/, ::GDateTime* mtime /*none*/);
void base::FileInfoBase::set_modification_date_time (GLib::DateTime_Ref mtime) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GDateTime* mtime);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_modification_date_time;
  auto mtime_to_c = gi::unwrap (mtime, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GDateTime*) (mtime_to_c));
}

// void g_file_info_set_modification_time (GFileInfo* info /*none*/, GTimeVal* mtime /*none*/);
// void g_file_info_set_modification_time (::GFileInfo* info /*none*/,  mtime /*none*/);
// IGNORE; deprecated

// void g_file_info_set_name (GFileInfo* info /*none*/, const char* name /*none*/);
// void g_file_info_set_name (::GFileInfo* info /*none*/, const char* name /*none*/);
void base::FileInfoBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (name_to_c));
}

// void g_file_info_set_size (GFileInfo* info /*none*/, goffset size);
// void g_file_info_set_size (::GFileInfo* info /*none*/, gint64 size);
void base::FileInfoBase::set_size (gint64 size) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, gint64 size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_size;
  auto size_to_c = size;
  call_wrap_v ((::GFileInfo*) (gobj_()), (gint64) (size_to_c));
}

// void g_file_info_set_sort_order (GFileInfo* info /*none*/, gint32 sort_order);
// void g_file_info_set_sort_order (::GFileInfo* info /*none*/, gint32 sort_order);
void base::FileInfoBase::set_sort_order (gint32 sort_order) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, gint32 sort_order);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_sort_order;
  auto sort_order_to_c = sort_order;
  call_wrap_v ((::GFileInfo*) (gobj_()), (gint32) (sort_order_to_c));
}

// void g_file_info_set_symbolic_icon (GFileInfo* info /*none*/, GIcon* icon /*none*/);
// void g_file_info_set_symbolic_icon (::GFileInfo* info /*none*/, ::GIcon* icon /*none*/);
void base::FileInfoBase::set_symbolic_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_symbolic_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void g_file_info_set_symlink_target (GFileInfo* info /*none*/, const char* symlink_target /*none*/);
// void g_file_info_set_symlink_target (::GFileInfo* info /*none*/, const char* symlink_target /*none*/);
void base::FileInfoBase::set_symlink_target (const gi::cstring_v symlink_target) noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info, const char* symlink_target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_set_symlink_target;
  auto symlink_target_to_c = gi::unwrap (symlink_target, gi::transfer_none);
  call_wrap_v ((::GFileInfo*) (gobj_()), (const char*) (symlink_target_to_c));
}

// void g_file_info_unset_attribute_mask (GFileInfo* info /*none*/);
// void g_file_info_unset_attribute_mask (::GFileInfo* info /*none*/);
void base::FileInfoBase::unset_attribute_mask () noexcept
{
  typedef void (*call_wrap_t) (::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_info_unset_attribute_mask;
  call_wrap_v ((::GFileInfo*) (gobj_()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinfo_extra_def_impl.hpp>)
#include <gio/fileinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinfo_extra_impl.hpp>)
#include <gio/fileinfo_extra_impl.hpp>
#endif
#endif

#endif
