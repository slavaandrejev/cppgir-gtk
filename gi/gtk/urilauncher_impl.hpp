// AUTO-GENERATED

#ifndef _GI_GTK_URILAUNCHER_IMPL_HPP_
#define _GI_GTK_URILAUNCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkUriLauncher* /*full*/ gtk_uri_launcher_new (const char* uri /*none,nullable*/);
// ::GtkUriLauncher* /*full*/ gtk_uri_launcher_new (const char* uri /*none,nullable*/);
Gtk::UriLauncher base::UriLauncherBase::new_ (const gi::cstring_v uri) noexcept
{
  typedef ::GtkUriLauncher* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_uri_launcher_new;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::UriLauncher base::UriLauncherBase::new_ () noexcept
{
  typedef ::GtkUriLauncher* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_uri_launcher_new;
  auto uri_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_uri_launcher_get_uri (GtkUriLauncher* self /*none*/);
// const char* /*none,nullable*/ gtk_uri_launcher_get_uri (::GtkUriLauncher* self /*none*/);
gi::cstring_v base::UriLauncherBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkUriLauncher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_get_uri;
  auto _temp_ret = call_wrap_v ((::GtkUriLauncher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_uri_launcher_launch (GtkUriLauncher* self /*none*/, GtkWindow* parent /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_uri_launcher_launch (::GtkUriLauncher* self /*none*/, ::GtkWindow* parent /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::UriLauncherBase::launch (Gtk::Window parent, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkUriLauncher* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_launch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkUriLauncher*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UriLauncherBase::launch (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkUriLauncher* self, ::GtkWindow* parent, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_launch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkUriLauncher*) (gobj_()), (::GtkWindow*) (parent_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gtk_uri_launcher_launch_finish (GtkUriLauncher* self /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_uri_launcher_launch_finish (::GtkUriLauncher* self /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool base::UriLauncherBase::launch_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GtkUriLauncher* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_launch_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkUriLauncher*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriLauncherBase::launch_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkUriLauncher* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_launch_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkUriLauncher*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_uri_launcher_set_uri (GtkUriLauncher* self /*none*/, const char* uri /*none,nullable*/);
// void gtk_uri_launcher_set_uri (::GtkUriLauncher* self /*none*/, const char* uri /*none,nullable*/);
void base::UriLauncherBase::set_uri (const gi::cstring_v uri) noexcept
{
  typedef void (*call_wrap_t) (::GtkUriLauncher* self, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GtkUriLauncher*) (gobj_()), (const char*) (uri_to_c));
}
void base::UriLauncherBase::set_uri () noexcept
{
  typedef void (*call_wrap_t) (::GtkUriLauncher* self, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_uri_launcher_set_uri;
  auto uri_to_c = nullptr;
  call_wrap_v ((::GtkUriLauncher*) (gobj_()), (const char*) (uri_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/urilauncher_extra_def_impl.hpp>)
#include <gtk/urilauncher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/urilauncher_extra_impl.hpp>)
#include <gtk/urilauncher_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void UriLauncherClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkUriLauncherClass *methods = (::GtkUriLauncherClass *) class_struct;
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
