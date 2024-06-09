// AUTO-GENERATED

#ifndef _GI_GIO_ASYNCINITABLE_IMPL_HPP_
#define _GI_GIO_ASYNCINITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_async_initable_new_async (GType object_type, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data, const gchar* first_property_name /*none,nullable*/,  ..._ /*none*/);
// void g_async_initable_new_async (GType object_type, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_async_initable_new_valist_async (GType object_type, const gchar* first_property_name /*none*/, va_list var_args /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_async_initable_new_valist_async (GType object_type, const char* first_property_name /*none*/,  var_args /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; not introspectable, var_args type  not supported

// void g_async_initable_newv_async (GType object_type, guint n_parameters, GParameter* parameters /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_async_initable_newv_async (GType object_type, guint n_parameters,  parameters /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// void g_async_initable_init_async (GAsyncInitable* initable /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_async_initable_init_async (::GAsyncInitable* initable /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AsyncInitableBase::init_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_initable_init_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GAsyncInitable*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AsyncInitableBase::init_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_initable_init_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GAsyncInitable*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_async_initable_init_finish (GAsyncInitable* initable /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean g_async_initable_init_finish (::GAsyncInitable* initable /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
bool base::AsyncInitableBase::init_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_initable_init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AsyncInitableBase::init_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_initable_init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GObject* /*full*/ g_async_initable_new_finish (GAsyncInitable* initable /*none*/, GAsyncResult* res /*none*/, GError ** error);
// ::GObject* /*full*/ g_async_initable_new_finish (::GAsyncInitable* initable /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GObject::Object base::AsyncInitableBase::new_finish (Gio::AsyncResult res)
{
  typedef ::GObject* (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_initable_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GObject::Object base::AsyncInitableBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_initable_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/asyncinitable_extra_def_impl.hpp>)
#include <gio/asyncinitable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/asyncinitable_extra_impl.hpp>)
#include <gio/asyncinitable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AsyncInitableIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GAsyncInitableIface *methods = (::GAsyncInitableIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.init_async) methods->init_async = (decltype (methods->init_async)) detail::method_wrapper<self, void (*) (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::init_async_>;
  if (init_data.init_finish) methods->init_finish = (decltype (methods->init_finish)) detail::method_wrapper<self, bool (*) (Gio::AsyncResult res, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::init_finish_>;
}

// void AsyncInitable::init_async (GAsyncInitable* initable /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void AsyncInitable::init_async (::GAsyncInitable* initable /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void AsyncInitableIfaceClassImpl::init_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->init_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAsyncInitable* initable, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->init_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GAsyncInitable*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean AsyncInitable::init_finish (GAsyncInitable* initable /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean AsyncInitable::init_finish (::GAsyncInitable* initable /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
bool AsyncInitableIfaceClassImpl::init_finish_ (Gio::AsyncResult res, GLib::Error * _error)
{
  if (!get_struct_()->init_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAsyncInitable* initable, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncInitable*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
