// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOXROW_IMPL_HPP_
#define _GI_GTK_LISTBOXROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable ListBoxRowBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ListBoxRowBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkWidget* /*none*/ gtk_list_box_row_new ();
// ::GtkListBoxRow* /*none*/ gtk_list_box_row_new ();
Gtk::ListBoxRow base::ListBoxRowBase::new_ () noexcept
{
  typedef ::GtkListBoxRow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_list_box_row_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_list_box_row_changed (GtkListBoxRow* row /*none*/);
// void gtk_list_box_row_changed (::GtkListBoxRow* row /*none*/);
void base::ListBoxRowBase::changed () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_changed;
  call_wrap_v ((::GtkListBoxRow*) (gobj_()));
}

// gboolean gtk_list_box_row_get_activatable (GtkListBoxRow* row /*none*/);
// gboolean gtk_list_box_row_get_activatable (::GtkListBoxRow* row /*none*/);
bool base::ListBoxRowBase::get_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_get_activatable;
  auto _temp_ret = call_wrap_v ((::GtkListBoxRow*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_list_box_row_get_child (GtkListBoxRow* row /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_box_row_get_child (::GtkListBoxRow* row /*none*/);
Gtk::Widget base::ListBoxRowBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_get_child;
  auto _temp_ret = call_wrap_v ((::GtkListBoxRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_list_box_row_get_header (GtkListBoxRow* row /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_box_row_get_header (::GtkListBoxRow* row /*none*/);
Gtk::Widget base::ListBoxRowBase::get_header () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_get_header;
  auto _temp_ret = call_wrap_v ((::GtkListBoxRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_list_box_row_get_index (GtkListBoxRow* row /*none*/);
// gint gtk_list_box_row_get_index (::GtkListBoxRow* row /*none*/);
gint base::ListBoxRowBase::get_index () noexcept
{
  typedef gint (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_get_index;
  auto _temp_ret = call_wrap_v ((::GtkListBoxRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_list_box_row_get_selectable (GtkListBoxRow* row /*none*/);
// gboolean gtk_list_box_row_get_selectable (::GtkListBoxRow* row /*none*/);
bool base::ListBoxRowBase::get_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_get_selectable;
  auto _temp_ret = call_wrap_v ((::GtkListBoxRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_list_box_row_is_selected (GtkListBoxRow* row /*none*/);
// gboolean gtk_list_box_row_is_selected (::GtkListBoxRow* row /*none*/);
bool base::ListBoxRowBase::is_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_is_selected;
  auto _temp_ret = call_wrap_v ((::GtkListBoxRow*) (gobj_()));
  return _temp_ret;
}

// void gtk_list_box_row_set_activatable (GtkListBoxRow* row /*none*/, gboolean activatable);
// void gtk_list_box_row_set_activatable (::GtkListBoxRow* row /*none*/, gboolean activatable);
void base::ListBoxRowBase::set_activatable (gboolean activatable) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row, gboolean activatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_set_activatable;
  auto activatable_to_c = activatable;
  call_wrap_v ((::GtkListBoxRow*) (gobj_()), (gboolean) (activatable_to_c));
}

// void gtk_list_box_row_set_child (GtkListBoxRow* row /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_list_box_row_set_child (::GtkListBoxRow* row /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ListBoxRowBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkListBoxRow*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ListBoxRowBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkListBoxRow*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_list_box_row_set_header (GtkListBoxRow* row /*none*/, GtkWidget* header /*none,nullable*/);
// void gtk_list_box_row_set_header (::GtkListBoxRow* row /*none*/, ::GtkWidget* header /*none,nullable*/);
void base::ListBoxRowBase::set_header (Gtk::Widget header) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row, ::GtkWidget* header);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_set_header;
  auto header_to_c = gi::unwrap (header, gi::transfer_none);
  call_wrap_v ((::GtkListBoxRow*) (gobj_()), (::GtkWidget*) (header_to_c));
}
void base::ListBoxRowBase::set_header () noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row, ::GtkWidget* header);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_set_header;
  auto header_to_c = nullptr;
  call_wrap_v ((::GtkListBoxRow*) (gobj_()), (::GtkWidget*) (header_to_c));
}

// void gtk_list_box_row_set_selectable (GtkListBoxRow* row /*none*/, gboolean selectable);
// void gtk_list_box_row_set_selectable (::GtkListBoxRow* row /*none*/, gboolean selectable);
void base::ListBoxRowBase::set_selectable (gboolean selectable) noexcept
{
  typedef void (*call_wrap_t) (::GtkListBoxRow* row, gboolean selectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_box_row_set_selectable;
  auto selectable_to_c = selectable;
  call_wrap_v ((::GtkListBoxRow*) (gobj_()), (gboolean) (selectable_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listboxrow_extra_def_impl.hpp>)
#include <gtk/listboxrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listboxrow_extra_impl.hpp>)
#include <gtk/listboxrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ListBoxRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkListBoxRowClass *methods = (::GtkListBoxRowClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
}

// void ListBoxRow::activate (GtkListBoxRow* row /*none*/);
// void ListBoxRow::activate (::GtkListBoxRow* row /*none*/);
void ListBoxRowClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkListBoxRow* row);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkListBoxRow*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
