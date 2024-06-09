// AUTO-GENERATED

#ifndef _GI_GTK_ASPECTFRAME_HPP_
#define _GI_GTK_ASPECTFRAME_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class AspectFrame;

namespace base {


#define GI_GTK_ASPECTFRAME_BASE base::AspectFrameBase
class AspectFrameBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkAspectFrame BaseObjectType;

AspectFrameBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_aspect_frame_get_type(); } 

// GtkWidget* /*none*/ gtk_aspect_frame_new (float xalign, float yalign, float ratio, gboolean obey_child);
// ::GtkAspectFrame* /*none*/ gtk_aspect_frame_new (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
static GI_INLINE_DECL Gtk::AspectFrame new_ (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept;

// GtkWidget* /*none,nullable*/ gtk_aspect_frame_get_child (GtkAspectFrame* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_aspect_frame_get_child (::GtkAspectFrame* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_aspect_frame_get_obey_child (GtkAspectFrame* self /*none*/);
// gboolean gtk_aspect_frame_get_obey_child (::GtkAspectFrame* self /*none*/);
GI_INLINE_DECL bool get_obey_child () noexcept;

// float gtk_aspect_frame_get_ratio (GtkAspectFrame* self /*none*/);
// gfloat gtk_aspect_frame_get_ratio (::GtkAspectFrame* self /*none*/);
GI_INLINE_DECL gfloat get_ratio () noexcept;

// float gtk_aspect_frame_get_xalign (GtkAspectFrame* self /*none*/);
// gfloat gtk_aspect_frame_get_xalign (::GtkAspectFrame* self /*none*/);
GI_INLINE_DECL gfloat get_xalign () noexcept;

// float gtk_aspect_frame_get_yalign (GtkAspectFrame* self /*none*/);
// gfloat gtk_aspect_frame_get_yalign (::GtkAspectFrame* self /*none*/);
GI_INLINE_DECL gfloat get_yalign () noexcept;

// void gtk_aspect_frame_set_child (GtkAspectFrame* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_aspect_frame_set_child (::GtkAspectFrame* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_aspect_frame_set_obey_child (GtkAspectFrame* self /*none*/, gboolean obey_child);
// void gtk_aspect_frame_set_obey_child (::GtkAspectFrame* self /*none*/, gboolean obey_child);
GI_INLINE_DECL void set_obey_child (gboolean obey_child) noexcept;

// void gtk_aspect_frame_set_ratio (GtkAspectFrame* self /*none*/, float ratio);
// void gtk_aspect_frame_set_ratio (::GtkAspectFrame* self /*none*/, gfloat ratio);
GI_INLINE_DECL void set_ratio (gfloat ratio) noexcept;

// void gtk_aspect_frame_set_xalign (GtkAspectFrame* self /*none*/, float xalign);
// void gtk_aspect_frame_set_xalign (::GtkAspectFrame* self /*none*/, gfloat xalign);
GI_INLINE_DECL void set_xalign (gfloat xalign) noexcept;

// void gtk_aspect_frame_set_yalign (GtkAspectFrame* self /*none*/, float yalign);
// void gtk_aspect_frame_set_yalign (::GtkAspectFrame* self /*none*/, gfloat yalign);
GI_INLINE_DECL void set_yalign (gfloat yalign) noexcept;

gi::property_proxy<Gtk::Widget, base::AspectFrameBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::AspectFrameBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::AspectFrameBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::AspectFrameBase> (*this, "child"); }

gi::property_proxy<bool, base::AspectFrameBase> property_obey_child()
{ return gi::property_proxy<bool, base::AspectFrameBase> (*this, "obey-child"); }
const gi::property_proxy<bool, base::AspectFrameBase> property_obey_child() const
{ return gi::property_proxy<bool, base::AspectFrameBase> (*this, "obey-child"); }

gi::property_proxy<gfloat, base::AspectFrameBase> property_ratio()
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "ratio"); }
const gi::property_proxy<gfloat, base::AspectFrameBase> property_ratio() const
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "ratio"); }

gi::property_proxy<gfloat, base::AspectFrameBase> property_xalign()
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::AspectFrameBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::AspectFrameBase> property_yalign()
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::AspectFrameBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "yalign"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra_def.hpp>)
#include <gtk/aspectframe_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra.hpp>)
#include <gtk/aspectframe_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AspectFrame : public GI_GTK_ASPECTFRAME_BASE
{ typedef GI_GTK_ASPECTFRAME_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAspectFrame>
{ typedef Gtk::AspectFrame type; }; 

} // namespace repository

} // namespace gi

#endif
