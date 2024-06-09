// AUTO-GENERATED

#ifndef _GI_GOBJECT_CCLOSURE_HPP_
#define _GI_GOBJECT_CCLOSURE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class Closure;
class Closure_Ref;
class Object;
class TypeInstance;
class TypeInstance_Ref;
class Value;
class Value_Ref;

class CClosure;

namespace base {


#define GI_GOBJECT_CCLOSURE_BASE base::CClosureBase
class CClosureBase : public gi::detail::CBoxedWrapperBase<CClosureBase, ::GCClosure>
{
typedef gi::detail::CBoxedWrapperBase<CClosureBase, ::GCClosure> super_type;
public:

CClosureBase (std::nullptr_t = nullptr) : super_type() {}

// void g_cclosure_marshal_BOOLEAN__BOXED_BOXED (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_BOOLEAN__BOXED_BOXED (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_BOOLEAN__BOXED_BOXED (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_BOOLEAN__FLAGS (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_BOOLEAN__FLAGS (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_BOOLEAN__FLAGS (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_BOOLEAN__FLAGSv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_BOOLEAN__FLAGSv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_STRING__OBJECT_POINTER (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_STRING__OBJECT_POINTER (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_STRING__OBJECT_POINTER (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_STRING__OBJECT_POINTERv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_STRING__OBJECT_POINTERv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__BOOLEAN (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__BOOLEAN (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__BOOLEAN (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__BOOLEANv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__BOOLEANv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__BOXED (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__BOXED (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__BOXED (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__BOXEDv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__BOXEDv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__CHAR (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__CHAR (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__CHAR (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__CHARv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__CHARv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__DOUBLE (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__DOUBLE (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__DOUBLE (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__DOUBLEv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__DOUBLEv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__ENUM (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__ENUM (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__ENUM (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__ENUMv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__ENUMv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__FLAGS (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__FLAGS (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__FLAGS (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__FLAGSv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__FLAGSv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__FLOAT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__FLOAT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__FLOAT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__FLOATv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__FLOATv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__INT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__INT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__INT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__INTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__INTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__LONG (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__LONG (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__LONG (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__LONGv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__LONGv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__OBJECT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__OBJECT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__OBJECT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__OBJECTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__OBJECTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__PARAM (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__PARAM (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__PARAM (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__PARAMv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__PARAMv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__POINTER (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__POINTER (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__POINTER (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__POINTERv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__POINTERv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__STRING (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__STRING (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__STRING (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__STRINGv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__STRINGv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__UCHAR (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__UCHAR (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__UCHAR (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__UCHARv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__UCHARv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__UINT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__UINT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__UINT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__UINT_POINTER (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__UINT_POINTER (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__UINT_POINTER (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__UINT_POINTERv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__UINT_POINTERv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__UINTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__UINTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__ULONG (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__ULONG (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__ULONG (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__ULONGv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__ULONGv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__VARIANT (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__VARIANT (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__VARIANT (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__VARIANTv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__VARIANTv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_VOID__VOID (GClosure* closure /*none*/, GValue* return_value /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_VOID__VOID (::GClosure* closure /*none*/, ::GValue* return_value /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_VOID__VOID (GObject::Closure_Ref closure, GObject::Value_Ref return_value, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

// void g_cclosure_marshal_VOID__VOIDv (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// void g_cclosure_marshal_VOID__VOIDv (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported

// void g_cclosure_marshal_generic (GClosure* closure /*none*/, GValue* return_gvalue /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// void g_cclosure_marshal_generic (::GClosure* closure /*none*/, ::GValue* return_gvalue /*none*/, guint n_param_values, const ::GValue* param_values /*none*/, void* invocation_hint, void* marshal_data);
static GI_INLINE_DECL void marshal_generic (GObject::Closure_Ref closure, GObject::Value_Ref return_gvalue, guint n_param_values, const GObject::Value_Ref param_values, void* invocation_hint, void* marshal_data) noexcept;

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

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/cclosure_extra_def.hpp>)
#include <gobject/cclosure_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/cclosure_extra.hpp>)
#include <gobject/cclosure_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class CClosure_Ref;

class CClosure : public gi::detail::CBoxedWrapper<CClosure, ::GCClosure, GI_GOBJECT_CCLOSURE_BASE, CClosure_Ref>
{ typedef gi::detail::CBoxedWrapper<CClosure, ::GCClosure, GI_GOBJECT_CCLOSURE_BASE, CClosure_Ref> super_type; using super_type::super_type; };


class CClosure_Ref : public gi::detail::CBoxedRefWrapper<CClosure, ::GCClosure, GI_GOBJECT_CCLOSURE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<CClosure, ::GCClosure, GI_GOBJECT_CCLOSURE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GCClosure>
{ typedef GObject::CClosure type; }; 

} // namespace repository

} // namespace gi

#endif
