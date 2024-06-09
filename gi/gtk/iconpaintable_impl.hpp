// AUTO-GENERATED

#ifndef _GI_GTK_ICONPAINTABLE_IMPL_HPP_
#define _GI_GTK_ICONPAINTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gdk::Paintable IconPaintableBase::interface_ (gi::interface_tag<Gdk::Paintable>)
{ return gi::wrap ((Gdk::Paintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

IconPaintableBase::operator Gdk::Paintable ()
{ return interface_ (gi::interface_tag<Gdk::Paintable>()); }

Gtk::SymbolicPaintable IconPaintableBase::interface_ (gi::interface_tag<Gtk::SymbolicPaintable>)
{ return gi::wrap ((Gtk::SymbolicPaintable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

IconPaintableBase::operator Gtk::SymbolicPaintable ()
{ return interface_ (gi::interface_tag<Gtk::SymbolicPaintable>()); }

// GtkIconPaintable* /*full*/ gtk_icon_paintable_new_for_file (GFile* file /*none*/, int size, int scale);
// ::GtkIconPaintable* /*full*/ gtk_icon_paintable_new_for_file (::GFile* file /*none*/, gint size, gint scale);
Gtk::IconPaintable base::IconPaintableBase::new_for_file (Gio::File file, gint size, gint scale) noexcept
{
  typedef ::GtkIconPaintable* (*call_wrap_t) (::GFile* file, gint size, gint scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_paintable_new_for_file;
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFile*) (file_to_c), (gint) (size_to_c), (gint) (scale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full,nullable*/ gtk_icon_paintable_get_file (GtkIconPaintable* self /*none*/);
// ::GFile* /*full,nullable*/ gtk_icon_paintable_get_file (::GtkIconPaintable* self /*none*/);
Gio::File base::IconPaintableBase::get_file () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GtkIconPaintable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_paintable_get_file;
  auto _temp_ret = call_wrap_v ((::GtkIconPaintable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_icon_paintable_get_icon_name (GtkIconPaintable* self /*none*/);
// const char* /*none,nullable*/ gtk_icon_paintable_get_icon_name (::GtkIconPaintable* self /*none*/);
gi::cstring_v base::IconPaintableBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkIconPaintable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_paintable_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkIconPaintable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_icon_paintable_is_symbolic (GtkIconPaintable* self /*none*/);
// gboolean gtk_icon_paintable_is_symbolic (::GtkIconPaintable* self /*none*/);
bool base::IconPaintableBase::is_symbolic () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconPaintable* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_paintable_is_symbolic;
  auto _temp_ret = call_wrap_v ((::GtkIconPaintable*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconpaintable_extra_def_impl.hpp>)
#include <gtk/iconpaintable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconpaintable_extra_impl.hpp>)
#include <gtk/iconpaintable_extra_impl.hpp>
#endif
#endif

#endif
