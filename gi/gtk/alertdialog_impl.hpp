// AUTO-GENERATED

#ifndef _GI_GTK_ALERTDIALOG_IMPL_HPP_
#define _GI_GTK_ALERTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkAlertDialog* /*full*/ gtk_alert_dialog_new (const char* format /*none*/,  ..._ /*none*/);
// ::GtkAlertDialog* /*full*/ gtk_alert_dialog_new (const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_alert_dialog_choose (GtkAlertDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_alert_dialog_choose (::GtkAlertDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::AlertDialogBase::choose (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_choose;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AlertDialogBase::choose (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_choose;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// int gtk_alert_dialog_choose_finish (GtkAlertDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gint gtk_alert_dialog_choose_finish (::GtkAlertDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gint base::AlertDialogBase::choose_finish (Gio::AsyncResult result)
{
  typedef gint (*call_wrap_t) (::GtkAlertDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_choose_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::AlertDialogBase::choose_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAlertDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_choose_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// const char* const* /*none,nullable*/ gtk_alert_dialog_get_buttons (GtkAlertDialog* self /*none*/);
// const char** /*none,nullable*/ gtk_alert_dialog_get_buttons (::GtkAlertDialog* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::AlertDialogBase::get_buttons () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_get_buttons;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// int gtk_alert_dialog_get_cancel_button (GtkAlertDialog* self /*none*/);
// gint gtk_alert_dialog_get_cancel_button (::GtkAlertDialog* self /*none*/);
gint base::AlertDialogBase::get_cancel_button () noexcept
{
  typedef gint (*call_wrap_t) (::GtkAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_get_cancel_button;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()));
  return _temp_ret;
}

// int gtk_alert_dialog_get_default_button (GtkAlertDialog* self /*none*/);
// gint gtk_alert_dialog_get_default_button (::GtkAlertDialog* self /*none*/);
gint base::AlertDialogBase::get_default_button () noexcept
{
  typedef gint (*call_wrap_t) (::GtkAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_get_default_button;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_alert_dialog_get_detail (GtkAlertDialog* self /*none*/);
// const char* /*none*/ gtk_alert_dialog_get_detail (::GtkAlertDialog* self /*none*/);
gi::cstring_v base::AlertDialogBase::get_detail () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_get_detail;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_alert_dialog_get_message (GtkAlertDialog* self /*none*/);
// const char* /*none*/ gtk_alert_dialog_get_message (::GtkAlertDialog* self /*none*/);
gi::cstring_v base::AlertDialogBase::get_message () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_get_message;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_alert_dialog_get_modal (GtkAlertDialog* self /*none*/);
// gboolean gtk_alert_dialog_get_modal (::GtkAlertDialog* self /*none*/);
bool base::AlertDialogBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAlertDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkAlertDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_alert_dialog_set_buttons (GtkAlertDialog* self /*none*/, const char* const* labels /*none*/);
// void gtk_alert_dialog_set_buttons (::GtkAlertDialog* self /*none*/, const char** labels /*none*/);
void base::AlertDialogBase::set_buttons (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> labels) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, const char** labels);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_set_buttons;
  auto labels_w = unwrap (std::move(labels), gi::transfer_none);
  auto labels_to_c = labels_w;
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (const char**) (labels_to_c));
}

// void gtk_alert_dialog_set_cancel_button (GtkAlertDialog* self /*none*/, int button);
// void gtk_alert_dialog_set_cancel_button (::GtkAlertDialog* self /*none*/, gint button);
void base::AlertDialogBase::set_cancel_button (gint button) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, gint button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_set_cancel_button;
  auto button_to_c = button;
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (gint) (button_to_c));
}

// void gtk_alert_dialog_set_default_button (GtkAlertDialog* self /*none*/, int button);
// void gtk_alert_dialog_set_default_button (::GtkAlertDialog* self /*none*/, gint button);
void base::AlertDialogBase::set_default_button (gint button) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, gint button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_set_default_button;
  auto button_to_c = button;
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (gint) (button_to_c));
}

// void gtk_alert_dialog_set_detail (GtkAlertDialog* self /*none*/, const char* detail /*none*/);
// void gtk_alert_dialog_set_detail (::GtkAlertDialog* self /*none*/, const char* detail /*none*/);
void base::AlertDialogBase::set_detail (const gi::cstring_v detail) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, const char* detail);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_set_detail;
  auto detail_to_c = gi::unwrap (detail, gi::transfer_none);
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (const char*) (detail_to_c));
}

// void gtk_alert_dialog_set_message (GtkAlertDialog* self /*none*/, const char* message /*none*/);
// void gtk_alert_dialog_set_message (::GtkAlertDialog* self /*none*/, const char* message /*none*/);
void base::AlertDialogBase::set_message (const gi::cstring_v message) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_set_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (const char*) (message_to_c));
}

// void gtk_alert_dialog_set_modal (GtkAlertDialog* self /*none*/, gboolean modal);
// void gtk_alert_dialog_set_modal (::GtkAlertDialog* self /*none*/, gboolean modal);
void base::AlertDialogBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_alert_dialog_show (GtkAlertDialog* self /*none*/, GtkWindow* parent /*none,nullable*/);
// void gtk_alert_dialog_show (::GtkAlertDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/);
void base::AlertDialogBase::show (Gtk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_show;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (::GtkWindow*) (parent_to_c));
}
void base::AlertDialogBase::show () noexcept
{
  typedef void (*call_wrap_t) (::GtkAlertDialog* self, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alert_dialog_show;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkAlertDialog*) (gobj_()), (::GtkWindow*) (parent_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/alertdialog_extra_def_impl.hpp>)
#include <gtk/alertdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/alertdialog_extra_impl.hpp>)
#include <gtk/alertdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AlertDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkAlertDialogClass *methods = (::GtkAlertDialogClass *) class_struct;
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
