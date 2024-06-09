// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTPROVIDER_IMPL_HPP_
#define _GI_GDK_CONTENTPROVIDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkContentProvider* /*full*/ gdk_content_provider_new_for_bytes (const char* mime_type /*none*/, GBytes* bytes /*none*/);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_for_bytes (const char* mime_type /*none*/, ::GBytes* bytes /*none*/);
Gdk::ContentProvider base::ContentProviderBase::new_for_bytes (const gi::cstring_v mime_type, GLib::Bytes_Ref bytes) noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (const char* mime_type, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_content_provider_new_for_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mime_type_to_c), (::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentProvider* /*full*/ gdk_content_provider_new_for_value (const GValue* value /*none*/);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_for_value (const ::GValue* value /*none*/);
Gdk::ContentProvider base::ContentProviderBase::new_for_value (const GObject::Value_Ref value) noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_content_provider_new_for_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentProvider* /*full*/ gdk_content_provider_new_typed (GType type,  ..._ /*none*/);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_typed (GType type,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GdkContentProvider* /*full*/ gdk_content_provider_new_union (GdkContentProvider** providers /*full,nullable*/, gsize n_providers);
// ::GdkContentProvider* /*full*/ gdk_content_provider_new_union (::GdkContentProvider** providers /*full,nullable*/, gsize n_providers);
Gdk::ContentProvider base::ContentProviderBase::new_union (gi::CollectionParameter<gi::DSpan, ::GdkContentProvider*, gi::transfer_full_t> providers) noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GdkContentProvider** providers, gsize n_providers);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_content_provider_new_union;
  auto providers_w = unwrap (std::move(providers), gi::transfer_full);
  auto providers_to_c = providers_w;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider**) (providers_to_c), (gsize) (providers._size()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_content_provider_content_changed (GdkContentProvider* provider /*none*/);
// void gdk_content_provider_content_changed (::GdkContentProvider* provider /*none*/);
void base::ContentProviderBase::content_changed () noexcept
{
  typedef void (*call_wrap_t) (::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_content_changed;
  call_wrap_v ((::GdkContentProvider*) (gobj_()));
}

// gboolean gdk_content_provider_get_value (GdkContentProvider* provider /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean gdk_content_provider_get_value (::GdkContentProvider* provider /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
bool base::ContentProviderBase::get_value (GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_get_value;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GValue*) ((GValue*) (value).gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ContentProviderBase::get_value (GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_get_value;
  detail::allocate(value);
  static_assert(sizeof(GValue) == sizeof(*(value).gobj_()), "");
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GValue*) ((GValue*) (value).gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::ContentProviderBase::get_value ()
{
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_get_value;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GObject::Value> base::ContentProviderBase::get_value (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_get_value;
  GObject::Value value_c;
  auto value = &value_c;
  detail::allocate(*value);
  static_assert(sizeof(GValue) == sizeof(*(*value).gobj_()), "");
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GValue*) (value ? (GValue*) (*value).gobj_() : nullptr), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GdkContentFormats* /*full*/ gdk_content_provider_ref_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_provider_ref_formats (::GdkContentProvider* provider /*none*/);
Gdk::ContentFormats base::ContentProviderBase::ref_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_ref_formats;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_provider_ref_storable_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_provider_ref_storable_formats (::GdkContentProvider* provider /*none*/);
Gdk::ContentFormats base::ContentProviderBase::ref_storable_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_ref_storable_formats;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_content_provider_write_mime_type_async (GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_content_provider_write_mime_type_async (::GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, ::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ContentProviderBase::write_mime_type_async (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentProvider* provider, const char* mime_type, ::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_write_mime_type_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  call_wrap_v ((::GdkContentProvider*) (gobj_()), (const char*) (mime_type_to_c), (::GOutputStream*) (stream_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ContentProviderBase::write_mime_type_async (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentProvider* provider, const char* mime_type, ::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_write_mime_type_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  call_wrap_v ((::GdkContentProvider*) (gobj_()), (const char*) (mime_type_to_c), (::GOutputStream*) (stream_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gdk_content_provider_write_mime_type_finish (GdkContentProvider* provider /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gdk_content_provider_write_mime_type_finish (::GdkContentProvider* provider /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::ContentProviderBase::write_mime_type_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_write_mime_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ContentProviderBase::write_mime_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_provider_write_mime_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentprovider_extra_def_impl.hpp>)
#include <gdk/contentprovider_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentprovider_extra_impl.hpp>)
#include <gdk/contentprovider_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

namespace impl {

namespace internal {

void ContentProviderClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GdkContentProviderClass *methods = (::GdkContentProviderClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.attach_clipboard) methods->attach_clipboard = (decltype (methods->attach_clipboard)) detail::method_wrapper<self, void (*) (Gdk::Clipboard clipboard), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::attach_clipboard_>;
  if (init_data.content_changed) methods->content_changed = (decltype (methods->content_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::content_changed_>;
  if (init_data.detach_clipboard) methods->detach_clipboard = (decltype (methods->detach_clipboard)) detail::method_wrapper<self, void (*) (Gdk::Clipboard clipboard), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::detach_clipboard_>;
  if (init_data.get_value) methods->get_value = (decltype (methods->get_value)) detail::method_wrapper<self, bool (*) (GObject::Value_Ref value, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_value_>;
  if (init_data.ref_formats) methods->ref_formats = (decltype (methods->ref_formats)) detail::method_wrapper<self, Gdk::ContentFormats (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::ref_formats_>;
  if (init_data.ref_storable_formats) methods->ref_storable_formats = (decltype (methods->ref_storable_formats)) detail::method_wrapper<self, Gdk::ContentFormats (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::ref_storable_formats_>;
  if (init_data.write_mime_type_async) methods->write_mime_type_async = (decltype (methods->write_mime_type_async)) detail::method_wrapper<self, void (*) (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<3>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<4, 5>>>, void  (const char* mime_type, ::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::write_mime_type_async_>;
  if (init_data.write_mime_type_finish) methods->write_mime_type_finish = (decltype (methods->write_mime_type_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::write_mime_type_finish_>;
}

// void ContentProvider::attach_clipboard (GdkContentProvider* provider /*none*/, GdkClipboard* clipboard /*none*/);
// void ContentProvider::attach_clipboard (::GdkContentProvider* provider /*none*/, ::GdkClipboard* clipboard /*none*/);
void ContentProviderClass::attach_clipboard_ (Gdk::Clipboard clipboard) noexcept
{
  if (!get_struct_()->attach_clipboard) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkContentProvider* provider, ::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->attach_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GdkClipboard*) (clipboard_to_c));
}

// void ContentProvider::content_changed (GdkContentProvider* provider /*none*/);
// void ContentProvider::content_changed (::GdkContentProvider* provider /*none*/);
void ContentProviderClass::content_changed_ () noexcept
{
  if (!get_struct_()->content_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->content_changed;
  call_wrap_v ((::GdkContentProvider*) (gobj_()));
}

// void ContentProvider::detach_clipboard (GdkContentProvider* provider /*none*/, GdkClipboard* clipboard /*none*/);
// void ContentProvider::detach_clipboard (::GdkContentProvider* provider /*none*/, ::GdkClipboard* clipboard /*none*/);
void ContentProviderClass::detach_clipboard_ (Gdk::Clipboard clipboard) noexcept
{
  if (!get_struct_()->detach_clipboard) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkContentProvider* provider, ::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->detach_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GdkClipboard*) (clipboard_to_c));
}

// gboolean ContentProvider::get_value (GdkContentProvider* provider /*none*/, GValue* value /*none,out,ca*/, GError ** error);
// gboolean ContentProvider::get_value (::GdkContentProvider* provider /*none*/, ::GValue* value /*none,out,ca*/, GError ** error);
bool ContentProviderClass::get_value_ (GObject::Value_Ref value, GLib::Error * _error)
{
  if (!get_struct_()->get_value) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GValue*) (value_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GdkContentFormats* /*full*/ ContentProvider::ref_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ ContentProvider::ref_formats (::GdkContentProvider* provider /*none*/);
Gdk::ContentFormats ContentProviderClass::ref_formats_ () noexcept
{
  if (!get_struct_()->ref_formats) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_formats;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ ContentProvider::ref_storable_formats (GdkContentProvider* provider /*none*/);
// ::GdkContentFormats* /*full*/ ContentProvider::ref_storable_formats (::GdkContentProvider* provider /*none*/);
Gdk::ContentFormats ContentProviderClass::ref_storable_formats_ () noexcept
{
  if (!get_struct_()->ref_storable_formats) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_storable_formats;
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void ContentProvider::write_mime_type_async (GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, GOutputStream* stream /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void ContentProvider::write_mime_type_async (::GdkContentProvider* provider /*none*/, const char* mime_type /*none*/, ::GOutputStream* stream /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void ContentProviderClass::write_mime_type_async_ (const gi::cstring_v mime_type, Gio::OutputStream stream, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->write_mime_type_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GdkContentProvider* provider, const char* mime_type, ::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_mime_type_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  call_wrap_v ((::GdkContentProvider*) (gobj_()), (const char*) (mime_type_to_c), (::GOutputStream*) (stream_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean ContentProvider::write_mime_type_finish (GdkContentProvider* provider /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean ContentProvider::write_mime_type_finish (::GdkContentProvider* provider /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool ContentProviderClass::write_mime_type_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->write_mime_type_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GdkContentProvider* provider, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_mime_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkContentProvider*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
