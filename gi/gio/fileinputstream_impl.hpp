// AUTO-GENERATED

#ifndef _GI_GIO_FILEINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_FILEINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable FileInputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FileInputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GFileInfo* /*full*/ g_file_input_stream_query_info (GFileInputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_input_stream_query_info (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo base::FileInputStreamBase::query_info (const gi::cstring_v attributes, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileInputStreamBase::query_info (const gi::cstring_v attributes)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileInputStreamBase::query_info (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileInputStreamBase::query_info (const gi::cstring_v attributes, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_input_stream_query_info_async (GFileInputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_input_stream_query_info_async (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileInputStreamBase::query_info_async (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileInputStreamBase::query_info_async (const gi::cstring_v attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* /*full*/ g_file_input_stream_query_info_finish (GFileInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ g_file_input_stream_query_info_finish (::GFileInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::FileInfo base::FileInputStreamBase::query_info_finish (Gio::AsyncResult result)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::FileInfo base::FileInputStreamBase::query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_input_stream_query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra_def_impl.hpp>)
#include <gio/fileinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra_impl.hpp>)
#include <gio/fileinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileInputStreamClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GFileInputStreamClass *methods = (::GFileInputStreamClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_seek) methods->can_seek = (decltype (methods->can_seek)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_seek_>;
  if (init_data.query_info) methods->query_info = (decltype (methods->query_info)) detail::method_wrapper<self, Gio::FileInfo (*) (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_info_>;
  if (init_data.query_info_async) methods->query_info_async = (decltype (methods->query_info_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::query_info_async_>;
  if (init_data.query_info_finish) methods->query_info_finish = (decltype (methods->query_info_finish)) detail::method_wrapper<self, Gio::FileInfo (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::query_info_finish_>;
  if (init_data.seek) methods->seek = (decltype (methods->seek)) detail::method_wrapper<self, bool (*) (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::seek_>;
  if (init_data.tell) methods->tell = (decltype (methods->tell)) detail::method_wrapper<self, gint64 (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::tell_>;
}

// gboolean FileInputStream::can_seek (GFileInputStream* stream /*none*/);
// gboolean FileInputStream::can_seek (::GFileInputStream* stream /*none*/);
bool FileInputStreamClass::can_seek_ () noexcept
{
  if (!get_struct_()->can_seek) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFileInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_seek;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()));
  return _temp_ret;
}

// GFileInfo* /*full*/ FileInputStream::query_info (GFileInputStream* stream /*none*/, const char* attributes /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full*/ FileInputStream::query_info (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::FileInfo FileInputStreamClass::query_info_ (const gi::cstring_v attributes, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->query_info) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void FileInputStream::query_info_async (GFileInputStream* stream /*none*/, const char* attributes /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileInputStream::query_info_async (::GFileInputStream* stream /*none*/, const char* attributes /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void FileInputStreamClass::query_info_async_ (const gi::cstring_v attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->query_info_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none);
  call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* /*full*/ FileInputStream::query_info_finish (GFileInputStream* stream /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFileInfo* /*full*/ FileInputStream::query_info_finish (::GFileInputStream* stream /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::FileInfo FileInputStreamClass::query_info_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->query_info_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean FileInputStream::seek (GFileInputStream* stream /*none*/, goffset offset, GSeekType type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileInputStream::seek (::GFileInputStream* stream /*none*/, gint64 offset, ::GSeekType type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool FileInputStreamClass::seek_ (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->seek) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GFileInputStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->seek;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto type_to_c = gi::unwrap (type);
  auto offset_to_c = offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (gint64) (offset_to_c), (::GSeekType) (type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// goffset FileInputStream::tell (GFileInputStream* stream /*none*/);
// gint64 FileInputStream::tell (::GFileInputStream* stream /*none*/);
gint64 FileInputStreamClass::tell_ () noexcept
{
  if (!get_struct_()->tell) { g_critical ("no method in class struct"); return {}; }
  typedef gint64 (*call_wrap_t) (::GFileInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tell;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
