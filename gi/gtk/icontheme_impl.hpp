// AUTO-GENERATED

#ifndef _GI_GTK_ICONTHEME_IMPL_HPP_
#define _GI_GTK_ICONTHEME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkIconTheme* /*full*/ gtk_icon_theme_new ();
// ::GtkIconTheme* /*full*/ gtk_icon_theme_new ();
Gtk::IconTheme base::IconThemeBase::new_ () noexcept
{
  typedef ::GtkIconTheme* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkIconTheme* /*none*/ gtk_icon_theme_get_for_display (GdkDisplay* display /*none*/);
// ::GtkIconTheme* /*none*/ gtk_icon_theme_get_for_display (::GdkDisplay* display /*none*/);
Gtk::IconTheme base::IconThemeBase::get_for_display (Gdk::Display display) noexcept
{
  typedef ::GtkIconTheme* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_for_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_icon_theme_add_resource_path (GtkIconTheme* self /*none*/, const char* path /*none*/);
// void gtk_icon_theme_add_resource_path (::GtkIconTheme* self /*none*/, const char* path /*none*/);
void base::IconThemeBase::add_resource_path (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_add_resource_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (path_to_c));
}

// void gtk_icon_theme_add_search_path (GtkIconTheme* self /*none*/, const char* path /*none*/);
// void gtk_icon_theme_add_search_path (::GtkIconTheme* self /*none*/, const char* path /*none*/);
void base::IconThemeBase::add_search_path (const gi::cstring_v path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_add_search_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (path_to_c));
}

// GdkDisplay* /*none,nullable*/ gtk_icon_theme_get_display (GtkIconTheme* self /*none*/);
// ::GdkDisplay* /*none,nullable*/ gtk_icon_theme_get_display (::GtkIconTheme* self /*none*/);
Gdk::Display base::IconThemeBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkIconTheme* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_display;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// char** /*full*/ gtk_icon_theme_get_icon_names (GtkIconTheme* self /*none*/);
// char** /*full*/ gtk_icon_theme_get_icon_names (::GtkIconTheme* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::IconThemeBase::get_icon_names () noexcept
{
  typedef char** (*call_wrap_t) (::GtkIconTheme* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_icon_names;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// int* /*full*/ gtk_icon_theme_get_icon_sizes (GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
// gint* /*full*/ gtk_icon_theme_get_icon_sizes (::GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
gi::Collection<gi::ZTSpan, gint, gi::transfer_full_t> base::IconThemeBase::get_icon_sizes (const gi::cstring_v icon_name) noexcept
{
  typedef gint* (*call_wrap_t) (::GtkIconTheme* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_icon_sizes;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, gint, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// char** /*full,nullable*/ gtk_icon_theme_get_resource_path (GtkIconTheme* self /*none*/);
// char** /*full,nullable*/ gtk_icon_theme_get_resource_path (::GtkIconTheme* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::IconThemeBase::get_resource_path () noexcept
{
  typedef char** (*call_wrap_t) (::GtkIconTheme* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_resource_path;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// char** /*full,nullable*/ gtk_icon_theme_get_search_path (GtkIconTheme* self /*none*/);
// char** /*full,nullable*/ gtk_icon_theme_get_search_path (::GtkIconTheme* self /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::IconThemeBase::get_search_path () noexcept
{
  typedef char** (*call_wrap_t) (::GtkIconTheme* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_search_path;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// char* /*full*/ gtk_icon_theme_get_theme_name (GtkIconTheme* self /*none*/);
// char* /*full*/ gtk_icon_theme_get_theme_name (::GtkIconTheme* self /*none*/);
gi::cstring base::IconThemeBase::get_theme_name () noexcept
{
  typedef char* (*call_wrap_t) (::GtkIconTheme* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_get_theme_name;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_icon_theme_has_gicon (GtkIconTheme* self /*none*/, GIcon* gicon /*none*/);
// gboolean gtk_icon_theme_has_gicon (::GtkIconTheme* self /*none*/, ::GIcon* gicon /*none*/);
bool base::IconThemeBase::has_gicon (Gio::Icon gicon) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconTheme* self, ::GIcon* gicon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_has_gicon;
  auto gicon_to_c = gi::unwrap (gicon, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (::GIcon*) (gicon_to_c));
  return _temp_ret;
}

// gboolean gtk_icon_theme_has_icon (GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
// gboolean gtk_icon_theme_has_icon (::GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
bool base::IconThemeBase::has_icon (const gi::cstring_v icon_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconTheme* self, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_has_icon;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c));
  return _temp_ret;
}

// GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_by_gicon (GtkIconTheme* self /*none*/, GIcon* icon /*none*/, int size, int scale, GtkTextDirection direction, GtkIconLookupFlags flags);
// ::GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_by_gicon (::GtkIconTheme* self /*none*/, ::GIcon* icon /*none*/, gint size, gint scale, ::GtkTextDirection direction, ::GtkIconLookupFlags flags);
Gtk::IconPaintable base::IconThemeBase::lookup_by_gicon (Gio::Icon icon, gint size, gint scale, Gtk::TextDirection direction, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconPaintable* (*call_wrap_t) (::GtkIconTheme* self, ::GIcon* icon, gint size, gint scale, ::GtkTextDirection direction, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_lookup_by_gicon;
  auto flags_to_c = gi::unwrap (flags);
  auto direction_to_c = gi::unwrap (direction);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (::GIcon*) (icon_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkTextDirection) (direction_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_icon (GtkIconTheme* self /*none*/, const char* icon_name /*none*/, const char** fallbacks /*none,nullable*/, int size, int scale, GtkTextDirection direction, GtkIconLookupFlags flags);
// ::GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_icon (::GtkIconTheme* self /*none*/, const char* icon_name /*none*/, const char** fallbacks /*none,nullable*/, gint size, gint scale, ::GtkTextDirection direction, ::GtkIconLookupFlags flags);
Gtk::IconPaintable base::IconThemeBase::lookup_icon (const gi::cstring_v icon_name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> fallbacks, gint size, gint scale, Gtk::TextDirection direction, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconPaintable* (*call_wrap_t) (::GtkIconTheme* self, const char* icon_name, const char** fallbacks, gint size, gint scale, ::GtkTextDirection direction, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_lookup_icon;
  auto flags_to_c = gi::unwrap (flags);
  auto direction_to_c = gi::unwrap (direction);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto fallbacks_w = unwrap (std::move(fallbacks), gi::transfer_none);
  auto fallbacks_to_c = fallbacks_w;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (const char**) (fallbacks_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkTextDirection) (direction_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_icon_theme_set_resource_path (GtkIconTheme* self /*none*/, const char* const* path /*none,nullable*/);
// void gtk_icon_theme_set_resource_path (::GtkIconTheme* self /*none*/, const char** path /*none,nullable*/);
void base::IconThemeBase::set_resource_path (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* self, const char** path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_set_resource_path;
  auto path_w = unwrap (std::move(path), gi::transfer_none);
  auto path_to_c = path_w;
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char**) (path_to_c));
}

// void gtk_icon_theme_set_search_path (GtkIconTheme* self /*none*/, const char* const* path /*none,nullable*/);
// void gtk_icon_theme_set_search_path (::GtkIconTheme* self /*none*/, const char** path /*none,nullable*/);
void base::IconThemeBase::set_search_path (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* self, const char** path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_set_search_path;
  auto path_w = unwrap (std::move(path), gi::transfer_none);
  auto path_to_c = path_w;
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char**) (path_to_c));
}

// void gtk_icon_theme_set_theme_name (GtkIconTheme* self /*none*/, const char* theme_name /*none,nullable*/);
// void gtk_icon_theme_set_theme_name (::GtkIconTheme* self /*none*/, const char* theme_name /*none,nullable*/);
void base::IconThemeBase::set_theme_name (const gi::cstring_v theme_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* self, const char* theme_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_set_theme_name;
  auto theme_name_to_c = gi::unwrap (theme_name, gi::transfer_none);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (theme_name_to_c));
}
void base::IconThemeBase::set_theme_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* self, const char* theme_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_set_theme_name;
  auto theme_name_to_c = nullptr;
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (theme_name_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra_def_impl.hpp>)
#include <gtk/icontheme_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra_impl.hpp>)
#include <gtk/icontheme_extra_impl.hpp>
#endif
#endif

#endif
