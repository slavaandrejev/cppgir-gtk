// AUTO-GENERATED

#ifndef _GI_GOBJECT_CLOSURE_HPP_
#define _GI_GOBJECT_CLOSURE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class Closure_Ref;
class Object;
class Value;
class Value_Ref;

class Closure;

namespace base {


#define GI_GOBJECT_CLOSURE_BASE base::ClosureBase
class ClosureBase : public gi::detail::GBoxedWrapperBase<ClosureBase, ::GClosure>
{
typedef gi::detail::GBoxedWrapperBase<ClosureBase, ::GClosure> super_type;
public:

ClosureBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_closure_get_type(); } 

// guint Closure::in_marshal (const ::GClosure* obj /*none*/);
// guint Closure::in_marshal (const ::GClosure* obj /*none*/);
GI_INLINE_DECL guint in_marshal_ () const noexcept;

//  Closure::in_marshal (::GClosure* obj /*none*/, guint _value);
// void Closure::in_marshal (::GClosure* obj /*none*/, guint _value);
GI_INLINE_DECL void in_marshal_ (guint _value) noexcept;

// guint Closure::is_invalid (const ::GClosure* obj /*none*/);
// guint Closure::is_invalid (const ::GClosure* obj /*none*/);
GI_INLINE_DECL guint is_invalid_ () const noexcept;

//  Closure::is_invalid (::GClosure* obj /*none*/, guint _value);
// void Closure::is_invalid (::GClosure* obj /*none*/, guint _value);
GI_INLINE_DECL void is_invalid_ (guint _value) noexcept;

// GClosure* /*full*/ g_closure_new_object (guint sizeof_closure, GObject* object /*none*/);
// ::GClosure* /*full*/ g_closure_new_object (guint sizeof_closure, ::GObject* object /*none*/);
static GI_INLINE_DECL GObject::Closure new_object (guint sizeof_closure, GObject::Object object) noexcept;

// GClosure* /*full*/ g_closure_new_simple (guint sizeof_closure, gpointer data);
// ::GClosure* /*full*/ g_closure_new_simple (guint sizeof_closure, void* data);
static GI_INLINE_DECL GObject::Closure new_simple (guint sizeof_closure, void* data) noexcept;

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
GI_INLINE_DECL void invalidate () noexcept;

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
GI_INLINE_DECL void sink () noexcept;

// void g_closure_unref (GClosure* closure /*none*/);
// void g_closure_unref (::GClosure* closure /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/closure_extra_def.hpp>)
#include <gobject/closure_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/closure_extra.hpp>)
#include <gobject/closure_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class Closure_Ref;

class Closure : public gi::detail::GBoxedWrapper<Closure, ::GClosure, GI_GOBJECT_CLOSURE_BASE, Closure_Ref>
{ typedef gi::detail::GBoxedWrapper<Closure, ::GClosure, GI_GOBJECT_CLOSURE_BASE, Closure_Ref> super_type; using super_type::super_type; };


class Closure_Ref : public gi::detail::GBoxedRefWrapper<Closure, ::GClosure, GI_GOBJECT_CLOSURE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Closure, ::GClosure, GI_GOBJECT_CLOSURE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GClosure>
{ typedef GObject::Closure type; }; 

} // namespace repository

} // namespace gi

#endif
