// AUTO-GENERATED

#ifndef _GI_GLIB_THREAD_IMPL_HPP_
#define _GI_GLIB_THREAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GThread* /*full*/ g_thread_new (const gchar* name /*none,nullable*/, GThreadFunc func /*none*/, gpointer data);
// ::GThread* /*full*/ g_thread_new (const char* name /*none,nullable*/, GLib::ThreadFunc::cfunction_type func /*none*/, void* data);
GLib::Thread base::ThreadBase::new_ (const gi::cstring_v name, GLib::ThreadFunc func) noexcept
{
  typedef ::GThread* (*call_wrap_t) (const char* name, GLib::ThreadFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_async) : nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GLib::ThreadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Thread base::ThreadBase::new_ (GLib::ThreadFunc func) noexcept
{
  typedef ::GThread* (*call_wrap_t) (const char* name, GLib::ThreadFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_async) : nullptr;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GLib::ThreadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GThread* /*full*/ g_thread_try_new (const gchar* name /*none,nullable*/, GThreadFunc func /*none*/, gpointer data, GError ** error);
// ::GThread* /*full*/ g_thread_try_new (const char* name /*none,nullable*/, GLib::ThreadFunc::cfunction_type func /*none*/, void* data, GError ** error);
GLib::Thread base::ThreadBase::try_new (const gi::cstring_v name, GLib::ThreadFunc func)
{
  typedef ::GThread* (*call_wrap_t) (const char* name, GLib::ThreadFunc::cfunction_type func, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_try_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_async) : nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GLib::ThreadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Thread base::ThreadBase::try_new (GLib::ThreadFunc func)
{
  typedef ::GThread* (*call_wrap_t) (const char* name, GLib::ThreadFunc::cfunction_type func, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_try_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_async) : nullptr;
  auto name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GLib::ThreadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Thread base::ThreadBase::try_new (const gi::cstring_v name, GLib::ThreadFunc func, GLib::Error * _error) noexcept
{
  typedef ::GThread* (*call_wrap_t) (const char* name, GLib::ThreadFunc::cfunction_type func, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_try_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_async) : nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GLib::ThreadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
GLib::Thread base::ThreadBase::try_new (GLib::ThreadFunc func, GLib::Error * _error) noexcept
{
  typedef ::GThread* (*call_wrap_t) (const char* name, GLib::ThreadFunc::cfunction_type func, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_try_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_async) : nullptr;
  auto name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GLib::ThreadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gpointer g_thread_join (GThread* thread /*full*/);
// void* g_thread_join (::GThread* thread /*full*/);
gpointer base::ThreadBase::join () noexcept
{
  typedef void* (*call_wrap_t) (::GThread* thread);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_join;
  auto _temp_ret = call_wrap_v ((::GThread*) (gobj_()));
  return _temp_ret;
}

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
GLib::Quark base::ThreadBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_thread_exit (gpointer retval);
// void g_thread_exit (void* retval);
void base::ThreadBase::exit (void* retval) noexcept
{
  typedef void (*call_wrap_t) (void* retval);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_exit;
  auto retval_to_c = retval;
  call_wrap_v ((void*) (retval_to_c));
}

// void g_thread_foreach (GFunc thread_func /*none*/, gpointer user_data);
// void g_thread_foreach (GLib::Func::cfunction_type thread_func /*none*/, void* user_data);
// IGNORE; deprecated

// gboolean g_thread_get_initialized ();
// gboolean g_thread_get_initialized ();
bool base::ThreadBase::get_initialized () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_get_initialized;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_thread_init (gpointer vtable);
// void g_thread_init (void* vtable);
// IGNORE; deprecated

// void g_thread_init_with_errorcheck_mutexes (gpointer vtable);
// void g_thread_init_with_errorcheck_mutexes (void* vtable);
void base::ThreadBase::init_with_errorcheck_mutexes (void* vtable) noexcept
{
  typedef void (*call_wrap_t) (void* vtable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_init_with_errorcheck_mutexes;
  auto vtable_to_c = vtable;
  call_wrap_v ((void*) (vtable_to_c));
}

// GThread* /*none*/ g_thread_self ();
// ::GThread* /*none*/ g_thread_self ();
GLib::Thread_Ref base::ThreadBase::self () noexcept
{
  typedef ::GThread* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_self;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_thread_yield ();
// void g_thread_yield ();
void base::ThreadBase::yield () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_thread_yield;
  call_wrap_v ();
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/thread_extra_def_impl.hpp>)
#include <glib/thread_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/thread_extra_impl.hpp>)
#include <glib/thread_extra_impl.hpp>
#endif
#endif

#endif
