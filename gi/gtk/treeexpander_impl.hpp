// AUTO-GENERATED

#ifndef _GI_GTK_TREEEXPANDER_IMPL_HPP_
#define _GI_GTK_TREEEXPANDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_tree_expander_new ();
// ::GtkTreeExpander* /*none*/ gtk_tree_expander_new ();
Gtk::TreeExpander base::TreeExpanderBase::new_ () noexcept
{
  typedef ::GtkTreeExpander* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_expander_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_tree_expander_get_child (GtkTreeExpander* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_tree_expander_get_child (::GtkTreeExpander* self /*none*/);
Gtk::Widget base::TreeExpanderBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkTreeExpander* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_get_child;
  auto _temp_ret = call_wrap_v ((::GtkTreeExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_tree_expander_get_hide_expander (GtkTreeExpander* self /*none*/);
// gboolean gtk_tree_expander_get_hide_expander (::GtkTreeExpander* self /*none*/);
bool base::TreeExpanderBase::get_hide_expander () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeExpander* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_get_hide_expander;
  auto _temp_ret = call_wrap_v ((::GtkTreeExpander*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_expander_get_indent_for_depth (GtkTreeExpander* self /*none*/);
// gboolean gtk_tree_expander_get_indent_for_depth (::GtkTreeExpander* self /*none*/);
bool base::TreeExpanderBase::get_indent_for_depth () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeExpander* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_get_indent_for_depth;
  auto _temp_ret = call_wrap_v ((::GtkTreeExpander*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_expander_get_indent_for_icon (GtkTreeExpander* self /*none*/);
// gboolean gtk_tree_expander_get_indent_for_icon (::GtkTreeExpander* self /*none*/);
bool base::TreeExpanderBase::get_indent_for_icon () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeExpander* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_get_indent_for_icon;
  auto _temp_ret = call_wrap_v ((::GtkTreeExpander*) (gobj_()));
  return _temp_ret;
}

// gpointer /*full,nullable*/ gtk_tree_expander_get_item (GtkTreeExpander* self /*none*/);
// ::GObject* /*full,nullable*/ gtk_tree_expander_get_item (::GtkTreeExpander* self /*none*/);
GObject::Object base::TreeExpanderBase::get_item () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkTreeExpander* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_get_item;
  auto _temp_ret = call_wrap_v ((::GtkTreeExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTreeListRow* /*none,nullable*/ gtk_tree_expander_get_list_row (GtkTreeExpander* self /*none*/);
// ::GtkTreeListRow* /*none,nullable*/ gtk_tree_expander_get_list_row (::GtkTreeExpander* self /*none*/);
Gtk::TreeListRow base::TreeExpanderBase::get_list_row () noexcept
{
  typedef ::GtkTreeListRow* (*call_wrap_t) (::GtkTreeExpander* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_get_list_row;
  auto _temp_ret = call_wrap_v ((::GtkTreeExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_tree_expander_set_child (GtkTreeExpander* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_tree_expander_set_child (::GtkTreeExpander* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::TreeExpanderBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::TreeExpanderBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_tree_expander_set_hide_expander (GtkTreeExpander* self /*none*/, gboolean hide_expander);
// void gtk_tree_expander_set_hide_expander (::GtkTreeExpander* self /*none*/, gboolean hide_expander);
void base::TreeExpanderBase::set_hide_expander (gboolean hide_expander) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, gboolean hide_expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_hide_expander;
  auto hide_expander_to_c = hide_expander;
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (gboolean) (hide_expander_to_c));
}

// void gtk_tree_expander_set_indent_for_depth (GtkTreeExpander* self /*none*/, gboolean indent_for_depth);
// void gtk_tree_expander_set_indent_for_depth (::GtkTreeExpander* self /*none*/, gboolean indent_for_depth);
void base::TreeExpanderBase::set_indent_for_depth (gboolean indent_for_depth) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, gboolean indent_for_depth);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_indent_for_depth;
  auto indent_for_depth_to_c = indent_for_depth;
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (gboolean) (indent_for_depth_to_c));
}

// void gtk_tree_expander_set_indent_for_icon (GtkTreeExpander* self /*none*/, gboolean indent_for_icon);
// void gtk_tree_expander_set_indent_for_icon (::GtkTreeExpander* self /*none*/, gboolean indent_for_icon);
void base::TreeExpanderBase::set_indent_for_icon (gboolean indent_for_icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, gboolean indent_for_icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_indent_for_icon;
  auto indent_for_icon_to_c = indent_for_icon;
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (gboolean) (indent_for_icon_to_c));
}

// void gtk_tree_expander_set_list_row (GtkTreeExpander* self /*none*/, GtkTreeListRow* list_row /*none,nullable*/);
// void gtk_tree_expander_set_list_row (::GtkTreeExpander* self /*none*/, ::GtkTreeListRow* list_row /*none,nullable*/);
void base::TreeExpanderBase::set_list_row (Gtk::TreeListRow list_row) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, ::GtkTreeListRow* list_row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_list_row;
  auto list_row_to_c = gi::unwrap (list_row, gi::transfer_none);
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (::GtkTreeListRow*) (list_row_to_c));
}
void base::TreeExpanderBase::set_list_row () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeExpander* self, ::GtkTreeListRow* list_row);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_expander_set_list_row;
  auto list_row_to_c = nullptr;
  call_wrap_v ((::GtkTreeExpander*) (gobj_()), (::GtkTreeListRow*) (list_row_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeexpander_extra_def_impl.hpp>)
#include <gtk/treeexpander_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeexpander_extra_impl.hpp>)
#include <gtk/treeexpander_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeExpanderClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTreeExpanderClass *methods = (::GtkTreeExpanderClass *) class_struct;
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
