// AUTO-GENERATED

#ifndef _GI_GLIB_KEYFILE_HPP_
#define _GI_GLIB_KEYFILE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;
class Bytes_Ref;
class KeyFile_Ref;

class KeyFile;

namespace base {


#define GI_GLIB_KEYFILE_BASE base::KeyFileBase
class KeyFileBase : public gi::detail::GBoxedWrapperBase<KeyFileBase, ::GKeyFile>
{
typedef gi::detail::GBoxedWrapperBase<KeyFileBase, ::GKeyFile> super_type;
public:

KeyFileBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_key_file_get_type(); } 

// GKeyFile* /*full*/ g_key_file_new ();
// ::GKeyFile* /*full*/ g_key_file_new ();
static GI_INLINE_DECL GLib::KeyFile new_ () noexcept;

// void g_key_file_free (GKeyFile* key_file /*none*/);
// void g_key_file_free (::GKeyFile* key_file /*none*/);
// IGNORE; marked ignore

// gboolean g_key_file_get_boolean (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gboolean g_key_file_get_boolean (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL bool get_boolean (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL bool get_boolean (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gboolean* /*container*/ g_key_file_get_boolean_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// gboolean* /*container*/ g_key_file_get_boolean_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t> get_boolean_list (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::Collection<gi::DSpan, gboolean, gi::transfer_container_t> get_boolean_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_key_file_get_comment (GKeyFile* key_file /*none*/, const gchar* group_name /*none,nullable*/, const gchar* key /*none,nullable*/, GError ** error);
// char* /*full*/ g_key_file_get_comment (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, const char* key /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring get_comment (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::cstring get_comment ();
GI_INLINE_DECL gi::cstring get_comment (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring get_comment (GLib::Error * _error) noexcept;

// gdouble g_key_file_get_double (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gdouble g_key_file_get_double (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL gdouble get_double (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gdouble get_double (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gdouble* /*container*/ g_key_file_get_double_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// gdouble* /*container*/ g_key_file_get_double_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t> get_double_list (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::Collection<gi::DSpan, gdouble, gi::transfer_container_t> get_double_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_key_file_get_groups (GKeyFile* key_file /*none*/, gsize* length);
// char** /*full*/ g_key_file_get_groups (::GKeyFile* key_file /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_groups (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_groups () noexcept;

// gint64 g_key_file_get_int64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gint64 g_key_file_get_int64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL gint64 get_int64 (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gint64 get_int64 (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gint g_key_file_get_integer (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gint g_key_file_get_integer (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL gint get_integer (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gint get_integer (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gint* /*container*/ g_key_file_get_integer_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// gint* /*container*/ g_key_file_get_integer_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::DSpan, gint, gi::transfer_container_t> get_integer_list (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::Collection<gi::DSpan, gint, gi::transfer_container_t> get_integer_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_key_file_get_keys (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_key_file_get_keys (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_keys (const gi::cstring_v group_name, gsize * length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_keys (const gi::cstring_v group_name, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_keys (const gi::cstring_v group_name);
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_keys (const gi::cstring_v group_name, GLib::Error * _error) noexcept;

// gchar* /*full,nullable*/ g_key_file_get_locale_for_key (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none,nullable*/);
// char* /*full,nullable*/ g_key_file_get_locale_for_key (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none,nullable*/);
GI_INLINE_DECL gi::cstring get_locale_for_key (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale) noexcept;
GI_INLINE_DECL gi::cstring get_locale_for_key (const gi::cstring_v group_name, const gi::cstring_v key) noexcept;

// gchar* /*full*/ g_key_file_get_locale_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none,nullable*/, GError ** error);
// char* /*full*/ g_key_file_get_locale_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale);
GI_INLINE_DECL gi::cstring get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::cstring get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring get_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_key_file_get_locale_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none,nullable*/, gsize* length, GError ** error);
// char** /*full*/ g_key_file_get_locale_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none,nullable*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, gsize * length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale);
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar* /*full,nullable*/ g_key_file_get_start_group (GKeyFile* key_file /*none*/);
// char* /*full,nullable*/ g_key_file_get_start_group (::GKeyFile* key_file /*none*/);
GI_INLINE_DECL gi::cstring get_start_group () noexcept;

// gchar* /*full*/ g_key_file_get_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// char* /*full*/ g_key_file_get_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring get_string (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::cstring get_string (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar** /*full*/ g_key_file_get_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gsize* length, GError ** error);
// char** /*full*/ g_key_file_get_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_string_list (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_string_list (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// guint64 g_key_file_get_uint64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// guint64 g_key_file_get_uint64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL guint64 get_uint64 (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL guint64 get_uint64 (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_key_file_get_value (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// char* /*full*/ g_key_file_get_value (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring get_value (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL gi::cstring get_value (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gboolean g_key_file_has_group (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/);
// gboolean g_key_file_has_group (::GKeyFile* key_file /*none*/, const char* group_name /*none*/);
GI_INLINE_DECL bool has_group (const gi::cstring_v group_name) noexcept;

// gboolean g_key_file_has_key (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gboolean g_key_file_has_key (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL bool has_key (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL bool has_key (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_bytes (GKeyFile* key_file /*none*/, GBytes* bytes /*none*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_bytes (::GKeyFile* key_file /*none*/, ::GBytes* bytes /*none*/, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_bytes (GLib::Bytes_Ref bytes, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_bytes (GLib::Bytes_Ref bytes, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_data (GKeyFile* key_file /*none*/, const gchar* data /*none*/, gsize length, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data (::GKeyFile* key_file /*none*/, const char* data /*none*/, gsize length, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_data (const gi::cstring_v data, gsize length, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_data (const gi::cstring_v data, gsize length, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_data_dirs (GKeyFile* key_file /*none*/, const gchar* file /*none*/, gchar** full_path /*full,out,opt*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data_dirs (::GKeyFile* key_file /*none*/, const char* file /*none*/, char** full_path /*full,out,opt*/, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_data_dirs (const gi::cstring_v file, gi::cstring * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> load_from_data_dirs (const gi::cstring_v file, GLib::KeyFileFlags flags);
GI_INLINE_DECL std::tuple<bool, gi::cstring> load_from_data_dirs (const gi::cstring_v file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_dirs (GKeyFile* key_file /*none*/, const gchar* file /*none*/, const gchar** search_dirs /*none*/, gchar** full_path /*full,out,opt*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_dirs (::GKeyFile* key_file /*none*/, const char* file /*none*/, const char** search_dirs /*none*/, char** full_path /*full,out,opt*/, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, gi::cstring * full_path, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, gi::cstring * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, GLib::KeyFileFlags flags);
GI_INLINE_DECL std::tuple<bool, gi::cstring> load_from_dirs (const gi::cstring_v file, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> search_dirs, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_file (GKeyFile* key_file /*none*/, const gchar* file /*none*/, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_file (::GKeyFile* key_file /*none*/, const char* file /*none*/, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_file (const gi::cstring_v file, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_file (const gi::cstring_v file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// GKeyFile* /*full*/ g_key_file_ref (GKeyFile* key_file /*none*/);
// ::GKeyFile* /*full*/ g_key_file_ref (::GKeyFile* key_file /*none*/);
// IGNORE; marked ignore

// gboolean g_key_file_remove_comment (GKeyFile* key_file /*none*/, const gchar* group_name /*none,nullable*/, const gchar* key /*none,nullable*/, GError ** error);
// gboolean g_key_file_remove_comment (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, const char* key /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool remove_comment (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL bool remove_comment ();
GI_INLINE_DECL bool remove_comment (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool remove_comment (GLib::Error * _error) noexcept;

// gboolean g_key_file_remove_group (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, GError ** error);
// gboolean g_key_file_remove_group (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, GError ** error);
GI_INLINE_DECL bool remove_group (const gi::cstring_v group_name);
GI_INLINE_DECL bool remove_group (const gi::cstring_v group_name, GLib::Error * _error) noexcept;

// gboolean g_key_file_remove_key (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, GError ** error);
// gboolean g_key_file_remove_key (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, GError ** error);
GI_INLINE_DECL bool remove_key (const gi::cstring_v group_name, const gi::cstring_v key);
GI_INLINE_DECL bool remove_key (const gi::cstring_v group_name, const gi::cstring_v key, GLib::Error * _error) noexcept;

// gboolean g_key_file_save_to_file (GKeyFile* key_file /*none*/, const gchar* filename /*none*/, GError ** error);
// gboolean g_key_file_save_to_file (::GKeyFile* key_file /*none*/, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool save_to_file (const gi::cstring_v filename);
GI_INLINE_DECL bool save_to_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// void g_key_file_set_boolean (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gboolean value);
// void g_key_file_set_boolean (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gboolean value);
GI_INLINE_DECL void set_boolean (const gi::cstring_v group_name, const gi::cstring_v key, gboolean value) noexcept;

// void g_key_file_set_boolean_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gboolean* list /*none*/, gsize length);
// void g_key_file_set_boolean_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gboolean* list /*none*/, gsize length);
GI_INLINE_DECL void set_boolean_list (const gi::cstring_v group_name, const gi::cstring_v key, const gboolean * list, gsize length) noexcept;

// gboolean g_key_file_set_comment (GKeyFile* key_file /*none*/, const gchar* group_name /*none,nullable*/, const gchar* key /*none,nullable*/, const gchar* comment /*none*/, GError ** error);
// gboolean g_key_file_set_comment (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, const char* key /*none,nullable*/, const char* comment /*none*/, GError ** error);
GI_INLINE_DECL bool set_comment (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v comment);
GI_INLINE_DECL bool set_comment (const gi::cstring_v comment);
GI_INLINE_DECL bool set_comment (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v comment, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_comment (const gi::cstring_v comment, GLib::Error * _error) noexcept;

// void g_key_file_set_double (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gdouble value);
// void g_key_file_set_double (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gdouble value);
GI_INLINE_DECL void set_double (const gi::cstring_v group_name, const gi::cstring_v key, gdouble value) noexcept;

// void g_key_file_set_double_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gdouble* list /*none*/, gsize length);
// void g_key_file_set_double_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gdouble* list /*none*/, gsize length);
GI_INLINE_DECL void set_double_list (const gi::cstring_v group_name, const gi::cstring_v key, const gdouble * list, gsize length) noexcept;

// void g_key_file_set_int64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gint64 value);
// void g_key_file_set_int64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gint64 value);
GI_INLINE_DECL void set_int64 (const gi::cstring_v group_name, const gi::cstring_v key, gint64 value) noexcept;

// void g_key_file_set_integer (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gint value);
// void g_key_file_set_integer (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gint value);
GI_INLINE_DECL void set_integer (const gi::cstring_v group_name, const gi::cstring_v key, gint value) noexcept;

// void g_key_file_set_integer_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, gint* list /*none*/, gsize length);
// void g_key_file_set_integer_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, gint* list /*none*/, gsize length);
GI_INLINE_DECL void set_integer_list (const gi::cstring_v group_name, const gi::cstring_v key, const gint * list, gsize length) noexcept;

// void g_key_file_set_list_separator (GKeyFile* key_file /*none*/, gchar separator);
// void g_key_file_set_list_separator (::GKeyFile* key_file /*none*/, gchar separator);
GI_INLINE_DECL void set_list_separator (gchar separator) noexcept;

// void g_key_file_set_locale_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none*/, const gchar* string /*none*/);
// void g_key_file_set_locale_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none*/, const char* string /*none*/);
GI_INLINE_DECL void set_locale_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, const gi::cstring_v string) noexcept;

// void g_key_file_set_locale_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* locale /*none*/, const gchar* const* list /*none*/, gsize length);
// void g_key_file_set_locale_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* locale /*none*/, const char** list /*none*/, gsize length);
GI_INLINE_DECL void set_locale_string_list (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v locale, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> list, gsize length) noexcept;

// void g_key_file_set_string (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* string /*none*/);
// void g_key_file_set_string (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* string /*none*/);
GI_INLINE_DECL void set_string (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v string) noexcept;

// void g_key_file_set_string_list (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* const* list /*none*/, gsize length);
// void g_key_file_set_string_list (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char** list /*none*/, gsize length);
GI_INLINE_DECL void set_string_list (const gi::cstring_v group_name, const gi::cstring_v key, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> list, gsize length) noexcept;

// void g_key_file_set_uint64 (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, guint64 value);
// void g_key_file_set_uint64 (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, guint64 value);
GI_INLINE_DECL void set_uint64 (const gi::cstring_v group_name, const gi::cstring_v key, guint64 value) noexcept;

// void g_key_file_set_value (GKeyFile* key_file /*none*/, const gchar* group_name /*none*/, const gchar* key /*none*/, const gchar* value /*none*/);
// void g_key_file_set_value (::GKeyFile* key_file /*none*/, const char* group_name /*none*/, const char* key /*none*/, const char* value /*none*/);
GI_INLINE_DECL void set_value (const gi::cstring_v group_name, const gi::cstring_v key, const gi::cstring_v value) noexcept;

// gchar* /*full*/ g_key_file_to_data (GKeyFile* key_file /*none*/, gsize* length, GError ** error);
// char* /*full*/ g_key_file_to_data (::GKeyFile* key_file /*none*/, gsize* length, GError ** error);
GI_INLINE_DECL gi::cstring to_data (gsize * length);
GI_INLINE_DECL gi::cstring to_data (gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, gsize> to_data ();
GI_INLINE_DECL std::tuple<gi::cstring, gsize> to_data (GLib::Error * _error) noexcept;

// void g_key_file_unref (GKeyFile* key_file /*none*/);
// void g_key_file_unref (::GKeyFile* key_file /*none*/);
// IGNORE; marked ignore

// GQuark g_key_file_error_quark ();
// ::GQuark g_key_file_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra_def.hpp>)
#include <glib/keyfile_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra.hpp>)
#include <glib/keyfile_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class KeyFile_Ref;

class KeyFile : public gi::detail::GBoxedWrapper<KeyFile, ::GKeyFile, GI_GLIB_KEYFILE_BASE, KeyFile_Ref>
{ typedef gi::detail::GBoxedWrapper<KeyFile, ::GKeyFile, GI_GLIB_KEYFILE_BASE, KeyFile_Ref> super_type; using super_type::super_type; };


class KeyFile_Ref : public gi::detail::GBoxedRefWrapper<KeyFile, ::GKeyFile, GI_GLIB_KEYFILE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<KeyFile, ::GKeyFile, GI_GLIB_KEYFILE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GKeyFile>
{ typedef GLib::KeyFile type; }; 

} // namespace repository

} // namespace gi

#endif
