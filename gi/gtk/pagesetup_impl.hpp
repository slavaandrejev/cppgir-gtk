// AUTO-GENERATED

#ifndef _GI_GTK_PAGESETUP_IMPL_HPP_
#define _GI_GTK_PAGESETUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPageSetup* /*full*/ gtk_page_setup_new ();
// ::GtkPageSetup* /*full*/ gtk_page_setup_new ();
Gtk::PageSetup base::PageSetupBase::new_ () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPageSetup* /*full*/ gtk_page_setup_new_from_file (const char* file_name /*none*/, GError ** error);
// ::GtkPageSetup* /*full*/ gtk_page_setup_new_from_file (const char* file_name /*none*/, GError ** error);
Gtk::PageSetup base::PageSetupBase::new_from_file (const gi::cstring_v file_name)
{
  typedef ::GtkPageSetup* (*call_wrap_t) (const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PageSetup base::PageSetupBase::new_from_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPageSetup* /*full*/ gtk_page_setup_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkPageSetup* /*full*/ gtk_page_setup_new_from_gvariant (::GVariant* variant /*none*/);
Gtk::PageSetup base::PageSetupBase::new_from_gvariant (GLib::Variant variant) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GVariant* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_gvariant;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPageSetup* /*full*/ gtk_page_setup_new_from_key_file (GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// ::GtkPageSetup* /*full*/ gtk_page_setup_new_from_key_file (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
Gtk::PageSetup base::PageSetupBase::new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name)
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PageSetup base::PageSetupBase::new_from_key_file (GLib::KeyFile_Ref key_file)
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PageSetup base::PageSetupBase::new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PageSetup base::PageSetupBase::new_from_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_page_setup_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPageSetup* /*full*/ gtk_page_setup_copy (GtkPageSetup* other /*none*/);
// ::GtkPageSetup* /*full*/ gtk_page_setup_copy (::GtkPageSetup* other /*none*/);
Gtk::PageSetup base::PageSetupBase::copy () noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkPageSetup* other);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_copy;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// double gtk_page_setup_get_bottom_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_bottom_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_bottom_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_bottom_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// double gtk_page_setup_get_left_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_left_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_left_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_left_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// GtkPageOrientation gtk_page_setup_get_orientation (GtkPageSetup* setup /*none*/);
// ::GtkPageOrientation gtk_page_setup_get_orientation (::GtkPageSetup* setup /*none*/);
Gtk::PageOrientation base::PageSetupBase::get_orientation () noexcept
{
  typedef ::GtkPageOrientation (*call_wrap_t) (::GtkPageSetup* setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// double gtk_page_setup_get_page_height (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_page_height (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_page_height (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_page_height;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// double gtk_page_setup_get_page_width (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_page_width (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_page_width (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_page_width;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// double gtk_page_setup_get_paper_height (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_paper_height (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_paper_height (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_paper_height;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// GtkPaperSize* /*none*/ gtk_page_setup_get_paper_size (GtkPageSetup* setup /*none*/);
// ::GtkPaperSize* /*none*/ gtk_page_setup_get_paper_size (::GtkPageSetup* setup /*none*/);
Gtk::PaperSize_Ref base::PageSetupBase::get_paper_size () noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GtkPageSetup* setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_paper_size;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_page_setup_get_paper_width (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_paper_width (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_paper_width (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_paper_width;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// double gtk_page_setup_get_right_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_right_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_right_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_right_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// double gtk_page_setup_get_top_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_top_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
gdouble base::PageSetupBase::get_top_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPageSetup* setup, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_get_top_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// gboolean gtk_page_setup_load_file (GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_page_setup_load_file (::GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
bool base::PageSetupBase::load_file (const gi::cstring_v file_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_load_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PageSetupBase::load_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_load_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean gtk_page_setup_load_key_file (GtkPageSetup* setup /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// gboolean gtk_page_setup_load_key_file (::GtkPageSetup* setup /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
bool base::PageSetupBase::load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_load_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PageSetupBase::load_key_file (GLib::KeyFile_Ref key_file)
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_load_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PageSetupBase::load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_load_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::PageSetupBase::load_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_load_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_page_setup_set_bottom_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_bottom_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
void base::PageSetupBase::set_bottom_margin (gdouble margin, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, gdouble margin, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_bottom_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto margin_to_c = margin;
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (gdouble) (margin_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_page_setup_set_left_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_left_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
void base::PageSetupBase::set_left_margin (gdouble margin, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, gdouble margin, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_left_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto margin_to_c = margin;
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (gdouble) (margin_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_page_setup_set_orientation (GtkPageSetup* setup /*none*/, GtkPageOrientation orientation);
// void gtk_page_setup_set_orientation (::GtkPageSetup* setup /*none*/, ::GtkPageOrientation orientation);
void base::PageSetupBase::set_orientation (Gtk::PageOrientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, ::GtkPageOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkPageOrientation) (orientation_to_c));
}

// void gtk_page_setup_set_paper_size (GtkPageSetup* setup /*none*/, GtkPaperSize* size /*none*/);
// void gtk_page_setup_set_paper_size (::GtkPageSetup* setup /*none*/, ::GtkPaperSize* size /*none*/);
void base::PageSetupBase::set_paper_size (Gtk::PaperSize_Ref size) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, ::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_paper_size;
  auto size_to_c = gi::unwrap (size, gi::transfer_none);
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkPaperSize*) (size_to_c));
}

// void gtk_page_setup_set_paper_size_and_default_margins (GtkPageSetup* setup /*none*/, GtkPaperSize* size /*none*/);
// void gtk_page_setup_set_paper_size_and_default_margins (::GtkPageSetup* setup /*none*/, ::GtkPaperSize* size /*none*/);
void base::PageSetupBase::set_paper_size_and_default_margins (Gtk::PaperSize_Ref size) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, ::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_paper_size_and_default_margins;
  auto size_to_c = gi::unwrap (size, gi::transfer_none);
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GtkPaperSize*) (size_to_c));
}

// void gtk_page_setup_set_right_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_right_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
void base::PageSetupBase::set_right_margin (gdouble margin, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, gdouble margin, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_right_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto margin_to_c = margin;
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (gdouble) (margin_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_page_setup_set_top_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_top_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
void base::PageSetupBase::set_top_margin (gdouble margin, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, gdouble margin, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_set_top_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto margin_to_c = margin;
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (gdouble) (margin_to_c), (::GtkUnit) (unit_to_c));
}

// gboolean gtk_page_setup_to_file (GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_page_setup_to_file (::GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
bool base::PageSetupBase::to_file (const gi::cstring_v file_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_to_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PageSetupBase::to_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPageSetup* setup, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_to_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()), (const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GVariant* /*none*/ gtk_page_setup_to_gvariant (GtkPageSetup* setup /*none*/);
// ::GVariant* /*none*/ gtk_page_setup_to_gvariant (::GtkPageSetup* setup /*none*/);
GLib::Variant base::PageSetupBase::to_gvariant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkPageSetup* setup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_to_gvariant;
  auto _temp_ret = call_wrap_v ((::GtkPageSetup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_page_setup_to_key_file (GtkPageSetup* setup /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
// void gtk_page_setup_to_key_file (::GtkPageSetup* setup /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
void base::PageSetupBase::to_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_to_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}
void base::PageSetupBase::to_key_file (GLib::KeyFile_Ref key_file) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageSetup* setup, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_page_setup_to_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none);
  call_wrap_v ((::GtkPageSetup*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagesetup_extra_def_impl.hpp>)
#include <gtk/pagesetup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagesetup_extra_impl.hpp>)
#include <gtk/pagesetup_extra_impl.hpp>
#endif
#endif

#endif
