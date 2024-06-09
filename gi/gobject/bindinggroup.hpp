// AUTO-GENERATED

#ifndef _GI_GOBJECT_BINDINGGROUP_HPP_
#define _GI_GOBJECT_BINDINGGROUP_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class Closure;
class Closure_Ref;
class Object;

class BindingGroup;

namespace base {


#define GI_GOBJECT_BINDINGGROUP_BASE base::BindingGroupBase
class BindingGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GBindingGroup BaseObjectType;

BindingGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_binding_group_get_type(); } 

// GBindingGroup* /*full*/ g_binding_group_new ();
// ::GBindingGroup* /*full*/ g_binding_group_new ();
static GI_INLINE_DECL GObject::BindingGroup new_ () noexcept;

// void g_binding_group_bind (GBindingGroup* self /*none*/, const gchar* source_property /*none*/, gpointer target /*none*/, const gchar* target_property /*none*/, GBindingFlags flags);
// void g_binding_group_bind (::GBindingGroup* self /*none*/, const char* source_property /*none*/, ::GObject* target /*none*/, const char* target_property /*none*/, ::GBindingFlags flags);
GI_INLINE_DECL void bind (const gi::cstring_v source_property, GObject::Object target, const gi::cstring_v target_property, GObject::BindingFlags flags) noexcept;

// void g_binding_group_bind_full (GBindingGroup* self /*none*/, const gchar* source_property /*none*/, gpointer target /*none*/, const gchar* target_property /*none*/, GBindingFlags flags, GBindingTransformFunc transform_to /*none,nullable*/, GBindingTransformFunc transform_from /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_destroy /*none*/);
// void g_binding_group_bind_full (::GBindingGroup* self /*none*/, const char* source_property /*none*/, ::GObject* target /*none*/, const char* target_property /*none*/, ::GBindingFlags flags, GObject::BindingTransformFunc::cfunction_type transform_to /*none,nullable*/, GObject::BindingTransformFunc::cfunction_type transform_from /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy /*none*/);
// SKIP; callback misses closure info

// void g_binding_group_bind_with_closures (GBindingGroup* self /*none*/, const gchar* source_property /*none*/, gpointer target /*none*/, const gchar* target_property /*none*/, GBindingFlags flags, GClosure* transform_to /*none,nullable*/, GClosure* transform_from /*none,nullable*/);
// void g_binding_group_bind_with_closures (::GBindingGroup* self /*none*/, const char* source_property /*none*/, ::GObject* target /*none*/, const char* target_property /*none*/, ::GBindingFlags flags, ::GClosure* transform_to /*none,nullable*/, ::GClosure* transform_from /*none,nullable*/);
GI_INLINE_DECL void bind_full (const gi::cstring_v source_property, GObject::Object target, const gi::cstring_v target_property, GObject::BindingFlags flags, GObject::Closure_Ref transform_to, GObject::Closure_Ref transform_from) noexcept;
GI_INLINE_DECL void bind_full (const gi::cstring_v source_property, GObject::Object target, const gi::cstring_v target_property, GObject::BindingFlags flags) noexcept;

// gpointer /*none,nullable*/ g_binding_group_dup_source (GBindingGroup* self /*none*/);
// ::GObject* /*none,nullable*/ g_binding_group_dup_source (::GBindingGroup* self /*none*/);
GI_INLINE_DECL GObject::Object dup_source () noexcept;

// void g_binding_group_set_source (GBindingGroup* self /*none*/, gpointer source /*none,nullable*/);
// void g_binding_group_set_source (::GBindingGroup* self /*none*/, ::GObject* source /*none,nullable*/);
GI_INLINE_DECL void set_source (GObject::Object source) noexcept;
GI_INLINE_DECL void set_source () noexcept;

gi::property_proxy<GObject::Object, base::BindingGroupBase> property_source()
{ return gi::property_proxy<GObject::Object, base::BindingGroupBase> (*this, "source"); }
const gi::property_proxy<GObject::Object, base::BindingGroupBase> property_source() const
{ return gi::property_proxy<GObject::Object, base::BindingGroupBase> (*this, "source"); }

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra_def.hpp>)
#include <gobject/bindinggroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra.hpp>)
#include <gobject/bindinggroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class BindingGroup : public GI_GOBJECT_BINDINGGROUP_BASE
{ typedef GI_GOBJECT_BINDINGGROUP_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GBindingGroup>
{ typedef GObject::BindingGroup type; }; 

} // namespace repository

} // namespace gi

#endif
