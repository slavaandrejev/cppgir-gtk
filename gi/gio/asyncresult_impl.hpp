// AUTO-GENERATED

#ifndef _GI_GIO_ASYNCRESULT_IMPL_HPP_
#define _GI_GIO_ASYNCRESULT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GObject* /*full,nullable*/ g_async_result_get_source_object (GAsyncResult* res /*none*/);
// ::GObject* /*full,nullable*/ g_async_result_get_source_object (::GAsyncResult* res /*none*/);
GObject::Object base::AsyncResultBase::get_source_object () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GAsyncResult* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_result_get_source_object;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gpointer g_async_result_get_user_data (GAsyncResult* res /*none*/);
// void* g_async_result_get_user_data (::GAsyncResult* res /*none*/);
gpointer base::AsyncResultBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GAsyncResult* res);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_result_get_user_data;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()));
  return _temp_ret;
}

// gboolean g_async_result_is_tagged (GAsyncResult* res /*none*/, gpointer source_tag);
// gboolean g_async_result_is_tagged (::GAsyncResult* res /*none*/, void* source_tag);
bool base::AsyncResultBase::is_tagged (void* source_tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* res, void* source_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_result_is_tagged;
  auto source_tag_to_c = source_tag;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()), (void*) (source_tag_to_c));
  return _temp_ret;
}

// gboolean g_async_result_legacy_propagate_error (GAsyncResult* res /*none*/, GError ** error);
// gboolean g_async_result_legacy_propagate_error (::GAsyncResult* res /*none*/, GError ** error);
bool base::AsyncResultBase::legacy_propagate_error ()
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_result_legacy_propagate_error;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AsyncResultBase::legacy_propagate_error (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_async_result_legacy_propagate_error;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/asyncresult_extra_def_impl.hpp>)
#include <gio/asyncresult_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/asyncresult_extra_impl.hpp>)
#include <gio/asyncresult_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AsyncResultIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GAsyncResultIface *methods = (::GAsyncResultIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_source_object) methods->get_source_object = (decltype (methods->get_source_object)) detail::method_wrapper<self, GObject::Object (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_source_object_>;
  if (init_data.get_user_data) methods->get_user_data = (decltype (methods->get_user_data)) detail::method_wrapper<self, gpointer (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_user_data_>;
  if (init_data.is_tagged) methods->is_tagged = (decltype (methods->is_tagged)) detail::method_wrapper<self, bool (*) (void* source_tag), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::is_tagged_>;
}

// GObject* /*full,nullable*/ AsyncResult::get_source_object (GAsyncResult* res /*none*/);
// ::GObject* /*full,nullable*/ AsyncResult::get_source_object (::GAsyncResult* res /*none*/);
GObject::Object AsyncResultIfaceClassImpl::get_source_object_ () noexcept
{
  if (!get_struct_()->get_source_object) { g_critical ("no method in class struct"); return {}; }
  typedef ::GObject* (*call_wrap_t) (::GAsyncResult* res);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_source_object;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gpointer AsyncResult::get_user_data (GAsyncResult* res /*none*/);
// void* AsyncResult::get_user_data (::GAsyncResult* res /*none*/);
gpointer AsyncResultIfaceClassImpl::get_user_data_ () noexcept
{
  if (!get_struct_()->get_user_data) { g_critical ("no method in class struct"); return {}; }
  typedef void* (*call_wrap_t) (::GAsyncResult* res);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_user_data;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()));
  return _temp_ret;
}

// gboolean AsyncResult::is_tagged (GAsyncResult* res /*none*/, gpointer source_tag);
// gboolean AsyncResult::is_tagged (::GAsyncResult* res /*none*/, void* source_tag);
bool AsyncResultIfaceClassImpl::is_tagged_ (void* source_tag) noexcept
{
  if (!get_struct_()->is_tagged) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAsyncResult* res, void* source_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_tagged;
  auto source_tag_to_c = source_tag;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (gobj_()), (void*) (source_tag_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
