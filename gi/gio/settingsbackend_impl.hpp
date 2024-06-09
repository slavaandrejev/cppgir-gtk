// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGSBACKEND_IMPL_HPP_
#define _GI_GIO_SETTINGSBACKEND_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_settings_backend_flatten_tree (GTree* tree /*none*/, gchar** path /*full,out*/, const gchar*** keys /*container,out*/, GVariant*** values /*container,out,opt*/);
// void g_settings_backend_flatten_tree (::GTree* tree /*none*/, char** path /*full,out*/, const char*** keys /*container,out*/, ::GVariant*** values /*container,out,opt*/);
void base::SettingsBackendBase::flatten_tree (GLib::Tree_Ref tree, gi::cstring & path, gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t> & keys, gi::Collection<gi::ZTSpan, ::GVariant*, gi::transfer_container_t> * values) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, char** path, const char*** keys, ::GVariant*** values);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_flatten_tree;
  ::GVariant** values_o {};
  const char** keys_o {};
  char* path_o {};
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none);
  call_wrap_v ((::GTree*) (tree_to_c), (char**) (&path_o), (const char***) (&keys_o), (::GVariant***) (values ? &values_o : nullptr));
  if (values) *values = gi::wrap_to<gi::Collection<gi::ZTSpan, ::GVariant*, gi::transfer_container_t>>(values_o, gi::transfer_container);
  keys = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>>(keys_o, gi::transfer_container);
  path = gi::wrap (path_o, gi::transfer_full);
}
std::tuple<gi::cstring, gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>, gi::Collection<gi::ZTSpan, ::GVariant*, gi::transfer_container_t>> base::SettingsBackendBase::flatten_tree (GLib::Tree_Ref tree) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, char** path, const char*** keys, ::GVariant*** values);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_flatten_tree;
  ::GVariant** values_o {};
  const char** keys_o {};
  char* path_o {};
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none);
  call_wrap_v ((::GTree*) (tree_to_c), (char**) (&path_o), (const char***) (&keys_o), (::GVariant***) (&values_o));
  auto &&tmp_return_1 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_container_t>>(keys_o, gi::transfer_container);
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, ::GVariant*, gi::transfer_container_t>>(values_o, gi::transfer_container);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GSettingsBackend* /*full*/ g_settings_backend_get_default ();
// ::GSettingsBackend* /*full*/ g_settings_backend_get_default ();
Gio::SettingsBackend base::SettingsBackendBase::get_default () noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_settings_backend_changed (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, gpointer origin_tag);
// void g_settings_backend_changed (::GSettingsBackend* backend /*none*/, const char* key /*none*/, void* origin_tag);
void base::SettingsBackendBase::changed (const gi::cstring_v key, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* key, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_changed;
  auto origin_tag_to_c = origin_tag;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_changed_tree (GSettingsBackend* backend /*none*/, GTree* tree /*none*/, gpointer origin_tag);
// void g_settings_backend_changed_tree (::GSettingsBackend* backend /*none*/, ::GTree* tree /*none*/, void* origin_tag);
void base::SettingsBackendBase::changed_tree (GLib::Tree_Ref tree, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_changed_tree;
  auto origin_tag_to_c = origin_tag;
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (::GTree*) (tree_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_keys_changed (GSettingsBackend* backend /*none*/, const gchar* path /*none*/, const gchar* const* items /*none*/, gpointer origin_tag);
// void g_settings_backend_keys_changed (::GSettingsBackend* backend /*none*/, const char* path /*none*/, const char** items /*none*/, void* origin_tag);
void base::SettingsBackendBase::keys_changed (const gi::cstring_v path, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> items, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* path, const char** items, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_keys_changed;
  auto origin_tag_to_c = origin_tag;
  auto items_w = unwrap (std::move(items), gi::transfer_none);
  auto items_to_c = items_w;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (path_to_c), (const char**) (items_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_path_changed (GSettingsBackend* backend /*none*/, const gchar* path /*none*/, gpointer origin_tag);
// void g_settings_backend_path_changed (::GSettingsBackend* backend /*none*/, const char* path /*none*/, void* origin_tag);
void base::SettingsBackendBase::path_changed (const gi::cstring_v path, void* origin_tag) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* path, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_path_changed;
  auto origin_tag_to_c = origin_tag;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (path_to_c), (void*) (origin_tag_to_c));
}

// void g_settings_backend_path_writable_changed (GSettingsBackend* backend /*none*/, const gchar* path /*none*/);
// void g_settings_backend_path_writable_changed (::GSettingsBackend* backend /*none*/, const char* path /*none*/);
void base::SettingsBackendBase::path_writable_changed (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_path_writable_changed;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (path_to_c));
}

// void g_settings_backend_writable_changed (GSettingsBackend* backend /*none*/, const gchar* key /*none*/);
// void g_settings_backend_writable_changed (::GSettingsBackend* backend /*none*/, const char* key /*none*/);
void base::SettingsBackendBase::writable_changed (const gi::cstring_v key) noexcept
{
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_settings_backend_writable_changed;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra_def_impl.hpp>)
#include <gio/settingsbackend_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settingsbackend_extra_impl.hpp>)
#include <gio/settingsbackend_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SettingsBackendClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSettingsBackendClass *methods = (::GSettingsBackendClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_writable) methods->get_writable = (decltype (methods->get_writable)) detail::method_wrapper<self, bool (*) (const gi::cstring_v key), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_writable_>;
  if (init_data.read) methods->read = (decltype (methods->read)) detail::method_wrapper<self, GLib::Variant (*) (const gi::cstring_v key, const GLib::VariantType_Ref expected_type, gboolean default_value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::read_>;
  if (init_data.read_user_value) methods->read_user_value = (decltype (methods->read_user_value)) detail::method_wrapper<self, GLib::Variant (*) (const gi::cstring_v key, const GLib::VariantType_Ref expected_type), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::read_user_value_>;
  if (init_data.reset) methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (const gi::cstring_v key, void* origin_tag), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::reset_>;
  if (init_data.subscribe) methods->subscribe = (decltype (methods->subscribe)) detail::method_wrapper<self, void (*) (const gi::cstring_v name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::subscribe_>;
  if (init_data.sync) methods->sync = (decltype (methods->sync)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::sync_>;
  if (init_data.unsubscribe) methods->unsubscribe = (decltype (methods->unsubscribe)) detail::method_wrapper<self, void (*) (const gi::cstring_v name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::unsubscribe_>;
  if (init_data.write) methods->write = (decltype (methods->write)) detail::method_wrapper<self, bool (*) (const gi::cstring_v key, GLib::Variant value, void* origin_tag), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::write_>;
  if (init_data.write_tree) methods->write_tree = (decltype (methods->write_tree)) detail::method_wrapper<self, bool (*) (GLib::Tree_Ref tree, void* origin_tag), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::write_tree_>;
}

// gboolean SettingsBackend::get_writable (GSettingsBackend* backend /*none*/, const gchar* key /*none*/);
// gboolean SettingsBackend::get_writable (::GSettingsBackend* backend /*none*/, const char* key /*none*/);
bool SettingsBackendClass::get_writable_ (const gi::cstring_v key) noexcept
{
  if (!get_struct_()->get_writable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSettingsBackend* backend, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_writable;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GVariant* /*full*/ SettingsBackend::read (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none*/, gboolean default_value);
// ::GVariant* /*full*/ SettingsBackend::read (::GSettingsBackend* backend /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none*/, gboolean default_value);
GLib::Variant SettingsBackendClass::read_ (const gi::cstring_v key, const GLib::VariantType_Ref expected_type, gboolean default_value) noexcept
{
  if (!get_struct_()->read) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type, gboolean default_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read;
  auto default_value_to_c = default_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c), (gboolean) (default_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full*/ SettingsBackend::read_user_value (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, const GVariantType* expected_type /*none*/);
// ::GVariant* /*full*/ SettingsBackend::read_user_value (::GSettingsBackend* backend /*none*/, const char* key /*none*/, const ::GVariantType* expected_type /*none*/);
GLib::Variant SettingsBackendClass::read_user_value_ (const gi::cstring_v key, const GLib::VariantType_Ref expected_type) noexcept
{
  if (!get_struct_()->read_user_value) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GSettingsBackend* backend, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->read_user_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void SettingsBackend::reset (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, gpointer origin_tag);
// void SettingsBackend::reset (::GSettingsBackend* backend /*none*/, const char* key /*none*/, void* origin_tag);
void SettingsBackendClass::reset_ (const gi::cstring_v key, void* origin_tag) noexcept
{
  if (!get_struct_()->reset) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* key, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  auto origin_tag_to_c = origin_tag;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (void*) (origin_tag_to_c));
}

// void SettingsBackend::subscribe (GSettingsBackend* backend /*none*/, const gchar* name /*none*/);
// void SettingsBackend::subscribe (::GSettingsBackend* backend /*none*/, const char* name /*none*/);
void SettingsBackendClass::subscribe_ (const gi::cstring_v name) noexcept
{
  if (!get_struct_()->subscribe) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->subscribe;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (name_to_c));
}

// void SettingsBackend::sync (GSettingsBackend* backend /*none*/);
// void SettingsBackend::sync (::GSettingsBackend* backend /*none*/);
void SettingsBackendClass::sync_ () noexcept
{
  if (!get_struct_()->sync) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSettingsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->sync;
  call_wrap_v ((::GSettingsBackend*) (gobj_()));
}

// void SettingsBackend::unsubscribe (GSettingsBackend* backend /*none*/, const gchar* name /*none*/);
// void SettingsBackend::unsubscribe (::GSettingsBackend* backend /*none*/, const char* name /*none*/);
void SettingsBackendClass::unsubscribe_ (const gi::cstring_v name) noexcept
{
  if (!get_struct_()->unsubscribe) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSettingsBackend* backend, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unsubscribe;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (name_to_c));
}

// gboolean SettingsBackend::write (GSettingsBackend* backend /*none*/, const gchar* key /*none*/, GVariant* value /*none*/, gpointer origin_tag);
// gboolean SettingsBackend::write (::GSettingsBackend* backend /*none*/, const char* key /*none*/, ::GVariant* value /*none*/, void* origin_tag);
bool SettingsBackendClass::write_ (const gi::cstring_v key, GLib::Variant value, void* origin_tag) noexcept
{
  if (!get_struct_()->write) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSettingsBackend* backend, const char* key, ::GVariant* value, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write;
  auto origin_tag_to_c = origin_tag;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (const char*) (key_to_c), (::GVariant*) (value_to_c), (void*) (origin_tag_to_c));
  return _temp_ret;
}

// gboolean SettingsBackend::write_tree (GSettingsBackend* backend /*none*/, GTree* tree /*none*/, gpointer origin_tag);
// gboolean SettingsBackend::write_tree (::GSettingsBackend* backend /*none*/, ::GTree* tree /*none*/, void* origin_tag);
bool SettingsBackendClass::write_tree_ (GLib::Tree_Ref tree, void* origin_tag) noexcept
{
  if (!get_struct_()->write_tree) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GSettingsBackend* backend, ::GTree* tree, void* origin_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->write_tree;
  auto origin_tag_to_c = origin_tag;
  auto tree_to_c = gi::unwrap (tree, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSettingsBackend*) (gobj_()), (::GTree*) (tree_to_c), (void*) (origin_tag_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
