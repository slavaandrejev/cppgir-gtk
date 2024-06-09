// AUTO-GENERATED

#ifndef _GI_GIO_MENU_HPP_
#define _GI_GIO_MENU_HPP_

#include "menumodel.hpp"

namespace gi {

namespace repository {

namespace Gio {

class MenuItem;
class MenuModel;

class Menu;

namespace base {


#define GI_GIO_MENU_BASE base::MenuBase
class MenuBase : public Gio::MenuModel
{
typedef Gio::MenuModel super_type;
public:
typedef ::GMenu BaseObjectType;

MenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_get_type(); } 

// GMenu* /*full*/ g_menu_new ();
// ::GMenu* /*full*/ g_menu_new ();
static GI_INLINE_DECL Gio::Menu new_ () noexcept;

// void g_menu_append (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// void g_menu_append (::GMenu* menu /*none*/, const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
GI_INLINE_DECL void append (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept;
GI_INLINE_DECL void append () noexcept;

// void g_menu_append_item (GMenu* menu /*none*/, GMenuItem* item /*none*/);
// void g_menu_append_item (::GMenu* menu /*none*/, ::GMenuItem* item /*none*/);
GI_INLINE_DECL void append_item (Gio::MenuItem item) noexcept;

// void g_menu_append_section (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// void g_menu_append_section (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
GI_INLINE_DECL void append_section (const gi::cstring_v label, Gio::MenuModel section) noexcept;
GI_INLINE_DECL void append_section (Gio::MenuModel section) noexcept;

// void g_menu_append_submenu (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// void g_menu_append_submenu (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
GI_INLINE_DECL void append_submenu (const gi::cstring_v label, Gio::MenuModel submenu) noexcept;
GI_INLINE_DECL void append_submenu (Gio::MenuModel submenu) noexcept;

// void g_menu_freeze (GMenu* menu /*none*/);
// void g_menu_freeze (::GMenu* menu /*none*/);
GI_INLINE_DECL void freeze () noexcept;

// void g_menu_insert (GMenu* menu /*none*/, gint position, const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// void g_menu_insert (::GMenu* menu /*none*/, gint position, const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
GI_INLINE_DECL void insert (gint position, const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept;
GI_INLINE_DECL void insert (gint position) noexcept;

// void g_menu_insert_item (GMenu* menu /*none*/, gint position, GMenuItem* item /*none*/);
// void g_menu_insert_item (::GMenu* menu /*none*/, gint position, ::GMenuItem* item /*none*/);
GI_INLINE_DECL void insert_item (gint position, Gio::MenuItem item) noexcept;

// void g_menu_insert_section (GMenu* menu /*none*/, gint position, const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// void g_menu_insert_section (::GMenu* menu /*none*/, gint position, const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
GI_INLINE_DECL void insert_section (gint position, const gi::cstring_v label, Gio::MenuModel section) noexcept;
GI_INLINE_DECL void insert_section (gint position, Gio::MenuModel section) noexcept;

// void g_menu_insert_submenu (GMenu* menu /*none*/, gint position, const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// void g_menu_insert_submenu (::GMenu* menu /*none*/, gint position, const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
GI_INLINE_DECL void insert_submenu (gint position, const gi::cstring_v label, Gio::MenuModel submenu) noexcept;
GI_INLINE_DECL void insert_submenu (gint position, Gio::MenuModel submenu) noexcept;

// void g_menu_prepend (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// void g_menu_prepend (::GMenu* menu /*none*/, const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
GI_INLINE_DECL void prepend (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept;
GI_INLINE_DECL void prepend () noexcept;

// void g_menu_prepend_item (GMenu* menu /*none*/, GMenuItem* item /*none*/);
// void g_menu_prepend_item (::GMenu* menu /*none*/, ::GMenuItem* item /*none*/);
GI_INLINE_DECL void prepend_item (Gio::MenuItem item) noexcept;

// void g_menu_prepend_section (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// void g_menu_prepend_section (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
GI_INLINE_DECL void prepend_section (const gi::cstring_v label, Gio::MenuModel section) noexcept;
GI_INLINE_DECL void prepend_section (Gio::MenuModel section) noexcept;

// void g_menu_prepend_submenu (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// void g_menu_prepend_submenu (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
GI_INLINE_DECL void prepend_submenu (const gi::cstring_v label, Gio::MenuModel submenu) noexcept;
GI_INLINE_DECL void prepend_submenu (Gio::MenuModel submenu) noexcept;

// void g_menu_remove (GMenu* menu /*none*/, gint position);
// void g_menu_remove (::GMenu* menu /*none*/, gint position);
GI_INLINE_DECL void remove (gint position) noexcept;

// void g_menu_remove_all (GMenu* menu /*none*/);
// void g_menu_remove_all (::GMenu* menu /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menu_extra_def.hpp>)
#include <gio/menu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menu_extra.hpp>)
#include <gio/menu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Menu : public GI_GIO_MENU_BASE
{ typedef GI_GIO_MENU_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenu>
{ typedef Gio::Menu type; }; 

} // namespace repository

} // namespace gi

#endif
