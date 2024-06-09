// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREABOX_IMPL_HPP_
#define _GI_GTK_CELLAREABOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable CellAreaBoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CellAreaBoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkCellArea* /*none*/ gtk_cell_area_box_new ();
// ::GtkCellAreaBox* /*none*/ gtk_cell_area_box_new ();
Gtk::CellAreaBox base::CellAreaBoxBase::new_ () noexcept
{
  typedef ::GtkCellAreaBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_area_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_cell_area_box_get_spacing (GtkCellAreaBox* box /*none*/);
// gint gtk_cell_area_box_get_spacing (::GtkCellAreaBox* box /*none*/);
gint base::CellAreaBoxBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkCellAreaBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_box_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkCellAreaBox*) (gobj_()));
  return _temp_ret;
}

// void gtk_cell_area_box_pack_end (GtkCellAreaBox* box /*none*/, GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
// void gtk_cell_area_box_pack_end (::GtkCellAreaBox* box /*none*/, ::GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
void base::CellAreaBoxBase::pack_end (Gtk::CellRenderer renderer, gboolean expand, gboolean align, gboolean fixed) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaBox* box, ::GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_box_pack_end;
  auto fixed_to_c = fixed;
  auto align_to_c = align;
  auto expand_to_c = expand;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellAreaBox*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (gboolean) (expand_to_c), (gboolean) (align_to_c), (gboolean) (fixed_to_c));
}

// void gtk_cell_area_box_pack_start (GtkCellAreaBox* box /*none*/, GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
// void gtk_cell_area_box_pack_start (::GtkCellAreaBox* box /*none*/, ::GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
void base::CellAreaBoxBase::pack_start (Gtk::CellRenderer renderer, gboolean expand, gboolean align, gboolean fixed) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaBox* box, ::GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_box_pack_start;
  auto fixed_to_c = fixed;
  auto align_to_c = align;
  auto expand_to_c = expand;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  call_wrap_v ((::GtkCellAreaBox*) (gobj_()), (::GtkCellRenderer*) (renderer_to_c), (gboolean) (expand_to_c), (gboolean) (align_to_c), (gboolean) (fixed_to_c));
}

// void gtk_cell_area_box_set_spacing (GtkCellAreaBox* box /*none*/, int spacing);
// void gtk_cell_area_box_set_spacing (::GtkCellAreaBox* box /*none*/, gint spacing);
void base::CellAreaBoxBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAreaBox* box, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_area_box_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkCellAreaBox*) (gobj_()), (gint) (spacing_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellareabox_extra_def_impl.hpp>)
#include <gtk/cellareabox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellareabox_extra_impl.hpp>)
#include <gtk/cellareabox_extra_impl.hpp>
#endif
#endif

#endif
