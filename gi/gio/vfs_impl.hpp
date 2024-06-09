// AUTO-GENERATED

#ifndef _GI_GIO_VFS_IMPL_HPP_
#define _GI_GIO_VFS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GVfs* /*none*/ g_vfs_get_default ();
// ::GVfs* /*none*/ g_vfs_get_default ();
Gio::Vfs base::VfsBase::get_default () noexcept
{
  typedef ::GVfs* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVfs* /*none*/ g_vfs_get_local ();
// ::GVfs* /*none*/ g_vfs_get_local ();
Gio::Vfs base::VfsBase::get_local () noexcept
{
  typedef ::GVfs* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_get_local;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFile* /*full*/ g_vfs_get_file_for_path (GVfs* vfs /*none*/, const char* path /*none*/);
// ::GFile* /*full*/ g_vfs_get_file_for_path (::GVfs* vfs /*none*/, const char* path /*none*/);
Gio::File base::VfsBase::get_file_for_path (const gi::cstring_v path) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_get_file_for_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_vfs_get_file_for_uri (GVfs* vfs /*none*/, const char* uri /*none*/);
// ::GFile* /*full*/ g_vfs_get_file_for_uri (::GVfs* vfs /*none*/, const char* uri /*none*/);
Gio::File base::VfsBase::get_file_for_uri (const gi::cstring_v uri) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_get_file_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* const* /*none*/ g_vfs_get_supported_uri_schemes (GVfs* vfs /*none*/);
// const char** /*none*/ g_vfs_get_supported_uri_schemes (::GVfs* vfs /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::VfsBase::get_supported_uri_schemes () noexcept
{
  typedef const char** (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_get_supported_uri_schemes;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// gboolean g_vfs_is_active (GVfs* vfs /*none*/);
// gboolean g_vfs_is_active (::GVfs* vfs /*none*/);
bool base::VfsBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_is_active;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return _temp_ret;
}

// GFile* /*full*/ g_vfs_parse_name (GVfs* vfs /*none*/, const char* parse_name /*none*/);
// ::GFile* /*full*/ g_vfs_parse_name (::GVfs* vfs /*none*/, const char* parse_name /*none*/);
Gio::File base::VfsBase::parse_name (const gi::cstring_v parse_name) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* parse_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_parse_name;
  auto parse_name_to_c = gi::unwrap (parse_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (parse_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_vfs_register_uri_scheme (GVfs* vfs /*none*/, const char* scheme /*none*/, GVfsFileLookupFunc uri_func /*none,nullable*/, gpointer uri_data, GDestroyNotify uri_destroy /*none,nullable*/, GVfsFileLookupFunc parse_name_func /*none,nullable*/, gpointer parse_name_data, GDestroyNotify parse_name_destroy /*none,nullable*/);
// gboolean g_vfs_register_uri_scheme (::GVfs* vfs /*none*/, const char* scheme /*none*/, Gio::VfsFileLookupFunc::cfunction_type uri_func /*none,nullable*/, void* uri_data, GLib::DestroyNotify::cfunction_type uri_destroy /*none,nullable*/, Gio::VfsFileLookupFunc::cfunction_type parse_name_func /*none,nullable*/, void* parse_name_data, GLib::DestroyNotify::cfunction_type parse_name_destroy /*none,nullable*/);
bool base::VfsBase::register_uri_scheme (const gi::cstring_v scheme, Gio::VfsFileLookupFunc uri_func, Gio::VfsFileLookupFunc parse_name_func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVfs* vfs, const char* scheme, Gio::VfsFileLookupFunc::cfunction_type uri_func, void* uri_data, GLib::DestroyNotify::cfunction_type uri_destroy, Gio::VfsFileLookupFunc::cfunction_type parse_name_func, void* parse_name_data, GLib::DestroyNotify::cfunction_type parse_name_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_register_uri_scheme;
  auto parse_name_func_wrap_ = parse_name_func ? unwrap (std::move (parse_name_func), gi::scope_notified) : nullptr;
  auto uri_func_wrap_ = uri_func ? unwrap (std::move (uri_func), gi::scope_notified) : nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (scheme_to_c), (Gio::VfsFileLookupFunc::cfunction_type) (uri_func_wrap_ ? &uri_func_wrap_->wrapper : nullptr), (void*) (uri_func_wrap_), (GLib::DestroyNotify::cfunction_type) (uri_func_wrap_ ? &uri_func_wrap_->destroy : nullptr), (Gio::VfsFileLookupFunc::cfunction_type) (parse_name_func_wrap_ ? &parse_name_func_wrap_->wrapper : nullptr), (void*) (parse_name_func_wrap_), (GLib::DestroyNotify::cfunction_type) (parse_name_func_wrap_ ? &parse_name_func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean g_vfs_unregister_uri_scheme (GVfs* vfs /*none*/, const char* scheme /*none*/);
// gboolean g_vfs_unregister_uri_scheme (::GVfs* vfs /*none*/, const char* scheme /*none*/);
bool base::VfsBase::unregister_uri_scheme (const gi::cstring_v scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVfs* vfs, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_vfs_unregister_uri_scheme;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/vfs_extra_def_impl.hpp>)
#include <gio/vfs_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/vfs_extra_impl.hpp>)
#include <gio/vfs_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void VfsClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GVfsClass *methods = (::GVfsClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.add_writable_namespaces) methods->add_writable_namespaces = (decltype (methods->add_writable_namespaces)) detail::method_wrapper<self, void (*) (Gio::FileAttributeInfoList_Ref list), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::add_writable_namespaces_>;
  if (init_data.get_file_for_path) methods->get_file_for_path = (decltype (methods->get_file_for_path)) detail::method_wrapper<self, Gio::File (*) (const gi::cstring_v path), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_file_for_path_>;
  if (init_data.get_file_for_uri) methods->get_file_for_uri = (decltype (methods->get_file_for_uri)) detail::method_wrapper<self, Gio::File (*) (const gi::cstring_v uri), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_file_for_uri_>;
  if (init_data.get_supported_uri_schemes) methods->get_supported_uri_schemes = (decltype (methods->get_supported_uri_schemes)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_supported_uri_schemes_>;
  if (init_data.is_active) methods->is_active = (decltype (methods->is_active)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_active_>;
  if (init_data.local_file_moved) methods->local_file_moved = (decltype (methods->local_file_moved)) detail::method_wrapper<self, void (*) (const gi::cstring_v source, const gi::cstring_v dest), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::local_file_moved_>;
  if (init_data.local_file_removed) methods->local_file_removed = (decltype (methods->local_file_removed)) detail::method_wrapper<self, void (*) (const gi::cstring_v filename), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::local_file_removed_>;
  if (init_data.local_file_set_attributes) methods->local_file_set_attributes = (decltype (methods->local_file_set_attributes)) detail::method_wrapper<self, bool (*) (const gi::cstring_v filename, Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::local_file_set_attributes_>;
  if (init_data.parse_name) methods->parse_name = (decltype (methods->parse_name)) detail::method_wrapper<self, Gio::File (*) (const gi::cstring_v parse_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::parse_name_>;
}

// void Vfs::add_writable_namespaces (GVfs* vfs /*none*/, GFileAttributeInfoList* list /*none*/);
// void Vfs::add_writable_namespaces (::GVfs* vfs /*none*/, ::GFileAttributeInfoList* list /*none*/);
void VfsClass::add_writable_namespaces_ (Gio::FileAttributeInfoList_Ref list) noexcept
{
  if (!get_struct_()->add_writable_namespaces) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVfs* vfs, ::GFileAttributeInfoList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_writable_namespaces;
  auto list_to_c = gi::unwrap (list, gi::transfer_none);
  call_wrap_v ((::GVfs*) (gobj_()), (::GFileAttributeInfoList*) (list_to_c));
}

// GFile* /*full*/ Vfs::get_file_for_path (GVfs* vfs /*none*/, const char* path /*none*/);
// ::GFile* /*full*/ Vfs::get_file_for_path (::GVfs* vfs /*none*/, const char* path /*none*/);
Gio::File VfsClass::get_file_for_path_ (const gi::cstring_v path) noexcept
{
  if (!get_struct_()->get_file_for_path) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_file_for_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ Vfs::get_file_for_uri (GVfs* vfs /*none*/, const char* uri /*none*/);
// ::GFile* /*full*/ Vfs::get_file_for_uri (::GVfs* vfs /*none*/, const char* uri /*none*/);
Gio::File VfsClass::get_file_for_uri_ (const gi::cstring_v uri) noexcept
{
  if (!get_struct_()->get_file_for_uri) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_file_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* const* /*none*/ Vfs::get_supported_uri_schemes (GVfs* vfs /*none*/);
// const char** /*none*/ Vfs::get_supported_uri_schemes (::GVfs* vfs /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> VfsClass::get_supported_uri_schemes_ () noexcept
{
  if (!get_struct_()->get_supported_uri_schemes) { g_critical ("no method in class struct"); return {}; }
  typedef const char** (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_supported_uri_schemes;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// gboolean Vfs::is_active (GVfs* vfs /*none*/);
// gboolean Vfs::is_active (::GVfs* vfs /*none*/);
bool VfsClass::is_active_ () noexcept
{
  if (!get_struct_()->is_active) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_active;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return _temp_ret;
}

// void Vfs::local_file_add_info (GVfs* vfs /*none*/, const char* filename /*none*/, guint64 device, GFileAttributeMatcher* attribute_matcher /*none*/, GFileInfo* info /*none*/, GCancellable* cancellable /*none,nullable*/, gpointer* extra_data, GDestroyNotify* free_extra_data /*none*/);
// void Vfs::local_file_add_info (::GVfs* vfs /*none*/, const char* filename /*none*/, guint64 device, ::GFileAttributeMatcher* attribute_matcher /*none*/, ::GFileInfo* info /*none*/, ::GCancellable* cancellable /*none,nullable*/, void* extra_data, GLib::DestroyNotify::cfunction_type free_extra_data /*none*/);
// SKIP; inconsistent free_extra_data in pointer depth (1 vs 0), inconsistent extra_data in pointer depth (2 vs 1)

// void Vfs::local_file_moved (GVfs* vfs /*none*/, const char* source /*none*/, const char* dest /*none*/);
// void Vfs::local_file_moved (::GVfs* vfs /*none*/, const char* source /*none*/, const char* dest /*none*/);
void VfsClass::local_file_moved_ (const gi::cstring_v source, const gi::cstring_v dest) noexcept
{
  if (!get_struct_()->local_file_moved) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVfs* vfs, const char* source, const char* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->local_file_moved;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GVfs*) (gobj_()), (const char*) (source_to_c), (const char*) (dest_to_c));
}

// void Vfs::local_file_removed (GVfs* vfs /*none*/, const char* filename /*none*/);
// void Vfs::local_file_removed (::GVfs* vfs /*none*/, const char* filename /*none*/);
void VfsClass::local_file_removed_ (const gi::cstring_v filename) noexcept
{
  if (!get_struct_()->local_file_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GVfs* vfs, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->local_file_removed;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((::GVfs*) (gobj_()), (const char*) (filename_to_c));
}

// gboolean Vfs::local_file_set_attributes (GVfs* vfs /*none*/, const char* filename /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Vfs::local_file_set_attributes (::GVfs* vfs /*none*/, const char* filename /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
bool VfsClass::local_file_set_attributes_ (const gi::cstring_v filename, Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->local_file_set_attributes) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GVfs* vfs, const char* filename, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->local_file_set_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (filename_to_c), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ Vfs::parse_name (GVfs* vfs /*none*/, const char* parse_name /*none*/);
// ::GFile* /*full*/ Vfs::parse_name (::GVfs* vfs /*none*/, const char* parse_name /*none*/);
Gio::File VfsClass::parse_name_ (const gi::cstring_v parse_name) noexcept
{
  if (!get_struct_()->parse_name) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* parse_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parse_name;
  auto parse_name_to_c = gi::unwrap (parse_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (parse_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
