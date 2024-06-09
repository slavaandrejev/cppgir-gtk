// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTMANAGER_IMPL_HPP_
#define _GI_GTK_SHORTCUTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutmanager_extra_def_impl.hpp>)
#include <gtk/shortcutmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutmanager_extra_impl.hpp>)
#include <gtk/shortcutmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ShortcutManagerInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkShortcutManagerInterface *methods = (::GtkShortcutManagerInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.add_controller) methods->add_controller = (decltype (methods->add_controller)) detail::method_wrapper<self, void (*) (Gtk::ShortcutController controller), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::add_controller_>;
  if (init_data.remove_controller) methods->remove_controller = (decltype (methods->remove_controller)) detail::method_wrapper<self, void (*) (Gtk::ShortcutController controller), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::remove_controller_>;
}

// void ShortcutManager::add_controller (GtkShortcutManager* self /*none*/, GtkShortcutController* controller /*none*/);
// void ShortcutManager::add_controller (::GtkShortcutManager* self /*none*/, ::GtkShortcutController* controller /*none*/);
void ShortcutManagerInterfaceClassImpl::add_controller_ (Gtk::ShortcutController controller) noexcept
{
  if (!get_struct_()->add_controller) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkShortcutManager* self, ::GtkShortcutController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_controller;
  auto controller_to_c = gi::unwrap (controller, gi::transfer_none);
  call_wrap_v ((::GtkShortcutManager*) (gobj_()), (::GtkShortcutController*) (controller_to_c));
}

// void ShortcutManager::remove_controller (GtkShortcutManager* self /*none*/, GtkShortcutController* controller /*none*/);
// void ShortcutManager::remove_controller (::GtkShortcutManager* self /*none*/, ::GtkShortcutController* controller /*none*/);
void ShortcutManagerInterfaceClassImpl::remove_controller_ (Gtk::ShortcutController controller) noexcept
{
  if (!get_struct_()->remove_controller) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkShortcutManager* self, ::GtkShortcutController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_controller;
  auto controller_to_c = gi::unwrap (controller, gi::transfer_none);
  call_wrap_v ((::GtkShortcutManager*) (gobj_()), (::GtkShortcutController*) (controller_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
