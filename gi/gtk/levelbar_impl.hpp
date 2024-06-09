// AUTO-GENERATED

#ifndef _GI_GTK_LEVELBAR_IMPL_HPP_
#define _GI_GTK_LEVELBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AccessibleRange LevelBarBase::interface_ (gi::interface_tag<Gtk::AccessibleRange>)
{ return gi::wrap ((Gtk::AccessibleRange::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

LevelBarBase::operator Gtk::AccessibleRange ()
{ return interface_ (gi::interface_tag<Gtk::AccessibleRange>()); }

Gtk::Orientable LevelBarBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

LevelBarBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_level_bar_new ();
// ::GtkLevelBar* /*none*/ gtk_level_bar_new ();
Gtk::LevelBar base::LevelBarBase::new_ () noexcept
{
  typedef ::GtkLevelBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_level_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_level_bar_new_for_interval (double min_value, double max_value);
// ::GtkLevelBar* /*none*/ gtk_level_bar_new_for_interval (gdouble min_value, gdouble max_value);
Gtk::LevelBar base::LevelBarBase::new_for_interval (gdouble min_value, gdouble max_value) noexcept
{
  typedef ::GtkLevelBar* (*call_wrap_t) (gdouble min_value, gdouble max_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_level_bar_new_for_interval;
  auto max_value_to_c = max_value;
  auto min_value_to_c = min_value;
  auto _temp_ret = call_wrap_v ((gdouble) (min_value_to_c), (gdouble) (max_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_level_bar_add_offset_value (GtkLevelBar* self /*none*/, const char* name /*none*/, double value);
// void gtk_level_bar_add_offset_value (::GtkLevelBar* self /*none*/, const char* name /*none*/, gdouble value);
void base::LevelBarBase::add_offset_value (const gi::cstring_v name, gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, const char* name, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_add_offset_value;
  auto value_to_c = value;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c), (gdouble) (value_to_c));
}

// gboolean gtk_level_bar_get_inverted (GtkLevelBar* self /*none*/);
// gboolean gtk_level_bar_get_inverted (::GtkLevelBar* self /*none*/);
bool base::LevelBarBase::get_inverted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLevelBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_inverted;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()));
  return _temp_ret;
}

// double gtk_level_bar_get_max_value (GtkLevelBar* self /*none*/);
// gdouble gtk_level_bar_get_max_value (::GtkLevelBar* self /*none*/);
gdouble base::LevelBarBase::get_max_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkLevelBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_max_value;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()));
  return _temp_ret;
}

// double gtk_level_bar_get_min_value (GtkLevelBar* self /*none*/);
// gdouble gtk_level_bar_get_min_value (::GtkLevelBar* self /*none*/);
gdouble base::LevelBarBase::get_min_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkLevelBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_min_value;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()));
  return _temp_ret;
}

// GtkLevelBarMode gtk_level_bar_get_mode (GtkLevelBar* self /*none*/);
// ::GtkLevelBarMode gtk_level_bar_get_mode (::GtkLevelBar* self /*none*/);
Gtk::LevelBarMode base::LevelBarBase::get_mode () noexcept
{
  typedef ::GtkLevelBarMode (*call_wrap_t) (::GtkLevelBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_mode;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_level_bar_get_offset_value (GtkLevelBar* self /*none*/, const char* name /*none,nullable*/, double* value);
// gboolean gtk_level_bar_get_offset_value (::GtkLevelBar* self /*none*/, const char* name /*none,nullable*/, gdouble* value);
bool base::LevelBarBase::get_offset_value (const gi::cstring_v name, gdouble & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLevelBar* self, const char* name, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_offset_value;
  gdouble value_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
bool base::LevelBarBase::get_offset_value (gdouble & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLevelBar* self, const char* name, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_offset_value;
  gdouble value_o {};
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::LevelBarBase::get_offset_value (const gi::cstring_v name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLevelBar* self, const char* name, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_offset_value;
  gdouble value_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c), (gdouble*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gdouble> base::LevelBarBase::get_offset_value () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLevelBar* self, const char* name, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_offset_value;
  gdouble value_o {};
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c), (gdouble*) (&value_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = value_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// double gtk_level_bar_get_value (GtkLevelBar* self /*none*/);
// gdouble gtk_level_bar_get_value (::GtkLevelBar* self /*none*/);
gdouble base::LevelBarBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkLevelBar* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_get_value;
  auto _temp_ret = call_wrap_v ((::GtkLevelBar*) (gobj_()));
  return _temp_ret;
}

// void gtk_level_bar_remove_offset_value (GtkLevelBar* self /*none*/, const char* name /*none,nullable*/);
// void gtk_level_bar_remove_offset_value (::GtkLevelBar* self /*none*/, const char* name /*none,nullable*/);
void base::LevelBarBase::remove_offset_value (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_remove_offset_value;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c));
}
void base::LevelBarBase::remove_offset_value () noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_remove_offset_value;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_level_bar_set_inverted (GtkLevelBar* self /*none*/, gboolean inverted);
// void gtk_level_bar_set_inverted (::GtkLevelBar* self /*none*/, gboolean inverted);
void base::LevelBarBase::set_inverted (gboolean inverted) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, gboolean inverted);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_set_inverted;
  auto inverted_to_c = inverted;
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (gboolean) (inverted_to_c));
}

// void gtk_level_bar_set_max_value (GtkLevelBar* self /*none*/, double value);
// void gtk_level_bar_set_max_value (::GtkLevelBar* self /*none*/, gdouble value);
void base::LevelBarBase::set_max_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_set_max_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (gdouble) (value_to_c));
}

// void gtk_level_bar_set_min_value (GtkLevelBar* self /*none*/, double value);
// void gtk_level_bar_set_min_value (::GtkLevelBar* self /*none*/, gdouble value);
void base::LevelBarBase::set_min_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_set_min_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (gdouble) (value_to_c));
}

// void gtk_level_bar_set_mode (GtkLevelBar* self /*none*/, GtkLevelBarMode mode);
// void gtk_level_bar_set_mode (::GtkLevelBar* self /*none*/, ::GtkLevelBarMode mode);
void base::LevelBarBase::set_mode (Gtk::LevelBarMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, ::GtkLevelBarMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_set_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (::GtkLevelBarMode) (mode_to_c));
}

// void gtk_level_bar_set_value (GtkLevelBar* self /*none*/, double value);
// void gtk_level_bar_set_value (::GtkLevelBar* self /*none*/, gdouble value);
void base::LevelBarBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkLevelBar* self, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_level_bar_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkLevelBar*) (gobj_()), (gdouble) (value_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/levelbar_extra_def_impl.hpp>)
#include <gtk/levelbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/levelbar_extra_impl.hpp>)
#include <gtk/levelbar_extra_impl.hpp>
#endif
#endif

#endif
