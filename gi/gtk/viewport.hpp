// AUTO-GENERATED

#ifndef _GI_GTK_VIEWPORT_HPP_
#define _GI_GTK_VIEWPORT_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class ScrollInfo;
class ScrollInfo_Ref;
class Scrollable;
class Widget;

class Viewport;

namespace base {


#define GI_GTK_VIEWPORT_BASE base::ViewportBase
class ViewportBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkViewport BaseObjectType;

ViewportBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_viewport_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* /*none*/ gtk_viewport_new (GtkAdjustment* hadjustment /*none,nullable*/, GtkAdjustment* vadjustment /*none,nullable*/);
// ::GtkViewport* /*none*/ gtk_viewport_new (::GtkAdjustment* hadjustment /*none,nullable*/, ::GtkAdjustment* vadjustment /*none,nullable*/);
static GI_INLINE_DECL Gtk::Viewport new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept;
static GI_INLINE_DECL Gtk::Viewport new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_viewport_get_child (GtkViewport* viewport /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_viewport_get_child (::GtkViewport* viewport /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_viewport_get_scroll_to_focus (GtkViewport* viewport /*none*/);
// gboolean gtk_viewport_get_scroll_to_focus (::GtkViewport* viewport /*none*/);
GI_INLINE_DECL bool get_scroll_to_focus () noexcept;

// void gtk_viewport_scroll_to (GtkViewport* viewport /*none*/, GtkWidget* descendant /*none*/, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_viewport_scroll_to (::GtkViewport* viewport /*none*/, ::GtkWidget* descendant /*none*/, ::GtkScrollInfo* scroll /*full,nullable*/);
GI_INLINE_DECL void scroll_to (Gtk::Widget descendant, Gtk::ScrollInfo scroll) noexcept;
GI_INLINE_DECL void scroll_to (Gtk::Widget descendant) noexcept;

// void gtk_viewport_set_child (GtkViewport* viewport /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_viewport_set_child (::GtkViewport* viewport /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_viewport_set_scroll_to_focus (GtkViewport* viewport /*none*/, gboolean scroll_to_focus);
// void gtk_viewport_set_scroll_to_focus (::GtkViewport* viewport /*none*/, gboolean scroll_to_focus);
GI_INLINE_DECL void set_scroll_to_focus (gboolean scroll_to_focus) noexcept;

gi::property_proxy<Gtk::Widget, base::ViewportBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ViewportBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ViewportBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ViewportBase> (*this, "child"); }

gi::property_proxy<bool, base::ViewportBase> property_scroll_to_focus()
{ return gi::property_proxy<bool, base::ViewportBase> (*this, "scroll-to-focus"); }
const gi::property_proxy<bool, base::ViewportBase> property_scroll_to_focus() const
{ return gi::property_proxy<bool, base::ViewportBase> (*this, "scroll-to-focus"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra_def.hpp>)
#include <gtk/viewport_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra.hpp>)
#include <gtk/viewport_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Viewport : public GI_GTK_VIEWPORT_BASE
{ typedef GI_GTK_VIEWPORT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkViewport>
{ typedef Gtk::Viewport type; }; 

} // namespace repository

} // namespace gi

#endif
