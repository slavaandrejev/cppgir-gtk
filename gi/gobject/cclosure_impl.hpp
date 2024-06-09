// AUTO-GENERATED

#ifndef _GI_GOBJECT_CCLOSURE_IMPL_HPP_
#define _GI_GOBJECT_CCLOSURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// void g_cclosure_marshal_BOOLEAN__BOXED_BOXED (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_BOOLEAN__BOXED_BOXED (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_BOOLEAN__BOXED_BOXED (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_BOOLEAN__BOXED_BOXED;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_BOOLEAN__FLAGS (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_BOOLEAN__FLAGS (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_BOOLEAN__FLAGS (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_BOOLEAN__FLAGS;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_BOOLEAN__FLAGSv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_BOOLEAN__FLAGSv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_STRING__OBJECT_POINTER (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_STRING__OBJECT_POINTER (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_STRING__OBJECT_POINTER (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_STRING__OBJECT_POINTER;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_STRING__OBJECT_POINTERv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_STRING__OBJECT_POINTERv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__BOOLEAN (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__BOOLEAN (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__BOOLEAN (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__BOOLEAN;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__BOOLEANv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__BOOLEANv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__BOXED (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__BOXED (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__BOXED (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__BOXED;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__BOXEDv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__BOXEDv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__CHAR (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__CHAR (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__CHAR (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__CHAR;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__CHARv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__CHARv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__DOUBLE (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__DOUBLE (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__DOUBLE (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__DOUBLE;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__DOUBLEv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__DOUBLEv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__ENUM (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__ENUM (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__ENUM (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__ENUM;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__ENUMv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__ENUMv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__FLAGS (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__FLAGS (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__FLAGS (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__FLAGS;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__FLAGSv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__FLAGSv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__FLOAT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__FLOAT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__FLOAT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__FLOAT;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__FLOATv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__FLOATv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__INT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__INT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__INT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__INT;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__INTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__INTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__LONG (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__LONG (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__LONG (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__LONG;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__LONGv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__LONGv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__OBJECT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__OBJECT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__OBJECT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__OBJECT;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__OBJECTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__OBJECTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__PARAM (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__PARAM (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__PARAM (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__PARAM;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__PARAMv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__PARAMv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__POINTER (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__POINTER (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__POINTER (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__POINTER;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__POINTERv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__POINTERv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__STRING (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__STRING (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__STRING (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__STRING;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__STRINGv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__STRINGv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__UCHAR (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__UCHAR (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__UCHAR (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__UCHAR;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__UCHARv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__UCHARv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__UINT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__UINT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__UINT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__UINT;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__UINT_POINTER (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__UINT_POINTER (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__UINT_POINTER (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__UINT_POINTER;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__UINT_POINTERv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__UINT_POINTERv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__UINTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__UINTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__ULONG (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__ULONG (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__ULONG (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__ULONG;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__ULONGv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__ULONGv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__VARIANT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__VARIANT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__VARIANT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__VARIANT;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__VARIANTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__VARIANTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__VOID (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__VOID (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_VOID__VOID (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_VOID__VOID;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_value_to_c = gi::unwrap (return_value, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_value_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_VOID__VOIDv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__VOIDv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_generic (GClosure* closure /*none*/, GValue* return_gvalue /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_generic (::GClosure* closure /*none*/, ::GValue* return_gvalue /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
void base::CClosureBase::marshal_generic (GObject::Closure_Ref closure, GObject::Value_Ref return_gvalue, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure, ::GValue* return_gvalue, guint n_param_values, const ::GValue* param_values, void* invocation_hint, void* marshal_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_cclosure_marshal_generic;
  auto marshal_data_to_c = marshal_data;
  auto invocation_hint_to_c = invocation_hint;
  auto param_values_to_c = gi::unwrap (param_values, gi::transfer_none);
  auto n_param_values_to_c = n_param_values;
  auto return_gvalue_to_c = gi::unwrap (return_gvalue, gi::transfer_none);
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  call_wrap_v ((::GClosure*) (closure_to_c), (::GValue*) (return_gvalue_to_c), (guint) (n_param_values_to_c), (const ::GValue*) (param_values_to_c), (void*) (invocation_hint_to_c), (void*) (marshal_data_to_c));
}

// void g_cclosure_marshal_generic_va (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args_list /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_generic_va (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args_list /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args_list type  not supported

// GClosure* /*full*/ g_cclosure_new (GCallback callback_func /*none,nullable*/, gpointer user_data, GClosureNotify destroy_data /*none*/);
// ::GClosure* /*full*/ g_cclosure_new ( callback_func /*none,nullable*/, void* user_data,  destroy_data /*none*/);
// IGNORE; not introspectable, destroy_data type  not supported, callback_func type  not supported

// GClosure* /*full*/ g_cclosure_new_object (GCallback callback_func /*none*/, GObject* object /*none*/);
// ::GClosure* /*full*/ g_cclosure_new_object ( callback_func /*none*/, ::GObject* object /*none*/);
// IGNORE; not introspectable, callback_func type  not supported

// GClosure* /*full*/ g_cclosure_new_object_swap (GCallback callback_func /*none*/, GObject* object /*none*/);
// ::GClosure* /*full*/ g_cclosure_new_object_swap ( callback_func /*none*/, ::GObject* object /*none*/);
// IGNORE; not introspectable, callback_func type  not supported

// GClosure* /*full*/ g_cclosure_new_swap (GCallback callback_func /*none,nullable*/, gpointer user_data, GClosureNotify destroy_data /*none*/);
// ::GClosure* /*full*/ g_cclosure_new_swap ( callback_func /*none,nullable*/, void* user_data,  destroy_data /*none*/);
// IGNORE; not introspectable, destroy_data type  not supported, callback_func type  not supported


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/cclosure_extra_def_impl.hpp>)
#include <gobject/cclosure_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/cclosure_extra_impl.hpp>)
#include <gobject/cclosure_extra_impl.hpp>
#endif
#endif

#endif
