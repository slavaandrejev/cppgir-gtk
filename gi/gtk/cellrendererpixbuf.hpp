// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERPIXBUF_HPP_
#define _GI_GTK_CELLRENDERERPIXBUF_HPP_

#include "cellrenderer.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellRendererPixbuf;

namespace base {


#define GI_GTK_CELLRENDERERPIXBUF_BASE base::CellRendererPixbufBase
class CellRendererPixbufBase : public Gtk::CellRenderer
{
typedef Gtk::CellRenderer super_type;
public:
typedef ::GtkCellRendererPixbuf BaseObjectType;

CellRendererPixbufBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_pixbuf_get_type(); } 

// GtkCellRenderer* /*none*/ gtk_cell_renderer_pixbuf_new ();
// ::GtkCellRendererPixbuf* /*none*/ gtk_cell_renderer_pixbuf_new ();
static GI_INLINE_DECL Gtk::CellRendererPixbuf new_ () noexcept;

gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::CellRendererPixbufBase> (*this, "gicon"); }

gi::property_proxy<gi::cstring, base::CellRendererPixbufBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::CellRendererPixbufBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::CellRendererPixbufBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::CellRendererPixbufBase> (*this, "icon-name"); }

gi::property_proxy<Gtk::IconSize, base::CellRendererPixbufBase> property_icon_size()
{ return gi::property_proxy<Gtk::IconSize, base::CellRendererPixbufBase> (*this, "icon-size"); }
const gi::property_proxy<Gtk::IconSize, base::CellRendererPixbufBase> property_icon_size() const
{ return gi::property_proxy<Gtk::IconSize, base::CellRendererPixbufBase> (*this, "icon-size"); }

gi::property_proxy_write<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf()
{ return gi::property_proxy_write<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_closed()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-closed"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_closed() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-closed"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_open()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-open"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> property_pixbuf_expander_open() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::CellRendererPixbufBase> (*this, "pixbuf-expander-open"); }

gi::property_proxy<Gdk::Texture, base::CellRendererPixbufBase> property_texture()
{ return gi::property_proxy<Gdk::Texture, base::CellRendererPixbufBase> (*this, "texture"); }
const gi::property_proxy<Gdk::Texture, base::CellRendererPixbufBase> property_texture() const
{ return gi::property_proxy<Gdk::Texture, base::CellRendererPixbufBase> (*this, "texture"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererpixbuf_extra_def.hpp>)
#include <gtk/cellrendererpixbuf_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererpixbuf_extra.hpp>)
#include <gtk/cellrendererpixbuf_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererPixbuf : public GI_GTK_CELLRENDERERPIXBUF_BASE
{ typedef GI_GTK_CELLRENDERERPIXBUF_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererPixbuf>
{ typedef Gtk::CellRendererPixbuf type; }; 

} // namespace repository

} // namespace gi

#endif
