// AUTO-GENERATED

#ifndef _GI_GTK_PRINTJOB_HPP_
#define _GI_GTK_PRINTJOB_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageRange;
class PageRange_Ref;
class PageSetup;
class PrintSettings;
class Printer;

class PrintJob;

namespace base {


#define GI_GTK_PRINTJOB_BASE base::PrintJobBase
class PrintJobBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintJob BaseObjectType;

PrintJobBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_job_get_type(); } 

// GtkPrintJob* /*full*/ gtk_print_job_new (const char* title /*none*/, GtkPrinter* printer /*none*/, GtkPrintSettings* settings /*none*/, GtkPageSetup* page_setup /*none*/);
// ::GtkPrintJob* /*full*/ gtk_print_job_new (const char* title /*none*/, ::GtkPrinter* printer /*none*/, ::GtkPrintSettings* settings /*none*/, ::GtkPageSetup* page_setup /*none*/);
static GI_INLINE_DECL Gtk::PrintJob new_ (const gi::cstring_v title, Gtk::Printer printer, Gtk::PrintSettings settings, Gtk::PageSetup page_setup) noexcept;

// gboolean gtk_print_job_get_collate (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_collate (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL bool get_collate () noexcept;

// guint gtk_print_job_get_n_up (GtkPrintJob* job /*none*/);
// guint gtk_print_job_get_n_up (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL guint get_n_up () noexcept;

// GtkNumberUpLayout gtk_print_job_get_n_up_layout (GtkPrintJob* job /*none*/);
// ::GtkNumberUpLayout gtk_print_job_get_n_up_layout (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL Gtk::NumberUpLayout get_n_up_layout () noexcept;

// int gtk_print_job_get_num_copies (GtkPrintJob* job /*none*/);
// gint gtk_print_job_get_num_copies (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL gint get_num_copies () noexcept;

// GtkPageRange* /*none*/ gtk_print_job_get_page_ranges (GtkPrintJob* job /*none*/, int* n_ranges);
// ::GtkPageRange** /*none*/ gtk_print_job_get_page_ranges (::GtkPrintJob* job /*none*/, gint* n_ranges);
// SKIP;  return boxed array not supported (depth 1)

// GtkPageSet gtk_print_job_get_page_set (GtkPrintJob* job /*none*/);
// ::GtkPageSet gtk_print_job_get_page_set (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL Gtk::PageSet get_page_set () noexcept;

// GtkPrintPages gtk_print_job_get_pages (GtkPrintJob* job /*none*/);
// ::GtkPrintPages gtk_print_job_get_pages (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL Gtk::PrintPages get_pages () noexcept;

// GtkPrinter* /*none*/ gtk_print_job_get_printer (GtkPrintJob* job /*none*/);
// ::GtkPrinter* /*none*/ gtk_print_job_get_printer (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL Gtk::Printer get_printer () noexcept;

// gboolean gtk_print_job_get_reverse (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_reverse (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL bool get_reverse () noexcept;

// gboolean gtk_print_job_get_rotate (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_rotate (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL bool get_rotate () noexcept;

// double gtk_print_job_get_scale (GtkPrintJob* job /*none*/);
// gdouble gtk_print_job_get_scale (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL gdouble get_scale () noexcept;

// GtkPrintSettings* /*none*/ gtk_print_job_get_settings (GtkPrintJob* job /*none*/);
// ::GtkPrintSettings* /*none*/ gtk_print_job_get_settings (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL Gtk::PrintSettings get_settings () noexcept;

// GtkPrintStatus gtk_print_job_get_status (GtkPrintJob* job /*none*/);
// ::GtkPrintStatus gtk_print_job_get_status (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL Gtk::PrintStatus get_status () noexcept;

// cairo_surface_t* /*none*/ gtk_print_job_get_surface (GtkPrintJob* job /*none*/, GError ** error);
// ::cairo_surface_t* /*none*/ gtk_print_job_get_surface (::GtkPrintJob* job /*none*/, GError ** error);
GI_INLINE_DECL cairo::Surface_Ref get_surface ();
GI_INLINE_DECL cairo::Surface_Ref get_surface (GLib::Error * _error) noexcept;

// const char* /*none*/ gtk_print_job_get_title (GtkPrintJob* job /*none*/);
// const char* /*none*/ gtk_print_job_get_title (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean gtk_print_job_get_track_print_status (GtkPrintJob* job /*none*/);
// gboolean gtk_print_job_get_track_print_status (::GtkPrintJob* job /*none*/);
GI_INLINE_DECL bool get_track_print_status () noexcept;

// void gtk_print_job_send (GtkPrintJob* job /*none*/, GtkPrintJobCompleteFunc callback /*none*/, gpointer user_data, GDestroyNotify dnotify /*none*/);
// void gtk_print_job_send (::GtkPrintJob* job /*none*/,  callback /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type dnotify /*none*/);
// SKIP; callback type  not supported

// void gtk_print_job_set_collate (GtkPrintJob* job /*none*/, gboolean collate);
// void gtk_print_job_set_collate (::GtkPrintJob* job /*none*/, gboolean collate);
GI_INLINE_DECL void set_collate (gboolean collate) noexcept;

// void gtk_print_job_set_n_up (GtkPrintJob* job /*none*/, guint n_up);
// void gtk_print_job_set_n_up (::GtkPrintJob* job /*none*/, guint n_up);
GI_INLINE_DECL void set_n_up (guint n_up) noexcept;

// void gtk_print_job_set_n_up_layout (GtkPrintJob* job /*none*/, GtkNumberUpLayout layout);
// void gtk_print_job_set_n_up_layout (::GtkPrintJob* job /*none*/, ::GtkNumberUpLayout layout);
GI_INLINE_DECL void set_n_up_layout (Gtk::NumberUpLayout layout) noexcept;

// void gtk_print_job_set_num_copies (GtkPrintJob* job /*none*/, int num_copies);
// void gtk_print_job_set_num_copies (::GtkPrintJob* job /*none*/, gint num_copies);
GI_INLINE_DECL void set_num_copies (gint num_copies) noexcept;

// void gtk_print_job_set_page_ranges (GtkPrintJob* job /*none*/, GtkPageRange* ranges /*full*/, int n_ranges);
// void gtk_print_job_set_page_ranges (::GtkPrintJob* job /*none*/, ::GtkPageRange** ranges /*full*/, gint n_ranges);
// SKIP; ranges in boxed array not supported (depth 1)

// void gtk_print_job_set_page_set (GtkPrintJob* job /*none*/, GtkPageSet page_set);
// void gtk_print_job_set_page_set (::GtkPrintJob* job /*none*/, ::GtkPageSet page_set);
GI_INLINE_DECL void set_page_set (Gtk::PageSet page_set) noexcept;

// void gtk_print_job_set_pages (GtkPrintJob* job /*none*/, GtkPrintPages pages);
// void gtk_print_job_set_pages (::GtkPrintJob* job /*none*/, ::GtkPrintPages pages);
GI_INLINE_DECL void set_pages (Gtk::PrintPages pages) noexcept;

// void gtk_print_job_set_reverse (GtkPrintJob* job /*none*/, gboolean reverse);
// void gtk_print_job_set_reverse (::GtkPrintJob* job /*none*/, gboolean reverse);
GI_INLINE_DECL void set_reverse (gboolean reverse) noexcept;

// void gtk_print_job_set_rotate (GtkPrintJob* job /*none*/, gboolean rotate);
// void gtk_print_job_set_rotate (::GtkPrintJob* job /*none*/, gboolean rotate);
GI_INLINE_DECL void set_rotate (gboolean rotate) noexcept;

// void gtk_print_job_set_scale (GtkPrintJob* job /*none*/, double scale);
// void gtk_print_job_set_scale (::GtkPrintJob* job /*none*/, gdouble scale);
GI_INLINE_DECL void set_scale (gdouble scale) noexcept;

// gboolean gtk_print_job_set_source_fd (GtkPrintJob* job /*none*/, int fd, GError ** error);
// gboolean gtk_print_job_set_source_fd (::GtkPrintJob* job /*none*/, gint fd, GError ** error);
GI_INLINE_DECL bool set_source_fd (gint fd);
GI_INLINE_DECL bool set_source_fd (gint fd, GLib::Error * _error) noexcept;

// gboolean gtk_print_job_set_source_file (GtkPrintJob* job /*none*/, const char* filename /*none*/, GError ** error);
// gboolean gtk_print_job_set_source_file (::GtkPrintJob* job /*none*/, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool set_source_file (const gi::cstring_v filename);
GI_INLINE_DECL bool set_source_file (const gi::cstring_v filename, GLib::Error * _error) noexcept;

// void gtk_print_job_set_track_print_status (GtkPrintJob* job /*none*/, gboolean track_status);
// void gtk_print_job_set_track_print_status (::GtkPrintJob* job /*none*/, gboolean track_status);
GI_INLINE_DECL void set_track_print_status (gboolean track_status) noexcept;

gi::property_proxy<Gtk::PageSetup, base::PrintJobBase> property_page_setup()
{ return gi::property_proxy<Gtk::PageSetup, base::PrintJobBase> (*this, "page-setup"); }
const gi::property_proxy<Gtk::PageSetup, base::PrintJobBase> property_page_setup() const
{ return gi::property_proxy<Gtk::PageSetup, base::PrintJobBase> (*this, "page-setup"); }

gi::property_proxy<Gtk::Printer, base::PrintJobBase> property_printer()
{ return gi::property_proxy<Gtk::Printer, base::PrintJobBase> (*this, "printer"); }
const gi::property_proxy<Gtk::Printer, base::PrintJobBase> property_printer() const
{ return gi::property_proxy<Gtk::Printer, base::PrintJobBase> (*this, "printer"); }

gi::property_proxy<Gtk::PrintSettings, base::PrintJobBase> property_settings()
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintJobBase> (*this, "settings"); }
const gi::property_proxy<Gtk::PrintSettings, base::PrintJobBase> property_settings() const
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintJobBase> (*this, "settings"); }

gi::property_proxy<gi::cstring, base::PrintJobBase> property_title()
{ return gi::property_proxy<gi::cstring, base::PrintJobBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::PrintJobBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::PrintJobBase> (*this, "title"); }

gi::property_proxy<bool, base::PrintJobBase> property_track_print_status()
{ return gi::property_proxy<bool, base::PrintJobBase> (*this, "track-print-status"); }
const gi::property_proxy<bool, base::PrintJobBase> property_track_print_status() const
{ return gi::property_proxy<bool, base::PrintJobBase> (*this, "track-print-status"); }

// (signal) void status-changed ();
// (signal) void status-changed ();
gi::signal_proxy<void(Gtk::PrintJob)> signal_status_changed()
{ return gi::signal_proxy<void(Gtk::PrintJob)> (*this, "status-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printjob_extra_def.hpp>)
#include <gtk/printjob_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printjob_extra.hpp>)
#include <gtk/printjob_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintJob : public GI_GTK_PRINTJOB_BASE
{ typedef GI_GTK_PRINTJOB_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintJob>
{ typedef Gtk::PrintJob type; }; 

} // namespace repository

} // namespace gi

#endif
