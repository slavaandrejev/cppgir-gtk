// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSHAPE_HPP_
#define _GI_PANGO_ATTRSHAPE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class Attribute_Ref;
class Rectangle;
class Rectangle_Ref;

class AttrShape;

namespace base {


#define GI_PANGO_ATTRSHAPE_BASE base::AttrShapeBase
class AttrShapeBase : public gi::detail::CBoxedWrapperBase<AttrShapeBase, ::PangoAttrShape>
{
typedef gi::detail::CBoxedWrapperBase<AttrShapeBase, ::PangoAttrShape> super_type;
public:

AttrShapeBase (std::nullptr_t = nullptr) : super_type() {}

// PangoAttribute* /*full*/ pango_attr_shape_new (const PangoRectangle* ink_rect /*none*/, const PangoRectangle* logical_rect /*none*/);
// ::PangoAttribute* /*full*/ pango_attr_shape_new (const ::PangoRectangle* ink_rect /*none*/, const ::PangoRectangle* logical_rect /*none*/);
static GI_INLINE_DECL Pango::Attribute new_ (const Pango::Rectangle_Ref ink_rect, const Pango::Rectangle_Ref logical_rect) noexcept;

// PangoAttribute* /*full*/ pango_attr_shape_new_with_data (const PangoRectangle* ink_rect /*none*/, const PangoRectangle* logical_rect /*none*/, gpointer data, PangoAttrDataCopyFunc copy_func /*none,nullable*/, GDestroyNotify destroy_func /*none,nullable*/);
// ::PangoAttribute* /*full*/ pango_attr_shape_new_with_data (const ::PangoRectangle* ink_rect /*none*/, const ::PangoRectangle* logical_rect /*none*/, void* data,  copy_func /*none,nullable*/, GLib::DestroyNotify::cfunction_type destroy_func /*none,nullable*/);
// SKIP; copy_func type  not supported

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrshape_extra_def.hpp>)
#include <pango/attrshape_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrshape_extra.hpp>)
#include <pango/attrshape_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrShape_Ref;

class AttrShape : public gi::detail::CBoxedWrapper<AttrShape, ::PangoAttrShape, GI_PANGO_ATTRSHAPE_BASE, AttrShape_Ref>
{ typedef gi::detail::CBoxedWrapper<AttrShape, ::PangoAttrShape, GI_PANGO_ATTRSHAPE_BASE, AttrShape_Ref> super_type; using super_type::super_type; };


class AttrShape_Ref : public gi::detail::CBoxedRefWrapper<AttrShape, ::PangoAttrShape, GI_PANGO_ATTRSHAPE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<AttrShape, ::PangoAttrShape, GI_PANGO_ATTRSHAPE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrShape>
{ typedef Pango::AttrShape type; }; 

} // namespace repository

} // namespace gi

#endif
