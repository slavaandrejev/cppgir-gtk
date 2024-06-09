// AUTO-GENERATED

#ifndef _GI_GTK_PRINTCONTEXT_IMPL_HPP_
#define _GI_GTK_PRINTCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// PangoContext* /*full*/ gtk_print_context_create_pango_context (GtkPrintContext* context /*none*/);
// ::PangoContext* /*full*/ gtk_print_context_create_pango_context (::GtkPrintContext* context /*none*/);
Pango::Context base::PrintContextBase::create_pango_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_create_pango_context;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoLayout* /*full*/ gtk_print_context_create_pango_layout (GtkPrintContext* context /*none*/);
// ::PangoLayout* /*full*/ gtk_print_context_create_pango_layout (::GtkPrintContext* context /*none*/);
Pango::Layout base::PrintContextBase::create_pango_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_create_pango_layout;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// cairo_t* /*none*/ gtk_print_context_get_cairo_context (GtkPrintContext* context /*none*/);
// ::cairo_t* /*none*/ gtk_print_context_get_cairo_context (::GtkPrintContext* context /*none*/);
cairo::Context_Ref base::PrintContextBase::get_cairo_context () noexcept
{
  typedef ::cairo_t* (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_cairo_context;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_print_context_get_dpi_x (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_dpi_x (::GtkPrintContext* context /*none*/);
gdouble base::PrintContextBase::get_dpi_x () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_dpi_x;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return _temp_ret;
}

// double gtk_print_context_get_dpi_y (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_dpi_y (::GtkPrintContext* context /*none*/);
gdouble base::PrintContextBase::get_dpi_y () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_dpi_y;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_context_get_hard_margins (GtkPrintContext* context /*none*/, double* top, double* bottom, double* left, double* right);
// gboolean gtk_print_context_get_hard_margins (::GtkPrintContext* context /*none*/, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
bool base::PrintContextBase::get_hard_margins (gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintContext* context, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_hard_margins;
  gdouble right_o {};
  gdouble left_o {};
  gdouble bottom_o {};
  gdouble top_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()), (gdouble*) (&top_o), (gdouble*) (&bottom_o), (gdouble*) (&left_o), (gdouble*) (&right_o));
  right = right_o;
  left = left_o;
  bottom = bottom_o;
  top = top_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble, gdouble, gdouble> base::PrintContextBase::get_hard_margins () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintContext* context, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_hard_margins;
  gdouble right_o {};
  gdouble left_o {};
  gdouble bottom_o {};
  gdouble top_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()), (gdouble*) (&top_o), (gdouble*) (&bottom_o), (gdouble*) (&left_o), (gdouble*) (&right_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = top_o;
  auto &&tmp_return_3 = bottom_o;
  auto &&tmp_return_4 = left_o;
  auto &&tmp_return_5 = right_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// double gtk_print_context_get_height (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_height (::GtkPrintContext* context /*none*/);
gdouble base::PrintContextBase::get_height () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_height;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return _temp_ret;
}

// GtkPageSetup* /*none*/ gtk_print_context_get_page_setup (GtkPrintContext* context /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_context_get_page_setup (::GtkPrintContext* context /*none*/);
Gtk::PageSetup base::PrintContextBase::get_page_setup () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_page_setup;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontMap* /*none*/ gtk_print_context_get_pango_fontmap (GtkPrintContext* context /*none*/);
// ::PangoFontMap* /*none*/ gtk_print_context_get_pango_fontmap (::GtkPrintContext* context /*none*/);
Pango::FontMap base::PrintContextBase::get_pango_fontmap () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_pango_fontmap;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_print_context_get_width (GtkPrintContext* context /*none*/);
// gdouble gtk_print_context_get_width (::GtkPrintContext* context /*none*/);
gdouble base::PrintContextBase::get_width () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_get_width;
  auto _temp_ret = call_wrap_v ((::GtkPrintContext*) (gobj_()));
  return _temp_ret;
}

// void gtk_print_context_set_cairo_context (GtkPrintContext* context /*none*/, cairo_t* cr /*none*/, double dpi_x, double dpi_y);
// void gtk_print_context_set_cairo_context (::GtkPrintContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble dpi_x, gdouble dpi_y);
void base::PrintContextBase::set_cairo_context (cairo::Context_Ref cr, gdouble dpi_x, gdouble dpi_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintContext* context, ::cairo_t* cr, gdouble dpi_x, gdouble dpi_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_context_set_cairo_context;
  auto dpi_y_to_c = dpi_y;
  auto dpi_x_to_c = dpi_x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  call_wrap_v ((::GtkPrintContext*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (dpi_x_to_c), (gdouble) (dpi_y_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printcontext_extra_def_impl.hpp>)
#include <gtk/printcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printcontext_extra_impl.hpp>)
#include <gtk/printcontext_extra_impl.hpp>
#endif
#endif

#endif
