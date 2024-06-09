// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINTERFACE_HPP_
#define _GI_GOBJECT_TYPEINTERFACE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeClass;
class TypeClass_Ref;
class TypeInterface_Ref;
class TypePlugin;

class TypeInterface;

namespace base {


#define GI_GOBJECT_TYPEINTERFACE_BASE base::TypeInterfaceBase
class TypeInterfaceBase : public gi::detail::CBoxedWrapperBase<TypeInterfaceBase, ::GTypeInterface>
{
typedef gi::detail::CBoxedWrapperBase<TypeInterfaceBase, ::GTypeInterface> super_type;
public:

TypeInterfaceBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer /*none*/ g_type_interface_peek_parent (gpointer g_iface /*none*/);
// ::GTypeInterface* /*none*/ g_type_interface_peek_parent (::GTypeInterface* g_iface /*none*/);
GI_INLINE_DECL GObject::TypeInterface_Ref peek_parent () noexcept;

// void g_type_interface_add_prerequisite (GType interface_type, GType prerequisite_type);
// void g_type_interface_add_prerequisite (GType interface_type, GType prerequisite_type);
static GI_INLINE_DECL void add_prerequisite (GType interface_type, GType prerequisite_type) noexcept;

// GTypePlugin* /*none*/ g_type_interface_get_plugin (GType instance_type, GType interface_type);
// ::GTypePlugin* /*none*/ g_type_interface_get_plugin (GType instance_type, GType interface_type);
static GI_INLINE_DECL GObject::TypePlugin get_plugin (GType instance_type, GType interface_type) noexcept;

// GType g_type_interface_instantiatable_prerequisite (GType interface_type);
// GType g_type_interface_instantiatable_prerequisite (GType interface_type);
static GI_INLINE_DECL GType instantiatable_prerequisite (GType interface_type) noexcept;

// gpointer /*none*/ g_type_interface_peek (gpointer instance_class /*none*/, GType iface_type);
// ::GTypeInterface* /*none*/ g_type_interface_peek (::GTypeClass* instance_class /*none*/, GType iface_type);
static GI_INLINE_DECL GObject::TypeInterface_Ref peek (GObject::TypeClass_Ref instance_class, GType iface_type) noexcept;

// GType* /*full*/ g_type_interface_prerequisites (GType interface_type, guint* n_prerequisites);
// GType* /*full*/ g_type_interface_prerequisites (GType interface_type, guint* n_prerequisites);
static GI_INLINE_DECL gi::Collection<gi::DSpan, GType, gi::transfer_full_t> prerequisites (GType interface_type) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinterface_extra_def.hpp>)
#include <gobject/typeinterface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinterface_extra.hpp>)
#include <gobject/typeinterface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeInterface_Ref;

class TypeInterface : public gi::detail::CBoxedWrapper<TypeInterface, ::GTypeInterface, GI_GOBJECT_TYPEINTERFACE_BASE, TypeInterface_Ref>
{ typedef gi::detail::CBoxedWrapper<TypeInterface, ::GTypeInterface, GI_GOBJECT_TYPEINTERFACE_BASE, TypeInterface_Ref> super_type; using super_type::super_type; };


class TypeInterface_Ref : public gi::detail::CBoxedRefWrapper<TypeInterface, ::GTypeInterface, GI_GOBJECT_TYPEINTERFACE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TypeInterface, ::GTypeInterface, GI_GOBJECT_TYPEINTERFACE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeInterface>
{ typedef GObject::TypeInterface type; }; 

} // namespace repository

} // namespace gi

#endif
