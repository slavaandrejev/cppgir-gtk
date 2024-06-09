// AUTO-GENERATED

#ifndef _GI_GTK_PICTURE_IMPL_HPP_
#define _GI_GTK_PICTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_picture_new ();
// ::GtkPicture* /*none*/ gtk_picture_new ();
Gtk::Picture base::PictureBase::new_ () noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_picture_new_for_file (GFile* file /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_file (::GFile* file /*none,nullable*/);
Gtk::Picture base::PictureBase::new_for_file (Gio::File file) noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Picture base::PictureBase::new_for_file () noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_file;
  auto file_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_picture_new_for_filename (const char* filename /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_filename (const char* filename /*none,nullable*/);
Gtk::Picture base::PictureBase::new_for_filename (const gi::cstring_v filename) noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Picture base::PictureBase::new_for_filename () noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_filename;
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_picture_new_for_paintable (GdkPaintable* paintable /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_paintable (::GdkPaintable* paintable /*none,nullable*/);
Gtk::Picture base::PictureBase::new_for_paintable (Gdk::Paintable paintable) noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (paintable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Picture base::PictureBase::new_for_paintable () noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_paintable;
  auto paintable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkPaintable*) (paintable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_picture_new_for_pixbuf (GdkPixbuf* pixbuf /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_pixbuf (::GdkPixbuf* pixbuf /*none,nullable*/);
Gtk::Picture base::PictureBase::new_for_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Picture base::PictureBase::new_for_pixbuf () noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_pixbuf;
  auto pixbuf_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_picture_new_for_resource (const char* resource_path /*none,nullable*/);
// ::GtkPicture* /*none*/ gtk_picture_new_for_resource (const char* resource_path /*none,nullable*/);
Gtk::Picture base::PictureBase::new_for_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Picture base::PictureBase::new_for_resource () noexcept
{
  typedef ::GtkPicture* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_picture_new_for_resource;
  auto resource_path_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_picture_get_alternative_text (GtkPicture* self /*none*/);
// const char* /*none,nullable*/ gtk_picture_get_alternative_text (::GtkPicture* self /*none*/);
gi::cstring_v base::PictureBase::get_alternative_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPicture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_get_alternative_text;
  auto _temp_ret = call_wrap_v ((::GtkPicture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_picture_get_can_shrink (GtkPicture* self /*none*/);
// gboolean gtk_picture_get_can_shrink (::GtkPicture* self /*none*/);
bool base::PictureBase::get_can_shrink () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPicture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_get_can_shrink;
  auto _temp_ret = call_wrap_v ((::GtkPicture*) (gobj_()));
  return _temp_ret;
}

// GtkContentFit gtk_picture_get_content_fit (GtkPicture* self /*none*/);
// ::GtkContentFit gtk_picture_get_content_fit (::GtkPicture* self /*none*/);
Gtk::ContentFit base::PictureBase::get_content_fit () noexcept
{
  typedef ::GtkContentFit (*call_wrap_t) (::GtkPicture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_get_content_fit;
  auto _temp_ret = call_wrap_v ((::GtkPicture*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GFile* /*none,nullable*/ gtk_picture_get_file (GtkPicture* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_picture_get_file (::GtkPicture* self /*none*/);
Gio::File base::PictureBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkPicture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_get_file;
  auto _temp_ret = call_wrap_v ((::GtkPicture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_picture_get_keep_aspect_ratio (GtkPicture* self /*none*/);
// gboolean gtk_picture_get_keep_aspect_ratio (::GtkPicture* self /*none*/);
bool base::PictureBase::get_keep_aspect_ratio () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPicture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_get_keep_aspect_ratio;
  auto _temp_ret = call_wrap_v ((::GtkPicture*) (gobj_()));
  return _temp_ret;
}

// GdkPaintable* /*none,nullable*/ gtk_picture_get_paintable (GtkPicture* self /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_picture_get_paintable (::GtkPicture* self /*none*/);
Gdk::Paintable base::PictureBase::get_paintable () noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GtkPicture* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_get_paintable;
  auto _temp_ret = call_wrap_v ((::GtkPicture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_picture_set_alternative_text (GtkPicture* self /*none*/, const char* alternative_text /*none,nullable*/);
// void gtk_picture_set_alternative_text (::GtkPicture* self /*none*/, const char* alternative_text /*none,nullable*/);
void base::PictureBase::set_alternative_text (const gi::cstring_v alternative_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, const char* alternative_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_alternative_text;
  auto alternative_text_to_c = gi::unwrap (alternative_text, gi::transfer_none);
  call_wrap_v ((::GtkPicture*) (gobj_()), (const char*) (alternative_text_to_c));
}
void base::PictureBase::set_alternative_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, const char* alternative_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_alternative_text;
  auto alternative_text_to_c = nullptr;
  call_wrap_v ((::GtkPicture*) (gobj_()), (const char*) (alternative_text_to_c));
}

// void gtk_picture_set_can_shrink (GtkPicture* self /*none*/, gboolean can_shrink);
// void gtk_picture_set_can_shrink (::GtkPicture* self /*none*/, gboolean can_shrink);
void base::PictureBase::set_can_shrink (gboolean can_shrink) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, gboolean can_shrink);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_can_shrink;
  auto can_shrink_to_c = can_shrink;
  call_wrap_v ((::GtkPicture*) (gobj_()), (gboolean) (can_shrink_to_c));
}

// void gtk_picture_set_content_fit (GtkPicture* self /*none*/, GtkContentFit content_fit);
// void gtk_picture_set_content_fit (::GtkPicture* self /*none*/, ::GtkContentFit content_fit);
void base::PictureBase::set_content_fit (Gtk::ContentFit content_fit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GtkContentFit content_fit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_content_fit;
  auto content_fit_to_c = gi::unwrap (content_fit);
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GtkContentFit) (content_fit_to_c));
}

// void gtk_picture_set_file (GtkPicture* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_picture_set_file (::GtkPicture* self /*none*/, ::GFile* file /*none,nullable*/);
void base::PictureBase::set_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GFile*) (file_to_c));
}
void base::PictureBase::set_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_file;
  auto file_to_c = nullptr;
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_picture_set_filename (GtkPicture* self /*none*/, const char* filename /*none,nullable*/);
// void gtk_picture_set_filename (::GtkPicture* self /*none*/, const char* filename /*none,nullable*/);
void base::PictureBase::set_filename (const gi::cstring_v filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((::GtkPicture*) (gobj_()), (const char*) (filename_to_c));
}
void base::PictureBase::set_filename () noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_filename;
  auto filename_to_c = nullptr;
  call_wrap_v ((::GtkPicture*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_picture_set_keep_aspect_ratio (GtkPicture* self /*none*/, gboolean keep_aspect_ratio);
// void gtk_picture_set_keep_aspect_ratio (::GtkPicture* self /*none*/, gboolean keep_aspect_ratio);
void base::PictureBase::set_keep_aspect_ratio (gboolean keep_aspect_ratio) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, gboolean keep_aspect_ratio);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_keep_aspect_ratio;
  auto keep_aspect_ratio_to_c = keep_aspect_ratio;
  call_wrap_v ((::GtkPicture*) (gobj_()), (gboolean) (keep_aspect_ratio_to_c));
}

// void gtk_picture_set_paintable (GtkPicture* self /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void gtk_picture_set_paintable (::GtkPicture* self /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
void base::PictureBase::set_paintable (Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}
void base::PictureBase::set_paintable () noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_paintable;
  auto paintable_to_c = nullptr;
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}

// void gtk_picture_set_pixbuf (GtkPicture* self /*none*/, GdkPixbuf* pixbuf /*none,nullable*/);
// void gtk_picture_set_pixbuf (::GtkPicture* self /*none*/, ::GdkPixbuf* pixbuf /*none,nullable*/);
void base::PictureBase::set_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none);
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}
void base::PictureBase::set_pixbuf () noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_pixbuf;
  auto pixbuf_to_c = nullptr;
  call_wrap_v ((::GtkPicture*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_picture_set_resource (GtkPicture* self /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_picture_set_resource (::GtkPicture* self /*none*/, const char* resource_path /*none,nullable*/);
void base::PictureBase::set_resource (const gi::cstring_v resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  call_wrap_v ((::GtkPicture*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::PictureBase::set_resource () noexcept
{
  typedef void (*call_wrap_t) (::GtkPicture* self, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_picture_set_resource;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GtkPicture*) (gobj_()), (const char*) (resource_path_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/picture_extra_def_impl.hpp>)
#include <gtk/picture_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/picture_extra_impl.hpp>)
#include <gtk/picture_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PictureClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkPictureClass *methods = (::GtkPictureClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
