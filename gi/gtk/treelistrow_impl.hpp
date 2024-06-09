// AUTO-GENERATED

#ifndef _GI_GTK_TREELISTROW_IMPL_HPP_
#define _GI_GTK_TREELISTROW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_child_row (GtkTreeListRow* self /*none*/, guint position);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_child_row (::GtkTreeListRow* self /*none*/, guint position);
Gtk::TreeListRow base::TreeListRowBase::get_child_row (guint position) noexcept
{
  typedef ::GtkTreeListRow* (*call_wrap_t) (::GtkTreeListRow* self, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_child_row;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GListModel* /*none,nullable*/ gtk_tree_list_row_get_children (GtkTreeListRow* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_tree_list_row_get_children (::GtkTreeListRow* self /*none*/);
Gio::ListModel base::TreeListRowBase::get_children () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_children;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_tree_list_row_get_depth (GtkTreeListRow* self /*none*/);
// guint gtk_tree_list_row_get_depth (::GtkTreeListRow* self /*none*/);
guint base::TreeListRowBase::get_depth () noexcept
{
  typedef guint (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_depth;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_list_row_get_expanded (GtkTreeListRow* self /*none*/);
// gboolean gtk_tree_list_row_get_expanded (::GtkTreeListRow* self /*none*/);
bool base::TreeListRowBase::get_expanded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_expanded;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return _temp_ret;
}

// gpointer /*full,nullable*/ gtk_tree_list_row_get_item (GtkTreeListRow* self /*none*/);
// ::GObject* /*full,nullable*/ gtk_tree_list_row_get_item (::GtkTreeListRow* self /*none*/);
GObject::Object base::TreeListRowBase::get_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_item;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_parent (GtkTreeListRow* self /*none*/);
// ::GtkTreeListRow* /*full,nullable*/ gtk_tree_list_row_get_parent (::GtkTreeListRow* self /*none*/);
Gtk::TreeListRow base::TreeListRowBase::get_parent () noexcept
{
  typedef ::GtkTreeListRow* (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_parent;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint gtk_tree_list_row_get_position (GtkTreeListRow* self /*none*/);
// guint gtk_tree_list_row_get_position (::GtkTreeListRow* self /*none*/);
guint base::TreeListRowBase::get_position () noexcept
{
  typedef guint (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_get_position;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_list_row_is_expandable (GtkTreeListRow* self /*none*/);
// gboolean gtk_tree_list_row_is_expandable (::GtkTreeListRow* self /*none*/);
bool base::TreeListRowBase::is_expandable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeListRow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_is_expandable;
  auto _temp_ret = call_wrap_v ((::GtkTreeListRow*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_list_row_set_expanded (GtkTreeListRow* self /*none*/, gboolean expanded);
// void gtk_tree_list_row_set_expanded (::GtkTreeListRow* self /*none*/, gboolean expanded);
void base::TreeListRowBase::set_expanded (gboolean expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeListRow* self, gboolean expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_list_row_set_expanded;
  auto expanded_to_c = expanded;
  call_wrap_v ((::GtkTreeListRow*) (gobj_()), (gboolean) (expanded_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treelistrow_extra_def_impl.hpp>)
#include <gtk/treelistrow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treelistrow_extra_impl.hpp>)
#include <gtk/treelistrow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeListRowClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTreeListRowClass *methods = (::GtkTreeListRowClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
