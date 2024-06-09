// AUTO-GENERATED

#ifndef _GI_GTK_LISTITEM_IMPL_HPP_
#define _GI_GTK_LISTITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// const char* /*none*/ gtk_list_item_get_accessible_description (GtkListItem* self /*none*/);
// const char* /*none*/ gtk_list_item_get_accessible_description (::GtkListItem* self /*none*/);
gi::cstring_v base::ListItemBase::get_accessible_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_accessible_description;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_list_item_get_accessible_label (GtkListItem* self /*none*/);
// const char* /*none*/ gtk_list_item_get_accessible_label (::GtkListItem* self /*none*/);
gi::cstring_v base::ListItemBase::get_accessible_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_accessible_label;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_list_item_get_activatable (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_activatable (::GtkListItem* self /*none*/);
bool base::ListItemBase::get_activatable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_activatable;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_list_item_get_child (GtkListItem* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_item_get_child (::GtkListItem* self /*none*/);
Gtk::Widget base::ListItemBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_child;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_list_item_get_focusable (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_focusable (::GtkListItem* self /*none*/);
bool base::ListItemBase::get_focusable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_focusable;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return _temp_ret;
}

// gpointer /*none,nullable*/ gtk_list_item_get_item (GtkListItem* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_list_item_get_item (::GtkListItem* self /*none*/);
GObject::Object base::ListItemBase::get_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_item;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_list_item_get_position (GtkListItem* self /*none*/);
// guint gtk_list_item_get_position (::GtkListItem* self /*none*/);
guint base::ListItemBase::get_position () noexcept
{
  typedef guint (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_position;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_list_item_get_selectable (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_selectable (::GtkListItem* self /*none*/);
bool base::ListItemBase::get_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_selectable;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_list_item_get_selected (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_selected (::GtkListItem* self /*none*/);
bool base::ListItemBase::get_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkListItem* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_get_selected;
  auto _temp_ret = call_wrap_v ((::GtkListItem*) (gobj_()));
  return _temp_ret;
}

// void gtk_list_item_set_accessible_description (GtkListItem* self /*none*/, const char* description /*none*/);
// void gtk_list_item_set_accessible_description (::GtkListItem* self /*none*/, const char* description /*none*/);
void base::ListItemBase::set_accessible_description (const gi::cstring_v description) noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_accessible_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none);
  call_wrap_v ((::GtkListItem*) (gobj_()), (const char*) (description_to_c));
}

// void gtk_list_item_set_accessible_label (GtkListItem* self /*none*/, const char* label /*none*/);
// void gtk_list_item_set_accessible_label (::GtkListItem* self /*none*/, const char* label /*none*/);
void base::ListItemBase::set_accessible_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_accessible_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkListItem*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_list_item_set_activatable (GtkListItem* self /*none*/, gboolean activatable);
// void gtk_list_item_set_activatable (::GtkListItem* self /*none*/, gboolean activatable);
void base::ListItemBase::set_activatable (gboolean activatable) noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, gboolean activatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_activatable;
  auto activatable_to_c = activatable;
  call_wrap_v ((::GtkListItem*) (gobj_()), (gboolean) (activatable_to_c));
}

// void gtk_list_item_set_child (GtkListItem* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_list_item_set_child (::GtkListItem* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ListItemBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkListItem*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ListItemBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkListItem*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_list_item_set_focusable (GtkListItem* self /*none*/, gboolean focusable);
// void gtk_list_item_set_focusable (::GtkListItem* self /*none*/, gboolean focusable);
void base::ListItemBase::set_focusable (gboolean focusable) noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, gboolean focusable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_focusable;
  auto focusable_to_c = focusable;
  call_wrap_v ((::GtkListItem*) (gobj_()), (gboolean) (focusable_to_c));
}

// void gtk_list_item_set_selectable (GtkListItem* self /*none*/, gboolean selectable);
// void gtk_list_item_set_selectable (::GtkListItem* self /*none*/, gboolean selectable);
void base::ListItemBase::set_selectable (gboolean selectable) noexcept
{
  typedef void (*call_wrap_t) (::GtkListItem* self, gboolean selectable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_list_item_set_selectable;
  auto selectable_to_c = selectable;
  call_wrap_v ((::GtkListItem*) (gobj_()), (gboolean) (selectable_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listitem_extra_def_impl.hpp>)
#include <gtk/listitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listitem_extra_impl.hpp>)
#include <gtk/listitem_extra_impl.hpp>
#endif
#endif

#endif
