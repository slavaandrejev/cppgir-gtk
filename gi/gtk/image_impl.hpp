// AUTO-GENERATED

#ifndef _GI_GTK_IMAGE_IMPL_HPP_
#define _GI_GTK_IMAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_image_new ();
// ::GtkImage* /*none*/ gtk_image_new ();
Gtk::Image base::ImageBase::new_ () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_image_new_from_file (const char* filename /*none*/);
// ::GtkImage* /*none*/ gtk_image_new_from_file (const char* filename /*none*/);
Gtk::Image base::ImageBase::new_from_file (const gi::cstring_v filename) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_image_new_from_gicon (GIcon* icon /*none*/);
// ::GtkImage* /*none*/ gtk_image_new_from_gicon (::GIcon* icon /*none*/);
Gtk::Image base::ImageBase::new_from_gicon (Gio::Icon icon) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_gicon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GIcon*) (icon_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_image_new_from_icon_name (const char* icon_name /*none,nullable*/);
// ::GtkImage* /*none*/ gtk_image_new_from_icon_name (const char* icon_name /*none,nullable*/);
Gtk::Image base::ImageBase::new_from_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Image base::ImageBase::new_from_icon_name () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_icon_name;
  auto icon_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_image_new_from_paintable (GdkPaintable* paintable /*none,nullable*/);
// ::GtkImage* /*none*/ gtk_image_new_from_paintable (::GdkPaintable* paintable /*none,nullable*/);
Gtk::Image base::ImageBase::new_from_paintable (Gdk::Paintable paintable) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (paintable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Image base::ImageBase::new_from_paintable () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_paintable;
  auto paintable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (paintable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_image_new_from_pixbuf (GdkPixbuf* pixbuf /*none,nullable*/);
// ::GtkImage* /*none*/ gtk_image_new_from_pixbuf (::GdkPixbuf* pixbuf /*none,nullable*/);
Gtk::Image base::ImageBase::new_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Image base::ImageBase::new_from_pixbuf () noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_pixbuf;
  auto pixbuf_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_image_new_from_resource (const char* resource_path /*none*/);
// ::GtkImage* /*none*/ gtk_image_new_from_resource (const char* resource_path /*none*/);
Gtk::Image base::ImageBase::new_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkImage* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_image_new_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_image_clear (GtkImage* image /*none*/);
// void gtk_image_clear (::GtkImage* image /*none*/);
void base::ImageBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_clear;
  call_wrap_v ((::GtkImage*) (gobj_()));
}

// GIcon* /*none,nullable*/ gtk_image_get_gicon (GtkImage* image /*none*/);
// ::GIcon* /*none,nullable*/ gtk_image_get_gicon (::GtkImage* image /*none*/);
Gio::Icon base::ImageBase::get_gicon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_get_gicon;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_image_get_icon_name (GtkImage* image /*none*/);
// const char* /*none,nullable*/ gtk_image_get_icon_name (::GtkImage* image /*none*/);
gi::cstring_v base::ImageBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkIconSize gtk_image_get_icon_size (GtkImage* image /*none*/);
// ::GtkIconSize gtk_image_get_icon_size (::GtkImage* image /*none*/);
Gtk::IconSize base::ImageBase::get_icon_size () noexcept
{
  typedef ::GtkIconSize (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_get_icon_size;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkPaintable* /*none,nullable*/ gtk_image_get_paintable (GtkImage* image /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_image_get_paintable (::GtkImage* image /*none*/);
Gdk::Paintable base::ImageBase::get_paintable () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_get_paintable;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_image_get_pixel_size (GtkImage* image /*none*/);
// gint gtk_image_get_pixel_size (::GtkImage* image /*none*/);
gint base::ImageBase::get_pixel_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_get_pixel_size;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return _temp_ret;
}

// GtkImageType gtk_image_get_storage_type (GtkImage* image /*none*/);
// ::GtkImageType gtk_image_get_storage_type (::GtkImage* image /*none*/);
Gtk::ImageType base::ImageBase::get_storage_type () noexcept
{
  typedef ::GtkImageType (*call_wrap_t) (::GtkImage* image);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_get_storage_type;
  auto _temp_ret = call_wrap_v ((::GtkImage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_image_set_from_file (GtkImage* image /*none*/, const char* filename /*none,nullable*/);
// void gtk_image_set_from_file (::GtkImage* image /*none*/, const char* filename /*none,nullable*/);
void base::ImageBase::set_from_file (const gi::cstring_v filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (filename_to_c));
}
void base::ImageBase::set_from_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_file;
  auto filename_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_image_set_from_gicon (GtkImage* image /*none*/, GIcon* icon /*none*/);
// void gtk_image_set_from_gicon (::GtkImage* image /*none*/, ::GIcon* icon /*none*/);
void base::ImageBase::set_from_gicon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_gicon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void gtk_image_set_from_icon_name (GtkImage* image /*none*/, const char* icon_name /*none,nullable*/);
// void gtk_image_set_from_icon_name (::GtkImage* image /*none*/, const char* icon_name /*none,nullable*/);
void base::ImageBase::set_from_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::ImageBase::set_from_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_image_set_from_paintable (GtkImage* image /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void gtk_image_set_from_paintable (::GtkImage* image /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
void base::ImageBase::set_from_paintable (Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}
void base::ImageBase::set_from_paintable () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_paintable;
  auto paintable_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}

// void gtk_image_set_from_pixbuf (GtkImage* image /*none*/, GdkPixbuf* pixbuf /*none,nullable*/);
// void gtk_image_set_from_pixbuf (::GtkImage* image /*none*/, ::GdkPixbuf* pixbuf /*none,nullable*/);
void base::ImageBase::set_from_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}
void base::ImageBase::set_from_pixbuf () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_pixbuf;
  auto pixbuf_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_image_set_from_resource (GtkImage* image /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_image_set_from_resource (::GtkImage* image /*none*/, const char* resource_path /*none,nullable*/);
void base::ImageBase::set_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::ImageBase::set_from_resource () noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_from_resource;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GtkImage*) (gobj_()), (const char*) (resource_path_to_c));
}

// void gtk_image_set_icon_size (GtkImage* image /*none*/, GtkIconSize icon_size);
// void gtk_image_set_icon_size (::GtkImage* image /*none*/, ::GtkIconSize icon_size);
void base::ImageBase::set_icon_size (Gtk::IconSize icon_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, ::GtkIconSize icon_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_icon_size;
  auto icon_size_to_c = gi::unwrap (icon_size);
  call_wrap_v ((::GtkImage*) (gobj_()), (::GtkIconSize) (icon_size_to_c));
}

// void gtk_image_set_pixel_size (GtkImage* image /*none*/, int pixel_size);
// void gtk_image_set_pixel_size (::GtkImage* image /*none*/, gint pixel_size);
void base::ImageBase::set_pixel_size (gint pixel_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkImage* image, gint pixel_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_image_set_pixel_size;
  auto pixel_size_to_c = pixel_size;
  call_wrap_v ((::GtkImage*) (gobj_()), (gint) (pixel_size_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/image_extra_def_impl.hpp>)
#include <gtk/image_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/image_extra_impl.hpp>)
#include <gtk/image_extra_impl.hpp>
#endif
#endif

#endif
