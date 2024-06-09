// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESSLAUNCHER_IMPL_HPP_
#define _GI_GIO_SUBPROCESSLAUNCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSubprocessLauncher* /*full*/ g_subprocess_launcher_new (GSubprocessFlags flags);
// ::GSubprocessLauncher* /*full*/ g_subprocess_launcher_new (::GSubprocessFlags flags);
Gio::SubprocessLauncher base::SubprocessLauncherBase::new_ (Gio::SubprocessFlags flags) noexcept
{
  typedef ::GSubprocessLauncher* (*call_wrap_t) (::GSubprocessFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_new;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GSubprocessFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_subprocess_launcher_close (GSubprocessLauncher* self /*none*/);
// void g_subprocess_launcher_close (::GSubprocessLauncher* self /*none*/);
void base::SubprocessLauncherBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_close;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()));
}

// const gchar* /*none,nullable*/ g_subprocess_launcher_getenv (GSubprocessLauncher* self /*none*/, const gchar* variable /*none*/);
// const char* /*none,nullable*/ g_subprocess_launcher_getenv (::GSubprocessLauncher* self /*none*/, const char* variable /*none*/);
gi::cstring_v base::SubprocessLauncherBase::getenv (const gi::cstring_v variable) noexcept
{
  typedef const char* (*call_wrap_t) (::GSubprocessLauncher* self, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_getenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (variable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_subprocess_launcher_set_child_setup (GSubprocessLauncher* self /*none*/, GSpawnChildSetupFunc child_setup /*none*/, gpointer user_data, GDestroyNotify destroy_notify /*none*/);
// void g_subprocess_launcher_set_child_setup (::GSubprocessLauncher* self /*none*/, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify /*none*/);
void base::SubprocessLauncherBase::set_child_setup (GLib::SpawnChildSetupFunc child_setup) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_child_setup;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_notified) : nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (GLib::DestroyNotify::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->destroy : nullptr));
}

// void g_subprocess_launcher_set_cwd (GSubprocessLauncher* self /*none*/, const gchar* cwd /*none*/);
// void g_subprocess_launcher_set_cwd (::GSubprocessLauncher* self /*none*/, const char* cwd /*none*/);
void base::SubprocessLauncherBase::set_cwd (const gi::cstring_v cwd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* cwd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_cwd;
  auto cwd_to_c = gi::unwrap (cwd, gi::transfer_none);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (cwd_to_c));
}

// void g_subprocess_launcher_set_environ (GSubprocessLauncher* self /*none*/, gchar** env /*none*/);
// void g_subprocess_launcher_set_environ (::GSubprocessLauncher* self /*none*/, char** env /*none*/);
void base::SubprocessLauncherBase::set_environ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> env) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, char** env);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_environ;
  auto env_w = unwrap (std::move(env), gi::transfer_none);
  auto env_to_c = env_w;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (char**) (env_to_c));
}

// void g_subprocess_launcher_set_flags (GSubprocessLauncher* self /*none*/, GSubprocessFlags flags);
// void g_subprocess_launcher_set_flags (::GSubprocessLauncher* self /*none*/, ::GSubprocessFlags flags);
void base::SubprocessLauncherBase::set_flags (Gio::SubprocessFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, ::GSubprocessFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (::GSubprocessFlags) (flags_to_c));
}

// void g_subprocess_launcher_set_stderr_file_path (GSubprocessLauncher* self /*none*/, const gchar* path /*none,nullable*/);
// void g_subprocess_launcher_set_stderr_file_path (::GSubprocessLauncher* self /*none*/, const char* path /*none,nullable*/);
void base::SubprocessLauncherBase::set_stderr_file_path (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_stderr_file_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}
void base::SubprocessLauncherBase::set_stderr_file_path () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_stderr_file_path;
  auto path_to_c = nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}

// void g_subprocess_launcher_set_stdin_file_path (GSubprocessLauncher* self /*none*/, const gchar* path /*none,nullable*/);
// void g_subprocess_launcher_set_stdin_file_path (::GSubprocessLauncher* self /*none*/, const char* path /*none,nullable*/);
void base::SubprocessLauncherBase::set_stdin_file_path (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_stdin_file_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}
void base::SubprocessLauncherBase::set_stdin_file_path () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_stdin_file_path;
  auto path_to_c = nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}

// void g_subprocess_launcher_set_stdout_file_path (GSubprocessLauncher* self /*none*/, const gchar* path /*none,nullable*/);
// void g_subprocess_launcher_set_stdout_file_path (::GSubprocessLauncher* self /*none*/, const char* path /*none,nullable*/);
void base::SubprocessLauncherBase::set_stdout_file_path (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_stdout_file_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}
void base::SubprocessLauncherBase::set_stdout_file_path () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_set_stdout_file_path;
  auto path_to_c = nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}

// void g_subprocess_launcher_setenv (GSubprocessLauncher* self /*none*/, const gchar* variable /*none*/, const gchar* value /*none*/, gboolean overwrite);
// void g_subprocess_launcher_setenv (::GSubprocessLauncher* self /*none*/, const char* variable /*none*/, const char* value /*none*/, gboolean overwrite);
void base::SubprocessLauncherBase::setenv (const gi::cstring_v variable, const gi::cstring_v value, gboolean overwrite) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* variable, const char* value, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_setenv;
  auto overwrite_to_c = overwrite;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (variable_to_c), (const char*) (value_to_c), (gboolean) (overwrite_to_c));
}

// GSubprocess* /*full*/ g_subprocess_launcher_spawn (GSubprocessLauncher* self /*none*/, GError** error /*none*/, const gchar* argv0 /*none*/,  ..._ /*none*/);
// ::GSubprocess* /*full*/ g_subprocess_launcher_spawn (::GSubprocessLauncher* self /*none*/, ::GError* error /*none*/, const char* argv0 /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GSubprocess* /*full*/ g_subprocess_launcher_spawnv (GSubprocessLauncher* self /*none*/, const gchar* const* argv /*none*/, GError ** error);
// ::GSubprocess* /*full*/ g_subprocess_launcher_spawnv (::GSubprocessLauncher* self /*none*/, const char** argv /*none*/, GError ** error);
Gio::Subprocess base::SubprocessLauncherBase::spawnv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv)
{
  typedef ::GSubprocess* (*call_wrap_t) (::GSubprocessLauncher* self, const char** argv, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_spawnv;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char**) (argv_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gio::Subprocess base::SubprocessLauncherBase::spawnv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, GLib::Error * _error) noexcept
{
  typedef ::GSubprocess* (*call_wrap_t) (::GSubprocessLauncher* self, const char** argv, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_spawnv;
  auto argv_w = unwrap (std::move(argv), gi::transfer_none);
  auto argv_to_c = argv_w;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char**) (argv_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_subprocess_launcher_take_fd (GSubprocessLauncher* self /*none*/, gint source_fd, gint target_fd);
// void g_subprocess_launcher_take_fd (::GSubprocessLauncher* self /*none*/, gint source_fd, gint target_fd);
void base::SubprocessLauncherBase::take_fd (gint source_fd, gint target_fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint source_fd, gint target_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_take_fd;
  auto target_fd_to_c = target_fd;
  auto source_fd_to_c = source_fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (source_fd_to_c), (gint) (target_fd_to_c));
}

// void g_subprocess_launcher_take_stderr_fd (GSubprocessLauncher* self /*none*/, gint fd);
// void g_subprocess_launcher_take_stderr_fd (::GSubprocessLauncher* self /*none*/, gint fd);
void base::SubprocessLauncherBase::take_stderr_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_take_stderr_fd;
  auto fd_to_c = fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (fd_to_c));
}

// void g_subprocess_launcher_take_stdin_fd (GSubprocessLauncher* self /*none*/, gint fd);
// void g_subprocess_launcher_take_stdin_fd (::GSubprocessLauncher* self /*none*/, gint fd);
void base::SubprocessLauncherBase::take_stdin_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_take_stdin_fd;
  auto fd_to_c = fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (fd_to_c));
}

// void g_subprocess_launcher_take_stdout_fd (GSubprocessLauncher* self /*none*/, gint fd);
// void g_subprocess_launcher_take_stdout_fd (::GSubprocessLauncher* self /*none*/, gint fd);
void base::SubprocessLauncherBase::take_stdout_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_take_stdout_fd;
  auto fd_to_c = fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (fd_to_c));
}

// void g_subprocess_launcher_unsetenv (GSubprocessLauncher* self /*none*/, const gchar* variable /*none*/);
// void g_subprocess_launcher_unsetenv (::GSubprocessLauncher* self /*none*/, const char* variable /*none*/);
void base::SubprocessLauncherBase::unsetenv (const gi::cstring_v variable) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_subprocess_launcher_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (variable_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra_def_impl.hpp>)
#include <gio/subprocesslauncher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra_impl.hpp>)
#include <gio/subprocesslauncher_extra_impl.hpp>
#endif
#endif

#endif
