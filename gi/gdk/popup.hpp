// AUTO-GENERATED

#ifndef _GI_GDK_POPUP_HPP_
#define _GI_GDK_POPUP_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class PopupLayout;
class PopupLayout_Ref;
class Surface;

class Popup;

namespace base {


#define GI_GDK_POPUP_BASE base::PopupBase
class PopupBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GdkPopup BaseObjectType;

PopupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_popup_get_type(); } 

// gboolean gdk_popup_get_autohide (GdkPopup* popup /*none*/);
// gboolean gdk_popup_get_autohide (::GdkPopup* popup /*none*/);
GI_INLINE_DECL bool get_autohide () noexcept;

// GdkSurface* /*none,nullable*/ gdk_popup_get_parent (GdkPopup* popup /*none*/);
// ::GdkSurface* /*none,nullable*/ gdk_popup_get_parent (::GdkPopup* popup /*none*/);
GI_INLINE_DECL Gdk::Surface get_parent () noexcept;

// int gdk_popup_get_position_x (GdkPopup* popup /*none*/);
// gint gdk_popup_get_position_x (::GdkPopup* popup /*none*/);
GI_INLINE_DECL gint get_position_x () noexcept;

// int gdk_popup_get_position_y (GdkPopup* popup /*none*/);
// gint gdk_popup_get_position_y (::GdkPopup* popup /*none*/);
GI_INLINE_DECL gint get_position_y () noexcept;

// GdkGravity gdk_popup_get_rect_anchor (GdkPopup* popup /*none*/);
// ::GdkGravity gdk_popup_get_rect_anchor (::GdkPopup* popup /*none*/);
GI_INLINE_DECL Gdk::Gravity get_rect_anchor () noexcept;

// GdkGravity gdk_popup_get_surface_anchor (GdkPopup* popup /*none*/);
// ::GdkGravity gdk_popup_get_surface_anchor (::GdkPopup* popup /*none*/);
GI_INLINE_DECL Gdk::Gravity get_surface_anchor () noexcept;

// gboolean gdk_popup_present (GdkPopup* popup /*none*/, int width, int height, GdkPopupLayout* layout /*none*/);
// gboolean gdk_popup_present (::GdkPopup* popup /*none*/, gint width, gint height, ::GdkPopupLayout* layout /*none*/);
GI_INLINE_DECL bool present (gint width, gint height, Gdk::PopupLayout_Ref layout) noexcept;

gi::property_proxy<bool, base::PopupBase> property_autohide()
{ return gi::property_proxy<bool, base::PopupBase> (*this, "autohide"); }
const gi::property_proxy<bool, base::PopupBase> property_autohide() const
{ return gi::property_proxy<bool, base::PopupBase> (*this, "autohide"); }

gi::property_proxy<Gdk::Surface, base::PopupBase> property_parent()
{ return gi::property_proxy<Gdk::Surface, base::PopupBase> (*this, "parent"); }
const gi::property_proxy<Gdk::Surface, base::PopupBase> property_parent() const
{ return gi::property_proxy<Gdk::Surface, base::PopupBase> (*this, "parent"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/popup_extra_def.hpp>)
#include <gdk/popup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/popup_extra.hpp>)
#include <gdk/popup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Popup : public GI_GDK_POPUP_BASE
{ typedef GI_GDK_POPUP_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkPopup>
{ typedef Gdk::Popup type; }; 

} // namespace repository

} // namespace gi

#endif
