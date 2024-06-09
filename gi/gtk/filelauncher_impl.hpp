// AUTO-GENERATED

#ifndef _GI_GTK_FILELAUNCHER_IMPL_HPP_
#define _GI_GTK_FILELAUNCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkFileLauncher* /*full*/ gtk_file_launcher_new (GFile* file /*none,nullable*/);
// ::GtkFileLauncher* /*full*/ gtk_file_launcher_new (::GFile* file /*none,nullable*/);
Gtk::FileLauncher base::FileLauncherBase::new_ (Gio::File file) noexcept
{
  typedef ::GtkFileLauncher* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_launcher_new;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::FileLauncher base::FileLauncherBase::new_ () noexcept
{
  typedef ::GtkFileLauncher* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_launcher_new;
  auto file_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_file_launcher_get_always_ask (GtkFileLauncher* self /*none*/);
// gboolean gtk_file_launcher_get_always_ask (::GtkFileLauncher* self /*none*/);
bool base::FileLauncherBase::get_always_ask () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileLauncher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_get_always_ask;
  auto _temp_ret = call_wrap_v ((::GtkFileLauncher*) (gobj_()));
  return _temp_ret;
}

// GFile* /*none,nullable*/ gtk_file_launcher_get_file (GtkFileLauncher* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_file_launcher_get_file (::GtkFileLauncher* self /*none*/);
Gio::File base::FileLauncherBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkFileLauncher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_get_file;
  auto _temp_ret = call_wrap_v ((::GtkFileLauncher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_file_launcher_launch (GtkFileLauncher* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_launcher_launch (::GtkFileLauncher* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileLauncherBase::launch (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_launch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileLauncherBase::launch (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_launch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gtk_file_launcher_launch_finish (GtkFileLauncher* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_file_launcher_launch_finish (::GtkFileLauncher* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileLauncherBase::launch_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GtkFileLauncher* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_launch_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileLauncherBase::launch_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileLauncher* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_launch_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_file_launcher_open_containing_folder (GtkFileLauncher* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_file_launcher_open_containing_folder (::GtkFileLauncher* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::FileLauncherBase::open_containing_folder (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_open_containing_folder;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileLauncherBase::open_containing_folder (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_open_containing_folder;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gtk_file_launcher_open_containing_folder_finish (GtkFileLauncher* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_file_launcher_open_containing_folder_finish (::GtkFileLauncher* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::FileLauncherBase::open_containing_folder_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GtkFileLauncher* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_open_containing_folder_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileLauncherBase::open_containing_folder_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileLauncher* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_open_containing_folder_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_file_launcher_set_always_ask (GtkFileLauncher* self /*none*/, gboolean always_ask);
// void gtk_file_launcher_set_always_ask (::GtkFileLauncher* self /*none*/, gboolean always_ask);
void base::FileLauncherBase::set_always_ask (gboolean always_ask) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, gboolean always_ask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_set_always_ask;
  auto always_ask_to_c = always_ask;
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (gboolean) (always_ask_to_c));
}

// void gtk_file_launcher_set_file (GtkFileLauncher* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_file_launcher_set_file (::GtkFileLauncher* self /*none*/, ::GFile* file /*none,nullable*/);
void base::FileLauncherBase::set_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GFile*) (file_to_c));
}
void base::FileLauncherBase::set_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileLauncher* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_launcher_set_file;
  auto file_to_c = nullptr;
  call_wrap_v ((::GtkFileLauncher*) (gobj_()), (::GFile*) (file_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filelauncher_extra_def_impl.hpp>)
#include <gtk/filelauncher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filelauncher_extra_impl.hpp>)
#include <gtk/filelauncher_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileLauncherClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFileLauncherClass *methods = (::GtkFileLauncherClass *) class_struct;
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
