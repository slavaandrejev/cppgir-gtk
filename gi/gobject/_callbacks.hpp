// AUTO-GENERATED

#ifndef _GI_GOBJECT__CALLBACKS_HPP_
#define _GI_GOBJECT__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace GObject {

class Binding;
class Closure;
class Closure_Ref;
class InterfaceInfo;
class InterfaceInfo_Ref;
class Object;
class ParamSpec;
class SignalInvocationHint;
class SignalInvocationHint_Ref;
class TypeClass;
class TypeClass_Ref;
class TypeInfo;
class TypeInfo_Ref;
class TypeInstance;
class TypeInstance_Ref;
class TypeInterface;
class TypeInterface_Ref;
class TypePlugin;
class TypeValueTable;
class TypeValueTable_Ref;
class Value;
class Value_Ref;

// typedef void (*GBaseFinalizeFunc) (gpointer g_class /*none*/);
// typedef void (*GBaseFinalizeFunc) (::GTypeClass* g_class /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GBaseInitFunc) (gpointer g_class /*none*/);
// typedef void (*GBaseInitFunc) (::GTypeClass* g_class /*none*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GBindingTransformFunc) (GBinding* binding /*none*/, const GValue* from_value /*none*/, GValue* to_value /*none*/, gpointer user_data);
// typedef gboolean (*GBindingTransformFunc) (::GBinding* binding /*none*/, const ::GValue* from_value /*none*/, ::GValue* to_value /*none*/, void* user_data);
namespace internal {

typedef gboolean (*BindingTransformFunc_CF_CType) (::GBinding* binding, const ::GValue* from_value, ::GValue* to_value, void* user_data);
GI_INLINE_DECL bool BindingTransformFunc_CF (GObject::Binding binding, const GObject::Value_Ref from_value, GObject::Value_Ref to_value, BindingTransformFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(BindingTransformFunc_CB_Trait, BindingTransformFunc_CF_CType, BindingTransformFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(GObject::Binding binding, const GObject::Value_Ref from_value, GObject::Value_Ref to_value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> BindingTransformFunc;

// typedef gpointer (*GBoxedCopyFunc) (gpointer boxed);
// typedef void* (*GBoxedCopyFunc) (void* boxed);
// SKIP; not a callback since no user_data

// typedef void (*GBoxedFreeFunc) (gpointer boxed);
// typedef void (*GBoxedFreeFunc) (void* boxed);
// SKIP; not a callback since no user_data

// typedef void (*GCallback) ();
// typedef void (*GCallback) ();
// SKIP; not a callback since no user_data

// typedef void (*GClassFinalizeFunc) (gpointer g_class /*none*/, gpointer class_data);
// typedef void (*GClassFinalizeFunc) (::GTypeClass* g_class /*none*/, void* class_data);
namespace internal {

typedef void (*ClassFinalizeFunc_CF_CType) (::GTypeClass* g_class, void* class_data);
GI_INLINE_DECL void ClassFinalizeFunc_CF (GObject::TypeClass_Ref g_class, ClassFinalizeFunc_CF_CType _call, gpointer class_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ClassFinalizeFunc_CB_Trait, ClassFinalizeFunc_CF_CType, ClassFinalizeFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GObject::TypeClass_Ref g_class), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> ClassFinalizeFunc;

// typedef void (*GClassInitFunc) (gpointer g_class /*none*/, gpointer class_data);
// typedef void (*GClassInitFunc) (::GTypeClass* g_class /*none*/, void* class_data);
namespace internal {

typedef void (*ClassInitFunc_CF_CType) (::GTypeClass* g_class, void* class_data);
GI_INLINE_DECL void ClassInitFunc_CF (GObject::TypeClass_Ref g_class, ClassInitFunc_CF_CType _call, gpointer class_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ClassInitFunc_CB_Trait, ClassInitFunc_CF_CType, ClassInitFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GObject::TypeClass_Ref g_class), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> ClassInitFunc;

// typedef void (*GClosureMarshal) (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, guint n_param_values, const GValue* param_values /*none*/, gpointer invocation_hint, gpointer marshal_data);
// typedef void (*GClosureMarshal) (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, guint n_param_values, const ::GValue** param_values /*none*/, void* invocation_hint, void* marshal_data);
// SKIP; param_values in boxed array not supported (depth 1)

// typedef void (*GClosureNotify) (gpointer data, GClosure* closure /*none*/);
// typedef void (*GClosureNotify) (void* data, ::GClosure* closure /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GInstanceInitFunc) (GTypeInstance* instance /*none*/, gpointer g_class /*none*/);
// typedef void (*GInstanceInitFunc) (::GTypeInstance* instance /*none*/, ::GTypeClass* g_class /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GInterfaceFinalizeFunc) (gpointer g_iface /*none*/, gpointer iface_data);
// typedef void (*GInterfaceFinalizeFunc) (::GTypeInterface* g_iface /*none*/, void* iface_data);
namespace internal {

typedef void (*InterfaceFinalizeFunc_CF_CType) (::GTypeInterface* g_iface, void* iface_data);
GI_INLINE_DECL void InterfaceFinalizeFunc_CF (GObject::TypeInterface_Ref g_iface, InterfaceFinalizeFunc_CF_CType _call, gpointer iface_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(InterfaceFinalizeFunc_CB_Trait, InterfaceFinalizeFunc_CF_CType, InterfaceFinalizeFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GObject::TypeInterface_Ref g_iface), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> InterfaceFinalizeFunc;

// typedef void (*GInterfaceInitFunc) (gpointer g_iface /*none*/, gpointer iface_data);
// typedef void (*GInterfaceInitFunc) (::GTypeInterface* g_iface /*none*/, void* iface_data);
namespace internal {

typedef void (*InterfaceInitFunc_CF_CType) (::GTypeInterface* g_iface, void* iface_data);
GI_INLINE_DECL void InterfaceInitFunc_CF (GObject::TypeInterface_Ref g_iface, InterfaceInitFunc_CF_CType _call, gpointer iface_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(InterfaceInitFunc_CB_Trait, InterfaceInitFunc_CF_CType, InterfaceInitFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(GObject::TypeInterface_Ref g_iface), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> InterfaceInitFunc;

// typedef void (*GObjectFinalizeFunc) (GObject* object /*none*/);
// typedef void (*GObjectFinalizeFunc) (::GObject* object /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GObjectGetPropertyFunc) (GObject* object /*none*/, guint property_id, GValue* value /*none*/, GParamSpec* pspec /*none*/);
// typedef void (*GObjectGetPropertyFunc) (::GObject* object /*none*/, guint property_id, ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GObjectSetPropertyFunc) (GObject* object /*none*/, guint property_id, const GValue* value /*none*/, GParamSpec* pspec /*none*/);
// typedef void (*GObjectSetPropertyFunc) (::GObject* object /*none*/, guint property_id, const ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSignalAccumulator) (GSignalInvocationHint* ihint /*none*/, GValue* return_accu /*none*/, const GValue* handler_return /*none*/, gpointer data);
// typedef gboolean (*GSignalAccumulator) (::GSignalInvocationHint* ihint /*none*/, ::GValue* return_accu /*none*/, const ::GValue* handler_return /*none*/, void* data);
namespace internal {

typedef gboolean (*SignalAccumulator_CF_CType) (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* data);
GI_INLINE_DECL bool SignalAccumulator_CF (GObject::SignalInvocationHint_Ref ihint, GObject::Value_Ref return_accu, const GObject::Value_Ref handler_return, SignalAccumulator_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(SignalAccumulator_CB_Trait, SignalAccumulator_CF_CType, SignalAccumulator_CF);
} // namespace internal

typedef gi::detail::callback<bool(GObject::SignalInvocationHint_Ref ihint, GObject::Value_Ref return_accu, const GObject::Value_Ref handler_return), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> SignalAccumulator;

// typedef gboolean (*GSignalEmissionHook) (GSignalInvocationHint* ihint /*none*/, guint n_param_values, const GValue* param_values /*none*/, gpointer data);
// typedef gboolean (*GSignalEmissionHook) (::GSignalInvocationHint* ihint /*none*/, guint n_param_values, const ::GValue** param_values /*none*/, void* data);
// SKIP; param_values in boxed array not supported (depth 1)

// typedef void (*GToggleNotify) (gpointer data, GObject* object /*none*/, gboolean is_last_ref);
// typedef void (*GToggleNotify) (void* data, ::GObject* object /*none*/, gboolean is_last_ref);
// SKIP; not a callback since no user_data

// typedef gboolean (*GTypeClassCacheFunc) (gpointer cache_data, GTypeClass* g_class /*none*/);
// typedef gboolean (*GTypeClassCacheFunc) (void* cache_data, ::GTypeClass* g_class /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypeInterfaceCheckFunc) (gpointer check_data, gpointer g_iface /*none*/);
// typedef void (*GTypeInterfaceCheckFunc) (void* check_data, ::GTypeInterface* g_iface /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginCompleteInterfaceInfo) (GTypePlugin* plugin /*none*/, GType instance_type, GType interface_type, GInterfaceInfo* info /*none*/);
// typedef void (*GTypePluginCompleteInterfaceInfo) (::GTypePlugin* plugin /*none*/, GType instance_type, GType interface_type, ::GInterfaceInfo* info /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginCompleteTypeInfo) (GTypePlugin* plugin /*none*/, GType g_type, GTypeInfo* info /*none*/, GTypeValueTable* value_table /*none*/);
// typedef void (*GTypePluginCompleteTypeInfo) (::GTypePlugin* plugin /*none*/, GType g_type, ::GTypeInfo* info /*none*/, ::GTypeValueTable* value_table /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginUnuse) (GTypePlugin* plugin /*none*/);
// typedef void (*GTypePluginUnuse) (::GTypePlugin* plugin /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginUse) (GTypePlugin* plugin /*none*/);
// typedef void (*GTypePluginUse) (::GTypePlugin* plugin /*none*/);
// SKIP; not a callback since no user_data

// typedef gchar* /*full,nullable*/ (*GTypeValueCollectFunc) (GValue* value /*none*/, guint n_collect_values, GTypeCValue* collect_values /*none*/, guint collect_flags);
// typedef char* /*full,nullable*/ (*GTypeValueCollectFunc) (::GValue* value /*none*/, guint n_collect_values, * collect_values /*none*/, guint collect_flags);
// SKIP; container element not supported

// typedef void (*GTypeValueCopyFunc) (const GValue* src_value /*none*/, GValue* dest_value /*none,out,ca*/);
// typedef void (*GTypeValueCopyFunc) (const ::GValue* src_value /*none*/, ::GValue* dest_value /*none,out,ca*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypeValueFreeFunc) (GValue* value /*none*/);
// typedef void (*GTypeValueFreeFunc) (::GValue* value /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GTypeValueInitFunc) (GValue* value /*none*/);
// typedef void (*GTypeValueInitFunc) (::GValue* value /*none*/);
// SKIP; not a callback since no user_data

// typedef gchar* /*full,nullable*/ (*GTypeValueLCopyFunc) (const GValue* value /*none*/, guint n_collect_values, GTypeCValue* collect_values /*none*/, guint collect_flags);
// typedef char* /*full,nullable*/ (*GTypeValueLCopyFunc) (const ::GValue* value /*none*/, guint n_collect_values, * collect_values /*none*/, guint collect_flags);
// SKIP; container element not supported

// typedef gpointer (*GTypeValuePeekPointerFunc) (const GValue* value /*none*/);
// typedef void* (*GTypeValuePeekPointerFunc) (const ::GValue* value /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GVaClosureMarshal) (GClosure* closure /*none*/, GValue* return_value /*none,nullable*/, gpointer instance /*none*/, va_list args /*none*/, gpointer marshal_data, int n_params, GType* param_types /*none*/);
// typedef void (*GVaClosureMarshal) (::GClosure* closure /*none*/, ::GValue* return_value /*none,nullable*/, ::GTypeInstance* instance /*none*/,  args /*none*/, void* marshal_data, gint n_params, GType* param_types /*none*/);
// IGNORE; not introspectable, args type  not supported, not a callback since no user_data

// typedef void (*GValueTransform) (const GValue* src_value /*none*/, GValue* dest_value /*none*/);
// typedef void (*GValueTransform) (const ::GValue* src_value /*none*/, ::GValue* dest_value /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GWeakNotify) (gpointer data, GObject* where_the_object_was /*none*/);
// typedef void (*GWeakNotify) (void* data, ::GObject* where_the_object_was /*none*/);
// SKIP; not a callback since no user_data

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
