// AUTO-GENERATED

#ifndef _GI_GTK_FILEFILTER_IMPL_HPP_
#define _GI_GTK_FILEFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable FileFilterBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FileFilterBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkFileFilter* /*full*/ gtk_file_filter_new ();
// ::GtkFileFilter* /*full*/ gtk_file_filter_new ();
Gtk::FileFilter base::FileFilterBase::new_ () noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkFileFilter* /*full*/ gtk_file_filter_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkFileFilter* /*full*/ gtk_file_filter_new_from_gvariant (::GVariant* variant /*none*/);
Gtk::FileFilter base::FileFilterBase::new_from_gvariant (GLib::Variant variant) noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) (::GVariant* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_new_from_gvariant;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_file_filter_add_mime_type (GtkFileFilter* filter /*none*/, const char* mime_type /*none*/);
// void gtk_file_filter_add_mime_type (::GtkFileFilter* filter /*none*/, const char* mime_type /*none*/);
void base::FileFilterBase::add_mime_type (const gi::cstring_v mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_add_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (mime_type_to_c));
}

// void gtk_file_filter_add_pattern (GtkFileFilter* filter /*none*/, const char* pattern /*none*/);
// void gtk_file_filter_add_pattern (::GtkFileFilter* filter /*none*/, const char* pattern /*none*/);
void base::FileFilterBase::add_pattern (const gi::cstring_v pattern) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_add_pattern;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (pattern_to_c));
}

// void gtk_file_filter_add_pixbuf_formats (GtkFileFilter* filter /*none*/);
// void gtk_file_filter_add_pixbuf_formats (::GtkFileFilter* filter /*none*/);
void base::FileFilterBase::add_pixbuf_formats () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_add_pixbuf_formats;
  call_wrap_v ((::GtkFileFilter*) (gobj_()));
}

// void gtk_file_filter_add_suffix (GtkFileFilter* filter /*none*/, const char* suffix /*none*/);
// void gtk_file_filter_add_suffix (::GtkFileFilter* filter /*none*/, const char* suffix /*none*/);
void base::FileFilterBase::add_suffix (const gi::cstring_v suffix) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_add_suffix;
  auto suffix_to_c = gi::unwrap (suffix, gi::transfer_none);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (suffix_to_c));
}

// const char** /*none*/ gtk_file_filter_get_attributes (GtkFileFilter* filter /*none*/);
// const char** /*none*/ gtk_file_filter_get_attributes (::GtkFileFilter* filter /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::FileFilterBase::get_attributes () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_file_filter_get_name (GtkFileFilter* filter /*none*/);
// const char* /*none,nullable*/ gtk_file_filter_get_name (::GtkFileFilter* filter /*none*/);
gi::cstring_v base::FileFilterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_get_name;
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_file_filter_set_name (GtkFileFilter* filter /*none*/, const char* name /*none,nullable*/);
// void gtk_file_filter_set_name (::GtkFileFilter* filter /*none*/, const char* name /*none,nullable*/);
void base::FileFilterBase::set_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (name_to_c));
}
void base::FileFilterBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (name_to_c));
}

// GVariant* /*none*/ gtk_file_filter_to_gvariant (GtkFileFilter* filter /*none*/);
// ::GVariant* /*none*/ gtk_file_filter_to_gvariant (::GtkFileFilter* filter /*none*/);
GLib::Variant base::FileFilterBase::to_gvariant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_filter_to_gvariant;
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra_def_impl.hpp>)
#include <gtk/filefilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra_impl.hpp>)
#include <gtk/filefilter_extra_impl.hpp>
#endif
#endif

#endif
