// AUTO-GENERATED

#ifndef _GI_GLIB_BOOKMARKFILE_HPP_
#define _GI_GLIB_BOOKMARKFILE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class BookmarkFile_Ref;
class DateTime;
class DateTime_Ref;

class BookmarkFile;

namespace base {


#define GI_GLIB_BOOKMARKFILE_BASE base::BookmarkFileBase
class BookmarkFileBase : public gi::detail::GBoxedWrapperBase<BookmarkFileBase, ::GBookmarkFile>
{
typedef gi::detail::GBoxedWrapperBase<BookmarkFileBase, ::GBookmarkFile> super_type;
public:

BookmarkFileBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_bookmark_file_get_type(); } 

// GBookmarkFile* /*full*/ g_bookmark_file_new ();
// ::GBookmarkFile* /*full*/ g_bookmark_file_new ();
static GI_INLINE_DECL GLib::BookmarkFile new_ () noexcept;

// void g_bookmark_file_add_application (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none,nullable*/, const gchar* exec /*none,nullable*/);
// void g_bookmark_file_add_application (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none,nullable*/, const char* exec /*none,nullable*/);
GI_INLINE_DECL void add_application (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec) noexcept;
GI_INLINE_DECL void add_application (const gi::cstring_v uri) noexcept;

// void g_bookmark_file_add_group (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* group /*none*/);
// void g_bookmark_file_add_group (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* group /*none*/);
GI_INLINE_DECL void add_group (const gi::cstring_v uri, const gi::cstring_v group) noexcept;

// GBookmarkFile* /*full*/ g_bookmark_file_copy (GBookmarkFile* bookmark /*none*/);
// ::GBookmarkFile* /*full*/ g_bookmark_file_copy (::GBookmarkFile* bookmark /*none*/);
GI_INLINE_DECL GLib::BookmarkFile copy () noexcept;

// void g_bookmark_file_free (GBookmarkFile* bookmark /*none*/);
// void g_bookmark_file_free (::GBookmarkFile* bookmark /*none*/);
// IGNORE; marked ignore

// time_t g_bookmark_file_get_added (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// glong g_bookmark_file_get_added (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// IGNORE; deprecated

// GDateTime* /*none*/ g_bookmark_file_get_added_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// ::GDateTime* /*none*/ g_bookmark_file_get_added_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL GLib::DateTime_Ref get_added_date_time (const gi::cstring_v uri);
GI_INLINE_DECL GLib::DateTime_Ref get_added_date_time (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_get_app_info (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, gchar** exec /*full,out,opt*/, guint* count, time_t* stamp, GError ** error);
// gboolean g_bookmark_file_get_app_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, char** exec /*full,out,opt*/, guint* count, glong* stamp, GError ** error);
// IGNORE; deprecated

// gboolean g_bookmark_file_get_application_info (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, char** exec /*full,out,opt*/, unsigned int* count, GDateTime** stamp /*none,out,opt*/, GError ** error);
// gboolean g_bookmark_file_get_application_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, char** exec /*full,out,opt*/, guint* count, ::GDateTime** stamp /*none,out,opt*/, GError ** error);
GI_INLINE_DECL bool get_application_info (const gi::cstring_v uri, const gi::cstring_v name, gi::cstring * exec, guint * count, GLib::DateTime_Ref * stamp);
GI_INLINE_DECL bool get_application_info (const gi::cstring_v uri, const gi::cstring_v name, gi::cstring * exec, guint * count, GLib::DateTime_Ref * stamp, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, guint, GLib::DateTime_Ref> get_application_info (const gi::cstring_v uri, const gi::cstring_v name);
GI_INLINE_DECL std::tuple<bool, gi::cstring, guint, GLib::DateTime_Ref> get_application_info (const gi::cstring_v uri, const gi::cstring_v name, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_bookmark_file_get_applications (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_bookmark_file_get_applications (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> get_applications (const gi::cstring_v uri);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> get_applications (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_bookmark_file_get_description (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// char* /*full*/ g_bookmark_file_get_description (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring get_description (const gi::cstring_v uri);
GI_INLINE_DECL gi::cstring get_description (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_bookmark_file_get_groups (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_bookmark_file_get_groups (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> get_groups (const gi::cstring_v uri);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> get_groups (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_get_icon (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gchar** href /*full,out,opt*/, gchar** mime_type /*full,out,opt*/, GError ** error);
// gboolean g_bookmark_file_get_icon (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, char** href /*full,out,opt*/, char** mime_type /*full,out,opt*/, GError ** error);
GI_INLINE_DECL bool get_icon (const gi::cstring_v uri, gi::cstring * href, gi::cstring * mime_type);
GI_INLINE_DECL bool get_icon (const gi::cstring_v uri, gi::cstring * href, gi::cstring * mime_type, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> get_icon (const gi::cstring_v uri);
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> get_icon (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_get_is_private (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// gboolean g_bookmark_file_get_is_private (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL bool get_is_private (const gi::cstring_v uri);
GI_INLINE_DECL bool get_is_private (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_bookmark_file_get_mime_type (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// char* /*full*/ g_bookmark_file_get_mime_type (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring get_mime_type (const gi::cstring_v uri);
GI_INLINE_DECL gi::cstring get_mime_type (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// time_t g_bookmark_file_get_modified (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// glong g_bookmark_file_get_modified (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// IGNORE; deprecated

// GDateTime* /*none*/ g_bookmark_file_get_modified_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// ::GDateTime* /*none*/ g_bookmark_file_get_modified_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL GLib::DateTime_Ref get_modified_date_time (const gi::cstring_v uri);
GI_INLINE_DECL GLib::DateTime_Ref get_modified_date_time (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gint g_bookmark_file_get_size (GBookmarkFile* bookmark /*none*/);
// gint g_bookmark_file_get_size (::GBookmarkFile* bookmark /*none*/);
GI_INLINE_DECL gint get_size () noexcept;

// gchar* /*full*/ g_bookmark_file_get_title (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none,nullable*/, GError ** error);
// char* /*full*/ g_bookmark_file_get_title (::GBookmarkFile* bookmark /*none*/, const char* uri /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring get_title (const gi::cstring_v uri);
GI_INLINE_DECL gi::cstring get_title ();
GI_INLINE_DECL gi::cstring get_title (const gi::cstring_v uri, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring get_title (GLib::Error * _error) noexcept;

// gchar** /*full*/ g_bookmark_file_get_uris (GBookmarkFile* bookmark /*none*/, gsize* length);
// char** /*full*/ g_bookmark_file_get_uris (::GBookmarkFile* bookmark /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> get_uris () noexcept;

// time_t g_bookmark_file_get_visited (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// glong g_bookmark_file_get_visited (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// IGNORE; deprecated

// GDateTime* /*none*/ g_bookmark_file_get_visited_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
// ::GDateTime* /*none*/ g_bookmark_file_get_visited_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL GLib::DateTime_Ref get_visited_date_time (const gi::cstring_v uri);
GI_INLINE_DECL GLib::DateTime_Ref get_visited_date_time (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_has_application (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, GError ** error);
// gboolean g_bookmark_file_has_application (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, GError ** error);
GI_INLINE_DECL bool has_application (const gi::cstring_v uri, const gi::cstring_v name);
GI_INLINE_DECL bool has_application (const gi::cstring_v uri, const gi::cstring_v name, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_has_group (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* group /*none*/, GError ** error);
// gboolean g_bookmark_file_has_group (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* group /*none*/, GError ** error);
GI_INLINE_DECL bool has_group (const gi::cstring_v uri, const gi::cstring_v group);
GI_INLINE_DECL bool has_group (const gi::cstring_v uri, const gi::cstring_v group, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_has_item (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/);
// gboolean g_bookmark_file_has_item (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/);
GI_INLINE_DECL bool has_item (const gi::cstring_v uri) noexcept;

// gboolean g_bookmark_file_load_from_data (GBookmarkFile* bookmark /*none*/, const gchar* data /*none*/, gsize length, GError ** error);
// gboolean g_bookmark_file_load_from_data (::GBookmarkFile* bookmark /*none*/, const guint8* data /*none*/, gsize length, GError ** error);
GI_INLINE_DECL bool load_from_data (const guint8 * data, gsize length);
GI_INLINE_DECL bool load_from_data (const guint8 * data, gsize length, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_load_from_data_dirs (GBookmarkFile* bookmark /*none*/, const gchar* file /*none*/, gchar** full_path /*full,out,opt*/, GError ** error);
// gboolean g_bookmark_file_load_from_data_dirs (::GBookmarkFile* bookmark /*none*/, const char* file /*none*/, char** full_path /*full,out,opt*/, GError ** error);
GI_INLINE_DECL bool load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path);
GI_INLINE_DECL bool load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> load_from_data_dirs (const gi::cstring_v file);
GI_INLINE_DECL std::tuple<bool, gi::cstring> load_from_data_dirs (const gi::cstring_v file, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_load_from_file (GBookmarkFile* bookmark /*none*/, const gchar* filename /*none*/, GError ** error);
// gboolean g_bookmark_file_load_from_file (::GBookmarkFile* bookmark /*none*/, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool load_from_file (const gi::cstring_v filename);
GI_INLINE_DECL bool load_from_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_move_item (GBookmarkFile* bookmark /*none*/, const gchar* old_uri /*none*/, const gchar* new_uri /*none,nullable*/, GError ** error);
// gboolean g_bookmark_file_move_item (::GBookmarkFile* bookmark /*none*/, const char* old_uri /*none*/, const char* new_uri /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool move_item (const gi::cstring_v old_uri, const gi::cstring_v new_uri);
GI_INLINE_DECL bool move_item (const gi::cstring_v old_uri);
GI_INLINE_DECL bool move_item (const gi::cstring_v old_uri, const gi::cstring_v new_uri, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool move_item (const gi::cstring_v old_uri, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_remove_application (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, GError ** error);
// gboolean g_bookmark_file_remove_application (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, GError ** error);
GI_INLINE_DECL bool remove_application (const gi::cstring_v uri, const gi::cstring_v name);
GI_INLINE_DECL bool remove_application (const gi::cstring_v uri, const gi::cstring_v name, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_remove_group (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* group /*none*/, GError ** error);
// gboolean g_bookmark_file_remove_group (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* group /*none*/, GError ** error);
GI_INLINE_DECL bool remove_group (const gi::cstring_v uri, const gi::cstring_v group);
GI_INLINE_DECL bool remove_group (const gi::cstring_v uri, const gi::cstring_v group, GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_remove_item (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, GError ** error);
// gboolean g_bookmark_file_remove_item (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GError ** error);
GI_INLINE_DECL bool remove_item (const gi::cstring_v uri);
GI_INLINE_DECL bool remove_item (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// void g_bookmark_file_set_added (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, time_t added);
// void g_bookmark_file_set_added (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, glong added);
// IGNORE; deprecated

// void g_bookmark_file_set_added_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GDateTime* added /*none*/);
// void g_bookmark_file_set_added_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, ::GDateTime* added /*none*/);
GI_INLINE_DECL void set_added_date_time (const gi::cstring_v uri, GLib::DateTime_Ref added) noexcept;

// gboolean g_bookmark_file_set_app_info (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* name /*none*/, const gchar* exec /*none*/, gint count, time_t stamp, GError ** error);
// gboolean g_bookmark_file_set_app_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, const char* exec /*none*/, gint count, glong stamp, GError ** error);
// IGNORE; deprecated

// gboolean g_bookmark_file_set_application_info (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, const char* exec /*none*/, int count, GDateTime* stamp /*none,nullable*/, GError ** error);
// gboolean g_bookmark_file_set_application_info (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* name /*none*/, const char* exec /*none*/, gint count, ::GDateTime* stamp /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count, GLib::DateTime_Ref stamp);
GI_INLINE_DECL bool set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count);
GI_INLINE_DECL bool set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count, GLib::DateTime_Ref stamp, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_application_info (const gi::cstring_v uri, const gi::cstring_v name, const gi::cstring_v exec, gint count, GLib::Error * _error) noexcept;

// void g_bookmark_file_set_description (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none,nullable*/, const gchar* description /*none*/);
// void g_bookmark_file_set_description (::GBookmarkFile* bookmark /*none*/, const char* uri /*none,nullable*/, const char* description /*none*/);
GI_INLINE_DECL void set_description (const gi::cstring_v uri, const gi::cstring_v description) noexcept;
GI_INLINE_DECL void set_description (const gi::cstring_v description) noexcept;

// void g_bookmark_file_set_groups (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar** groups /*none,nullable*/, gsize length);
// void g_bookmark_file_set_groups (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char** groups /*none,nullable*/, gsize length);
GI_INLINE_DECL void set_groups (const gi::cstring_v uri, gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> groups) noexcept;

// void g_bookmark_file_set_icon (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* href /*none,nullable*/, const gchar* mime_type /*none*/);
// void g_bookmark_file_set_icon (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* href /*none,nullable*/, const char* mime_type /*none*/);
GI_INLINE_DECL void set_icon (const gi::cstring_v uri, const gi::cstring_v href, const gi::cstring_v mime_type) noexcept;
GI_INLINE_DECL void set_icon (const gi::cstring_v uri, const gi::cstring_v mime_type) noexcept;

// void g_bookmark_file_set_is_private (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, gboolean is_private);
// void g_bookmark_file_set_is_private (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, gboolean is_private);
GI_INLINE_DECL void set_is_private (const gi::cstring_v uri, gboolean is_private) noexcept;

// void g_bookmark_file_set_mime_type (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, const gchar* mime_type /*none*/);
// void g_bookmark_file_set_mime_type (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, const char* mime_type /*none*/);
GI_INLINE_DECL void set_mime_type (const gi::cstring_v uri, const gi::cstring_v mime_type) noexcept;

// void g_bookmark_file_set_modified (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, time_t modified);
// void g_bookmark_file_set_modified (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, glong modified);
// IGNORE; deprecated

// void g_bookmark_file_set_modified_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GDateTime* modified /*none*/);
// void g_bookmark_file_set_modified_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, ::GDateTime* modified /*none*/);
GI_INLINE_DECL void set_modified_date_time (const gi::cstring_v uri, GLib::DateTime_Ref modified) noexcept;

// void g_bookmark_file_set_title (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none,nullable*/, const gchar* title /*none*/);
// void g_bookmark_file_set_title (::GBookmarkFile* bookmark /*none*/, const char* uri /*none,nullable*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v uri, const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void g_bookmark_file_set_visited (GBookmarkFile* bookmark /*none*/, const gchar* uri /*none*/, time_t visited);
// void g_bookmark_file_set_visited (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, glong visited);
// IGNORE; deprecated

// void g_bookmark_file_set_visited_date_time (GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, GDateTime* visited /*none*/);
// void g_bookmark_file_set_visited_date_time (::GBookmarkFile* bookmark /*none*/, const char* uri /*none*/, ::GDateTime* visited /*none*/);
GI_INLINE_DECL void set_visited_date_time (const gi::cstring_v uri, GLib::DateTime_Ref visited) noexcept;

// gchar* /*full*/ g_bookmark_file_to_data (GBookmarkFile* bookmark /*none*/, gsize* length, GError ** error);
// guint8* /*full*/ g_bookmark_file_to_data (::GBookmarkFile* bookmark /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> to_data ();
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> to_data (GLib::Error * _error) noexcept;

// gboolean g_bookmark_file_to_file (GBookmarkFile* bookmark /*none*/, const gchar* filename /*none*/, GError ** error);
// gboolean g_bookmark_file_to_file (::GBookmarkFile* bookmark /*none*/, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool to_file (const gi::cstring_v filename);
GI_INLINE_DECL bool to_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// GQuark g_bookmark_file_error_quark ();
// ::GQuark g_bookmark_file_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bookmarkfile_extra_def.hpp>)
#include <glib/bookmarkfile_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bookmarkfile_extra.hpp>)
#include <glib/bookmarkfile_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class BookmarkFile_Ref;

class BookmarkFile : public gi::detail::GBoxedWrapper<BookmarkFile, ::GBookmarkFile, GI_GLIB_BOOKMARKFILE_BASE, BookmarkFile_Ref>
{ typedef gi::detail::GBoxedWrapper<BookmarkFile, ::GBookmarkFile, GI_GLIB_BOOKMARKFILE_BASE, BookmarkFile_Ref> super_type; using super_type::super_type; };


class BookmarkFile_Ref : public gi::detail::GBoxedRefWrapper<BookmarkFile, ::GBookmarkFile, GI_GLIB_BOOKMARKFILE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<BookmarkFile, ::GBookmarkFile, GI_GLIB_BOOKMARKFILE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GBookmarkFile>
{ typedef GLib::BookmarkFile type; }; 

} // namespace repository

} // namespace gi

#endif
