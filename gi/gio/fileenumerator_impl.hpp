// AUTO-GENERATED

#ifndef _GI_GIO_FILEENUMERATOR_IMPL_HPP_
#define _GI_GIO_FILEENUMERATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_file_enumerator_close (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_enumerator_close (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileEnumeratorBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_file_enumerator_close_async (GFileEnumerator* enumerator /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_enumerator_close_async (::GFileEnumerator* enumerator /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileEnumeratorBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileEnumeratorBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_enumerator_close_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_enumerator_close_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileEnumeratorBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ g_file_enumerator_get_child (GFileEnumerator* enumerator /*none*/, GFileInfo* info /*none*/);
// ::GFile* /*full*/ g_file_enumerator_get_child (::GFileEnumerator* enumerator /*none*/, ::GFileInfo* info /*none*/);
Gio::File base::FileEnumeratorBase::get_child (Gio::FileInfo info) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_get_child;
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo*) (info_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*none*/ g_file_enumerator_get_container (GFileEnumerator* enumerator /*none*/);
// ::GFile* /*none*/ g_file_enumerator_get_container (::GFileEnumerator* enumerator /*none*/);
Gio::File base::FileEnumeratorBase::get_container () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFileEnumerator* enumerator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_get_container;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_file_enumerator_has_pending (GFileEnumerator* enumerator /*none*/);
// gboolean g_file_enumerator_has_pending (::GFileEnumerator* enumerator /*none*/);
bool base::FileEnumeratorBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_has_pending;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_enumerator_is_closed (GFileEnumerator* enumerator /*none*/);
// gboolean g_file_enumerator_is_closed (::GFileEnumerator* enumerator /*none*/);
bool base::FileEnumeratorBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_is_closed;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_enumerator_iterate (GFileEnumerator* direnum /*none*/, GFileInfo** out_info /*none,out,opt*/, GFile** out_child /*none,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_enumerator_iterate (::GFileEnumerator* direnum /*none*/, ::GFileInfo** out_info /*none,out,opt*/, ::GFile** out_child /*none,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_info_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (out_child_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate ()
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_info_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (out_child_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_info_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (out_child_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_info_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (out_child_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GFileInfo* /*full,nullable*/ g_file_enumerator_next_file (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full,nullable*/ g_file_enumerator_next_file (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo base::FileEnumeratorBase::next_file (Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileEnumeratorBase::next_file ()
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_file;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileEnumeratorBase::next_file (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileEnumeratorBase::next_file (GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_file;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_enumerator_next_files_async (GFileEnumerator* enumerator /*none*/, int num_files, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_enumerator_next_files_async (::GFileEnumerator* enumerator /*none*/, gint num_files, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileEnumeratorBase::next_files_async (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_files_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto num_files_to_c = num_files;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (num_files_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileEnumeratorBase::next_files_async (gint num_files, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_files_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto num_files_to_c = num_files;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (num_files_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ g_file_enumerator_next_files_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_file_enumerator_next_files_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> base::FileEnumeratorBase::next_files_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_files_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> base::FileEnumeratorBase::next_files_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_next_files_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void g_file_enumerator_set_pending (GFileEnumerator* enumerator /*none*/, gboolean pending);
// void g_file_enumerator_set_pending (::GFileEnumerator* enumerator /*none*/, gboolean pending);
void base::FileEnumeratorBase::set_pending (gboolean pending) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gboolean pending);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_enumerator_set_pending;
  auto pending_to_c = pending;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gboolean) (pending_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra_def_impl.hpp>)
#include <gio/fileenumerator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra_impl.hpp>)
#include <gio/fileenumerator_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileEnumeratorClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GFileEnumeratorClass *methods = (::GFileEnumeratorClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.close_async) methods->close_async = (decltype (methods->close_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::close_async_>;
  if (init_data.close_finish) methods->close_finish = (decltype (methods->close_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_finish_>;
  if (init_data.close_fn) methods->close_fn = (decltype (methods->close_fn)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::close_fn_>;
  if (init_data.next_file) methods->next_file = (decltype (methods->next_file)) detail::method_wrapper<self, Gio::FileInfo (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::next_file_>;
  if (init_data.next_files_async) methods->next_files_async = (decltype (methods->next_files_async)) detail::method_wrapper<self, void (*) (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::next_files_async_>;
  if (init_data.next_files_finish) methods->next_files_finish = (decltype (methods->next_files_finish)) detail::method_wrapper<self, gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::next_files_finish_>;
}

// void FileEnumerator::close_async (GFileEnumerator* enumerator /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileEnumerator::close_async (::GFileEnumerator* enumerator /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileEnumeratorClass::close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->close_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean FileEnumerator::close_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean FileEnumerator::close_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool FileEnumeratorClass::close_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->close_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean FileEnumerator::close_fn (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileEnumerator::close_fn (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileEnumeratorClass::close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->close_fn) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close_fn;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFileInfo* /*full,nullable*/ FileEnumerator::next_file (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full,nullable*/ FileEnumerator::next_file (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo FileEnumeratorClass::next_file_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->next_file) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void FileEnumerator::next_files_async (GFileEnumerator* enumerator /*none*/, int num_files, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileEnumerator::next_files_async (::GFileEnumerator* enumerator /*none*/, gint num_files, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileEnumeratorClass::next_files_async_ (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->next_files_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_files_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto num_files_to_c = num_files;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (num_files_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* /*full*/ FileEnumerator::next_files_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ FileEnumerator::next_files_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> FileEnumeratorClass::next_files_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->next_files_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_files_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
