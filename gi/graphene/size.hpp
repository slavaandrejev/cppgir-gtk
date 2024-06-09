// AUTO-GENERATED

#ifndef _GI_GRAPHENE_SIZE_HPP_
#define _GI_GRAPHENE_SIZE_HPP_


namespace gi {

namespace repository {

namespace Graphene {

class Size_Ref;

class Size;

namespace base {


#define GI_GRAPHENE_SIZE_BASE base::SizeBase
class SizeBase : public gi::detail::GBoxedWrapperBase<SizeBase, ::graphene_size_t>
{
typedef gi::detail::GBoxedWrapperBase<SizeBase, ::graphene_size_t> super_type;
public:

SizeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return graphene_size_get_type(); } 

// gfloat Size::width (const ::graphene_size_t* obj /*none*/);
// gfloat Size::width (const ::graphene_size_t* obj /*none*/);
GI_INLINE_DECL gfloat width_ () const noexcept;

//  Size::width (::graphene_size_t* obj /*none*/, gfloat _value);
// void Size::width (::graphene_size_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void width_ (gfloat _value) noexcept;

// gfloat Size::height (const ::graphene_size_t* obj /*none*/);
// gfloat Size::height (const ::graphene_size_t* obj /*none*/);
GI_INLINE_DECL gfloat height_ () const noexcept;

//  Size::height (::graphene_size_t* obj /*none*/, gfloat _value);
// void Size::height (::graphene_size_t* obj /*none*/, gfloat _value);
GI_INLINE_DECL void height_ (gfloat _value) noexcept;

// graphene_size_t* /*full*/ graphene_size_alloc ();
// ::graphene_size_t* /*full*/ graphene_size_alloc ();
static GI_INLINE_DECL Graphene::Size alloc () noexcept;

// _Bool graphene_size_equal (const graphene_size_t* a /*none*/, const graphene_size_t* b /*none*/);
// gboolean graphene_size_equal (const ::graphene_size_t* a /*none*/, const ::graphene_size_t* b /*none*/);
GI_INLINE_DECL bool equal (const Graphene::Size_Ref b) const noexcept;

// void graphene_size_free (graphene_size_t* s /*none*/);
// void graphene_size_free (::graphene_size_t* s /*none*/);
// IGNORE; marked ignore

// graphene_size_t* /*none*/ graphene_size_init (graphene_size_t* s /*none*/, float width, float height);
// ::graphene_size_t* /*none*/ graphene_size_init (::graphene_size_t* s /*none*/, gfloat width, gfloat height);
GI_INLINE_DECL Graphene::Size_Ref init (gfloat width, gfloat height) noexcept;

// graphene_size_t* /*none*/ graphene_size_init_from_size (graphene_size_t* s /*none*/, const graphene_size_t* src /*none*/);
// ::graphene_size_t* /*none*/ graphene_size_init_from_size (::graphene_size_t* s /*none*/, const ::graphene_size_t* src /*none*/);
GI_INLINE_DECL Graphene::Size_Ref init_from_size (const Graphene::Size_Ref src) noexcept;

// void graphene_size_interpolate (const graphene_size_t* a /*none*/, const graphene_size_t* b /*none*/, double factor, graphene_size_t* res /*none,out,ca*/);
// void graphene_size_interpolate (const ::graphene_size_t* a /*none*/, const ::graphene_size_t* b /*none*/, gdouble factor, ::graphene_size_t* res /*none,out,ca*/);
GI_INLINE_DECL void interpolate (const Graphene::Size_Ref b, gdouble factor, Graphene::Size & res) const noexcept;
GI_INLINE_DECL Graphene::Size interpolate (const Graphene::Size_Ref b, gdouble factor) const noexcept;

// void graphene_size_scale (const graphene_size_t* s /*none*/, float factor, graphene_size_t* res /*none,out,ca*/);
// void graphene_size_scale (const ::graphene_size_t* s /*none*/, gfloat factor, ::graphene_size_t* res /*none,out,ca*/);
GI_INLINE_DECL void scale (gfloat factor, Graphene::Size & res) const noexcept;
GI_INLINE_DECL Graphene::Size scale (gfloat factor) const noexcept;

// const graphene_size_t* /*none*/ graphene_size_zero ();
// const ::graphene_size_t* /*none*/ graphene_size_zero ();
static GI_INLINE_DECL Graphene::Size_Ref zero () noexcept;

}; // class

} // namespace base

} // namespace Graphene

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<graphene/size_extra_def.hpp>)
#include <graphene/size_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<graphene/size_extra.hpp>)
#include <graphene/size_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Graphene {

class Size_Ref;

class Size : public gi::detail::GBoxedWrapper<Size, ::graphene_size_t, GI_GRAPHENE_SIZE_BASE, Size_Ref>
{ typedef gi::detail::GBoxedWrapper<Size, ::graphene_size_t, GI_GRAPHENE_SIZE_BASE, Size_Ref> super_type; using super_type::super_type; };


class Size_Ref : public gi::detail::GBoxedRefWrapper<Size, ::graphene_size_t, GI_GRAPHENE_SIZE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Size, ::graphene_size_t, GI_GRAPHENE_SIZE_BASE> super_type; using super_type::super_type; };

} // namespace Graphene

template<> struct declare_cpptype_of<::graphene_size_t>
{ typedef Graphene::Size type; }; 

} // namespace repository

} // namespace gi

#endif
