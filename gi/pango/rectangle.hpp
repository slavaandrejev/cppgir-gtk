// AUTO-GENERATED

#ifndef _GI_PANGO_RECTANGLE_HPP_
#define _GI_PANGO_RECTANGLE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Rectangle_Ref;

class Rectangle;

namespace base {


#define GI_PANGO_RECTANGLE_BASE base::RectangleBase
class RectangleBase : public gi::detail::CBoxedWrapperBase<RectangleBase, ::PangoRectangle>
{
typedef gi::detail::CBoxedWrapperBase<RectangleBase, ::PangoRectangle> super_type;
public:

RectangleBase (std::nullptr_t = nullptr) : super_type() {}

// gint Rectangle::x (const ::PangoRectangle* obj /*none*/);
// gint Rectangle::x (const ::PangoRectangle* obj /*none*/);
GI_INLINE_DECL gint x_ () const noexcept;

//  Rectangle::x (::PangoRectangle* obj /*none*/, gint _value);
// void Rectangle::x (::PangoRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint Rectangle::y (const ::PangoRectangle* obj /*none*/);
// gint Rectangle::y (const ::PangoRectangle* obj /*none*/);
GI_INLINE_DECL gint y_ () const noexcept;

//  Rectangle::y (::PangoRectangle* obj /*none*/, gint _value);
// void Rectangle::y (::PangoRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint Rectangle::width (const ::PangoRectangle* obj /*none*/);
// gint Rectangle::width (const ::PangoRectangle* obj /*none*/);
GI_INLINE_DECL gint width_ () const noexcept;

//  Rectangle::width (::PangoRectangle* obj /*none*/, gint _value);
// void Rectangle::width (::PangoRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint Rectangle::height (const ::PangoRectangle* obj /*none*/);
// gint Rectangle::height (const ::PangoRectangle* obj /*none*/);
GI_INLINE_DECL gint height_ () const noexcept;

//  Rectangle::height (::PangoRectangle* obj /*none*/, gint _value);
// void Rectangle::height (::PangoRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/rectangle_extra_def.hpp>)
#include <pango/rectangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/rectangle_extra.hpp>)
#include <pango/rectangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Rectangle_Ref;

class Rectangle : public gi::detail::CBoxedWrapper<Rectangle, ::PangoRectangle, GI_PANGO_RECTANGLE_BASE, Rectangle_Ref>
{ typedef gi::detail::CBoxedWrapper<Rectangle, ::PangoRectangle, GI_PANGO_RECTANGLE_BASE, Rectangle_Ref> super_type; using super_type::super_type; };


class Rectangle_Ref : public gi::detail::CBoxedRefWrapper<Rectangle, ::PangoRectangle, GI_PANGO_RECTANGLE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<Rectangle, ::PangoRectangle, GI_PANGO_RECTANGLE_BASE> super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoRectangle>
{ typedef Pango::Rectangle type; }; 

} // namespace repository

} // namespace gi

#endif
