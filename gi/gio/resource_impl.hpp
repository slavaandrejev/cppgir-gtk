// AUTO-GENERATED

#ifndef _GI_GIO_RESOURCE_IMPL_HPP_
#define _GI_GIO_RESOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GResource* /*full*/ g_resource_new_from_data (GBytes* data /*none*/, GError ** error);
// ::GResource* /*full*/ g_resource_new_from_data (::GBytes* data /*none*/, GError ** error);
Gio::Resource base::ResourceBase::new_from_data (GLib::Bytes_Ref data)
{
  typedef ::GResource* (*call_wrap_t) (::GBytes* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_new_from_data;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBytes*) (data_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Resource base::ResourceBase::new_from_data (GLib::Bytes_Ref data, GLib::Error * _error) noexcept
{
  typedef ::GResource* (*call_wrap_t) (::GBytes* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_new_from_data;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBytes*) (data_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_resources_register (GResource* resource /*none*/);
// void g_resources_register (::GResource* resource /*none*/);
void base::ResourceBase::_register () noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_register;
  call_wrap_v ((::GResource*) (gobj_()));
}

// void g_resources_unregister (GResource* resource /*none*/);
// void g_resources_unregister (::GResource* resource /*none*/);
void base::ResourceBase::_unregister () noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resources_unregister;
  call_wrap_v ((::GResource*) (gobj_()));
}

// char** /*full*/ g_resource_enumerate_children (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// char** /*full*/ g_resource_enumerate_children (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ResourceBase::enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef char** (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ResourceBase::enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_resource_get_info (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resource_get_info (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
bool base::ResourceBase::get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags)
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), &error);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::ResourceBase::get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), _error ? &_error_o : nullptr);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gsize, guint32> base::ResourceBase::get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = size_o;
  auto &&tmp_return_3 = flags_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gsize, guint32> base::ResourceBase::get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = size_o;
  auto &&tmp_return_3 = flags_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GBytes* /*full*/ g_resource_lookup_data (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* /*full*/ g_resource_lookup_data (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GLib::Bytes base::ResourceBase::lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GBytes* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Bytes base::ResourceBase::lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GInputStream* /*full*/ g_resource_open_stream (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* /*full*/ g_resource_open_stream (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
Gio::InputStream base::ResourceBase::open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GInputStream* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::InputStream base::ResourceBase::open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GResource* /*full*/ g_resource_ref (GResource* resource /*none*/);
// ::GResource* /*full*/ g_resource_ref (::GResource* resource /*none*/);
// IGNORE; marked ignore

// void g_resource_unref (GResource* resource /*none*/);
// void g_resource_unref (::GResource* resource /*none*/);
// IGNORE; marked ignore

// GResource* /*full*/ g_resource_load (const gchar* filename /*none*/, GError ** error);
// ::GResource* /*full*/ g_resource_load (const char* filename /*none*/, GError ** error);
Gio::Resource base::ResourceBase::load (const gi::cstring_v filename)
{
  typedef ::GResource* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_load;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Resource base::ResourceBase::load (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef ::GResource* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_resource_load;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resource_extra_def_impl.hpp>)
#include <gio/resource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resource_extra_impl.hpp>)
#include <gio/resource_extra_impl.hpp>
#endif
#endif

#endif
