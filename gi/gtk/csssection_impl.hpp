// AUTO-GENERATED

#ifndef _GI_GTK_CSSSECTION_IMPL_HPP_
#define _GI_GTK_CSSSECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCssSection* /*full*/ gtk_css_section_new (GFile* file /*none,nullable*/, const GtkCssLocation* start /*none*/, const GtkCssLocation* end /*none*/);
// ::GtkCssSection* /*full*/ gtk_css_section_new (::GFile* file /*none,nullable*/, const ::GtkCssLocation* start /*none*/, const ::GtkCssLocation* end /*none*/);
Gtk::CssSection base::CssSectionBase::new_ (Gio::File file, const Gtk::CssLocation_Ref start, const Gtk::CssLocation_Ref end) noexcept
{
  typedef ::GtkCssSection* (*call_wrap_t) (::GFile* file, const ::GtkCssLocation* start, const ::GtkCssLocation* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_new;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c), (const ::GtkCssLocation*) (start_to_c), (const ::GtkCssLocation*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::CssSection base::CssSectionBase::new_ (const Gtk::CssLocation_Ref start, const Gtk::CssLocation_Ref end) noexcept
{
  typedef ::GtkCssSection* (*call_wrap_t) (::GFile* file, const ::GtkCssLocation* start, const ::GtkCssLocation* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_new;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto file_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c), (const ::GtkCssLocation*) (start_to_c), (const ::GtkCssLocation*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GtkCssLocation* /*none*/ gtk_css_section_get_end_location (const GtkCssSection* section /*none*/);
// const ::GtkCssLocation* /*none*/ gtk_css_section_get_end_location (const ::GtkCssSection* section /*none*/);
Gtk::CssLocation_Ref base::CssSectionBase::get_end_location () const noexcept
{
  typedef const ::GtkCssLocation* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_section_get_end_location;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFile* /*none,nullable*/ gtk_css_section_get_file (const GtkCssSection* section /*none*/);
// ::GFile* /*none,nullable*/ gtk_css_section_get_file (const ::GtkCssSection* section /*none*/);
Gio::File base::CssSectionBase::get_file () const noexcept
{
  typedef ::GFile* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_section_get_file;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkCssSection* /*none,nullable*/ gtk_css_section_get_parent (const GtkCssSection* section /*none*/);
// ::GtkCssSection* /*none,nullable*/ gtk_css_section_get_parent (const ::GtkCssSection* section /*none*/);
Gtk::CssSection_Ref base::CssSectionBase::get_parent () const noexcept
{
  typedef ::GtkCssSection* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_section_get_parent;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GtkCssLocation* /*none*/ gtk_css_section_get_start_location (const GtkCssSection* section /*none*/);
// const ::GtkCssLocation* /*none*/ gtk_css_section_get_start_location (const ::GtkCssSection* section /*none*/);
Gtk::CssLocation_Ref base::CssSectionBase::get_start_location () const noexcept
{
  typedef const ::GtkCssLocation* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_section_get_start_location;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_css_section_print (const GtkCssSection* section /*none*/, GString* string /*none*/);
// void gtk_css_section_print (const ::GtkCssSection* section /*none*/, ::GString* string /*none*/);
void base::CssSectionBase::print (GLib::String_Ref string) const noexcept
{
  typedef void (*call_wrap_t) (const ::GtkCssSection* section, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_section_print;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((const ::GtkCssSection*) (gobj_()), (::GString*) (string_to_c));
}

// GtkCssSection* /*full*/ gtk_css_section_ref (GtkCssSection* section /*none*/);
// ::GtkCssSection* /*full*/ gtk_css_section_ref (::GtkCssSection* section /*none*/);
// IGNORE; marked ignore

// char* /*full*/ gtk_css_section_to_string (const GtkCssSection* section /*none*/);
// char* /*full*/ gtk_css_section_to_string (const ::GtkCssSection* section /*none*/);
gi::cstring base::CssSectionBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_section_to_string;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_css_section_unref (GtkCssSection* section /*full*/);
// void gtk_css_section_unref (::GtkCssSection* section /*full*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra_def_impl.hpp>)
#include <gtk/csssection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra_impl.hpp>)
#include <gtk/csssection_extra_impl.hpp>
#endif
#endif

#endif
