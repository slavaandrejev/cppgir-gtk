// AUTO-GENERATED

#ifndef _GI_GTK_MEDIAFILE_IMPL_HPP_
#define _GI_GTK_MEDIAFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkMediaStream* /*full*/ gtk_media_file_new ();
// ::GtkMediaFile* /*full*/ gtk_media_file_new ();
Gtk::MediaFile base::MediaFileBase::new_ () noexcept
{
  typedef ::GtkMediaFile* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_file_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkMediaStream* /*full*/ gtk_media_file_new_for_file (GFile* file /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_file (::GFile* file /*none*/);
Gtk::MediaFile base::MediaFileBase::new_for_file (Gio::File file) noexcept
{
  typedef ::GtkMediaFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_file_new_for_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkMediaStream* /*full*/ gtk_media_file_new_for_filename (const char* filename /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_filename (const char* filename /*none*/);
Gtk::MediaFile base::MediaFileBase::new_for_filename (const gi::cstring_v filename) noexcept
{
  typedef ::GtkMediaFile* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_file_new_for_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkMediaStream* /*full*/ gtk_media_file_new_for_input_stream (GInputStream* stream /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_input_stream (::GInputStream* stream /*none*/);
Gtk::MediaFile base::MediaFileBase::new_for_input_stream (Gio::InputStream stream) noexcept
{
  typedef ::GtkMediaFile* (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_file_new_for_input_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkMediaStream* /*full*/ gtk_media_file_new_for_resource (const char* resource_path /*none*/);
// ::GtkMediaFile* /*full*/ gtk_media_file_new_for_resource (const char* resource_path /*none*/);
Gtk::MediaFile base::MediaFileBase::new_for_resource (const gi::cstring_v resource_path) noexcept
{
  typedef ::GtkMediaFile* (*call_wrap_t) (const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_file_new_for_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (resource_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_media_file_clear (GtkMediaFile* self /*none*/);
// void gtk_media_file_clear (::GtkMediaFile* self /*none*/);
void base::MediaFileBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_clear;
  call_wrap_v ((::GtkMediaFile*) (gobj_()));
}

// GFile* /*none,nullable*/ gtk_media_file_get_file (GtkMediaFile* self /*none*/);
// ::GFile* /*none,nullable*/ gtk_media_file_get_file (::GtkMediaFile* self /*none*/);
Gio::File base::MediaFileBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkMediaFile* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_get_file;
  auto _temp_ret = call_wrap_v ((::GtkMediaFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GInputStream* /*none,nullable*/ gtk_media_file_get_input_stream (GtkMediaFile* self /*none*/);
// ::GInputStream* /*none,nullable*/ gtk_media_file_get_input_stream (::GtkMediaFile* self /*none*/);
Gio::InputStream base::MediaFileBase::get_input_stream () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GtkMediaFile* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_get_input_stream;
  auto _temp_ret = call_wrap_v ((::GtkMediaFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_media_file_set_file (GtkMediaFile* self /*none*/, GFile* file /*none,nullable*/);
// void gtk_media_file_set_file (::GtkMediaFile* self /*none*/, ::GFile* file /*none,nullable*/);
void base::MediaFileBase::set_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (::GFile*) (file_to_c));
}
void base::MediaFileBase::set_file () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_file;
  auto file_to_c = nullptr;
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_media_file_set_filename (GtkMediaFile* self /*none*/, const char* filename /*none,nullable*/);
// void gtk_media_file_set_filename (::GtkMediaFile* self /*none*/, const char* filename /*none,nullable*/);
void base::MediaFileBase::set_filename (const gi::cstring_v filename) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_filename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (const char*) (filename_to_c));
}
void base::MediaFileBase::set_filename () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_filename;
  auto filename_to_c = nullptr;
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (const char*) (filename_to_c));
}

// void gtk_media_file_set_input_stream (GtkMediaFile* self /*none*/, GInputStream* stream /*none,nullable*/);
// void gtk_media_file_set_input_stream (::GtkMediaFile* self /*none*/, ::GInputStream* stream /*none,nullable*/);
void base::MediaFileBase::set_input_stream (Gio::InputStream stream) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, ::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_input_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (::GInputStream*) (stream_to_c));
}
void base::MediaFileBase::set_input_stream () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, ::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_input_stream;
  auto stream_to_c = nullptr;
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (::GInputStream*) (stream_to_c));
}

// void gtk_media_file_set_resource (GtkMediaFile* self /*none*/, const char* resource_path /*none,nullable*/);
// void gtk_media_file_set_resource (::GtkMediaFile* self /*none*/, const char* resource_path /*none,nullable*/);
void base::MediaFileBase::set_resource (const gi::cstring_v resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::MediaFileBase::set_resource () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaFile* self, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_file_set_resource;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GtkMediaFile*) (gobj_()), (const char*) (resource_path_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mediafile_extra_def_impl.hpp>)
#include <gtk/mediafile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mediafile_extra_impl.hpp>)
#include <gtk/mediafile_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MediaFileClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMediaFileClass *methods = (::GtkMediaFileClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.close) methods->close = (decltype (methods->close)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::close_>;
  if (init_data.open) methods->open = (decltype (methods->open)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::open_>;
}

// void MediaFile::close (GtkMediaFile* self /*none*/);
// void MediaFile::close (::GtkMediaFile* self /*none*/);
void MediaFileClass::close_ () noexcept
{
  if (!get_struct_()->close) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaFile* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close;
  call_wrap_v ((::GtkMediaFile*) (gobj_()));
}

// void MediaFile::open (GtkMediaFile* self /*none*/);
// void MediaFile::open (::GtkMediaFile* self /*none*/);
void MediaFileClass::open_ () noexcept
{
  if (!get_struct_()->open) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkMediaFile* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->open;
  call_wrap_v ((::GtkMediaFile*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
