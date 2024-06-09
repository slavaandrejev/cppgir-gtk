// AUTO-GENERATED

#ifndef _GI_GTK_RECENTMANAGER_IMPL_HPP_
#define _GI_GTK_RECENTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkRecentManager* /*full*/ gtk_recent_manager_new ();
// ::GtkRecentManager* /*full*/ gtk_recent_manager_new ();
Gtk::RecentManager base::RecentManagerBase::new_ () noexcept
{
  typedef ::GtkRecentManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkRecentManager* /*none*/ gtk_recent_manager_get_default ();
// ::GtkRecentManager* /*none*/ gtk_recent_manager_get_default ();
Gtk::RecentManager base::RecentManagerBase::get_default () noexcept
{
  typedef ::GtkRecentManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_recent_manager_add_full (GtkRecentManager* manager /*none*/, const char* uri /*none*/, const GtkRecentData* recent_data /*none*/);
// gboolean gtk_recent_manager_add_full (::GtkRecentManager* manager /*none*/, const char* uri /*none*/, const ::GtkRecentData* recent_data /*none*/);
bool base::RecentManagerBase::add_full (const gi::cstring_v uri, const Gtk::RecentData_Ref recent_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const ::GtkRecentData* recent_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_add_full;
  auto recent_data_to_c = gi::unwrap (recent_data, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const ::GtkRecentData*) (recent_data_to_c));
  return _temp_ret;
}

// gboolean gtk_recent_manager_add_item (GtkRecentManager* manager /*none*/, const char* uri /*none*/);
// gboolean gtk_recent_manager_add_item (::GtkRecentManager* manager /*none*/, const char* uri /*none*/);
bool base::RecentManagerBase::add_item (const gi::cstring_v uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_add_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// GList* /*full*/ gtk_recent_manager_get_items (GtkRecentManager* manager /*none*/);
// ::GList* /*full*/ gtk_recent_manager_get_items (::GtkRecentManager* manager /*none*/);
gi::Collection<GList, ::GtkRecentInfo*, gi::transfer_full_t> base::RecentManagerBase::get_items () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkRecentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_get_items;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkRecentInfo*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean gtk_recent_manager_has_item (GtkRecentManager* manager /*none*/, const char* uri /*none*/);
// gboolean gtk_recent_manager_has_item (::GtkRecentManager* manager /*none*/, const char* uri /*none*/);
bool base::RecentManagerBase::has_item (const gi::cstring_v uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_has_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// GtkRecentInfo* /*full,nullable*/ gtk_recent_manager_lookup_item (GtkRecentManager* manager /*none*/, const char* uri /*none*/, GError ** error);
// ::GtkRecentInfo* /*full,nullable*/ gtk_recent_manager_lookup_item (::GtkRecentManager* manager /*none*/, const char* uri /*none*/, GError ** error);
Gtk::RecentInfo base::RecentManagerBase::lookup_item (const gi::cstring_v uri)
{
  typedef ::GtkRecentInfo* (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_lookup_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::RecentInfo base::RecentManagerBase::lookup_item (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef ::GtkRecentInfo* (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_lookup_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_recent_manager_move_item (GtkRecentManager* manager /*none*/, const char* uri /*none*/, const char* new_uri /*none,nullable*/, GError ** error);
// gboolean gtk_recent_manager_move_item (::GtkRecentManager* manager /*none*/, const char* uri /*none*/, const char* new_uri /*none,nullable*/, GError ** error);
bool base::RecentManagerBase::move_item (const gi::cstring_v uri, const gi::cstring_v new_uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_move_item;
  auto new_uri_to_c = gi::unwrap (new_uri, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentManagerBase::move_item (const gi::cstring_v uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_move_item;
  auto new_uri_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentManagerBase::move_item (const gi::cstring_v uri, const gi::cstring_v new_uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_move_item;
  auto new_uri_to_c = gi::unwrap (new_uri, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::RecentManagerBase::move_item (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_move_item;
  auto new_uri_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), (const char*) (new_uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// int gtk_recent_manager_purge_items (GtkRecentManager* manager /*none*/, GError ** error);
// gint gtk_recent_manager_purge_items (::GtkRecentManager* manager /*none*/, GError ** error);
gint base::RecentManagerBase::purge_items ()
{
  typedef gint (*call_wrap_t) (::GtkRecentManager* manager, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_purge_items;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::RecentManagerBase::purge_items (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GtkRecentManager* manager, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_purge_items;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_recent_manager_remove_item (GtkRecentManager* manager /*none*/, const char* uri /*none*/, GError ** error);
// gboolean gtk_recent_manager_remove_item (::GtkRecentManager* manager /*none*/, const char* uri /*none*/, GError ** error);
bool base::RecentManagerBase::remove_item (const gi::cstring_v uri)
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_remove_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RecentManagerBase::remove_item (const gi::cstring_v uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentManager* manager, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_remove_item;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentmanager_extra_def_impl.hpp>)
#include <gtk/recentmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentmanager_extra_impl.hpp>)
#include <gtk/recentmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentManagerClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkRecentManagerClass *methods = (::GtkRecentManagerClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
}

// void RecentManager::changed (GtkRecentManager* manager /*none*/);
// void RecentManager::changed (::GtkRecentManager* manager /*none*/);
void RecentManagerClass::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkRecentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkRecentManager*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
