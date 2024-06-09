// AUTO-GENERATED

#ifndef _GI_GTK_PRINTSETTINGS_HPP_
#define _GI_GTK_PRINTSETTINGS_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageRange;
class PageRange_Ref;
class PaperSize;
class PaperSize_Ref;

class PrintSettings;

namespace base {


#define GI_GTK_PRINTSETTINGS_BASE base::PrintSettingsBase
class PrintSettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintSettings BaseObjectType;

PrintSettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_settings_get_type(); } 

// GtkPrintSettings* /*full*/ gtk_print_settings_new ();
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new ();
static GI_INLINE_DECL Gtk::PrintSettings new_ () noexcept;

// GtkPrintSettings* /*full*/ gtk_print_settings_new_from_file (const char* file_name /*none*/, GError ** error);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new_from_file (const char* file_name /*none*/, GError ** error);
static GI_INLINE_DECL Gtk::PrintSettings new_from_file (const gi::cstring_v file_name);
static GI_INLINE_DECL Gtk::PrintSettings new_from_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept;

// GtkPrintSettings* /*full*/ gtk_print_settings_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new_from_gvariant (::GVariant* variant /*none*/);
static GI_INLINE_DECL Gtk::PrintSettings new_from_gvariant (GLib::Variant variant) noexcept;

// GtkPrintSettings* /*full*/ gtk_print_settings_new_from_key_file (GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new_from_key_file (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name);
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile_Ref key_file);
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept;

// GtkPrintSettings* /*full*/ gtk_print_settings_copy (GtkPrintSettings* other /*none*/);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_copy (::GtkPrintSettings* other /*none*/);
GI_INLINE_DECL Gtk::PrintSettings copy () noexcept;

// void gtk_print_settings_foreach (GtkPrintSettings* settings /*none*/, GtkPrintSettingsFunc func /*none*/, gpointer user_data);
// void gtk_print_settings_foreach (::GtkPrintSettings* settings /*none*/, Gtk::PrintSettingsFunc::cfunction_type func /*none*/, void* user_data);
GI_INLINE_DECL void foreach (Gtk::PrintSettingsFunc func) noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::cstring_v get (const gi::cstring_v key) noexcept;

// gboolean gtk_print_settings_get_bool (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gboolean gtk_print_settings_get_bool (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool get_bool (const gi::cstring_v key) noexcept;

// gboolean gtk_print_settings_get_collate (GtkPrintSettings* settings /*none*/);
// gboolean gtk_print_settings_get_collate (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL bool get_collate () noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get_default_source (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_default_source (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gi::cstring_v get_default_source () noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get_dither (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_dither (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gi::cstring_v get_dither () noexcept;

// double gtk_print_settings_get_double (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gdouble gtk_print_settings_get_double (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gdouble get_double (const gi::cstring_v key) noexcept;

// double gtk_print_settings_get_double_with_default (GtkPrintSettings* settings /*none*/, const char* key /*none*/, double def);
// gdouble gtk_print_settings_get_double_with_default (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gdouble def);
GI_INLINE_DECL gdouble get_double_with_default (const gi::cstring_v key, gdouble def) noexcept;

// GtkPrintDuplex gtk_print_settings_get_duplex (GtkPrintSettings* settings /*none*/);
// ::GtkPrintDuplex gtk_print_settings_get_duplex (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PrintDuplex get_duplex () noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get_finishings (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_finishings (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gi::cstring_v get_finishings () noexcept;

// int gtk_print_settings_get_int (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gint gtk_print_settings_get_int (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL gint get_int (const gi::cstring_v key) noexcept;

// int gtk_print_settings_get_int_with_default (GtkPrintSettings* settings /*none*/, const char* key /*none*/, int def);
// gint gtk_print_settings_get_int_with_default (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gint def);
GI_INLINE_DECL gint get_int_with_default (const gi::cstring_v key, gint def) noexcept;

// double gtk_print_settings_get_length (GtkPrintSettings* settings /*none*/, const char* key /*none*/, GtkUnit unit);
// gdouble gtk_print_settings_get_length (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_length (const gi::cstring_v key, Gtk::Unit unit) noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get_media_type (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_media_type (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gi::cstring_v get_media_type () noexcept;

// int gtk_print_settings_get_n_copies (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_n_copies (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gint get_n_copies () noexcept;

// int gtk_print_settings_get_number_up (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_number_up (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gint get_number_up () noexcept;

// GtkNumberUpLayout gtk_print_settings_get_number_up_layout (GtkPrintSettings* settings /*none*/);
// ::GtkNumberUpLayout gtk_print_settings_get_number_up_layout (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::NumberUpLayout get_number_up_layout () noexcept;

// GtkPageOrientation gtk_print_settings_get_orientation (GtkPrintSettings* settings /*none*/);
// ::GtkPageOrientation gtk_print_settings_get_orientation (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PageOrientation get_orientation () noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get_output_bin (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_output_bin (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gi::cstring_v get_output_bin () noexcept;

// GtkPageRange* /*full*/ gtk_print_settings_get_page_ranges (GtkPrintSettings* settings /*none*/, int* num_ranges);
// ::GtkPageRange** /*full*/ gtk_print_settings_get_page_ranges (::GtkPrintSettings* settings /*none*/, gint* num_ranges);
// SKIP;  return boxed array not supported (depth 1)

// GtkPageSet gtk_print_settings_get_page_set (GtkPrintSettings* settings /*none*/);
// ::GtkPageSet gtk_print_settings_get_page_set (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PageSet get_page_set () noexcept;

// double gtk_print_settings_get_paper_height (GtkPrintSettings* settings /*none*/, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_height (::GtkPrintSettings* settings /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_paper_height (Gtk::Unit unit) noexcept;

// GtkPaperSize* /*full,nullable*/ gtk_print_settings_get_paper_size (GtkPrintSettings* settings /*none*/);
// ::GtkPaperSize* /*full,nullable*/ gtk_print_settings_get_paper_size (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PaperSize get_paper_size () noexcept;

// double gtk_print_settings_get_paper_width (GtkPrintSettings* settings /*none*/, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_width (::GtkPrintSettings* settings /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_paper_width (Gtk::Unit unit) noexcept;

// GtkPrintPages gtk_print_settings_get_print_pages (GtkPrintSettings* settings /*none*/);
// ::GtkPrintPages gtk_print_settings_get_print_pages (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PrintPages get_print_pages () noexcept;

// const char* /*none,nullable*/ gtk_print_settings_get_printer (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_printer (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gi::cstring_v get_printer () noexcept;

// double gtk_print_settings_get_printer_lpi (GtkPrintSettings* settings /*none*/);
// gdouble gtk_print_settings_get_printer_lpi (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gdouble get_printer_lpi () noexcept;

// GtkPrintQuality gtk_print_settings_get_quality (GtkPrintSettings* settings /*none*/);
// ::GtkPrintQuality gtk_print_settings_get_quality (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL Gtk::PrintQuality get_quality () noexcept;

// int gtk_print_settings_get_resolution (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_resolution (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gint get_resolution () noexcept;

// int gtk_print_settings_get_resolution_x (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_resolution_x (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gint get_resolution_x () noexcept;

// int gtk_print_settings_get_resolution_y (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_resolution_y (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gint get_resolution_y () noexcept;

// gboolean gtk_print_settings_get_reverse (GtkPrintSettings* settings /*none*/);
// gboolean gtk_print_settings_get_reverse (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL bool get_reverse () noexcept;

// double gtk_print_settings_get_scale (GtkPrintSettings* settings /*none*/);
// gdouble gtk_print_settings_get_scale (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL gdouble get_scale () noexcept;

// gboolean gtk_print_settings_get_use_color (GtkPrintSettings* settings /*none*/);
// gboolean gtk_print_settings_get_use_color (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL bool get_use_color () noexcept;

// gboolean gtk_print_settings_has_key (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gboolean gtk_print_settings_has_key (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool has_key (const gi::cstring_v key) noexcept;

// gboolean gtk_print_settings_load_file (GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_print_settings_load_file (::GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
GI_INLINE_DECL bool load_file (const gi::cstring_v file_name);
GI_INLINE_DECL bool load_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept;

// gboolean gtk_print_settings_load_key_file (GtkPrintSettings* settings /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// gboolean gtk_print_settings_load_key_file (::GtkPrintSettings* settings /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept;

// void gtk_print_settings_set (GtkPrintSettings* settings /*none*/, const char* key /*none*/, const char* value /*none,nullable*/);
// void gtk_print_settings_set (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, const char* value /*none,nullable*/);
GI_INLINE_DECL void set (const gi::cstring_v key, const gi::cstring_v value) noexcept;
GI_INLINE_DECL void set (const gi::cstring_v key) noexcept;

// void gtk_print_settings_set_bool (GtkPrintSettings* settings /*none*/, const char* key /*none*/, gboolean value);
// void gtk_print_settings_set_bool (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gboolean value);
GI_INLINE_DECL void set_bool (const gi::cstring_v key, gboolean value) noexcept;

// void gtk_print_settings_set_collate (GtkPrintSettings* settings /*none*/, gboolean collate);
// void gtk_print_settings_set_collate (::GtkPrintSettings* settings /*none*/, gboolean collate);
GI_INLINE_DECL void set_collate (gboolean collate) noexcept;

// void gtk_print_settings_set_default_source (GtkPrintSettings* settings /*none*/, const char* default_source /*none*/);
// void gtk_print_settings_set_default_source (::GtkPrintSettings* settings /*none*/, const char* default_source /*none*/);
GI_INLINE_DECL void set_default_source (const gi::cstring_v default_source) noexcept;

// void gtk_print_settings_set_dither (GtkPrintSettings* settings /*none*/, const char* dither /*none*/);
// void gtk_print_settings_set_dither (::GtkPrintSettings* settings /*none*/, const char* dither /*none*/);
GI_INLINE_DECL void set_dither (const gi::cstring_v dither) noexcept;

// void gtk_print_settings_set_double (GtkPrintSettings* settings /*none*/, const char* key /*none*/, double value);
// void gtk_print_settings_set_double (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gdouble value);
GI_INLINE_DECL void set_double (const gi::cstring_v key, gdouble value) noexcept;

// void gtk_print_settings_set_duplex (GtkPrintSettings* settings /*none*/, GtkPrintDuplex duplex);
// void gtk_print_settings_set_duplex (::GtkPrintSettings* settings /*none*/, ::GtkPrintDuplex duplex);
GI_INLINE_DECL void set_duplex (Gtk::PrintDuplex duplex) noexcept;

// void gtk_print_settings_set_finishings (GtkPrintSettings* settings /*none*/, const char* finishings /*none*/);
// void gtk_print_settings_set_finishings (::GtkPrintSettings* settings /*none*/, const char* finishings /*none*/);
GI_INLINE_DECL void set_finishings (const gi::cstring_v finishings) noexcept;

// void gtk_print_settings_set_int (GtkPrintSettings* settings /*none*/, const char* key /*none*/, int value);
// void gtk_print_settings_set_int (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gint value);
GI_INLINE_DECL void set_int (const gi::cstring_v key, gint value) noexcept;

// void gtk_print_settings_set_length (GtkPrintSettings* settings /*none*/, const char* key /*none*/, double value, GtkUnit unit);
// void gtk_print_settings_set_length (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gdouble value, ::GtkUnit unit);
GI_INLINE_DECL void set_length (const gi::cstring_v key, gdouble value, Gtk::Unit unit) noexcept;

// void gtk_print_settings_set_media_type (GtkPrintSettings* settings /*none*/, const char* media_type /*none*/);
// void gtk_print_settings_set_media_type (::GtkPrintSettings* settings /*none*/, const char* media_type /*none*/);
GI_INLINE_DECL void set_media_type (const gi::cstring_v media_type) noexcept;

// void gtk_print_settings_set_n_copies (GtkPrintSettings* settings /*none*/, int num_copies);
// void gtk_print_settings_set_n_copies (::GtkPrintSettings* settings /*none*/, gint num_copies);
GI_INLINE_DECL void set_n_copies (gint num_copies) noexcept;

// void gtk_print_settings_set_number_up (GtkPrintSettings* settings /*none*/, int number_up);
// void gtk_print_settings_set_number_up (::GtkPrintSettings* settings /*none*/, gint number_up);
GI_INLINE_DECL void set_number_up (gint number_up) noexcept;

// void gtk_print_settings_set_number_up_layout (GtkPrintSettings* settings /*none*/, GtkNumberUpLayout number_up_layout);
// void gtk_print_settings_set_number_up_layout (::GtkPrintSettings* settings /*none*/, ::GtkNumberUpLayout number_up_layout);
GI_INLINE_DECL void set_number_up_layout (Gtk::NumberUpLayout number_up_layout) noexcept;

// void gtk_print_settings_set_orientation (GtkPrintSettings* settings /*none*/, GtkPageOrientation orientation);
// void gtk_print_settings_set_orientation (::GtkPrintSettings* settings /*none*/, ::GtkPageOrientation orientation);
GI_INLINE_DECL void set_orientation (Gtk::PageOrientation orientation) noexcept;

// void gtk_print_settings_set_output_bin (GtkPrintSettings* settings /*none*/, const char* output_bin /*none*/);
// void gtk_print_settings_set_output_bin (::GtkPrintSettings* settings /*none*/, const char* output_bin /*none*/);
GI_INLINE_DECL void set_output_bin (const gi::cstring_v output_bin) noexcept;

// void gtk_print_settings_set_page_ranges (GtkPrintSettings* settings /*none*/, GtkPageRange* page_ranges /*none*/, int num_ranges);
// void gtk_print_settings_set_page_ranges (::GtkPrintSettings* settings /*none*/, ::GtkPageRange** page_ranges /*none*/, gint num_ranges);
// SKIP; page_ranges in boxed array not supported (depth 1)

// void gtk_print_settings_set_page_set (GtkPrintSettings* settings /*none*/, GtkPageSet page_set);
// void gtk_print_settings_set_page_set (::GtkPrintSettings* settings /*none*/, ::GtkPageSet page_set);
GI_INLINE_DECL void set_page_set (Gtk::PageSet page_set) noexcept;

// void gtk_print_settings_set_paper_height (GtkPrintSettings* settings /*none*/, double height, GtkUnit unit);
// void gtk_print_settings_set_paper_height (::GtkPrintSettings* settings /*none*/, gdouble height, ::GtkUnit unit);
GI_INLINE_DECL void set_paper_height (gdouble height, Gtk::Unit unit) noexcept;

// void gtk_print_settings_set_paper_size (GtkPrintSettings* settings /*none*/, GtkPaperSize* paper_size /*none*/);
// void gtk_print_settings_set_paper_size (::GtkPrintSettings* settings /*none*/, ::GtkPaperSize* paper_size /*none*/);
GI_INLINE_DECL void set_paper_size (Gtk::PaperSize_Ref paper_size) noexcept;

// void gtk_print_settings_set_paper_width (GtkPrintSettings* settings /*none*/, double width, GtkUnit unit);
// void gtk_print_settings_set_paper_width (::GtkPrintSettings* settings /*none*/, gdouble width, ::GtkUnit unit);
GI_INLINE_DECL void set_paper_width (gdouble width, Gtk::Unit unit) noexcept;

// void gtk_print_settings_set_print_pages (GtkPrintSettings* settings /*none*/, GtkPrintPages pages);
// void gtk_print_settings_set_print_pages (::GtkPrintSettings* settings /*none*/, ::GtkPrintPages pages);
GI_INLINE_DECL void set_print_pages (Gtk::PrintPages pages) noexcept;

// void gtk_print_settings_set_printer (GtkPrintSettings* settings /*none*/, const char* printer /*none*/);
// void gtk_print_settings_set_printer (::GtkPrintSettings* settings /*none*/, const char* printer /*none*/);
GI_INLINE_DECL void set_printer (const gi::cstring_v printer) noexcept;

// void gtk_print_settings_set_printer_lpi (GtkPrintSettings* settings /*none*/, double lpi);
// void gtk_print_settings_set_printer_lpi (::GtkPrintSettings* settings /*none*/, gdouble lpi);
GI_INLINE_DECL void set_printer_lpi (gdouble lpi) noexcept;

// void gtk_print_settings_set_quality (GtkPrintSettings* settings /*none*/, GtkPrintQuality quality);
// void gtk_print_settings_set_quality (::GtkPrintSettings* settings /*none*/, ::GtkPrintQuality quality);
GI_INLINE_DECL void set_quality (Gtk::PrintQuality quality) noexcept;

// void gtk_print_settings_set_resolution (GtkPrintSettings* settings /*none*/, int resolution);
// void gtk_print_settings_set_resolution (::GtkPrintSettings* settings /*none*/, gint resolution);
GI_INLINE_DECL void set_resolution (gint resolution) noexcept;

// void gtk_print_settings_set_resolution_xy (GtkPrintSettings* settings /*none*/, int resolution_x, int resolution_y);
// void gtk_print_settings_set_resolution_xy (::GtkPrintSettings* settings /*none*/, gint resolution_x, gint resolution_y);
GI_INLINE_DECL void set_resolution_xy (gint resolution_x, gint resolution_y) noexcept;

// void gtk_print_settings_set_reverse (GtkPrintSettings* settings /*none*/, gboolean reverse);
// void gtk_print_settings_set_reverse (::GtkPrintSettings* settings /*none*/, gboolean reverse);
GI_INLINE_DECL void set_reverse (gboolean reverse) noexcept;

// void gtk_print_settings_set_scale (GtkPrintSettings* settings /*none*/, double scale);
// void gtk_print_settings_set_scale (::GtkPrintSettings* settings /*none*/, gdouble scale);
GI_INLINE_DECL void set_scale (gdouble scale) noexcept;

// void gtk_print_settings_set_use_color (GtkPrintSettings* settings /*none*/, gboolean use_color);
// void gtk_print_settings_set_use_color (::GtkPrintSettings* settings /*none*/, gboolean use_color);
GI_INLINE_DECL void set_use_color (gboolean use_color) noexcept;

// gboolean gtk_print_settings_to_file (GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_print_settings_to_file (::GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
GI_INLINE_DECL bool to_file (const gi::cstring_v file_name);
GI_INLINE_DECL bool to_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept;

// GVariant* /*none*/ gtk_print_settings_to_gvariant (GtkPrintSettings* settings /*none*/);
// ::GVariant* /*none*/ gtk_print_settings_to_gvariant (::GtkPrintSettings* settings /*none*/);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

// void gtk_print_settings_to_key_file (GtkPrintSettings* settings /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
// void gtk_print_settings_to_key_file (::GtkPrintSettings* settings /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
GI_INLINE_DECL void to_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name) noexcept;
GI_INLINE_DECL void to_key_file (GLib::KeyFile_Ref key_file) noexcept;

// void gtk_print_settings_unset (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// void gtk_print_settings_unset (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
GI_INLINE_DECL void unset (const gi::cstring_v key) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra_def.hpp>)
#include <gtk/printsettings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra.hpp>)
#include <gtk/printsettings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintSettings : public GI_GTK_PRINTSETTINGS_BASE
{ typedef GI_GTK_PRINTSETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintSettings>
{ typedef Gtk::PrintSettings type; }; 

} // namespace repository

} // namespace gi

#endif
