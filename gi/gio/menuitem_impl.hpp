// AUTO-GENERATED

#ifndef _GI_GIO_MENUITEM_IMPL_HPP_
#define _GI_GIO_MENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GMenuItem* /*full*/ g_menu_item_new (const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// ::GMenuItem* /*full*/ g_menu_item_new (const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
Gio::MenuItem base::MenuItemBase::new_ (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (const char*) (detailed_action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::MenuItem base::MenuItemBase::new_ () noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new;
  auto detailed_action_to_c = nullptr;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (const char*) (detailed_action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuItem* /*full*/ g_menu_item_new_from_model (GMenuModel* model /*none*/, gint item_index);
// ::GMenuItem* /*full*/ g_menu_item_new_from_model (::GMenuModel* model /*none*/, gint item_index);
Gio::MenuItem base::MenuItemBase::new_from_model (Gio::MenuModel model, gint item_index) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (::GMenuModel* model, gint item_index);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_from_model;
  auto item_index_to_c = item_index;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c), (gint) (item_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuItem* /*full*/ g_menu_item_new_section (const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// ::GMenuItem* /*full*/ g_menu_item_new_section (const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
Gio::MenuItem base::MenuItemBase::new_section (const gi::cstring_v label, Gio::MenuModel section) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (section_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::MenuItem base::MenuItemBase::new_section (Gio::MenuModel section) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (section_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuItem* /*full*/ g_menu_item_new_submenu (const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// ::GMenuItem* /*full*/ g_menu_item_new_submenu (const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
Gio::MenuItem base::MenuItemBase::new_submenu (const gi::cstring_v label, Gio::MenuModel submenu) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::MenuItem base::MenuItemBase::new_submenu (Gio::MenuModel submenu) noexcept
{
  typedef ::GMenuItem* (*call_wrap_t) (const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_item_new_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_menu_item_get_attribute (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_menu_item_get_attribute (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_menu_item_get_attribute_value (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ g_menu_item_get_attribute_value (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GLib::Variant base::MenuItemBase::get_attribute_value (const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_get_attribute_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Variant base::MenuItemBase::get_attribute_value (const gi::cstring_v attribute) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_get_attribute_value;
  auto expected_type_to_c = nullptr;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GMenuModel* /*full,nullable*/ g_menu_item_get_link (GMenuItem* menu_item /*none*/, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ g_menu_item_get_link (::GMenuItem* menu_item /*none*/, const char* link /*none*/);
Gio::MenuModel base::MenuItemBase::get_link (const gi::cstring_v link) noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GMenuItem* menu_item, const char* link);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_get_link;
  auto link_to_c = gi::unwrap (link, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (link_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_menu_item_set_action_and_target (GMenuItem* menu_item /*none*/, const gchar* action /*none,nullable*/, const gchar* format_string /*none,nullable*/,  ..._ /*none*/);
// void g_menu_item_set_action_and_target (::GMenuItem* menu_item /*none*/, const char* action /*none,nullable*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_action_and_target_value (GMenuItem* menu_item /*none*/, const gchar* action /*none,nullable*/, GVariant* target_value /*none,nullable*/);
// void g_menu_item_set_action_and_target_value (::GMenuItem* menu_item /*none*/, const char* action /*none,nullable*/, ::GVariant* target_value /*none,nullable*/);
void base::MenuItemBase::set_action_and_target_value (const gi::cstring_v action, GLib::Variant target_value) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* action, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_action_and_target_value;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none);
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_value_to_c));
}
void base::MenuItemBase::set_action_and_target_value () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* action, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_action_and_target_value;
  auto target_value_to_c = nullptr;
  auto action_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_value_to_c));
}

// void g_menu_item_set_attribute (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, const gchar* format_string /*none,nullable*/,  ..._ /*none*/);
// void g_menu_item_set_attribute (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_attribute_value (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, GVariant* value /*none,nullable*/);
// void g_menu_item_set_attribute_value (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, ::GVariant* value /*none,nullable*/);
void base::MenuItemBase::set_attribute_value (const gi::cstring_v attribute, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_attribute_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (::GVariant*) (value_to_c));
}
void base::MenuItemBase::set_attribute_value (const gi::cstring_v attribute) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* attribute, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_attribute_value;
  auto value_to_c = nullptr;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (attribute_to_c), (::GVariant*) (value_to_c));
}

// void g_menu_item_set_detailed_action (GMenuItem* menu_item /*none*/, const gchar* detailed_action /*none*/);
// void g_menu_item_set_detailed_action (::GMenuItem* menu_item /*none*/, const char* detailed_action /*none*/);
void base::MenuItemBase::set_detailed_action (const gi::cstring_v detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_detailed_action;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (detailed_action_to_c));
}

// void g_menu_item_set_icon (GMenuItem* menu_item /*none*/, GIcon* icon /*none*/);
// void g_menu_item_set_icon (::GMenuItem* menu_item /*none*/, ::GIcon* icon /*none*/);
void base::MenuItemBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void g_menu_item_set_label (GMenuItem* menu_item /*none*/, const gchar* label /*none,nullable*/);
// void g_menu_item_set_label (::GMenuItem* menu_item /*none*/, const char* label /*none,nullable*/);
void base::MenuItemBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (label_to_c));
}
void base::MenuItemBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (label_to_c));
}

// void g_menu_item_set_link (GMenuItem* menu_item /*none*/, const gchar* link /*none*/, GMenuModel* model /*none,nullable*/);
// void g_menu_item_set_link (::GMenuItem* menu_item /*none*/, const char* link /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::MenuItemBase::set_link (const gi::cstring_v link, Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* link, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_link;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto link_to_c = gi::unwrap (link, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (link_to_c), (::GMenuModel*) (model_to_c));
}
void base::MenuItemBase::set_link (const gi::cstring_v link) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, const char* link, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_link;
  auto model_to_c = nullptr;
  auto link_to_c = gi::unwrap (link, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (const char*) (link_to_c), (::GMenuModel*) (model_to_c));
}

// void g_menu_item_set_section (GMenuItem* menu_item /*none*/, GMenuModel* section /*none,nullable*/);
// void g_menu_item_set_section (::GMenuItem* menu_item /*none*/, ::GMenuModel* section /*none,nullable*/);
void base::MenuItemBase::set_section (Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (section_to_c));
}
void base::MenuItemBase::set_section () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_section;
  auto section_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (section_to_c));
}

// void g_menu_item_set_submenu (GMenuItem* menu_item /*none*/, GMenuModel* submenu /*none,nullable*/);
// void g_menu_item_set_submenu (::GMenuItem* menu_item /*none*/, ::GMenuModel* submenu /*none,nullable*/);
void base::MenuItemBase::set_submenu (Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (submenu_to_c));
}
void base::MenuItemBase::set_submenu () noexcept
{
  typedef void (*call_wrap_t) (::GMenuItem* menu_item, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_item_set_submenu;
  auto submenu_to_c = nullptr;
  call_wrap_v ((::GMenuItem*) (gobj_()), (::GMenuModel*) (submenu_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra_def_impl.hpp>)
#include <gio/menuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra_impl.hpp>)
#include <gio/menuitem_extra_impl.hpp>
#endif
#endif

#endif
