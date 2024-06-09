// AUTO-GENERATED

#ifndef _GI_GDK_RECTANGLE_HPP_
#define _GI_GDK_RECTANGLE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Rectangle_Ref;

class Rectangle;

namespace base {


#define GI_GDK_RECTANGLE_BASE base::RectangleBase
class RectangleBase : public gi::detail::GBoxedWrapperBase<RectangleBase, ::GdkRectangle>
{
typedef gi::detail::GBoxedWrapperBase<RectangleBase, ::GdkRectangle> super_type;
public:

RectangleBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_rectangle_get_type(); } 

// gint Rectangle::x (const ::GdkRectangle* obj /*none*/);
// gint Rectangle::x (const ::GdkRectangle* obj /*none*/);
GI_INLINE_DECL gint x_ () const noexcept;

//  Rectangle::x (::GdkRectangle* obj /*none*/, gint _value);
// void Rectangle::x (::GdkRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint Rectangle::y (const ::GdkRectangle* obj /*none*/);
// gint Rectangle::y (const ::GdkRectangle* obj /*none*/);
GI_INLINE_DECL gint y_ () const noexcept;

//  Rectangle::y (::GdkRectangle* obj /*none*/, gint _value);
// void Rectangle::y (::GdkRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint Rectangle::width (const ::GdkRectangle* obj /*none*/);
// gint Rectangle::width (const ::GdkRectangle* obj /*none*/);
GI_INLINE_DECL gint width_ () const noexcept;

//  Rectangle::width (::GdkRectangle* obj /*none*/, gint _value);
// void Rectangle::width (::GdkRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint Rectangle::height (const ::GdkRectangle* obj /*none*/);
// gint Rectangle::height (const ::GdkRectangle* obj /*none*/);
GI_INLINE_DECL gint height_ () const noexcept;

//  Rectangle::height (::GdkRectangle* obj /*none*/, gint _value);
// void Rectangle::height (::GdkRectangle* obj /*none*/, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

// gboolean gdk_rectangle_contains_point (const GdkRectangle* rect /*none*/, int x, int y);
// gboolean gdk_rectangle_contains_point (const ::GdkRectangle* rect /*none*/, gint x, gint y);
GI_INLINE_DECL bool contains_point (gint x, gint y) const noexcept;

// gboolean gdk_rectangle_equal (const GdkRectangle* rect1 /*none*/, const GdkRectangle* rect2 /*none*/);
// gboolean gdk_rectangle_equal (const ::GdkRectangle* rect1 /*none*/, const ::GdkRectangle* rect2 /*none*/);
GI_INLINE_DECL bool equal (const Gdk::Rectangle_Ref rect2) const noexcept;

// gboolean gdk_rectangle_intersect (const GdkRectangle* src1 /*none*/, const GdkRectangle* src2 /*none*/, GdkRectangle* dest /*none,out,opt,ca*/);
// gboolean gdk_rectangle_intersect (const ::GdkRectangle* src1 /*none*/, const ::GdkRectangle* src2 /*none*/, ::GdkRectangle* dest /*none,out,opt,ca*/);
GI_INLINE_DECL bool intersect (const Gdk::Rectangle_Ref src2, Gdk::Rectangle * dest) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> intersect (const Gdk::Rectangle_Ref src2) const noexcept;

// void gdk_rectangle_union (const GdkRectangle* src1 /*none*/, const GdkRectangle* src2 /*none*/, GdkRectangle* dest /*none,out,ca*/);
// void gdk_rectangle_union (const ::GdkRectangle* src1 /*none*/, const ::GdkRectangle* src2 /*none*/, ::GdkRectangle* dest /*none,out,ca*/);
GI_INLINE_DECL void union_ (const Gdk::Rectangle_Ref src2, Gdk::Rectangle & dest) const noexcept;
GI_INLINE_DECL Gdk::Rectangle union_ (const Gdk::Rectangle_Ref src2) const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/rectangle_extra_def.hpp>)
#include <gdk/rectangle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/rectangle_extra.hpp>)
#include <gdk/rectangle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Rectangle_Ref;

class Rectangle : public gi::detail::GBoxedWrapper<Rectangle, ::GdkRectangle, GI_GDK_RECTANGLE_BASE, Rectangle_Ref>
{ typedef gi::detail::GBoxedWrapper<Rectangle, ::GdkRectangle, GI_GDK_RECTANGLE_BASE, Rectangle_Ref> super_type; using super_type::super_type; };


class Rectangle_Ref : public gi::detail::GBoxedRefWrapper<Rectangle, ::GdkRectangle, GI_GDK_RECTANGLE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Rectangle, ::GdkRectangle, GI_GDK_RECTANGLE_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkRectangle>
{ typedef Gdk::Rectangle type; }; 

} // namespace repository

} // namespace gi

#endif
