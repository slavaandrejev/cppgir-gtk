// AUTO-GENERATED

#ifndef _GI_GTK__FUNCTIONS_HPP_
#define _GI_GTK__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace AccessiblePropertyNS_ {

// void gtk_accessible_property_init_value (GtkAccessibleProperty property, GValue* value /*none*/);
// void gtk_accessible_property_init_value (::GtkAccessibleProperty property, ::GValue* value /*none*/);
GI_INLINE_DECL void init_value (Gtk::AccessibleProperty property, GObject::Value_Ref value) noexcept;

} // namespace AccessiblePropertyNS_

namespace AccessibleRelationNS_ {

// void gtk_accessible_relation_init_value (GtkAccessibleRelation relation, GValue* value /*none*/);
// void gtk_accessible_relation_init_value (::GtkAccessibleRelation relation, ::GValue* value /*none*/);
GI_INLINE_DECL void init_value (Gtk::AccessibleRelation relation, GObject::Value_Ref value) noexcept;

} // namespace AccessibleRelationNS_

namespace AccessibleStateNS_ {

// void gtk_accessible_state_init_value (GtkAccessibleState state, GValue* value /*none*/);
// void gtk_accessible_state_init_value (::GtkAccessibleState state, ::GValue* value /*none*/);
GI_INLINE_DECL void init_value (Gtk::AccessibleState state, GObject::Value_Ref value) noexcept;

} // namespace AccessibleStateNS_

namespace BuilderErrorNS_ {

// GQuark gtk_builder_error_quark ();
// ::GQuark gtk_builder_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace BuilderErrorNS_

namespace ConstraintVflParserErrorNS_ {

// GQuark gtk_constraint_vfl_parser_error_quark ();
// ::GQuark gtk_constraint_vfl_parser_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ConstraintVflParserErrorNS_

namespace DialogErrorNS_ {

// GQuark gtk_dialog_error_quark ();
// ::GQuark gtk_dialog_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace DialogErrorNS_

namespace FileChooserErrorNS_ {

// GQuark gtk_file_chooser_error_quark ();
// ::GQuark gtk_file_chooser_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace FileChooserErrorNS_

namespace IconThemeErrorNS_ {

// GQuark gtk_icon_theme_error_quark ();
// ::GQuark gtk_icon_theme_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace IconThemeErrorNS_

namespace OrderingNS_ {

// GtkOrdering gtk_ordering_from_cmpfunc (int cmpfunc_result);
// ::GtkOrdering gtk_ordering_from_cmpfunc (gint cmpfunc_result);
GI_INLINE_DECL Gtk::Ordering from_cmpfunc (gint cmpfunc_result) noexcept;

} // namespace OrderingNS_

namespace PrintErrorNS_ {

// GQuark gtk_print_error_quark ();
// ::GQuark gtk_print_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace PrintErrorNS_

namespace RecentManagerErrorNS_ {

// GQuark gtk_recent_manager_error_quark ();
// ::GQuark gtk_recent_manager_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace RecentManagerErrorNS_

// GdkModifierType gtk_accelerator_get_default_mod_mask ();
// ::GdkModifierType gtk_accelerator_get_default_mod_mask ();
GI_INLINE_DECL Gdk::ModifierType accelerator_get_default_mod_mask () noexcept;

// char* /*full*/ gtk_accelerator_get_label (guint accelerator_key, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_get_label (guint accelerator_key, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL gi::cstring accelerator_get_label (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept;

// char* /*full*/ gtk_accelerator_get_label_with_keycode (GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_get_label_with_keycode (::GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL gi::cstring accelerator_get_label_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;
GI_INLINE_DECL gi::cstring accelerator_get_label_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;

// char* /*full*/ gtk_accelerator_name (guint accelerator_key, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_name (guint accelerator_key, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL gi::cstring accelerator_name (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept;

// char* /*full*/ gtk_accelerator_name_with_keycode (GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_name_with_keycode (::GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL gi::cstring accelerator_name_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;
GI_INLINE_DECL gi::cstring accelerator_name_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;

// gboolean gtk_accelerator_parse (const char* accelerator /*none*/, guint* accelerator_key, GdkModifierType* accelerator_mods);
// gboolean gtk_accelerator_parse (const char* accelerator /*none*/, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
GI_INLINE_DECL bool accelerator_parse (const gi::cstring_v accelerator, guint * accelerator_key, Gdk::ModifierType * accelerator_mods) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, Gdk::ModifierType> accelerator_parse (const gi::cstring_v accelerator) noexcept;

// gboolean gtk_accelerator_parse_with_keycode (const char* accelerator /*none*/, GdkDisplay* display /*none,nullable*/, guint* accelerator_key, guint** accelerator_codes /*full,out,opt*/, GdkModifierType* accelerator_mods);
// gboolean gtk_accelerator_parse_with_keycode (const char* accelerator /*none*/, ::GdkDisplay* display /*none,nullable*/, guint* accelerator_key, guint** accelerator_codes /*full,out,opt*/, ::GdkModifierType* accelerator_mods);
GI_INLINE_DECL bool accelerator_parse_with_keycode (const gi::cstring_v accelerator, Gdk::Display display, guint * accelerator_key, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t> * accelerator_codes, Gdk::ModifierType * accelerator_mods) noexcept;
GI_INLINE_DECL bool accelerator_parse_with_keycode (const gi::cstring_v accelerator, guint * accelerator_key, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t> * accelerator_codes, Gdk::ModifierType * accelerator_mods) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>, Gdk::ModifierType> accelerator_parse_with_keycode (const gi::cstring_v accelerator, Gdk::Display display) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>, Gdk::ModifierType> accelerator_parse_with_keycode (const gi::cstring_v accelerator) noexcept;

// gboolean gtk_accelerator_valid (guint keyval, GdkModifierType modifiers);
// gboolean gtk_accelerator_valid (guint keyval, ::GdkModifierType modifiers);
GI_INLINE_DECL bool accelerator_valid (guint keyval, Gdk::ModifierType modifiers) noexcept;

// const char* /*none,nullable*/ gtk_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* /*none,nullable*/ gtk_check_version (guint required_major, guint required_minor, guint required_micro);
GI_INLINE_DECL gi::cstring_v check_version (guint required_major, guint required_minor, guint required_micro) noexcept;

// GQuark gtk_css_parser_error_quark ();
// ::GQuark gtk_css_parser_error_quark ();
GI_INLINE_DECL GLib::Quark css_parser_error_quark () noexcept;

// GQuark gtk_css_parser_warning_quark ();
// ::GQuark gtk_css_parser_warning_quark ();
GI_INLINE_DECL GLib::Quark css_parser_warning_quark () noexcept;

// void gtk_disable_setlocale ();
// void gtk_disable_setlocale ();
GI_INLINE_DECL void disable_setlocale () noexcept;

// int gtk_distribute_natural_allocation (int extra_space, guint n_requested_sizes, GtkRequestedSize* sizes /*none*/);
// gint gtk_distribute_natural_allocation (gint extra_space, guint n_requested_sizes, ::GtkRequestedSize** sizes /*none*/);
// SKIP; sizes in boxed array not supported (depth 1)

// void gtk_enumerate_printers (GtkPrinterFunc func /*none*/, gpointer data, GDestroyNotify destroy /*none*/, gboolean wait);
// void gtk_enumerate_printers (Gtk::PrinterFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/, gboolean wait);
GI_INLINE_DECL void enumerate_printers (Gtk::PrinterFunc func, gboolean wait) noexcept;

// guint gtk_get_binary_age ();
// guint gtk_get_binary_age ();
GI_INLINE_DECL guint get_binary_age () noexcept;

// GtkDebugFlags gtk_get_debug_flags ();
// ::GtkDebugFlags gtk_get_debug_flags ();
GI_INLINE_DECL Gtk::DebugFlags get_debug_flags () noexcept;

// PangoLanguage* /*none*/ gtk_get_default_language ();
// ::PangoLanguage* /*none*/ gtk_get_default_language ();
GI_INLINE_DECL Pango::Language_Ref get_default_language () noexcept;

// guint gtk_get_interface_age ();
// guint gtk_get_interface_age ();
GI_INLINE_DECL guint get_interface_age () noexcept;

// GtkTextDirection gtk_get_locale_direction ();
// ::GtkTextDirection gtk_get_locale_direction ();
GI_INLINE_DECL Gtk::TextDirection get_locale_direction () noexcept;

// guint gtk_get_major_version ();
// guint gtk_get_major_version ();
GI_INLINE_DECL guint get_major_version () noexcept;

// guint gtk_get_micro_version ();
// guint gtk_get_micro_version ();
GI_INLINE_DECL guint get_micro_version () noexcept;

// guint gtk_get_minor_version ();
// guint gtk_get_minor_version ();
GI_INLINE_DECL guint get_minor_version () noexcept;

// void gtk_hsv_to_rgb (float h, float s, float v, float* r, float* g, float* b);
// void gtk_hsv_to_rgb (gfloat h, gfloat s, gfloat v, gfloat* r, gfloat* g, gfloat* b);
GI_INLINE_DECL void hsv_to_rgb (gfloat h, gfloat s, gfloat v, gfloat & r, gfloat & g, gfloat & b) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat> hsv_to_rgb (gfloat h, gfloat s, gfloat v) noexcept;

// void gtk_init ();
// void gtk_init ();
GI_INLINE_DECL void init () noexcept;

// gboolean gtk_init_check ();
// gboolean gtk_init_check ();
GI_INLINE_DECL bool init_check () noexcept;

// gboolean gtk_is_initialized ();
// gboolean gtk_is_initialized ();
GI_INLINE_DECL bool is_initialized () noexcept;

// GParamSpec* /*full*/ gtk_param_spec_expression (const char* name /*none*/, const char* nick /*none*/, const char* blurb /*none*/, GParamFlags flags);
// ::GParamSpec* /*full*/ gtk_param_spec_expression (const char* name /*none*/, const char* nick /*none*/, const char* blurb /*none*/, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_expression (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GObject::ParamFlags flags) noexcept;

// GtkPageSetup* /*full*/ gtk_print_run_page_setup_dialog (GtkWindow* parent /*none,nullable*/, GtkPageSetup* page_setup /*none,nullable*/, GtkPrintSettings* settings /*none*/);
// ::GtkPageSetup* /*full*/ gtk_print_run_page_setup_dialog (::GtkWindow* parent /*none,nullable*/, ::GtkPageSetup* page_setup /*none,nullable*/, ::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PageSetup print_run_page_setup_dialog (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings) noexcept;
GI_INLINE_DECL Gtk::PageSetup print_run_page_setup_dialog (Gtk::PrintSettings settings) noexcept;

// void gtk_print_run_page_setup_dialog_async (GtkWindow* parent /*none,nullable*/, GtkPageSetup* page_setup /*none,nullable*/, GtkPrintSettings* settings /*none*/, GtkPageSetupDoneFunc done_cb /*none*/, gpointer data);
// void gtk_print_run_page_setup_dialog_async (::GtkWindow* parent /*none,nullable*/, ::GtkPageSetup* page_setup /*none,nullable*/, ::GtkPrintSettings* settings /*none*/, Gtk::PageSetupDoneFunc::cfunction_type done_cb /*none*/, void* data);
GI_INLINE_DECL void print_run_page_setup_dialog_async (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept;
GI_INLINE_DECL void print_run_page_setup_dialog_async (Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept;

// void gtk_render_activity (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_activity (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_activity (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_arrow (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double angle, double x, double y, double size);
// void gtk_render_arrow (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble angle, gdouble x, gdouble y, gdouble size);
GI_INLINE_DECL void render_arrow (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept;

// void gtk_render_background (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_background (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_background (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_check (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_check (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_check (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_expander (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_expander (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_expander (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_focus (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_focus (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_focus (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_frame (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_frame (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_frame (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_handle (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_handle (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_handle (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_icon (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, GdkTexture* texture /*none*/, double x, double y);
// void gtk_render_icon (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, ::GdkTexture* texture /*none*/, gdouble x, gdouble y);
GI_INLINE_DECL void render_icon (Gtk::StyleContext context, cairo::Context_Ref cr, Gdk::Texture texture, gdouble x, gdouble y) noexcept;

// void gtk_render_layout (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, PangoLayout* layout /*none*/);
// void gtk_render_layout (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, ::PangoLayout* layout /*none*/);
GI_INLINE_DECL void render_layout (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, Pango::Layout layout) noexcept;

// void gtk_render_line (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x0, double y0, double x1, double y1);
// void gtk_render_line (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
GI_INLINE_DECL void render_line (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept;

// void gtk_render_option (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_option (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_option (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_rgb_to_hsv (float r, float g, float b, float* h, float* s, float* v);
// void gtk_rgb_to_hsv (gfloat r, gfloat g, gfloat b, gfloat* h, gfloat* s, gfloat* v);
GI_INLINE_DECL void rgb_to_hsv (gfloat r, gfloat g, gfloat b, gfloat & h, gfloat & s, gfloat & v) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat, gfloat> rgb_to_hsv (gfloat r, gfloat g, gfloat b) noexcept;

// void gtk_set_debug_flags (GtkDebugFlags flags);
// void gtk_set_debug_flags (::GtkDebugFlags flags);
GI_INLINE_DECL void set_debug_flags (Gtk::DebugFlags flags) noexcept;

// void gtk_show_about_dialog (GtkWindow* parent /*none,nullable*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// void gtk_show_about_dialog (::GtkWindow* parent /*none,nullable*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_show_uri (GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp);
// void gtk_show_uri (::GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp);
GI_INLINE_DECL void show_uri (Gtk::Window parent, const gi::cstring_v uri, guint32 timestamp) noexcept;
GI_INLINE_DECL void show_uri (const gi::cstring_v uri, guint32 timestamp) noexcept;

// void gtk_show_uri_full (GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_show_uri_full (::GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void show_uri_full (Gtk::Window parent, const gi::cstring_v uri, guint32 timestamp, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void show_uri_full (const gi::cstring_v uri, guint32 timestamp, Gio::AsyncReadyCallback callback) noexcept;

// gboolean gtk_show_uri_full_finish (GtkWindow* parent /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_show_uri_full_finish (::GtkWindow* parent /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool show_uri_full_finish (Gtk::Window parent, Gio::AsyncResult result);
GI_INLINE_DECL bool show_uri_full_finish (Gtk::Window parent, Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void gtk_test_accessible_assertion_message_role (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, GtkAccessible* accessible /*none*/, GtkAccessibleRole expected_role, GtkAccessibleRole actual_role);
// void gtk_test_accessible_assertion_message_role (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, ::GtkAccessible* accessible /*none*/, ::GtkAccessibleRole expected_role, ::GtkAccessibleRole actual_role);
GI_INLINE_DECL void test_accessible_assertion_message_role (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, Gtk::Accessible accessible, Gtk::AccessibleRole expected_role, Gtk::AccessibleRole actual_role) noexcept;

// char* /*full*/ gtk_test_accessible_check_property (GtkAccessible* accessible /*none*/, GtkAccessibleProperty property,  ..._ /*none*/);
// char* /*full*/ gtk_test_accessible_check_property (::GtkAccessible* accessible /*none*/, ::GtkAccessibleProperty property,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// char* /*full*/ gtk_test_accessible_check_relation (GtkAccessible* accessible /*none*/, GtkAccessibleRelation relation,  ..._ /*none*/);
// char* /*full*/ gtk_test_accessible_check_relation (::GtkAccessible* accessible /*none*/, ::GtkAccessibleRelation relation,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// char* /*full*/ gtk_test_accessible_check_state (GtkAccessible* accessible /*none*/, GtkAccessibleState state,  ..._ /*none*/);
// char* /*full*/ gtk_test_accessible_check_state (::GtkAccessible* accessible /*none*/, ::GtkAccessibleState state,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// gboolean gtk_test_accessible_has_property (GtkAccessible* accessible /*none*/, GtkAccessibleProperty property);
// gboolean gtk_test_accessible_has_property (::GtkAccessible* accessible /*none*/, ::GtkAccessibleProperty property);
GI_INLINE_DECL bool test_accessible_has_property (Gtk::Accessible accessible, Gtk::AccessibleProperty property) noexcept;

// gboolean gtk_test_accessible_has_relation (GtkAccessible* accessible /*none*/, GtkAccessibleRelation relation);
// gboolean gtk_test_accessible_has_relation (::GtkAccessible* accessible /*none*/, ::GtkAccessibleRelation relation);
GI_INLINE_DECL bool test_accessible_has_relation (Gtk::Accessible accessible, Gtk::AccessibleRelation relation) noexcept;

// gboolean gtk_test_accessible_has_role (GtkAccessible* accessible /*none*/, GtkAccessibleRole role);
// gboolean gtk_test_accessible_has_role (::GtkAccessible* accessible /*none*/, ::GtkAccessibleRole role);
GI_INLINE_DECL bool test_accessible_has_role (Gtk::Accessible accessible, Gtk::AccessibleRole role) noexcept;

// gboolean gtk_test_accessible_has_state (GtkAccessible* accessible /*none*/, GtkAccessibleState state);
// gboolean gtk_test_accessible_has_state (::GtkAccessible* accessible /*none*/, ::GtkAccessibleState state);
GI_INLINE_DECL bool test_accessible_has_state (Gtk::Accessible accessible, Gtk::AccessibleState state) noexcept;

// void gtk_test_init (int* argcp, char*** argvp /*full,inout*/,  ..._ /*none*/);
// void gtk_test_init (gint* argcp, char*** argvp /*full,inout*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// const GType* /*none*/ gtk_test_list_all_types (guint* n_types);
// const GType* /*none*/ gtk_test_list_all_types (guint* n_types);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t> test_list_all_types (guint & n_types) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>, guint> test_list_all_types () noexcept;

// void gtk_test_register_all_types ();
// void gtk_test_register_all_types ();
GI_INLINE_DECL void test_register_all_types () noexcept;

// void gtk_test_widget_wait_for_draw (GtkWidget* widget /*none*/);
// void gtk_test_widget_wait_for_draw (::GtkWidget* widget /*none*/);
GI_INLINE_DECL void test_widget_wait_for_draw (Gtk::Widget widget) noexcept;

// GdkContentProvider* /*full*/ gtk_tree_create_row_drag_content (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full*/ gtk_tree_create_row_drag_content (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL Gdk::ContentProvider tree_create_row_drag_content (Gtk::TreeModel tree_model, Gtk::TreePath_Ref path) noexcept;

// gboolean gtk_tree_get_row_drag_data (const GValue* value /*none*/, GtkTreeModel** tree_model /*none,out,opt,nullable*/, GtkTreePath** path /*full,out,opt,nullable*/);
// gboolean gtk_tree_get_row_drag_data (const ::GValue* value /*none*/, ::GtkTreeModel** tree_model /*none,out,opt,nullable*/, ::GtkTreePath** path /*full,out,opt,nullable*/);
GI_INLINE_DECL bool tree_get_row_drag_data (const GObject::Value_Ref value, Gtk::TreeModel * tree_model, Gtk::TreePath * path) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreePath> tree_get_row_drag_data (const GObject::Value_Ref value) noexcept;

// GtkExpression* /*full,nullable*/ gtk_value_dup_expression (const GValue* value /*none*/);
//  /*full,nullable*/ gtk_value_dup_expression (const ::GValue* value /*none*/);
// SKIP;  type  not supported

// GtkExpression* /*none,nullable*/ gtk_value_get_expression (const GValue* value /*none*/);
//  /*none,nullable*/ gtk_value_get_expression (const ::GValue* value /*none*/);
// SKIP;  type  not supported

// void gtk_value_set_expression (GValue* value /*none*/, GtkExpression* expression /*none*/);
// void gtk_value_set_expression (::GValue* value /*none*/,  expression /*none*/);
// SKIP; expression type  not supported

// void gtk_value_take_expression (GValue* value /*none*/, GtkExpression* expression /*full,nullable*/);
// void gtk_value_take_expression (::GValue* value /*none*/,  expression /*full,nullable*/);
// SKIP; expression type  not supported

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
