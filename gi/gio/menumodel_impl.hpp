// AUTO-GENERATED

#ifndef _GI_GIO_MENUMODEL_IMPL_HPP_
#define _GI_GIO_MENUMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_menu_model_get_item_attribute (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_menu_model_get_item_attribute (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_menu_model_get_item_attribute_value (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ g_menu_model_get_item_attribute_value (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GLib::Variant base::MenuModelBase::get_item_attribute_value (gint item_index, const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_get_item_attribute_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::MenuModelBase::get_item_attribute_value (gint item_index, const gi::cstring_v attribute) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_get_item_attribute_value;
  auto expected_type_to_c = nullptr;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuModel* /*full,nullable*/ g_menu_model_get_item_link (GMenuModel* model /*none*/, gint item_index, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ g_menu_model_get_item_link (::GMenuModel* model /*none*/, gint item_index, const char* link /*none*/);
Gio::MenuModel base::MenuModelBase::get_item_link (gint item_index, const gi::cstring_v link) noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* link);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_get_item_link;
  auto link_to_c = gi::unwrap (link, gi::transfer_none);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (link_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_menu_model_get_n_items (GMenuModel* model /*none*/);
// gint g_menu_model_get_n_items (::GMenuModel* model /*none*/);
gint base::MenuModelBase::get_n_items () noexcept
{
  typedef gint (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_get_n_items;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// gboolean g_menu_model_is_mutable (GMenuModel* model /*none*/);
// gboolean g_menu_model_is_mutable (::GMenuModel* model /*none*/);
bool base::MenuModelBase::is_mutable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_is_mutable;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// void g_menu_model_items_changed (GMenuModel* model /*none*/, gint position, gint removed, gint added);
// void g_menu_model_items_changed (::GMenuModel* model /*none*/, gint position, gint removed, gint added);
void base::MenuModelBase::items_changed (gint position, gint removed, gint added) noexcept
{
  typedef void (*call_wrap_t) (::GMenuModel* model, gint position, gint removed, gint added);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_items_changed;
  auto added_to_c = added;
  auto removed_to_c = removed;
  auto position_to_c = position;
  call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (position_to_c), (gint) (removed_to_c), (gint) (added_to_c));
}

// GMenuAttributeIter* /*full*/ g_menu_model_iterate_item_attributes (GMenuModel* model /*none*/, gint item_index);
// ::GMenuAttributeIter* /*full*/ g_menu_model_iterate_item_attributes (::GMenuModel* model /*none*/, gint item_index);
Gio::MenuAttributeIter base::MenuModelBase::iterate_item_attributes (gint item_index) noexcept
{
  typedef ::GMenuAttributeIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_iterate_item_attributes;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuLinkIter* /*full*/ g_menu_model_iterate_item_links (GMenuModel* model /*none*/, gint item_index);
// ::GMenuLinkIter* /*full*/ g_menu_model_iterate_item_links (::GMenuModel* model /*none*/, gint item_index);
Gio::MenuLinkIter base::MenuModelBase::iterate_item_links (gint item_index) noexcept
{
  typedef ::GMenuLinkIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_model_iterate_item_links;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra_def_impl.hpp>)
#include <gio/menumodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra_impl.hpp>)
#include <gio/menumodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MenuModelClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GMenuModelClass *methods = (::GMenuModelClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_item_attribute_value) methods->get_item_attribute_value = (decltype (methods->get_item_attribute_value)) detail::method_wrapper<self, GLib::Variant (*) (gint item_index, const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_item_attribute_value_>;
  if (init_data.get_item_attributes) methods->get_item_attributes = (decltype (methods->get_item_attributes)) detail::method_wrapper<self, void (*) (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GVariant*>, gi::transfer_full_t> & attributes), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_item_attributes_>;
  if (init_data.get_item_link) methods->get_item_link = (decltype (methods->get_item_link)) detail::method_wrapper<self, Gio::MenuModel (*) (gint item_index, const gi::cstring_v link), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_item_link_>;
  if (init_data.get_item_links) methods->get_item_links = (decltype (methods->get_item_links)) detail::method_wrapper<self, void (*) (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GMenuModel*>, gi::transfer_full_t> & links), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::get_item_links_>;
  if (init_data.get_n_items) methods->get_n_items = (decltype (methods->get_n_items)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_n_items_>;
  if (init_data.is_mutable) methods->is_mutable = (decltype (methods->is_mutable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_mutable_>;
  if (init_data.iterate_item_attributes) methods->iterate_item_attributes = (decltype (methods->iterate_item_attributes)) detail::method_wrapper<self, Gio::MenuAttributeIter (*) (gint item_index), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::iterate_item_attributes_>;
  if (init_data.iterate_item_links) methods->iterate_item_links = (decltype (methods->iterate_item_links)) detail::method_wrapper<self, Gio::MenuLinkIter (*) (gint item_index), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::iterate_item_links_>;
}

// GVariant* /*full,nullable*/ MenuModel::get_item_attribute_value (GMenuModel* model /*none*/, gint item_index, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ MenuModel::get_item_attribute_value (::GMenuModel* model /*none*/, gint item_index, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GLib::Variant MenuModelClass::get_item_attribute_value_ (gint item_index, const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept
{
  if (!get_struct_()->get_item_attribute_value) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_attribute_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void MenuModel::get_item_attributes (GMenuModel* model /*none*/, gint item_index, GHashTable** attributes /*full,out*/);
// void MenuModel::get_item_attributes (::GMenuModel* model /*none*/, gint item_index, ::GHashTable** attributes /*full,out*/);
void MenuModelClass::get_item_attributes_ (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GVariant*>, gi::transfer_full_t> & attributes) noexcept
{
  if (!get_struct_()->get_item_attributes) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMenuModel* model, gint item_index, ::GHashTable** attributes);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_attributes;
  ::GHashTable* attributes_o {};
  auto item_index_to_c = item_index;
  call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (::GHashTable**) (&attributes_o));
  attributes = gi::wrap_to<gi::Collection<GHashTable, std::pair<char*, ::GVariant*>, gi::transfer_full_t>>(attributes_o, gi::transfer_full);
}

// GMenuModel* /*full,nullable*/ MenuModel::get_item_link (GMenuModel* model /*none*/, gint item_index, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ MenuModel::get_item_link (::GMenuModel* model /*none*/, gint item_index, const char* link /*none*/);
Gio::MenuModel MenuModelClass::get_item_link_ (gint item_index, const gi::cstring_v link) noexcept
{
  if (!get_struct_()->get_item_link) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuModel* model, gint item_index, const char* link);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_link;
  auto link_to_c = gi::unwrap (link, gi::transfer_none);
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (const char*) (link_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void MenuModel::get_item_links (GMenuModel* model /*none*/, gint item_index, GHashTable** links /*full,out*/);
// void MenuModel::get_item_links (::GMenuModel* model /*none*/, gint item_index, ::GHashTable** links /*full,out*/);
void MenuModelClass::get_item_links_ (gint item_index, gi::Collection<GHashTable, std::pair<char*, ::GMenuModel*>, gi::transfer_full_t> & links) noexcept
{
  if (!get_struct_()->get_item_links) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMenuModel* model, gint item_index, ::GHashTable** links);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_item_links;
  ::GHashTable* links_o {};
  auto item_index_to_c = item_index;
  call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c), (::GHashTable**) (&links_o));
  links = gi::wrap_to<gi::Collection<GHashTable, std::pair<char*, ::GMenuModel*>, gi::transfer_full_t>>(links_o, gi::transfer_full);
}

// gint MenuModel::get_n_items (GMenuModel* model /*none*/);
// gint MenuModel::get_n_items (::GMenuModel* model /*none*/);
gint MenuModelClass::get_n_items_ () noexcept
{
  if (!get_struct_()->get_n_items) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_items;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// gboolean MenuModel::is_mutable (GMenuModel* model /*none*/);
// gboolean MenuModel::is_mutable (::GMenuModel* model /*none*/);
bool MenuModelClass::is_mutable_ () noexcept
{
  if (!get_struct_()->is_mutable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_mutable;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()));
  return _temp_ret;
}

// GMenuAttributeIter* /*full*/ MenuModel::iterate_item_attributes (GMenuModel* model /*none*/, gint item_index);
// ::GMenuAttributeIter* /*full*/ MenuModel::iterate_item_attributes (::GMenuModel* model /*none*/, gint item_index);
Gio::MenuAttributeIter MenuModelClass::iterate_item_attributes_ (gint item_index) noexcept
{
  if (!get_struct_()->iterate_item_attributes) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMenuAttributeIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iterate_item_attributes;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuLinkIter* /*full*/ MenuModel::iterate_item_links (GMenuModel* model /*none*/, gint item_index);
// ::GMenuLinkIter* /*full*/ MenuModel::iterate_item_links (::GMenuModel* model /*none*/, gint item_index);
Gio::MenuLinkIter MenuModelClass::iterate_item_links_ (gint item_index) noexcept
{
  if (!get_struct_()->iterate_item_links) { g_critical ("no method in class struct"); return {}; }
  typedef ::GMenuLinkIter* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iterate_item_links;
  auto item_index_to_c = item_index;
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (gobj_()), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
