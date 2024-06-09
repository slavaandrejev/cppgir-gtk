// AUTO-GENERATED

#ifndef _GI_GDK_CLIPBOARD_IMPL_HPP_
#define _GI_GDK_CLIPBOARD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkContentProvider* /*none,nullable*/ gdk_clipboard_get_content (GdkClipboard* clipboard /*none*/);
// ::GdkContentProvider* /*none,nullable*/ gdk_clipboard_get_content (::GdkClipboard* clipboard /*none*/);
Gdk::ContentProvider base::ClipboardBase::get_content () noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_get_content;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none*/ gdk_clipboard_get_display (GdkClipboard* clipboard /*none*/);
// ::GdkDisplay* /*none*/ gdk_clipboard_get_display (::GdkClipboard* clipboard /*none*/);
Gdk::Display base::ClipboardBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_get_display;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkContentFormats* /*none*/ gdk_clipboard_get_formats (GdkClipboard* clipboard /*none*/);
// ::GdkContentFormats* /*none*/ gdk_clipboard_get_formats (::GdkClipboard* clipboard /*none*/);
Gdk::ContentFormats_Ref base::ClipboardBase::get_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_get_formats;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gdk_clipboard_is_local (GdkClipboard* clipboard /*none*/);
// gboolean gdk_clipboard_is_local (::GdkClipboard* clipboard /*none*/);
bool base::ClipboardBase::is_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_is_local;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()));
  return _temp_ret;
}

// void gdk_clipboard_read_async (GdkClipboard* clipboard /*none*/, const char** mime_types /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_async (::GdkClipboard* clipboard /*none*/, const char** mime_types /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ClipboardBase::read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, const char** mime_types, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto mime_types_w = unwrap (std::move(mime_types), gi::transfer_none);
  auto mime_types_to_c = mime_types_w;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (const char**) (mime_types_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ClipboardBase::read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, const char** mime_types, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto mime_types_w = unwrap (std::move(mime_types), gi::transfer_none);
  auto mime_types_to_c = mime_types_w;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (const char**) (mime_types_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* /*full,nullable*/ gdk_clipboard_read_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, const char** out_mime_type /*none,out,opt*/, GError ** error);
// ::GInputStream* /*full,nullable*/ gdk_clipboard_read_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, const char** out_mime_type /*none,out,opt*/, GError ** error);
Gio::InputStream base::ClipboardBase::read_finish (Gio::AsyncResult result, gi::cstring_v * out_mime_type)
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (out_mime_type ? &out_mime_type_o : nullptr), &error);
  if (out_mime_type) *out_mime_type = gi::wrap (out_mime_type_o, gi::transfer_none);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::ClipboardBase::read_finish (Gio::AsyncResult result, gi::cstring_v * out_mime_type, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (out_mime_type ? &out_mime_type_o : nullptr), _error ? &_error_o : nullptr);
  if (out_mime_type) *out_mime_type = gi::wrap (out_mime_type_o, gi::transfer_none);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::InputStream, gi::cstring_v> base::ClipboardBase::read_finish (Gio::AsyncResult result)
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (&out_mime_type_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_mime_type_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::InputStream, gi::cstring_v> base::ClipboardBase::read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (&out_mime_type_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_mime_type_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gdk_clipboard_read_text_async (GdkClipboard* clipboard /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_text_async (::GdkClipboard* clipboard /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ClipboardBase::read_text_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_text_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GdkClipboard*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ClipboardBase::read_text_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_text_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// char* /*full,nullable*/ gdk_clipboard_read_text_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full,nullable*/ gdk_clipboard_read_text_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::cstring base::ClipboardBase::read_text_finish (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_text_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::ClipboardBase::read_text_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_text_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_clipboard_read_texture_async (GdkClipboard* clipboard /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_texture_async (::GdkClipboard* clipboard /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ClipboardBase::read_texture_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_texture_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::GdkClipboard*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ClipboardBase::read_texture_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_texture_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GdkTexture* /*full,nullable*/ gdk_clipboard_read_texture_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GdkTexture* /*full,nullable*/ gdk_clipboard_read_texture_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gdk::Texture base::ClipboardBase::read_texture_finish (Gio::AsyncResult result)
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_texture_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::Texture base::ClipboardBase::read_texture_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GdkTexture* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_texture_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_clipboard_read_value_async (GdkClipboard* clipboard /*none*/, GType type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_read_value_async (::GdkClipboard* clipboard /*none*/, GType type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ClipboardBase::read_value_async (GType type, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, GType type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_value_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto type_to_c = type;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (GType) (type_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ClipboardBase::read_value_async (GType type, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, GType type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_value_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto type_to_c = type;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (GType) (type_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// const GValue* /*none*/ gdk_clipboard_read_value_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// const ::GValue* /*none*/ gdk_clipboard_read_value_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GObject::Value_Ref base::ClipboardBase::read_value_finish (Gio::AsyncResult result)
{
  typedef const ::GValue* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_value_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GObject::Value_Ref base::ClipboardBase::read_value_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef const ::GValue* (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_read_value_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_clipboard_set (GdkClipboard* clipboard /*none*/, GType type,  ..._ /*none*/);
// void gdk_clipboard_set (::GdkClipboard* clipboard /*none*/, GType type,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_value, varargs not supported

// gboolean gdk_clipboard_set_content (GdkClipboard* clipboard /*none*/, GdkContentProvider* provider /*none,nullable*/);
// gboolean gdk_clipboard_set_content (::GdkClipboard* clipboard /*none*/, ::GdkContentProvider* provider /*none,nullable*/);
bool base::ClipboardBase::set_content (Gdk::ContentProvider provider) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkClipboard* clipboard, ::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_set_content;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GdkContentProvider*) (provider_to_c));
  return _temp_ret;
}
bool base::ClipboardBase::set_content () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkClipboard* clipboard, ::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_set_content;
  auto provider_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GdkContentProvider*) (provider_to_c));
  return _temp_ret;
}

// void gdk_clipboard_set_text (GdkClipboard* clipboard /*none*/, const char* text /*none*/);
// void gdk_clipboard_set_text (::GdkClipboard* clipboard /*none*/, const char* text /*none*/);
void base::ClipboardBase::set_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GdkClipboard*) (gobj_()), (const char*) (text_to_c));
}

// void gdk_clipboard_set_texture (GdkClipboard* clipboard /*none*/, GdkTexture* texture /*none*/);
// void gdk_clipboard_set_texture (::GdkClipboard* clipboard /*none*/, ::GdkTexture* texture /*none*/);
void base::ClipboardBase::set_texture (Gdk::Texture texture) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, ::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_set_texture;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  call_wrap_v ((::GdkClipboard*) (gobj_()), (::GdkTexture*) (texture_to_c));
}

// void gdk_clipboard_set_valist (GdkClipboard* clipboard /*none*/, GType type, va_list args /*none*/);
// void gdk_clipboard_set_valist (::GdkClipboard* clipboard /*none*/, GType type,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// void gdk_clipboard_set_value (GdkClipboard* clipboard /*none*/, const GValue* value /*none*/);
// void gdk_clipboard_set_value (::GdkClipboard* clipboard /*none*/, const ::GValue* value /*none*/);
void base::ClipboardBase::set (const GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GdkClipboard*) (gobj_()), (const ::GValue*) (value_to_c));
}

// void gdk_clipboard_store_async (GdkClipboard* clipboard /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_clipboard_store_async (::GdkClipboard* clipboard /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ClipboardBase::store_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_store_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ClipboardBase::store_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkClipboard* clipboard, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_store_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GdkClipboard*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gdk_clipboard_store_finish (GdkClipboard* clipboard /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gdk_clipboard_store_finish (::GdkClipboard* clipboard /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::ClipboardBase::store_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_store_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ClipboardBase::store_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkClipboard* clipboard, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_clipboard_store_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkClipboard*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/clipboard_extra_def_impl.hpp>)
#include <gdk/clipboard_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/clipboard_extra_impl.hpp>)
#include <gdk/clipboard_extra_impl.hpp>
#endif
#endif

#endif
