// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPECLASS_HPP_
#define _GI_GOBJECT_TYPECLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeClass_Ref;

class TypeClass;

namespace base {


#define GI_GOBJECT_TYPECLASS_BASE base::TypeClassBase
class TypeClassBase : public gi::detail::CBoxedWrapperBase<TypeClassBase, ::GTypeClass>
{
typedef gi::detail::CBoxedWrapperBase<TypeClassBase, ::GTypeClass> super_type;
public:

TypeClassBase (std::nullptr_t = nullptr) : super_type() {}

// void g_type_class_add_private (gpointer g_class /*none*/, gsize private_size);
// void g_type_class_add_private (::GTypeClass* g_class /*none*/, gsize private_size);
// IGNORE; deprecated

// gint g_type_class_get_instance_private_offset (gpointer g_class /*none*/);
// gint g_type_class_get_instance_private_offset (::GTypeClass* g_class /*none*/);
GI_INLINE_DECL gint get_instance_private_offset () noexcept;

// gpointer g_type_class_get_private (GTypeClass* klass /*none*/, GType private_type);
// void* g_type_class_get_private (::GTypeClass* klass /*none*/, GType private_type);
GI_INLINE_DECL gpointer get_private (GType private_type) noexcept;

// gpointer /*none*/ g_type_class_peek_parent (gpointer g_class /*none*/);
// ::GTypeClass* /*none*/ g_type_class_peek_parent (::GTypeClass* g_class /*none*/);
GI_INLINE_DECL GObject::TypeClass_Ref peek_parent () noexcept;

// void g_type_class_unref (gpointer g_class /*none*/);
// void g_type_class_unref (::GTypeClass* g_class /*none*/);
// IGNORE; marked ignore

// void g_type_class_unref_uncached (gpointer g_class /*none*/);
// void g_type_class_unref_uncached (::GTypeClass* g_class /*none*/);
GI_INLINE_DECL void unref_uncached () noexcept;

// void g_type_class_adjust_private_offset (gpointer g_class, gint* private_size_or_offset);
// void g_type_class_adjust_private_offset (void* g_class, gint private_size_or_offset);
// SKIP; inconsistent private_size_or_offset in pointer depth (1 vs 0)

// gpointer /*none*/ g_type_class_peek (GType type);
// ::GTypeClass* /*none*/ g_type_class_peek (GType type);
static GI_INLINE_DECL GObject::TypeClass_Ref peek (GType type) noexcept;

// gpointer /*none*/ g_type_class_peek_static (GType type);
// ::GTypeClass* /*none*/ g_type_class_peek_static (GType type);
static GI_INLINE_DECL GObject::TypeClass_Ref peek_static (GType type) noexcept;

// gpointer /*none*/ g_type_class_ref (GType type);
// ::GTypeClass* /*none*/ g_type_class_ref (GType type);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeclass_extra_def.hpp>)
#include <gobject/typeclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeclass_extra.hpp>)
#include <gobject/typeclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeClass_Ref;

class TypeClass : public gi::detail::CBoxedWrapper<TypeClass, ::GTypeClass, GI_GOBJECT_TYPECLASS_BASE, TypeClass_Ref>
{ typedef gi::detail::CBoxedWrapper<TypeClass, ::GTypeClass, GI_GOBJECT_TYPECLASS_BASE, TypeClass_Ref> super_type; using super_type::super_type; };


class TypeClass_Ref : public gi::detail::CBoxedRefWrapper<TypeClass, ::GTypeClass, GI_GOBJECT_TYPECLASS_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TypeClass, ::GTypeClass, GI_GOBJECT_TYPECLASS_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeClass>
{ typedef GObject::TypeClass type; }; 

} // namespace repository

} // namespace gi

#endif
