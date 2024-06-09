// AUTO-GENERATED

#ifndef _GI_GTK_CHECKBUTTON_IMPL_HPP_
#define _GI_GTK_CHECKBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable CheckButtonBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CheckButtonBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ gtk_check_button_new ();
// ::GtkCheckButton* /*none*/ gtk_check_button_new ();
Gtk::CheckButton base::CheckButtonBase::new_ () noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_check_button_new_with_label (const char* label /*none,nullable*/);
// ::GtkCheckButton* /*none*/ gtk_check_button_new_with_label (const char* label /*none,nullable*/);
Gtk::CheckButton base::CheckButtonBase::new_with_label (const gi::cstring_v label) noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::CheckButton base::CheckButtonBase::new_with_label () noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new_with_label;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_check_button_new_with_mnemonic (const char* label /*none,nullable*/);
// ::GtkCheckButton* /*none*/ gtk_check_button_new_with_mnemonic (const char* label /*none,nullable*/);
Gtk::CheckButton base::CheckButtonBase::new_with_mnemonic (const gi::cstring_v label) noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::CheckButton base::CheckButtonBase::new_with_mnemonic () noexcept
{
  typedef ::GtkCheckButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_button_new_with_mnemonic;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_check_button_get_active (GtkCheckButton* self /*none*/);
// gboolean gtk_check_button_get_active (::GtkCheckButton* self /*none*/);
bool base::CheckButtonBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCheckButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_get_active;
  auto _temp_ret = call_wrap_v ((::GtkCheckButton*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_check_button_get_child (GtkCheckButton* button /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_check_button_get_child (::GtkCheckButton* button /*none*/);
Gtk::Widget base::CheckButtonBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkCheckButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_get_child;
  auto _temp_ret = call_wrap_v ((::GtkCheckButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_check_button_get_inconsistent (GtkCheckButton* check_button /*none*/);
// gboolean gtk_check_button_get_inconsistent (::GtkCheckButton* check_button /*none*/);
bool base::CheckButtonBase::get_inconsistent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCheckButton* check_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_get_inconsistent;
  auto _temp_ret = call_wrap_v ((::GtkCheckButton*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_check_button_get_label (GtkCheckButton* self /*none*/);
// const char* /*none,nullable*/ gtk_check_button_get_label (::GtkCheckButton* self /*none*/);
gi::cstring_v base::CheckButtonBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkCheckButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_get_label;
  auto _temp_ret = call_wrap_v ((::GtkCheckButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_check_button_get_use_underline (GtkCheckButton* self /*none*/);
// gboolean gtk_check_button_get_use_underline (::GtkCheckButton* self /*none*/);
bool base::CheckButtonBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCheckButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkCheckButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_check_button_set_active (GtkCheckButton* self /*none*/, gboolean setting);
// void gtk_check_button_set_active (::GtkCheckButton* self /*none*/, gboolean setting);
void base::CheckButtonBase::set_active (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_active;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_check_button_set_child (GtkCheckButton* button /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_check_button_set_child (::GtkCheckButton* button /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::CheckButtonBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* button, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::CheckButtonBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* button, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_check_button_set_group (GtkCheckButton* self /*none*/, GtkCheckButton* group /*none,nullable*/);
// void gtk_check_button_set_group (::GtkCheckButton* self /*none*/, ::GtkCheckButton* group /*none,nullable*/);
void base::CheckButtonBase::set_group (Gtk::CheckButton group) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* self, ::GtkCheckButton* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none);
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (::GtkCheckButton*) (group_to_c));
}
void base::CheckButtonBase::set_group () noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* self, ::GtkCheckButton* group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_group;
  auto group_to_c = nullptr;
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (::GtkCheckButton*) (group_to_c));
}

// void gtk_check_button_set_inconsistent (GtkCheckButton* check_button /*none*/, gboolean inconsistent);
// void gtk_check_button_set_inconsistent (::GtkCheckButton* check_button /*none*/, gboolean inconsistent);
void base::CheckButtonBase::set_inconsistent (gboolean inconsistent) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* check_button, gboolean inconsistent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_inconsistent;
  auto inconsistent_to_c = inconsistent;
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (gboolean) (inconsistent_to_c));
}

// void gtk_check_button_set_label (GtkCheckButton* self /*none*/, const char* label /*none,nullable*/);
// void gtk_check_button_set_label (::GtkCheckButton* self /*none*/, const char* label /*none,nullable*/);
void base::CheckButtonBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (const char*) (label_to_c));
}
void base::CheckButtonBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_check_button_set_use_underline (GtkCheckButton* self /*none*/, gboolean setting);
// void gtk_check_button_set_use_underline (::GtkCheckButton* self /*none*/, gboolean setting);
void base::CheckButtonBase::set_use_underline (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkCheckButton* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_button_set_use_underline;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkCheckButton*) (gobj_()), (gboolean) (setting_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra_def_impl.hpp>)
#include <gtk/checkbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra_impl.hpp>)
#include <gtk/checkbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CheckButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCheckButtonClass *methods = (::GtkCheckButtonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
  if (init_data.toggled) methods->toggled = (decltype (methods->toggled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::toggled_>;
}

// void CheckButton::activate (GtkCheckButton* check_button /*none*/);
// void CheckButton::activate (::GtkCheckButton* check_button /*none*/);
void CheckButtonClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCheckButton* check_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkCheckButton*) (gobj_()));
}

// void CheckButton::toggled (GtkCheckButton* check_button /*none*/);
// void CheckButton::toggled (::GtkCheckButton* check_button /*none*/);
void CheckButtonClass::toggled_ () noexcept
{
  if (!get_struct_()->toggled) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCheckButton* check_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggled;
  call_wrap_v ((::GtkCheckButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
