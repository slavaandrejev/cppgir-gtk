// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLBAR_HPP_
#define _GI_GTK_SCROLLBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Orientable;

class Scrollbar;

namespace base {


#define GI_GTK_SCROLLBAR_BASE base::ScrollbarBase
class ScrollbarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkScrollbar BaseObjectType;

ScrollbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scrollbar_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_scrollbar_new (GtkOrientation orientation, GtkAdjustment* adjustment /*none,nullable*/);
// ::GtkScrollbar* /*none*/ gtk_scrollbar_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment /*none,nullable*/);
static GI_INLINE_DECL Gtk::Scrollbar new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept;
static GI_INLINE_DECL Gtk::Scrollbar new_ (Gtk::Orientation orientation) noexcept;

// GtkAdjustment* /*none*/ gtk_scrollbar_get_adjustment (GtkScrollbar* self /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scrollbar_get_adjustment (::GtkScrollbar* self /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// void gtk_scrollbar_set_adjustment (GtkScrollbar* self /*none*/, GtkAdjustment* adjustment /*none,nullable*/);
// void gtk_scrollbar_set_adjustment (::GtkScrollbar* self /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;
GI_INLINE_DECL void set_adjustment () noexcept;

gi::property_proxy<Gtk::Adjustment, base::ScrollbarBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrollbarBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrollbarBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrollbarBase> (*this, "adjustment"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra_def.hpp>)
#include <gtk/scrollbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra.hpp>)
#include <gtk/scrollbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Scrollbar : public GI_GTK_SCROLLBAR_BASE
{ typedef GI_GTK_SCROLLBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScrollbar>
{ typedef Gtk::Scrollbar type; }; 

} // namespace repository

} // namespace gi

#endif
