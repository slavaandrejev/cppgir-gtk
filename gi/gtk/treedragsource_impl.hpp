// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGSOURCE_IMPL_HPP_
#define _GI_GTK_TREEDRAGSOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_tree_drag_source_drag_data_delete (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_drag_source_drag_data_delete (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
bool base::TreeDragSourceBase::drag_data_delete (Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_drag_source_drag_data_delete;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// GdkContentProvider* /*full,nullable*/ gtk_tree_drag_source_drag_data_get (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full,nullable*/ gtk_tree_drag_source_drag_data_get (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
Gdk::ContentProvider base::TreeDragSourceBase::drag_data_get (Gtk::TreePath_Ref path) noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_drag_source_drag_data_get;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_tree_drag_source_row_draggable (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_drag_source_row_draggable (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
bool base::TreeDragSourceBase::row_draggable (Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_drag_source_row_draggable;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra_def_impl.hpp>)
#include <gtk/treedragsource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra_impl.hpp>)
#include <gtk/treedragsource_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeDragSourceIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkTreeDragSourceIface *methods = (::GtkTreeDragSourceIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.drag_data_delete) methods->drag_data_delete = (decltype (methods->drag_data_delete)) detail::method_wrapper<self, bool (*) (Gtk::TreePath_Ref path), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drag_data_delete_>;
  if (init_data.drag_data_get) methods->drag_data_get = (decltype (methods->drag_data_get)) detail::method_wrapper<self, Gdk::ContentProvider (*) (Gtk::TreePath_Ref path), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::drag_data_get_>;
  if (init_data.row_draggable) methods->row_draggable = (decltype (methods->row_draggable)) detail::method_wrapper<self, bool (*) (Gtk::TreePath_Ref path), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::row_draggable_>;
}

// gboolean TreeDragSource::drag_data_delete (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeDragSource::drag_data_delete (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
bool TreeDragSourceIfaceClassImpl::drag_data_delete_ (Gtk::TreePath_Ref path) noexcept
{
  if (!get_struct_()->drag_data_delete) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_delete;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// GdkContentProvider* /*full,nullable*/ TreeDragSource::drag_data_get (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// ::GdkContentProvider* /*full,nullable*/ TreeDragSource::drag_data_get (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
Gdk::ContentProvider TreeDragSourceIfaceClassImpl::drag_data_get_ (Gtk::TreePath_Ref path) noexcept
{
  if (!get_struct_()->drag_data_get) { g_critical ("no method in class struct"); return {}; }
  typedef ::GdkContentProvider* (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_get;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean TreeDragSource::row_draggable (GtkTreeDragSource* drag_source /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeDragSource::row_draggable (::GtkTreeDragSource* drag_source /*none*/, ::GtkTreePath* path /*none*/);
bool TreeDragSourceIfaceClassImpl::row_draggable_ (Gtk::TreePath_Ref path) noexcept
{
  if (!get_struct_()->row_draggable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_draggable;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
