// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWROW_IMPL_HPP_
#define _GI_GTK_COLUMNVIEWROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// const char* /*none*/ gtk_column_view_row_get_accessible_description (GtkColumnViewRow* self /*none*/);
// const char* /*none*/ gtk_column_view_row_get_accessible_description (::GtkColumnViewRow* self /*none*/);
gi::cstring_v base::ColumnViewRowBase::get_accessible_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_accessible_description;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_column_view_row_get_accessible_label (GtkColumnViewRow* self /*none*/);
// const char* /*none*/ gtk_column_view_row_get_accessible_label (::GtkColumnViewRow* self /*none*/);
gi::cstring_v base::ColumnViewRowBase::get_accessible_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_accessible_label;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_row_get_activatable (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_activatable (::GtkColumnViewRow* self /*none*/);
bool base::ColumnViewRowBase::get_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_activatable;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_column_view_row_get_focusable (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_focusable (::GtkColumnViewRow* self /*none*/);
bool base::ColumnViewRowBase::get_focusable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_focusable;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ gtk_column_view_row_get_item (GtkColumnViewRow* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_column_view_row_get_item (::GtkColumnViewRow* self /*none*/);
GObject::Object base::ColumnViewRowBase::get_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_item;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_column_view_row_get_position (GtkColumnViewRow* self /*none*/);
// guint gtk_column_view_row_get_position (::GtkColumnViewRow* self /*none*/);
guint base::ColumnViewRowBase::get_position () noexcept
{
  typedef guint (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_position;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_column_view_row_get_selectable (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_selectable (::GtkColumnViewRow* self /*none*/);
bool base::ColumnViewRowBase::get_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_selectable;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_column_view_row_get_selected (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_selected (::GtkColumnViewRow* self /*none*/);
bool base::ColumnViewRowBase::get_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_get_selected;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewRow*) (gobj_()));
  return _temp_ret;
}

// void gtk_column_view_row_set_accessible_description (GtkColumnViewRow* self /*none*/, const char* description /*none*/);
// void gtk_column_view_row_set_accessible_description (::GtkColumnViewRow* self /*none*/, const char* description /*none*/);
void base::ColumnViewRowBase::set_accessible_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewRow* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_set_accessible_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewRow*) (gobj_()), (const char*) (description_to_c));
}

// void gtk_column_view_row_set_accessible_label (GtkColumnViewRow* self /*none*/, const char* label /*none*/);
// void gtk_column_view_row_set_accessible_label (::GtkColumnViewRow* self /*none*/, const char* label /*none*/);
void base::ColumnViewRowBase::set_accessible_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewRow* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_set_accessible_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewRow*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_column_view_row_set_activatable (GtkColumnViewRow* self /*none*/, gboolean activatable);
// void gtk_column_view_row_set_activatable (::GtkColumnViewRow* self /*none*/, gboolean activatable);
void base::ColumnViewRowBase::set_activatable (gboolean activatable) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewRow* self, gboolean activatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_set_activatable;
  auto activatable_to_c = activatable;
  call_wrap_v ((::GtkColumnViewRow*) (gobj_()), (gboolean) (activatable_to_c));
}

// void gtk_column_view_row_set_focusable (GtkColumnViewRow* self /*none*/, gboolean focusable);
// void gtk_column_view_row_set_focusable (::GtkColumnViewRow* self /*none*/, gboolean focusable);
void base::ColumnViewRowBase::set_focusable (gboolean focusable) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewRow* self, gboolean focusable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_set_focusable;
  auto focusable_to_c = focusable;
  call_wrap_v ((::GtkColumnViewRow*) (gobj_()), (gboolean) (focusable_to_c));
}

// void gtk_column_view_row_set_selectable (GtkColumnViewRow* self /*none*/, gboolean selectable);
// void gtk_column_view_row_set_selectable (::GtkColumnViewRow* self /*none*/, gboolean selectable);
void base::ColumnViewRowBase::set_selectable (gboolean selectable) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewRow* self, gboolean selectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_row_set_selectable;
  auto selectable_to_c = selectable;
  call_wrap_v ((::GtkColumnViewRow*) (gobj_()), (gboolean) (selectable_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewrow_extra_def_impl.hpp>)
#include <gtk/columnviewrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewrow_extra_impl.hpp>)
#include <gtk/columnviewrow_extra_impl.hpp>
#endif
#endif

#endif
