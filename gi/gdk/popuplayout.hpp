// AUTO-GENERATED

#ifndef _GI_GDK_POPUPLAYOUT_HPP_
#define _GI_GDK_POPUPLAYOUT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class PopupLayout_Ref;
class Rectangle;
class Rectangle_Ref;

class PopupLayout;

namespace base {


#define GI_GDK_POPUPLAYOUT_BASE base::PopupLayoutBase
class PopupLayoutBase : public gi::detail::GBoxedWrapperBase<PopupLayoutBase, ::GdkPopupLayout>
{
typedef gi::detail::GBoxedWrapperBase<PopupLayoutBase, ::GdkPopupLayout> super_type;
public:

PopupLayoutBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_popup_layout_get_type(); } 

// GdkPopupLayout* /*full*/ gdk_popup_layout_new (const GdkRectangle* anchor_rect /*none*/, GdkGravity rect_anchor, GdkGravity surface_anchor);
// ::GdkPopupLayout* /*full*/ gdk_popup_layout_new (const ::GdkRectangle* anchor_rect /*none*/, ::GdkGravity rect_anchor, ::GdkGravity surface_anchor);
static GI_INLINE_DECL Gdk::PopupLayout new_ (const Gdk::Rectangle_Ref anchor_rect, Gdk::Gravity rect_anchor, Gdk::Gravity surface_anchor) noexcept;

// GdkPopupLayout* /*full*/ gdk_popup_layout_copy (GdkPopupLayout* layout /*none*/);
// ::GdkPopupLayout* /*full*/ gdk_popup_layout_copy (::GdkPopupLayout* layout /*none*/);
GI_INLINE_DECL Gdk::PopupLayout copy () noexcept;

// gboolean gdk_popup_layout_equal (GdkPopupLayout* layout /*none*/, GdkPopupLayout* other /*none*/);
// gboolean gdk_popup_layout_equal (::GdkPopupLayout* layout /*none*/, ::GdkPopupLayout* other /*none*/);
GI_INLINE_DECL bool equal (Gdk::PopupLayout_Ref other) noexcept;

// GdkAnchorHints gdk_popup_layout_get_anchor_hints (GdkPopupLayout* layout /*none*/);
// ::GdkAnchorHints gdk_popup_layout_get_anchor_hints (::GdkPopupLayout* layout /*none*/);
GI_INLINE_DECL Gdk::AnchorHints get_anchor_hints () noexcept;

// const GdkRectangle* /*none*/ gdk_popup_layout_get_anchor_rect (GdkPopupLayout* layout /*none*/);
// const ::GdkRectangle* /*none*/ gdk_popup_layout_get_anchor_rect (::GdkPopupLayout* layout /*none*/);
GI_INLINE_DECL Gdk::Rectangle_Ref get_anchor_rect () noexcept;

// void gdk_popup_layout_get_offset (GdkPopupLayout* layout /*none*/, int* dx, int* dy);
// void gdk_popup_layout_get_offset (::GdkPopupLayout* layout /*none*/, gint* dx, gint* dy);
GI_INLINE_DECL void get_offset (gint & dx, gint & dy) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_offset () noexcept;

// GdkGravity gdk_popup_layout_get_rect_anchor (GdkPopupLayout* layout /*none*/);
// ::GdkGravity gdk_popup_layout_get_rect_anchor (::GdkPopupLayout* layout /*none*/);
GI_INLINE_DECL Gdk::Gravity get_rect_anchor () noexcept;

// void gdk_popup_layout_get_shadow_width (GdkPopupLayout* layout /*none*/, int* left, int* right, int* top, int* bottom);
// void gdk_popup_layout_get_shadow_width (::GdkPopupLayout* layout /*none*/, gint* left, gint* right, gint* top, gint* bottom);
GI_INLINE_DECL void get_shadow_width (gint & left, gint & right, gint & top, gint & bottom) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> get_shadow_width () noexcept;

// GdkGravity gdk_popup_layout_get_surface_anchor (GdkPopupLayout* layout /*none*/);
// ::GdkGravity gdk_popup_layout_get_surface_anchor (::GdkPopupLayout* layout /*none*/);
GI_INLINE_DECL Gdk::Gravity get_surface_anchor () noexcept;

// GdkPopupLayout* /*full*/ gdk_popup_layout_ref (GdkPopupLayout* layout /*none*/);
// ::GdkPopupLayout* /*full*/ gdk_popup_layout_ref (::GdkPopupLayout* layout /*none*/);
// IGNORE; marked ignore

// void gdk_popup_layout_set_anchor_hints (GdkPopupLayout* layout /*none*/, GdkAnchorHints anchor_hints);
// void gdk_popup_layout_set_anchor_hints (::GdkPopupLayout* layout /*none*/, ::GdkAnchorHints anchor_hints);
GI_INLINE_DECL void set_anchor_hints (Gdk::AnchorHints anchor_hints) noexcept;

// void gdk_popup_layout_set_anchor_rect (GdkPopupLayout* layout /*none*/, const GdkRectangle* anchor_rect /*none*/);
// void gdk_popup_layout_set_anchor_rect (::GdkPopupLayout* layout /*none*/, const ::GdkRectangle* anchor_rect /*none*/);
GI_INLINE_DECL void set_anchor_rect (const Gdk::Rectangle_Ref anchor_rect) noexcept;

// void gdk_popup_layout_set_offset (GdkPopupLayout* layout /*none*/, int dx, int dy);
// void gdk_popup_layout_set_offset (::GdkPopupLayout* layout /*none*/, gint dx, gint dy);
GI_INLINE_DECL void set_offset (gint dx, gint dy) noexcept;

// void gdk_popup_layout_set_rect_anchor (GdkPopupLayout* layout /*none*/, GdkGravity anchor);
// void gdk_popup_layout_set_rect_anchor (::GdkPopupLayout* layout /*none*/, ::GdkGravity anchor);
GI_INLINE_DECL void set_rect_anchor (Gdk::Gravity anchor) noexcept;

// void gdk_popup_layout_set_shadow_width (GdkPopupLayout* layout /*none*/, int left, int right, int top, int bottom);
// void gdk_popup_layout_set_shadow_width (::GdkPopupLayout* layout /*none*/, gint left, gint right, gint top, gint bottom);
GI_INLINE_DECL void set_shadow_width (gint left, gint right, gint top, gint bottom) noexcept;

// void gdk_popup_layout_set_surface_anchor (GdkPopupLayout* layout /*none*/, GdkGravity anchor);
// void gdk_popup_layout_set_surface_anchor (::GdkPopupLayout* layout /*none*/, ::GdkGravity anchor);
GI_INLINE_DECL void set_surface_anchor (Gdk::Gravity anchor) noexcept;

// void gdk_popup_layout_unref (GdkPopupLayout* layout /*none*/);
// void gdk_popup_layout_unref (::GdkPopupLayout* layout /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/popuplayout_extra_def.hpp>)
#include <gdk/popuplayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/popuplayout_extra.hpp>)
#include <gdk/popuplayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class PopupLayout_Ref;

class PopupLayout : public gi::detail::GBoxedWrapper<PopupLayout, ::GdkPopupLayout, GI_GDK_POPUPLAYOUT_BASE, PopupLayout_Ref>
{ typedef gi::detail::GBoxedWrapper<PopupLayout, ::GdkPopupLayout, GI_GDK_POPUPLAYOUT_BASE, PopupLayout_Ref> super_type; using super_type::super_type; };


class PopupLayout_Ref : public gi::detail::GBoxedRefWrapper<PopupLayout, ::GdkPopupLayout, GI_GDK_POPUPLAYOUT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PopupLayout, ::GdkPopupLayout, GI_GDK_POPUPLAYOUT_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkPopupLayout>
{ typedef Gdk::PopupLayout type; }; 

} // namespace repository

} // namespace gi

#endif
