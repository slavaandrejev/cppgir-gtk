// AUTO-GENERATED

#ifndef _GI_GTK_PRINTSETTINGS_IMPL_HPP_
#define _GI_GTK_PRINTSETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPrintSettings* /*full*/ gtk_print_settings_new ();
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new ();
Gtk::PrintSettings base::PrintSettingsBase::new_ () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPrintSettings* /*full*/ gtk_print_settings_new_from_file (const char* file_name /*none*/, GError ** error);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new_from_file (const char* file_name /*none*/, GError ** error);
Gtk::PrintSettings base::PrintSettingsBase::new_from_file (const gi::cstring_v file_name)
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPrintSettings* /*full*/ gtk_print_settings_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new_from_gvariant (::GVariant* variant /*none*/);
Gtk::PrintSettings base::PrintSettingsBase::new_from_gvariant (GLib::Variant variant) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GVariant* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_gvariant;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPrintSettings* /*full*/ gtk_print_settings_new_from_key_file (GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_new_from_key_file (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name)
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile_Ref key_file)
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPrintSettings* /*full*/ gtk_print_settings_copy (GtkPrintSettings* other /*none*/);
// ::GtkPrintSettings* /*full*/ gtk_print_settings_copy (::GtkPrintSettings* other /*none*/);
Gtk::PrintSettings base::PrintSettingsBase::copy () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintSettings* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_copy;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_print_settings_foreach (GtkPrintSettings* settings /*none*/, GtkPrintSettingsFunc func /*none*/, gpointer user_data);
// void gtk_print_settings_foreach (::GtkPrintSettings* settings /*none*/, Gtk::PrintSettingsFunc::cfunction_type func /*none*/, void* user_data);
void base::PrintSettingsBase::foreach (Gtk::PrintSettingsFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, Gtk::PrintSettingsFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (Gtk::PrintSettingsFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// const char* /*none,nullable*/ gtk_print_settings_get (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
gi::cstring_v base::PrintSettingsBase::get (const gi::cstring_v key) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_print_settings_get_bool (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gboolean gtk_print_settings_get_bool (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
bool base::PrintSettingsBase::get_bool (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_bool;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gboolean gtk_print_settings_get_collate (GtkPrintSettings* settings /*none*/);
// gboolean gtk_print_settings_get_collate (::GtkPrintSettings* settings /*none*/);
bool base::PrintSettingsBase::get_collate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_collate;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_print_settings_get_default_source (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_default_source (::GtkPrintSettings* settings /*none*/);
gi::cstring_v base::PrintSettingsBase::get_default_source () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_default_source;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_print_settings_get_dither (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_dither (::GtkPrintSettings* settings /*none*/);
gi::cstring_v base::PrintSettingsBase::get_dither () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_dither;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_print_settings_get_double (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gdouble gtk_print_settings_get_double (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
gdouble base::PrintSettingsBase::get_double (const gi::cstring_v key) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// double gtk_print_settings_get_double_with_default (GtkPrintSettings* settings /*none*/, const char* key /*none*/, double def);
// gdouble gtk_print_settings_get_double_with_default (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gdouble def);
gdouble base::PrintSettingsBase::get_double_with_default (const gi::cstring_v key, gdouble def) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gdouble def);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_double_with_default;
  auto def_to_c = def;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (def_to_c));
  return _temp_ret;
}

// GtkPrintDuplex gtk_print_settings_get_duplex (GtkPrintSettings* settings /*none*/);
// ::GtkPrintDuplex gtk_print_settings_get_duplex (::GtkPrintSettings* settings /*none*/);
Gtk::PrintDuplex base::PrintSettingsBase::get_duplex () noexcept
{
  typedef ::GtkPrintDuplex (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_duplex;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ gtk_print_settings_get_finishings (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_finishings (::GtkPrintSettings* settings /*none*/);
gi::cstring_v base::PrintSettingsBase::get_finishings () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_finishings;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_print_settings_get_int (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gint gtk_print_settings_get_int (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
gint base::PrintSettingsBase::get_int (const gi::cstring_v key) noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_int;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// int gtk_print_settings_get_int_with_default (GtkPrintSettings* settings /*none*/, const char* key /*none*/, int def);
// gint gtk_print_settings_get_int_with_default (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gint def);
gint base::PrintSettingsBase::get_int_with_default (const gi::cstring_v key, gint def) noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gint def);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_int_with_default;
  auto def_to_c = def;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gint) (def_to_c));
  return _temp_ret;
}

// double gtk_print_settings_get_length (GtkPrintSettings* settings /*none*/, const char* key /*none*/, GtkUnit unit);
// gdouble gtk_print_settings_get_length (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, ::GtkUnit unit);
gdouble base::PrintSettingsBase::get_length (const gi::cstring_v key, Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_length;
  auto unit_to_c = gi::unwrap (unit);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_print_settings_get_media_type (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_media_type (::GtkPrintSettings* settings /*none*/);
gi::cstring_v base::PrintSettingsBase::get_media_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_media_type;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_print_settings_get_n_copies (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_n_copies (::GtkPrintSettings* settings /*none*/);
gint base::PrintSettingsBase::get_n_copies () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_n_copies;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// int gtk_print_settings_get_number_up (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_number_up (::GtkPrintSettings* settings /*none*/);
gint base::PrintSettingsBase::get_number_up () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_number_up;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// GtkNumberUpLayout gtk_print_settings_get_number_up_layout (GtkPrintSettings* settings /*none*/);
// ::GtkNumberUpLayout gtk_print_settings_get_number_up_layout (::GtkPrintSettings* settings /*none*/);
Gtk::NumberUpLayout base::PrintSettingsBase::get_number_up_layout () noexcept
{
  typedef ::GtkNumberUpLayout (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_number_up_layout;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPageOrientation gtk_print_settings_get_orientation (GtkPrintSettings* settings /*none*/);
// ::GtkPageOrientation gtk_print_settings_get_orientation (::GtkPrintSettings* settings /*none*/);
Gtk::PageOrientation base::PrintSettingsBase::get_orientation () noexcept
{
  typedef ::GtkPageOrientation (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ gtk_print_settings_get_output_bin (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_output_bin (::GtkPrintSettings* settings /*none*/);
gi::cstring_v base::PrintSettingsBase::get_output_bin () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_output_bin;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPageRange* /*full*/ gtk_print_settings_get_page_ranges (GtkPrintSettings* settings /*none*/, int* num_ranges);
// ::GtkPageRange** /*full*/ gtk_print_settings_get_page_ranges (::GtkPrintSettings* settings /*none*/, gint* num_ranges);
// SKIP;  return boxed array not supported (depth 1)

// GtkPageSet gtk_print_settings_get_page_set (GtkPrintSettings* settings /*none*/);
// ::GtkPageSet gtk_print_settings_get_page_set (::GtkPrintSettings* settings /*none*/);
Gtk::PageSet base::PrintSettingsBase::get_page_set () noexcept
{
  typedef ::GtkPageSet (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_page_set;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double gtk_print_settings_get_paper_height (GtkPrintSettings* settings /*none*/, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_height (::GtkPrintSettings* settings /*none*/, ::GtkUnit unit);
gdouble base::PrintSettingsBase::get_paper_height (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_paper_height;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// GtkPaperSize* /*full,nullable*/ gtk_print_settings_get_paper_size (GtkPrintSettings* settings /*none*/);
// ::GtkPaperSize* /*full,nullable*/ gtk_print_settings_get_paper_size (::GtkPrintSettings* settings /*none*/);
Gtk::PaperSize base::PrintSettingsBase::get_paper_size () noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_paper_size;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// double gtk_print_settings_get_paper_width (GtkPrintSettings* settings /*none*/, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_width (::GtkPrintSettings* settings /*none*/, ::GtkUnit unit);
gdouble base::PrintSettingsBase::get_paper_width (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_paper_width;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// GtkPrintPages gtk_print_settings_get_print_pages (GtkPrintSettings* settings /*none*/);
// ::GtkPrintPages gtk_print_settings_get_print_pages (::GtkPrintSettings* settings /*none*/);
Gtk::PrintPages base::PrintSettingsBase::get_print_pages () noexcept
{
  typedef ::GtkPrintPages (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_print_pages;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ gtk_print_settings_get_printer (GtkPrintSettings* settings /*none*/);
// const char* /*none,nullable*/ gtk_print_settings_get_printer (::GtkPrintSettings* settings /*none*/);
gi::cstring_v base::PrintSettingsBase::get_printer () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_printer;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_print_settings_get_printer_lpi (GtkPrintSettings* settings /*none*/);
// gdouble gtk_print_settings_get_printer_lpi (::GtkPrintSettings* settings /*none*/);
gdouble base::PrintSettingsBase::get_printer_lpi () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_printer_lpi;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// GtkPrintQuality gtk_print_settings_get_quality (GtkPrintSettings* settings /*none*/);
// ::GtkPrintQuality gtk_print_settings_get_quality (::GtkPrintSettings* settings /*none*/);
Gtk::PrintQuality base::PrintSettingsBase::get_quality () noexcept
{
  typedef ::GtkPrintQuality (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_quality;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gtk_print_settings_get_resolution (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_resolution (::GtkPrintSettings* settings /*none*/);
gint base::PrintSettingsBase::get_resolution () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_resolution;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// int gtk_print_settings_get_resolution_x (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_resolution_x (::GtkPrintSettings* settings /*none*/);
gint base::PrintSettingsBase::get_resolution_x () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_resolution_x;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// int gtk_print_settings_get_resolution_y (GtkPrintSettings* settings /*none*/);
// gint gtk_print_settings_get_resolution_y (::GtkPrintSettings* settings /*none*/);
gint base::PrintSettingsBase::get_resolution_y () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_resolution_y;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_settings_get_reverse (GtkPrintSettings* settings /*none*/);
// gboolean gtk_print_settings_get_reverse (::GtkPrintSettings* settings /*none*/);
bool base::PrintSettingsBase::get_reverse () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_reverse;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// double gtk_print_settings_get_scale (GtkPrintSettings* settings /*none*/);
// gdouble gtk_print_settings_get_scale (::GtkPrintSettings* settings /*none*/);
gdouble base::PrintSettingsBase::get_scale () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_scale;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_settings_get_use_color (GtkPrintSettings* settings /*none*/);
// gboolean gtk_print_settings_get_use_color (::GtkPrintSettings* settings /*none*/);
bool base::PrintSettingsBase::get_use_color () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_get_use_color;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_settings_has_key (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// gboolean gtk_print_settings_has_key (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
bool base::PrintSettingsBase::has_key (const gi::cstring_v key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gboolean gtk_print_settings_load_file (GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_print_settings_load_file (::GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
bool base::PrintSettingsBase::load_file (const gi::cstring_v file_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_load_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_load_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_print_settings_load_key_file (GtkPrintSettings* settings /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// gboolean gtk_print_settings_load_key_file (::GtkPrintSettings* settings /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_load_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile_Ref key_file)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_load_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_load_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_load_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_print_settings_set (GtkPrintSettings* settings /*none*/, const char* key /*none*/, const char* value /*none,nullable*/);
// void gtk_print_settings_set (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, const char* value /*none,nullable*/);
void base::PrintSettingsBase::set (const gi::cstring_v key, const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
}
void base::PrintSettingsBase::set (const gi::cstring_v key) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set;
  auto value_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
}

// void gtk_print_settings_set_bool (GtkPrintSettings* settings /*none*/, const char* key /*none*/, gboolean value);
// void gtk_print_settings_set_bool (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gboolean value);
void base::PrintSettingsBase::set_bool (const gi::cstring_v key, gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_bool;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gboolean) (value_to_c));
}

// void gtk_print_settings_set_collate (GtkPrintSettings* settings /*none*/, gboolean collate);
// void gtk_print_settings_set_collate (::GtkPrintSettings* settings /*none*/, gboolean collate);
void base::PrintSettingsBase::set_collate (gboolean collate) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gboolean collate);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_collate;
  auto collate_to_c = collate;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gboolean) (collate_to_c));
}

// void gtk_print_settings_set_default_source (GtkPrintSettings* settings /*none*/, const char* default_source /*none*/);
// void gtk_print_settings_set_default_source (::GtkPrintSettings* settings /*none*/, const char* default_source /*none*/);
void base::PrintSettingsBase::set_default_source (const gi::cstring_v default_source) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* default_source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_default_source;
  auto default_source_to_c = gi::unwrap (default_source, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (default_source_to_c));
}

// void gtk_print_settings_set_dither (GtkPrintSettings* settings /*none*/, const char* dither /*none*/);
// void gtk_print_settings_set_dither (::GtkPrintSettings* settings /*none*/, const char* dither /*none*/);
void base::PrintSettingsBase::set_dither (const gi::cstring_v dither) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* dither);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_dither;
  auto dither_to_c = gi::unwrap (dither, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (dither_to_c));
}

// void gtk_print_settings_set_double (GtkPrintSettings* settings /*none*/, const char* key /*none*/, double value);
// void gtk_print_settings_set_double (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gdouble value);
void base::PrintSettingsBase::set_double (const gi::cstring_v key, gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_double;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (value_to_c));
}

// void gtk_print_settings_set_duplex (GtkPrintSettings* settings /*none*/, GtkPrintDuplex duplex);
// void gtk_print_settings_set_duplex (::GtkPrintSettings* settings /*none*/, ::GtkPrintDuplex duplex);
void base::PrintSettingsBase::set_duplex (Gtk::PrintDuplex duplex) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPrintDuplex duplex);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_duplex;
  auto duplex_to_c = gi::unwrap (duplex);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPrintDuplex) (duplex_to_c));
}

// void gtk_print_settings_set_finishings (GtkPrintSettings* settings /*none*/, const char* finishings /*none*/);
// void gtk_print_settings_set_finishings (::GtkPrintSettings* settings /*none*/, const char* finishings /*none*/);
void base::PrintSettingsBase::set_finishings (const gi::cstring_v finishings) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* finishings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_finishings;
  auto finishings_to_c = gi::unwrap (finishings, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (finishings_to_c));
}

// void gtk_print_settings_set_int (GtkPrintSettings* settings /*none*/, const char* key /*none*/, int value);
// void gtk_print_settings_set_int (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gint value);
void base::PrintSettingsBase::set_int (const gi::cstring_v key, gint value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_int;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gint) (value_to_c));
}

// void gtk_print_settings_set_length (GtkPrintSettings* settings /*none*/, const char* key /*none*/, double value, GtkUnit unit);
// void gtk_print_settings_set_length (::GtkPrintSettings* settings /*none*/, const char* key /*none*/, gdouble value, ::GtkUnit unit);
void base::PrintSettingsBase::set_length (const gi::cstring_v key, gdouble value, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gdouble value, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_length;
  auto unit_to_c = gi::unwrap (unit);
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (value_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_print_settings_set_media_type (GtkPrintSettings* settings /*none*/, const char* media_type /*none*/);
// void gtk_print_settings_set_media_type (::GtkPrintSettings* settings /*none*/, const char* media_type /*none*/);
void base::PrintSettingsBase::set_media_type (const gi::cstring_v media_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* media_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_media_type;
  auto media_type_to_c = gi::unwrap (media_type, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (media_type_to_c));
}

// void gtk_print_settings_set_n_copies (GtkPrintSettings* settings /*none*/, int num_copies);
// void gtk_print_settings_set_n_copies (::GtkPrintSettings* settings /*none*/, gint num_copies);
void base::PrintSettingsBase::set_n_copies (gint num_copies) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint num_copies);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_n_copies;
  auto num_copies_to_c = num_copies;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (num_copies_to_c));
}

// void gtk_print_settings_set_number_up (GtkPrintSettings* settings /*none*/, int number_up);
// void gtk_print_settings_set_number_up (::GtkPrintSettings* settings /*none*/, gint number_up);
void base::PrintSettingsBase::set_number_up (gint number_up) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint number_up);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_number_up;
  auto number_up_to_c = number_up;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (number_up_to_c));
}

// void gtk_print_settings_set_number_up_layout (GtkPrintSettings* settings /*none*/, GtkNumberUpLayout number_up_layout);
// void gtk_print_settings_set_number_up_layout (::GtkPrintSettings* settings /*none*/, ::GtkNumberUpLayout number_up_layout);
void base::PrintSettingsBase::set_number_up_layout (Gtk::NumberUpLayout number_up_layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkNumberUpLayout number_up_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_number_up_layout;
  auto number_up_layout_to_c = gi::unwrap (number_up_layout);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkNumberUpLayout) (number_up_layout_to_c));
}

// void gtk_print_settings_set_orientation (GtkPrintSettings* settings /*none*/, GtkPageOrientation orientation);
// void gtk_print_settings_set_orientation (::GtkPrintSettings* settings /*none*/, ::GtkPageOrientation orientation);
void base::PrintSettingsBase::set_orientation (Gtk::PageOrientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPageOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPageOrientation) (orientation_to_c));
}

// void gtk_print_settings_set_output_bin (GtkPrintSettings* settings /*none*/, const char* output_bin /*none*/);
// void gtk_print_settings_set_output_bin (::GtkPrintSettings* settings /*none*/, const char* output_bin /*none*/);
void base::PrintSettingsBase::set_output_bin (const gi::cstring_v output_bin) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* output_bin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_output_bin;
  auto output_bin_to_c = gi::unwrap (output_bin, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (output_bin_to_c));
}

// void gtk_print_settings_set_page_ranges (GtkPrintSettings* settings /*none*/, GtkPageRange* page_ranges /*none*/, int num_ranges);
// void gtk_print_settings_set_page_ranges (::GtkPrintSettings* settings /*none*/, ::GtkPageRange** page_ranges /*none*/, gint num_ranges);
// SKIP; page_ranges in boxed array not supported (depth 1)

// void gtk_print_settings_set_page_set (GtkPrintSettings* settings /*none*/, GtkPageSet page_set);
// void gtk_print_settings_set_page_set (::GtkPrintSettings* settings /*none*/, ::GtkPageSet page_set);
void base::PrintSettingsBase::set_page_set (Gtk::PageSet page_set) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPageSet page_set);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_page_set;
  auto page_set_to_c = gi::unwrap (page_set);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPageSet) (page_set_to_c));
}

// void gtk_print_settings_set_paper_height (GtkPrintSettings* settings /*none*/, double height, GtkUnit unit);
// void gtk_print_settings_set_paper_height (::GtkPrintSettings* settings /*none*/, gdouble height, ::GtkUnit unit);
void base::PrintSettingsBase::set_paper_height (gdouble height, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble height, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_paper_height;
  auto unit_to_c = gi::unwrap (unit);
  auto height_to_c = height;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (height_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_print_settings_set_paper_size (GtkPrintSettings* settings /*none*/, GtkPaperSize* paper_size /*none*/);
// void gtk_print_settings_set_paper_size (::GtkPrintSettings* settings /*none*/, ::GtkPaperSize* paper_size /*none*/);
void base::PrintSettingsBase::set_paper_size (Gtk::PaperSize_Ref paper_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPaperSize* paper_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_paper_size;
  auto paper_size_to_c = gi::unwrap (paper_size, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPaperSize*) (paper_size_to_c));
}

// void gtk_print_settings_set_paper_width (GtkPrintSettings* settings /*none*/, double width, GtkUnit unit);
// void gtk_print_settings_set_paper_width (::GtkPrintSettings* settings /*none*/, gdouble width, ::GtkUnit unit);
void base::PrintSettingsBase::set_paper_width (gdouble width, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble width, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_paper_width;
  auto unit_to_c = gi::unwrap (unit);
  auto width_to_c = width;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (width_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_print_settings_set_print_pages (GtkPrintSettings* settings /*none*/, GtkPrintPages pages);
// void gtk_print_settings_set_print_pages (::GtkPrintSettings* settings /*none*/, ::GtkPrintPages pages);
void base::PrintSettingsBase::set_print_pages (Gtk::PrintPages pages) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPrintPages pages);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_print_pages;
  auto pages_to_c = gi::unwrap (pages);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPrintPages) (pages_to_c));
}

// void gtk_print_settings_set_printer (GtkPrintSettings* settings /*none*/, const char* printer /*none*/);
// void gtk_print_settings_set_printer (::GtkPrintSettings* settings /*none*/, const char* printer /*none*/);
void base::PrintSettingsBase::set_printer (const gi::cstring_v printer) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_printer;
  auto printer_to_c = gi::unwrap (printer, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (printer_to_c));
}

// void gtk_print_settings_set_printer_lpi (GtkPrintSettings* settings /*none*/, double lpi);
// void gtk_print_settings_set_printer_lpi (::GtkPrintSettings* settings /*none*/, gdouble lpi);
void base::PrintSettingsBase::set_printer_lpi (gdouble lpi) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble lpi);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_printer_lpi;
  auto lpi_to_c = lpi;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (lpi_to_c));
}

// void gtk_print_settings_set_quality (GtkPrintSettings* settings /*none*/, GtkPrintQuality quality);
// void gtk_print_settings_set_quality (::GtkPrintSettings* settings /*none*/, ::GtkPrintQuality quality);
void base::PrintSettingsBase::set_quality (Gtk::PrintQuality quality) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPrintQuality quality);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_quality;
  auto quality_to_c = gi::unwrap (quality);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPrintQuality) (quality_to_c));
}

// void gtk_print_settings_set_resolution (GtkPrintSettings* settings /*none*/, int resolution);
// void gtk_print_settings_set_resolution (::GtkPrintSettings* settings /*none*/, gint resolution);
void base::PrintSettingsBase::set_resolution (gint resolution) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint resolution);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_resolution;
  auto resolution_to_c = resolution;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (resolution_to_c));
}

// void gtk_print_settings_set_resolution_xy (GtkPrintSettings* settings /*none*/, int resolution_x, int resolution_y);
// void gtk_print_settings_set_resolution_xy (::GtkPrintSettings* settings /*none*/, gint resolution_x, gint resolution_y);
void base::PrintSettingsBase::set_resolution_xy (gint resolution_x, gint resolution_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint resolution_x, gint resolution_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_resolution_xy;
  auto resolution_y_to_c = resolution_y;
  auto resolution_x_to_c = resolution_x;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (resolution_x_to_c), (gint) (resolution_y_to_c));
}

// void gtk_print_settings_set_reverse (GtkPrintSettings* settings /*none*/, gboolean reverse);
// void gtk_print_settings_set_reverse (::GtkPrintSettings* settings /*none*/, gboolean reverse);
void base::PrintSettingsBase::set_reverse (gboolean reverse) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gboolean reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_reverse;
  auto reverse_to_c = reverse;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gboolean) (reverse_to_c));
}

// void gtk_print_settings_set_scale (GtkPrintSettings* settings /*none*/, double scale);
// void gtk_print_settings_set_scale (::GtkPrintSettings* settings /*none*/, gdouble scale);
void base::PrintSettingsBase::set_scale (gdouble scale) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_scale;
  auto scale_to_c = scale;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (scale_to_c));
}

// void gtk_print_settings_set_use_color (GtkPrintSettings* settings /*none*/, gboolean use_color);
// void gtk_print_settings_set_use_color (::GtkPrintSettings* settings /*none*/, gboolean use_color);
void base::PrintSettingsBase::set_use_color (gboolean use_color) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gboolean use_color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_set_use_color;
  auto use_color_to_c = use_color;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gboolean) (use_color_to_c));
}

// gboolean gtk_print_settings_to_file (GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_print_settings_to_file (::GtkPrintSettings* settings /*none*/, const char* file_name /*none*/, GError ** error);
bool base::PrintSettingsBase::to_file (const gi::cstring_v file_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_to_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::to_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_to_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GVariant* /*none*/ gtk_print_settings_to_gvariant (GtkPrintSettings* settings /*none*/);
// ::GVariant* /*none*/ gtk_print_settings_to_gvariant (::GtkPrintSettings* settings /*none*/);
GLib::Variant base::PrintSettingsBase::to_gvariant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_to_gvariant;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_print_settings_to_key_file (GtkPrintSettings* settings /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
// void gtk_print_settings_to_key_file (::GtkPrintSettings* settings /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
void base::PrintSettingsBase::to_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_to_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}
void base::PrintSettingsBase::to_key_file (GLib::KeyFile_Ref key_file) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_to_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}

// void gtk_print_settings_unset (GtkPrintSettings* settings /*none*/, const char* key /*none*/);
// void gtk_print_settings_unset (::GtkPrintSettings* settings /*none*/, const char* key /*none*/);
void base::PrintSettingsBase::unset (const gi::cstring_v key) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_settings_unset;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra_def_impl.hpp>)
#include <gtk/printsettings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra_impl.hpp>)
#include <gtk/printsettings_extra_impl.hpp>
#endif
#endif

#endif
