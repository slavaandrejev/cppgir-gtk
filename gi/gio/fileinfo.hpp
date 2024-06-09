// AUTO-GENERATED

#ifndef _GI_GIO_FILEINFO_HPP_
#define _GI_GIO_FILEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class FileAttributeMatcher;
class FileAttributeMatcher_Ref;
class Icon;

class FileInfo;

namespace base {


#define GI_GIO_FILEINFO_BASE base::FileInfoBase
class FileInfoBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFileInfo BaseObjectType;

FileInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_info_get_type(); } 

// GFileInfo* /*full*/ g_file_info_new ();
// ::GFileInfo* /*full*/ g_file_info_new ();
static GI_INLINE_DECL Gio::FileInfo new_ () noexcept;

// void g_file_info_clear_status (GFileInfo* info /*none*/);
// void g_file_info_clear_status (::GFileInfo* info /*none*/);
GI_INLINE_DECL void clear_status () noexcept;

// void g_file_info_copy_into (GFileInfo* src_info /*none*/, GFileInfo* dest_info /*none*/);
// void g_file_info_copy_into (::GFileInfo* src_info /*none*/, ::GFileInfo* dest_info /*none*/);
GI_INLINE_DECL void copy_into (Gio::FileInfo dest_info) noexcept;

// GFileInfo* /*full*/ g_file_info_dup (GFileInfo* other /*none*/);
// ::GFileInfo* /*full*/ g_file_info_dup (::GFileInfo* other /*none*/);
GI_INLINE_DECL Gio::FileInfo dup () noexcept;

// GDateTime* /*full,nullable*/ g_file_info_get_access_date_time (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_access_date_time (::GFileInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime get_access_date_time () noexcept;

// char* /*full,nullable*/ g_file_info_get_attribute_as_string (GFileInfo* info /*none*/, const char* attribute /*none*/);
// char* /*full,nullable*/ g_file_info_get_attribute_as_string (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gi::cstring get_attribute_as_string (const gi::cstring_v attribute) noexcept;

// gboolean g_file_info_get_attribute_boolean (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gboolean g_file_info_get_attribute_boolean (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL bool get_attribute_boolean (const gi::cstring_v attribute) noexcept;

// const char* /*none,nullable*/ g_file_info_get_attribute_byte_string (GFileInfo* info /*none*/, const char* attribute /*none*/);
// const char* /*none,nullable*/ g_file_info_get_attribute_byte_string (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gi::cstring_v get_attribute_byte_string (const gi::cstring_v attribute) noexcept;

// gboolean g_file_info_get_attribute_data (GFileInfo* info /*none*/, const char* attribute /*none*/, GFileAttributeType* type, gpointer* value_pp, GFileAttributeStatus* status);
// gboolean g_file_info_get_attribute_data (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GFileAttributeType* type, void** value_pp, ::GFileAttributeStatus* status);
GI_INLINE_DECL bool get_attribute_data (const gi::cstring_v attribute, Gio::FileAttributeType * type, gpointer * value_pp, Gio::FileAttributeStatus * status) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileAttributeType, gpointer, Gio::FileAttributeStatus> get_attribute_data (const gi::cstring_v attribute) noexcept;

// const char* /*none,nullable*/ g_file_info_get_attribute_file_path (GFileInfo* info /*none*/, const char* attribute /*none*/);
// const char* /*none,nullable*/ g_file_info_get_attribute_file_path (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gi::cstring_v get_attribute_file_path (const gi::cstring_v attribute) noexcept;

// gint32 g_file_info_get_attribute_int32 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gint32 g_file_info_get_attribute_int32 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gint32 get_attribute_int32 (const gi::cstring_v attribute) noexcept;

// gint64 g_file_info_get_attribute_int64 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gint64 g_file_info_get_attribute_int64 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gint64 get_attribute_int64 (const gi::cstring_v attribute) noexcept;

// GObject* /*none,nullable*/ g_file_info_get_attribute_object (GFileInfo* info /*none*/, const char* attribute /*none*/);
// ::GObject* /*none,nullable*/ g_file_info_get_attribute_object (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL GObject::Object get_attribute_object (const gi::cstring_v attribute) noexcept;

// GFileAttributeStatus g_file_info_get_attribute_status (GFileInfo* info /*none*/, const char* attribute /*none*/);
// ::GFileAttributeStatus g_file_info_get_attribute_status (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL Gio::FileAttributeStatus get_attribute_status (const gi::cstring_v attribute) noexcept;

// const char* /*none,nullable*/ g_file_info_get_attribute_string (GFileInfo* info /*none*/, const char* attribute /*none*/);
// const char* /*none,nullable*/ g_file_info_get_attribute_string (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gi::cstring_v get_attribute_string (const gi::cstring_v attribute) noexcept;

// char** /*none,nullable*/ g_file_info_get_attribute_stringv (GFileInfo* info /*none*/, const char* attribute /*none*/);
// char** /*none,nullable*/ g_file_info_get_attribute_stringv (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_attribute_stringv (const gi::cstring_v attribute) noexcept;

// GFileAttributeType g_file_info_get_attribute_type (GFileInfo* info /*none*/, const char* attribute /*none*/);
// ::GFileAttributeType g_file_info_get_attribute_type (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL Gio::FileAttributeType get_attribute_type (const gi::cstring_v attribute) noexcept;

// guint32 g_file_info_get_attribute_uint32 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// guint32 g_file_info_get_attribute_uint32 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL guint32 get_attribute_uint32 (const gi::cstring_v attribute) noexcept;

// guint64 g_file_info_get_attribute_uint64 (GFileInfo* info /*none*/, const char* attribute /*none*/);
// guint64 g_file_info_get_attribute_uint64 (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL guint64 get_attribute_uint64 (const gi::cstring_v attribute) noexcept;

// const char* /*none,nullable*/ g_file_info_get_content_type (GFileInfo* info /*none*/);
// const char* /*none,nullable*/ g_file_info_get_content_type (::GFileInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_content_type () noexcept;

// GDateTime* /*full,nullable*/ g_file_info_get_creation_date_time (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_creation_date_time (::GFileInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime get_creation_date_time () noexcept;

// GDateTime* /*full,nullable*/ g_file_info_get_deletion_date (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_deletion_date (::GFileInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime get_deletion_date () noexcept;

// const char* /*none*/ g_file_info_get_display_name (GFileInfo* info /*none*/);
// const char* /*none*/ g_file_info_get_display_name (::GFileInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_display_name () noexcept;

// const char* /*none*/ g_file_info_get_edit_name (GFileInfo* info /*none*/);
// const char* /*none*/ g_file_info_get_edit_name (::GFileInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_edit_name () noexcept;

// const char* /*none,nullable*/ g_file_info_get_etag (GFileInfo* info /*none*/);
// const char* /*none,nullable*/ g_file_info_get_etag (::GFileInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_etag () noexcept;

// GFileType g_file_info_get_file_type (GFileInfo* info /*none*/);
// ::GFileType g_file_info_get_file_type (::GFileInfo* info /*none*/);
GI_INLINE_DECL Gio::FileType get_file_type () noexcept;

// GIcon* /*none,nullable*/ g_file_info_get_icon (GFileInfo* info /*none*/);
// ::GIcon* /*none,nullable*/ g_file_info_get_icon (::GFileInfo* info /*none*/);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// gboolean g_file_info_get_is_backup (GFileInfo* info /*none*/);
// gboolean g_file_info_get_is_backup (::GFileInfo* info /*none*/);
GI_INLINE_DECL bool get_is_backup () noexcept;

// gboolean g_file_info_get_is_hidden (GFileInfo* info /*none*/);
// gboolean g_file_info_get_is_hidden (::GFileInfo* info /*none*/);
GI_INLINE_DECL bool get_is_hidden () noexcept;

// gboolean g_file_info_get_is_symlink (GFileInfo* info /*none*/);
// gboolean g_file_info_get_is_symlink (::GFileInfo* info /*none*/);
GI_INLINE_DECL bool get_is_symlink () noexcept;

// GDateTime* /*full,nullable*/ g_file_info_get_modification_date_time (GFileInfo* info /*none*/);
// ::GDateTime* /*full,nullable*/ g_file_info_get_modification_date_time (::GFileInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime get_modification_date_time () noexcept;

// void g_file_info_get_modification_time (GFileInfo* info /*none*/, GTimeVal* result /*none,out,ca*/);
// void g_file_info_get_modification_time (::GFileInfo* info /*none*/,  result /*none,out,ca*/);
// IGNORE; deprecated

// const char* /*none*/ g_file_info_get_name (GFileInfo* info /*none*/);
// const char* /*none*/ g_file_info_get_name (::GFileInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// goffset g_file_info_get_size (GFileInfo* info /*none*/);
// gint64 g_file_info_get_size (::GFileInfo* info /*none*/);
GI_INLINE_DECL gint64 get_size () noexcept;

// gint32 g_file_info_get_sort_order (GFileInfo* info /*none*/);
// gint32 g_file_info_get_sort_order (::GFileInfo* info /*none*/);
GI_INLINE_DECL gint32 get_sort_order () noexcept;

// GIcon* /*none,nullable*/ g_file_info_get_symbolic_icon (GFileInfo* info /*none*/);
// ::GIcon* /*none,nullable*/ g_file_info_get_symbolic_icon (::GFileInfo* info /*none*/);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// const char* /*none,nullable*/ g_file_info_get_symlink_target (GFileInfo* info /*none*/);
// const char* /*none,nullable*/ g_file_info_get_symlink_target (::GFileInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_symlink_target () noexcept;

// gboolean g_file_info_has_attribute (GFileInfo* info /*none*/, const char* attribute /*none*/);
// gboolean g_file_info_has_attribute (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL bool has_attribute (const gi::cstring_v attribute) noexcept;

// gboolean g_file_info_has_namespace (GFileInfo* info /*none*/, const char* name_space /*none*/);
// gboolean g_file_info_has_namespace (::GFileInfo* info /*none*/, const char* name_space /*none*/);
GI_INLINE_DECL bool has_namespace (const gi::cstring_v name_space) noexcept;

// char** /*full,nullable*/ g_file_info_list_attributes (GFileInfo* info /*none*/, const char* name_space /*none,nullable*/);
// char** /*full,nullable*/ g_file_info_list_attributes (::GFileInfo* info /*none*/, const char* name_space /*none,nullable*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_attributes (const gi::cstring_v name_space) noexcept;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_attributes () noexcept;

// void g_file_info_remove_attribute (GFileInfo* info /*none*/, const char* attribute /*none*/);
// void g_file_info_remove_attribute (::GFileInfo* info /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL void remove_attribute (const gi::cstring_v attribute) noexcept;

// void g_file_info_set_access_date_time (GFileInfo* info /*none*/, GDateTime* atime /*none*/);
// void g_file_info_set_access_date_time (::GFileInfo* info /*none*/, ::GDateTime* atime /*none*/);
GI_INLINE_DECL void set_access_date_time (GLib::DateTime_Ref atime) noexcept;

// void g_file_info_set_attribute (GFileInfo* info /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p);
// void g_file_info_set_attribute (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p);
GI_INLINE_DECL void set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p) noexcept;

// void g_file_info_set_attribute_boolean (GFileInfo* info /*none*/, const char* attribute /*none*/, gboolean attr_value);
// void g_file_info_set_attribute_boolean (::GFileInfo* info /*none*/, const char* attribute /*none*/, gboolean attr_value);
GI_INLINE_DECL void set_attribute_boolean (const gi::cstring_v attribute, gboolean attr_value) noexcept;

// void g_file_info_set_attribute_byte_string (GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
// void g_file_info_set_attribute_byte_string (::GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
GI_INLINE_DECL void set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v attr_value) noexcept;

// void g_file_info_set_attribute_file_path (GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
// void g_file_info_set_attribute_file_path (::GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
GI_INLINE_DECL void set_attribute_file_path (const gi::cstring_v attribute, const gi::cstring_v attr_value) noexcept;

// void g_file_info_set_attribute_int32 (GFileInfo* info /*none*/, const char* attribute /*none*/, gint32 attr_value);
// void g_file_info_set_attribute_int32 (::GFileInfo* info /*none*/, const char* attribute /*none*/, gint32 attr_value);
GI_INLINE_DECL void set_attribute_int32 (const gi::cstring_v attribute, gint32 attr_value) noexcept;

// void g_file_info_set_attribute_int64 (GFileInfo* info /*none*/, const char* attribute /*none*/, gint64 attr_value);
// void g_file_info_set_attribute_int64 (::GFileInfo* info /*none*/, const char* attribute /*none*/, gint64 attr_value);
GI_INLINE_DECL void set_attribute_int64 (const gi::cstring_v attribute, gint64 attr_value) noexcept;

// void g_file_info_set_attribute_mask (GFileInfo* info /*none*/, GFileAttributeMatcher* mask /*none*/);
// void g_file_info_set_attribute_mask (::GFileInfo* info /*none*/, ::GFileAttributeMatcher* mask /*none*/);
GI_INLINE_DECL void set_attribute_mask (Gio::FileAttributeMatcher_Ref mask) noexcept;

// void g_file_info_set_attribute_object (GFileInfo* info /*none*/, const char* attribute /*none*/, GObject* attr_value /*none*/);
// void g_file_info_set_attribute_object (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GObject* attr_value /*none*/);
GI_INLINE_DECL void set_attribute_object (const gi::cstring_v attribute, GObject::Object attr_value) noexcept;

// gboolean g_file_info_set_attribute_status (GFileInfo* info /*none*/, const char* attribute /*none*/, GFileAttributeStatus status);
// gboolean g_file_info_set_attribute_status (::GFileInfo* info /*none*/, const char* attribute /*none*/, ::GFileAttributeStatus status);
GI_INLINE_DECL bool set_attribute_status (const gi::cstring_v attribute, Gio::FileAttributeStatus status) noexcept;

// void g_file_info_set_attribute_string (GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
// void g_file_info_set_attribute_string (::GFileInfo* info /*none*/, const char* attribute /*none*/, const char* attr_value /*none*/);
GI_INLINE_DECL void set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v attr_value) noexcept;

// void g_file_info_set_attribute_stringv (GFileInfo* info /*none*/, const char* attribute /*none*/, char** attr_value /*none*/);
// void g_file_info_set_attribute_stringv (::GFileInfo* info /*none*/, const char* attribute /*none*/, char** attr_value /*none*/);
GI_INLINE_DECL void set_attribute_stringv (const gi::cstring_v attribute, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> attr_value) noexcept;

// void g_file_info_set_attribute_uint32 (GFileInfo* info /*none*/, const char* attribute /*none*/, guint32 attr_value);
// void g_file_info_set_attribute_uint32 (::GFileInfo* info /*none*/, const char* attribute /*none*/, guint32 attr_value);
GI_INLINE_DECL void set_attribute_uint32 (const gi::cstring_v attribute, guint32 attr_value) noexcept;

// void g_file_info_set_attribute_uint64 (GFileInfo* info /*none*/, const char* attribute /*none*/, guint64 attr_value);
// void g_file_info_set_attribute_uint64 (::GFileInfo* info /*none*/, const char* attribute /*none*/, guint64 attr_value);
GI_INLINE_DECL void set_attribute_uint64 (const gi::cstring_v attribute, guint64 attr_value) noexcept;

// void g_file_info_set_content_type (GFileInfo* info /*none*/, const char* content_type /*none*/);
// void g_file_info_set_content_type (::GFileInfo* info /*none*/, const char* content_type /*none*/);
GI_INLINE_DECL void set_content_type (const gi::cstring_v content_type) noexcept;

// void g_file_info_set_creation_date_time (GFileInfo* info /*none*/, GDateTime* creation_time /*none*/);
// void g_file_info_set_creation_date_time (::GFileInfo* info /*none*/, ::GDateTime* creation_time /*none*/);
GI_INLINE_DECL void set_creation_date_time (GLib::DateTime_Ref creation_time) noexcept;

// void g_file_info_set_display_name (GFileInfo* info /*none*/, const char* display_name /*none*/);
// void g_file_info_set_display_name (::GFileInfo* info /*none*/, const char* display_name /*none*/);
GI_INLINE_DECL void set_display_name (const gi::cstring_v display_name) noexcept;

// void g_file_info_set_edit_name (GFileInfo* info /*none*/, const char* edit_name /*none*/);
// void g_file_info_set_edit_name (::GFileInfo* info /*none*/, const char* edit_name /*none*/);
GI_INLINE_DECL void set_edit_name (const gi::cstring_v edit_name) noexcept;

// void g_file_info_set_file_type (GFileInfo* info /*none*/, GFileType type);
// void g_file_info_set_file_type (::GFileInfo* info /*none*/, ::GFileType type);
GI_INLINE_DECL void set_file_type (Gio::FileType type) noexcept;

// void g_file_info_set_icon (GFileInfo* info /*none*/, GIcon* icon /*none*/);
// void g_file_info_set_icon (::GFileInfo* info /*none*/, ::GIcon* icon /*none*/);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;

// void g_file_info_set_is_hidden (GFileInfo* info /*none*/, gboolean is_hidden);
// void g_file_info_set_is_hidden (::GFileInfo* info /*none*/, gboolean is_hidden);
GI_INLINE_DECL void set_is_hidden (gboolean is_hidden) noexcept;

// void g_file_info_set_is_symlink (GFileInfo* info /*none*/, gboolean is_symlink);
// void g_file_info_set_is_symlink (::GFileInfo* info /*none*/, gboolean is_symlink);
GI_INLINE_DECL void set_is_symlink (gboolean is_symlink) noexcept;

// void g_file_info_set_modification_date_time (GFileInfo* info /*none*/, GDateTime* mtime /*none*/);
// void g_file_info_set_modification_date_time (::GFileInfo* info /*none*/, ::GDateTime* mtime /*none*/);
GI_INLINE_DECL void set_modification_date_time (GLib::DateTime_Ref mtime) noexcept;

// void g_file_info_set_modification_time (GFileInfo* info /*none*/, GTimeVal* mtime /*none*/);
// void g_file_info_set_modification_time (::GFileInfo* info /*none*/,  mtime /*none*/);
// IGNORE; deprecated

// void g_file_info_set_name (GFileInfo* info /*none*/, const char* name /*none*/);
// void g_file_info_set_name (::GFileInfo* info /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;

// void g_file_info_set_size (GFileInfo* info /*none*/, goffset size);
// void g_file_info_set_size (::GFileInfo* info /*none*/, gint64 size);
GI_INLINE_DECL void set_size (gint64 size) noexcept;

// void g_file_info_set_sort_order (GFileInfo* info /*none*/, gint32 sort_order);
// void g_file_info_set_sort_order (::GFileInfo* info /*none*/, gint32 sort_order);
GI_INLINE_DECL void set_sort_order (gint32 sort_order) noexcept;

// void g_file_info_set_symbolic_icon (GFileInfo* info /*none*/, GIcon* icon /*none*/);
// void g_file_info_set_symbolic_icon (::GFileInfo* info /*none*/, ::GIcon* icon /*none*/);
GI_INLINE_DECL void set_symbolic_icon (Gio::Icon icon) noexcept;

// void g_file_info_set_symlink_target (GFileInfo* info /*none*/, const char* symlink_target /*none*/);
// void g_file_info_set_symlink_target (::GFileInfo* info /*none*/, const char* symlink_target /*none*/);
GI_INLINE_DECL void set_symlink_target (const gi::cstring_v symlink_target) noexcept;

// void g_file_info_unset_attribute_mask (GFileInfo* info /*none*/);
// void g_file_info_unset_attribute_mask (::GFileInfo* info /*none*/);
GI_INLINE_DECL void unset_attribute_mask () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinfo_extra_def.hpp>)
#include <gio/fileinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinfo_extra.hpp>)
#include <gio/fileinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileInfo : public GI_GIO_FILEINFO_BASE
{ typedef GI_GIO_FILEINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileInfo>
{ typedef Gio::FileInfo type; }; 

} // namespace repository

} // namespace gi

#endif
