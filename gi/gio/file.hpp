// AUTO-GENERATED

#ifndef _GI_GIO_FILE_HPP_
#define _GI_GIO_FILE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppInfo;
class AsyncResult;
class Cancellable;
class FileAttributeInfoList;
class FileAttributeInfoList_Ref;
class FileEnumerator;
class FileIOStream;
class FileInfo;
class FileInputStream;
class FileMonitor;
class FileOutputStream;
class Mount;
class MountOperation;

class File;

namespace base {


#define GI_GIO_FILE_BASE base::FileBase
class FileBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GFile BaseObjectType;

FileBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_get_type(); } 

// GFile* /*full*/ g_file_new_build_filename (const gchar* first_element /*none*/,  ..._ /*none*/);
// ::GFile* /*full*/ g_file_new_build_filename (const char* first_element /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GFile* /*full*/ g_file_new_build_filenamev (const gchar* const* args /*none*/);
// ::GFile* /*full*/ g_file_new_build_filenamev (const char** args /*none*/);
static GI_INLINE_DECL Gio::File new_build_filenamev (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> args) noexcept;

// GFile* /*full*/ g_file_new_for_commandline_arg (const char* arg /*none*/);
// ::GFile* /*full*/ g_file_new_for_commandline_arg (const char* arg /*none*/);
static GI_INLINE_DECL Gio::File new_for_commandline_arg (const gi::cstring_v arg) noexcept;

// GFile* /*full*/ g_file_new_for_commandline_arg_and_cwd (const gchar* arg /*none*/, const gchar* cwd /*none*/);
// ::GFile* /*full*/ g_file_new_for_commandline_arg_and_cwd (const char* arg /*none*/, const char* cwd /*none*/);
static GI_INLINE_DECL Gio::File new_for_commandline_arg_and_cwd (const gi::cstring_v arg, const gi::cstring_v cwd) noexcept;

// GFile* /*full*/ g_file_new_for_path (const char* path /*none*/);
// ::GFile* /*full*/ g_file_new_for_path (const char* path /*none*/);
static GI_INLINE_DECL Gio::File new_for_path (const gi::cstring_v path) noexcept;

// GFile* /*full*/ g_file_new_for_uri (const char* uri /*none*/);
// ::GFile* /*full*/ g_file_new_for_uri (const char* uri /*none*/);
static GI_INLINE_DECL Gio::File new_for_uri (const gi::cstring_v uri) noexcept;

// GFile* /*full*/ g_file_new_tmp (const char* tmpl /*none,nullable*/, GFileIOStream** iostream /*full,out*/, GError ** error);
// ::GFile* /*full*/ g_file_new_tmp (const char* tmpl /*none,nullable*/, ::GFileIOStream** iostream /*full,out*/, GError ** error);
static GI_INLINE_DECL Gio::File new_tmp (const gi::cstring_v tmpl, Gio::FileIOStream & iostream);
static GI_INLINE_DECL Gio::File new_tmp (Gio::FileIOStream & iostream);
static GI_INLINE_DECL Gio::File new_tmp (const gi::cstring_v tmpl, Gio::FileIOStream & iostream, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::File new_tmp (Gio::FileIOStream & iostream, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp (const gi::cstring_v tmpl);
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp ();
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp (const gi::cstring_v tmpl, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp (GLib::Error * _error) noexcept;

// void g_file_new_tmp_async (const char* tmpl /*none,nullable*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_new_tmp_async (const char* tmpl /*none,nullable*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_tmp_async (const gi::cstring_v tmpl, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_tmp_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// void g_file_new_tmp_dir_async (const char* tmpl /*none,nullable*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_new_tmp_dir_async (const char* tmpl /*none,nullable*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_tmp_dir_async (const gi::cstring_v tmpl, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_tmp_dir_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFile* /*full*/ g_file_new_tmp_dir_finish (GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_new_tmp_dir_finish (::GAsyncResult* result /*none*/, GError ** error);
static GI_INLINE_DECL Gio::File new_tmp_dir_finish (Gio::AsyncResult result);
static GI_INLINE_DECL Gio::File new_tmp_dir_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_file_new_tmp_finish (GAsyncResult* result /*none*/, GFileIOStream** iostream /*full,out*/, GError ** error);
// ::GFile* /*full*/ g_file_new_tmp_finish (::GAsyncResult* result /*none*/, ::GFileIOStream** iostream /*full,out*/, GError ** error);
static GI_INLINE_DECL Gio::File new_tmp_finish (Gio::AsyncResult result, Gio::FileIOStream & iostream);
static GI_INLINE_DECL Gio::File new_tmp_finish (Gio::AsyncResult result, Gio::FileIOStream & iostream, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp_finish (Gio::AsyncResult result);
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_file_parse_name (const char* parse_name /*none*/);
// ::GFile* /*full*/ g_file_parse_name (const char* parse_name /*none*/);
static GI_INLINE_DECL Gio::File parse_name (const gi::cstring_v parse_name) noexcept;

// GFileOutputStream* /*full*/ g_file_append_to (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_append_to (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_append_to_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_append_to_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileOutputStream* /*full*/ g_file_append_to_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_append_to_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream append_to_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileOutputStream append_to_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// char* /*full*/ g_file_build_attribute_list_for_copy (GFile* file /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_file_build_attribute_list_for_copy (::GFile* file /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::cstring build_attribute_list_for_copy (Gio::FileCopyFlags flags);
GI_INLINE_DECL gi::cstring build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring build_attribute_list_for_copy (Gio::FileCopyFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_copy (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean g_file_copy (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;

// void g_file_copy_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_copy_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_copy_attributes (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_copy_attributes (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags);
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_copy_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean g_file_copy_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL bool copy_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool copy_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileOutputStream* /*full*/ g_file_create (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_create (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_create_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_create_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileOutputStream* /*full*/ g_file_create_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_create_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream create_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileOutputStream create_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileIOStream* /*full*/ g_file_create_readwrite (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_create_readwrite (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_create_readwrite_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_create_readwrite_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileIOStream* /*full*/ g_file_create_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_create_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream create_readwrite_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileIOStream create_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_file_delete (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_delete (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool delete_ (Gio::Cancellable cancellable);
GI_INLINE_DECL bool delete_ ();
GI_INLINE_DECL bool delete_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool delete_ (GLib::Error * _error) noexcept;

// void g_file_delete_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_delete_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void delete_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void delete_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_delete_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_delete_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool delete_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool delete_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_file_dup (GFile* file /*none*/);
// ::GFile* /*full*/ g_file_dup (::GFile* file /*none*/);
GI_INLINE_DECL Gio::File dup () noexcept;

// void g_file_eject_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_eject_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_file_eject_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_eject_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_file_eject_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_eject_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_eject_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_eject_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_mountable_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFileEnumerator* /*full*/ g_file_enumerate_children (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileEnumerator* /*full*/ g_file_enumerate_children (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// void g_file_enumerate_children_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_enumerate_children_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void enumerate_children_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void enumerate_children_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileEnumerator* /*full*/ g_file_enumerate_children_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileEnumerator* /*full*/ g_file_enumerate_children_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_file_equal (GFile* file1 /*none*/, GFile* file2 /*none*/);
// gboolean g_file_equal (::GFile* file1 /*none*/, ::GFile* file2 /*none*/);
GI_INLINE_DECL bool equal (Gio::File file2) noexcept;

// GMount* /*full*/ g_file_find_enclosing_mount (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GMount* /*full*/ g_file_find_enclosing_mount (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::Mount find_enclosing_mount (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::Mount find_enclosing_mount ();
GI_INLINE_DECL Gio::Mount find_enclosing_mount (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::Mount find_enclosing_mount (GLib::Error * _error) noexcept;

// void g_file_find_enclosing_mount_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_find_enclosing_mount_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void find_enclosing_mount_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void find_enclosing_mount_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GMount* /*full*/ g_file_find_enclosing_mount_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GMount* /*full*/ g_file_find_enclosing_mount_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::Mount find_enclosing_mount_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::Mount find_enclosing_mount_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// char* /*full,nullable*/ g_file_get_basename (GFile* file /*none*/);
// char* /*full,nullable*/ g_file_get_basename (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_basename () noexcept;

// GFile* /*full*/ g_file_get_child (GFile* file /*none*/, const char* name /*none*/);
// ::GFile* /*full*/ g_file_get_child (::GFile* file /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::File get_child (const gi::cstring_v name) noexcept;

// GFile* /*full*/ g_file_get_child_for_display_name (GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_get_child_for_display_name (::GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
GI_INLINE_DECL Gio::File get_child_for_display_name (const gi::cstring_v display_name);
GI_INLINE_DECL Gio::File get_child_for_display_name (const gi::cstring_v display_name, GLib::Error * _error) noexcept;

// GFile* /*full,nullable*/ g_file_get_parent (GFile* file /*none*/);
// ::GFile* /*full,nullable*/ g_file_get_parent (::GFile* file /*none*/);
GI_INLINE_DECL Gio::File get_parent () noexcept;

// char* /*full*/ g_file_get_parse_name (GFile* file /*none*/);
// char* /*full*/ g_file_get_parse_name (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_parse_name () noexcept;

// char* /*full,nullable*/ g_file_get_path (GFile* file /*none*/);
// char* /*full,nullable*/ g_file_get_path (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_path () noexcept;

// char* /*full,nullable*/ g_file_get_relative_path (GFile* parent /*none*/, GFile* descendant /*none*/);
// char* /*full,nullable*/ g_file_get_relative_path (::GFile* parent /*none*/, ::GFile* descendant /*none*/);
GI_INLINE_DECL gi::cstring get_relative_path (Gio::File descendant) noexcept;

// char* /*full*/ g_file_get_uri (GFile* file /*none*/);
// char* /*full*/ g_file_get_uri (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_uri () noexcept;

// char* /*full,nullable*/ g_file_get_uri_scheme (GFile* file /*none*/);
// char* /*full,nullable*/ g_file_get_uri_scheme (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_uri_scheme () noexcept;

// gboolean g_file_has_parent (GFile* file /*none*/, GFile* parent /*none,nullable*/);
// gboolean g_file_has_parent (::GFile* file /*none*/, ::GFile* parent /*none,nullable*/);
GI_INLINE_DECL bool has_parent (Gio::File parent) noexcept;
GI_INLINE_DECL bool has_parent () noexcept;

// gboolean g_file_has_prefix (GFile* file /*none*/, GFile* prefix /*none*/);
// gboolean g_file_has_prefix (::GFile* file /*none*/, ::GFile* prefix /*none*/);
GI_INLINE_DECL bool has_prefix (Gio::File prefix) noexcept;

// gboolean g_file_has_uri_scheme (GFile* file /*none*/, const char* uri_scheme /*none*/);
// gboolean g_file_has_uri_scheme (::GFile* file /*none*/, const char* uri_scheme /*none*/);
GI_INLINE_DECL bool has_uri_scheme (const gi::cstring_v uri_scheme) noexcept;

// guint g_file_hash (gconstpointer file /*none*/);
// guint g_file_hash (const ::GFile* file /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_file_is_native (GFile* file /*none*/);
// gboolean g_file_is_native (::GFile* file /*none*/);
GI_INLINE_DECL bool is_native () noexcept;

// GBytes* /*full*/ g_file_load_bytes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, gchar** etag_out /*full,out,opt,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_file_load_bytes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Bytes load_bytes (Gio::Cancellable cancellable, gi::cstring * etag_out);
GI_INLINE_DECL GLib::Bytes load_bytes (gi::cstring * etag_out);
GI_INLINE_DECL GLib::Bytes load_bytes (Gio::Cancellable cancellable, gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Bytes load_bytes (gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, gi::cstring> load_bytes (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Bytes, gi::cstring> load_bytes ();
GI_INLINE_DECL std::tuple<GLib::Bytes, gi::cstring> load_bytes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, gi::cstring> load_bytes (GLib::Error * _error) noexcept;

// void g_file_load_bytes_async (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_load_bytes_async (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void load_bytes_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_bytes_async (Gio::AsyncReadyCallback callback) noexcept;

// GBytes* /*full*/ g_file_load_bytes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, gchar** etag_out /*full,out,opt,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_file_load_bytes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL GLib::Bytes load_bytes_finish (Gio::AsyncResult result, gi::cstring * etag_out);
GI_INLINE_DECL GLib::Bytes load_bytes_finish (Gio::AsyncResult result, gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, gi::cstring> load_bytes_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<GLib::Bytes, gi::cstring> load_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_load_contents (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, char** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_load_contents (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, guint8** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool load_contents (Gio::Cancellable cancellable, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out);
GI_INLINE_DECL bool load_contents (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out);
GI_INLINE_DECL bool load_contents (Gio::Cancellable cancellable, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool load_contents (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_contents (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_contents ();
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_contents (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_contents (GLib::Error * _error) noexcept;

// void g_file_load_contents_async (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_load_contents_async (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void load_contents_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_contents_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_load_contents_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, char** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_load_contents_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, guint8** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool load_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out);
GI_INLINE_DECL bool load_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_contents_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void g_file_load_partial_contents_async (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GFileReadMoreCallback read_more_callback /*none*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_load_partial_contents_async (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::FileReadMoreCallback::cfunction_type read_more_callback /*none*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; not introspectable, callback closure parameter already used

// gboolean g_file_load_partial_contents_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, char** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_load_partial_contents_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, guint8** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool load_partial_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out);
GI_INLINE_DECL bool load_partial_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_partial_contents_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> load_partial_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_file_make_directory (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_make_directory (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool make_directory (Gio::Cancellable cancellable);
GI_INLINE_DECL bool make_directory ();
GI_INLINE_DECL bool make_directory (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool make_directory (GLib::Error * _error) noexcept;

// void g_file_make_directory_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_make_directory_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void make_directory_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void make_directory_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_make_directory_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_make_directory_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool make_directory_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool make_directory_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_make_directory_with_parents (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_make_directory_with_parents (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool make_directory_with_parents (Gio::Cancellable cancellable);
GI_INLINE_DECL bool make_directory_with_parents ();
GI_INLINE_DECL bool make_directory_with_parents (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool make_directory_with_parents (GLib::Error * _error) noexcept;

// gboolean g_file_make_symbolic_link (GFile* file /*none*/, const char* symlink_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_make_symbolic_link (::GFile* file /*none*/, const char* symlink_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool make_symbolic_link (const gi::cstring_v symlink_value, Gio::Cancellable cancellable);
GI_INLINE_DECL bool make_symbolic_link (const gi::cstring_v symlink_value);
GI_INLINE_DECL bool make_symbolic_link (const gi::cstring_v symlink_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool make_symbolic_link (const gi::cstring_v symlink_value, GLib::Error * _error) noexcept;

// void g_file_make_symbolic_link_async (GFile* file /*none*/, const char* symlink_value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_make_symbolic_link_async (::GFile* file /*none*/, const char* symlink_value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void make_symbolic_link_async (const gi::cstring_v symlink_value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void make_symbolic_link_async (const gi::cstring_v symlink_value, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_make_symbolic_link_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_make_symbolic_link_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool make_symbolic_link_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool make_symbolic_link_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_measure_disk_usage (GFile* file /*none*/, GFileMeasureFlags flags, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage (::GFile* file /*none*/, ::GFileMeasureFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
GI_INLINE_DECL bool measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files);
GI_INLINE_DECL bool measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files);
GI_INLINE_DECL bool measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback);
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback);
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback, GLib::Error * _error) noexcept;

// void g_file_measure_disk_usage_async (GFile* file /*none*/, GFileMeasureFlags flags, gint io_priority, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_measure_disk_usage_async (::GFile* file /*none*/, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_measure_disk_usage_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
GI_INLINE_DECL bool measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files);
GI_INLINE_DECL bool measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFileMonitor* /*full*/ g_file_monitor (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ g_file_monitor (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags);
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept;

// GFileMonitor* /*full*/ g_file_monitor_directory (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ g_file_monitor_directory (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags);
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept;

// GFileMonitor* /*full*/ g_file_monitor_file (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ g_file_monitor_file (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags);
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept;

// void g_file_mount_enclosing_volume (GFile* location /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_mount_enclosing_volume (::GFile* location /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void mount_enclosing_volume (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void mount_enclosing_volume (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_mount_enclosing_volume_finish (GFile* location /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_mount_enclosing_volume_finish (::GFile* location /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool mount_enclosing_volume_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool mount_enclosing_volume_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_mount_mountable (GFile* file /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_mount_mountable (::GFile* file /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void mount_mountable (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void mount_mountable (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GFile* /*full*/ g_file_mount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_mount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::File mount_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::File mount_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_move (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean g_file_move (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;

// void g_file_move_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_move_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_move_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_move_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool move_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool move_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFileIOStream* /*full*/ g_file_open_readwrite (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_open_readwrite (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream open_readwrite (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileIOStream open_readwrite ();
GI_INLINE_DECL Gio::FileIOStream open_readwrite (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileIOStream open_readwrite (GLib::Error * _error) noexcept;

// void g_file_open_readwrite_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_open_readwrite_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void open_readwrite_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void open_readwrite_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileIOStream* /*full*/ g_file_open_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_open_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream open_readwrite_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileIOStream open_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// const char* /*none,nullable*/ g_file_peek_path (GFile* file /*none*/);
// const char* /*none,nullable*/ g_file_peek_path (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring_v peek_path () noexcept;

// void g_file_poll_mountable (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_poll_mountable (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void poll_mountable (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void poll_mountable (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_poll_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_poll_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool poll_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool poll_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GAppInfo* /*full*/ g_file_query_default_handler (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GAppInfo* /*full*/ g_file_query_default_handler (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::AppInfo query_default_handler (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::AppInfo query_default_handler ();
GI_INLINE_DECL Gio::AppInfo query_default_handler (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::AppInfo query_default_handler (GLib::Error * _error) noexcept;

// void g_file_query_default_handler_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_query_default_handler_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_default_handler_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_default_handler_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GAppInfo* /*full*/ g_file_query_default_handler_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GAppInfo* /*full*/ g_file_query_default_handler_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::AppInfo query_default_handler_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::AppInfo query_default_handler_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_query_exists (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/);
// gboolean g_file_query_exists (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL bool query_exists (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL bool query_exists () noexcept;

// GFileType g_file_query_file_type (GFile* file /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/);
// ::GFileType g_file_query_file_type (::GFile* file /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/);
GI_INLINE_DECL Gio::FileType query_file_type (Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL Gio::FileType query_file_type (Gio::FileQueryInfoFlags flags) noexcept;

// GFileInfo* /*full*/ g_file_query_filesystem_info (GFile* file /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_filesystem_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const gi::cstring_v attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const gi::cstring_v attributes);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const gi::cstring_v attributes, GLib::Error * _error) noexcept;

// void g_file_query_filesystem_info_async (GFile* file /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_query_filesystem_info_async (::GFile* file /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_filesystem_info_async (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_filesystem_info_async (const gi::cstring_v attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* /*full*/ g_file_query_filesystem_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_filesystem_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileInfo* /*full*/ g_file_query_info (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// void g_file_query_info_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_query_info_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_info_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* /*full*/ g_file_query_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileAttributeInfoList* /*full*/ g_file_query_settable_attributes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ g_file_query_settable_attributes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes ();
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes (GLib::Error * _error) noexcept;

// GFileAttributeInfoList* /*full*/ g_file_query_writable_namespaces (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ g_file_query_writable_namespaces (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces ();
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces (GLib::Error * _error) noexcept;

// GFileInputStream* /*full*/ g_file_read (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInputStream* /*full*/ g_file_read (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInputStream read (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInputStream read ();
GI_INLINE_DECL Gio::FileInputStream read (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInputStream read (GLib::Error * _error) noexcept;

// void g_file_read_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_read_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInputStream* /*full*/ g_file_read_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInputStream* /*full*/ g_file_read_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInputStream read_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileInputStream read_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileOutputStream* /*full*/ g_file_replace (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_replace (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream replace (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileOutputStream replace (gboolean make_backup, Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileOutputStream replace (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileOutputStream replace (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_replace_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void replace_async (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_replace_contents (GFile* file /*none*/, const char* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, char** new_etag /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_replace_contents (::GFile* file /*none*/, const guint8* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag, Gio::Cancellable cancellable);
GI_INLINE_DECL bool replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag);
GI_INLINE_DECL bool replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gi::cstring> replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags);
GI_INLINE_DECL std::tuple<bool, gi::cstring> replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_replace_contents_async (GFile* file /*none*/, const char* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_contents_async (::GFile* file /*none*/, const guint8* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void replace_contents_async (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_contents_async (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// void g_file_replace_contents_bytes_async (GFile* file /*none*/, GBytes* contents /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_contents_bytes_async (::GFile* file /*none*/, ::GBytes* contents /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void replace_contents_bytes_async (GLib::Bytes_Ref contents, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_contents_bytes_async (GLib::Bytes_Ref contents, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_replace_contents_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, char** new_etag /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_replace_contents_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, char** new_etag /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool replace_contents_finish (Gio::AsyncResult res, gi::cstring * new_etag);
GI_INLINE_DECL bool replace_contents_finish (Gio::AsyncResult res, gi::cstring * new_etag, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> replace_contents_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<bool, gi::cstring> replace_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileOutputStream* /*full*/ g_file_replace_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_replace_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream replace_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileOutputStream replace_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileIOStream* /*full*/ g_file_replace_readwrite (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_replace_readwrite (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_replace_readwrite_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_readwrite_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void replace_readwrite_async (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_readwrite_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileIOStream* /*full*/ g_file_replace_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_replace_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_file_resolve_relative_path (GFile* file /*none*/, const char* relative_path /*none*/);
// ::GFile* /*full*/ g_file_resolve_relative_path (::GFile* file /*none*/, const char* relative_path /*none*/);
GI_INLINE_DECL Gio::File resolve_relative_path (const gi::cstring_v relative_path) noexcept;

// gboolean g_file_set_attribute (GFile* file /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute (::GFile* file /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_byte_string (GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_byte_string (::GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_int32 (GFile* file /*none*/, const char* attribute /*none*/, gint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_int32 (::GFile* file /*none*/, const char* attribute /*none*/, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_int64 (GFile* file /*none*/, const char* attribute /*none*/, gint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_int64 (::GFile* file /*none*/, const char* attribute /*none*/, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_string (GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_string (::GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_uint32 (GFile* file /*none*/, const char* attribute /*none*/, guint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_uint32 (::GFile* file /*none*/, const char* attribute /*none*/, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_uint64 (GFile* file /*none*/, const char* attribute /*none*/, guint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_uint64 (::GFile* file /*none*/, const char* attribute /*none*/, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// void g_file_set_attributes_async (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_set_attributes_async (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_set_attributes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GFileInfo** info /*full,out*/, GError ** error);
// gboolean g_file_set_attributes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, ::GFileInfo** info /*full,out*/, GError ** error);
GI_INLINE_DECL bool set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info);
GI_INLINE_DECL bool set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo> set_attributes_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo> set_attributes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_set_attributes_from_info (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attributes_from_info (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_file_set_display_name (GFile* file /*none*/, const char* display_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFile* /*full*/ g_file_set_display_name (::GFile* file /*none*/, const char* display_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::File set_display_name (const gi::cstring_v display_name, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::File set_display_name (const gi::cstring_v display_name);
GI_INLINE_DECL Gio::File set_display_name (const gi::cstring_v display_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::File set_display_name (const gi::cstring_v display_name, GLib::Error * _error) noexcept;

// void g_file_set_display_name_async (GFile* file /*none*/, const char* display_name /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_set_display_name_async (::GFile* file /*none*/, const char* display_name /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void set_display_name_async (const gi::cstring_v display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void set_display_name_async (const gi::cstring_v display_name, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFile* /*full*/ g_file_set_display_name_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_set_display_name_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::File set_display_name_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::File set_display_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void g_file_start_mountable (GFile* file /*none*/, GDriveStartFlags flags, GMountOperation* start_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_start_mountable (::GFile* file /*none*/, ::GDriveStartFlags flags, ::GMountOperation* start_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void start_mountable (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void start_mountable (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_start_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_start_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool start_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool start_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_stop_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_stop_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void stop_mountable (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void stop_mountable (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_stop_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_stop_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool stop_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool stop_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_supports_thread_contexts (GFile* file /*none*/);
// gboolean g_file_supports_thread_contexts (::GFile* file /*none*/);
GI_INLINE_DECL bool supports_thread_contexts () noexcept;

// gboolean g_file_trash (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_trash (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool trash (Gio::Cancellable cancellable);
GI_INLINE_DECL bool trash ();
GI_INLINE_DECL bool trash (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool trash (GLib::Error * _error) noexcept;

// void g_file_trash_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_trash_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void trash_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void trash_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_trash_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_trash_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool trash_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool trash_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_unmount_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_unmount_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_file_unmount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_unmount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_file_unmount_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_unmount_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_unmount_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_unmount_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool unmount_mountable_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool unmount_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/file_extra_def.hpp>)
#include <gio/file_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/file_extra.hpp>)
#include <gio/file_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class File : public GI_GIO_FILE_BASE
{ typedef GI_GIO_FILE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFile>
{ typedef Gio::File type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileIfaceDef
{
typedef FileIfaceDef self;
public:
typedef Gio::File instance_type;
typedef ::GFileIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(append_to) = self;
using GI_MEMBER_CHECK_CONFLICT(append_to_async) = self;
using GI_MEMBER_CHECK_CONFLICT(append_to_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(copy) = self;
using GI_MEMBER_CHECK_CONFLICT(copy_async) = self;
using GI_MEMBER_CHECK_CONFLICT(copy_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(create) = self;
using GI_MEMBER_CHECK_CONFLICT(create_async) = self;
using GI_MEMBER_CHECK_CONFLICT(create_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(create_readwrite) = self;
using GI_MEMBER_CHECK_CONFLICT(create_readwrite_async) = self;
using GI_MEMBER_CHECK_CONFLICT(create_readwrite_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_file) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_file_async) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_file_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(dup) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_mountable_with_operation) = self;
using GI_MEMBER_CHECK_CONFLICT(eject_mountable_with_operation_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(enumerate_children) = self;
using GI_MEMBER_CHECK_CONFLICT(enumerate_children_async) = self;
using GI_MEMBER_CHECK_CONFLICT(enumerate_children_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(equal) = self;
using GI_MEMBER_CHECK_CONFLICT(find_enclosing_mount) = self;
using GI_MEMBER_CHECK_CONFLICT(find_enclosing_mount_async) = self;
using GI_MEMBER_CHECK_CONFLICT(find_enclosing_mount_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(get_basename) = self;
using GI_MEMBER_CHECK_CONFLICT(get_child_for_display_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_parent) = self;
using GI_MEMBER_CHECK_CONFLICT(get_parse_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_path) = self;
using GI_MEMBER_CHECK_CONFLICT(get_relative_path) = self;
using GI_MEMBER_CHECK_CONFLICT(get_uri) = self;
using GI_MEMBER_CHECK_CONFLICT(get_uri_scheme) = self;
using GI_MEMBER_CHECK_CONFLICT(has_uri_scheme) = self;
using GI_MEMBER_CHECK_CONFLICT(hash) = self;
using GI_MEMBER_CHECK_CONFLICT(is_native) = self;
using GI_MEMBER_CHECK_CONFLICT(make_directory) = self;
using GI_MEMBER_CHECK_CONFLICT(make_directory_async) = self;
using GI_MEMBER_CHECK_CONFLICT(make_directory_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(make_symbolic_link) = self;
using GI_MEMBER_CHECK_CONFLICT(make_symbolic_link_async) = self;
using GI_MEMBER_CHECK_CONFLICT(make_symbolic_link_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(measure_disk_usage) = self;
using GI_MEMBER_CHECK_CONFLICT(measure_disk_usage_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(monitor_dir) = self;
using GI_MEMBER_CHECK_CONFLICT(monitor_file) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_enclosing_volume) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_enclosing_volume_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_mountable) = self;
using GI_MEMBER_CHECK_CONFLICT(mount_mountable_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(move) = self;
using GI_MEMBER_CHECK_CONFLICT(move_async) = self;
using GI_MEMBER_CHECK_CONFLICT(move_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(open_readwrite) = self;
using GI_MEMBER_CHECK_CONFLICT(open_readwrite_async) = self;
using GI_MEMBER_CHECK_CONFLICT(open_readwrite_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(poll_mountable) = self;
using GI_MEMBER_CHECK_CONFLICT(poll_mountable_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(prefix_matches) = self;
using GI_MEMBER_CHECK_CONFLICT(query_filesystem_info) = self;
using GI_MEMBER_CHECK_CONFLICT(query_filesystem_info_async) = self;
using GI_MEMBER_CHECK_CONFLICT(query_filesystem_info_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info_async) = self;
using GI_MEMBER_CHECK_CONFLICT(query_info_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(query_settable_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(query_writable_namespaces) = self;
using GI_MEMBER_CHECK_CONFLICT(read_async) = self;
using GI_MEMBER_CHECK_CONFLICT(read_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(read_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(replace) = self;
using GI_MEMBER_CHECK_CONFLICT(replace_async) = self;
using GI_MEMBER_CHECK_CONFLICT(replace_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(replace_readwrite) = self;
using GI_MEMBER_CHECK_CONFLICT(replace_readwrite_async) = self;
using GI_MEMBER_CHECK_CONFLICT(replace_readwrite_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(resolve_relative_path) = self;
using GI_MEMBER_CHECK_CONFLICT(set_attribute) = self;
using GI_MEMBER_CHECK_CONFLICT(set_attributes_async) = self;
using GI_MEMBER_CHECK_CONFLICT(set_attributes_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(set_attributes_from_info) = self;
using GI_MEMBER_CHECK_CONFLICT(set_display_name) = self;
using GI_MEMBER_CHECK_CONFLICT(set_display_name_async) = self;
using GI_MEMBER_CHECK_CONFLICT(set_display_name_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(start_mountable) = self;
using GI_MEMBER_CHECK_CONFLICT(start_mountable_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(stop_mountable) = self;
using GI_MEMBER_CHECK_CONFLICT(stop_mountable_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(trash) = self;
using GI_MEMBER_CHECK_CONFLICT(trash_async) = self;
using GI_MEMBER_CHECK_CONFLICT(trash_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(unmount_mountable_with_operation) = self;
using GI_MEMBER_CHECK_CONFLICT(unmount_mountable_with_operation_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FileIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GFileOutputStream* /*full*/ File::append_to (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::append_to (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileOutputStream append_to_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::append_to_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::append_to_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void append_to_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileOutputStream* /*full*/ File::append_to_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::append_to_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileOutputStream append_to_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// gboolean File::copy (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean File::copy (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
virtual bool copy_ (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) = 0;

// void File::copy_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::copy_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void copy_async_ (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::copy_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean File::copy_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual bool copy_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFileOutputStream* /*full*/ File::create (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::create (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileOutputStream create_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::create_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::create_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void create_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileOutputStream* /*full*/ File::create_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::create_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileOutputStream create_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFileIOStream* /*full*/ File::create_readwrite (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::create_readwrite (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileIOStream create_readwrite_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::create_readwrite_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::create_readwrite_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void create_readwrite_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileIOStream* /*full*/ File::create_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::create_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileIOStream create_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// gboolean File::delete_file (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::delete_file (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool delete_file_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::delete_file_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::delete_file_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void delete_file_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::delete_file_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::delete_file_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool delete_file_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GFile* /*full*/ File::dup (GFile* file /*none*/);
// ::GFile* /*full*/ File::dup (::GFile* file /*none*/);
virtual Gio::File dup_ () noexcept = 0;

// void File::eject_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::eject_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean File::eject_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::eject_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void File::eject_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::eject_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void eject_mountable_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::eject_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::eject_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool eject_mountable_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GFileEnumerator* /*full*/ File::enumerate_children (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileEnumerator* /*full*/ File::enumerate_children (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileEnumerator enumerate_children_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::enumerate_children_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::enumerate_children_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void enumerate_children_async_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileEnumerator* /*full*/ File::enumerate_children_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileEnumerator* /*full*/ File::enumerate_children_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileEnumerator enumerate_children_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// gboolean File::equal (GFile* file1 /*none*/, GFile* file2 /*none*/);
// gboolean File::equal (::GFile* file1 /*none*/, ::GFile* file2 /*none*/);
virtual bool equal_ (Gio::File file2) noexcept = 0;

// GMount* /*full*/ File::find_enclosing_mount (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GMount* /*full*/ File::find_enclosing_mount (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::Mount find_enclosing_mount_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::find_enclosing_mount_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::find_enclosing_mount_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void find_enclosing_mount_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GMount* /*full*/ File::find_enclosing_mount_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GMount* /*full*/ File::find_enclosing_mount_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::Mount find_enclosing_mount_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// char* /*full,nullable*/ File::get_basename (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_basename (::GFile* file /*none*/);
virtual gi::cstring get_basename_ () noexcept = 0;

// GFile* /*full*/ File::get_child_for_display_name (GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
// ::GFile* /*full*/ File::get_child_for_display_name (::GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
virtual Gio::File get_child_for_display_name_ (const gi::cstring_v display_name, GLib::Error * _error) = 0;

// GFile* /*full,nullable*/ File::get_parent (GFile* file /*none*/);
// ::GFile* /*full,nullable*/ File::get_parent (::GFile* file /*none*/);
virtual Gio::File get_parent_ () noexcept = 0;

// char* /*full*/ File::get_parse_name (GFile* file /*none*/);
// char* /*full*/ File::get_parse_name (::GFile* file /*none*/);
virtual gi::cstring get_parse_name_ () noexcept = 0;

// char* /*full,nullable*/ File::get_path (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_path (::GFile* file /*none*/);
virtual gi::cstring get_path_ () noexcept = 0;

// char* /*full,nullable*/ File::get_relative_path (GFile* parent /*none*/, GFile* descendant /*none*/);
// char* /*full,nullable*/ File::get_relative_path (::GFile* parent /*none*/, ::GFile* descendant /*none*/);
virtual gi::cstring get_relative_path_ (Gio::File descendant) noexcept = 0;

// char* /*full*/ File::get_uri (GFile* file /*none*/);
// char* /*full*/ File::get_uri (::GFile* file /*none*/);
virtual gi::cstring get_uri_ () noexcept = 0;

// char* /*full,nullable*/ File::get_uri_scheme (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_uri_scheme (::GFile* file /*none*/);
virtual gi::cstring get_uri_scheme_ () noexcept = 0;

// gboolean File::has_uri_scheme (GFile* file /*none*/, const char* uri_scheme /*none*/);
// gboolean File::has_uri_scheme (::GFile* file /*none*/, const char* uri_scheme /*none*/);
virtual bool has_uri_scheme_ (const gi::cstring_v uri_scheme) noexcept = 0;

// guint File::hash (GFile* file /*none*/);
// guint File::hash (::GFile* file /*none*/);
virtual guint hash_ () noexcept = 0;

// gboolean File::is_native (GFile* file /*none*/);
// gboolean File::is_native (::GFile* file /*none*/);
virtual bool is_native_ () noexcept = 0;

// gboolean File::make_directory (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::make_directory (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool make_directory_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::make_directory_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::make_directory_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void make_directory_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::make_directory_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::make_directory_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool make_directory_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean File::make_symbolic_link (GFile* file /*none*/, const char* symlink_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::make_symbolic_link (::GFile* file /*none*/, const char* symlink_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool make_symbolic_link_ (const gi::cstring_v symlink_value, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::make_symbolic_link_async (GFile* file /*none*/, const char* symlink_value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::make_symbolic_link_async (::GFile* file /*none*/, const char* symlink_value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void make_symbolic_link_async_ (const gi::cstring_v symlink_value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::make_symbolic_link_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::make_symbolic_link_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool make_symbolic_link_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean File::measure_disk_usage (GFile* file /*none*/, GFileMeasureFlags flags, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage (::GFile* file /*none*/, ::GFileMeasureFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
virtual bool measure_disk_usage_ (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error) = 0;

// gboolean File::measure_disk_usage_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
virtual bool measure_disk_usage_finish_ (Gio::AsyncResult result, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error) = 0;

// GFileMonitor* /*full*/ File::monitor_dir (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ File::monitor_dir (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileMonitor monitor_dir_ (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GFileMonitor* /*full*/ File::monitor_file (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ File::monitor_file (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileMonitor monitor_file_ (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::mount_enclosing_volume (GFile* location /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::mount_enclosing_volume (::GFile* location /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void mount_enclosing_volume_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::mount_enclosing_volume_finish (GFile* location /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::mount_enclosing_volume_finish (::GFile* location /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool mount_enclosing_volume_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void File::mount_mountable (GFile* file /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::mount_mountable (::GFile* file /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void mount_mountable_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFile* /*full*/ File::mount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ File::mount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::File mount_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean File::move (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean File::move (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
virtual bool move_ (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) = 0;

// void File::move_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::move_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void move_async_ (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::move_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::move_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool move_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GFileIOStream* /*full*/ File::open_readwrite (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::open_readwrite (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileIOStream open_readwrite_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::open_readwrite_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::open_readwrite_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void open_readwrite_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileIOStream* /*full*/ File::open_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::open_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileIOStream open_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// void File::poll_mountable (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::poll_mountable (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void poll_mountable_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::poll_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::poll_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool poll_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean File::prefix_matches (GFile* prefix /*none*/, GFile* file /*none*/);
// gboolean File::prefix_matches (::GFile* prefix /*none*/, ::GFile* file /*none*/);
virtual bool prefix_matches_ (Gio::File file) noexcept = 0;

// GFileInfo* /*full*/ File::query_filesystem_info (GFile* file /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_filesystem_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileInfo query_filesystem_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::query_filesystem_info_async (GFile* file /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::query_filesystem_info_async (::GFile* file /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void query_filesystem_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileInfo* /*full*/ File::query_filesystem_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_filesystem_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileInfo query_filesystem_info_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFileInfo* /*full*/ File::query_info (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileInfo query_info_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::query_info_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::query_info_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void query_info_async_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileInfo* /*full*/ File::query_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileInfo query_info_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFileAttributeInfoList* /*full*/ File::query_settable_attributes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ File::query_settable_attributes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileAttributeInfoList query_settable_attributes_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GFileAttributeInfoList* /*full*/ File::query_writable_namespaces (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ File::query_writable_namespaces (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileAttributeInfoList query_writable_namespaces_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::read_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::read_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void read_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileInputStream* /*full*/ File::read_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInputStream* /*full*/ File::read_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileInputStream read_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFileInputStream* /*full*/ File::read_fn (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInputStream* /*full*/ File::read_fn (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileInputStream read_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GFileOutputStream* /*full*/ File::replace (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::replace (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileOutputStream replace_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::replace_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::replace_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void replace_async_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileOutputStream* /*full*/ File::replace_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::replace_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileOutputStream replace_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFileIOStream* /*full*/ File::replace_readwrite (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::replace_readwrite (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileIOStream replace_readwrite_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::replace_readwrite_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::replace_readwrite_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void replace_readwrite_async_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFileIOStream* /*full*/ File::replace_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::replace_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::FileIOStream replace_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// GFile* /*full*/ File::resolve_relative_path (GFile* file /*none*/, const char* relative_path /*none*/);
// ::GFile* /*full*/ File::resolve_relative_path (::GFile* file /*none*/, const char* relative_path /*none*/);
virtual Gio::File resolve_relative_path_ (const gi::cstring_v relative_path) noexcept = 0;

// gboolean File::set_attribute (GFile* file /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::set_attribute (::GFile* file /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool set_attribute_ (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::set_attributes_async (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::set_attributes_async (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void set_attributes_async_ (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::set_attributes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GFileInfo** info /*full,out*/, GError ** error);
// gboolean File::set_attributes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, ::GFileInfo** info /*full,out*/, GError ** error);
virtual bool set_attributes_finish_ (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error) = 0;

// gboolean File::set_attributes_from_info (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::set_attributes_from_info (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool set_attributes_from_info_ (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GFile* /*full*/ File::set_display_name (GFile* file /*none*/, const char* display_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFile* /*full*/ File::set_display_name (::GFile* file /*none*/, const char* display_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::File set_display_name_ (const gi::cstring_v display_name, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::set_display_name_async (GFile* file /*none*/, const char* display_name /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::set_display_name_async (::GFile* file /*none*/, const char* display_name /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void set_display_name_async_ (const gi::cstring_v display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GFile* /*full*/ File::set_display_name_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFile* /*full*/ File::set_display_name_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
virtual Gio::File set_display_name_finish_ (Gio::AsyncResult res, GLib::Error * _error) = 0;

// void File::start_mountable (GFile* file /*none*/, GDriveStartFlags flags, GMountOperation* start_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::start_mountable (::GFile* file /*none*/, ::GDriveStartFlags flags, ::GMountOperation* start_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void start_mountable_ (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::start_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::start_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool start_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void File::stop_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::stop_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void stop_mountable_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::stop_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::stop_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool stop_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean File::trash (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::trash (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool trash_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void File::trash_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::trash_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void trash_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::trash_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::trash_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool trash_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void File::unmount_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::unmount_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean File::unmount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::unmount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void File::unmount_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::unmount_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void unmount_mountable_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean File::unmount_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::unmount_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool unmount_mountable_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

using FileImpl = detail::InterfaceImpl<FileIfaceDef>;

class FileIfaceClassImpl: public detail::InterfaceClassImpl<FileImpl>
{
friend class internal::FileIfaceDef;
typedef FileIfaceClassImpl self;
typedef detail::InterfaceClassImpl<FileImpl> super;

protected:
using super::super;

// GFileOutputStream* /*full*/ File::append_to (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::append_to (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream append_to_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::append_to_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::append_to_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void append_to_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileOutputStream* /*full*/ File::append_to_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::append_to_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream append_to_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// gboolean File::copy (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean File::copy (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
GI_INLINE_DECL bool copy_ (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) override;

// void File::copy_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::copy_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void copy_async_ (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::copy_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean File::copy_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL bool copy_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFileOutputStream* /*full*/ File::create (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::create (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream create_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::create_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::create_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void create_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileOutputStream* /*full*/ File::create_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::create_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream create_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFileIOStream* /*full*/ File::create_readwrite (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::create_readwrite (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream create_readwrite_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::create_readwrite_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::create_readwrite_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void create_readwrite_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileIOStream* /*full*/ File::create_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::create_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream create_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// gboolean File::delete_file (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::delete_file (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool delete_file_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::delete_file_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::delete_file_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void delete_file_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::delete_file_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::delete_file_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool delete_file_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GFile* /*full*/ File::dup (GFile* file /*none*/);
// ::GFile* /*full*/ File::dup (::GFile* file /*none*/);
GI_INLINE_DECL Gio::File dup_ () noexcept override;

// void File::eject_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::eject_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean File::eject_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::eject_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void File::eject_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::eject_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void eject_mountable_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::eject_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::eject_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool eject_mountable_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GFileEnumerator* /*full*/ File::enumerate_children (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileEnumerator* /*full*/ File::enumerate_children (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::enumerate_children_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::enumerate_children_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void enumerate_children_async_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileEnumerator* /*full*/ File::enumerate_children_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileEnumerator* /*full*/ File::enumerate_children_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// gboolean File::equal (GFile* file1 /*none*/, GFile* file2 /*none*/);
// gboolean File::equal (::GFile* file1 /*none*/, ::GFile* file2 /*none*/);
GI_INLINE_DECL bool equal_ (Gio::File file2) noexcept override;

// GMount* /*full*/ File::find_enclosing_mount (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GMount* /*full*/ File::find_enclosing_mount (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::Mount find_enclosing_mount_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::find_enclosing_mount_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::find_enclosing_mount_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void find_enclosing_mount_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GMount* /*full*/ File::find_enclosing_mount_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GMount* /*full*/ File::find_enclosing_mount_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::Mount find_enclosing_mount_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// char* /*full,nullable*/ File::get_basename (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_basename (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_basename_ () noexcept override;

// GFile* /*full*/ File::get_child_for_display_name (GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
// ::GFile* /*full*/ File::get_child_for_display_name (::GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
GI_INLINE_DECL Gio::File get_child_for_display_name_ (const gi::cstring_v display_name, GLib::Error * _error) override;

// GFile* /*full,nullable*/ File::get_parent (GFile* file /*none*/);
// ::GFile* /*full,nullable*/ File::get_parent (::GFile* file /*none*/);
GI_INLINE_DECL Gio::File get_parent_ () noexcept override;

// char* /*full*/ File::get_parse_name (GFile* file /*none*/);
// char* /*full*/ File::get_parse_name (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_parse_name_ () noexcept override;

// char* /*full,nullable*/ File::get_path (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_path (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_path_ () noexcept override;

// char* /*full,nullable*/ File::get_relative_path (GFile* parent /*none*/, GFile* descendant /*none*/);
// char* /*full,nullable*/ File::get_relative_path (::GFile* parent /*none*/, ::GFile* descendant /*none*/);
GI_INLINE_DECL gi::cstring get_relative_path_ (Gio::File descendant) noexcept override;

// char* /*full*/ File::get_uri (GFile* file /*none*/);
// char* /*full*/ File::get_uri (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_uri_ () noexcept override;

// char* /*full,nullable*/ File::get_uri_scheme (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_uri_scheme (::GFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_uri_scheme_ () noexcept override;

// gboolean File::has_uri_scheme (GFile* file /*none*/, const char* uri_scheme /*none*/);
// gboolean File::has_uri_scheme (::GFile* file /*none*/, const char* uri_scheme /*none*/);
GI_INLINE_DECL bool has_uri_scheme_ (const gi::cstring_v uri_scheme) noexcept override;

// guint File::hash (GFile* file /*none*/);
// guint File::hash (::GFile* file /*none*/);
GI_INLINE_DECL guint hash_ () noexcept override;

// gboolean File::is_native (GFile* file /*none*/);
// gboolean File::is_native (::GFile* file /*none*/);
GI_INLINE_DECL bool is_native_ () noexcept override;

// gboolean File::make_directory (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::make_directory (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool make_directory_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::make_directory_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::make_directory_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void make_directory_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::make_directory_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::make_directory_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool make_directory_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean File::make_symbolic_link (GFile* file /*none*/, const char* symlink_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::make_symbolic_link (::GFile* file /*none*/, const char* symlink_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool make_symbolic_link_ (const gi::cstring_v symlink_value, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::make_symbolic_link_async (GFile* file /*none*/, const char* symlink_value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::make_symbolic_link_async (::GFile* file /*none*/, const char* symlink_value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void make_symbolic_link_async_ (const gi::cstring_v symlink_value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::make_symbolic_link_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::make_symbolic_link_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool make_symbolic_link_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean File::measure_disk_usage (GFile* file /*none*/, GFileMeasureFlags flags, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage (::GFile* file /*none*/, ::GFileMeasureFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
GI_INLINE_DECL bool measure_disk_usage_ (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error) override;

// gboolean File::measure_disk_usage_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
GI_INLINE_DECL bool measure_disk_usage_finish_ (Gio::AsyncResult result, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error) override;

// GFileMonitor* /*full*/ File::monitor_dir (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ File::monitor_dir (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor_dir_ (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// GFileMonitor* /*full*/ File::monitor_file (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ File::monitor_file (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor_file_ (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::mount_enclosing_volume (GFile* location /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::mount_enclosing_volume (::GFile* location /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void mount_enclosing_volume_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::mount_enclosing_volume_finish (GFile* location /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::mount_enclosing_volume_finish (::GFile* location /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool mount_enclosing_volume_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void File::mount_mountable (GFile* file /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::mount_mountable (::GFile* file /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void mount_mountable_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFile* /*full*/ File::mount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ File::mount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::File mount_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean File::move (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean File::move (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
GI_INLINE_DECL bool move_ (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) override;

// void File::move_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::move_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void move_async_ (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::move_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::move_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool move_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GFileIOStream* /*full*/ File::open_readwrite (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::open_readwrite (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream open_readwrite_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::open_readwrite_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::open_readwrite_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void open_readwrite_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileIOStream* /*full*/ File::open_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::open_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream open_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// void File::poll_mountable (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::poll_mountable (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void poll_mountable_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::poll_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::poll_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool poll_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean File::prefix_matches (GFile* prefix /*none*/, GFile* file /*none*/);
// gboolean File::prefix_matches (::GFile* prefix /*none*/, ::GFile* file /*none*/);
GI_INLINE_DECL bool prefix_matches_ (Gio::File file) noexcept override;

// GFileInfo* /*full*/ File::query_filesystem_info (GFile* file /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_filesystem_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::query_filesystem_info_async (GFile* file /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::query_filesystem_info_async (::GFile* file /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_filesystem_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileInfo* /*full*/ File::query_filesystem_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_filesystem_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFileInfo* /*full*/ File::query_info (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::query_info_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::query_info_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void query_info_async_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileInfo* /*full*/ File::query_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFileAttributeInfoList* /*full*/ File::query_settable_attributes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ File::query_settable_attributes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// GFileAttributeInfoList* /*full*/ File::query_writable_namespaces (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ File::query_writable_namespaces (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::read_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::read_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void read_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileInputStream* /*full*/ File::read_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInputStream* /*full*/ File::read_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileInputStream read_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFileInputStream* /*full*/ File::read_fn (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInputStream* /*full*/ File::read_fn (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInputStream read_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// GFileOutputStream* /*full*/ File::replace (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::replace (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream replace_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::replace_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::replace_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void replace_async_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileOutputStream* /*full*/ File::replace_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::replace_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream replace_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFileIOStream* /*full*/ File::replace_readwrite (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::replace_readwrite (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::replace_readwrite_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::replace_readwrite_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void replace_readwrite_async_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFileIOStream* /*full*/ File::replace_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::replace_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// GFile* /*full*/ File::resolve_relative_path (GFile* file /*none*/, const char* relative_path /*none*/);
// ::GFile* /*full*/ File::resolve_relative_path (::GFile* file /*none*/, const char* relative_path /*none*/);
GI_INLINE_DECL Gio::File resolve_relative_path_ (const gi::cstring_v relative_path) noexcept override;

// gboolean File::set_attribute (GFile* file /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::set_attribute (::GFile* file /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attribute_ (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::set_attributes_async (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::set_attributes_async (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void set_attributes_async_ (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::set_attributes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GFileInfo** info /*full,out*/, GError ** error);
// gboolean File::set_attributes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, ::GFileInfo** info /*full,out*/, GError ** error);
GI_INLINE_DECL bool set_attributes_finish_ (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error) override;

// gboolean File::set_attributes_from_info (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::set_attributes_from_info (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool set_attributes_from_info_ (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// GFile* /*full*/ File::set_display_name (GFile* file /*none*/, const char* display_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFile* /*full*/ File::set_display_name (::GFile* file /*none*/, const char* display_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::File set_display_name_ (const gi::cstring_v display_name, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::set_display_name_async (GFile* file /*none*/, const char* display_name /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::set_display_name_async (::GFile* file /*none*/, const char* display_name /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void set_display_name_async_ (const gi::cstring_v display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GFile* /*full*/ File::set_display_name_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFile* /*full*/ File::set_display_name_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL Gio::File set_display_name_finish_ (Gio::AsyncResult res, GLib::Error * _error) override;

// void File::start_mountable (GFile* file /*none*/, GDriveStartFlags flags, GMountOperation* start_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::start_mountable (::GFile* file /*none*/, ::GDriveStartFlags flags, ::GMountOperation* start_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void start_mountable_ (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::start_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::start_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool start_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void File::stop_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::stop_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void stop_mountable_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::stop_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::stop_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool stop_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean File::trash (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::trash (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool trash_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void File::trash_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::trash_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void trash_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::trash_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::trash_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool trash_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void File::unmount_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::unmount_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean File::unmount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::unmount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void File::unmount_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::unmount_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void unmount_mountable_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean File::unmount_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::unmount_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool unmount_mountable_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct FileIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(FileIfaceClassImpl, append_to)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, append_to_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, append_to_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, copy)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, copy_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, copy_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, create)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, create_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, create_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, create_readwrite)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, create_readwrite_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, create_readwrite_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, delete_file)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, delete_file_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, delete_file_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, dup)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, eject_mountable_with_operation)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, eject_mountable_with_operation_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, enumerate_children)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, enumerate_children_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, enumerate_children_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, equal)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, find_enclosing_mount)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, find_enclosing_mount_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, find_enclosing_mount_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_basename)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_child_for_display_name)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_parent)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_parse_name)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_path)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_relative_path)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_uri)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, get_uri_scheme)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, has_uri_scheme)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, hash)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, is_native)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, make_directory)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, make_directory_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, make_directory_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, make_symbolic_link)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, make_symbolic_link_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, make_symbolic_link_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, measure_disk_usage)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, measure_disk_usage_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, monitor_dir)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, monitor_file)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, mount_enclosing_volume)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, mount_enclosing_volume_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, mount_mountable)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, mount_mountable_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, move)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, move_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, move_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, open_readwrite)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, open_readwrite_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, open_readwrite_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, poll_mountable)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, poll_mountable_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, prefix_matches)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_filesystem_info)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_filesystem_info_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_filesystem_info_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_info)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_info_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_info_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_settable_attributes)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, query_writable_namespaces)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, read_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, read_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, read_fn)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, replace)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, replace_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, replace_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, replace_readwrite)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, replace_readwrite_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, replace_readwrite_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, resolve_relative_path)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_attribute)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_attributes_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_attributes_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_attributes_from_info)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_display_name)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_display_name_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, set_display_name_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, start_mountable)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, start_mountable_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, stop_mountable)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, stop_mountable_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, trash)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, trash_async)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, trash_finish)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, unmount_mountable_with_operation)
  GI_MEMBER_DEFINE(FileIfaceClassImpl, unmount_mountable_with_operation_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, append_to),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, append_to_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, append_to_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, copy),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, copy_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, copy_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_readwrite),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_readwrite_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_readwrite_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_file),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_file_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_file_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, dup),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_mountable_with_operation),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, eject_mountable_with_operation_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enumerate_children),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enumerate_children_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enumerate_children_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, equal),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, find_enclosing_mount),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, find_enclosing_mount_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, find_enclosing_mount_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_basename),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_child_for_display_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_parent),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_parse_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_relative_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_uri),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_uri_scheme),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, has_uri_scheme),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, hash),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_native),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, make_directory),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, make_directory_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, make_directory_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, make_symbolic_link),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, make_symbolic_link_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, make_symbolic_link_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, measure_disk_usage),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, measure_disk_usage_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, monitor_dir),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, monitor_file),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_enclosing_volume),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_enclosing_volume_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_mountable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mount_mountable_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, move),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, move_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, move_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, open_readwrite),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, open_readwrite_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, open_readwrite_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, poll_mountable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, poll_mountable_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, prefix_matches),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_filesystem_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_filesystem_info_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_filesystem_info_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_info_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_settable_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_writable_namespaces),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, read_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, replace),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, replace_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, replace_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, replace_readwrite),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, replace_readwrite_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, replace_readwrite_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, resolve_relative_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_attribute),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_attributes_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_attributes_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_attributes_from_info),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_display_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_display_name_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_display_name_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, start_mountable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, start_mountable_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, stop_mountable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, stop_mountable_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, trash),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, trash_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, trash_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unmount_mountable_with_operation),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unmount_mountable_with_operation_finish)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
