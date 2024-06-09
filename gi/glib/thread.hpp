// AUTO-GENERATED

#ifndef _GI_GLIB_THREAD_HPP_
#define _GI_GLIB_THREAD_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Thread_Ref;

class Thread;

namespace base {


#define GI_GLIB_THREAD_BASE base::ThreadBase
class ThreadBase : public gi::detail::GBoxedWrapperBase<ThreadBase, ::GThread>
{
typedef gi::detail::GBoxedWrapperBase<ThreadBase, ::GThread> super_type;
public:

ThreadBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_thread_get_type(); } 

// GThread* /*full*/ g_thread_new (const gchar* name /*none,nullable*/, GThreadFunc func /*none*/, gpointer data);
// ::GThread* /*full*/ g_thread_new (const char* name /*none,nullable*/, GLib::ThreadFunc::cfunction_type func /*none*/, void* data);
static GI_INLINE_DECL GLib::Thread new_ (const gi::cstring_v name, GLib::ThreadFunc func) noexcept;
static GI_INLINE_DECL GLib::Thread new_ (GLib::ThreadFunc func) noexcept;

// GThread* /*full*/ g_thread_try_new (const gchar* name /*none,nullable*/, GThreadFunc func /*none*/, gpointer data, GError ** error);
// ::GThread* /*full*/ g_thread_try_new (const char* name /*none,nullable*/, GLib::ThreadFunc::cfunction_type func /*none*/, void* data, GError ** error);
static GI_INLINE_DECL GLib::Thread try_new (const gi::cstring_v name, GLib::ThreadFunc func);
static GI_INLINE_DECL GLib::Thread try_new (GLib::ThreadFunc func);
static GI_INLINE_DECL GLib::Thread try_new (const gi::cstring_v name, GLib::ThreadFunc func, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GLib::Thread try_new (GLib::ThreadFunc func, GLib::Error * _error) noexcept;

// gpointer g_thread_join (GThread* thread /*full*/);
// void* g_thread_join (::GThread* thread /*full*/);
GI_INLINE_DECL gpointer join () noexcept;

// GThread* /*full*/ g_thread_ref (GThread* thread /*none*/);
// ::GThread* /*full*/ g_thread_ref (::GThread* thread /*none*/);
// IGNORE; marked ignore

// void g_thread_set_priority (GThread* thread /*none*/, GThreadPriority priority /*none*/);
// void g_thread_set_priority (::GThread* thread /*none*/,  priority /*none*/);
// IGNORE; deprecated

// void g_thread_unref (GThread* thread /*full*/);
// void g_thread_unref (::GThread* thread /*full*/);
// IGNORE; marked ignore

// GThread* /*full*/ g_thread_create (GThreadFunc func /*none*/, gpointer data, gboolean joinable, GError ** error);
// ::GThread* /*full*/ g_thread_create (GLib::ThreadFunc::cfunction_type func /*none*/, void* data, gboolean joinable, GError ** error);
// IGNORE; deprecated

// GThread* /*full*/ g_thread_create_full (GThreadFunc func /*none*/, gpointer data, gulong stack_size, gboolean joinable, gboolean bound, GThreadPriority priority /*none*/, GError ** error);
// ::GThread* /*full*/ g_thread_create_full (GLib::ThreadFunc::cfunction_type func /*none*/, void* data, gulong stack_size, gboolean joinable, gboolean bound,  priority /*none*/, GError ** error);
// IGNORE; deprecated

// GQuark g_thread_error_quark ();
// ::GQuark g_thread_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

// void g_thread_exit (gpointer retval);
// void g_thread_exit (void* retval);
static GI_INLINE_DECL void exit (void* retval) noexcept;

// void g_thread_foreach (GFunc thread_func /*none*/, gpointer user_data);
// void g_thread_foreach (GLib::Func::cfunction_type thread_func /*none*/, void* user_data);
// IGNORE; deprecated

// gboolean g_thread_get_initialized ();
// gboolean g_thread_get_initialized ();
static GI_INLINE_DECL bool get_initialized () noexcept;

// void g_thread_init (gpointer vtable);
// void g_thread_init (void* vtable);
// IGNORE; deprecated

// void g_thread_init_with_errorcheck_mutexes (gpointer vtable);
// void g_thread_init_with_errorcheck_mutexes (void* vtable);
static GI_INLINE_DECL void init_with_errorcheck_mutexes (void* vtable) noexcept;

// GThread* /*none*/ g_thread_self ();
// ::GThread* /*none*/ g_thread_self ();
static GI_INLINE_DECL GLib::Thread_Ref self () noexcept;

// void g_thread_yield ();
// void g_thread_yield ();
static GI_INLINE_DECL void yield () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/thread_extra_def.hpp>)
#include <glib/thread_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/thread_extra.hpp>)
#include <glib/thread_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Thread_Ref;

class Thread : public gi::detail::GBoxedWrapper<Thread, ::GThread, GI_GLIB_THREAD_BASE, Thread_Ref>
{ typedef gi::detail::GBoxedWrapper<Thread, ::GThread, GI_GLIB_THREAD_BASE, Thread_Ref> super_type; using super_type::super_type; };


class Thread_Ref : public gi::detail::GBoxedRefWrapper<Thread, ::GThread, GI_GLIB_THREAD_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Thread, ::GThread, GI_GLIB_THREAD_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GThread>
{ typedef GLib::Thread type; }; 

} // namespace repository

} // namespace gi

#endif
