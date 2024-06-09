// AUTO-GENERATED

#ifndef _GI_GTK_LISTHEADER_IMPL_HPP_
#define _GI_GTK_LISTHEADER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none,nullable*/ gtk_list_header_get_child (GtkListHeader* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_header_get_child (::GtkListHeader* self /*none*/);
Gtk::Widget base::ListHeaderBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkListHeader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_get_child;
  auto _temp_ret = call_wrap_v ((::GtkListHeader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_list_header_get_end (GtkListHeader* self /*none*/);
// guint gtk_list_header_get_end (::GtkListHeader* self /*none*/);
guint base::ListHeaderBase::get_end () noexcept
{
  typedef guint (*call_wrap_t) (::GtkListHeader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_get_end;
  auto _temp_ret = call_wrap_v ((::GtkListHeader*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ gtk_list_header_get_item (GtkListHeader* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_list_header_get_item (::GtkListHeader* self /*none*/);
GObject::Object base::ListHeaderBase::get_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkListHeader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_get_item;
  auto _temp_ret = call_wrap_v ((::GtkListHeader*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_list_header_get_n_items (GtkListHeader* self /*none*/);
// guint gtk_list_header_get_n_items (::GtkListHeader* self /*none*/);
guint base::ListHeaderBase::get_n_items () noexcept
{
  typedef guint (*call_wrap_t) (::GtkListHeader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_get_n_items;
  auto _temp_ret = call_wrap_v ((::GtkListHeader*) (gobj_()));
  return _temp_ret;
}

// guint gtk_list_header_get_start (GtkListHeader* self /*none*/);
// guint gtk_list_header_get_start (::GtkListHeader* self /*none*/);
guint base::ListHeaderBase::get_start () noexcept
{
  typedef guint (*call_wrap_t) (::GtkListHeader* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_get_start;
  auto _temp_ret = call_wrap_v ((::GtkListHeader*) (gobj_()));
  return _temp_ret;
}

// void gtk_list_header_set_child (GtkListHeader* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_list_header_set_child (::GtkListHeader* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ListHeaderBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkListHeader* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkListHeader*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ListHeaderBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkListHeader* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_header_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkListHeader*) (gobj_()), (::GtkWidget*) (child_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listheader_extra_def_impl.hpp>)
#include <gtk/listheader_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listheader_extra_impl.hpp>)
#include <gtk/listheader_extra_impl.hpp>
#endif
#endif

#endif
