// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEPLUGINCLASS_HPP_
#define _GI_GOBJECT_TYPEPLUGINCLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypePluginClass;

namespace base {


#define GI_GOBJECT_TYPEPLUGINCLASS_BASE base::TypePluginClassBase
class TypePluginClassBase : public gi::detail::CBoxedWrapperBase<TypePluginClassBase, ::GTypePluginClass>
{
typedef gi::detail::CBoxedWrapperBase<TypePluginClassBase, ::GTypePluginClass> super_type;
public:

TypePluginClassBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typepluginclass_extra_def.hpp>)
#include <gobject/typepluginclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typepluginclass_extra.hpp>)
#include <gobject/typepluginclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypePluginClass_Ref;

class TypePluginClass : public gi::detail::CBoxedWrapper<TypePluginClass, ::GTypePluginClass, GI_GOBJECT_TYPEPLUGINCLASS_BASE, TypePluginClass_Ref>
{ typedef gi::detail::CBoxedWrapper<TypePluginClass, ::GTypePluginClass, GI_GOBJECT_TYPEPLUGINCLASS_BASE, TypePluginClass_Ref> super_type; using super_type::super_type; };


class TypePluginClass_Ref : public gi::detail::CBoxedRefWrapper<TypePluginClass, ::GTypePluginClass, GI_GOBJECT_TYPEPLUGINCLASS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TypePluginClass, ::GTypePluginClass, GI_GOBJECT_TYPEPLUGINCLASS_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypePluginClass>
{ typedef GObject::TypePluginClass type; }; 

} // namespace repository

} // namespace gi

#endif
