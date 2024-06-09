// AUTO-GENERATED

#ifndef _GI_GTK_CELLVIEW_IMPL_HPP_
#define _GI_GTK_CELLVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellLayout CellViewBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CellViewBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

Gtk::Orientable CellViewBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

CellViewBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_cell_view_new ();
// ::GtkCellView* /*none*/ gtk_cell_view_new ();
Gtk::CellView base::CellViewBase::new_ () noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_cell_view_new_with_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
Gtk::CellView base::CellViewBase::new_with_context (Gtk::CellArea area, Gtk::CellAreaContext context) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto area_to_c = gi::unwrap (area, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c), (::GtkCellAreaContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_cell_view_new_with_markup (const char* markup /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_markup (const char* markup /*none*/);
Gtk::CellView base::CellViewBase::new_with_markup (const gi::cstring_v markup) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (markup_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_cell_view_new_with_text (const char* text /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_text (const char* text /*none*/);
Gtk::CellView base::CellViewBase::new_with_text (const gi::cstring_v text) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_cell_view_new_with_texture (GdkTexture* texture /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_texture (::GdkTexture* texture /*none*/);
Gtk::CellView base::CellViewBase::new_with_texture (Gdk::Texture texture) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (::GdkTexture* texture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_texture;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkTexture*) (texture_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkTreePath* /*full,nullable*/ gtk_cell_view_get_displayed_row (GtkCellView* cell_view /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_cell_view_get_displayed_row (::GtkCellView* cell_view /*none*/);
Gtk::TreePath base::CellViewBase::get_displayed_row () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_get_displayed_row;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_cell_view_get_draw_sensitive (GtkCellView* cell_view /*none*/);
// gboolean gtk_cell_view_get_draw_sensitive (::GtkCellView* cell_view /*none*/);
bool base::CellViewBase::get_draw_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_get_draw_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_view_get_fit_model (GtkCellView* cell_view /*none*/);
// gboolean gtk_cell_view_get_fit_model (::GtkCellView* cell_view /*none*/);
bool base::CellViewBase::get_fit_model () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_get_fit_model;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* /*none,nullable*/ gtk_cell_view_get_model (GtkCellView* cell_view /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_cell_view_get_model (::GtkCellView* cell_view /*none*/);
Gtk::TreeModel base::CellViewBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_cell_view_set_displayed_row (GtkCellView* cell_view /*none*/, GtkTreePath* path /*none,nullable*/);
// void gtk_cell_view_set_displayed_row (::GtkCellView* cell_view /*none*/, ::GtkTreePath* path /*none,nullable*/);
void base::CellViewBase::set_displayed_row (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_set_displayed_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}
void base::CellViewBase::set_displayed_row () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_set_displayed_row;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_cell_view_set_draw_sensitive (GtkCellView* cell_view /*none*/, gboolean draw_sensitive);
// void gtk_cell_view_set_draw_sensitive (::GtkCellView* cell_view /*none*/, gboolean draw_sensitive);
void base::CellViewBase::set_draw_sensitive (gboolean draw_sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, gboolean draw_sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_set_draw_sensitive;
  auto draw_sensitive_to_c = draw_sensitive;
  call_wrap_v ((::GtkCellView*) (gobj_()), (gboolean) (draw_sensitive_to_c));
}

// void gtk_cell_view_set_fit_model (GtkCellView* cell_view /*none*/, gboolean fit_model);
// void gtk_cell_view_set_fit_model (::GtkCellView* cell_view /*none*/, gboolean fit_model);
void base::CellViewBase::set_fit_model (gboolean fit_model) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, gboolean fit_model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_set_fit_model;
  auto fit_model_to_c = fit_model;
  call_wrap_v ((::GtkCellView*) (gobj_()), (gboolean) (fit_model_to_c));
}

// void gtk_cell_view_set_model (GtkCellView* cell_view /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_cell_view_set_model (::GtkCellView* cell_view /*none*/, ::GtkTreeModel* model /*none,nullable*/);
void base::CellViewBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::CellViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra_def_impl.hpp>)
#include <gtk/cellview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra_impl.hpp>)
#include <gtk/cellview_extra_impl.hpp>
#endif
#endif

#endif
