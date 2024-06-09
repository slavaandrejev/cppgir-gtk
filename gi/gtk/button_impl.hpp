// AUTO-GENERATED

#ifndef _GI_GTK_BUTTON_IMPL_HPP_
#define _GI_GTK_BUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable ButtonBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ButtonBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ gtk_button_new ();
// ::GtkButton* /*none*/ gtk_button_new ();
Gtk::Button base::ButtonBase::new_ () noexcept
{
  typedef ::GtkButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_button_new_from_icon_name (const char* icon_name /*none*/);
// ::GtkButton* /*none*/ gtk_button_new_from_icon_name (const char* icon_name /*none*/);
Gtk::Button base::ButtonBase::new_from_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_from_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_button_new_with_label (const char* label /*none*/);
// ::GtkButton* /*none*/ gtk_button_new_with_label (const char* label /*none*/);
Gtk::Button base::ButtonBase::new_with_label (const gi::cstring_v label) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_button_new_with_mnemonic (const char* label /*none*/);
// ::GtkButton* /*none*/ gtk_button_new_with_mnemonic (const char* label /*none*/);
Gtk::Button base::ButtonBase::new_with_mnemonic (const gi::cstring_v label) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_button_get_can_shrink (GtkButton* button /*none*/);
// gboolean gtk_button_get_can_shrink (::GtkButton* button /*none*/);
bool base::ButtonBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_button_get_child (GtkButton* button /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_button_get_child (::GtkButton* button /*none*/);
Gtk::Widget base::ButtonBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_get_child;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_button_get_has_frame (GtkButton* button /*none*/);
// gboolean gtk_button_get_has_frame (::GtkButton* button /*none*/);
bool base::ButtonBase::get_has_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_get_has_frame;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_button_get_icon_name (GtkButton* button /*none*/);
// const char* /*none,nullable*/ gtk_button_get_icon_name (::GtkButton* button /*none*/);
gi::cstring_v base::ButtonBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_button_get_label (GtkButton* button /*none*/);
// const char* /*none,nullable*/ gtk_button_get_label (::GtkButton* button /*none*/);
gi::cstring_v base::ButtonBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_get_label;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_button_get_use_underline (GtkButton* button /*none*/);
// gboolean gtk_button_get_use_underline (::GtkButton* button /*none*/);
bool base::ButtonBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_button_set_can_shrink (GtkButton* button /*none*/, gboolean can_shrink);
// void gtk_button_set_can_shrink (::GtkButton* button /*none*/, gboolean can_shrink);
void base::ButtonBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::GtkButton*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void gtk_button_set_child (GtkButton* button /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_button_set_child (::GtkButton* button /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ButtonBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ButtonBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkButton*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_button_set_has_frame (GtkButton* button /*none*/, gboolean has_frame);
// void gtk_button_set_has_frame (::GtkButton* button /*none*/, gboolean has_frame);
void base::ButtonBase::set_has_frame (gboolean has_frame) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, gboolean has_frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_has_frame;
  auto has_frame_to_c = has_frame;
  call_wrap_v ((::GtkButton*) (gobj_()), (gboolean) (has_frame_to_c));
}

// void gtk_button_set_icon_name (GtkButton* button /*none*/, const char* icon_name /*none*/);
// void gtk_button_set_icon_name (::GtkButton* button /*none*/, const char* icon_name /*none*/);
void base::ButtonBase::set_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::GtkButton*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_button_set_label (GtkButton* button /*none*/, const char* label /*none*/);
// void gtk_button_set_label (::GtkButton* button /*none*/, const char* label /*none*/);
void base::ButtonBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkButton*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_button_set_use_underline (GtkButton* button /*none*/, gboolean use_underline);
// void gtk_button_set_use_underline (::GtkButton* button /*none*/, gboolean use_underline);
void base::ButtonBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_button_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::GtkButton*) (gobj_()), (gboolean) (use_underline_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/button_extra_def_impl.hpp>)
#include <gtk/button_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/button_extra_impl.hpp>)
#include <gtk/button_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkButtonClass *methods = (::GtkButtonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
  if (init_data.clicked) methods->clicked = (decltype (methods->clicked)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::clicked_>;
}

// void Button::activate (GtkButton* button /*none*/);
// void Button::activate (::GtkButton* button /*none*/);
void ButtonClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkButton*) (gobj_()));
}

// void Button::clicked (GtkButton* button /*none*/);
// void Button::clicked (::GtkButton* button /*none*/);
void ButtonClass::clicked_ () noexcept
{
  if (!get_struct_()->clicked) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clicked;
  call_wrap_v ((::GtkButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
