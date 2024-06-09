// AUTO-GENERATED

#ifndef _GI_GTK_BUILDERLISTITEMFACTORY_IMPL_HPP_
#define _GI_GTK_BUILDERLISTITEMFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_bytes (GtkBuilderScope* scope /*none,nullable*/, GBytes* bytes /*none*/);
// ::GtkBuilderListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_bytes (::GtkBuilderScope* scope /*none,nullable*/, ::GBytes* bytes /*none*/);
Gtk::BuilderListItemFactory base::BuilderListItemFactoryBase::new_from_bytes (Gtk::BuilderScope scope, GLib::Bytes_Ref bytes) noexcept
{
  typedef ::GtkBuilderListItemFactory* (*call_wrap_t) (::GtkBuilderScope* scope, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_list_item_factory_new_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto scope_to_c = gi::unwrap (scope, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (scope_to_c), (::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::BuilderListItemFactory base::BuilderListItemFactoryBase::new_from_bytes (GLib::Bytes_Ref bytes) noexcept
{
  typedef ::GtkBuilderListItemFactory* (*call_wrap_t) (::GtkBuilderScope* scope, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_list_item_factory_new_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto scope_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (scope_to_c), (::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_resource (GtkBuilderScope* scope /*none,nullable*/, const char* resource_path /*none*/);
// ::GtkBuilderListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_resource (::GtkBuilderScope* scope /*none,nullable*/, const char* resource_path /*none*/);
Gtk::BuilderListItemFactory base::BuilderListItemFactoryBase::new_from_resource (Gtk::BuilderScope scope, const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkBuilderListItemFactory* (*call_wrap_t) (::GtkBuilderScope* scope, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_list_item_factory_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto scope_to_c = gi::unwrap (scope, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (scope_to_c), (const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::BuilderListItemFactory base::BuilderListItemFactoryBase::new_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkBuilderListItemFactory* (*call_wrap_t) (::GtkBuilderScope* scope, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_list_item_factory_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto scope_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkBuilderScope*) (scope_to_c), (const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GBytes* /*none*/ gtk_builder_list_item_factory_get_bytes (GtkBuilderListItemFactory* self /*none*/);
// ::GBytes* /*none*/ gtk_builder_list_item_factory_get_bytes (::GtkBuilderListItemFactory* self /*none*/);
GLib::Bytes_Ref base::BuilderListItemFactoryBase::get_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GtkBuilderListItemFactory* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_list_item_factory_get_bytes;
  auto _temp_ret = call_wrap_v ((::GtkBuilderListItemFactory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_builder_list_item_factory_get_resource (GtkBuilderListItemFactory* self /*none*/);
// const char* /*none,nullable*/ gtk_builder_list_item_factory_get_resource (::GtkBuilderListItemFactory* self /*none*/);
gi::cstring_v base::BuilderListItemFactoryBase::get_resource () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBuilderListItemFactory* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_list_item_factory_get_resource;
  auto _temp_ret = call_wrap_v ((::GtkBuilderListItemFactory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkBuilderScope* /*none,nullable*/ gtk_builder_list_item_factory_get_scope (GtkBuilderListItemFactory* self /*none*/);
// ::GtkBuilderScope* /*none,nullable*/ gtk_builder_list_item_factory_get_scope (::GtkBuilderListItemFactory* self /*none*/);
Gtk::BuilderScope base::BuilderListItemFactoryBase::get_scope () noexcept
{
  typedef ::GtkBuilderScope* (*call_wrap_t) (::GtkBuilderListItemFactory* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_list_item_factory_get_scope;
  auto _temp_ret = call_wrap_v ((::GtkBuilderListItemFactory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builderlistitemfactory_extra_def_impl.hpp>)
#include <gtk/builderlistitemfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builderlistitemfactory_extra_impl.hpp>)
#include <gtk/builderlistitemfactory_extra_impl.hpp>
#endif
#endif

#endif
