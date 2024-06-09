// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESS_IMPL_HPP_
#define _GI_GIO_SUBPROCESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Initable SubprocessBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SubprocessBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GSubprocess* /*full*/ g_subprocess_new (GSubprocessFlags flags, GError** error /*none,nullable*/, const gchar* argv0 /*none*/,  ..._ /*none*/);
// ::GSubprocess* /*full*/ g_subprocess_new (::GSubprocessFlags flags, ::GError* error /*none,nullable*/, const char* argv0 /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GSubprocess* /*full*/ g_subprocess_newv (const gchar* const* argv /*none*/, GSubprocessFlags flags, GError ** error);
// ::GSubprocess* /*full*/ g_subprocess_newv (const char** argv /*none*/, ::GSubprocessFlags flags, GError ** error);
Gio::Subprocess base::SubprocessBase::new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, Gio::SubprocessFlags flags)
{
  typedef ::GSubprocess* (*call_wrap_t) (const char** argv, ::GSubprocessFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_newv;
  auto flags_to_c = gi::unwrap (flags);
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GSubprocessFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Subprocess base::SubprocessBase::new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, Gio::SubprocessFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GSubprocess* (*call_wrap_t) (const char** argv, ::GSubprocessFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_newv;
  auto flags_to_c = gi::unwrap (flags);
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GSubprocessFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_subprocess_communicate (GSubprocess* subprocess /*none*/, GBytes* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GBytes** stdout_buf /*full,out,opt,nullable*/, GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate (::GSubprocess* subprocess /*none*/, ::GBytes* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, ::GBytes** stdout_buf /*full,out,opt,nullable*/, ::GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
bool base::SubprocessBase::communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SubprocessBase::communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_subprocess_communicate_async (GSubprocess* subprocess /*none*/, GBytes* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_communicate_async (::GSubprocess* subprocess /*none*/, ::GBytes* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SubprocessBase::communicate_async (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::communicate_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_communicate_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, GBytes** stdout_buf /*full,out,opt,nullable*/, GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, ::GBytes** stdout_buf /*full,out,opt,nullable*/, ::GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
bool base::SubprocessBase::communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean g_subprocess_communicate_utf8 (GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate_utf8 (::GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
bool base::SubprocessBase::communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, gi::cstring * stdout_buf, gi::cstring * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8 (gi::cstring * stdout_buf, gi::cstring * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, gi::cstring * stdout_buf, gi::cstring * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8 (gi::cstring * stdout_buf, gi::cstring * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring> base::SubprocessBase::communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::SubprocessBase::communicate_utf8 ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::SubprocessBase::communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::SubprocessBase::communicate_utf8 (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_subprocess_communicate_utf8_async (GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_communicate_utf8_async (::GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SubprocessBase::communicate_utf8_async (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none);
  call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::communicate_utf8_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_communicate_utf8_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate_utf8_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
bool base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result, gi::cstring * stdout_buf, gi::cstring * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result, gi::cstring * stdout_buf, gi::cstring * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gi::cstring> base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (stdout_buf_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (stderr_buf_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void g_subprocess_force_exit (GSubprocess* subprocess /*none*/);
// void g_subprocess_force_exit (::GSubprocess* subprocess /*none*/);
void base::SubprocessBase::force_exit () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_force_exit;
  call_wrap_v ((::GSubprocess*) (gobj_()));
}

// gint g_subprocess_get_exit_status (GSubprocess* subprocess /*none*/);
// gint g_subprocess_get_exit_status (::GSubprocess* subprocess /*none*/);
gint base::SubprocessBase::get_exit_status () noexcept
{
  typedef gint (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_exit_status;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ g_subprocess_get_identifier (GSubprocess* subprocess /*none*/);
// const char* /*none,nullable*/ g_subprocess_get_identifier (::GSubprocess* subprocess /*none*/);
gi::cstring_v base::SubprocessBase::get_identifier () noexcept
{
  typedef const char* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_identifier;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_subprocess_get_if_exited (GSubprocess* subprocess /*none*/);
// gboolean g_subprocess_get_if_exited (::GSubprocess* subprocess /*none*/);
bool base::SubprocessBase::get_if_exited () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_if_exited;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// gboolean g_subprocess_get_if_signaled (GSubprocess* subprocess /*none*/);
// gboolean g_subprocess_get_if_signaled (::GSubprocess* subprocess /*none*/);
bool base::SubprocessBase::get_if_signaled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_if_signaled;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// gint g_subprocess_get_status (GSubprocess* subprocess /*none*/);
// gint g_subprocess_get_status (::GSubprocess* subprocess /*none*/);
gint base::SubprocessBase::get_status () noexcept
{
  typedef gint (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_status;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// GInputStream* /*none,nullable*/ g_subprocess_get_stderr_pipe (GSubprocess* subprocess /*none*/);
// ::GInputStream* /*none,nullable*/ g_subprocess_get_stderr_pipe (::GSubprocess* subprocess /*none*/);
Gio::InputStream base::SubprocessBase::get_stderr_pipe () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_stderr_pipe;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GOutputStream* /*none,nullable*/ g_subprocess_get_stdin_pipe (GSubprocess* subprocess /*none*/);
// ::GOutputStream* /*none,nullable*/ g_subprocess_get_stdin_pipe (::GSubprocess* subprocess /*none*/);
Gio::OutputStream base::SubprocessBase::get_stdin_pipe () noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_stdin_pipe;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GInputStream* /*none,nullable*/ g_subprocess_get_stdout_pipe (GSubprocess* subprocess /*none*/);
// ::GInputStream* /*none,nullable*/ g_subprocess_get_stdout_pipe (::GSubprocess* subprocess /*none*/);
Gio::InputStream base::SubprocessBase::get_stdout_pipe () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_stdout_pipe;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_subprocess_get_successful (GSubprocess* subprocess /*none*/);
// gboolean g_subprocess_get_successful (::GSubprocess* subprocess /*none*/);
bool base::SubprocessBase::get_successful () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_successful;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// gint g_subprocess_get_term_sig (GSubprocess* subprocess /*none*/);
// gint g_subprocess_get_term_sig (::GSubprocess* subprocess /*none*/);
gint base::SubprocessBase::get_term_sig () noexcept
{
  typedef gint (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_get_term_sig;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// void g_subprocess_send_signal (GSubprocess* subprocess /*none*/, gint signal_num);
// void g_subprocess_send_signal (::GSubprocess* subprocess /*none*/, gint signal_num);
void base::SubprocessBase::send_signal (gint signal_num) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, gint signal_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_send_signal;
  auto signal_num_to_c = signal_num;
  call_wrap_v ((::GSubprocess*) (gobj_()), (gint) (signal_num_to_c));
}

// gboolean g_subprocess_wait (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_subprocess_wait (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SubprocessBase::wait (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SubprocessBase::wait (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_subprocess_wait_async (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_wait_async (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SubprocessBase::wait_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::wait_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_wait_check (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_subprocess_wait_check (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::SubprocessBase::wait_check (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_subprocess_wait_check_async (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_wait_check_async (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SubprocessBase::wait_check_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::wait_check_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_wait_check_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_subprocess_wait_check_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::SubprocessBase::wait_check_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_check_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean g_subprocess_wait_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_subprocess_wait_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::SubprocessBase::wait_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_wait_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra_def_impl.hpp>)
#include <gio/subprocess_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra_impl.hpp>)
#include <gio/subprocess_extra_impl.hpp>
#endif
#endif

#endif
