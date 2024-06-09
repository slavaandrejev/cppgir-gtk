// AUTO-GENERATED

#ifndef _GI_GOBJECT_CLOSURE_IMPL_HPP_
#define _GI_GOBJECT_CLOSURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint _field_in_marshal_get (const ::GClosure* obj) { return (guint) obj->in_marshal; }
// guint Closure::in_marshal (const ::GClosure* obj /*none*/);
// guint Closure::in_marshal (const ::GClosure* obj /*none*/);
guint base::ClosureBase::in_marshal_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GClosure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_marshal_get;
  auto _temp_ret = call_wrap_v ((const ::GClosure*) (gobj_()));
  return _temp_ret;
}

static void _field_in_marshal_set (::GClosure* obj, guint _value) { obj->in_marshal = (decltype(obj->in_marshal)) _value; }
//  Closure::in_marshal (::GClosure* obj /*none*/, guint _value);
// void Closure::in_marshal (::GClosure* obj /*none*/, guint _value);
void base::ClosureBase::in_marshal_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_marshal_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GClosure*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_is_invalid_get (const ::GClosure* obj) { return (guint) obj->is_invalid; }
// guint Closure::is_invalid (const ::GClosure* obj /*none*/);
// guint Closure::is_invalid (const ::GClosure* obj /*none*/);
guint base::ClosureBase::is_invalid_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GClosure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_invalid_get;
  auto _temp_ret = call_wrap_v ((const ::GClosure*) (gobj_()));
  return _temp_ret;
}

static void _field_is_invalid_set (::GClosure* obj, guint _value) { obj->is_invalid = (decltype(obj->is_invalid)) _value; }
//  Closure::is_invalid (::GClosure* obj /*none*/, guint _value);
// void Closure::is_invalid (::GClosure* obj /*none*/, guint _value);
void base::ClosureBase::is_invalid_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_invalid_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GClosure*) (gobj_()), (guint) (_value_to_c));
}

// GClosure* /*full*/ g_closure_new_object (guint sizeof_closure, GObject* object /*none*/);
// ::GClosure* /*full*/ g_closure_new_object (guint sizeof_closure, ::GObject* object /*none*/);
GObject::Closure base::ClosureBase::new_object (guint sizeof_closure, GObject::Object object) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (guint sizeof_closure, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_closure_new_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto sizeof_closure_to_c = sizeof_closure;
  auto _temp_ret = call_wrap_v ((guint) (sizeof_closure_to_c), (::GObject*) (object_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GClosure* /*full*/ g_closure_new_simple (guint sizeof_closure, gpointer data);
// ::GClosure* /*full*/ g_closure_new_simple (guint sizeof_closure, void* data);
GObject::Closure base::ClosureBase::new_simple (guint sizeof_closure, void* data) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (guint sizeof_closure, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_closure_new_simple;
  auto data_to_c = data;
  auto sizeof_closure_to_c = sizeof_closure;
  auto _temp_ret = call_wrap_v ((guint) (sizeof_closure_to_c), (void*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_closure_add_finalize_notifier (GClosure* closure /*none*/, gpointer notify_data, GClosureNotify notify_func /*none,nullable*/);
// void g_closure_add_finalize_notifier (::GClosure* closure /*none*/, void* notify_data,  notify_func /*none,nullable*/);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_add_invalidate_notifier (GClosure* closure /*none*/, gpointer notify_data, GClosureNotify notify_func /*none,nullable*/);
// void g_closure_add_invalidate_notifier (::GClosure* closure /*none*/, void* notify_data,  notify_func /*none,nullable*/);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_add_marshal_guards (GClosure* closure /*none*/, gpointer pre_marshal_data, GClosureNotify pre_marshal_notify /*none,nullable*/, gpointer post_marshal_data, GClosureNotify post_marshal_notify /*none,nullable*/);
// void g_closure_add_marshal_guards (::GClosure* closure /*none*/, void* pre_marshal_data,  pre_marshal_notify /*none,nullable*/, void* post_marshal_data,  post_marshal_notify /*none,nullable*/);
// IGNORE; not introspectable, post_marshal_notify type  not supported, pre_marshal_notify type  not supported

// void g_closure_invalidate (GClosure* closure /*none*/);
// void g_closure_invalidate (::GClosure* closure /*none*/);
void base::ClosureBase::invalidate () noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_closure_invalidate;
  call_wrap_v ((::GClosure*) (gobj_()));
}

// void g_closure_invoke (GClosure* closure /*none*/, GValue* return_value /*none,out,opt,ca*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint);
// void g_closure_invoke (::GClosure* closure /*none*/, ::GValue* return_value /*none,out,opt,ca*/, guint n_param_values, const ::GValue** param_values /*none*/, void* invocation_hint);
// SKIP; param_values in boxed array not supported (depth 1)

// GClosure* /*none*/ g_closure_ref (GClosure* closure /*none*/);
// ::GClosure* /*none*/ g_closure_ref (::GClosure* closure /*none*/);
// IGNORE; marked ignore

// void g_closure_remove_finalize_notifier (GClosure* closure /*none*/, gpointer notify_data, GClosureNotify notify_func /*none*/);
// void g_closure_remove_finalize_notifier (::GClosure* closure /*none*/, void* notify_data,  notify_func /*none*/);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_remove_invalidate_notifier (GClosure* closure /*none*/, gpointer notify_data, GClosureNotify notify_func /*none*/);
// void g_closure_remove_invalidate_notifier (::GClosure* closure /*none*/, void* notify_data,  notify_func /*none*/);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_set_marshal (GClosure* closure /*none*/, GClosureMarshal marshal /*none*/);
// void g_closure_set_marshal (::GClosure* closure /*none*/,  marshal /*none*/);
// IGNORE; not introspectable, marshal type  not supported

// void g_closure_set_meta_marshal (GClosure* closure /*none*/, gpointer marshal_data, GClosureMarshal meta_marshal /*none,nullable*/);
// void g_closure_set_meta_marshal (::GClosure* closure /*none*/, void* marshal_data,  meta_marshal /*none,nullable*/);
// IGNORE; not introspectable, meta_marshal type  not supported

// void g_closure_sink (GClosure* closure /*none*/);
// void g_closure_sink (::GClosure* closure /*none*/);
void base::ClosureBase::sink () noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_closure_sink;
  call_wrap_v ((::GClosure*) (gobj_()));
}

// void g_closure_unref (GClosure* closure /*none*/);
// void g_closure_unref (::GClosure* closure /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/closure_extra_def_impl.hpp>)
#include <gobject/closure_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/closure_extra_impl.hpp>)
#include <gobject/closure_extra_impl.hpp>
#endif
#endif

#endif
