// AUTO-GENERATED

#ifndef _GI_GIO_MENU_IMPL_HPP_
#define _GI_GIO_MENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GMenu* /*full*/ g_menu_new ();
// ::GMenu* /*full*/ g_menu_new ();
Gio::Menu base::MenuBase::new_ () noexcept
{
  typedef ::GMenu* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_menu_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_menu_append (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// void g_menu_append (::GMenu* menu /*none*/, const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
void base::MenuBase::append (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}
void base::MenuBase::append () noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append;
  auto detailed_action_to_c = nullptr;
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}

// void g_menu_append_item (GMenu* menu /*none*/, GMenuItem* item /*none*/);
// void g_menu_append_item (::GMenu* menu /*none*/, ::GMenuItem* item /*none*/);
void base::MenuBase::append_item (Gio::MenuItem item) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, ::GMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append_item;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (::GMenuItem*) (item_to_c));
}

// void g_menu_append_section (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// void g_menu_append_section (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
void base::MenuBase::append_section (const gi::cstring_v label, Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (section_to_c));
}
void base::MenuBase::append_section (Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (section_to_c));
}

// void g_menu_append_submenu (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// void g_menu_append_submenu (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
void base::MenuBase::append_submenu (const gi::cstring_v label, Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
}
void base::MenuBase::append_submenu (Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_append_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
}

// void g_menu_freeze (GMenu* menu /*none*/);
// void g_menu_freeze (::GMenu* menu /*none*/);
void base::MenuBase::freeze () noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_freeze;
  call_wrap_v ((::GMenu*) (gobj_()));
}

// void g_menu_insert (GMenu* menu /*none*/, gint position, const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// void g_menu_insert (::GMenu* menu /*none*/, gint position, const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
void base::MenuBase::insert (gint position, const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}
void base::MenuBase::insert (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert;
  auto detailed_action_to_c = nullptr;
  auto label_to_c = nullptr;
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}

// void g_menu_insert_item (GMenu* menu /*none*/, gint position, GMenuItem* item /*none*/);
// void g_menu_insert_item (::GMenu* menu /*none*/, gint position, ::GMenuItem* item /*none*/);
void base::MenuBase::insert_item (gint position, Gio::MenuItem item) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, ::GMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert_item;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (::GMenuItem*) (item_to_c));
}

// void g_menu_insert_section (GMenu* menu /*none*/, gint position, const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// void g_menu_insert_section (::GMenu* menu /*none*/, gint position, const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
void base::MenuBase::insert_section (gint position, const gi::cstring_v label, Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (const char*) (label_to_c), (::GMenuModel*) (section_to_c));
}
void base::MenuBase::insert_section (gint position, Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = nullptr;
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (const char*) (label_to_c), (::GMenuModel*) (section_to_c));
}

// void g_menu_insert_submenu (GMenu* menu /*none*/, gint position, const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// void g_menu_insert_submenu (::GMenu* menu /*none*/, gint position, const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
void base::MenuBase::insert_submenu (gint position, const gi::cstring_v label, Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
}
void base::MenuBase::insert_submenu (gint position, Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position, const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_insert_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = nullptr;
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c), (const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
}

// void g_menu_prepend (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, const gchar* detailed_action /*none,nullable*/);
// void g_menu_prepend (::GMenu* menu /*none*/, const char* label /*none,nullable*/, const char* detailed_action /*none,nullable*/);
void base::MenuBase::prepend (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}
void base::MenuBase::prepend () noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend;
  auto detailed_action_to_c = nullptr;
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}

// void g_menu_prepend_item (GMenu* menu /*none*/, GMenuItem* item /*none*/);
// void g_menu_prepend_item (::GMenu* menu /*none*/, ::GMenuItem* item /*none*/);
void base::MenuBase::prepend_item (Gio::MenuItem item) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, ::GMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend_item;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (::GMenuItem*) (item_to_c));
}

// void g_menu_prepend_section (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* section /*none*/);
// void g_menu_prepend_section (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* section /*none*/);
void base::MenuBase::prepend_section (const gi::cstring_v label, Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (section_to_c));
}
void base::MenuBase::prepend_section (Gio::MenuModel section) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend_section;
  auto section_to_c = gi::unwrap (section, gi::transfer_none);
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (section_to_c));
}

// void g_menu_prepend_submenu (GMenu* menu /*none*/, const gchar* label /*none,nullable*/, GMenuModel* submenu /*none*/);
// void g_menu_prepend_submenu (::GMenu* menu /*none*/, const char* label /*none,nullable*/, ::GMenuModel* submenu /*none*/);
void base::MenuBase::prepend_submenu (const gi::cstring_v label, Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
}
void base::MenuBase::prepend_submenu (Gio::MenuModel submenu) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, const char* label, ::GMenuModel* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_prepend_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none);
  auto label_to_c = nullptr;
  call_wrap_v ((::GMenu*) (gobj_()), (const char*) (label_to_c), (::GMenuModel*) (submenu_to_c));
}

// void g_menu_remove (GMenu* menu /*none*/, gint position);
// void g_menu_remove (::GMenu* menu /*none*/, gint position);
void base::MenuBase::remove (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_remove;
  auto position_to_c = position;
  call_wrap_v ((::GMenu*) (gobj_()), (gint) (position_to_c));
}

// void g_menu_remove_all (GMenu* menu /*none*/);
// void g_menu_remove_all (::GMenu* menu /*none*/);
void base::MenuBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_menu_remove_all;
  call_wrap_v ((::GMenu*) (gobj_()));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menu_extra_def_impl.hpp>)
#include <gio/menu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menu_extra_impl.hpp>)
#include <gio/menu_extra_impl.hpp>
#endif
#endif

#endif
