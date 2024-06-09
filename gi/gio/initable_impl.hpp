// AUTO-GENERATED

#ifndef _GI_GIO_INITABLE_IMPL_HPP_
#define _GI_GIO_INITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gpointer /*full*/ g_initable_new (GType object_type, GCancellable* cancellable /*none,nullable*/, GError** error /*none*/, const gchar* first_property_name /*none,nullable*/,  ..._ /*none*/);
// ::GObject* /*full*/ g_initable_new (GType object_type, ::GCancellable* cancellable /*none,nullable*/, ::GError* error /*none*/, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GObject* /*full*/ g_initable_new_valist (GType object_type, const gchar* first_property_name /*none*/, va_list var_args /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GObject* /*full*/ g_initable_new_valist (GType object_type, const char* first_property_name /*none*/,  var_args /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; not introspectable, var_args type  not supported

// gpointer /*full*/ g_initable_newv (GType object_type, guint n_parameters, GParameter* parameters /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GObject* /*full*/ g_initable_newv (GType object_type, guint n_parameters, * parameters /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; deprecated, container element not supported

// gboolean g_initable_init (GInitable* initable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_initable_init (::GInitable* initable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool base::InitableBase::init (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_initable_init;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InitableBase::init ()
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_initable_init;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InitableBase::init (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_initable_init;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::InitableBase::init (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_initable_init;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/initable_extra_def_impl.hpp>)
#include <gio/initable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/initable_extra_impl.hpp>)
#include <gio/initable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InitableIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GInitableIface *methods = (::GInitableIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.init) methods->init = (decltype (methods->init)) detail::method_wrapper<self, bool (*) (Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::init_>;
}

// gboolean Initable::init (GInitable* initable /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Initable::init (::GInitable* initable /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool InitableIfaceClassImpl::init_ (Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->init) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GInitable* initable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->init;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInitable*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
