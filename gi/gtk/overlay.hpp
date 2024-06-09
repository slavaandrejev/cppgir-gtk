// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAY_HPP_
#define _GI_GTK_OVERLAY_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Overlay;

namespace base {


#define GI_GTK_OVERLAY_BASE base::OverlayBase
class OverlayBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkOverlay BaseObjectType;

OverlayBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_overlay_get_type(); } 

// GtkWidget* /*none*/ gtk_overlay_new ();
// ::GtkOverlay* /*none*/ gtk_overlay_new ();
static GI_INLINE_DECL Gtk::Overlay new_ () noexcept;

// void gtk_overlay_add_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// void gtk_overlay_add_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void add_overlay (Gtk::Widget widget) noexcept;

// GtkWidget* /*none,nullable*/ gtk_overlay_get_child (GtkOverlay* overlay /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_overlay_get_child (::GtkOverlay* overlay /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_overlay_get_clip_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// gboolean gtk_overlay_get_clip_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_clip_overlay (Gtk::Widget widget) noexcept;

// gboolean gtk_overlay_get_measure_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// gboolean gtk_overlay_get_measure_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL bool get_measure_overlay (Gtk::Widget widget) noexcept;

// void gtk_overlay_remove_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/);
// void gtk_overlay_remove_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void remove_overlay (Gtk::Widget widget) noexcept;

// void gtk_overlay_set_child (GtkOverlay* overlay /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_overlay_set_child (::GtkOverlay* overlay /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_overlay_set_clip_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/, gboolean clip_overlay);
// void gtk_overlay_set_clip_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/, gboolean clip_overlay);
GI_INLINE_DECL void set_clip_overlay (Gtk::Widget widget, gboolean clip_overlay) noexcept;

// void gtk_overlay_set_measure_overlay (GtkOverlay* overlay /*none*/, GtkWidget* widget /*none*/, gboolean measure);
// void gtk_overlay_set_measure_overlay (::GtkOverlay* overlay /*none*/, ::GtkWidget* widget /*none*/, gboolean measure);
GI_INLINE_DECL void set_measure_overlay (Gtk::Widget widget, gboolean measure) noexcept;

gi::property_proxy<Gtk::Widget, base::OverlayBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::OverlayBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::OverlayBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::OverlayBase> (*this, "child"); }

// (signal) gboolean get-child-position ( widget /*none*/,  allocation /*none,out,ca*/);
// (signal) gboolean get-child-position (::GtkWidget* widget /*none*/, ::GdkRectangle* allocation /*none,out,ca*/);
// SKIP; glib:signal out parameter not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra_def.hpp>)
#include <gtk/overlay_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra.hpp>)
#include <gtk/overlay_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Overlay : public GI_GTK_OVERLAY_BASE
{ typedef GI_GTK_OVERLAY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkOverlay>
{ typedef Gtk::Overlay type; }; 

} // namespace repository

} // namespace gi

#endif
