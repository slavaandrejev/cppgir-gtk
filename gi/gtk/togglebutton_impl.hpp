// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLEBUTTON_IMPL_HPP_
#define _GI_GTK_TOGGLEBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_toggle_button_new ();
// ::GtkToggleButton* /*none*/ gtk_toggle_button_new ();
Gtk::ToggleButton base::ToggleButtonBase::new_ () noexcept
{
  typedef ::GtkToggleButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_toggle_button_new_with_label (const char* label /*none*/);
// ::GtkToggleButton* /*none*/ gtk_toggle_button_new_with_label (const char* label /*none*/);
Gtk::ToggleButton base::ToggleButtonBase::new_with_label (const gi::cstring_v label) noexcept
{
  typedef ::GtkToggleButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_toggle_button_new_with_mnemonic (const char* label /*none*/);
// ::GtkToggleButton* /*none*/ gtk_toggle_button_new_with_mnemonic (const char* label /*none*/);
Gtk::ToggleButton base::ToggleButtonBase::new_with_mnemonic (const gi::cstring_v label) noexcept
{
  typedef ::GtkToggleButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toggle_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_toggle_button_get_active (GtkToggleButton* toggle_button /*none*/);
// gboolean gtk_toggle_button_get_active (::GtkToggleButton* toggle_button /*none*/);
bool base::ToggleButtonBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_toggle_button_get_active;
  auto _temp_ret = call_wrap_v ((::GtkToggleButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_toggle_button_set_active (GtkToggleButton* toggle_button /*none*/, gboolean is_active);
// void gtk_toggle_button_set_active (::GtkToggleButton* toggle_button /*none*/, gboolean is_active);
void base::ToggleButtonBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_toggle_button_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::GtkToggleButton*) (gobj_()), (gboolean) (is_active_to_c));
}

// void gtk_toggle_button_set_group (GtkToggleButton* toggle_button /*none*/, GtkToggleButton* group /*none,nullable*/);
// void gtk_toggle_button_set_group (::GtkToggleButton* toggle_button /*none*/, ::GtkToggleButton* group /*none,nullable*/);
void base::ToggleButtonBase::set_group (Gtk::ToggleButton group) noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button, ::GtkToggleButton* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_toggle_button_set_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  call_wrap_v ((::GtkToggleButton*) (gobj_()), (::GtkToggleButton*) (group_to_c));
}
void base::ToggleButtonBase::set_group () noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button, ::GtkToggleButton* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_toggle_button_set_group;
  auto group_to_c = nullptr;
  call_wrap_v ((::GtkToggleButton*) (gobj_()), (::GtkToggleButton*) (group_to_c));
}

// void gtk_toggle_button_toggled (GtkToggleButton* toggle_button /*none*/);
// void gtk_toggle_button_toggled (::GtkToggleButton* toggle_button /*none*/);
void base::ToggleButtonBase::toggled () noexcept
{
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_toggle_button_toggled;
  call_wrap_v ((::GtkToggleButton*) (gobj_()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/togglebutton_extra_def_impl.hpp>)
#include <gtk/togglebutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/togglebutton_extra_impl.hpp>)
#include <gtk/togglebutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToggleButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkToggleButtonClass *methods = (::GtkToggleButtonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.toggled) methods->toggled = (decltype (methods->toggled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::toggled_>;
}

// void ToggleButton::toggled (GtkToggleButton* toggle_button /*none*/);
// void ToggleButton::toggled (::GtkToggleButton* toggle_button /*none*/);
void ToggleButtonClass::toggled_ () noexcept
{
  if (!get_struct_()->toggled) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkToggleButton* toggle_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggled;
  call_wrap_v ((::GtkToggleButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
