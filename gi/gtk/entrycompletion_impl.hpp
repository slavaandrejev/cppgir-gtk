// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYCOMPLETION_IMPL_HPP_
#define _GI_GTK_ENTRYCOMPLETION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable EntryCompletionBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EntryCompletionBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

Gtk::CellLayout EntryCompletionBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EntryCompletionBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

// GtkEntryCompletion* /*full*/ gtk_entry_completion_new ();
// ::GtkEntryCompletion* /*full*/ gtk_entry_completion_new ();
Gtk::EntryCompletion base::EntryCompletionBase::new_ () noexcept
{
  typedef ::GtkEntryCompletion* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkEntryCompletion* /*full*/ gtk_entry_completion_new_with_area (GtkCellArea* area /*none*/);
// ::GtkEntryCompletion* /*full*/ gtk_entry_completion_new_with_area (::GtkCellArea* area /*none*/);
Gtk::EntryCompletion base::EntryCompletionBase::new_with_area (Gtk::CellArea area) noexcept
{
  typedef ::GtkEntryCompletion* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_completion_new_with_area;
  auto area_to_c = gi::unwrap (area, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_entry_completion_complete (GtkEntryCompletion* completion /*none*/);
// void gtk_entry_completion_complete (::GtkEntryCompletion* completion /*none*/);
void base::EntryCompletionBase::complete () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_complete;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
}

// char* /*full,nullable*/ gtk_entry_completion_compute_prefix (GtkEntryCompletion* completion /*none*/, const char* key /*none*/);
// char* /*full,nullable*/ gtk_entry_completion_compute_prefix (::GtkEntryCompletion* completion /*none*/, const char* key /*none*/);
gi::cstring base::EntryCompletionBase::compute_prefix (const gi::cstring_v key) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEntryCompletion* completion, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_compute_prefix;
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none,nullable*/ gtk_entry_completion_get_completion_prefix (GtkEntryCompletion* completion /*none*/);
// const char* /*none,nullable*/ gtk_entry_completion_get_completion_prefix (::GtkEntryCompletion* completion /*none*/);
gi::cstring_v base::EntryCompletionBase::get_completion_prefix () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_completion_prefix;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_entry_completion_get_entry (GtkEntryCompletion* completion /*none*/);
// ::GtkWidget* /*none*/ gtk_entry_completion_get_entry (::GtkEntryCompletion* completion /*none*/);
Gtk::Widget base::EntryCompletionBase::get_entry () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_entry;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_entry_completion_get_inline_completion (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_inline_completion (::GtkEntryCompletion* completion /*none*/);
bool base::EntryCompletionBase::get_inline_completion () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_inline_completion;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_completion_get_inline_selection (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_inline_selection (::GtkEntryCompletion* completion /*none*/);
bool base::EntryCompletionBase::get_inline_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_inline_selection;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// int gtk_entry_completion_get_minimum_key_length (GtkEntryCompletion* completion /*none*/);
// gint gtk_entry_completion_get_minimum_key_length (::GtkEntryCompletion* completion /*none*/);
gint base::EntryCompletionBase::get_minimum_key_length () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_minimum_key_length;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* /*none,nullable*/ gtk_entry_completion_get_model (GtkEntryCompletion* completion /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_entry_completion_get_model (::GtkEntryCompletion* completion /*none*/);
Gtk::TreeModel base::EntryCompletionBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_model;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_entry_completion_get_popup_completion (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_popup_completion (::GtkEntryCompletion* completion /*none*/);
bool base::EntryCompletionBase::get_popup_completion () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_popup_completion;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_completion_get_popup_set_width (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_popup_set_width (::GtkEntryCompletion* completion /*none*/);
bool base::EntryCompletionBase::get_popup_set_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_popup_set_width;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_completion_get_popup_single_match (GtkEntryCompletion* completion /*none*/);
// gboolean gtk_entry_completion_get_popup_single_match (::GtkEntryCompletion* completion /*none*/);
bool base::EntryCompletionBase::get_popup_single_match () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_popup_single_match;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// int gtk_entry_completion_get_text_column (GtkEntryCompletion* completion /*none*/);
// gint gtk_entry_completion_get_text_column (::GtkEntryCompletion* completion /*none*/);
gint base::EntryCompletionBase::get_text_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_get_text_column;
  auto _temp_ret = call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
  return _temp_ret;
}

// void gtk_entry_completion_insert_prefix (GtkEntryCompletion* completion /*none*/);
// void gtk_entry_completion_insert_prefix (::GtkEntryCompletion* completion /*none*/);
void base::EntryCompletionBase::insert_prefix () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_insert_prefix;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()));
}

// void gtk_entry_completion_set_inline_completion (GtkEntryCompletion* completion /*none*/, gboolean inline_completion);
// void gtk_entry_completion_set_inline_completion (::GtkEntryCompletion* completion /*none*/, gboolean inline_completion);
void base::EntryCompletionBase::set_inline_completion (gboolean inline_completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean inline_completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_inline_completion;
  auto inline_completion_to_c = inline_completion;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (inline_completion_to_c));
}

// void gtk_entry_completion_set_inline_selection (GtkEntryCompletion* completion /*none*/, gboolean inline_selection);
// void gtk_entry_completion_set_inline_selection (::GtkEntryCompletion* completion /*none*/, gboolean inline_selection);
void base::EntryCompletionBase::set_inline_selection (gboolean inline_selection) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean inline_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_inline_selection;
  auto inline_selection_to_c = inline_selection;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (inline_selection_to_c));
}

// void gtk_entry_completion_set_match_func (GtkEntryCompletion* completion /*none*/, GtkEntryCompletionMatchFunc func /*none*/, gpointer func_data, GDestroyNotify func_notify /*none*/);
// void gtk_entry_completion_set_match_func (::GtkEntryCompletion* completion /*none*/, Gtk::EntryCompletionMatchFunc::cfunction_type func /*none*/, void* func_data, GLib::DestroyNotify::cfunction_type func_notify /*none*/);
void base::EntryCompletionBase::set_match_func (Gtk::EntryCompletionMatchFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, Gtk::EntryCompletionMatchFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type func_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_match_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (Gtk::EntryCompletionMatchFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_entry_completion_set_minimum_key_length (GtkEntryCompletion* completion /*none*/, int length);
// void gtk_entry_completion_set_minimum_key_length (::GtkEntryCompletion* completion /*none*/, gint length);
void base::EntryCompletionBase::set_minimum_key_length (gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_minimum_key_length;
  auto length_to_c = length;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (length_to_c));
}

// void gtk_entry_completion_set_model (GtkEntryCompletion* completion /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_entry_completion_set_model (::GtkEntryCompletion* completion /*none*/, ::GtkTreeModel* model /*none,nullable*/);
void base::EntryCompletionBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::EntryCompletionBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_entry_completion_set_popup_completion (GtkEntryCompletion* completion /*none*/, gboolean popup_completion);
// void gtk_entry_completion_set_popup_completion (::GtkEntryCompletion* completion /*none*/, gboolean popup_completion);
void base::EntryCompletionBase::set_popup_completion (gboolean popup_completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean popup_completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_popup_completion;
  auto popup_completion_to_c = popup_completion;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (popup_completion_to_c));
}

// void gtk_entry_completion_set_popup_set_width (GtkEntryCompletion* completion /*none*/, gboolean popup_set_width);
// void gtk_entry_completion_set_popup_set_width (::GtkEntryCompletion* completion /*none*/, gboolean popup_set_width);
void base::EntryCompletionBase::set_popup_set_width (gboolean popup_set_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean popup_set_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_popup_set_width;
  auto popup_set_width_to_c = popup_set_width;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (popup_set_width_to_c));
}

// void gtk_entry_completion_set_popup_single_match (GtkEntryCompletion* completion /*none*/, gboolean popup_single_match);
// void gtk_entry_completion_set_popup_single_match (::GtkEntryCompletion* completion /*none*/, gboolean popup_single_match);
void base::EntryCompletionBase::set_popup_single_match (gboolean popup_single_match) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gboolean popup_single_match);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_popup_single_match;
  auto popup_single_match_to_c = popup_single_match;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gboolean) (popup_single_match_to_c));
}

// void gtk_entry_completion_set_text_column (GtkEntryCompletion* completion /*none*/, int column);
// void gtk_entry_completion_set_text_column (::GtkEntryCompletion* completion /*none*/, gint column);
void base::EntryCompletionBase::set_text_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryCompletion* completion, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_completion_set_text_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkEntryCompletion*) (gobj_()), (gint) (column_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra_def_impl.hpp>)
#include <gtk/entrycompletion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra_impl.hpp>)
#include <gtk/entrycompletion_extra_impl.hpp>
#endif
#endif

#endif
