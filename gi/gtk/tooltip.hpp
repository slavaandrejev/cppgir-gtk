// AUTO-GENERATED

#ifndef _GI_GTK_TOOLTIP_HPP_
#define _GI_GTK_TOOLTIP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Tooltip;

namespace base {


#define GI_GTK_TOOLTIP_BASE base::TooltipBase
class TooltipBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTooltip BaseObjectType;

TooltipBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tooltip_get_type(); } 

// void gtk_tooltip_set_custom (GtkTooltip* tooltip /*none*/, GtkWidget* custom_widget /*none,nullable*/);
// void gtk_tooltip_set_custom (::GtkTooltip* tooltip /*none*/, ::GtkWidget* custom_widget /*none,nullable*/);
GI_INLINE_DECL void set_custom (Gtk::Widget custom_widget) noexcept;
GI_INLINE_DECL void set_custom () noexcept;

// void gtk_tooltip_set_icon (GtkTooltip* tooltip /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void gtk_tooltip_set_icon (::GtkTooltip* tooltip /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
GI_INLINE_DECL void set_icon (Gdk::Paintable paintable) noexcept;
GI_INLINE_DECL void set_icon () noexcept;

// void gtk_tooltip_set_icon_from_gicon (GtkTooltip* tooltip /*none*/, GIcon* gicon /*none,nullable*/);
// void gtk_tooltip_set_icon_from_gicon (::GtkTooltip* tooltip /*none*/, ::GIcon* gicon /*none,nullable*/);
GI_INLINE_DECL void set_icon_from_gicon (Gio::Icon gicon) noexcept;
GI_INLINE_DECL void set_icon_from_gicon () noexcept;

// void gtk_tooltip_set_icon_from_icon_name (GtkTooltip* tooltip /*none*/, const char* icon_name /*none,nullable*/);
// void gtk_tooltip_set_icon_from_icon_name (::GtkTooltip* tooltip /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_from_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_from_icon_name () noexcept;

// void gtk_tooltip_set_markup (GtkTooltip* tooltip /*none*/, const char* markup /*none,nullable*/);
// void gtk_tooltip_set_markup (::GtkTooltip* tooltip /*none*/, const char* markup /*none,nullable*/);
GI_INLINE_DECL void set_markup (const gi::cstring_v markup) noexcept;
GI_INLINE_DECL void set_markup () noexcept;

// void gtk_tooltip_set_text (GtkTooltip* tooltip /*none*/, const char* text /*none,nullable*/);
// void gtk_tooltip_set_text (::GtkTooltip* tooltip /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_text () noexcept;

// void gtk_tooltip_set_tip_area (GtkTooltip* tooltip /*none*/, const GdkRectangle* rect /*none*/);
// void gtk_tooltip_set_tip_area (::GtkTooltip* tooltip /*none*/, const ::GdkRectangle* rect /*none*/);
GI_INLINE_DECL void set_tip_area (const Gdk::Rectangle_Ref rect) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra_def.hpp>)
#include <gtk/tooltip_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra.hpp>)
#include <gtk/tooltip_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Tooltip : public GI_GTK_TOOLTIP_BASE
{ typedef GI_GTK_TOOLTIP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTooltip>
{ typedef Gtk::Tooltip type; }; 

} // namespace repository

} // namespace gi

#endif
