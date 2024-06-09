// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESS_HPP_
#define _GI_GIO_SUBPROCESS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Initable;
class InputStream;
class OutputStream;

class Subprocess;

namespace base {


#define GI_GIO_SUBPROCESS_BASE base::SubprocessBase
class SubprocessBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSubprocess BaseObjectType;

SubprocessBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_subprocess_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GSubprocess* /*full*/ g_subprocess_new (GSubprocessFlags flags, GError** error /*none,nullable*/, const gchar* argv0 /*none*/,  ..._ /*none*/);
// ::GSubprocess* /*full*/ g_subprocess_new (::GSubprocessFlags flags, ::GError* error /*none,nullable*/, const char* argv0 /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GSubprocess* /*full*/ g_subprocess_newv (const gchar* const* argv /*none*/, GSubprocessFlags flags, GError ** error);
// ::GSubprocess* /*full*/ g_subprocess_newv (const char** argv /*none*/, ::GSubprocessFlags flags, GError ** error);
static GI_INLINE_DECL Gio::Subprocess new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, Gio::SubprocessFlags flags);
static GI_INLINE_DECL Gio::Subprocess new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> argv, Gio::SubprocessFlags flags, GLib::Error * _error) noexcept;

// gboolean g_subprocess_communicate (GSubprocess* subprocess /*none*/, GBytes* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GBytes** stdout_buf /*full,out,opt,nullable*/, GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate (::GSubprocess* subprocess /*none*/, ::GBytes* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, ::GBytes** stdout_buf /*full,out,opt,nullable*/, ::GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf);
GI_INLINE_DECL bool communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf);
GI_INLINE_DECL bool communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate ();
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate (GLib::Error * _error) noexcept;

// void g_subprocess_communicate_async (GSubprocess* subprocess /*none*/, GBytes* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_communicate_async (::GSubprocess* subprocess /*none*/, ::GBytes* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void communicate_async (GLib::Bytes_Ref stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void communicate_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_communicate_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, GBytes** stdout_buf /*full,out,opt,nullable*/, GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, ::GBytes** stdout_buf /*full,out,opt,nullable*/, ::GBytes** stderr_buf /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf);
GI_INLINE_DECL bool communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_subprocess_communicate_utf8 (GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate_utf8 (::GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, gi::cstring * stdout_buf, gi::cstring * stderr_buf);
GI_INLINE_DECL bool communicate_utf8 (gi::cstring * stdout_buf, gi::cstring * stderr_buf);
GI_INLINE_DECL bool communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, gi::cstring * stdout_buf, gi::cstring * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool communicate_utf8 (gi::cstring * stdout_buf, gi::cstring * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> communicate_utf8 ();
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> communicate_utf8 (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> communicate_utf8 (GLib::Error * _error) noexcept;

// void g_subprocess_communicate_utf8_async (GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_communicate_utf8_async (::GSubprocess* subprocess /*none*/, const char* stdin_buf /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void communicate_utf8_async (const gi::cstring_v stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void communicate_utf8_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_communicate_utf8_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
// gboolean g_subprocess_communicate_utf8_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, char** stdout_buf /*full,out,opt,nullable*/, char** stderr_buf /*full,out,opt,nullable*/, GError ** error);
GI_INLINE_DECL bool communicate_utf8_finish (Gio::AsyncResult result, gi::cstring * stdout_buf, gi::cstring * stderr_buf);
GI_INLINE_DECL bool communicate_utf8_finish (Gio::AsyncResult result, gi::cstring * stdout_buf, gi::cstring * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> communicate_utf8_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> communicate_utf8_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_subprocess_force_exit (GSubprocess* subprocess /*none*/);
// void g_subprocess_force_exit (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL void force_exit () noexcept;

// gint g_subprocess_get_exit_status (GSubprocess* subprocess /*none*/);
// gint g_subprocess_get_exit_status (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL gint get_exit_status () noexcept;

// const gchar* /*none,nullable*/ g_subprocess_get_identifier (GSubprocess* subprocess /*none*/);
// const char* /*none,nullable*/ g_subprocess_get_identifier (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL gi::cstring_v get_identifier () noexcept;

// gboolean g_subprocess_get_if_exited (GSubprocess* subprocess /*none*/);
// gboolean g_subprocess_get_if_exited (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL bool get_if_exited () noexcept;

// gboolean g_subprocess_get_if_signaled (GSubprocess* subprocess /*none*/);
// gboolean g_subprocess_get_if_signaled (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL bool get_if_signaled () noexcept;

// gint g_subprocess_get_status (GSubprocess* subprocess /*none*/);
// gint g_subprocess_get_status (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL gint get_status () noexcept;

// GInputStream* /*none,nullable*/ g_subprocess_get_stderr_pipe (GSubprocess* subprocess /*none*/);
// ::GInputStream* /*none,nullable*/ g_subprocess_get_stderr_pipe (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL Gio::InputStream get_stderr_pipe () noexcept;

// GOutputStream* /*none,nullable*/ g_subprocess_get_stdin_pipe (GSubprocess* subprocess /*none*/);
// ::GOutputStream* /*none,nullable*/ g_subprocess_get_stdin_pipe (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL Gio::OutputStream get_stdin_pipe () noexcept;

// GInputStream* /*none,nullable*/ g_subprocess_get_stdout_pipe (GSubprocess* subprocess /*none*/);
// ::GInputStream* /*none,nullable*/ g_subprocess_get_stdout_pipe (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL Gio::InputStream get_stdout_pipe () noexcept;

// gboolean g_subprocess_get_successful (GSubprocess* subprocess /*none*/);
// gboolean g_subprocess_get_successful (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL bool get_successful () noexcept;

// gint g_subprocess_get_term_sig (GSubprocess* subprocess /*none*/);
// gint g_subprocess_get_term_sig (::GSubprocess* subprocess /*none*/);
GI_INLINE_DECL gint get_term_sig () noexcept;

// void g_subprocess_send_signal (GSubprocess* subprocess /*none*/, gint signal_num);
// void g_subprocess_send_signal (::GSubprocess* subprocess /*none*/, gint signal_num);
GI_INLINE_DECL void send_signal (gint signal_num) noexcept;

// gboolean g_subprocess_wait (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_subprocess_wait (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool wait (Gio::Cancellable cancellable);
GI_INLINE_DECL bool wait ();
GI_INLINE_DECL bool wait (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool wait (GLib::Error * _error) noexcept;

// void g_subprocess_wait_async (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_wait_async (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void wait_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void wait_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_wait_check (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_subprocess_wait_check (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool wait_check (Gio::Cancellable cancellable);
GI_INLINE_DECL bool wait_check ();
GI_INLINE_DECL bool wait_check (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool wait_check (GLib::Error * _error) noexcept;

// void g_subprocess_wait_check_async (GSubprocess* subprocess /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_subprocess_wait_check_async (::GSubprocess* subprocess /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void wait_check_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void wait_check_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_wait_check_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_subprocess_wait_check_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool wait_check_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool wait_check_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_subprocess_wait_finish (GSubprocess* subprocess /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_subprocess_wait_finish (::GSubprocess* subprocess /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool wait_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool wait_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessBase> property_flags()
{ return gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessBase> (*this, "flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra_def.hpp>)
#include <gio/subprocess_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra.hpp>)
#include <gio/subprocess_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Subprocess : public GI_GIO_SUBPROCESS_BASE
{ typedef GI_GIO_SUBPROCESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSubprocess>
{ typedef Gio::Subprocess type; }; 

} // namespace repository

} // namespace gi

#endif
