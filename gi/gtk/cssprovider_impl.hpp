// AUTO-GENERATED

#ifndef _GI_GTK_CSSPROVIDER_IMPL_HPP_
#define _GI_GTK_CSSPROVIDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::StyleProvider CssProviderBase::interface_ (gi::interface_tag<Gtk::StyleProvider>)
{ return gi::wrap ((Gtk::StyleProvider::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CssProviderBase::operator Gtk::StyleProvider ()
{ return interface_ (gi::interface_tag<Gtk::StyleProvider>()); }

// GtkCssProvider* /*full*/ gtk_css_provider_new ();
// ::GtkCssProvider* /*full*/ gtk_css_provider_new ();
Gtk::CssProvider base::CssProviderBase::new_ () noexcept
{
  typedef ::GtkCssProvider* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_css_provider_load_from_bytes (GtkCssProvider* css_provider /*none*/, GBytes* data /*none*/);
// void gtk_css_provider_load_from_bytes (::GtkCssProvider* css_provider /*none*/, ::GBytes* data /*none*/);
void base::CssProviderBase::load_from_bytes (GLib::Bytes_Ref data) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, ::GBytes* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_from_bytes;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (::GBytes*) (data_to_c));
}

// void gtk_css_provider_load_from_data (GtkCssProvider* css_provider /*none*/, const char* data /*none*/, gssize length);
// void gtk_css_provider_load_from_data (::GtkCssProvider* css_provider /*none*/, const char* data /*none*/, gssize length);
void base::CssProviderBase::load_from_data (const gi::cstring_v data, gssize length) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, const char* data, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_from_data;
  auto length_to_c = length;
  auto data_to_c = gi::unwrap (data, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (data_to_c), (gssize) (length_to_c));
}

// void gtk_css_provider_load_from_file (GtkCssProvider* css_provider /*none*/, GFile* file /*none*/);
// void gtk_css_provider_load_from_file (::GtkCssProvider* css_provider /*none*/, ::GFile* file /*none*/);
void base::CssProviderBase::load_from_file (Gio::File file) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_from_file;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (::GFile*) (file_to_c));
}

// void gtk_css_provider_load_from_path (GtkCssProvider* css_provider /*none*/, const char* path /*none*/);
// void gtk_css_provider_load_from_path (::GtkCssProvider* css_provider /*none*/, const char* path /*none*/);
void base::CssProviderBase::load_from_path (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_from_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (path_to_c));
}

// void gtk_css_provider_load_from_resource (GtkCssProvider* css_provider /*none*/, const char* resource_path /*none*/);
// void gtk_css_provider_load_from_resource (::GtkCssProvider* css_provider /*none*/, const char* resource_path /*none*/);
void base::CssProviderBase::load_from_resource (const gi::cstring_v resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_from_resource;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (resource_path_to_c));
}

// void gtk_css_provider_load_from_string (GtkCssProvider* css_provider /*none*/, const char* string /*none*/);
// void gtk_css_provider_load_from_string (::GtkCssProvider* css_provider /*none*/, const char* string /*none*/);
void base::CssProviderBase::load_from_string (const gi::cstring_v string) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* css_provider, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_from_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (string_to_c));
}

// void gtk_css_provider_load_named (GtkCssProvider* provider /*none*/, const char* name /*none*/, const char* variant /*none,nullable*/);
// void gtk_css_provider_load_named (::GtkCssProvider* provider /*none*/, const char* name /*none*/, const char* variant /*none,nullable*/);
void base::CssProviderBase::load_named (const gi::cstring_v name, const gi::cstring_v variant) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* provider, const char* name, const char* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_named;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (name_to_c), (const char*) (variant_to_c));
}
void base::CssProviderBase::load_named (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkCssProvider* provider, const char* name, const char* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_load_named;
  auto variant_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkCssProvider*) (gobj_()), (const char*) (name_to_c), (const char*) (variant_to_c));
}

// char* /*full*/ gtk_css_provider_to_string (GtkCssProvider* provider /*none*/);
// char* /*full*/ gtk_css_provider_to_string (::GtkCssProvider* provider /*none*/);
gi::cstring base::CssProviderBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GtkCssProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_provider_to_string;
  auto _temp_ret = call_wrap_v ((::GtkCssProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra_def_impl.hpp>)
#include <gtk/cssprovider_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra_impl.hpp>)
#include <gtk/cssprovider_extra_impl.hpp>
#endif
#endif

#endif
