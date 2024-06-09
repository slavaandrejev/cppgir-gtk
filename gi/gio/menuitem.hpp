// AUTO-GENERATED

#ifndef _GI_GIO_MENUITEM_HPP_
#define _GI_GIO_MENUITEM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;
class MenuModel;

class MenuItem;

namespace base {


#define GI_GIO_MENUITEM_BASE base::MenuItemBase
class MenuItemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuItem BaseObjectType;

MenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_item_get_type(); } 

// GMenuItem* /*full*/ g_menu_item_new (const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// ::GMenuItem* /*full*/ g_menu_item_new (const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
static GI_INLINE_DECL Gio::MenuItem new_ (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept;
static GI_INLINE_DECL Gio::MenuItem new_ () noexcept;

// GMenuItem* /*full*/ g_menu_item_new_from_model (GMenuModel* model /*none*/, gint item_index);
// ::GMenuItem* /*full*/ g_menu_item_new_from_model (::GMenuModel* model /*none*/, gint item_index);
static GI_INLINE_DECL Gio::MenuItem new_from_model (Gio::MenuModel model, gint item_index) noexcept;

// GMenuItem* /*full*/ g_menu_item_new_section (const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// ::GMenuItem* /*full*/ g_menu_item_new_section (const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
static GI_INLINE_DECL Gio::MenuItem new_section (const gi::cstring_v label, Gio::MenuModel section) noexcept;
static GI_INLINE_DECL Gio::MenuItem new_section (Gio::MenuModel section) noexcept;

// GMenuItem* /*full*/ g_menu_item_new_submenu (const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// ::GMenuItem* /*full*/ g_menu_item_new_submenu (const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
static GI_INLINE_DECL Gio::MenuItem new_submenu (const gi::cstring_v label, Gio::MenuModel submenu) noexcept;
static GI_INLINE_DECL Gio::MenuItem new_submenu (Gio::MenuModel submenu) noexcept;

// gboolean g_menu_item_get_attribute (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, const gchar* format_string /*none*/,  ..._ /*none*/);
// gboolean g_menu_item_get_attribute (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GVariant* /*full,nullable*/ g_menu_item_get_attribute_value (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, const GVariantType* expected_type /*none,nullable*/);
// ::GVariant* /*full,nullable*/ g_menu_item_get_attribute_value (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, const ::GVariantType* expected_type /*none,nullable*/);
GI_INLINE_DECL GLib::Variant get_attribute_value (const gi::cstring_v attribute, const GLib::VariantType_Ref expected_type) noexcept;
GI_INLINE_DECL GLib::Variant get_attribute_value (const gi::cstring_v attribute) noexcept;

// GMenuModel* /*full,nullable*/ g_menu_item_get_link (GMenuItem* menu_item /*none*/, const gchar* link /*none*/);
// ::GMenuModel* /*full,nullable*/ g_menu_item_get_link (::GMenuItem* menu_item /*none*/, const char* link /*none*/);
GI_INLINE_DECL Gio::MenuModel get_link (const gi::cstring_v link) noexcept;

// void g_menu_item_set_action_and_target (GMenuItem* menu_item /*none*/, const gchar* action /*none,nullable*/, const gchar* format_string /*none,nullable*/,  ..._ /*none*/);
// void g_menu_item_set_action_and_target (::GMenuItem* menu_item /*none*/, const char* action /*none,nullable*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_action_and_target_value (GMenuItem* menu_item /*none*/, const gchar* action /*none,nullable*/, GVariant* target_value /*none,nullable*/);
// void g_menu_item_set_action_and_target_value (::GMenuItem* menu_item /*none*/, const char* action /*none,nullable*/, ::GVariant* target_value /*none,nullable*/);
GI_INLINE_DECL void set_action_and_target_value (const gi::cstring_v action, GLib::Variant target_value) noexcept;
GI_INLINE_DECL void set_action_and_target_value () noexcept;

// void g_menu_item_set_attribute (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, const gchar* format_string /*none,nullable*/,  ..._ /*none*/);
// void g_menu_item_set_attribute (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, const char* format_string /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_menu_item_set_attribute_value (GMenuItem* menu_item /*none*/, const gchar* attribute /*none*/, GVariant* value /*none,nullable*/);
// void g_menu_item_set_attribute_value (::GMenuItem* menu_item /*none*/, const char* attribute /*none*/, ::GVariant* value /*none,nullable*/);
GI_INLINE_DECL void set_attribute_value (const gi::cstring_v attribute, GLib::Variant value) noexcept;
GI_INLINE_DECL void set_attribute_value (const gi::cstring_v attribute) noexcept;

// void g_menu_item_set_detailed_action (GMenuItem* menu_item /*none*/, const gchar* detailed_action /*none*/);
// void g_menu_item_set_detailed_action (::GMenuItem* menu_item /*none*/, const char* detailed_action /*none*/);
GI_INLINE_DECL void set_detailed_action (const gi::cstring_v detailed_action) noexcept;

// void g_menu_item_set_icon (GMenuItem* menu_item /*none*/, GIcon* icon /*none*/);
// void g_menu_item_set_icon (::GMenuItem* menu_item /*none*/, ::GIcon* icon /*none*/);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;

// void g_menu_item_set_label (GMenuItem* menu_item /*none*/, const gchar* label /*none,nullable*/);
// void g_menu_item_set_label (::GMenuItem* menu_item /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void g_menu_item_set_link (GMenuItem* menu_item /*none*/, const gchar* link /*none*/, GMenuModel* model /*none,nullable*/);
// void g_menu_item_set_link (::GMenuItem* menu_item /*none*/, const char* link /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_link (const gi::cstring_v link, Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_link (const gi::cstring_v link) noexcept;

// void g_menu_item_set_section (GMenuItem* menu_item /*none*/, GMenuModel* section /*none,nullable*/);
// void g_menu_item_set_section (::GMenuItem* menu_item /*none*/, ::GMenuModel* section /*none,nullable*/);
GI_INLINE_DECL void set_section (Gio::MenuModel section) noexcept;
GI_INLINE_DECL void set_section () noexcept;

// void g_menu_item_set_submenu (GMenuItem* menu_item /*none*/, GMenuModel* submenu /*none,nullable*/);
// void g_menu_item_set_submenu (::GMenuItem* menu_item /*none*/, ::GMenuModel* submenu /*none,nullable*/);
GI_INLINE_DECL void set_submenu (Gio::MenuModel submenu) noexcept;
GI_INLINE_DECL void set_submenu () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra_def.hpp>)
#include <gio/menuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menuitem_extra.hpp>)
#include <gio/menuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuItem : public GI_GIO_MENUITEM_BASE
{ typedef GI_GIO_MENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuItem>
{ typedef Gio::MenuItem type; }; 

} // namespace repository

} // namespace gi

#endif
