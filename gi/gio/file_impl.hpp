// AUTO-GENERATED

#ifndef _GI_GIO_FILE_IMPL_HPP_
#define _GI_GIO_FILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFile* /*full*/ g_file_new_build_filename (const gchar* first_element /*none*/,  ..._ /*none*/);
// ::GFile* /*full*/ g_file_new_build_filename (const char* first_element /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GFile* /*full*/ g_file_new_build_filenamev (const gchar* const* args /*none*/);
// ::GFile* /*full*/ g_file_new_build_filenamev (const char** args /*none*/);
Gio::File base::FileBase::new_build_filenamev (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> args) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char** args);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_build_filenamev;
  auto args_w = unwrap (std::move(args), gi::transfer_none);
  auto args_to_c = args_w;
  auto _temp_ret = call_wrap_v ((const char**) (args_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_new_for_commandline_arg (const char* arg /*none*/);
// ::GFile* /*full*/ g_file_new_for_commandline_arg (const char* arg /*none*/);
Gio::File base::FileBase::new_for_commandline_arg (const gi::cstring_v arg) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* arg);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_for_commandline_arg;
  auto arg_to_c = gi::unwrap (arg, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (arg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_new_for_commandline_arg_and_cwd (const gchar* arg /*none*/, const gchar* cwd /*none*/);
// ::GFile* /*full*/ g_file_new_for_commandline_arg_and_cwd (const char* arg /*none*/, const char* cwd /*none*/);
Gio::File base::FileBase::new_for_commandline_arg_and_cwd (const gi::cstring_v arg, const gi::cstring_v cwd) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* arg, const char* cwd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_for_commandline_arg_and_cwd;
  auto cwd_to_c = gi::unwrap (cwd, gi::transfer_none);
  auto arg_to_c = gi::unwrap (arg, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (arg_to_c), (const char*) (cwd_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_new_for_path (const char* path /*none*/);
// ::GFile* /*full*/ g_file_new_for_path (const char* path /*none*/);
Gio::File base::FileBase::new_for_path (const gi::cstring_v path) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_for_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_new_for_uri (const char* uri /*none*/);
// ::GFile* /*full*/ g_file_new_for_uri (const char* uri /*none*/);
Gio::File base::FileBase::new_for_uri (const gi::cstring_v uri) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_new_tmp (const char* tmpl /*none,nullable*/, GFileIOStream** iostream /*full,out*/, GError ** error);
// ::GFile* /*full*/ g_file_new_tmp (const char* tmpl /*none,nullable*/, ::GFileIOStream** iostream /*full,out*/, GError ** error);
Gio::File base::FileBase::new_tmp (const gi::cstring_v tmpl, Gio::FileIOStream & iostream)
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  iostream = gi::wrap (iostream_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::new_tmp (Gio::FileIOStream & iostream)
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  iostream = gi::wrap (iostream_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::new_tmp (const gi::cstring_v tmpl, Gio::FileIOStream & iostream, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  iostream = gi::wrap (iostream_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::new_tmp (Gio::FileIOStream & iostream, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  iostream = gi::wrap (iostream_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp (const gi::cstring_v tmpl)
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (iostream_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp ()
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (iostream_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp (const gi::cstring_v tmpl, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (iostream_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp (GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (iostream_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_file_new_tmp_async (const char* tmpl /*none,nullable*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_new_tmp_async (const char* tmpl /*none,nullable*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::new_tmp_async (const gi::cstring_v tmpl, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* tmpl, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  call_wrap_v ((const char*) (tmpl_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::new_tmp_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* tmpl, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto tmpl_to_c = nullptr;
  call_wrap_v ((const char*) (tmpl_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_file_new_tmp_dir_async (const char* tmpl /*none,nullable*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_new_tmp_dir_async (const char* tmpl /*none,nullable*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::new_tmp_dir_async (const gi::cstring_v tmpl, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* tmpl, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_dir_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none);
  call_wrap_v ((const char*) (tmpl_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::new_tmp_dir_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* tmpl, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_dir_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto tmpl_to_c = nullptr;
  call_wrap_v ((const char*) (tmpl_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full*/ g_file_new_tmp_dir_finish (GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_new_tmp_dir_finish (::GAsyncResult* result /*none*/, GError ** error);
Gio::File base::FileBase::new_tmp_dir_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_dir_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::new_tmp_dir_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_dir_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_new_tmp_finish (GAsyncResult* result /*none*/, GFileIOStream** iostream /*full,out*/, GError ** error);
// ::GFile* /*full*/ g_file_new_tmp_finish (::GAsyncResult* result /*none*/, ::GFileIOStream** iostream /*full,out*/, GError ** error);
Gio::File base::FileBase::new_tmp_finish (Gio::AsyncResult result, Gio::FileIOStream & iostream)
{
  typedef ::GFile* (*call_wrap_t) (::GAsyncResult* result, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_finish;
  ::GFileIOStream* iostream_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GFileIOStream**) (&iostream_o), &error);
  iostream = gi::wrap (iostream_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::new_tmp_finish (Gio::AsyncResult result, Gio::FileIOStream & iostream, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GAsyncResult* result, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_finish;
  ::GFileIOStream* iostream_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  iostream = gi::wrap (iostream_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GAsyncResult* result, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_finish;
  ::GFileIOStream* iostream_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GFileIOStream**) (&iostream_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (iostream_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GAsyncResult* result, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_new_tmp_finish;
  ::GFileIOStream* iostream_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (iostream_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GFile* /*full*/ g_file_parse_name (const char* parse_name /*none*/);
// ::GFile* /*full*/ g_file_parse_name (const char* parse_name /*none*/);
Gio::File base::FileBase::parse_name (const gi::cstring_v parse_name) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* parse_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_parse_name;
  auto parse_name_to_c = gi::unwrap (parse_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (parse_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileOutputStream* /*full*/ g_file_append_to (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_append_to (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_append_to_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_append_to_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* /*full*/ g_file_append_to_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_append_to_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileOutputStream base::FileBase::append_to_finish (Gio::AsyncResult res)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::append_to_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_append_to_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_file_build_attribute_list_for_copy (GFile* file /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_file_build_attribute_list_for_copy (::GFile* file /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::cstring base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags)
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_copy (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean g_file_copy (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_copy_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_copy_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_copy_attributes (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_copy_attributes (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_attributes;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_attributes;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_copy_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean g_file_copy_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
bool base::FileBase::copy_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_copy_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileOutputStream* /*full*/ g_file_create (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_create (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_create_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_create_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* /*full*/ g_file_create_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_create_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileOutputStream base::FileBase::create_finish (Gio::AsyncResult res)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::create_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileIOStream* /*full*/ g_file_create_readwrite (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_create_readwrite (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_create_readwrite_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_create_readwrite_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* /*full*/ g_file_create_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_create_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileIOStream base::FileBase::create_readwrite_finish (Gio::AsyncResult res)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::create_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_create_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_delete (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_delete (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::delete_ (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::delete_ ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::delete_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::delete_ (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_delete_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_delete_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::delete_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::delete_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_delete_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_delete_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::delete_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::delete_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_delete_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ g_file_dup (GFile* file /*none*/);
// ::GFile* /*full*/ g_file_dup (::GFile* file /*none*/);
Gio::File base::FileBase::dup () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_dup;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_eject_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_eject_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_file_eject_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_eject_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_file_eject_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_eject_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_eject_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_eject_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_eject_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_eject_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::eject_mountable_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_eject_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::eject_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_eject_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileEnumerator* /*full*/ g_file_enumerate_children (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileEnumerator* /*full*/ g_file_enumerate_children (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileEnumerator base::FileBase::enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileEnumerator base::FileBase::enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags)
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileEnumerator base::FileBase::enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileEnumerator base::FileBase::enumerate_children (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_enumerate_children_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_enumerate_children_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::enumerate_children_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::enumerate_children_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileEnumerator* /*full*/ g_file_enumerate_children_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileEnumerator* /*full*/ g_file_enumerate_children_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileEnumerator base::FileBase::enumerate_children_finish (Gio::AsyncResult res)
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileEnumerator base::FileBase::enumerate_children_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerate_children_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_equal (GFile* file1 /*none*/, GFile* file2 /*none*/);
// gboolean g_file_equal (::GFile* file1 /*none*/, ::GFile* file2 /*none*/);
bool base::FileBase::equal (Gio::File file2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file1, ::GFile* file2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_equal;
  auto file2_to_c = gi::unwrap (file2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (file2_to_c));
  return _temp_ret;
}

// GMount* /*full*/ g_file_find_enclosing_mount (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GMount* /*full*/ g_file_find_enclosing_mount (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::Mount base::FileBase::find_enclosing_mount (Gio::Cancellable cancellable)
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Mount base::FileBase::find_enclosing_mount ()
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Mount base::FileBase::find_enclosing_mount (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Mount base::FileBase::find_enclosing_mount (GLib::Error * _error) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_find_enclosing_mount_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_find_enclosing_mount_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::find_enclosing_mount_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::find_enclosing_mount_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GMount* /*full*/ g_file_find_enclosing_mount_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GMount* /*full*/ g_file_find_enclosing_mount_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::Mount base::FileBase::find_enclosing_mount_finish (Gio::AsyncResult res)
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Mount base::FileBase::find_enclosing_mount_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_find_enclosing_mount_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_file_get_basename (GFile* file /*none*/);
// char* /*full,nullable*/ g_file_get_basename (::GFile* file /*none*/);
gi::cstring base::FileBase::get_basename () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_basename;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_get_child (GFile* file /*none*/, const char* name /*none*/);
// ::GFile* /*full*/ g_file_get_child (::GFile* file /*none*/, const char* name /*none*/);
Gio::File base::FileBase::get_child (const gi::cstring_v name) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_get_child_for_display_name (GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_get_child_for_display_name (::GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
Gio::File base::FileBase::get_child_for_display_name (const gi::cstring_v display_name)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_child_for_display_name;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::get_child_for_display_name (const gi::cstring_v display_name, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_child_for_display_name;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full,nullable*/ g_file_get_parent (GFile* file /*none*/);
// ::GFile* /*full,nullable*/ g_file_get_parent (::GFile* file /*none*/);
Gio::File base::FileBase::get_parent () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_parent;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_file_get_parse_name (GFile* file /*none*/);
// char* /*full*/ g_file_get_parse_name (::GFile* file /*none*/);
gi::cstring base::FileBase::get_parse_name () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_parse_name;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_file_get_path (GFile* file /*none*/);
// char* /*full,nullable*/ g_file_get_path (::GFile* file /*none*/);
gi::cstring base::FileBase::get_path () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_path;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_file_get_relative_path (GFile* parent /*none*/, GFile* descendant /*none*/);
// char* /*full,nullable*/ g_file_get_relative_path (::GFile* parent /*none*/, ::GFile* descendant /*none*/);
gi::cstring base::FileBase::get_relative_path (Gio::File descendant) noexcept
{
  typedef char* (*call_wrap_t) (::GFile* parent, ::GFile* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_relative_path;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (descendant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_file_get_uri (GFile* file /*none*/);
// char* /*full*/ g_file_get_uri (::GFile* file /*none*/);
gi::cstring base::FileBase::get_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_uri;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_file_get_uri_scheme (GFile* file /*none*/);
// char* /*full,nullable*/ g_file_get_uri_scheme (::GFile* file /*none*/);
gi::cstring base::FileBase::get_uri_scheme () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_get_uri_scheme;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_has_parent (GFile* file /*none*/, GFile* parent /*none,nullable*/);
// gboolean g_file_has_parent (::GFile* file /*none*/, ::GFile* parent /*none,nullable*/);
bool base::FileBase::has_parent (Gio::File parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFile* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_has_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (parent_to_c));
  return _temp_ret;
}
bool base::FileBase::has_parent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFile* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_has_parent;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (parent_to_c));
  return _temp_ret;
}

// gboolean g_file_has_prefix (GFile* file /*none*/, GFile* prefix /*none*/);
// gboolean g_file_has_prefix (::GFile* file /*none*/, ::GFile* prefix /*none*/);
bool base::FileBase::has_prefix (Gio::File prefix) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFile* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_has_prefix;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (prefix_to_c));
  return _temp_ret;
}

// gboolean g_file_has_uri_scheme (GFile* file /*none*/, const char* uri_scheme /*none*/);
// gboolean g_file_has_uri_scheme (::GFile* file /*none*/, const char* uri_scheme /*none*/);
bool base::FileBase::has_uri_scheme (const gi::cstring_v uri_scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* uri_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_has_uri_scheme;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (uri_scheme_to_c));
  return _temp_ret;
}

// guint g_file_hash (gconstpointer file /*none*/);
// guint g_file_hash (const ::GFile* file /*none*/);
guint base::FileBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_hash;
  auto _temp_ret = call_wrap_v ((const ::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_is_native (GFile* file /*none*/);
// gboolean g_file_is_native (::GFile* file /*none*/);
bool base::FileBase::is_native () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_is_native;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// GBytes* /*full*/ g_file_load_bytes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, gchar** etag_out /*full,out,opt,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_file_load_bytes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GLib::Bytes base::FileBase::load_bytes (Gio::Cancellable cancellable, gi::cstring * etag_out)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::FileBase::load_bytes (gi::cstring * etag_out)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::FileBase::load_bytes (Gio::Cancellable cancellable, gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::FileBase::load_bytes (gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<GLib::Bytes, gi::cstring> base::FileBase::load_bytes (Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, gi::cstring> base::FileBase::load_bytes ()
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, gi::cstring> base::FileBase::load_bytes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, gi::cstring> base::FileBase::load_bytes (GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_file_load_bytes_async (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_load_bytes_async (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::load_bytes_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::load_bytes_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GBytes* /*full*/ g_file_load_bytes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, gchar** etag_out /*full,out,opt,nullable*/, GError ** error);
// ::GBytes* /*full*/ g_file_load_bytes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, char** etag_out /*full,out,opt,nullable*/, GError ** error);
GLib::Bytes base::FileBase::load_bytes_finish (Gio::AsyncResult result, gi::cstring * etag_out)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::FileBase::load_bytes_finish (Gio::AsyncResult result, gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<GLib::Bytes, gi::cstring> base::FileBase::load_bytes_finish (Gio::AsyncResult result)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&etag_out_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<GLib::Bytes, gi::cstring> base::FileBase::load_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_file_load_contents (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, char** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_load_contents (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, guint8** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
bool base::FileBase::load_contents (Gio::Cancellable cancellable, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_contents (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_contents (Gio::Cancellable cancellable, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::load_contents (gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_contents (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_contents ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_contents (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_contents (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_file_load_contents_async (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_load_contents_async (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::load_contents_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::load_contents_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_load_contents_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, char** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_load_contents_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, guint8** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
bool base::FileBase::load_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_contents_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_file_load_partial_contents_async (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GFileReadMoreCallback read_more_callback /*none*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_load_partial_contents_async (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::FileReadMoreCallback::cfunction_type read_more_callback /*none*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; not introspectable, callback closure parameter already used

// gboolean g_file_load_partial_contents_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, char** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_load_partial_contents_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, guint8** contents /*full,out*/, gsize* length, char** etag_out /*full,out,opt,nullable*/, GError ** error);
bool base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> & contents, gi::cstring * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full);
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_partial_contents_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>, gi::cstring> base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  gi::Collection<gi::DSpan, guint8, gi::transfer_full_t> contents;
  contents = gi::wrap_to<gi::Collection<gi::DSpan, guint8, gi::transfer_full_t>>(contents_o, length, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = contents;
  auto &&tmp_return_3 = gi::wrap (etag_out_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean g_file_make_directory (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_make_directory (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::make_directory (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::make_directory (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_make_directory_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_make_directory_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::make_directory_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::make_directory_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_make_directory_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_make_directory_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::make_directory_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_make_directory_with_parents (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_make_directory_with_parents (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::make_directory_with_parents (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_with_parents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory_with_parents ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_with_parents;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory_with_parents (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_with_parents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::make_directory_with_parents (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_directory_with_parents;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_make_symbolic_link (GFile* file /*none*/, const char* symlink_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_make_symbolic_link (::GFile* file /*none*/, const char* symlink_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::make_symbolic_link (const gi::cstring_v symlink_value, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link (const gi::cstring_v symlink_value)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link;
  auto cancellable_to_c = nullptr;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link (const gi::cstring_v symlink_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link (const gi::cstring_v symlink_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link;
  auto cancellable_to_c = nullptr;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_make_symbolic_link_async (GFile* file /*none*/, const char* symlink_value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_make_symbolic_link_async (::GFile* file /*none*/, const char* symlink_value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::make_symbolic_link_async (const gi::cstring_v symlink_value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* symlink_value, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::make_symbolic_link_async (const gi::cstring_v symlink_value, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* symlink_value, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_make_symbolic_link_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_make_symbolic_link_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::make_symbolic_link_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_make_symbolic_link_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_measure_disk_usage (GFile* file /*none*/, GFileMeasureFlags flags, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage (::GFile* file /*none*/, ::GFileMeasureFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
bool base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), &error);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), &error);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), _error ? &_error_o : nullptr);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), _error ? &_error_o : nullptr);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = disk_usage_o;
  auto &&tmp_return_3 = num_dirs_o;
  auto &&tmp_return_4 = num_files_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = disk_usage_o;
  auto &&tmp_return_3 = num_dirs_o;
  auto &&tmp_return_4 = num_files_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = disk_usage_o;
  auto &&tmp_return_3 = num_dirs_o;
  auto &&tmp_return_4 = num_files_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage (Gio::FileMeasureFlags flags, Gio::FileMeasureProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = disk_usage_o;
  auto &&tmp_return_3 = num_dirs_o;
  auto &&tmp_return_4 = num_files_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// void g_file_measure_disk_usage_async (GFile* file /*none*/, GFileMeasureFlags flags, gint io_priority, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_measure_disk_usage_async (::GFile* file /*none*/, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_measure_disk_usage_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
bool base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), &error);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), _error ? &_error_o : nullptr);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = disk_usage_o;
  auto &&tmp_return_3 = num_dirs_o;
  auto &&tmp_return_4 = num_files_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = disk_usage_o;
  auto &&tmp_return_3 = num_dirs_o;
  auto &&tmp_return_4 = num_files_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// GFileMonitor* /*full*/ g_file_monitor (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ g_file_monitor (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileMonitor* /*full*/ g_file_monitor_directory (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ g_file_monitor_directory (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_directory;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_directory;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileMonitor* /*full*/ g_file_monitor_file (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ g_file_monitor_file (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_file;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_monitor_file;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_mount_enclosing_volume (GFile* location /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_mount_enclosing_volume (::GFile* location /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::mount_enclosing_volume (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_enclosing_volume;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::mount_enclosing_volume (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_enclosing_volume;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_mount_enclosing_volume_finish (GFile* location /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_mount_enclosing_volume_finish (::GFile* location /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::mount_enclosing_volume_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* location, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_enclosing_volume_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::mount_enclosing_volume_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* location, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_enclosing_volume_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_mount_mountable (GFile* file /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_mount_mountable (::GFile* file /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::mount_mountable (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::mount_mountable (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full*/ g_file_mount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_mount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::File base::FileBase::mount_mountable_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::mount_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_mount_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_move (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean g_file_move (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_move_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_move_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_move_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_move_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::move_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::move_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_move_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileIOStream* /*full*/ g_file_open_readwrite (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_open_readwrite (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileIOStream base::FileBase::open_readwrite (Gio::Cancellable cancellable)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::open_readwrite ()
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::open_readwrite (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::open_readwrite (GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_open_readwrite_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_open_readwrite_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::open_readwrite_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::open_readwrite_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* /*full*/ g_file_open_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_open_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileIOStream base::FileBase::open_readwrite_finish (Gio::AsyncResult res)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::open_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_open_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ g_file_peek_path (GFile* file /*none*/);
// const char* /*none,nullable*/ g_file_peek_path (::GFile* file /*none*/);
gi::cstring_v base::FileBase::peek_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_peek_path;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_file_poll_mountable (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_poll_mountable (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::poll_mountable (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_poll_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::poll_mountable (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_poll_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_poll_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_poll_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::poll_mountable_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_poll_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::poll_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_poll_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GAppInfo* /*full*/ g_file_query_default_handler (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GAppInfo* /*full*/ g_file_query_default_handler (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::AppInfo base::FileBase::query_default_handler (Gio::Cancellable cancellable)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::FileBase::query_default_handler ()
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::FileBase::query_default_handler (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::FileBase::query_default_handler (GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_query_default_handler_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_query_default_handler_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::query_default_handler_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::query_default_handler_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GAppInfo* /*full*/ g_file_query_default_handler_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GAppInfo* /*full*/ g_file_query_default_handler_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::AppInfo base::FileBase::query_default_handler_finish (Gio::AsyncResult result)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::AppInfo base::FileBase::query_default_handler_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_default_handler_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_query_exists (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/);
// gboolean g_file_query_exists (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/);
bool base::FileBase::query_exists (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_exists;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}
bool base::FileBase::query_exists () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_exists;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}

// GFileType g_file_query_file_type (GFile* file /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/);
// ::GFileType g_file_query_file_type (::GFile* file /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/);
Gio::FileType base::FileBase::query_file_type (Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable) noexcept
{
  typedef ::GFileType (*call_wrap_t) (::GFile* file, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_file_type;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret);
}
Gio::FileType base::FileBase::query_file_type (Gio::FileQueryInfoFlags flags) noexcept
{
  typedef ::GFileType (*call_wrap_t) (::GFile* file, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_file_type;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret);
}

// GFileInfo* /*full*/ g_file_query_filesystem_info (GFile* file /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_filesystem_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo base::FileBase::query_filesystem_info (const gi::cstring_v attributes, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_filesystem_info (const gi::cstring_v attributes)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_filesystem_info (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_filesystem_info (const gi::cstring_v attributes, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_query_filesystem_info_async (GFile* file /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_query_filesystem_info_async (::GFile* file /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::query_filesystem_info_async (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::query_filesystem_info_async (const gi::cstring_v attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* /*full*/ g_file_query_filesystem_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_filesystem_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileInfo base::FileBase::query_filesystem_info_finish (Gio::AsyncResult res)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_filesystem_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_filesystem_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileInfo* /*full*/ g_file_query_info (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo base::FileBase::query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_info (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_query_info_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_query_info_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::query_info_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::query_info_async (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* /*full*/ g_file_query_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_query_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileInfo base::FileBase::query_info_finish (Gio::AsyncResult res)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileBase::query_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileAttributeInfoList* /*full*/ g_file_query_settable_attributes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ g_file_query_settable_attributes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes (Gio::Cancellable cancellable)
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_settable_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes ()
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_settable_attributes;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_settable_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes (GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_settable_attributes;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileAttributeInfoList* /*full*/ g_file_query_writable_namespaces (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ g_file_query_writable_namespaces (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces (Gio::Cancellable cancellable)
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_writable_namespaces;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces ()
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_writable_namespaces;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_writable_namespaces;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces (GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_query_writable_namespaces;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileInputStream* /*full*/ g_file_read (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInputStream* /*full*/ g_file_read (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInputStream base::FileBase::read (Gio::Cancellable cancellable)
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInputStream base::FileBase::read ()
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInputStream base::FileBase::read (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInputStream base::FileBase::read (GLib::Error * _error) noexcept
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_read_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_read_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::read_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::read_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInputStream* /*full*/ g_file_read_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInputStream* /*full*/ g_file_read_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileInputStream base::FileBase::read_finish (Gio::AsyncResult res)
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInputStream base::FileBase::read_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_read_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileOutputStream* /*full*/ g_file_replace (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_replace (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileOutputStream base::FileBase::replace (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::replace (gboolean make_backup, Gio::FileCreateFlags flags)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::replace (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::replace (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_replace_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::replace_async (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_replace_contents (GFile* file /*none*/, const char* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, char** new_etag /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_replace_contents (::GFile* file /*none*/, const guint8* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  auto contents_to_c = contents;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = contents;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  auto contents_to_c = contents;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, gi::cstring * new_etag, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = contents;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring> base::FileBase::replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  auto contents_to_c = contents;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (new_etag_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::FileBase::replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = contents;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (new_etag_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::FileBase::replace_contents (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  auto contents_to_c = contents;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (new_etag_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::FileBase::replace_contents (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = contents;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (new_etag_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_file_replace_contents_async (GFile* file /*none*/, const char* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_contents_async (::GFile* file /*none*/, const guint8* contents /*none*/, gsize length, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::replace_contents_async (const guint8 * contents, gsize length, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  auto contents_to_c = contents;
  call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_contents_async (const guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = contents;
  call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (length), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_file_replace_contents_bytes_async (GFile* file /*none*/, GBytes* contents /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_contents_bytes_async (::GFile* file /*none*/, ::GBytes* contents /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::replace_contents_bytes_async (GLib::Bytes_Ref contents, const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GBytes* contents, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  auto contents_to_c = gi::unwrap (contents, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GBytes*) (contents_to_c), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_contents_bytes_async (GLib::Bytes_Ref contents, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GBytes* contents, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = gi::unwrap (contents, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GBytes*) (contents_to_c), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_replace_contents_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, char** new_etag /*full,out,opt,nullable*/, GError ** error);
// gboolean g_file_replace_contents_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, char** new_etag /*full,out,opt,nullable*/, GError ** error);
bool base::FileBase::replace_contents_finish (Gio::AsyncResult res, gi::cstring * new_etag)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (new_etag ? &new_etag_o : nullptr), &error);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::replace_contents_finish (Gio::AsyncResult res, gi::cstring * new_etag, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (new_etag ? &new_etag_o : nullptr), _error ? &_error_o : nullptr);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring> base::FileBase::replace_contents_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&new_etag_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (new_etag_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::FileBase::replace_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&new_etag_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (new_etag_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GFileOutputStream* /*full*/ g_file_replace_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ g_file_replace_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileOutputStream base::FileBase::replace_finish (Gio::AsyncResult res)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileOutputStream base::FileBase::replace_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileIOStream* /*full*/ g_file_replace_readwrite (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_replace_readwrite (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileIOStream base::FileBase::replace_readwrite (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::replace_readwrite (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_replace_readwrite_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_replace_readwrite_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::replace_readwrite_async (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_readwrite_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* /*full*/ g_file_replace_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ g_file_replace_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileIOStream base::FileBase::replace_readwrite_finish (Gio::AsyncResult res)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileIOStream base::FileBase::replace_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_replace_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_file_resolve_relative_path (GFile* file /*none*/, const char* relative_path /*none*/);
// ::GFile* /*full*/ g_file_resolve_relative_path (::GFile* file /*none*/, const char* relative_path /*none*/);
Gio::File base::FileBase::resolve_relative_path (const gi::cstring_v relative_path) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* relative_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_resolve_relative_path;
  auto relative_path_to_c = gi::unwrap (relative_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (relative_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_file_set_attribute (GFile* file /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute (::GFile* file /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_attribute_byte_string (GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_byte_string (::GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_byte_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_byte_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_byte_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute_byte_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_byte_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_attribute_int32 (GFile* file /*none*/, const char* attribute /*none*/, gint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_int32 (::GFile* file /*none*/, const char* attribute /*none*/, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int32 (const gi::cstring_v attribute, gint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_attribute_int64 (GFile* file /*none*/, const char* attribute /*none*/, gint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_int64 (::GFile* file /*none*/, const char* attribute /*none*/, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int64 (const gi::cstring_v attribute, gint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_int64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_attribute_string (GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_string (::GFile* file /*none*/, const char* attribute /*none*/, const char* value /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute_string (const gi::cstring_v attribute, const gi::cstring_v value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_attribute_uint32 (GFile* file /*none*/, const char* attribute /*none*/, guint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_uint32 (::GFile* file /*none*/, const char* attribute /*none*/, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint32 (const gi::cstring_v attribute, guint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_set_attribute_uint64 (GFile* file /*none*/, const char* attribute /*none*/, guint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attribute_uint64 (::GFile* file /*none*/, const char* attribute /*none*/, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint64 (const gi::cstring_v attribute, guint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attribute_uint64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_set_attributes_async (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_set_attributes_async (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_set_attributes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GFileInfo** info /*full,out*/, GError ** error);
// gboolean g_file_set_attributes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, ::GFileInfo** info /*full,out*/, GError ** error);
bool base::FileBase::set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), &error);
  info = gi::wrap (info_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), _error ? &_error_o : nullptr);
  info = gi::wrap (info_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gio::FileInfo> base::FileBase::set_attributes_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, Gio::FileInfo> base::FileBase::set_attributes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (info_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean g_file_set_attributes_from_info (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_set_attributes_from_info (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_from_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_from_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_from_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_attributes_from_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ g_file_set_display_name (GFile* file /*none*/, const char* display_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFile* /*full*/ g_file_set_display_name (::GFile* file /*none*/, const char* display_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::File base::FileBase::set_display_name (const gi::cstring_v display_name, Gio::Cancellable cancellable)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::set_display_name (const gi::cstring_v display_name)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name;
  auto cancellable_to_c = nullptr;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::set_display_name (const gi::cstring_v display_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::set_display_name (const gi::cstring_v display_name, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name;
  auto cancellable_to_c = nullptr;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_set_display_name_async (GFile* file /*none*/, const char* display_name /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_set_display_name_async (::GFile* file /*none*/, const char* display_name /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::set_display_name_async (const gi::cstring_v display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::set_display_name_async (const gi::cstring_v display_name, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full*/ g_file_set_display_name_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFile* /*full*/ g_file_set_display_name_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::File base::FileBase::set_display_name_finish (Gio::AsyncResult res)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileBase::set_display_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_set_display_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_start_mountable (GFile* file /*none*/, GDriveStartFlags flags, GMountOperation* start_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_start_mountable (::GFile* file /*none*/, ::GDriveStartFlags flags, ::GMountOperation* start_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::start_mountable (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_start_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto start_operation_to_c = gi::unwrap (start_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (start_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::start_mountable (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_start_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto start_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (start_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_start_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_start_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::start_mountable_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_start_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::start_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_start_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_stop_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_stop_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::stop_mountable (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_stop_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::stop_mountable (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_stop_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_stop_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_stop_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::stop_mountable_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_stop_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::stop_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_stop_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_file_supports_thread_contexts (GFile* file /*none*/);
// gboolean g_file_supports_thread_contexts (::GFile* file /*none*/);
bool base::FileBase::supports_thread_contexts () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_supports_thread_contexts;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_trash (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_trash (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileBase::trash (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::trash ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::trash (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileBase::trash (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_trash_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_trash_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::trash_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::trash_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_trash_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_trash_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::trash_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::trash_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_trash_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_unmount_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_unmount_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_file_unmount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_unmount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_file_unmount_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_unmount_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileBase::unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_unmount_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_unmount_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_unmount_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_unmount_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileBase::unmount_mountable_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_unmount_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::unmount_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_unmount_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/file_extra_def_impl.hpp>)
#include <gio/file_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/file_extra_impl.hpp>)
#include <gio/file_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GFileIface *methods = (::GFileIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.append_to) methods->append_to = (decltype (methods->append_to)) detail::method_wrapper<self, Gio::FileOutputStream (*) (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::append_to_>;
  if (init_data.append_to_async) methods->append_to_async = (decltype (methods->append_to_async)) detail::method_wrapper<self, void (*) (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::append_to_async_>;
  if (init_data.append_to_finish) methods->append_to_finish = (decltype (methods->append_to_finish)) detail::method_wrapper<self, Gio::FileOutputStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::append_to_finish_>;
  if (init_data.copy) methods->copy = (decltype (methods->copy)) detail::method_wrapper<self, bool (*) (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error), gi::transfer_none_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::FileProgressCallback_CB_Trait, detail::args_index<3, 4>>, detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<5>>>, gboolean  (::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error)>::wrapper<&self::copy_>;
  if (init_data.copy_async) methods->copy_async = (decltype (methods->copy_async)) detail::method_wrapper<self, void (*) (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::FileProgressCallback_CB_Trait, detail::args_index<4, 5>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<6, 7>>>, void  (::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::copy_async_>;
  if (init_data.copy_finish) methods->copy_finish = (decltype (methods->copy_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::copy_finish_>;
  if (init_data.create) methods->create = (decltype (methods->create)) detail::method_wrapper<self, Gio::FileOutputStream (*) (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::create_>;
  if (init_data.create_async) methods->create_async = (decltype (methods->create_async)) detail::method_wrapper<self, void (*) (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::create_async_>;
  if (init_data.create_finish) methods->create_finish = (decltype (methods->create_finish)) detail::method_wrapper<self, Gio::FileOutputStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::create_finish_>;
  if (init_data.create_readwrite) methods->create_readwrite = (decltype (methods->create_readwrite)) detail::method_wrapper<self, Gio::FileIOStream (*) (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::create_readwrite_>;
  if (init_data.create_readwrite_async) methods->create_readwrite_async = (decltype (methods->create_readwrite_async)) detail::method_wrapper<self, void (*) (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::create_readwrite_async_>;
  if (init_data.create_readwrite_finish) methods->create_readwrite_finish = (decltype (methods->create_readwrite_finish)) detail::method_wrapper<self, Gio::FileIOStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::create_readwrite_finish_>;
  if (init_data.delete_file) methods->delete_file = (decltype (methods->delete_file)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::delete_file_>;
  if (init_data.delete_file_async) methods->delete_file_async = (decltype (methods->delete_file_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::delete_file_async_>;
  if (init_data.delete_file_finish) methods->delete_file_finish = (decltype (methods->delete_file_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::delete_file_finish_>;
  if (init_data.dup) methods->dup = (decltype (methods->dup)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::dup_>;
  if (init_data.eject_mountable_with_operation) methods->eject_mountable_with_operation = (decltype (methods->eject_mountable_with_operation)) detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::eject_mountable_with_operation_>;
  if (init_data.eject_mountable_with_operation_finish) methods->eject_mountable_with_operation_finish = (decltype (methods->eject_mountable_with_operation_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::eject_mountable_with_operation_finish_>;
  if (init_data.enumerate_children) methods->enumerate_children = (decltype (methods->enumerate_children)) detail::method_wrapper<self, Gio::FileEnumerator (*) (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::enumerate_children_>;
  if (init_data.enumerate_children_async) methods->enumerate_children_async = (decltype (methods->enumerate_children_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::enumerate_children_async_>;
  if (init_data.enumerate_children_finish) methods->enumerate_children_finish = (decltype (methods->enumerate_children_finish)) detail::method_wrapper<self, Gio::FileEnumerator (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::enumerate_children_finish_>;
  if (init_data.equal) methods->equal = (decltype (methods->equal)) detail::method_wrapper<self, bool (*) (Gio::File file2), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::equal_>;
  if (init_data.find_enclosing_mount) methods->find_enclosing_mount = (decltype (methods->find_enclosing_mount)) detail::method_wrapper<self, Gio::Mount (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::find_enclosing_mount_>;
  if (init_data.find_enclosing_mount_async) methods->find_enclosing_mount_async = (decltype (methods->find_enclosing_mount_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::find_enclosing_mount_async_>;
  if (init_data.find_enclosing_mount_finish) methods->find_enclosing_mount_finish = (decltype (methods->find_enclosing_mount_finish)) detail::method_wrapper<self, Gio::Mount (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::find_enclosing_mount_finish_>;
  if (init_data.get_basename) methods->get_basename = (decltype (methods->get_basename)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_basename_>;
  if (init_data.get_child_for_display_name) methods->get_child_for_display_name = (decltype (methods->get_child_for_display_name)) detail::method_wrapper<self, Gio::File (*) (const gi::cstring_v display_name, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_child_for_display_name_>;
  if (init_data.get_parent) methods->get_parent = (decltype (methods->get_parent)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_parent_>;
  if (init_data.get_parse_name) methods->get_parse_name = (decltype (methods->get_parse_name)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_parse_name_>;
  if (init_data.get_path) methods->get_path = (decltype (methods->get_path)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_path_>;
  if (init_data.get_relative_path) methods->get_relative_path = (decltype (methods->get_relative_path)) detail::method_wrapper<self, gi::cstring (*) (Gio::File descendant), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_relative_path_>;
  if (init_data.get_uri) methods->get_uri = (decltype (methods->get_uri)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_uri_>;
  if (init_data.get_uri_scheme) methods->get_uri_scheme = (decltype (methods->get_uri_scheme)) detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_uri_scheme_>;
  if (init_data.has_uri_scheme) methods->has_uri_scheme = (decltype (methods->has_uri_scheme)) detail::method_wrapper<self, bool (*) (const gi::cstring_v uri_scheme), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::has_uri_scheme_>;
  if (init_data.hash) methods->hash = (decltype (methods->hash)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::hash_>;
  if (init_data.is_native) methods->is_native = (decltype (methods->is_native)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_native_>;
  if (init_data.make_directory) methods->make_directory = (decltype (methods->make_directory)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::make_directory_>;
  if (init_data.make_directory_async) methods->make_directory_async = (decltype (methods->make_directory_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::make_directory_async_>;
  if (init_data.make_directory_finish) methods->make_directory_finish = (decltype (methods->make_directory_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::make_directory_finish_>;
  if (init_data.make_symbolic_link) methods->make_symbolic_link = (decltype (methods->make_symbolic_link)) detail::method_wrapper<self, bool (*) (const gi::cstring_v symlink_value, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::make_symbolic_link_>;
  if (init_data.make_symbolic_link_async) methods->make_symbolic_link_async = (decltype (methods->make_symbolic_link_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v symlink_value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (const char* symlink_value, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::make_symbolic_link_async_>;
  if (init_data.make_symbolic_link_finish) methods->make_symbolic_link_finish = (decltype (methods->make_symbolic_link_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::make_symbolic_link_finish_>;
  if (init_data.measure_disk_usage) methods->measure_disk_usage = (decltype (methods->measure_disk_usage)) detail::method_wrapper<self, bool (*) (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error), gi::transfer_none_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::FileMeasureProgressCallback_CB_Trait, detail::args_index<2, 3>>, detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<4>>, detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<5>>, detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<6>>, detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<7>>>, gboolean  (::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error)>::wrapper<&self::measure_disk_usage_>;
  if (init_data.measure_disk_usage_finish) methods->measure_disk_usage_finish = (decltype (methods->measure_disk_usage_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::measure_disk_usage_finish_>;
  if (init_data.monitor_dir) methods->monitor_dir = (decltype (methods->monitor_dir)) detail::method_wrapper<self, Gio::FileMonitor (*) (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::monitor_dir_>;
  if (init_data.monitor_file) methods->monitor_file = (decltype (methods->monitor_file)) detail::method_wrapper<self, Gio::FileMonitor (*) (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::monitor_file_>;
  if (init_data.mount_enclosing_volume) methods->mount_enclosing_volume = (decltype (methods->mount_enclosing_volume)) detail::method_wrapper<self, void (*) (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::mount_enclosing_volume_>;
  if (init_data.mount_enclosing_volume_finish) methods->mount_enclosing_volume_finish = (decltype (methods->mount_enclosing_volume_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::mount_enclosing_volume_finish_>;
  if (init_data.mount_mountable) methods->mount_mountable = (decltype (methods->mount_mountable)) detail::method_wrapper<self, void (*) (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::mount_mountable_>;
  if (init_data.mount_mountable_finish) methods->mount_mountable_finish = (decltype (methods->mount_mountable_finish)) detail::method_wrapper<self, Gio::File (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::mount_mountable_finish_>;
  if (init_data.move) methods->move = (decltype (methods->move)) detail::method_wrapper<self, bool (*) (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error), gi::transfer_none_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::FileProgressCallback_CB_Trait, detail::args_index<3, 4>>, detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<5>>>, gboolean  (::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error)>::wrapper<&self::move_>;
  if (init_data.move_async) methods->move_async = (decltype (methods->move_async)) detail::method_wrapper<self, void (*) (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::FileProgressCallback_CB_Trait, detail::args_index<4, 5>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<6, 7>>>, void  (::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::move_async_>;
  if (init_data.move_finish) methods->move_finish = (decltype (methods->move_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::move_finish_>;
  if (init_data.open_readwrite) methods->open_readwrite = (decltype (methods->open_readwrite)) detail::method_wrapper<self, Gio::FileIOStream (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::open_readwrite_>;
  if (init_data.open_readwrite_async) methods->open_readwrite_async = (decltype (methods->open_readwrite_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::open_readwrite_async_>;
  if (init_data.open_readwrite_finish) methods->open_readwrite_finish = (decltype (methods->open_readwrite_finish)) detail::method_wrapper<self, Gio::FileIOStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::open_readwrite_finish_>;
  if (init_data.poll_mountable) methods->poll_mountable = (decltype (methods->poll_mountable)) detail::method_wrapper<self, void (*) (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<1, 2>>>, void  (::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::poll_mountable_>;
  if (init_data.poll_mountable_finish) methods->poll_mountable_finish = (decltype (methods->poll_mountable_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::poll_mountable_finish_>;
  if (init_data.prefix_matches) methods->prefix_matches = (decltype (methods->prefix_matches)) detail::method_wrapper<self, bool (*) (Gio::File file), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::prefix_matches_>;
  if (init_data.query_filesystem_info) methods->query_filesystem_info = (decltype (methods->query_filesystem_info)) detail::method_wrapper<self, Gio::FileInfo (*) (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_filesystem_info_>;
  if (init_data.query_filesystem_info_async) methods->query_filesystem_info_async = (decltype (methods->query_filesystem_info_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::query_filesystem_info_async_>;
  if (init_data.query_filesystem_info_finish) methods->query_filesystem_info_finish = (decltype (methods->query_filesystem_info_finish)) detail::method_wrapper<self, Gio::FileInfo (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_filesystem_info_finish_>;
  if (init_data.query_info) methods->query_info = (decltype (methods->query_info)) detail::method_wrapper<self, Gio::FileInfo (*) (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_info_>;
  if (init_data.query_info_async) methods->query_info_async = (decltype (methods->query_info_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::query_info_async_>;
  if (init_data.query_info_finish) methods->query_info_finish = (decltype (methods->query_info_finish)) detail::method_wrapper<self, Gio::FileInfo (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_info_finish_>;
  if (init_data.query_settable_attributes) methods->query_settable_attributes = (decltype (methods->query_settable_attributes)) detail::method_wrapper<self, Gio::FileAttributeInfoList (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_settable_attributes_>;
  if (init_data.query_writable_namespaces) methods->query_writable_namespaces = (decltype (methods->query_writable_namespaces)) detail::method_wrapper<self, Gio::FileAttributeInfoList (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_writable_namespaces_>;
  if (init_data.read_async) methods->read_async = (decltype (methods->read_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::read_async_>;
  if (init_data.read_finish) methods->read_finish = (decltype (methods->read_finish)) detail::method_wrapper<self, Gio::FileInputStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::read_finish_>;
  if (init_data.read_fn) methods->read_fn = (decltype (methods->read_fn)) detail::method_wrapper<self, Gio::FileInputStream (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::read_fn_>;
  if (init_data.replace) methods->replace = (decltype (methods->replace)) detail::method_wrapper<self, Gio::FileOutputStream (*) (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::replace_>;
  if (init_data.replace_async) methods->replace_async = (decltype (methods->replace_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<4>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<5, 6>>>, void  (const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::replace_async_>;
  if (init_data.replace_finish) methods->replace_finish = (decltype (methods->replace_finish)) detail::method_wrapper<self, Gio::FileOutputStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::replace_finish_>;
  if (init_data.replace_readwrite) methods->replace_readwrite = (decltype (methods->replace_readwrite)) detail::method_wrapper<self, Gio::FileIOStream (*) (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::replace_readwrite_>;
  if (init_data.replace_readwrite_async) methods->replace_readwrite_async = (decltype (methods->replace_readwrite_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<4>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<5, 6>>>, void  (const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::replace_readwrite_async_>;
  if (init_data.replace_readwrite_finish) methods->replace_readwrite_finish = (decltype (methods->replace_readwrite_finish)) detail::method_wrapper<self, Gio::FileIOStream (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::replace_readwrite_finish_>;
  if (init_data.resolve_relative_path) methods->resolve_relative_path = (decltype (methods->resolve_relative_path)) detail::method_wrapper<self, Gio::File (*) (const gi::cstring_v relative_path), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::resolve_relative_path_>;
  if (init_data.set_attribute) methods->set_attribute = (decltype (methods->set_attribute)) detail::method_wrapper<self, bool (*) (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_attribute_>;
  if (init_data.set_attributes_async) methods->set_attributes_async = (decltype (methods->set_attributes_async)) detail::method_wrapper<self, void (*) (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::set_attributes_async_>;
  if (init_data.set_attributes_finish) methods->set_attributes_finish = (decltype (methods->set_attributes_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::set_attributes_finish_>;
  if (init_data.set_attributes_from_info) methods->set_attributes_from_info = (decltype (methods->set_attributes_from_info)) detail::method_wrapper<self, bool (*) (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_attributes_from_info_>;
  if (init_data.set_display_name) methods->set_display_name = (decltype (methods->set_display_name)) detail::method_wrapper<self, Gio::File (*) (const gi::cstring_v display_name, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_display_name_>;
  if (init_data.set_display_name_async) methods->set_display_name_async = (decltype (methods->set_display_name_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::set_display_name_async_>;
  if (init_data.set_display_name_finish) methods->set_display_name_finish = (decltype (methods->set_display_name_finish)) detail::method_wrapper<self, Gio::File (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::set_display_name_finish_>;
  if (init_data.start_mountable) methods->start_mountable = (decltype (methods->start_mountable)) detail::method_wrapper<self, void (*) (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::start_mountable_>;
  if (init_data.start_mountable_finish) methods->start_mountable_finish = (decltype (methods->start_mountable_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::start_mountable_finish_>;
  if (init_data.stop_mountable) methods->stop_mountable = (decltype (methods->stop_mountable)) detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::stop_mountable_>;
  if (init_data.stop_mountable_finish) methods->stop_mountable_finish = (decltype (methods->stop_mountable_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::stop_mountable_finish_>;
  if (init_data.trash) methods->trash = (decltype (methods->trash)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::trash_>;
  if (init_data.trash_async) methods->trash_async = (decltype (methods->trash_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::trash_async_>;
  if (init_data.trash_finish) methods->trash_finish = (decltype (methods->trash_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::trash_finish_>;
  if (init_data.unmount_mountable_with_operation) methods->unmount_mountable_with_operation = (decltype (methods->unmount_mountable_with_operation)) detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::unmount_mountable_with_operation_>;
  if (init_data.unmount_mountable_with_operation_finish) methods->unmount_mountable_with_operation_finish = (decltype (methods->unmount_mountable_with_operation_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::unmount_mountable_with_operation_finish_>;
}

// GFileOutputStream* /*full*/ File::append_to (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::append_to (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileOutputStream FileIfaceClassImpl::append_to_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->append_to) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->append_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::append_to_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::append_to_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::append_to_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->append_to_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->append_to_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* /*full*/ File::append_to_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::append_to_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileOutputStream FileIfaceClassImpl::append_to_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->append_to_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->append_to_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean File::copy (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean File::copy (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
bool FileIfaceClassImpl::copy_ (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error)
{
  if (!get_struct_()->copy) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::copy_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::copy_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::copy_async_ (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->copy_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::copy_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean File::copy_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
bool FileIfaceClassImpl::copy_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->copy_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileOutputStream* /*full*/ File::create (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::create (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileOutputStream FileIfaceClassImpl::create_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->create) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::create_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::create_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::create_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->create_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* /*full*/ File::create_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::create_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileOutputStream FileIfaceClassImpl::create_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->create_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileIOStream* /*full*/ File::create_readwrite (GFile* file /*none*/, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::create_readwrite (::GFile* file /*none*/, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileIOStream FileIfaceClassImpl::create_readwrite_ (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->create_readwrite) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::create_readwrite_async (GFile* file /*none*/, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::create_readwrite_async (::GFile* file /*none*/, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::create_readwrite_async_ (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->create_readwrite_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* /*full*/ File::create_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::create_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileIOStream FileIfaceClassImpl::create_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->create_readwrite_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean File::delete_file (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::delete_file (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileIfaceClassImpl::delete_file_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->delete_file) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::delete_file_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::delete_file_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::delete_file_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->delete_file_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_file_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::delete_file_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::delete_file_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::delete_file_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->delete_file_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ File::dup (GFile* file /*none*/);
// ::GFile* /*full*/ File::dup (::GFile* file /*none*/);
Gio::File FileIfaceClassImpl::dup_ () noexcept
{
  if (!get_struct_()->dup) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dup;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::eject_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::eject_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean File::eject_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::eject_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void File::eject_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::eject_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::eject_mountable_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->eject_mountable_with_operation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::eject_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::eject_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::eject_mountable_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->eject_mountable_with_operation_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileEnumerator* /*full*/ File::enumerate_children (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileEnumerator* /*full*/ File::enumerate_children (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileEnumerator FileIfaceClassImpl::enumerate_children_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->enumerate_children) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate_children;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::enumerate_children_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::enumerate_children_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::enumerate_children_async_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->enumerate_children_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate_children_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileEnumerator* /*full*/ File::enumerate_children_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileEnumerator* /*full*/ File::enumerate_children_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileEnumerator FileIfaceClassImpl::enumerate_children_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->enumerate_children_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate_children_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean File::equal (GFile* file1 /*none*/, GFile* file2 /*none*/);
// gboolean File::equal (::GFile* file1 /*none*/, ::GFile* file2 /*none*/);
bool FileIfaceClassImpl::equal_ (Gio::File file2) noexcept
{
  if (!get_struct_()->equal) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file1, ::GFile* file2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->equal;
  auto file2_to_c = gi::unwrap (file2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (file2_to_c));
  return _temp_ret;
}

// GMount* /*full*/ File::find_enclosing_mount (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GMount* /*full*/ File::find_enclosing_mount (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::Mount FileIfaceClassImpl::find_enclosing_mount_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->find_enclosing_mount) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->find_enclosing_mount;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::find_enclosing_mount_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::find_enclosing_mount_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::find_enclosing_mount_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->find_enclosing_mount_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->find_enclosing_mount_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GMount* /*full*/ File::find_enclosing_mount_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GMount* /*full*/ File::find_enclosing_mount_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::Mount FileIfaceClassImpl::find_enclosing_mount_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->find_enclosing_mount_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->find_enclosing_mount_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ File::get_basename (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_basename (::GFile* file /*none*/);
gi::cstring FileIfaceClassImpl::get_basename_ () noexcept
{
  if (!get_struct_()->get_basename) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_basename;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ File::get_child_for_display_name (GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
// ::GFile* /*full*/ File::get_child_for_display_name (::GFile* file /*none*/, const char* display_name /*none*/, GError ** error);
Gio::File FileIfaceClassImpl::get_child_for_display_name_ (const gi::cstring_v display_name, GLib::Error * _error)
{
  if (!get_struct_()->get_child_for_display_name) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_child_for_display_name;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full,nullable*/ File::get_parent (GFile* file /*none*/);
// ::GFile* /*full,nullable*/ File::get_parent (::GFile* file /*none*/);
Gio::File FileIfaceClassImpl::get_parent_ () noexcept
{
  if (!get_struct_()->get_parent) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_parent;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ File::get_parse_name (GFile* file /*none*/);
// char* /*full*/ File::get_parse_name (::GFile* file /*none*/);
gi::cstring FileIfaceClassImpl::get_parse_name_ () noexcept
{
  if (!get_struct_()->get_parse_name) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_parse_name;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ File::get_path (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_path (::GFile* file /*none*/);
gi::cstring FileIfaceClassImpl::get_path_ () noexcept
{
  if (!get_struct_()->get_path) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_path;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ File::get_relative_path (GFile* parent /*none*/, GFile* descendant /*none*/);
// char* /*full,nullable*/ File::get_relative_path (::GFile* parent /*none*/, ::GFile* descendant /*none*/);
gi::cstring FileIfaceClassImpl::get_relative_path_ (Gio::File descendant) noexcept
{
  if (!get_struct_()->get_relative_path) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GFile* parent, ::GFile* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_relative_path;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (descendant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ File::get_uri (GFile* file /*none*/);
// char* /*full*/ File::get_uri (::GFile* file /*none*/);
gi::cstring FileIfaceClassImpl::get_uri_ () noexcept
{
  if (!get_struct_()->get_uri) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uri;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ File::get_uri_scheme (GFile* file /*none*/);
// char* /*full,nullable*/ File::get_uri_scheme (::GFile* file /*none*/);
gi::cstring FileIfaceClassImpl::get_uri_scheme_ () noexcept
{
  if (!get_struct_()->get_uri_scheme) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uri_scheme;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean File::has_uri_scheme (GFile* file /*none*/, const char* uri_scheme /*none*/);
// gboolean File::has_uri_scheme (::GFile* file /*none*/, const char* uri_scheme /*none*/);
bool FileIfaceClassImpl::has_uri_scheme_ (const gi::cstring_v uri_scheme) noexcept
{
  if (!get_struct_()->has_uri_scheme) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* uri_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_uri_scheme;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (uri_scheme_to_c));
  return _temp_ret;
}

// guint File::hash (GFile* file /*none*/);
// guint File::hash (::GFile* file /*none*/);
guint FileIfaceClassImpl::hash_ () noexcept
{
  if (!get_struct_()->hash) { g_critical ("no method in class struct"); return {}; }
  typedef guint (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hash;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean File::is_native (GFile* file /*none*/);
// gboolean File::is_native (::GFile* file /*none*/);
bool FileIfaceClassImpl::is_native_ () noexcept
{
  if (!get_struct_()->is_native) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_native;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean File::make_directory (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::make_directory (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileIfaceClassImpl::make_directory_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->make_directory) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->make_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::make_directory_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::make_directory_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::make_directory_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->make_directory_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->make_directory_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::make_directory_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::make_directory_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::make_directory_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->make_directory_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->make_directory_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean File::make_symbolic_link (GFile* file /*none*/, const char* symlink_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::make_symbolic_link (::GFile* file /*none*/, const char* symlink_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileIfaceClassImpl::make_symbolic_link_ (const gi::cstring_v symlink_value, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->make_symbolic_link) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->make_symbolic_link;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::make_symbolic_link_async (GFile* file /*none*/, const char* symlink_value /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::make_symbolic_link_async (::GFile* file /*none*/, const char* symlink_value /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::make_symbolic_link_async_ (const gi::cstring_v symlink_value, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->make_symbolic_link_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* symlink_value, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->make_symbolic_link_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::make_symbolic_link_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::make_symbolic_link_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::make_symbolic_link_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->make_symbolic_link_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->make_symbolic_link_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean File::measure_disk_usage (GFile* file /*none*/, GFileMeasureFlags flags, GCancellable* cancellable /*none,nullable*/, GFileMeasureProgressCallback progress_callback /*none,nullable*/, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage (::GFile* file /*none*/, ::GFileMeasureFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileMeasureProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
bool FileIfaceClassImpl::measure_disk_usage_ (Gio::FileMeasureFlags flags, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error)
{
  if (!get_struct_()->measure_disk_usage) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->measure_disk_usage;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), _error ? &_error_o : nullptr);
  num_files = num_files_o;
  num_dirs = num_dirs_o;
  disk_usage = disk_usage_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean File::measure_disk_usage_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
bool FileIfaceClassImpl::measure_disk_usage_finish_ (Gio::AsyncResult result, guint64 & disk_usage, guint64 & num_dirs, guint64 & num_files, GLib::Error * _error)
{
  if (!get_struct_()->measure_disk_usage_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), _error ? &_error_o : nullptr);
  num_files = num_files_o;
  num_dirs = num_dirs_o;
  disk_usage = disk_usage_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileMonitor* /*full*/ File::monitor_dir (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ File::monitor_dir (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileMonitor FileIfaceClassImpl::monitor_dir_ (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->monitor_dir) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->monitor_dir;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileMonitor* /*full*/ File::monitor_file (GFile* file /*none*/, GFileMonitorFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileMonitor* /*full*/ File::monitor_file (::GFile* file /*none*/, ::GFileMonitorFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileMonitor FileIfaceClassImpl::monitor_file_ (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->monitor_file) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->monitor_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::mount_enclosing_volume (GFile* location /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::mount_enclosing_volume (::GFile* location /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::mount_enclosing_volume_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->mount_enclosing_volume) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_enclosing_volume;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::mount_enclosing_volume_finish (GFile* location /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::mount_enclosing_volume_finish (::GFile* location /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::mount_enclosing_volume_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->mount_enclosing_volume_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* location, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_enclosing_volume_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::mount_mountable (GFile* file /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::mount_mountable (::GFile* file /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::mount_mountable_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->mount_mountable) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full*/ File::mount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full*/ File::mount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::File FileIfaceClassImpl::mount_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->mount_mountable_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mount_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean File::move (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GError ** error);
// gboolean File::move (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, GError ** error);
bool FileIfaceClassImpl::move_ (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error)
{
  if (!get_struct_()->move) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::move_async (GFile* source /*none*/, GFile* destination /*none*/, GFileCopyFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GFileProgressCallback progress_callback /*none,nullable*/, gpointer progress_callback_data, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::move_async (::GFile* source /*none*/, ::GFile* destination /*none*/, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::FileProgressCallback::cfunction_type progress_callback /*none,nullable*/, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::move_async_ (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->move_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::move_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::move_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::move_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->move_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileIOStream* /*full*/ File::open_readwrite (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::open_readwrite (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileIOStream FileIfaceClassImpl::open_readwrite_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->open_readwrite) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->open_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::open_readwrite_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::open_readwrite_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::open_readwrite_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->open_readwrite_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->open_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* /*full*/ File::open_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::open_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileIOStream FileIfaceClassImpl::open_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->open_readwrite_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->open_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::poll_mountable (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::poll_mountable (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::poll_mountable_ (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->poll_mountable) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->poll_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::poll_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::poll_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::poll_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->poll_mountable_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->poll_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean File::prefix_matches (GFile* prefix /*none*/, GFile* file /*none*/);
// gboolean File::prefix_matches (::GFile* prefix /*none*/, ::GFile* file /*none*/);
bool FileIfaceClassImpl::prefix_matches_ (Gio::File file) noexcept
{
  if (!get_struct_()->prefix_matches) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* prefix, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->prefix_matches;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (file_to_c));
  return _temp_ret;
}

// GFileInfo* /*full*/ File::query_filesystem_info (GFile* file /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_filesystem_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo FileIfaceClassImpl::query_filesystem_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->query_filesystem_info) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_filesystem_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::query_filesystem_info_async (GFile* file /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::query_filesystem_info_async (::GFile* file /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::query_filesystem_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->query_filesystem_info_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_filesystem_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* /*full*/ File::query_filesystem_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_filesystem_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileInfo FileIfaceClassImpl::query_filesystem_info_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->query_filesystem_info_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_filesystem_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileInfo* /*full*/ File::query_info (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_info (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo FileIfaceClassImpl::query_info_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->query_info) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::query_info_async (GFile* file /*none*/, const char* attributes /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::query_info_async (::GFile* file /*none*/, const char* attributes /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::query_info_async_ (const gi::cstring_v attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->query_info_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* /*full*/ File::query_info_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInfo* /*full*/ File::query_info_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileInfo FileIfaceClassImpl::query_info_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->query_info_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileAttributeInfoList* /*full*/ File::query_settable_attributes (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ File::query_settable_attributes (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileAttributeInfoList FileIfaceClassImpl::query_settable_attributes_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->query_settable_attributes) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_settable_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileAttributeInfoList* /*full*/ File::query_writable_namespaces (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileAttributeInfoList* /*full*/ File::query_writable_namespaces (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileAttributeInfoList FileIfaceClassImpl::query_writable_namespaces_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->query_writable_namespaces) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_writable_namespaces;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::read_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::read_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::read_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->read_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInputStream* /*full*/ File::read_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileInputStream* /*full*/ File::read_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileInputStream FileIfaceClassImpl::read_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->read_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileInputStream* /*full*/ File::read_fn (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInputStream* /*full*/ File::read_fn (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInputStream FileIfaceClassImpl::read_fn_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->read_fn) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileOutputStream* /*full*/ File::replace (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::replace (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileOutputStream FileIfaceClassImpl::replace_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->replace) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->replace;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::replace_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::replace_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::replace_async_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->replace_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->replace_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* /*full*/ File::replace_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileOutputStream* /*full*/ File::replace_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileOutputStream FileIfaceClassImpl::replace_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->replace_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->replace_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFileIOStream* /*full*/ File::replace_readwrite (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileIOStream* /*full*/ File::replace_readwrite (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileIOStream FileIfaceClassImpl::replace_readwrite_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->replace_readwrite) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->replace_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::replace_readwrite_async (GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::replace_readwrite_async (::GFile* file /*none*/, const char* etag /*none,nullable*/, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::replace_readwrite_async_ (const gi::cstring_v etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->replace_readwrite_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->replace_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* /*full*/ File::replace_readwrite_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFileIOStream* /*full*/ File::replace_readwrite_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::FileIOStream FileIfaceClassImpl::replace_readwrite_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->replace_readwrite_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->replace_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ File::resolve_relative_path (GFile* file /*none*/, const char* relative_path /*none*/);
// ::GFile* /*full*/ File::resolve_relative_path (::GFile* file /*none*/, const char* relative_path /*none*/);
Gio::File FileIfaceClassImpl::resolve_relative_path_ (const gi::cstring_v relative_path) noexcept
{
  if (!get_struct_()->resolve_relative_path) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* relative_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->resolve_relative_path;
  auto relative_path_to_c = gi::unwrap (relative_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (relative_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean File::set_attribute (GFile* file /*none*/, const char* attribute /*none*/, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::set_attribute (::GFile* file /*none*/, const char* attribute /*none*/, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileIfaceClassImpl::set_attribute_ (const gi::cstring_v attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->set_attribute) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_attribute;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::set_attributes_async (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::set_attributes_async (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::set_attributes_async_ (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->set_attributes_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_attributes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::set_attributes_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GFileInfo** info /*full,out*/, GError ** error);
// gboolean File::set_attributes_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, ::GFileInfo** info /*full,out*/, GError ** error);
bool FileIfaceClassImpl::set_attributes_finish_ (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error)
{
  if (!get_struct_()->set_attributes_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), _error ? &_error_o : nullptr);
  info = gi::wrap (info_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean File::set_attributes_from_info (GFile* file /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::set_attributes_from_info (::GFile* file /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileIfaceClassImpl::set_attributes_from_info_ (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->set_attributes_from_info) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_attributes_from_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ File::set_display_name (GFile* file /*none*/, const char* display_name /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFile* /*full*/ File::set_display_name (::GFile* file /*none*/, const char* display_name /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::File FileIfaceClassImpl::set_display_name_ (const gi::cstring_v display_name, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->set_display_name) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_display_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::set_display_name_async (GFile* file /*none*/, const char* display_name /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::set_display_name_async (::GFile* file /*none*/, const char* display_name /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::set_display_name_async_ (const gi::cstring_v display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->set_display_name_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_display_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full*/ File::set_display_name_finish (GFile* file /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GFile* /*full*/ File::set_display_name_finish (::GFile* file /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
Gio::File FileIfaceClassImpl::set_display_name_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->set_display_name_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_display_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void File::start_mountable (GFile* file /*none*/, GDriveStartFlags flags, GMountOperation* start_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::start_mountable (::GFile* file /*none*/, ::GDriveStartFlags flags, ::GMountOperation* start_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::start_mountable_ (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->start_mountable) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto start_operation_to_c = gi::unwrap (start_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (start_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::start_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::start_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::start_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->start_mountable_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::stop_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::stop_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::stop_mountable_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->stop_mountable) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::stop_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::stop_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::stop_mountable_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->stop_mountable_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean File::trash (GFile* file /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean File::trash (::GFile* file /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileIfaceClassImpl::trash_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->trash) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->trash;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::trash_async (GFile* file /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::trash_async (::GFile* file /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::trash_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->trash_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->trash_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::trash_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::trash_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::trash_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->trash_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->trash_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void File::unmount_mountable (GFile* file /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::unmount_mountable (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean File::unmount_mountable_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::unmount_mountable_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void File::unmount_mountable_with_operation (GFile* file /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void File::unmount_mountable_with_operation (::GFile* file /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileIfaceClassImpl::unmount_mountable_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->unmount_mountable_with_operation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmount_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean File::unmount_mountable_with_operation_finish (GFile* file /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean File::unmount_mountable_with_operation_finish (::GFile* file /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileIfaceClassImpl::unmount_mountable_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->unmount_mountable_with_operation_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmount_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
