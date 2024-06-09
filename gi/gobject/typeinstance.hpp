// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINSTANCE_HPP_
#define _GI_GOBJECT_TYPEINSTANCE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeInstance_Ref;

class TypeInstance;

namespace base {


#define GI_GOBJECT_TYPEINSTANCE_BASE base::TypeInstanceBase
class TypeInstanceBase : public gi::detail::CBoxedWrapperBase<TypeInstanceBase, ::GTypeInstance>
{
typedef gi::detail::CBoxedWrapperBase<TypeInstanceBase, ::GTypeInstance> super_type;
public:

TypeInstanceBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_type_instance_get_private (GTypeInstance* instance /*none*/, GType private_type);
// void* g_type_instance_get_private (::GTypeInstance* instance /*none*/, GType private_type);
GI_INLINE_DECL gpointer get_private (GType private_type) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinstance_extra_def.hpp>)
#include <gobject/typeinstance_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinstance_extra.hpp>)
#include <gobject/typeinstance_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeInstance_Ref;

class TypeInstance : public gi::detail::CBoxedWrapper<TypeInstance, ::GTypeInstance, GI_GOBJECT_TYPEINSTANCE_BASE, TypeInstance_Ref>
{ typedef gi::detail::CBoxedWrapper<TypeInstance, ::GTypeInstance, GI_GOBJECT_TYPEINSTANCE_BASE, TypeInstance_Ref> super_type; using super_type::super_type; };


class TypeInstance_Ref : public gi::detail::CBoxedRefWrapper<TypeInstance, ::GTypeInstance, GI_GOBJECT_TYPEINSTANCE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TypeInstance, ::GTypeInstance, GI_GOBJECT_TYPEINSTANCE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeInstance>
{ typedef GObject::TypeInstance type; }; 

} // namespace repository

} // namespace gi

#endif
