// AUTO-GENERATED

#ifndef _GI_GTK_FILEDIALOG_IMPL_HPP_
#define _GI_GTK_FILEDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkFileDialog* /*full*/ gtk_file_dialog_new ();
// ::GtkFileDialog* /*full*/ gtk_file_dialog_new ();
Gtk::FileDialog base::FileDialogBase::new_ () noexcept
{
  typedef ::GtkFileDialog* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_dialog_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_file_dialog_get_accept_label (GtkFileDialog* self /*none*/);
// const char* /*none,nullable*/ gtk_file_dialog_get_accept_label (::GtkFileDialog* self /*none*/);
gi::cstring_v base::FileDialogBase::get_accept_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_accept_label;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkFileFilter* /*none,nullable*/ gtk_file_dialog_get_default_filter (GtkFileDialog* self /*none*/);
// ::GtkFileFilter* /*none,nullable*/ gtk_file_dialog_get_default_filter (::GtkFileDialog* self /*none*/);
Gtk::FileFilter base::FileDialogBase::get_default_filter () noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_default_filter;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*none,nullable*/ gtk_file_dialog_get_filters (GtkFileDialog* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_file_dialog_get_filters (::GtkFileDialog* self /*none*/);
Gio::ListModel base::FileDialogBase::get_filters () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_filters;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFile* /*none,nullable*/ gtk_file_dialog_get_initial_file (GtkFileDialog* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_file_dialog_get_initial_file (::GtkFileDialog* self /*none*/);
Gio::File base::FileDialogBase::get_initial_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_initial_file;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFile* /*none,nullable*/ gtk_file_dialog_get_initial_folder (GtkFileDialog* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_file_dialog_get_initial_folder (::GtkFileDialog* self /*none*/);
Gio::File base::FileDialogBase::get_initial_folder () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_initial_folder;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_file_dialog_get_initial_name (GtkFileDialog* self /*none*/);
// const char* /*none,nullable*/ gtk_file_dialog_get_initial_name (::GtkFileDialog* self /*none*/);
gi::cstring_v base::FileDialogBase::get_initial_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_initial_name;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_file_dialog_get_modal (GtkFileDialog* self /*none*/);
// gboolean gtk_file_dialog_get_modal (::GtkFileDialog* self /*none*/);
bool base::FileDialogBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_file_dialog_get_title (GtkFileDialog* self /*none*/);
// const char* /*none*/ gtk_file_dialog_get_title (::GtkFileDialog* self /*none*/);
gi::cstring_v base::FileDialogBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_get_title;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_file_dialog_open (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_open (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileDialogBase::open (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileDialogBase::open (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full,nullable*/ gtk_file_dialog_open_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full,nullable*/ gtk_file_dialog_open_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::File base::FileDialogBase::open_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileDialogBase::open_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_dialog_open_multiple (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_open_multiple (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileDialogBase::open_multiple (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open_multiple;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileDialogBase::open_multiple (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open_multiple;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GListModel* /*full,nullable*/ gtk_file_dialog_open_multiple_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GListModel* /*full,nullable*/ gtk_file_dialog_open_multiple_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::ListModel base::FileDialogBase::open_multiple_finish (Gio::AsyncResult result)
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open_multiple_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::ListModel base::FileDialogBase::open_multiple_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_open_multiple_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_dialog_save (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_save (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileDialogBase::save (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_save;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileDialogBase::save (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_save;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full,nullable*/ gtk_file_dialog_save_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full,nullable*/ gtk_file_dialog_save_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::File base::FileDialogBase::save_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_save_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileDialogBase::save_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_save_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_dialog_select_folder (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_select_folder (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileDialogBase::select_folder (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_folder;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileDialogBase::select_folder (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_folder;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* /*full,nullable*/ gtk_file_dialog_select_folder_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GFile* /*full,nullable*/ gtk_file_dialog_select_folder_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::File base::FileDialogBase::select_folder_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_folder_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::File base::FileDialogBase::select_folder_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_folder_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_dialog_select_multiple_folders (GtkFileDialog* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_dialog_select_multiple_folders (::GtkFileDialog* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileDialogBase::select_multiple_folders (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_multiple_folders;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileDialogBase::select_multiple_folders (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_multiple_folders;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GListModel* /*full,nullable*/ gtk_file_dialog_select_multiple_folders_finish (GtkFileDialog* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GListModel* /*full,nullable*/ gtk_file_dialog_select_multiple_folders_finish (::GtkFileDialog* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
Gio::ListModel base::FileDialogBase::select_multiple_folders_finish (Gio::AsyncResult result)
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_multiple_folders_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::ListModel base::FileDialogBase::select_multiple_folders_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkFileDialog* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_select_multiple_folders_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_dialog_set_accept_label (GtkFileDialog* self /*none*/, const char* accept_label /*none,nullable*/);
// void gtk_file_dialog_set_accept_label (::GtkFileDialog* self /*none*/, const char* accept_label /*none,nullable*/);
void base::FileDialogBase::set_accept_label (const gi::cstring_v accept_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_accept_label;
  auto accept_label_to_c = gi::unwrap (accept_label, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (const char*) (accept_label_to_c));
}
void base::FileDialogBase::set_accept_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_accept_label;
  auto accept_label_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (const char*) (accept_label_to_c));
}

// void gtk_file_dialog_set_default_filter (GtkFileDialog* self /*none*/, GtkFileFilter* filter /*none,nullable*/);
// void gtk_file_dialog_set_default_filter (::GtkFileDialog* self /*none*/, ::GtkFileFilter* filter /*none,nullable*/);
void base::FileDialogBase::set_default_filter (Gtk::FileFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_default_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}
void base::FileDialogBase::set_default_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_default_filter;
  auto filter_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GtkFileFilter*) (filter_to_c));
}

// void gtk_file_dialog_set_filters (GtkFileDialog* self /*none*/, GListModel* filters /*none,nullable*/);
// void gtk_file_dialog_set_filters (::GtkFileDialog* self /*none*/, ::GListModel* filters /*none,nullable*/);
void base::FileDialogBase::set_filters (Gio::ListModel filters) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GListModel* filters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_filters;
  auto filters_to_c = gi::unwrap (filters, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GListModel*) (filters_to_c));
}
void base::FileDialogBase::set_filters () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GListModel* filters);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_filters;
  auto filters_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GListModel*) (filters_to_c));
}

// void gtk_file_dialog_set_initial_file (GtkFileDialog* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_file_dialog_set_initial_file (::GtkFileDialog* self /*none*/, ::GFile* file /*none,nullable*/);
void base::FileDialogBase::set_initial_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_initial_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GFile*) (file_to_c));
}
void base::FileDialogBase::set_initial_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_initial_file;
  auto file_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_file_dialog_set_initial_folder (GtkFileDialog* self /*none*/, GFile* folder /*none,nullable*/);
// void gtk_file_dialog_set_initial_folder (::GtkFileDialog* self /*none*/, ::GFile* folder /*none,nullable*/);
void base::FileDialogBase::set_initial_folder (Gio::File folder) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GFile* folder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_initial_folder;
  auto folder_to_c = gi::unwrap (folder, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GFile*) (folder_to_c));
}
void base::FileDialogBase::set_initial_folder () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, ::GFile* folder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_initial_folder;
  auto folder_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (::GFile*) (folder_to_c));
}

// void gtk_file_dialog_set_initial_name (GtkFileDialog* self /*none*/, const char* name /*none,nullable*/);
// void gtk_file_dialog_set_initial_name (::GtkFileDialog* self /*none*/, const char* name /*none,nullable*/);
void base::FileDialogBase::set_initial_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_initial_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (const char*) (name_to_c));
}
void base::FileDialogBase::set_initial_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_initial_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_file_dialog_set_modal (GtkFileDialog* self /*none*/, gboolean modal);
// void gtk_file_dialog_set_modal (::GtkFileDialog* self /*none*/, gboolean modal);
void base::FileDialogBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_file_dialog_set_title (GtkFileDialog* self /*none*/, const char* title /*none*/);
// void gtk_file_dialog_set_title (::GtkFileDialog* self /*none*/, const char* title /*none*/);
void base::FileDialogBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileDialog* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_dialog_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkFileDialog*) (gobj_()), (const char*) (title_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filedialog_extra_def_impl.hpp>)
#include <gtk/filedialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filedialog_extra_impl.hpp>)
#include <gtk/filedialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileDialogClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFileDialogClass *methods = (::GtkFileDialogClass *) class_struct;
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
