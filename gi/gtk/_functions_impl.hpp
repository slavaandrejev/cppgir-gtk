// AUTO-GENERATED

#ifndef _GI_GTK__FUNCTIONS_IMPL_HPP_
#define _GI_GTK__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace AccessiblePropertyNS_ {

// void gtk_accessible_property_init_value (GtkAccessibleProperty property, GValue* value /*none*/);
// void gtk_accessible_property_init_value (::GtkAccessibleProperty property, ::GValue* value /*none*/);
void init_value (Gtk::AccessibleProperty property, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleProperty property, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_property_init_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto property_to_c = gi::unwrap (property);
  call_wrap_v ((::GtkAccessibleProperty) (property_to_c), (::GValue*) (value_to_c));
}

} // namespace AccessiblePropertyNS_

namespace AccessibleRelationNS_ {

// void gtk_accessible_relation_init_value (GtkAccessibleRelation relation, GValue* value /*none*/);
// void gtk_accessible_relation_init_value (::GtkAccessibleRelation relation, ::GValue* value /*none*/);
void init_value (Gtk::AccessibleRelation relation, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleRelation relation, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_relation_init_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto relation_to_c = gi::unwrap (relation);
  call_wrap_v ((::GtkAccessibleRelation) (relation_to_c), (::GValue*) (value_to_c));
}

} // namespace AccessibleRelationNS_

namespace AccessibleStateNS_ {

// void gtk_accessible_state_init_value (GtkAccessibleState state, GValue* value /*none*/);
// void gtk_accessible_state_init_value (::GtkAccessibleState state, ::GValue* value /*none*/);
void init_value (Gtk::AccessibleState state, GObject::Value_Ref value) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessibleState state, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accessible_state_init_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkAccessibleState) (state_to_c), (::GValue*) (value_to_c));
}

} // namespace AccessibleStateNS_

namespace BuilderErrorNS_ {

// GQuark gtk_builder_error_quark ();
// ::GQuark gtk_builder_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_builder_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace BuilderErrorNS_

namespace ConstraintVflParserErrorNS_ {

// GQuark gtk_constraint_vfl_parser_error_quark ();
// ::GQuark gtk_constraint_vfl_parser_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_constraint_vfl_parser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ConstraintVflParserErrorNS_

namespace DialogErrorNS_ {

// GQuark gtk_dialog_error_quark ();
// ::GQuark gtk_dialog_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_dialog_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace DialogErrorNS_

namespace FileChooserErrorNS_ {

// GQuark gtk_file_chooser_error_quark ();
// ::GQuark gtk_file_chooser_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_file_chooser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace FileChooserErrorNS_

namespace IconThemeErrorNS_ {

// GQuark gtk_icon_theme_error_quark ();
// ::GQuark gtk_icon_theme_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_theme_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace IconThemeErrorNS_

namespace OrderingNS_ {

// GtkOrdering gtk_ordering_from_cmpfunc (int cmpfunc_result);
// ::GtkOrdering gtk_ordering_from_cmpfunc (gint cmpfunc_result);
Gtk::Ordering from_cmpfunc (gint cmpfunc_result) noexcept
{
  typedef ::GtkOrdering (*call_wrap_t) (gint cmpfunc_result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_ordering_from_cmpfunc;
  auto cmpfunc_result_to_c = cmpfunc_result;
  auto _temp_ret = call_wrap_v ((gint) (cmpfunc_result_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace OrderingNS_

namespace PrintErrorNS_ {

// GQuark gtk_print_error_quark ();
// ::GQuark gtk_print_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PrintErrorNS_

namespace RecentManagerErrorNS_ {

// GQuark gtk_recent_manager_error_quark ();
// ::GQuark gtk_recent_manager_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_recent_manager_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace RecentManagerErrorNS_

// GdkModifierType gtk_accelerator_get_default_mod_mask ();
// ::GdkModifierType gtk_accelerator_get_default_mod_mask ();
Gdk::ModifierType accelerator_get_default_mod_mask () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_get_default_mod_mask;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// char* /*full*/ gtk_accelerator_get_label (guint accelerator_key, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_get_label (guint accelerator_key, ::GdkModifierType accelerator_mods);
gi::cstring accelerator_get_label (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (guint accelerator_key, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_get_label;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto accelerator_key_to_c = accelerator_key;
  auto _temp_ret = call_wrap_v ((guint) (accelerator_key_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ gtk_accelerator_get_label_with_keycode (GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_get_label_with_keycode (::GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
gi::cstring accelerator_get_label_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_get_label_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring accelerator_get_label_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_get_label_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ gtk_accelerator_name (guint accelerator_key, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_name (guint accelerator_key, ::GdkModifierType accelerator_mods);
gi::cstring accelerator_name (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (guint accelerator_key, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_name;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto accelerator_key_to_c = accelerator_key;
  auto _temp_ret = call_wrap_v ((guint) (accelerator_key_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ gtk_accelerator_name_with_keycode (GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* /*full*/ gtk_accelerator_name_with_keycode (::GdkDisplay* display /*none,nullable*/, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
gi::cstring accelerator_name_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_name_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring accelerator_name_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_name_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_accelerator_parse (const char* accelerator /*none*/, guint* accelerator_key, GdkModifierType* accelerator_mods);
// gboolean gtk_accelerator_parse (const char* accelerator /*none*/, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
bool accelerator_parse (const gi::cstring_v accelerator, guint * accelerator_key, Gdk::ModifierType * accelerator_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accelerator, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_parse;
  ::GdkModifierType accelerator_mods_o {};
  guint accelerator_key_o {};
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c), (guint*) (accelerator_key ? &accelerator_key_o : nullptr), (::GdkModifierType*) (accelerator_mods ? &accelerator_mods_o : nullptr));
  if (accelerator_mods) *accelerator_mods = gi::wrap (accelerator_mods_o);
  if (accelerator_key) *accelerator_key = accelerator_key_o;
  return _temp_ret;
}
std::tuple<bool, guint, Gdk::ModifierType> accelerator_parse (const gi::cstring_v accelerator) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accelerator, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_parse;
  ::GdkModifierType accelerator_mods_o {};
  guint accelerator_key_o {};
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c), (guint*) (&accelerator_key_o), (::GdkModifierType*) (&accelerator_mods_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = accelerator_key_o;
  auto &&tmp_return_3 = gi::wrap (accelerator_mods_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_accelerator_parse_with_keycode (const char* accelerator /*none*/, GdkDisplay* display /*none,nullable*/, guint* accelerator_key, guint** accelerator_codes /*full,out,opt*/, GdkModifierType* accelerator_mods);
// gboolean gtk_accelerator_parse_with_keycode (const char* accelerator /*none*/, ::GdkDisplay* display /*none,nullable*/, guint* accelerator_key, guint** accelerator_codes /*full,out,opt*/, ::GdkModifierType* accelerator_mods);
bool accelerator_parse_with_keycode (const gi::cstring_v accelerator, Gdk::Display display, guint * accelerator_key, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t> * accelerator_codes, Gdk::ModifierType * accelerator_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accelerator, ::GdkDisplay* display, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_parse_with_keycode;
  ::GdkModifierType accelerator_mods_o {};
  guint* accelerator_codes_o {};
  guint accelerator_key_o {};
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c), (::GdkDisplay*) (display_to_c), (guint*) (accelerator_key ? &accelerator_key_o : nullptr), (guint**) (accelerator_codes ? &accelerator_codes_o : nullptr), (::GdkModifierType*) (accelerator_mods ? &accelerator_mods_o : nullptr));
  if (accelerator_mods) *accelerator_mods = gi::wrap (accelerator_mods_o);
  if (accelerator_codes) *accelerator_codes = gi::wrap_to<gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>>(accelerator_codes_o, gi::transfer_full);
  if (accelerator_key) *accelerator_key = accelerator_key_o;
  return _temp_ret;
}
bool accelerator_parse_with_keycode (const gi::cstring_v accelerator, guint * accelerator_key, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t> * accelerator_codes, Gdk::ModifierType * accelerator_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accelerator, ::GdkDisplay* display, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_parse_with_keycode;
  ::GdkModifierType accelerator_mods_o {};
  guint* accelerator_codes_o {};
  guint accelerator_key_o {};
  auto display_to_c = nullptr;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c), (::GdkDisplay*) (display_to_c), (guint*) (accelerator_key ? &accelerator_key_o : nullptr), (guint**) (accelerator_codes ? &accelerator_codes_o : nullptr), (::GdkModifierType*) (accelerator_mods ? &accelerator_mods_o : nullptr));
  if (accelerator_mods) *accelerator_mods = gi::wrap (accelerator_mods_o);
  if (accelerator_codes) *accelerator_codes = gi::wrap_to<gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>>(accelerator_codes_o, gi::transfer_full);
  if (accelerator_key) *accelerator_key = accelerator_key_o;
  return _temp_ret;
}
std::tuple<bool, guint, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>, Gdk::ModifierType> accelerator_parse_with_keycode (const gi::cstring_v accelerator, Gdk::Display display) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accelerator, ::GdkDisplay* display, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_parse_with_keycode;
  ::GdkModifierType accelerator_mods_o {};
  guint* accelerator_codes_o {};
  guint accelerator_key_o {};
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c), (::GdkDisplay*) (display_to_c), (guint*) (&accelerator_key_o), (guint**) (&accelerator_codes_o), (::GdkModifierType*) (&accelerator_mods_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = accelerator_key_o;
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>>(accelerator_codes_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (accelerator_mods_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}
std::tuple<bool, guint, gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>, Gdk::ModifierType> accelerator_parse_with_keycode (const gi::cstring_v accelerator) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accelerator, ::GdkDisplay* display, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_parse_with_keycode;
  ::GdkModifierType accelerator_mods_o {};
  guint* accelerator_codes_o {};
  guint accelerator_key_o {};
  auto display_to_c = nullptr;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c), (::GdkDisplay*) (display_to_c), (guint*) (&accelerator_key_o), (guint**) (&accelerator_codes_o), (::GdkModifierType*) (&accelerator_mods_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = accelerator_key_o;
  auto &&tmp_return_3 = gi::wrap_to<gi::Collection<gi::ZTSpan, guint, gi::transfer_full_t>>(accelerator_codes_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (accelerator_mods_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gboolean gtk_accelerator_valid (guint keyval, GdkModifierType modifiers);
// gboolean gtk_accelerator_valid (guint keyval, ::GdkModifierType modifiers);
bool accelerator_valid (guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef gboolean (*call_wrap_t) (guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_accelerator_valid;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* /*none,nullable*/ gtk_check_version (guint required_major, guint required_minor, guint required_micro);
gi::cstring_v check_version (guint required_major, guint required_minor, guint required_micro) noexcept
{
  typedef const char* (*call_wrap_t) (guint required_major, guint required_minor, guint required_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_check_version;
  auto required_micro_to_c = required_micro;
  auto required_minor_to_c = required_minor;
  auto required_major_to_c = required_major;
  auto _temp_ret = call_wrap_v ((guint) (required_major_to_c), (guint) (required_minor_to_c), (guint) (required_micro_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GQuark gtk_css_parser_error_quark ();
// ::GQuark gtk_css_parser_error_quark ();
GLib::Quark css_parser_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_parser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GQuark gtk_css_parser_warning_quark ();
// ::GQuark gtk_css_parser_warning_quark ();
GLib::Quark css_parser_warning_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_css_parser_warning_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gtk_disable_setlocale ();
// void gtk_disable_setlocale ();
void disable_setlocale () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_disable_setlocale;
  call_wrap_v ();
}

// int gtk_distribute_natural_allocation (int extra_space, guint n_requested_sizes, GtkRequestedSize* sizes /*none*/);
// gint gtk_distribute_natural_allocation (gint extra_space, guint n_requested_sizes, ::GtkRequestedSize** sizes /*none*/);
// SKIP; sizes in boxed array not supported (depth 1)

// void gtk_enumerate_printers (GtkPrinterFunc func /*none*/, gpointer data, GDestroyNotify destroy /*none*/, gboolean wait);
// void gtk_enumerate_printers (Gtk::PrinterFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none*/, gboolean wait);
void enumerate_printers (Gtk::PrinterFunc func, gboolean wait) noexcept
{
  typedef void (*call_wrap_t) (Gtk::PrinterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy, gboolean wait);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_enumerate_printers;
  auto wait_to_c = wait;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((Gtk::PrinterFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr), (gboolean) (wait_to_c));
}

// guint gtk_get_binary_age ();
// guint gtk_get_binary_age ();
guint get_binary_age () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_binary_age;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GtkDebugFlags gtk_get_debug_flags ();
// ::GtkDebugFlags gtk_get_debug_flags ();
Gtk::DebugFlags get_debug_flags () noexcept
{
  typedef ::GtkDebugFlags (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_debug_flags;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// PangoLanguage* /*none*/ gtk_get_default_language ();
// ::PangoLanguage* /*none*/ gtk_get_default_language ();
Pango::Language_Ref get_default_language () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_default_language;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_get_interface_age ();
// guint gtk_get_interface_age ();
guint get_interface_age () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_interface_age;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GtkTextDirection gtk_get_locale_direction ();
// ::GtkTextDirection gtk_get_locale_direction ();
Gtk::TextDirection get_locale_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_locale_direction;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// guint gtk_get_major_version ();
// guint gtk_get_major_version ();
guint get_major_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_major_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gtk_get_micro_version ();
// guint gtk_get_micro_version ();
guint get_micro_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_micro_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gtk_get_minor_version ();
// guint gtk_get_minor_version ();
guint get_minor_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_get_minor_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gtk_hsv_to_rgb (float h, float s, float v, float* r, float* g, float* b);
// void gtk_hsv_to_rgb (gfloat h, gfloat s, gfloat v, gfloat* r, gfloat* g, gfloat* b);
void hsv_to_rgb (gfloat h, gfloat s, gfloat v, gfloat & r, gfloat & g, gfloat & b) noexcept
{
  typedef void (*call_wrap_t) (gfloat h, gfloat s, gfloat v, gfloat* r, gfloat* g, gfloat* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_hsv_to_rgb;
  gfloat b_o {};
  gfloat g_o {};
  gfloat r_o {};
  auto v_to_c = v;
  auto s_to_c = s;
  auto h_to_c = h;
  call_wrap_v ((gfloat) (h_to_c), (gfloat) (s_to_c), (gfloat) (v_to_c), (gfloat*) (&r_o), (gfloat*) (&g_o), (gfloat*) (&b_o));
  b = b_o;
  g = g_o;
  r = r_o;
}
std::tuple<gfloat, gfloat, gfloat> hsv_to_rgb (gfloat h, gfloat s, gfloat v) noexcept
{
  typedef void (*call_wrap_t) (gfloat h, gfloat s, gfloat v, gfloat* r, gfloat* g, gfloat* b);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_hsv_to_rgb;
  gfloat b_o {};
  gfloat g_o {};
  gfloat r_o {};
  auto v_to_c = v;
  auto s_to_c = s;
  auto h_to_c = h;
  call_wrap_v ((gfloat) (h_to_c), (gfloat) (s_to_c), (gfloat) (v_to_c), (gfloat*) (&r_o), (gfloat*) (&g_o), (gfloat*) (&b_o));
  auto &&tmp_return_1 = r_o;
  auto &&tmp_return_2 = g_o;
  auto &&tmp_return_3 = b_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gtk_init ();
// void gtk_init ();
void init () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_init;
  call_wrap_v ();
}

// gboolean gtk_init_check ();
// gboolean gtk_init_check ();
bool init_check () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_init_check;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gtk_is_initialized ();
// gboolean gtk_is_initialized ();
bool is_initialized () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_is_initialized;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GParamSpec* /*full*/ gtk_param_spec_expression (const char* name /*none*/, const char* nick /*none*/, const char* blurb /*none*/, GParamFlags flags);
// ::GParamSpec* /*full*/ gtk_param_spec_expression (const char* name /*none*/, const char* nick /*none*/, const char* blurb /*none*/, ::GParamFlags flags);
GObject::ParamSpec param_spec_expression (const gi::cstring_v name, const gi::cstring_v nick, const gi::cstring_v blurb, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_param_spec_expression;
  auto flags_to_c = gi::unwrap (flags);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkPageSetup* /*full*/ gtk_print_run_page_setup_dialog (GtkWindow* parent /*none,nullable*/, GtkPageSetup* page_setup /*none,nullable*/, GtkPrintSettings* settings /*none*/);
// ::GtkPageSetup* /*full*/ gtk_print_run_page_setup_dialog (::GtkWindow* parent /*none,nullable*/, ::GtkPageSetup* page_setup /*none,nullable*/, ::GtkPrintSettings* settings /*none*/);
Gtk::PageSetup print_run_page_setup_dialog (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_run_page_setup_dialog;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::PageSetup print_run_page_setup_dialog (Gtk::PrintSettings settings) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_run_page_setup_dialog;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto page_setup_to_c = nullptr;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_print_run_page_setup_dialog_async (GtkWindow* parent /*none,nullable*/, GtkPageSetup* page_setup /*none,nullable*/, GtkPrintSettings* settings /*none*/, GtkPageSetupDoneFunc done_cb /*none*/, gpointer data);
// void gtk_print_run_page_setup_dialog_async (::GtkWindow* parent /*none,nullable*/, ::GtkPageSetup* page_setup /*none,nullable*/, ::GtkPrintSettings* settings /*none*/, Gtk::PageSetupDoneFunc::cfunction_type done_cb /*none*/, void* data);
void print_run_page_setup_dialog_async (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings, Gtk::PageSetupDoneFunc::cfunction_type done_cb, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_run_page_setup_dialog_async;
  auto done_cb_wrap_ = done_cb ? unwrap (std::move (done_cb), gi::scope_async) : nullptr;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c), (Gtk::PageSetupDoneFunc::cfunction_type) (done_cb_wrap_ ? &done_cb_wrap_->wrapper : nullptr), (void*) (done_cb_wrap_));
}
void print_run_page_setup_dialog_async (Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings, Gtk::PageSetupDoneFunc::cfunction_type done_cb, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_print_run_page_setup_dialog_async;
  auto done_cb_wrap_ = done_cb ? unwrap (std::move (done_cb), gi::scope_async) : nullptr;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none);
  auto page_setup_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c), (Gtk::PageSetupDoneFunc::cfunction_type) (done_cb_wrap_ ? &done_cb_wrap_->wrapper : nullptr), (void*) (done_cb_wrap_));
}

// void gtk_render_activity (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_activity (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_activity (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_activity;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_arrow (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double angle, double x, double y, double size);
// void gtk_render_arrow (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble angle, gdouble x, gdouble y, gdouble size);
void render_arrow (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_arrow;
  auto size_to_c = size;
  auto y_to_c = y;
  auto x_to_c = x;
  auto angle_to_c = angle;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (angle_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (size_to_c));
}

// void gtk_render_background (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_background (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_background (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_background;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_check (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_check (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_check (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_check;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_expander (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_expander (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_expander (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_expander;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_focus (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_focus (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_focus (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_focus;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_frame (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_frame (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_frame (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_frame;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_handle (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_handle (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_handle (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_handle;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_icon (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, GdkTexture* texture /*none*/, double x, double y);
// void gtk_render_icon (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, ::GdkTexture* texture /*none*/, gdouble x, gdouble y);
void render_icon (Gtk::StyleContext context, cairo::Context_Ref cr, Gdk::Texture texture, gdouble x, gdouble y) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, ::GdkTexture* texture, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_icon;
  auto y_to_c = y;
  auto x_to_c = x;
  auto texture_to_c = gi::unwrap (texture, gi::transfer_none);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (::GdkTexture*) (texture_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void gtk_render_layout (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, PangoLayout* layout /*none*/);
// void gtk_render_layout (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, ::PangoLayout* layout /*none*/);
void render_layout (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none);
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (::PangoLayout*) (layout_to_c));
}

// void gtk_render_line (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x0, double y0, double x1, double y1);
// void gtk_render_line (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
void render_line (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_line;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  auto y0_to_c = y0;
  auto x0_to_c = x0;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x0_to_c), (gdouble) (y0_to_c), (gdouble) (x1_to_c), (gdouble) (y1_to_c));
}

// void gtk_render_option (GtkStyleContext* context /*none*/, cairo_t* cr /*none*/, double x, double y, double width, double height);
// void gtk_render_option (::GtkStyleContext* context /*none*/, ::cairo_t* cr /*none*/, gdouble x, gdouble y, gdouble width, gdouble height);
void render_option (Gtk::StyleContext context, cairo::Context_Ref cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_render_option;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_rgb_to_hsv (float r, float g, float b, float* h, float* s, float* v);
// void gtk_rgb_to_hsv (gfloat r, gfloat g, gfloat b, gfloat* h, gfloat* s, gfloat* v);
void rgb_to_hsv (gfloat r, gfloat g, gfloat b, gfloat & h, gfloat & s, gfloat & v) noexcept
{
  typedef void (*call_wrap_t) (gfloat r, gfloat g, gfloat b, gfloat* h, gfloat* s, gfloat* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_rgb_to_hsv;
  gfloat v_o {};
  gfloat s_o {};
  gfloat h_o {};
  auto b_to_c = b;
  auto g_to_c = g;
  auto r_to_c = r;
  call_wrap_v ((gfloat) (r_to_c), (gfloat) (g_to_c), (gfloat) (b_to_c), (gfloat*) (&h_o), (gfloat*) (&s_o), (gfloat*) (&v_o));
  v = v_o;
  s = s_o;
  h = h_o;
}
std::tuple<gfloat, gfloat, gfloat> rgb_to_hsv (gfloat r, gfloat g, gfloat b) noexcept
{
  typedef void (*call_wrap_t) (gfloat r, gfloat g, gfloat b, gfloat* h, gfloat* s, gfloat* v);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_rgb_to_hsv;
  gfloat v_o {};
  gfloat s_o {};
  gfloat h_o {};
  auto b_to_c = b;
  auto g_to_c = g;
  auto r_to_c = r;
  call_wrap_v ((gfloat) (r_to_c), (gfloat) (g_to_c), (gfloat) (b_to_c), (gfloat*) (&h_o), (gfloat*) (&s_o), (gfloat*) (&v_o));
  auto &&tmp_return_1 = h_o;
  auto &&tmp_return_2 = s_o;
  auto &&tmp_return_3 = v_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gtk_set_debug_flags (GtkDebugFlags flags);
// void gtk_set_debug_flags (::GtkDebugFlags flags);
void set_debug_flags (Gtk::DebugFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkDebugFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_set_debug_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkDebugFlags) (flags_to_c));
}

// void gtk_show_about_dialog (GtkWindow* parent /*none,nullable*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// void gtk_show_about_dialog (::GtkWindow* parent /*none,nullable*/, const char* first_property_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_show_uri (GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp);
// void gtk_show_uri (::GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp);
void show_uri (Gtk::Window parent, const gi::cstring_v uri, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_show_uri;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c));
}
void show_uri (const gi::cstring_v uri, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_show_uri;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c));
}

// void gtk_show_uri_full (GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void gtk_show_uri_full (::GtkWindow* parent /*none,nullable*/, const char* uri /*none*/, guint32 timestamp, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void show_uri_full (Gtk::Window parent, const gi::cstring_v uri, guint32 timestamp, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_show_uri_full;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void show_uri_full (const gi::cstring_v uri, guint32 timestamp, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_show_uri_full;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean gtk_show_uri_full_finish (GtkWindow* parent /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean gtk_show_uri_full_finish (::GtkWindow* parent /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool show_uri_full_finish (Gtk::Window parent, Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* parent, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_show_uri_full_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool show_uri_full_finish (Gtk::Window parent, Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* parent, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_show_uri_full_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void gtk_test_accessible_assertion_message_role (const char* domain /*none*/, const char* file /*none*/, int line, const char* func /*none*/, const char* expr /*none*/, GtkAccessible* accessible /*none*/, GtkAccessibleRole expected_role, GtkAccessibleRole actual_role);
// void gtk_test_accessible_assertion_message_role (const char* domain /*none*/, const char* file /*none*/, gint line, const char* func /*none*/, const char* expr /*none*/, ::GtkAccessible* accessible /*none*/, ::GtkAccessibleRole expected_role, ::GtkAccessibleRole actual_role);
void test_accessible_assertion_message_role (const gi::cstring_v domain, const gi::cstring_v file, gint line, const gi::cstring_v func, const gi::cstring_v expr, Gtk::Accessible accessible, Gtk::AccessibleRole expected_role, Gtk::AccessibleRole actual_role) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr, ::GtkAccessible* accessible, ::GtkAccessibleRole expected_role, ::GtkAccessibleRole actual_role);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_accessible_assertion_message_role;
  auto actual_role_to_c = gi::unwrap (actual_role);
  auto expected_role_to_c = gi::unwrap (expected_role);
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none);
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none);
  auto func_to_c = gi::unwrap (func, gi::transfer_none);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c), (::GtkAccessible*) (accessible_to_c), (::GtkAccessibleRole) (expected_role_to_c), (::GtkAccessibleRole) (actual_role_to_c));
}

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
bool test_accessible_has_property (Gtk::Accessible accessible, Gtk::AccessibleProperty property) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* accessible, ::GtkAccessibleProperty property);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_accessible_has_property;
  auto property_to_c = gi::unwrap (property);
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (accessible_to_c), (::GtkAccessibleProperty) (property_to_c));
  return _temp_ret;
}

// gboolean gtk_test_accessible_has_relation (GtkAccessible* accessible /*none*/, GtkAccessibleRelation relation);
// gboolean gtk_test_accessible_has_relation (::GtkAccessible* accessible /*none*/, ::GtkAccessibleRelation relation);
bool test_accessible_has_relation (Gtk::Accessible accessible, Gtk::AccessibleRelation relation) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* accessible, ::GtkAccessibleRelation relation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_accessible_has_relation;
  auto relation_to_c = gi::unwrap (relation);
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (accessible_to_c), (::GtkAccessibleRelation) (relation_to_c));
  return _temp_ret;
}

// gboolean gtk_test_accessible_has_role (GtkAccessible* accessible /*none*/, GtkAccessibleRole role);
// gboolean gtk_test_accessible_has_role (::GtkAccessible* accessible /*none*/, ::GtkAccessibleRole role);
bool test_accessible_has_role (Gtk::Accessible accessible, Gtk::AccessibleRole role) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* accessible, ::GtkAccessibleRole role);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_accessible_has_role;
  auto role_to_c = gi::unwrap (role);
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (accessible_to_c), (::GtkAccessibleRole) (role_to_c));
  return _temp_ret;
}

// gboolean gtk_test_accessible_has_state (GtkAccessible* accessible /*none*/, GtkAccessibleState state);
// gboolean gtk_test_accessible_has_state (::GtkAccessible* accessible /*none*/, ::GtkAccessibleState state);
bool test_accessible_has_state (Gtk::Accessible accessible, Gtk::AccessibleState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccessible* accessible, ::GtkAccessibleState state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_accessible_has_state;
  auto state_to_c = gi::unwrap (state);
  auto accessible_to_c = gi::unwrap (accessible, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (accessible_to_c), (::GtkAccessibleState) (state_to_c));
  return _temp_ret;
}

// void gtk_test_init (int* argcp, char*** argvp /*full,inout*/,  ..._ /*none*/);
// void gtk_test_init (gint* argcp, char*** argvp /*full,inout*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// const GType* /*none*/ gtk_test_list_all_types (guint* n_types);
// const GType* /*none*/ gtk_test_list_all_types (guint* n_types);
gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t> test_list_all_types (guint & n_types) noexcept
{
  typedef const GType* (*call_wrap_t) (guint* n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_list_all_types;
  guint n_types_o {};
  auto _temp_ret = call_wrap_v ((guint*) (&n_types_o));
  n_types = n_types_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}
std::tuple<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>, guint> test_list_all_types () noexcept
{
  typedef const GType* (*call_wrap_t) (guint* n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_list_all_types;
  guint n_types_o {};
  auto _temp_ret = call_wrap_v ((guint*) (&n_types_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = n_types_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_test_register_all_types ();
// void gtk_test_register_all_types ();
void test_register_all_types () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_register_all_types;
  call_wrap_v ();
}

// void gtk_test_widget_wait_for_draw (GtkWidget* widget /*none*/);
// void gtk_test_widget_wait_for_draw (::GtkWidget* widget /*none*/);
void test_widget_wait_for_draw (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_test_widget_wait_for_draw;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkWidget*) (widget_to_c));
}

// GdkContentProvider* /*full*/ gtk_tree_create_row_drag_content (GtkTreeModel* tree_model /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full*/ gtk_tree_create_row_drag_content (::GtkTreeModel* tree_model /*none*/, ::GtkTreePath* path /*none*/);
Gdk::ContentProvider tree_create_row_drag_content (Gtk::TreeModel tree_model, Gtk::TreePath_Ref path) noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_create_row_drag_content;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (tree_model_to_c), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_tree_get_row_drag_data (const GValue* value /*none*/, GtkTreeModel** tree_model /*none,out,opt,nullable*/, GtkTreePath** path /*full,out,opt,nullable*/);
// gboolean gtk_tree_get_row_drag_data (const ::GValue* value /*none*/, ::GtkTreeModel** tree_model /*none,out,opt,nullable*/, ::GtkTreePath** path /*full,out,opt,nullable*/);
bool tree_get_row_drag_data (const GObject::Value_Ref value, Gtk::TreeModel * tree_model, Gtk::TreePath * path) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value, ::GtkTreeModel** tree_model, ::GtkTreePath** path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_get_row_drag_data;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* tree_model_o {};
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c), (::GtkTreeModel**) (tree_model ? &tree_model_o : nullptr), (::GtkTreePath**) (path ? &path_o : nullptr));
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  if (tree_model) *tree_model = gi::wrap (tree_model_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreePath> tree_get_row_drag_data (const GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value, ::GtkTreeModel** tree_model, ::GtkTreePath** path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_get_row_drag_data;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* tree_model_o {};
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c), (::GtkTreeModel**) (&tree_model_o), (::GtkTreePath**) (&path_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (tree_model_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

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
