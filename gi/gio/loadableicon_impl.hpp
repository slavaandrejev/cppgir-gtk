// AUTO-GENERATED

#ifndef _GI_GIO_LOADABLEICON_IMPL_HPP_
#define _GI_GIO_LOADABLEICON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GInputStream* /*full*/ g_loadable_icon_load (GLoadableIcon* icon /*none*/, int size, char** type /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GInputStream* /*full*/ g_loadable_icon_load (::GLoadableIcon* icon /*none*/, gint size, char** type /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::InputStream base::LoadableIconBase::load (gint size, gi::cstring * type, Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (type) *type = gi::wrap (type_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::LoadableIconBase::load (gint size, gi::cstring * type)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (type) *type = gi::wrap (type_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::LoadableIconBase::load (gint size, gi::cstring * type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (type) *type = gi::wrap (type_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::LoadableIconBase::load (gint size, gi::cstring * type, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (type ? &type_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (type) *type = gi::wrap (type_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::InputStream, gi::cstring> base::LoadableIconBase::load (gint size, Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::InputStream, gi::cstring> base::LoadableIconBase::load (gint size)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::InputStream, gi::cstring> base::LoadableIconBase::load (gint size, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::InputStream, gi::cstring> base::LoadableIconBase::load (gint size, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load;
  auto cancellable_to_c = nullptr;
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void g_loadable_icon_load_async (GLoadableIcon* icon /*none*/, int size, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_loadable_icon_load_async (::GLoadableIcon* icon /*none*/, gint size, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::LoadableIconBase::load_async (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto size_to_c = size;
  call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::LoadableIconBase::load_async (gint size, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto size_to_c = size;
  call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* /*full*/ g_loadable_icon_load_finish (GLoadableIcon* icon /*none*/, GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
// ::GInputStream* /*full*/ g_loadable_icon_load_finish (::GLoadableIcon* icon /*none*/, ::GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
Gio::InputStream base::LoadableIconBase::load_finish (Gio::AsyncResult res, gi::cstring * type)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (type ? &type_o : nullptr), &error);
  if (type) *type = gi::wrap (type_o, gi::transfer_full);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::LoadableIconBase::load_finish (Gio::AsyncResult res, gi::cstring * type, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (type ? &type_o : nullptr), _error ? &_error_o : nullptr);
  if (type) *type = gi::wrap (type_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::InputStream, gi::cstring> base::LoadableIconBase::load_finish (Gio::AsyncResult res)
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&type_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gio::InputStream, gi::cstring> base::LoadableIconBase::load_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_loadable_icon_load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&type_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (type_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra_def_impl.hpp>)
#include <gio/loadableicon_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/loadableicon_extra_impl.hpp>)
#include <gio/loadableicon_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void LoadableIconIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GLoadableIconIface *methods = (::GLoadableIconIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.load) methods->load = (decltype (methods->load)) detail::method_wrapper<self, Gio::InputStream (*) (gint size, gi::cstring & type, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::load_>;
  if (init_data.load_async) methods->load_async = (decltype (methods->load_async)) detail::method_wrapper<self, void (*) (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::load_async_>;
  if (init_data.load_finish) methods->load_finish = (decltype (methods->load_finish)) detail::method_wrapper<self, Gio::InputStream (*) (Gio::AsyncResult res, gi::cstring & type, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::load_finish_>;
}

// GInputStream* /*full*/ LoadableIcon::load (GLoadableIcon* icon /*none*/, int size, char** type /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GInputStream* /*full*/ LoadableIcon::load (::GLoadableIcon* icon /*none*/, gint size, char** type /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
Gio::InputStream LoadableIconIfaceClassImpl::load_ (gint size, gi::cstring & type, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->load) { g_critical ("no method in class struct"); return {}; }
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, gint size, char** type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* type_o {};
  auto size_to_c = size;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (char**) (&type_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  type = gi::wrap (type_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void LoadableIcon::load_async (GLoadableIcon* icon /*none*/, int size, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void LoadableIcon::load_async (::GLoadableIcon* icon /*none*/, gint size, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void LoadableIconIfaceClassImpl::load_async_ (gint size, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->load_async) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GLoadableIcon* icon, gint size, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto size_to_c = size;
  call_wrap_v ((::GLoadableIcon*) (gobj_()), (gint) (size_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* /*full*/ LoadableIcon::load_finish (GLoadableIcon* icon /*none*/, GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
// ::GInputStream* /*full*/ LoadableIcon::load_finish (::GLoadableIcon* icon /*none*/, ::GAsyncResult* res /*none*/, char** type /*full,out,opt*/, GError ** error);
Gio::InputStream LoadableIconIfaceClassImpl::load_finish_ (Gio::AsyncResult res, gi::cstring & type, GLib::Error * _error)
{
  if (!get_struct_()->load_finish) { g_critical ("no method in class struct"); return {}; }
  typedef ::GInputStream* (*call_wrap_t) (::GLoadableIcon* icon, ::GAsyncResult* res, char** type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_finish;
  char* type_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GLoadableIcon*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&type_o), _error ? &_error_o : nullptr);
  type = gi::wrap (type_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
