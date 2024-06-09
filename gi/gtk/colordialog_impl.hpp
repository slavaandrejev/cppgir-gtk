// AUTO-GENERATED

#ifndef _GI_GTK_COLORDIALOG_IMPL_HPP_
#define _GI_GTK_COLORDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkColorDialog* /*full*/ gtk_color_dialog_new ();
// ::GtkColorDialog* /*full*/ gtk_color_dialog_new ();
Gtk::ColorDialog base::ColorDialogBase::new_ () noexcept
{
  typedef ::GtkColorDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_color_dialog_choose_rgba (GtkColorDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, const GdkRGBA* initial_color /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_color_dialog_choose_rgba (::GtkColorDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, const ::GdkRGBA* initial_color /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ColorDialogBase::choose_rgba (Gtk::Window parent, const Gdk::RGBA_Ref initial_color, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialog* self, ::GtkWindow* parent, const ::GdkRGBA* initial_color, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_choose_rgba;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto initial_color_to_c = gi::unwrap (initial_color, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkColorDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (const ::GdkRGBA*) (initial_color_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ColorDialogBase::choose_rgba (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialog* self, ::GtkWindow* parent, const ::GdkRGBA* initial_color, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_choose_rgba;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto initial_color_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkColorDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (const ::GdkRGBA*) (initial_color_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GdkRGBA* /*full,nullable*/ gtk_color_dialog_choose_rgba_finish (GtkColorDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GdkRGBA* /*full,nullable*/ gtk_color_dialog_choose_rgba_finish (::GtkColorDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gdk::RGBA base::ColorDialogBase::choose_rgba_finish (Gio::AsyncResult result)
{
  typedef ::GdkRGBA* (*call_wrap_t) (::GtkColorDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_choose_rgba_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gdk::RGBA base::ColorDialogBase::choose_rgba_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GdkRGBA* (*call_wrap_t) (::GtkColorDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_choose_rgba_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_color_dialog_get_modal (GtkColorDialog* self /*none*/);
// gboolean gtk_color_dialog_get_modal (::GtkColorDialog* self /*none*/);
bool base::ColorDialogBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_color_dialog_get_title (GtkColorDialog* self /*none*/);
// const char* /*none*/ gtk_color_dialog_get_title (::GtkColorDialog* self /*none*/);
gi::cstring_v base::ColorDialogBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColorDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_get_title;
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_color_dialog_get_with_alpha (GtkColorDialog* self /*none*/);
// gboolean gtk_color_dialog_get_with_alpha (::GtkColorDialog* self /*none*/);
bool base::ColorDialogBase::get_with_alpha () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_get_with_alpha;
  auto _temp_ret = call_wrap_v ((::GtkColorDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_color_dialog_set_modal (GtkColorDialog* self /*none*/, gboolean modal);
// void gtk_color_dialog_set_modal (::GtkColorDialog* self /*none*/, gboolean modal);
void base::ColorDialogBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialog* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkColorDialog*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_color_dialog_set_title (GtkColorDialog* self /*none*/, const char* title /*none*/);
// void gtk_color_dialog_set_title (::GtkColorDialog* self /*none*/, const char* title /*none*/);
void base::ColorDialogBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialog* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkColorDialog*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_color_dialog_set_with_alpha (GtkColorDialog* self /*none*/, gboolean with_alpha);
// void gtk_color_dialog_set_with_alpha (::GtkColorDialog* self /*none*/, gboolean with_alpha);
void base::ColorDialogBase::set_with_alpha (gboolean with_alpha) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorDialog* self, gboolean with_alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_dialog_set_with_alpha;
  auto with_alpha_to_c = with_alpha;
  call_wrap_v ((::GtkColorDialog*) (gobj_()), (gboolean) (with_alpha_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colordialog_extra_def_impl.hpp>)
#include <gtk/colordialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colordialog_extra_impl.hpp>)
#include <gtk/colordialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkColorDialogClass *methods = (::GtkColorDialogClass *) class_struct;
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
