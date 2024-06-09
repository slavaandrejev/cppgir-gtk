// AUTO-GENERATED

#ifndef _GI_GTK_PRINTOPERATION_HPP_
#define _GI_GTK_PRINTOPERATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;
class PrintContext;
class PrintOperationPreview;
class PrintSettings;
class Widget;
class Window;

class PrintOperation;

namespace base {


#define GI_GTK_PRINTOPERATION_BASE base::PrintOperationBase
class PrintOperationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintOperation BaseObjectType;

PrintOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_operation_get_type(); } 

GI_INLINE_DECL Gtk::PrintOperationPreview interface_ (gi::interface_tag<Gtk::PrintOperationPreview>);

GI_INLINE_DECL operator Gtk::PrintOperationPreview ();

// GtkPrintOperation* /*full*/ gtk_print_operation_new ();
// ::GtkPrintOperation* /*full*/ gtk_print_operation_new ();
static GI_INLINE_DECL Gtk::PrintOperation new_ () noexcept;

// void gtk_print_operation_cancel (GtkPrintOperation* op /*none*/);
// void gtk_print_operation_cancel (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL void cancel () noexcept;

// void gtk_print_operation_draw_page_finish (GtkPrintOperation* op /*none*/);
// void gtk_print_operation_draw_page_finish (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL void draw_page_finish () noexcept;

// GtkPageSetup* /*none*/ gtk_print_operation_get_default_page_setup (GtkPrintOperation* op /*none*/);
// ::GtkPageSetup* /*none*/ gtk_print_operation_get_default_page_setup (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL Gtk::PageSetup get_default_page_setup () noexcept;

// gboolean gtk_print_operation_get_embed_page_setup (GtkPrintOperation* op /*none*/);
// gboolean gtk_print_operation_get_embed_page_setup (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL bool get_embed_page_setup () noexcept;

// void gtk_print_operation_get_error (GtkPrintOperation* op /*none*/, GError ** error);
// void gtk_print_operation_get_error (::GtkPrintOperation* op /*none*/, GError ** error);
GI_INLINE_DECL void get_error ();
GI_INLINE_DECL void get_error (GLib::Error * _error) noexcept;

// gboolean gtk_print_operation_get_has_selection (GtkPrintOperation* op /*none*/);
// gboolean gtk_print_operation_get_has_selection (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL bool get_has_selection () noexcept;

// int gtk_print_operation_get_n_pages_to_print (GtkPrintOperation* op /*none*/);
// gint gtk_print_operation_get_n_pages_to_print (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL gint get_n_pages_to_print () noexcept;

// GtkPrintSettings* /*none,nullable*/ gtk_print_operation_get_print_settings (GtkPrintOperation* op /*none*/);
// ::GtkPrintSettings* /*none,nullable*/ gtk_print_operation_get_print_settings (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL Gtk::PrintSettings get_print_settings () noexcept;

// GtkPrintStatus gtk_print_operation_get_status (GtkPrintOperation* op /*none*/);
// ::GtkPrintStatus gtk_print_operation_get_status (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL Gtk::PrintStatus get_status () noexcept;

// const char* /*none*/ gtk_print_operation_get_status_string (GtkPrintOperation* op /*none*/);
// const char* /*none*/ gtk_print_operation_get_status_string (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL gi::cstring_v get_status_string () noexcept;

// gboolean gtk_print_operation_get_support_selection (GtkPrintOperation* op /*none*/);
// gboolean gtk_print_operation_get_support_selection (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL bool get_support_selection () noexcept;

// gboolean gtk_print_operation_is_finished (GtkPrintOperation* op /*none*/);
// gboolean gtk_print_operation_is_finished (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL bool is_finished () noexcept;

// GtkPrintOperationResult gtk_print_operation_run (GtkPrintOperation* op /*none*/, GtkPrintOperationAction action, GtkWindow* parent /*none,nullable*/, GError ** error);
// ::GtkPrintOperationResult gtk_print_operation_run (::GtkPrintOperation* op /*none*/, ::GtkPrintOperationAction action, ::GtkWindow* parent /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action, Gtk::Window parent);
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action);
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action, Gtk::Window parent, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gtk::PrintOperationResult run (Gtk::PrintOperationAction action, GLib::Error * _error) noexcept;

// void gtk_print_operation_set_allow_async (GtkPrintOperation* op /*none*/, gboolean allow_async);
// void gtk_print_operation_set_allow_async (::GtkPrintOperation* op /*none*/, gboolean allow_async);
GI_INLINE_DECL void set_allow_async (gboolean allow_async) noexcept;

// void gtk_print_operation_set_current_page (GtkPrintOperation* op /*none*/, int current_page);
// void gtk_print_operation_set_current_page (::GtkPrintOperation* op /*none*/, gint current_page);
GI_INLINE_DECL void set_current_page (gint current_page) noexcept;

// void gtk_print_operation_set_custom_tab_label (GtkPrintOperation* op /*none*/, const char* label /*none,nullable*/);
// void gtk_print_operation_set_custom_tab_label (::GtkPrintOperation* op /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_custom_tab_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_custom_tab_label () noexcept;

// void gtk_print_operation_set_default_page_setup (GtkPrintOperation* op /*none*/, GtkPageSetup* default_page_setup /*none,nullable*/);
// void gtk_print_operation_set_default_page_setup (::GtkPrintOperation* op /*none*/, ::GtkPageSetup* default_page_setup /*none,nullable*/);
GI_INLINE_DECL void set_default_page_setup (Gtk::PageSetup default_page_setup) noexcept;
GI_INLINE_DECL void set_default_page_setup () noexcept;

// void gtk_print_operation_set_defer_drawing (GtkPrintOperation* op /*none*/);
// void gtk_print_operation_set_defer_drawing (::GtkPrintOperation* op /*none*/);
GI_INLINE_DECL void set_defer_drawing () noexcept;

// void gtk_print_operation_set_embed_page_setup (GtkPrintOperation* op /*none*/, gboolean embed);
// void gtk_print_operation_set_embed_page_setup (::GtkPrintOperation* op /*none*/, gboolean embed);
GI_INLINE_DECL void set_embed_page_setup (gboolean embed) noexcept;

// void gtk_print_operation_set_export_filename (GtkPrintOperation* op /*none*/, const char* filename /*none*/);
// void gtk_print_operation_set_export_filename (::GtkPrintOperation* op /*none*/, const char* filename /*none*/);
GI_INLINE_DECL void set_export_filename (const gi::cstring_v filename) noexcept;

// void gtk_print_operation_set_has_selection (GtkPrintOperation* op /*none*/, gboolean has_selection);
// void gtk_print_operation_set_has_selection (::GtkPrintOperation* op /*none*/, gboolean has_selection);
GI_INLINE_DECL void set_has_selection (gboolean has_selection) noexcept;

// void gtk_print_operation_set_job_name (GtkPrintOperation* op /*none*/, const char* job_name /*none*/);
// void gtk_print_operation_set_job_name (::GtkPrintOperation* op /*none*/, const char* job_name /*none*/);
GI_INLINE_DECL void set_job_name (const gi::cstring_v job_name) noexcept;

// void gtk_print_operation_set_n_pages (GtkPrintOperation* op /*none*/, int n_pages);
// void gtk_print_operation_set_n_pages (::GtkPrintOperation* op /*none*/, gint n_pages);
GI_INLINE_DECL void set_n_pages (gint n_pages) noexcept;

// void gtk_print_operation_set_print_settings (GtkPrintOperation* op /*none*/, GtkPrintSettings* print_settings /*none,nullable*/);
// void gtk_print_operation_set_print_settings (::GtkPrintOperation* op /*none*/, ::GtkPrintSettings* print_settings /*none,nullable*/);
GI_INLINE_DECL void set_print_settings (Gtk::PrintSettings print_settings) noexcept;
GI_INLINE_DECL void set_print_settings () noexcept;

// void gtk_print_operation_set_show_progress (GtkPrintOperation* op /*none*/, gboolean show_progress);
// void gtk_print_operation_set_show_progress (::GtkPrintOperation* op /*none*/, gboolean show_progress);
GI_INLINE_DECL void set_show_progress (gboolean show_progress) noexcept;

// void gtk_print_operation_set_support_selection (GtkPrintOperation* op /*none*/, gboolean support_selection);
// void gtk_print_operation_set_support_selection (::GtkPrintOperation* op /*none*/, gboolean support_selection);
GI_INLINE_DECL void set_support_selection (gboolean support_selection) noexcept;

// void gtk_print_operation_set_track_print_status (GtkPrintOperation* op /*none*/, gboolean track_status);
// void gtk_print_operation_set_track_print_status (::GtkPrintOperation* op /*none*/, gboolean track_status);
GI_INLINE_DECL void set_track_print_status (gboolean track_status) noexcept;

// void gtk_print_operation_set_unit (GtkPrintOperation* op /*none*/, GtkUnit unit);
// void gtk_print_operation_set_unit (::GtkPrintOperation* op /*none*/, ::GtkUnit unit);
GI_INLINE_DECL void set_unit (Gtk::Unit unit) noexcept;

// void gtk_print_operation_set_use_full_page (GtkPrintOperation* op /*none*/, gboolean full_page);
// void gtk_print_operation_set_use_full_page (::GtkPrintOperation* op /*none*/, gboolean full_page);
GI_INLINE_DECL void set_use_full_page (gboolean full_page) noexcept;

gi::property_proxy<bool, base::PrintOperationBase> property_allow_async()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "allow-async"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_allow_async() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "allow-async"); }

gi::property_proxy<gint, base::PrintOperationBase> property_current_page()
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "current-page"); }
const gi::property_proxy<gint, base::PrintOperationBase> property_current_page() const
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "current-page"); }

gi::property_proxy<gi::cstring, base::PrintOperationBase> property_custom_tab_label()
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "custom-tab-label"); }
const gi::property_proxy<gi::cstring, base::PrintOperationBase> property_custom_tab_label() const
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "custom-tab-label"); }

gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> property_default_page_setup()
{ return gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> (*this, "default-page-setup"); }
const gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> property_default_page_setup() const
{ return gi::property_proxy<Gtk::PageSetup, base::PrintOperationBase> (*this, "default-page-setup"); }

gi::property_proxy<bool, base::PrintOperationBase> property_embed_page_setup()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "embed-page-setup"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_embed_page_setup() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "embed-page-setup"); }

gi::property_proxy<gi::cstring, base::PrintOperationBase> property_export_filename()
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "export-filename"); }
const gi::property_proxy<gi::cstring, base::PrintOperationBase> property_export_filename() const
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "export-filename"); }

gi::property_proxy<bool, base::PrintOperationBase> property_has_selection()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "has-selection"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_has_selection() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "has-selection"); }

gi::property_proxy<gi::cstring, base::PrintOperationBase> property_job_name()
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "job-name"); }
const gi::property_proxy<gi::cstring, base::PrintOperationBase> property_job_name() const
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "job-name"); }

gi::property_proxy<gint, base::PrintOperationBase> property_n_pages()
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages"); }
const gi::property_proxy<gint, base::PrintOperationBase> property_n_pages() const
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages"); }

gi::property_proxy<gint, base::PrintOperationBase> property_n_pages_to_print()
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages-to-print"); }
const gi::property_proxy<gint, base::PrintOperationBase> property_n_pages_to_print() const
{ return gi::property_proxy<gint, base::PrintOperationBase> (*this, "n-pages-to-print"); }

gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> property_print_settings()
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> (*this, "print-settings"); }
const gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> property_print_settings() const
{ return gi::property_proxy<Gtk::PrintSettings, base::PrintOperationBase> (*this, "print-settings"); }

gi::property_proxy<bool, base::PrintOperationBase> property_show_progress()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "show-progress"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_show_progress() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "show-progress"); }

gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> property_status()
{ return gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> (*this, "status"); }
const gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> property_status() const
{ return gi::property_proxy<Gtk::PrintStatus, base::PrintOperationBase> (*this, "status"); }

gi::property_proxy<gi::cstring, base::PrintOperationBase> property_status_string()
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "status-string"); }
const gi::property_proxy<gi::cstring, base::PrintOperationBase> property_status_string() const
{ return gi::property_proxy<gi::cstring, base::PrintOperationBase> (*this, "status-string"); }

gi::property_proxy<bool, base::PrintOperationBase> property_support_selection()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "support-selection"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_support_selection() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "support-selection"); }

gi::property_proxy<bool, base::PrintOperationBase> property_track_print_status()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "track-print-status"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_track_print_status() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "track-print-status"); }

gi::property_proxy<Gtk::Unit, base::PrintOperationBase> property_unit()
{ return gi::property_proxy<Gtk::Unit, base::PrintOperationBase> (*this, "unit"); }
const gi::property_proxy<Gtk::Unit, base::PrintOperationBase> property_unit() const
{ return gi::property_proxy<Gtk::Unit, base::PrintOperationBase> (*this, "unit"); }

gi::property_proxy<bool, base::PrintOperationBase> property_use_full_page()
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "use-full-page"); }
const gi::property_proxy<bool, base::PrintOperationBase> property_use_full_page() const
{ return gi::property_proxy<bool, base::PrintOperationBase> (*this, "use-full-page"); }

// (signal) void begin-print ( context /*none*/);
// (signal) void begin-print (::GtkPrintContext* context /*none*/);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> signal_begin_print()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> (*this, "begin-print"); }

// (signal)  /*none,nullable*/ create-custom-widget ();
// (signal) ::GObject* /*none,nullable*/ create-custom-widget ();
gi::signal_proxy<GObject::Object(Gtk::PrintOperation)> signal_create_custom_widget()
{ return gi::signal_proxy<GObject::Object(Gtk::PrintOperation)> (*this, "create-custom-widget"); }

// (signal) void custom-widget-apply ( widget /*none*/);
// (signal) void custom-widget-apply (::GtkWidget* widget /*none*/);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget)> signal_custom_widget_apply()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget)> (*this, "custom-widget-apply"); }

// (signal) void done ( result);
// (signal) void done (::GtkPrintOperationResult result);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintOperationResult result)> signal_done()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintOperationResult result)> (*this, "done"); }

// (signal) void draw-page ( context /*none*/, gint page_nr);
// (signal) void draw-page (::GtkPrintContext* context /*none*/, gint page_nr);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr)> signal_draw_page()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr)> (*this, "draw-page"); }

// (signal) void end-print ( context /*none*/);
// (signal) void end-print (::GtkPrintContext* context /*none*/);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> signal_end_print()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context)> (*this, "end-print"); }

// (signal) gboolean paginate ( context /*none*/);
// (signal) gboolean paginate (::GtkPrintContext* context /*none*/);
gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintContext context)> signal_paginate()
{ return gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintContext context)> (*this, "paginate"); }

// (signal) gboolean preview ( preview /*none*/,  context /*none*/,  parent /*none,nullable*/);
// (signal) gboolean preview (::GtkPrintOperationPreview* preview /*none*/, ::GtkPrintContext* context /*none*/, ::GtkWindow* parent /*none,nullable*/);
gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent)> signal_preview()
{ return gi::signal_proxy<bool(Gtk::PrintOperation, Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent)> (*this, "preview"); }

// (signal) void request-page-setup ( context /*none*/, gint page_nr,  setup /*none*/);
// (signal) void request-page-setup (::GtkPrintContext* context /*none*/, gint page_nr, ::GtkPageSetup* setup /*none*/);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup)> signal_request_page_setup()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup)> (*this, "request-page-setup"); }

// (signal) void status-changed ();
// (signal) void status-changed ();
gi::signal_proxy<void(Gtk::PrintOperation)> signal_status_changed()
{ return gi::signal_proxy<void(Gtk::PrintOperation)> (*this, "status-changed"); }

// (signal) void update-custom-widget ( widget /*none*/,  setup /*none*/,  settings /*none*/);
// (signal) void update-custom-widget (::GtkWidget* widget /*none*/, ::GtkPageSetup* setup /*none*/, ::GtkPrintSettings* settings /*none*/);
gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings)> signal_update_custom_widget()
{ return gi::signal_proxy<void(Gtk::PrintOperation, Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings)> (*this, "update-custom-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printoperation_extra_def.hpp>)
#include <gtk/printoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printoperation_extra.hpp>)
#include <gtk/printoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintOperation : public GI_GTK_PRINTOPERATION_BASE
{ typedef GI_GTK_PRINTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintOperation>
{ typedef Gtk::PrintOperation type; }; 

} // namespace repository

} // namespace gi

#include "printoperationpreview.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PrintOperationClassDef
{
typedef PrintOperationClassDef self;
public:
typedef Gtk::PrintOperation instance_type;
typedef ::GtkPrintOperationClass class_type;

using GI_MEMBER_CHECK_CONFLICT(begin_print) = self;
using GI_MEMBER_CHECK_CONFLICT(custom_widget_apply) = self;
using GI_MEMBER_CHECK_CONFLICT(done) = self;
using GI_MEMBER_CHECK_CONFLICT(draw_page) = self;
using GI_MEMBER_CHECK_CONFLICT(end_print) = self;
using GI_MEMBER_CHECK_CONFLICT(paginate) = self;
using GI_MEMBER_CHECK_CONFLICT(preview) = self;
using GI_MEMBER_CHECK_CONFLICT(request_page_setup) = self;
using GI_MEMBER_CHECK_CONFLICT(status_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(update_custom_widget) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PrintOperationClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void PrintOperation::begin_print (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/);
// void PrintOperation::begin_print (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/);
virtual void begin_print_ (Gtk::PrintContext context) noexcept = 0;

// void PrintOperation::custom_widget_apply (GtkPrintOperation* operation /*none*/, GtkWidget* widget /*none*/);
// void PrintOperation::custom_widget_apply (::GtkPrintOperation* operation /*none*/, ::GtkWidget* widget /*none*/);
virtual void custom_widget_apply_ (Gtk::Widget widget) noexcept = 0;

// void PrintOperation::done (GtkPrintOperation* operation /*none*/, GtkPrintOperationResult result);
// void PrintOperation::done (::GtkPrintOperation* operation /*none*/, ::GtkPrintOperationResult result);
virtual void done_ (Gtk::PrintOperationResult result) noexcept = 0;

// void PrintOperation::draw_page (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/, int page_nr);
// void PrintOperation::draw_page (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/, gint page_nr);
virtual void draw_page_ (Gtk::PrintContext context, gint page_nr) noexcept = 0;

// void PrintOperation::end_print (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/);
// void PrintOperation::end_print (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/);
virtual void end_print_ (Gtk::PrintContext context) noexcept = 0;

// gboolean PrintOperation::paginate (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/);
// gboolean PrintOperation::paginate (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/);
virtual bool paginate_ (Gtk::PrintContext context) noexcept = 0;

// gboolean PrintOperation::preview (GtkPrintOperation* operation /*none*/, GtkPrintOperationPreview* preview /*none*/, GtkPrintContext* context /*none*/, GtkWindow* parent /*none*/);
// gboolean PrintOperation::preview (::GtkPrintOperation* operation /*none*/, ::GtkPrintOperationPreview* preview /*none*/, ::GtkPrintContext* context /*none*/, ::GtkWindow* parent /*none*/);
virtual bool preview_ (Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent) noexcept = 0;

// void PrintOperation::request_page_setup (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/, int page_nr, GtkPageSetup* setup /*none*/);
// void PrintOperation::request_page_setup (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/, gint page_nr, ::GtkPageSetup* setup /*none*/);
virtual void request_page_setup_ (Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup) noexcept = 0;

// void PrintOperation::status_changed (GtkPrintOperation* operation /*none*/);
// void PrintOperation::status_changed (::GtkPrintOperation* operation /*none*/);
virtual void status_changed_ () noexcept = 0;

// void PrintOperation::update_custom_widget (GtkPrintOperation* operation /*none*/, GtkWidget* widget /*none*/, GtkPageSetup* setup /*none*/, GtkPrintSettings* settings /*none*/);
// void PrintOperation::update_custom_widget (::GtkPrintOperation* operation /*none*/, ::GtkWidget* widget /*none*/, ::GtkPageSetup* setup /*none*/, ::GtkPrintSettings* settings /*none*/);
virtual void update_custom_widget_ (Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PrintOperationClass: public detail::ClassTemplate<Gtk::impl::internal::PrintOperationClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::PrintOperationPreviewIfaceClassImpl>
{
friend class internal::PrintOperationClassDef;
typedef PrintOperationClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PrintOperationClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::PrintOperationPreviewIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::PrintOperationPreviewIfaceClassImpl GtkPrintOperationPreviewIface_type;


// void PrintOperation::begin_print (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/);
// void PrintOperation::begin_print (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/);
GI_INLINE_DECL void begin_print_ (Gtk::PrintContext context) noexcept override;

// void PrintOperation::custom_widget_apply (GtkPrintOperation* operation /*none*/, GtkWidget* widget /*none*/);
// void PrintOperation::custom_widget_apply (::GtkPrintOperation* operation /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void custom_widget_apply_ (Gtk::Widget widget) noexcept override;

// void PrintOperation::done (GtkPrintOperation* operation /*none*/, GtkPrintOperationResult result);
// void PrintOperation::done (::GtkPrintOperation* operation /*none*/, ::GtkPrintOperationResult result);
GI_INLINE_DECL void done_ (Gtk::PrintOperationResult result) noexcept override;

// void PrintOperation::draw_page (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/, int page_nr);
// void PrintOperation::draw_page (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/, gint page_nr);
GI_INLINE_DECL void draw_page_ (Gtk::PrintContext context, gint page_nr) noexcept override;

// void PrintOperation::end_print (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/);
// void PrintOperation::end_print (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/);
GI_INLINE_DECL void end_print_ (Gtk::PrintContext context) noexcept override;

// gboolean PrintOperation::paginate (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/);
// gboolean PrintOperation::paginate (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/);
GI_INLINE_DECL bool paginate_ (Gtk::PrintContext context) noexcept override;

// gboolean PrintOperation::preview (GtkPrintOperation* operation /*none*/, GtkPrintOperationPreview* preview /*none*/, GtkPrintContext* context /*none*/, GtkWindow* parent /*none*/);
// gboolean PrintOperation::preview (::GtkPrintOperation* operation /*none*/, ::GtkPrintOperationPreview* preview /*none*/, ::GtkPrintContext* context /*none*/, ::GtkWindow* parent /*none*/);
GI_INLINE_DECL bool preview_ (Gtk::PrintOperationPreview preview, Gtk::PrintContext context, Gtk::Window parent) noexcept override;

// void PrintOperation::request_page_setup (GtkPrintOperation* operation /*none*/, GtkPrintContext* context /*none*/, int page_nr, GtkPageSetup* setup /*none*/);
// void PrintOperation::request_page_setup (::GtkPrintOperation* operation /*none*/, ::GtkPrintContext* context /*none*/, gint page_nr, ::GtkPageSetup* setup /*none*/);
GI_INLINE_DECL void request_page_setup_ (Gtk::PrintContext context, gint page_nr, Gtk::PageSetup setup) noexcept override;

// void PrintOperation::status_changed (GtkPrintOperation* operation /*none*/);
// void PrintOperation::status_changed (::GtkPrintOperation* operation /*none*/);
GI_INLINE_DECL void status_changed_ () noexcept override;

// void PrintOperation::update_custom_widget (GtkPrintOperation* operation /*none*/, GtkWidget* widget /*none*/, GtkPageSetup* setup /*none*/, GtkPrintSettings* settings /*none*/);
// void PrintOperation::update_custom_widget (::GtkPrintOperation* operation /*none*/, ::GtkWidget* widget /*none*/, ::GtkPageSetup* setup /*none*/, ::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL void update_custom_widget_ (Gtk::Widget widget, Gtk::PageSetup setup, Gtk::PrintSettings settings) noexcept override;


};


struct PrintOperationClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(PrintOperationClass, begin_print)
  GI_MEMBER_DEFINE(PrintOperationClass, custom_widget_apply)
  GI_MEMBER_DEFINE(PrintOperationClass, done)
  GI_MEMBER_DEFINE(PrintOperationClass, draw_page)
  GI_MEMBER_DEFINE(PrintOperationClass, end_print)
  GI_MEMBER_DEFINE(PrintOperationClass, paginate)
  GI_MEMBER_DEFINE(PrintOperationClass, preview)
  GI_MEMBER_DEFINE(PrintOperationClass, request_page_setup)
  GI_MEMBER_DEFINE(PrintOperationClass, status_changed)
  GI_MEMBER_DEFINE(PrintOperationClass, update_custom_widget)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, begin_print),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, custom_widget_apply),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, done),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, draw_page),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, end_print),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, paginate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, preview),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, request_page_setup),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, status_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, update_custom_widget)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PrintOperationImpl = detail::ObjectImpl<PrintOperation, internal::PrintOperationClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
