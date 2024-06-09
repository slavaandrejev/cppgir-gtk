// AUTO-GENERATED

#ifndef _GI_GDK_DROP_IMPL_HPP_
#define _GI_GDK_DROP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_drop_finish (GdkDrop* self /*none*/, GdkDragAction action);
// void gdk_drop_finish (::GdkDrop* self /*none*/, ::GdkDragAction action);
void base::DropBase::finish (Gdk::DragAction action) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrop* self, ::GdkDragAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_finish;
  auto action_to_c = gi::unwrap (action);
  call_wrap_v ((::GdkDrop*) (gobj_()), (::GdkDragAction) (action_to_c));
}

// GdkDragAction gdk_drop_get_actions (GdkDrop* self /*none*/);
// ::GdkDragAction gdk_drop_get_actions (::GdkDrop* self /*none*/);
Gdk::DragAction base::DropBase::get_actions () noexcept
{
  typedef ::GdkDragAction (*call_wrap_t) (::GdkDrop* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_get_actions;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDevice* /*none*/ gdk_drop_get_device (GdkDrop* self /*none*/);
// ::GdkDevice* /*none*/ gdk_drop_get_device (::GdkDrop* self /*none*/);
Gdk::Device base::DropBase::get_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkDrop* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_get_device;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDisplay* /*none*/ gdk_drop_get_display (GdkDrop* self /*none*/);
// ::GdkDisplay* /*none*/ gdk_drop_get_display (::GdkDrop* self /*none*/);
Gdk::Display base::DropBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDrop* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkDrag* /*none,nullable*/ gdk_drop_get_drag (GdkDrop* self /*none*/);
// ::GdkDrag* /*none,nullable*/ gdk_drop_get_drag (::GdkDrop* self /*none*/);
Gdk::Drag base::DropBase::get_drag () noexcept
{
  typedef ::GdkDrag* (*call_wrap_t) (::GdkDrop* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_get_drag;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkContentFormats* /*none*/ gdk_drop_get_formats (GdkDrop* self /*none*/);
// ::GdkContentFormats* /*none*/ gdk_drop_get_formats (::GdkDrop* self /*none*/);
Gdk::ContentFormats_Ref base::DropBase::get_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkDrop* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_get_formats;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkSurface* /*none*/ gdk_drop_get_surface (GdkDrop* self /*none*/);
// ::GdkSurface* /*none*/ gdk_drop_get_surface (::GdkDrop* self /*none*/);
Gdk::Surface base::DropBase::get_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GdkDrop* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_get_surface;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_drop_read_async (GdkDrop* self /*none*/, const char** mime_types /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_drop_read_async (::GdkDrop* self /*none*/, const char** mime_types /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DropBase::read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrop* self, const char** mime_types, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto mime_types_w = unwrap (std::move(mime_types), gi::transfer_none);
  auto mime_types_to_c = mime_types_w;
  call_wrap_v ((::GdkDrop*) (gobj_()), (const char**) (mime_types_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DropBase::read_async (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> mime_types, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrop* self, const char** mime_types, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto mime_types_w = unwrap (std::move(mime_types), gi::transfer_none);
  auto mime_types_to_c = mime_types_w;
  call_wrap_v ((::GdkDrop*) (gobj_()), (const char**) (mime_types_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* /*full,nullable*/ gdk_drop_read_finish (GdkDrop* self /*none*/, GAsyncResult* result /*none*/, const char** out_mime_type /*full,out*/, GError ** error);
// ::GInputStream* /*full,nullable*/ gdk_drop_read_finish (::GdkDrop* self /*none*/, ::GAsyncResult* result /*none*/, const char** out_mime_type /*full,out*/, GError ** error);
Gio::InputStream base::DropBase::read_finish (Gio::AsyncResult result, gi::cstring & out_mime_type)
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkDrop* self, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (&out_mime_type_o), &error);
  out_mime_type = gi::wrap (out_mime_type_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::DropBase::read_finish (Gio::AsyncResult result, gi::cstring & out_mime_type, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkDrop* self, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (&out_mime_type_o), _error ? &_error_o : nullptr);
  out_mime_type = gi::wrap (out_mime_type_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::InputStream, gi::cstring> base::DropBase::read_finish (Gio::AsyncResult result)
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkDrop* self, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (&out_mime_type_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_mime_type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::InputStream, gi::cstring> base::DropBase::read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GdkDrop* self, ::GAsyncResult* result, const char** out_mime_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_finish;
  const char* out_mime_type_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()), (::GAsyncResult*) (result_to_c), (const char**) (&out_mime_type_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (out_mime_type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gdk_drop_read_value_async (GdkDrop* self /*none*/, GType type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gdk_drop_read_value_async (::GdkDrop* self /*none*/, GType type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DropBase::read_value_async (GType type, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrop* self, GType type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_value_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  auto type_to_c = type;
  call_wrap_v ((::GdkDrop*) (gobj_()), (GType) (type_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DropBase::read_value_async (GType type, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrop* self, GType type, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_value_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto type_to_c = type;
  call_wrap_v ((::GdkDrop*) (gobj_()), (GType) (type_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// const GValue* /*none*/ gdk_drop_read_value_finish (GdkDrop* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// const ::GValue* /*none*/ gdk_drop_read_value_finish (::GdkDrop* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GObject::Value_Ref base::DropBase::read_value_finish (Gio::AsyncResult result)
{
  typedef const ::GValue* (*call_wrap_t) (::GdkDrop* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_value_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
GObject::Value_Ref base::DropBase::read_value_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef const ::GValue* (*call_wrap_t) (::GdkDrop* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_read_value_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkDrop*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_drop_status (GdkDrop* self /*none*/, GdkDragAction actions, GdkDragAction preferred);
// void gdk_drop_status (::GdkDrop* self /*none*/, ::GdkDragAction actions, ::GdkDragAction preferred);
void base::DropBase::status (Gdk::DragAction actions, Gdk::DragAction preferred) noexcept
{
  typedef void (*call_wrap_t) (::GdkDrop* self, ::GdkDragAction actions, ::GdkDragAction preferred);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_drop_status;
  auto preferred_to_c = gi::unwrap (preferred);
  auto actions_to_c = gi::unwrap (actions);
  call_wrap_v ((::GdkDrop*) (gobj_()), (::GdkDragAction) (actions_to_c), (::GdkDragAction) (preferred_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drop_extra_def_impl.hpp>)
#include <gdk/drop_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drop_extra_impl.hpp>)
#include <gdk/drop_extra_impl.hpp>
#endif
#endif

#endif
