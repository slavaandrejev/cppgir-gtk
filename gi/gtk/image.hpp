// AUTO-GENERATED

#ifndef _GI_GTK_IMAGE_HPP_
#define _GI_GTK_IMAGE_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Image;

namespace base {


#define GI_GTK_IMAGE_BASE base::ImageBase
class ImageBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkImage BaseObjectType;

ImageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_image_get_type(); } 

// GtkWidget* /*none*/ gtk_image_new ();
// ::GtkImage* /*none*/ gtk_image_new ();
static GI_INLINE_DECL Gtk::Image new_ () noexcept;

// GtkWidget* /*none*/ gtk_image_new_from_file (const char* filename /*none*/);
// ::GtkImage* /*none*/ gtk_image_new_from_file (const char* filename /*none*/);
static GI_INLINE_DECL Gtk::Image new_from_file (const gi::cstring_v filename) noexcept;

// GtkWidget* /*none*/ gtk_image_new_from_gicon (GIcon* icon /*none*/);
// ::GtkImage* /*none*/ gtk_image_new_from_gicon (::GIcon* icon /*none*/);
static GI_INLINE_DECL Gtk::Image new_from_gicon (Gio::Icon icon) noexcept;

// GtkWidget* /*none*/ gtk_image_new_from_icon_name (const char* icon_name /*none,nullable*/);
// ::GtkImage* /*none*/ gtk_image_new_from_icon_name (const char* icon_name /*none,nullable*/);
static GI_INLINE_DECL Gtk::Image new_from_icon_name (const gi::cstring_v icon_name) noexcept;
static GI_INLINE_DECL Gtk::Image new_from_icon_name () noexcept;

// GtkWidget* /*none*/ gtk_image_new_from_paintable (GdkPaintable* paintable /*none,nullable*/);
// ::GtkImage* /*none*/ gtk_image_new_from_paintable (::GdkPaintable* paintable /*none,nullable*/);
static GI_INLINE_DECL Gtk::Image new_from_paintable (Gdk::Paintable paintable) noexcept;
static GI_INLINE_DECL Gtk::Image new_from_paintable () noexcept;

// GtkWidget* /*none*/ gtk_image_new_from_pixbuf (GdkPixbuf* pixbuf /*none,nullable*/);
// ::GtkImage* /*none*/ gtk_image_new_from_pixbuf (::GdkPixbuf* pixbuf /*none,nullable*/);
static GI_INLINE_DECL Gtk::Image new_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;
static GI_INLINE_DECL Gtk::Image new_from_pixbuf () noexcept;

// GtkWidget* /*none*/ gtk_image_new_from_resource (const char* resource_path /*none*/);
// ::GtkImage* /*none*/ gtk_image_new_from_resource (const char* resource_path /*none*/);
static GI_INLINE_DECL Gtk::Image new_from_resource (const gi::cstring_v resource_path) noexcept;

// void gtk_image_clear (GtkImage* image /*none*/);
// void gtk_image_clear (::GtkImage* image /*none*/);
GI_INLINE_DECL void clear () noexcept;

// GIcon* /*none,nullable*/ gtk_image_get_gicon (GtkImage* image /*none*/);
// ::GIcon* /*none,nullable*/ gtk_image_get_gicon (::GtkImage* image /*none*/);
GI_INLINE_DECL Gio::Icon get_gicon () noexcept;

// const char* /*none,nullable*/ gtk_image_get_icon_name (GtkImage* image /*none*/);
// const char* /*none,nullable*/ gtk_image_get_icon_name (::GtkImage* image /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// GtkIconSize gtk_image_get_icon_size (GtkImage* image /*none*/);
// ::GtkIconSize gtk_image_get_icon_size (::GtkImage* image /*none*/);
GI_INLINE_DECL Gtk::IconSize get_icon_size () noexcept;

// GdkPaintable* /*none,nullable*/ gtk_image_get_paintable (GtkImage* image /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_image_get_paintable (::GtkImage* image /*none*/);
GI_INLINE_DECL Gdk::Paintable get_paintable () noexcept;

// int gtk_image_get_pixel_size (GtkImage* image /*none*/);
// gint gtk_image_get_pixel_size (::GtkImage* image /*none*/);
GI_INLINE_DECL gint get_pixel_size () noexcept;

// GtkImageType gtk_image_get_storage_type (GtkImage* image /*none*/);
// ::GtkImageType gtk_image_get_storage_type (::GtkImage* image /*none*/);
GI_INLINE_DECL Gtk::ImageType get_storage_type () noexcept;

// void gtk_image_set_from_file (GtkImage* image /*none*/, const char* filename /*none,nullable*/);
// void gtk_image_set_from_file (::GtkImage* image /*none*/, const char* filename /*none,nullable*/);
GI_INLINE_DECL void set_from_file (const gi::cstring_v filename) noexcept;
GI_INLINE_DECL void set_from_file () noexcept;

// void gtk_image_set_from_gicon (GtkImage* image /*none*/, GIcon* icon /*none*/);
// void gtk_image_set_from_gicon (::GtkImage* image /*none*/, ::GIcon* icon /*none*/);
GI_INLINE_DECL void set_from_gicon (Gio::Icon icon) noexcept;

// void gtk_image_set_from_icon_name (GtkImage* image /*none*/, const char* icon_name /*none,nullable*/);
// void gtk_image_set_from_icon_name (::GtkImage* image /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_from_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_from_icon_name () noexcept;

// void gtk_image_set_from_paintable (GtkImage* image /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void gtk_image_set_from_paintable (::GtkImage* image /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
GI_INLINE_DECL void set_from_paintable (Gdk::Paintable paintable) noexcept;
GI_INLINE_DECL void set_from_paintable () noexcept;

// void gtk_image_set_from_pixbuf (GtkImage* image /*none*/, GdkPixbuf* pixbuf /*none,nullable*/);
// void gtk_image_set_from_pixbuf (::GtkImage* image /*none*/, ::GdkPixbuf* pixbuf /*none,nullable*/);
GI_INLINE_DECL void set_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;
GI_INLINE_DECL void set_from_pixbuf () noexcept;

// void gtk_image_set_from_resource (GtkImage* image /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_image_set_from_resource (::GtkImage* image /*none*/, const char* resource_path /*none,nullable*/);
GI_INLINE_DECL void set_from_resource (const gi::cstring_v resource_path) noexcept;
GI_INLINE_DECL void set_from_resource () noexcept;

// void gtk_image_set_icon_size (GtkImage* image /*none*/, GtkIconSize icon_size);
// void gtk_image_set_icon_size (::GtkImage* image /*none*/, ::GtkIconSize icon_size);
GI_INLINE_DECL void set_icon_size (Gtk::IconSize icon_size) noexcept;

// void gtk_image_set_pixel_size (GtkImage* image /*none*/, int pixel_size);
// void gtk_image_set_pixel_size (::GtkImage* image /*none*/, gint pixel_size);
GI_INLINE_DECL void set_pixel_size (gint pixel_size) noexcept;

gi::property_proxy<gi::cstring, base::ImageBase> property_file()
{ return gi::property_proxy<gi::cstring, base::ImageBase> (*this, "file"); }
const gi::property_proxy<gi::cstring, base::ImageBase> property_file() const
{ return gi::property_proxy<gi::cstring, base::ImageBase> (*this, "file"); }

gi::property_proxy<Gio::Icon, base::ImageBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::ImageBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::ImageBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::ImageBase> (*this, "gicon"); }

gi::property_proxy<gi::cstring, base::ImageBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ImageBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ImageBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ImageBase> (*this, "icon-name"); }

gi::property_proxy<Gtk::IconSize, base::ImageBase> property_icon_size()
{ return gi::property_proxy<Gtk::IconSize, base::ImageBase> (*this, "icon-size"); }
const gi::property_proxy<Gtk::IconSize, base::ImageBase> property_icon_size() const
{ return gi::property_proxy<Gtk::IconSize, base::ImageBase> (*this, "icon-size"); }

gi::property_proxy<Gdk::Paintable, base::ImageBase> property_paintable()
{ return gi::property_proxy<Gdk::Paintable, base::ImageBase> (*this, "paintable"); }
const gi::property_proxy<Gdk::Paintable, base::ImageBase> property_paintable() const
{ return gi::property_proxy<Gdk::Paintable, base::ImageBase> (*this, "paintable"); }

gi::property_proxy<gint, base::ImageBase> property_pixel_size()
{ return gi::property_proxy<gint, base::ImageBase> (*this, "pixel-size"); }
const gi::property_proxy<gint, base::ImageBase> property_pixel_size() const
{ return gi::property_proxy<gint, base::ImageBase> (*this, "pixel-size"); }

gi::property_proxy<gi::cstring, base::ImageBase> property_resource()
{ return gi::property_proxy<gi::cstring, base::ImageBase> (*this, "resource"); }
const gi::property_proxy<gi::cstring, base::ImageBase> property_resource() const
{ return gi::property_proxy<gi::cstring, base::ImageBase> (*this, "resource"); }

gi::property_proxy<Gtk::ImageType, base::ImageBase> property_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::ImageBase> (*this, "storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::ImageBase> property_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::ImageBase> (*this, "storage-type"); }

gi::property_proxy<bool, base::ImageBase> property_use_fallback()
{ return gi::property_proxy<bool, base::ImageBase> (*this, "use-fallback"); }
const gi::property_proxy<bool, base::ImageBase> property_use_fallback() const
{ return gi::property_proxy<bool, base::ImageBase> (*this, "use-fallback"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/image_extra_def.hpp>)
#include <gtk/image_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/image_extra.hpp>)
#include <gtk/image_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Image : public GI_GTK_IMAGE_BASE
{ typedef GI_GTK_IMAGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkImage>
{ typedef Gtk::Image type; }; 

} // namespace repository

} // namespace gi

#endif
