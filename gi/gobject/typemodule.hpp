// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEMODULE_HPP_
#define _GI_GOBJECT_TYPEMODULE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class EnumValue;
class EnumValue_Ref;
class FlagsValue;
class FlagsValue_Ref;
class InterfaceInfo;
class InterfaceInfo_Ref;
class TypeInfo;
class TypeInfo_Ref;
class TypePlugin;

class TypeModule;

namespace base {


#define GI_GOBJECT_TYPEMODULE_BASE base::TypeModuleBase
class TypeModuleBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTypeModule BaseObjectType;

TypeModuleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_type_module_get_type(); } 

GI_INLINE_DECL GObject::TypePlugin interface_ (gi::interface_tag<GObject::TypePlugin>);

GI_INLINE_DECL operator GObject::TypePlugin ();

// void g_type_module_add_interface (GTypeModule* module_ /*none,nullable*/, GType instance_type, GType interface_type, const GInterfaceInfo* interface_info /*none*/);
// void g_type_module_add_interface (::GTypeModule* module_ /*none,nullable*/, GType instance_type, GType interface_type, const ::GInterfaceInfo* interface_info /*none*/);
GI_INLINE_DECL void add_interface (GType instance_type, GType interface_type, const GObject::InterfaceInfo_Ref interface_info) noexcept;

// GType g_type_module_register_enum (GTypeModule* module_ /*none,nullable*/, const gchar* name /*none*/, const GEnumValue* const_static_values /*none*/);
// GType g_type_module_register_enum (::GTypeModule* module_ /*none,nullable*/, const char* name /*none*/, const ::GEnumValue* const_static_values /*none*/);
GI_INLINE_DECL GType register_enum (const gi::cstring_v name, const GObject::EnumValue_Ref const_static_values) noexcept;

// GType g_type_module_register_flags (GTypeModule* module_ /*none,nullable*/, const gchar* name /*none*/, const GFlagsValue* const_static_values /*none*/);
// GType g_type_module_register_flags (::GTypeModule* module_ /*none,nullable*/, const char* name /*none*/, const ::GFlagsValue* const_static_values /*none*/);
GI_INLINE_DECL GType register_flags (const gi::cstring_v name, const GObject::FlagsValue_Ref const_static_values) noexcept;

// GType g_type_module_register_type (GTypeModule* module_ /*none,nullable*/, GType parent_type, const gchar* type_name /*none*/, const GTypeInfo* type_info /*none*/, GTypeFlags flags);
// GType g_type_module_register_type (::GTypeModule* module_ /*none,nullable*/, GType parent_type, const char* type_name /*none*/, const ::GTypeInfo* type_info /*none*/, ::GTypeFlags flags);
GI_INLINE_DECL GType register_type (GType parent_type, const gi::cstring_v type_name, const GObject::TypeInfo_Ref type_info, GObject::TypeFlags flags) noexcept;

// void g_type_module_set_name (GTypeModule* module_ /*none*/, const gchar* name /*none*/);
// void g_type_module_set_name (::GTypeModule* module_ /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;

// void g_type_module_unuse (GTypeModule* module_ /*none*/);
// void g_type_module_unuse (::GTypeModule* module_ /*none*/);
GI_INLINE_DECL void unuse () noexcept;

// gboolean g_type_module_use (GTypeModule* module_ /*none*/);
// gboolean g_type_module_use (::GTypeModule* module_ /*none*/);
GI_INLINE_DECL bool use () noexcept;

// guint TypeModule::use_count (const ::GTypeModule* obj /*none*/);
// guint TypeModule::use_count (const ::GTypeModule* obj /*none*/);
GI_INLINE_DECL guint use_count_ () const noexcept;

//  TypeModule::use_count (::GTypeModule* obj /*none*/, guint _value);
// void TypeModule::use_count (::GTypeModule* obj /*none*/, guint _value);
GI_INLINE_DECL void use_count_ (guint _value) noexcept;

// char* /*none*/ TypeModule::name (const ::GTypeModule* obj /*none*/);
// char* /*none*/ TypeModule::name (const ::GTypeModule* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typemodule_extra_def.hpp>)
#include <gobject/typemodule_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typemodule_extra.hpp>)
#include <gobject/typemodule_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeModule : public GI_GOBJECT_TYPEMODULE_BASE
{ typedef GI_GOBJECT_TYPEMODULE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeModule>
{ typedef GObject::TypeModule type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

namespace impl {

namespace internal {


class TypeModuleClassDef
{
typedef TypeModuleClassDef self;
public:
typedef GObject::TypeModule instance_type;
typedef ::GTypeModuleClass class_type;

using GI_MEMBER_CHECK_CONFLICT(load) = self;
using GI_MEMBER_CHECK_CONFLICT(unload) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TypeModuleClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean TypeModule::load (GTypeModule* module_ /*none*/);
// gboolean TypeModule::load (::GTypeModule* module_ /*none*/);
virtual bool load_ () noexcept = 0;

// void TypeModule::unload (GTypeModule* module_ /*none*/);
// void TypeModule::unload (::GTypeModule* module_ /*none*/);
virtual void unload_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TypeModuleClass: public detail::ClassTemplate<GObject::impl::internal::TypeModuleClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TypeModuleClassDef;
typedef TypeModuleClass self;
typedef detail::ClassTemplate<GObject::impl::internal::TypeModuleClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean TypeModule::load (GTypeModule* module_ /*none*/);
// gboolean TypeModule::load (::GTypeModule* module_ /*none*/);
GI_INLINE_DECL bool load_ () noexcept override;

// void TypeModule::unload (GTypeModule* module_ /*none*/);
// void TypeModule::unload (::GTypeModule* module_ /*none*/);
GI_INLINE_DECL void unload_ () noexcept override;


};


struct TypeModuleClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TypeModuleClass, load)
  GI_MEMBER_DEFINE(TypeModuleClass, unload)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, load),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unload)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TypeModuleImpl = detail::ObjectImpl<TypeModule, internal::TypeModuleClass>;

} // namespace impl

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
