// AUTO-GENERATED

#ifndef _GI_GTK_PRINTJOB_IMPL_HPP_
#define _GI_GTK_PRINTJOB_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPrintJob* /*full*/ gtk_print_job_new (const char* title /*none*/, GtkPrinter* printer /*none*/, GtkPrintSettings* settings /*none*/, GtkPageSetup* page_setup /*none*/);
// ::GtkPrintJob* /*full*/ gtk_print_job_new (const char* title /*none*/, ::GtkPrinter* printer /*none*/, ::GtkPrintSettings* settings /*none*/, ::GtkPageSetup* page_setup /*none*/);
Gtk::PrintJob base::PrintJobBase::new_ (const gi::cstring_v title, Gtk::Printer printer, Gtk::PrintSettings settings, Gtk::PageSetup page_setup) noexcept
{
  typedef ::GtkPrintJob* (*call_wrap_t) (const char* title, ::GtkPrinter* printer, ::GtkPrintSettings* settings, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_job_new;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto printer_to_c = gi::unwrap (printer, gi::transfer_none);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkPrinter*) (printer_to_c), (::GtkPrintSettings*) (settings_to_c), (::GtkPageSetup*) (page_setup_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_print_job_get_collate (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_collate (::GtkPrintJob* job /*none*/);
bool base::PrintJobBase::get_collate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_collate;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// guint gtk_print_job_get_n_up (GtkPrintJob* job /*none*/);
// guint gtk_print_job_get_n_up (::GtkPrintJob* job /*none*/);
guint base::PrintJobBase::get_n_up () noexcept
{
  typedef guint (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_n_up;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// GtkNumberUpLayout gtk_print_job_get_n_up_layout (GtkPrintJob* job /*none*/);
// ::GtkNumberUpLayout gtk_print_job_get_n_up_layout (::GtkPrintJob* job /*none*/);
Gtk::NumberUpLayout base::PrintJobBase::get_n_up_layout () noexcept
{
  typedef ::GtkNumberUpLayout (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_n_up_layout;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gtk_print_job_get_num_copies (GtkPrintJob* job /*none*/);
// gint gtk_print_job_get_num_copies (::GtkPrintJob* job /*none*/);
gint base::PrintJobBase::get_num_copies () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_num_copies;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// GtkPageRange* /*none*/ gtk_print_job_get_page_ranges (GtkPrintJob* job /*none*/, int* n_ranges);
// ::GtkPageRange** /*none*/ gtk_print_job_get_page_ranges (::GtkPrintJob* job /*none*/, gint* n_ranges);
// SKIP;  return boxed array not supported (depth 1)

// GtkPageSet gtk_print_job_get_page_set (GtkPrintJob* job /*none*/);
// ::GtkPageSet gtk_print_job_get_page_set (::GtkPrintJob* job /*none*/);
Gtk::PageSet base::PrintJobBase::get_page_set () noexcept
{
  typedef ::GtkPageSet (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_page_set;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPrintPages gtk_print_job_get_pages (GtkPrintJob* job /*none*/);
// ::GtkPrintPages gtk_print_job_get_pages (::GtkPrintJob* job /*none*/);
Gtk::PrintPages base::PrintJobBase::get_pages () noexcept
{
  typedef ::GtkPrintPages (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_pages;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPrinter* /*none*/ gtk_print_job_get_printer (GtkPrintJob* job /*none*/);
// ::GtkPrinter* /*none*/ gtk_print_job_get_printer (::GtkPrintJob* job /*none*/);
Gtk::Printer base::PrintJobBase::get_printer () noexcept
{
  typedef ::GtkPrinter* (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_printer;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_print_job_get_reverse (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_reverse (::GtkPrintJob* job /*none*/);
bool base::PrintJobBase::get_reverse () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_reverse;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_job_get_rotate (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_rotate (::GtkPrintJob* job /*none*/);
bool base::PrintJobBase::get_rotate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_rotate;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// double gtk_print_job_get_scale (GtkPrintJob* job /*none*/);
// gdouble gtk_print_job_get_scale (::GtkPrintJob* job /*none*/);
gdouble base::PrintJobBase::get_scale () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_scale;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// GtkPrintSettings* /*none*/ gtk_print_job_get_settings (GtkPrintJob* job /*none*/);
// ::GtkPrintSettings* /*none*/ gtk_print_job_get_settings (::GtkPrintJob* job /*none*/);
Gtk::PrintSettings base::PrintJobBase::get_settings () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_settings;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPrintStatus gtk_print_job_get_status (GtkPrintJob* job /*none*/);
// ::GtkPrintStatus gtk_print_job_get_status (::GtkPrintJob* job /*none*/);
Gtk::PrintStatus base::PrintJobBase::get_status () noexcept
{
  typedef ::GtkPrintStatus (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_status;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// cairo_surface_t* /*none*/ gtk_print_job_get_surface (GtkPrintJob* job /*none*/, GError ** error);
// ::cairo_surface_t* /*none*/ gtk_print_job_get_surface (::GtkPrintJob* job /*none*/, GError ** error);
cairo::Surface_Ref base::PrintJobBase::get_surface ()
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkPrintJob* job, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_surface;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none);
}
cairo::Surface_Ref base::PrintJobBase::get_surface (GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkPrintJob* job, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_surface;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_print_job_get_title (GtkPrintJob* job /*none*/);
// const char* /*none*/ gtk_print_job_get_title (::GtkPrintJob* job /*none*/);
gi::cstring_v base::PrintJobBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_title;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_print_job_get_track_print_status (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_track_print_status (::GtkPrintJob* job /*none*/);
bool base::PrintJobBase::get_track_print_status () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_get_track_print_status;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()));
  return _temp_ret;
}

// void gtk_print_job_send (GtkPrintJob* job /*none*/, GtkPrintJobCompleteFunc callback /*none*/, gpointer user_data, GDestroyNotify dnotify /*none*/);
// void gtk_print_job_send (::GtkPrintJob* job /*none*/,  callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type dnotify /*none*/);
// SKIP; callback type  not supported

// void gtk_print_job_set_collate (GtkPrintJob* job /*none*/, gboolean collate);
// void gtk_print_job_set_collate (::GtkPrintJob* job /*none*/, gboolean collate);
void base::PrintJobBase::set_collate (gboolean collate) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, gboolean collate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_collate;
  auto collate_to_c = collate;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (gboolean) (collate_to_c));
}

// void gtk_print_job_set_n_up (GtkPrintJob* job /*none*/, guint n_up);
// void gtk_print_job_set_n_up (::GtkPrintJob* job /*none*/, guint n_up);
void base::PrintJobBase::set_n_up (guint n_up) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, guint n_up);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_n_up;
  auto n_up_to_c = n_up;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (guint) (n_up_to_c));
}

// void gtk_print_job_set_n_up_layout (GtkPrintJob* job /*none*/, GtkNumberUpLayout layout);
// void gtk_print_job_set_n_up_layout (::GtkPrintJob* job /*none*/, ::GtkNumberUpLayout layout);
void base::PrintJobBase::set_n_up_layout (Gtk::NumberUpLayout layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, ::GtkNumberUpLayout layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_n_up_layout;
  auto layout_to_c = gi::unwrap (layout);
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (::GtkNumberUpLayout) (layout_to_c));
}

// void gtk_print_job_set_num_copies (GtkPrintJob* job /*none*/, int num_copies);
// void gtk_print_job_set_num_copies (::GtkPrintJob* job /*none*/, gint num_copies);
void base::PrintJobBase::set_num_copies (gint num_copies) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, gint num_copies);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_num_copies;
  auto num_copies_to_c = num_copies;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (gint) (num_copies_to_c));
}

// void gtk_print_job_set_page_ranges (GtkPrintJob* job /*none*/, GtkPageRange* ranges /*full*/, int n_ranges);
// void gtk_print_job_set_page_ranges (::GtkPrintJob* job /*none*/, ::GtkPageRange** ranges /*full*/, gint n_ranges);
// SKIP; ranges in boxed array not supported (depth 1)

// void gtk_print_job_set_page_set (GtkPrintJob* job /*none*/, GtkPageSet page_set);
// void gtk_print_job_set_page_set (::GtkPrintJob* job /*none*/, ::GtkPageSet page_set);
void base::PrintJobBase::set_page_set (Gtk::PageSet page_set) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, ::GtkPageSet page_set);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_page_set;
  auto page_set_to_c = gi::unwrap (page_set);
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (::GtkPageSet) (page_set_to_c));
}

// void gtk_print_job_set_pages (GtkPrintJob* job /*none*/, GtkPrintPages pages);
// void gtk_print_job_set_pages (::GtkPrintJob* job /*none*/, ::GtkPrintPages pages);
void base::PrintJobBase::set_pages (Gtk::PrintPages pages) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, ::GtkPrintPages pages);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_pages;
  auto pages_to_c = gi::unwrap (pages);
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (::GtkPrintPages) (pages_to_c));
}

// void gtk_print_job_set_reverse (GtkPrintJob* job /*none*/, gboolean reverse);
// void gtk_print_job_set_reverse (::GtkPrintJob* job /*none*/, gboolean reverse);
void base::PrintJobBase::set_reverse (gboolean reverse) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, gboolean reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_reverse;
  auto reverse_to_c = reverse;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (gboolean) (reverse_to_c));
}

// void gtk_print_job_set_rotate (GtkPrintJob* job /*none*/, gboolean rotate);
// void gtk_print_job_set_rotate (::GtkPrintJob* job /*none*/, gboolean rotate);
void base::PrintJobBase::set_rotate (gboolean rotate) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, gboolean rotate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_rotate;
  auto rotate_to_c = rotate;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (gboolean) (rotate_to_c));
}

// void gtk_print_job_set_scale (GtkPrintJob* job /*none*/, double scale);
// void gtk_print_job_set_scale (::GtkPrintJob* job /*none*/, gdouble scale);
void base::PrintJobBase::set_scale (gdouble scale) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, gdouble scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_scale;
  auto scale_to_c = scale;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (gdouble) (scale_to_c));
}

// gboolean gtk_print_job_set_source_fd (GtkPrintJob* job /*none*/, int fd, GError ** error);
// gboolean gtk_print_job_set_source_fd (::GtkPrintJob* job /*none*/, gint fd, GError ** error);
bool base::PrintJobBase::set_source_fd (gint fd)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_source_fd;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()), (gint) (fd_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintJobBase::set_source_fd (gint fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job, gint fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_source_fd;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()), (gint) (fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_print_job_set_source_file (GtkPrintJob* job /*none*/, const char* filename /*none*/, GError ** error);
// gboolean gtk_print_job_set_source_file (::GtkPrintJob* job /*none*/, const char* filename /*none*/, GError ** error);
bool base::PrintJobBase::set_source_file (const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_source_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintJobBase::set_source_file (const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintJob* job, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_source_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintJob*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_print_job_set_track_print_status (GtkPrintJob* job /*none*/, gboolean track_status);
// void gtk_print_job_set_track_print_status (::GtkPrintJob* job /*none*/, gboolean track_status);
void base::PrintJobBase::set_track_print_status (gboolean track_status) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintJob* job, gboolean track_status);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_job_set_track_print_status;
  auto track_status_to_c = track_status;
  call_wrap_v ((::GtkPrintJob*) (gobj_()), (gboolean) (track_status_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printjob_extra_def_impl.hpp>)
#include <gtk/printjob_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printjob_extra_impl.hpp>)
#include <gtk/printjob_extra_impl.hpp>
#endif
#endif

#endif
