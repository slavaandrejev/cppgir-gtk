// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEPLUGIN_HPP_
#define _GI_GOBJECT_TYPEPLUGIN_HPP_


namespace gi {

namespace repository {

namespace GObject {

class InterfaceInfo;
class InterfaceInfo_Ref;
class TypeInfo;
class TypeInfo_Ref;
class TypeValueTable;
class TypeValueTable_Ref;

class TypePlugin;

namespace base {


#define GI_GOBJECT_TYPEPLUGIN_BASE base::TypePluginBase
class TypePluginBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GTypePlugin BaseObjectType;

TypePluginBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_type_plugin_get_type(); } 

// void g_type_plugin_complete_interface_info (GTypePlugin* plugin /*none*/, GType instance_type, GType interface_type, GInterfaceInfo* info /*none*/);
// void g_type_plugin_complete_interface_info (::GTypePlugin* plugin /*none*/, GType instance_type, GType interface_type, ::GInterfaceInfo* info /*none*/);
GI_INLINE_DECL void complete_interface_info (GType instance_type, GType interface_type, GObject::InterfaceInfo_Ref info) noexcept;

// void g_type_plugin_complete_type_info (GTypePlugin* plugin /*none*/, GType g_type, GTypeInfo* info /*none*/, GTypeValueTable* value_table /*none*/);
// void g_type_plugin_complete_type_info (::GTypePlugin* plugin /*none*/, GType g_type, ::GTypeInfo* info /*none*/, ::GTypeValueTable* value_table /*none*/);
GI_INLINE_DECL void complete_type_info (GType g_type, GObject::TypeInfo_Ref info, GObject::TypeValueTable_Ref value_table) noexcept;

// void g_type_plugin_unuse (GTypePlugin* plugin /*none*/);
// void g_type_plugin_unuse (::GTypePlugin* plugin /*none*/);
GI_INLINE_DECL void unuse () noexcept;

// void g_type_plugin_use (GTypePlugin* plugin /*none*/);
// void g_type_plugin_use (::GTypePlugin* plugin /*none*/);
GI_INLINE_DECL void use () noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeplugin_extra_def.hpp>)
#include <gobject/typeplugin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeplugin_extra.hpp>)
#include <gobject/typeplugin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypePlugin : public GI_GOBJECT_TYPEPLUGIN_BASE
{ typedef GI_GOBJECT_TYPEPLUGIN_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypePlugin>
{ typedef GObject::TypePlugin type; }; 

} // namespace repository

} // namespace gi

#endif
