// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESSLAUNCHER_HPP_
#define _GI_GIO_SUBPROCESSLAUNCHER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Subprocess;

class SubprocessLauncher;

namespace base {


#define GI_GIO_SUBPROCESSLAUNCHER_BASE base::SubprocessLauncherBase
class SubprocessLauncherBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSubprocessLauncher BaseObjectType;

SubprocessLauncherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_subprocess_launcher_get_type(); } 

// GSubprocessLauncher* /*full*/ g_subprocess_launcher_new (GSubprocessFlags flags);
// ::GSubprocessLauncher* /*full*/ g_subprocess_launcher_new (::GSubprocessFlags flags);
static GI_INLINE_DECL Gio::SubprocessLauncher new_ (Gio::SubprocessFlags flags) noexcept;

// void g_subprocess_launcher_close (GSubprocessLauncher* self /*none*/);
// void g_subprocess_launcher_close (::GSubprocessLauncher* self /*none*/);
GI_INLINE_DECL void close () noexcept;

// const gchar* /*none,nullable*/ g_subprocess_launcher_getenv (GSubprocessLauncher* self /*none*/, const gchar* variable /*none*/);
// const char* /*none,nullable*/ g_subprocess_launcher_getenv (::GSubprocessLauncher* self /*none*/, const char* variable /*none*/);
GI_INLINE_DECL gi::cstring_v getenv (const gi::cstring_v variable) noexcept;

// void g_subprocess_launcher_set_child_setup (GSubprocessLauncher* self /*none*/, GSpawnChildSetupFunc child_setup /*none*/, gpointer user_data, GDestroyNotify destroy_notify /*none*/);
// void g_subprocess_launcher_set_child_setup (::GSubprocessLauncher* self /*none*/, GLib::SpawnChildSetupFunc::cfunction_type child_setup /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify /*none*/);
GI_INLINE_DECL void set_child_setup (GLib::SpawnChildSetupFunc child_setup) noexcept;

// void g_subprocess_launcher_set_cwd (GSubprocessLauncher* self /*none*/, const gchar* cwd /*none*/);
// void g_subprocess_launcher_set_cwd (::GSubprocessLauncher* self /*none*/, const char* cwd /*none*/);
GI_INLINE_DECL void set_cwd (const gi::cstring_v cwd) noexcept;

// void g_subprocess_launcher_set_environ (GSubprocessLauncher* self /*none*/, gchar** env /*none*/);
// void g_subprocess_launcher_set_environ (::GSubprocessLauncher* self /*none*/, char** env /*none*/);
GI_INLINE_DECL void set_environ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> env) noexcept;

// void g_subprocess_launcher_set_flags (GSubprocessLauncher* self /*none*/, GSubprocessFlags flags);
// void g_subprocess_launcher_set_flags (::GSubprocessLauncher* self /*none*/, ::GSubprocessFlags flags);
GI_INLINE_DECL void set_flags (Gio::SubprocessFlags flags) noexcept;

// void g_subprocess_launcher_set_stderr_file_path (GSubprocessLauncher* self /*none*/, const gchar* path /*none,nullable*/);
// void g_subprocess_launcher_set_stderr_file_path (::GSubprocessLauncher* self /*none*/, const char* path /*none,nullable*/);
GI_INLINE_DECL void set_stderr_file_path (const gi::cstring_v path) noexcept;
GI_INLINE_DECL void set_stderr_file_path () noexcept;

// void g_subprocess_launcher_set_stdin_file_path (GSubprocessLauncher* self /*none*/, const gchar* path /*none,nullable*/);
// void g_subprocess_launcher_set_stdin_file_path (::GSubprocessLauncher* self /*none*/, const char* path /*none,nullable*/);
GI_INLINE_DECL void set_stdin_file_path (const gi::cstring_v path) noexcept;
GI_INLINE_DECL void set_stdin_file_path () noexcept;

// void g_subprocess_launcher_set_stdout_file_path (GSubprocessLauncher* self /*none*/, const gchar* path /*none,nullable*/);
// void g_subprocess_launcher_set_stdout_file_path (::GSubprocessLauncher* self /*none*/, const char* path /*none,nullable*/);
GI_INLINE_DECL void set_stdout_file_path (const gi::cstring_v path) noexcept;
GI_INLINE_DECL void set_stdout_file_path () noexcept;

// void g_subprocess_launcher_setenv (GSubprocessLauncher* self /*none*/, const gchar* variable /*none*/, const gchar* value /*none*/, gboolean overwrite);
// void g_subprocess_launcher_setenv (::GSubprocessLauncher* self /*none*/, const char* variable /*none*/, const char* value /*none*/, gboolean overwrite);
GI_INLINE_DECL void setenv (const gi::cstring_v variable, const gi::cstring_v value, gboolean overwrite) noexcept;

// GSubprocess* /*full*/ g_subprocess_launcher_spawn (GSubprocessLauncher* self /*none*/, GError** error /*none*/, const gchar* argv0 /*none*/,  ..._ /*none*/);
// ::GSubprocess* /*full*/ g_subprocess_launcher_spawn (::GSubprocessLauncher* self /*none*/, ::GError* error /*none*/, const char* argv0 /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GSubprocess* /*full*/ g_subprocess_launcher_spawnv (GSubprocessLauncher* self /*none*/, const gchar* const* argv /*none*/, GError ** error);
// ::GSubprocess* /*full*/ g_subprocess_launcher_spawnv (::GSubprocessLauncher* self /*none*/, const char** argv /*none*/, GError ** error);
GI_INLINE_DECL Gio::Subprocess spawnv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv);
GI_INLINE_DECL Gio::Subprocess spawnv (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, GLib::Error * _error) noexcept;

// void g_subprocess_launcher_take_fd (GSubprocessLauncher* self /*none*/, gint source_fd, gint target_fd);
// void g_subprocess_launcher_take_fd (::GSubprocessLauncher* self /*none*/, gint source_fd, gint target_fd);
GI_INLINE_DECL void take_fd (gint source_fd, gint target_fd) noexcept;

// void g_subprocess_launcher_take_stderr_fd (GSubprocessLauncher* self /*none*/, gint fd);
// void g_subprocess_launcher_take_stderr_fd (::GSubprocessLauncher* self /*none*/, gint fd);
GI_INLINE_DECL void take_stderr_fd (gint fd) noexcept;

// void g_subprocess_launcher_take_stdin_fd (GSubprocessLauncher* self /*none*/, gint fd);
// void g_subprocess_launcher_take_stdin_fd (::GSubprocessLauncher* self /*none*/, gint fd);
GI_INLINE_DECL void take_stdin_fd (gint fd) noexcept;

// void g_subprocess_launcher_take_stdout_fd (GSubprocessLauncher* self /*none*/, gint fd);
// void g_subprocess_launcher_take_stdout_fd (::GSubprocessLauncher* self /*none*/, gint fd);
GI_INLINE_DECL void take_stdout_fd (gint fd) noexcept;

// void g_subprocess_launcher_unsetenv (GSubprocessLauncher* self /*none*/, const gchar* variable /*none*/);
// void g_subprocess_launcher_unsetenv (::GSubprocessLauncher* self /*none*/, const char* variable /*none*/);
GI_INLINE_DECL void unsetenv (const gi::cstring_v variable) noexcept;

gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessLauncherBase> property_flags()
{ return gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessLauncherBase> (*this, "flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra_def.hpp>)
#include <gio/subprocesslauncher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra.hpp>)
#include <gio/subprocesslauncher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SubprocessLauncher : public GI_GIO_SUBPROCESSLAUNCHER_BASE
{ typedef GI_GIO_SUBPROCESSLAUNCHER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSubprocessLauncher>
{ typedef Gio::SubprocessLauncher type; }; 

} // namespace repository

} // namespace gi

#endif
