// AUTO-GENERATED

#ifndef _GI_GSK_ROUNDEDRECT_HPP_
#define _GI_GSK_ROUNDEDRECT_HPP_


namespace gi {

namespace repository {

namespace Gsk {

class RoundedRect_Ref;

class RoundedRect;

namespace base {


#define GI_GSK_ROUNDEDRECT_BASE base::RoundedRectBase
class RoundedRectBase : public gi::detail::CBoxedWrapperBase<RoundedRectBase, ::GskRoundedRect>
{
typedef gi::detail::CBoxedWrapperBase<RoundedRectBase, ::GskRoundedRect> super_type;
public:

RoundedRectBase (std::nullptr_t = nullptr) : super_type() {}

// gboolean gsk_rounded_rect_contains_point (const GskRoundedRect* self /*none*/, const graphene_point_t* point /*none*/);
// gboolean gsk_rounded_rect_contains_point (const ::GskRoundedRect* self /*none*/, const ::graphene_point_t* point /*none*/);
GI_INLINE_DECL bool contains_point (const Graphene::Point_Ref point) const noexcept;

// gboolean gsk_rounded_rect_contains_rect (const GskRoundedRect* self /*none*/, const graphene_rect_t* rect /*none*/);
// gboolean gsk_rounded_rect_contains_rect (const ::GskRoundedRect* self /*none*/, const ::graphene_rect_t* rect /*none*/);
GI_INLINE_DECL bool contains_rect (const Graphene::Rect_Ref rect) const noexcept;

// GskRoundedRect* /*none*/ gsk_rounded_rect_init (GskRoundedRect* self /*none*/, const graphene_rect_t* bounds /*none*/, const graphene_size_t* top_left /*none*/, const graphene_size_t* top_right /*none*/, const graphene_size_t* bottom_right /*none*/, const graphene_size_t* bottom_left /*none*/);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_init (::GskRoundedRect* self /*none*/, const ::graphene_rect_t* bounds /*none*/, const ::graphene_size_t* top_left /*none*/, const ::graphene_size_t* top_right /*none*/, const ::graphene_size_t* bottom_right /*none*/, const ::graphene_size_t* bottom_left /*none*/);
GI_INLINE_DECL Gsk::RoundedRect_Ref init (const Graphene::Rect_Ref bounds, const Graphene::Size_Ref top_left, const Graphene::Size_Ref top_right, const Graphene::Size_Ref bottom_right, const Graphene::Size_Ref bottom_left) noexcept;

// GskRoundedRect* /*none*/ gsk_rounded_rect_init_copy (GskRoundedRect* self /*none*/, const GskRoundedRect* src /*none*/);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_init_copy (::GskRoundedRect* self /*none*/, const ::GskRoundedRect* src /*none*/);
GI_INLINE_DECL Gsk::RoundedRect_Ref init_copy (const Gsk::RoundedRect_Ref src) noexcept;

// GskRoundedRect* /*none*/ gsk_rounded_rect_init_from_rect (GskRoundedRect* self /*none*/, const graphene_rect_t* bounds /*none*/, float radius);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_init_from_rect (::GskRoundedRect* self /*none*/, const ::graphene_rect_t* bounds /*none*/, gfloat radius);
GI_INLINE_DECL Gsk::RoundedRect_Ref init_from_rect (const Graphene::Rect_Ref bounds, gfloat radius) noexcept;

// gboolean gsk_rounded_rect_intersects_rect (const GskRoundedRect* self /*none*/, const graphene_rect_t* rect /*none*/);
// gboolean gsk_rounded_rect_intersects_rect (const ::GskRoundedRect* self /*none*/, const ::graphene_rect_t* rect /*none*/);
GI_INLINE_DECL bool intersects_rect (const Graphene::Rect_Ref rect) const noexcept;

// gboolean gsk_rounded_rect_is_rectilinear (const GskRoundedRect* self /*none*/);
// gboolean gsk_rounded_rect_is_rectilinear (const ::GskRoundedRect* self /*none*/);
GI_INLINE_DECL bool is_rectilinear () const noexcept;

// GskRoundedRect* /*none*/ gsk_rounded_rect_normalize (GskRoundedRect* self /*none*/);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_normalize (::GskRoundedRect* self /*none*/);
GI_INLINE_DECL Gsk::RoundedRect_Ref normalize () noexcept;

// GskRoundedRect* /*none*/ gsk_rounded_rect_offset (GskRoundedRect* self /*none*/, float dx, float dy);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_offset (::GskRoundedRect* self /*none*/, gfloat dx, gfloat dy);
GI_INLINE_DECL Gsk::RoundedRect_Ref offset (gfloat dx, gfloat dy) noexcept;

// GskRoundedRect* /*none*/ gsk_rounded_rect_shrink (GskRoundedRect* self /*none*/, float top, float right, float bottom, float left);
// ::GskRoundedRect* /*none*/ gsk_rounded_rect_shrink (::GskRoundedRect* self /*none*/, gfloat top, gfloat right, gfloat bottom, gfloat left);
GI_INLINE_DECL Gsk::RoundedRect_Ref shrink (gfloat top, gfloat right, gfloat bottom, gfloat left) noexcept;

}; // class

} // namespace base

} // namespace Gsk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gsk/roundedrect_extra_def.hpp>)
#include <gsk/roundedrect_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gsk/roundedrect_extra.hpp>)
#include <gsk/roundedrect_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gsk {

class RoundedRect_Ref;

class RoundedRect : public gi::detail::CBoxedWrapper<RoundedRect, ::GskRoundedRect, GI_GSK_ROUNDEDRECT_BASE, RoundedRect_Ref>
{ typedef gi::detail::CBoxedWrapper<RoundedRect, ::GskRoundedRect, GI_GSK_ROUNDEDRECT_BASE, RoundedRect_Ref> super_type; using super_type::super_type; };


class RoundedRect_Ref : public gi::detail::CBoxedRefWrapper<RoundedRect, ::GskRoundedRect, GI_GSK_ROUNDEDRECT_BASE>
{ typedef gi::detail::CBoxedRefWrapper<RoundedRect, ::GskRoundedRect, GI_GSK_ROUNDEDRECT_BASE> super_type; using super_type::super_type; };

} // namespace Gsk

template<> struct declare_cpptype_of<::GskRoundedRect>
{ typedef Gsk::RoundedRect type; }; 

} // namespace repository

} // namespace gi

#endif
