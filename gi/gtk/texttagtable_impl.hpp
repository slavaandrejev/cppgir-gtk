// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAGTABLE_IMPL_HPP_
#define _GI_GTK_TEXTTAGTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable TextTagTableBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TextTagTableBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkTextTagTable* /*full*/ gtk_text_tag_table_new ();
// ::GtkTextTagTable* /*full*/ gtk_text_tag_table_new ();
Gtk::TextTagTable base::TextTagTableBase::new_ () noexcept
{
  typedef ::GtkTextTagTable* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_text_tag_table_add (GtkTextTagTable* table /*none*/, GtkTextTag* tag /*none*/);
// gboolean gtk_text_tag_table_add (::GtkTextTagTable* table /*none*/, ::GtkTextTag* tag /*none*/);
bool base::TextTagTableBase::add (Gtk::TextTag tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_table_add;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// void gtk_text_tag_table_foreach (GtkTextTagTable* table /*none*/, GtkTextTagTableForeach func /*none*/, gpointer data);
// void gtk_text_tag_table_foreach (::GtkTextTagTable* table /*none*/, Gtk::TextTagTableForeach::cfunction_type func /*none*/, void* data);
void base::TextTagTableBase::foreach (Gtk::TextTagTableForeach func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, Gtk::TextTagTableForeach::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_table_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (Gtk::TextTagTableForeach::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// int gtk_text_tag_table_get_size (GtkTextTagTable* table /*none*/);
// gint gtk_text_tag_table_get_size (::GtkTextTagTable* table /*none*/);
gint base::TextTagTableBase::get_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextTagTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_table_get_size;
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (gobj_()));
  return _temp_ret;
}

// GtkTextTag* /*none,nullable*/ gtk_text_tag_table_lookup (GtkTextTagTable* table /*none*/, const char* name /*none*/);
// ::GtkTextTag* /*none,nullable*/ gtk_text_tag_table_lookup (::GtkTextTagTable* table /*none*/, const char* name /*none*/);
Gtk::TextTag base::TextTagTableBase::lookup (const gi::cstring_v name) noexcept
{
  typedef ::GtkTextTag* (*call_wrap_t) (::GtkTextTagTable* table, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_table_lookup;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_text_tag_table_remove (GtkTextTagTable* table /*none*/, GtkTextTag* tag /*none*/);
// void gtk_text_tag_table_remove (::GtkTextTagTable* table /*none*/, ::GtkTextTag* tag /*none*/);
void base::TextTagTableBase::remove (Gtk::TextTag tag) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_table_remove;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra_def_impl.hpp>)
#include <gtk/texttagtable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra_impl.hpp>)
#include <gtk/texttagtable_extra_impl.hpp>
#endif
#endif

#endif
