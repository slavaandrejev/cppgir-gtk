// AUTO-GENERATED

#ifndef _GI_GOBJECT_WEAKREF_HPP_
#define _GI_GOBJECT_WEAKREF_HPP_


namespace gi {

namespace repository {

namespace GObject {

class Object;
class WeakRef_Ref;

class WeakRef;

namespace base {


#define GI_GOBJECT_WEAKREF_BASE base::WeakRefBase
class WeakRefBase : public gi::detail::CBoxedWrapperBase<WeakRefBase, ::GWeakRef>
{
typedef gi::detail::CBoxedWrapperBase<WeakRefBase, ::GWeakRef> super_type;
public:

WeakRefBase (std::nullptr_t = nullptr) : super_type() {}

// void g_weak_ref_clear (GWeakRef* weak_ref /*full,inout*/);
// void g_weak_ref_clear (::GWeakRef** weak_ref /*full,inout*/);
// IGNORE; not introspectable, inconsistent weak_ref inout pointer depth (1 vs 2)

// gpointer /*full*/ g_weak_ref_get (GWeakRef* weak_ref /*full,inout*/);
// ::GObject* /*full*/ g_weak_ref_get (::GWeakRef** weak_ref /*full,inout*/);
// IGNORE; not introspectable, inconsistent weak_ref inout pointer depth (1 vs 2)

// void g_weak_ref_init (GWeakRef* weak_ref /*full,inout*/, gpointer object /*none,nullable*/);
// void g_weak_ref_init (::GWeakRef** weak_ref /*full,inout*/, ::GObject* object /*none,nullable*/);
// IGNORE; not introspectable, inconsistent weak_ref inout pointer depth (1 vs 2)

// void g_weak_ref_set (GWeakRef* weak_ref /*none*/, gpointer object /*none,nullable*/);
// void g_weak_ref_set (::GWeakRef* weak_ref /*none*/, ::GObject* object /*none,nullable*/);
GI_INLINE_DECL void set (GObject::Object object) noexcept;
GI_INLINE_DECL void set () noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/weakref_extra_def.hpp>)
#include <gobject/weakref_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/weakref_extra.hpp>)
#include <gobject/weakref_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class WeakRef_Ref;

class WeakRef : public gi::detail::CBoxedWrapper<WeakRef, ::GWeakRef, GI_GOBJECT_WEAKREF_BASE, WeakRef_Ref>
{ typedef gi::detail::CBoxedWrapper<WeakRef, ::GWeakRef, GI_GOBJECT_WEAKREF_BASE, WeakRef_Ref> super_type; using super_type::super_type; };


class WeakRef_Ref : public gi::detail::CBoxedRefWrapper<WeakRef, ::GWeakRef, GI_GOBJECT_WEAKREF_BASE>
{ typedef gi::detail::CBoxedRefWrapper<WeakRef, ::GWeakRef, GI_GOBJECT_WEAKREF_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GWeakRef>
{ typedef GObject::WeakRef type; }; 

} // namespace repository

} // namespace gi

#endif
