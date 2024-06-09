// AUTO-GENERATED

#ifndef _GI_GTK_COLORDIALOGBUTTON_IMPL_HPP_
#define _GI_GTK_COLORDIALOGBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_color_dialog_button_new (GtkColorDialog* dialog /*full,nullable*/);
// ::GtkColorDialogButton* /*none*/ gtk_color_dialog_button_new (::GtkColorDialog* dialog /*full,nullable*/);
Gtk::ColorDialogButton base::ColorDialogButtonBase::new_ (Gtk::ColorDialog dialog) noexcept
{
  typedef ::GtkColorDialogButton* (*call_wrap_t) (::GtkColorDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_dialog_button_new;
  auto dialog_to_c = gi::unwrap (dialog, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (dialog_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::ColorDialogButton base::ColorDialogButtonBase::new_ () noexcept
{
  typedef ::GtkColorDialogButton* (*call_wrap_t) (::GtkColorDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_dialog_button_new;
  auto dialog_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (dialog_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkColorDialog* /*none,nullable*/ gtk_color_dialog_button_get_dialog (GtkColorDialogButton* self /*none*/);
// ::GtkColorDialog* /*none,nullable*/ gtk_color_dialog_button_get_dialog (::GtkColorDialogButton* self /*none*/);
Gtk::ColorDialog base::ColorDialogButtonBase::get_dialog () noexcept
{
  typedef ::GtkColorDialog* (*call_wrap_t) (::GtkColorDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_button_get_dialog;
  auto _temp_ret = call_wrap_v ((::GtkColorDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GdkRGBA* /*none*/ gtk_color_dialog_button_get_rgba (GtkColorDialogButton* self /*none*/);
// const ::GdkRGBA* /*none*/ gtk_color_dialog_button_get_rgba (::GtkColorDialogButton* self /*none*/);
Gdk::RGBA_Ref base::ColorDialogButtonBase::get_rgba () noexcept
{
  typedef const ::GdkRGBA* (*call_wrap_t) (::GtkColorDialogButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_button_get_rgba;
  auto _temp_ret = call_wrap_v ((::GtkColorDialogButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_color_dialog_button_set_dialog (GtkColorDialogButton* self /*none*/, GtkColorDialog* dialog /*none*/);
// void gtk_color_dialog_button_set_dialog (::GtkColorDialogButton* self /*none*/, ::GtkColorDialog* dialog /*none*/);
void base::ColorDialogButtonBase::set_dialog (Gtk::ColorDialog dialog) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialogButton* self, ::GtkColorDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_button_set_dialog;
  auto dialog_to_c = gi::unwrap (dialog, gi::transfer_none);
  call_wrap_v ((::GtkColorDialogButton*) (gobj_()), (::GtkColorDialog*) (dialog_to_c));
}

// void gtk_color_dialog_button_set_rgba (GtkColorDialogButton* self /*none*/, const GdkRGBA* color /*none*/);
// void gtk_color_dialog_button_set_rgba (::GtkColorDialogButton* self /*none*/, const ::GdkRGBA* color /*none*/);
void base::ColorDialogButtonBase::set_rgba (const Gdk::RGBA_Ref color) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialogButton* self, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_button_set_rgba;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  call_wrap_v ((::GtkColorDialogButton*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colordialogbutton_extra_def_impl.hpp>)
#include <gtk/colordialogbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colordialogbutton_extra_impl.hpp>)
#include <gtk/colordialogbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorDialogButtonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkColorDialogButtonClass *methods = (::GtkColorDialogButtonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
