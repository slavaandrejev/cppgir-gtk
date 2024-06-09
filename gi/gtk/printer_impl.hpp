// AUTO-GENERATED

#ifndef _GI_GTK_PRINTER_IMPL_HPP_
#define _GI_GTK_PRINTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPrinter* /*full*/ gtk_printer_new (const char* name /*none*/, GtkPrintBackend* backend /*none*/, gboolean virtual_);
// ::GtkPrinter* /*full*/ gtk_printer_new (const char* name /*none*/,  backend /*none*/, gboolean virtual_);
// SKIP; backend type  not supported

// gboolean gtk_printer_accepts_pdf (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_accepts_pdf (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::accepts_pdf () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_accepts_pdf;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_printer_accepts_ps (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_accepts_ps (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::accepts_ps () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_accepts_ps;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// int gtk_printer_compare (GtkPrinter* a /*none*/, GtkPrinter* b /*none*/);
// gint gtk_printer_compare (::GtkPrinter* a /*none*/, ::GtkPrinter* b /*none*/);
gint base::PrinterBase::compare (Gtk::Printer b) noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrinter* a, ::GtkPrinter* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_compare;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()), (::GtkPrinter*) (b_to_c));
  return _temp_ret;
}

// GtkPrintBackend* /*none*/ gtk_printer_get_backend (GtkPrinter* printer /*none*/);
//  /*none*/ gtk_printer_get_backend (::GtkPrinter* printer /*none*/);
// SKIP;  type  not supported

// GtkPrintCapabilities gtk_printer_get_capabilities (GtkPrinter* printer /*none*/);
// ::GtkPrintCapabilities gtk_printer_get_capabilities (::GtkPrinter* printer /*none*/);
Gtk::PrintCapabilities base::PrinterBase::get_capabilities () noexcept
{
  typedef ::GtkPrintCapabilities (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_capabilities;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPageSetup* /*full*/ gtk_printer_get_default_page_size (GtkPrinter* printer /*none*/);
// ::GtkPageSetup* /*full*/ gtk_printer_get_default_page_size (::GtkPrinter* printer /*none*/);
Gtk::PageSetup base::PrinterBase::get_default_page_size () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_default_page_size;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ gtk_printer_get_description (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_description (::GtkPrinter* printer /*none*/);
gi::cstring_v base::PrinterBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_description;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_printer_get_hard_margins (GtkPrinter* printer /*none*/, double* top, double* bottom, double* left, double* right);
// gboolean gtk_printer_get_hard_margins (::GtkPrinter* printer /*none*/, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
bool base::PrinterBase::get_hard_margins (gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_hard_margins;
  gdouble right_o {};
  gdouble left_o {};
  gdouble bottom_o {};
  gdouble top_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()), (gdouble*) (&top_o), (gdouble*) (&bottom_o), (gdouble*) (&left_o), (gdouble*) (&right_o));
  right = right_o;
  left = left_o;
  bottom = bottom_o;
  top = top_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble, gdouble, gdouble> base::PrinterBase::get_hard_margins () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_hard_margins;
  gdouble right_o {};
  gdouble left_o {};
  gdouble bottom_o {};
  gdouble top_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()), (gdouble*) (&top_o), (gdouble*) (&bottom_o), (gdouble*) (&left_o), (gdouble*) (&right_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = top_o;
  auto &&tmp_return_3 = bottom_o;
  auto &&tmp_return_4 = left_o;
  auto &&tmp_return_5 = right_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// gboolean gtk_printer_get_hard_margins_for_paper_size (GtkPrinter* printer /*none*/, GtkPaperSize* paper_size /*none*/, double* top, double* bottom, double* left, double* right);
// gboolean gtk_printer_get_hard_margins_for_paper_size (::GtkPrinter* printer /*none*/, ::GtkPaperSize* paper_size /*none*/, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
bool base::PrinterBase::get_hard_margins_for_paper_size (Gtk::PaperSize_Ref paper_size, gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer, ::GtkPaperSize* paper_size, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_hard_margins_for_paper_size;
  gdouble right_o {};
  gdouble left_o {};
  gdouble bottom_o {};
  gdouble top_o {};
  auto paper_size_to_c = gi::unwrap (paper_size, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()), (::GtkPaperSize*) (paper_size_to_c), (gdouble*) (&top_o), (gdouble*) (&bottom_o), (gdouble*) (&left_o), (gdouble*) (&right_o));
  right = right_o;
  left = left_o;
  bottom = bottom_o;
  top = top_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble, gdouble, gdouble> base::PrinterBase::get_hard_margins_for_paper_size (Gtk::PaperSize_Ref paper_size) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer, ::GtkPaperSize* paper_size, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_hard_margins_for_paper_size;
  gdouble right_o {};
  gdouble left_o {};
  gdouble bottom_o {};
  gdouble top_o {};
  auto paper_size_to_c = gi::unwrap (paper_size, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()), (::GtkPaperSize*) (paper_size_to_c), (gdouble*) (&top_o), (gdouble*) (&bottom_o), (gdouble*) (&left_o), (gdouble*) (&right_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = top_o;
  auto &&tmp_return_3 = bottom_o;
  auto &&tmp_return_4 = left_o;
  auto &&tmp_return_5 = right_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// const char* /*none*/ gtk_printer_get_icon_name (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_icon_name (::GtkPrinter* printer /*none*/);
gi::cstring_v base::PrinterBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_printer_get_job_count (GtkPrinter* printer /*none*/);
// gint gtk_printer_get_job_count (::GtkPrinter* printer /*none*/);
gint base::PrinterBase::get_job_count () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_job_count;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// const char* /*none*/ gtk_printer_get_location (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_location (::GtkPrinter* printer /*none*/);
gi::cstring_v base::PrinterBase::get_location () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_location;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_printer_get_name (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_name (::GtkPrinter* printer /*none*/);
gi::cstring_v base::PrinterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_name;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_printer_get_state_message (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_state_message (::GtkPrinter* printer /*none*/);
gi::cstring_v base::PrinterBase::get_state_message () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_get_state_message;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_printer_has_details (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_has_details (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::has_details () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_has_details;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_printer_is_accepting_jobs (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_accepting_jobs (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::is_accepting_jobs () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_is_accepting_jobs;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_printer_is_active (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_active (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_is_active;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_printer_is_default (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_default (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::is_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_is_default;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_printer_is_paused (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_paused (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::is_paused () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_is_paused;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_printer_is_virtual (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_virtual (::GtkPrinter* printer /*none*/);
bool base::PrinterBase::is_virtual () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_is_virtual;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return _temp_ret;
}

// GList* /*full*/ gtk_printer_list_papers (GtkPrinter* printer /*none*/);
// ::GList* /*full*/ gtk_printer_list_papers (::GtkPrinter* printer /*none*/);
gi::Collection<GList, ::GtkPageSetup*, gi::transfer_full_t> base::PrinterBase::list_papers () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_list_papers;
  auto _temp_ret = call_wrap_v ((::GtkPrinter*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkPageSetup*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void gtk_printer_request_details (GtkPrinter* printer /*none*/);
// void gtk_printer_request_details (::GtkPrinter* printer /*none*/);
void base::PrinterBase::request_details () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrinter* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_printer_request_details;
  call_wrap_v ((::GtkPrinter*) (gobj_()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printer_extra_def_impl.hpp>)
#include <gtk/printer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printer_extra_impl.hpp>)
#include <gtk/printer_extra_impl.hpp>
#endif
#endif

#endif
