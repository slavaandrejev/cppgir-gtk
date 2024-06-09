// AUTO-GENERATED

#ifndef _GI_GTK_PRINTER_HPP_
#define _GI_GTK_PRINTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PaperSize;
class PaperSize_Ref;

class Printer;

namespace base {


#define GI_GTK_PRINTER_BASE base::PrinterBase
class PrinterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrinter BaseObjectType;

PrinterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_printer_get_type(); } 

// GtkPrinter* /*full*/ gtk_printer_new (const char* name /*none*/, GtkPrintBackend* backend /*none*/, gboolean virtual_);
// ::GtkPrinter* /*full*/ gtk_printer_new (const char* name /*none*/,  backend /*none*/, gboolean virtual_);
// SKIP; backend type  not supported

// gboolean gtk_printer_accepts_pdf (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_accepts_pdf (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool accepts_pdf () noexcept;

// gboolean gtk_printer_accepts_ps (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_accepts_ps (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool accepts_ps () noexcept;

// int gtk_printer_compare (GtkPrinter* a /*none*/, GtkPrinter* b /*none*/);
// gint gtk_printer_compare (::GtkPrinter* a /*none*/, ::GtkPrinter* b /*none*/);
GI_INLINE_DECL gint compare (Gtk::Printer b) noexcept;

// GtkPrintBackend* /*none*/ gtk_printer_get_backend (GtkPrinter* printer /*none*/);
//  /*none*/ gtk_printer_get_backend (::GtkPrinter* printer /*none*/);
// SKIP;  type  not supported

// GtkPrintCapabilities gtk_printer_get_capabilities (GtkPrinter* printer /*none*/);
// ::GtkPrintCapabilities gtk_printer_get_capabilities (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL Gtk::PrintCapabilities get_capabilities () noexcept;

// GtkPageSetup* /*full*/ gtk_printer_get_default_page_size (GtkPrinter* printer /*none*/);
// ::GtkPageSetup* /*full*/ gtk_printer_get_default_page_size (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_default_page_size () noexcept;

// const char* /*none*/ gtk_printer_get_description (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_description (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// gboolean gtk_printer_get_hard_margins (GtkPrinter* printer /*none*/, double* top, double* bottom, double* left, double* right);
// gboolean gtk_printer_get_hard_margins (::GtkPrinter* printer /*none*/, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
GI_INLINE_DECL bool get_hard_margins (gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble, gdouble, gdouble> get_hard_margins () noexcept;

// gboolean gtk_printer_get_hard_margins_for_paper_size (GtkPrinter* printer /*none*/, GtkPaperSize* paper_size /*none*/, double* top, double* bottom, double* left, double* right);
// gboolean gtk_printer_get_hard_margins_for_paper_size (::GtkPrinter* printer /*none*/, ::GtkPaperSize* paper_size /*none*/, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
GI_INLINE_DECL bool get_hard_margins_for_paper_size (Gtk::PaperSize_Ref paper_size, gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble, gdouble, gdouble> get_hard_margins_for_paper_size (Gtk::PaperSize_Ref paper_size) noexcept;

// const char* /*none*/ gtk_printer_get_icon_name (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_icon_name (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// int gtk_printer_get_job_count (GtkPrinter* printer /*none*/);
// gint gtk_printer_get_job_count (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gint get_job_count () noexcept;

// const char* /*none*/ gtk_printer_get_location (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_location (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gi::cstring_v get_location () noexcept;

// const char* /*none*/ gtk_printer_get_name (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_name (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const char* /*none*/ gtk_printer_get_state_message (GtkPrinter* printer /*none*/);
// const char* /*none*/ gtk_printer_get_state_message (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gi::cstring_v get_state_message () noexcept;

// gboolean gtk_printer_has_details (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_has_details (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool has_details () noexcept;

// gboolean gtk_printer_is_accepting_jobs (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_accepting_jobs (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool is_accepting_jobs () noexcept;

// gboolean gtk_printer_is_active (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_active (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool is_active () noexcept;

// gboolean gtk_printer_is_default (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_default (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool is_default () noexcept;

// gboolean gtk_printer_is_paused (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_paused (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool is_paused () noexcept;

// gboolean gtk_printer_is_virtual (GtkPrinter* printer /*none*/);
// gboolean gtk_printer_is_virtual (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL bool is_virtual () noexcept;

// GList* /*full*/ gtk_printer_list_papers (GtkPrinter* printer /*none*/);
// ::GList* /*full*/ gtk_printer_list_papers (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkPageSetup*, gi::transfer_full_t> list_papers () noexcept;

// void gtk_printer_request_details (GtkPrinter* printer /*none*/);
// void gtk_printer_request_details (::GtkPrinter* printer /*none*/);
GI_INLINE_DECL void request_details () noexcept;

gi::property_proxy<bool, base::PrinterBase> property_accepting_jobs()
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "accepting-jobs"); }
const gi::property_proxy<bool, base::PrinterBase> property_accepting_jobs() const
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "accepting-jobs"); }

gi::property_proxy<bool, base::PrinterBase> property_accepts_pdf()
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "accepts-pdf"); }
const gi::property_proxy<bool, base::PrinterBase> property_accepts_pdf() const
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "accepts-pdf"); }

gi::property_proxy<bool, base::PrinterBase> property_accepts_ps()
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "accepts-ps"); }
const gi::property_proxy<bool, base::PrinterBase> property_accepts_ps() const
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "accepts-ps"); }

gi::property_proxy<gi::cstring, base::PrinterBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::PrinterBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::PrinterBase> property_is_virtual()
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "is-virtual"); }
const gi::property_proxy<bool, base::PrinterBase> property_is_virtual() const
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "is-virtual"); }

gi::property_proxy<gint, base::PrinterBase> property_job_count()
{ return gi::property_proxy<gint, base::PrinterBase> (*this, "job-count"); }
const gi::property_proxy<gint, base::PrinterBase> property_job_count() const
{ return gi::property_proxy<gint, base::PrinterBase> (*this, "job-count"); }

gi::property_proxy<gi::cstring, base::PrinterBase> property_location()
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "location"); }
const gi::property_proxy<gi::cstring, base::PrinterBase> property_location() const
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "location"); }

gi::property_proxy<gi::cstring, base::PrinterBase> property_name()
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::PrinterBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "name"); }

gi::property_proxy<bool, base::PrinterBase> property_paused()
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "paused"); }
const gi::property_proxy<bool, base::PrinterBase> property_paused() const
{ return gi::property_proxy<bool, base::PrinterBase> (*this, "paused"); }

gi::property_proxy<gi::cstring, base::PrinterBase> property_state_message()
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "state-message"); }
const gi::property_proxy<gi::cstring, base::PrinterBase> property_state_message() const
{ return gi::property_proxy<gi::cstring, base::PrinterBase> (*this, "state-message"); }

// (signal) void details-acquired (gboolean success);
// (signal) void details-acquired (gboolean success);
gi::signal_proxy<void(Gtk::Printer, gboolean success)> signal_details_acquired()
{ return gi::signal_proxy<void(Gtk::Printer, gboolean success)> (*this, "details-acquired"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printer_extra_def.hpp>)
#include <gtk/printer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printer_extra.hpp>)
#include <gtk/printer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Printer : public GI_GTK_PRINTER_BASE
{ typedef GI_GTK_PRINTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrinter>
{ typedef Gtk::Printer type; }; 

} // namespace repository

} // namespace gi

#endif
