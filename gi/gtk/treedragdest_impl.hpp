// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGDEST_IMPL_HPP_
#define _GI_GTK_TREEDRAGDEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_tree_drag_dest_drag_data_received (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest /*none*/, const GValue* value /*none*/);
// gboolean gtk_tree_drag_dest_drag_data_received (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest /*none*/, const ::GValue* value /*none*/);
bool base::TreeDragDestBase::drag_data_received (Gtk::TreePath_Ref dest, const GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_drag_dest_drag_data_received;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_drag_dest_row_drop_possible (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest_path /*none*/, const GValue* value /*none*/);
// gboolean gtk_tree_drag_dest_row_drop_possible (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest_path /*none*/, const ::GValue* value /*none*/);
bool base::TreeDragDestBase::row_drop_possible (Gtk::TreePath_Ref dest_path, const GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tree_drag_dest_row_drop_possible;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto dest_path_to_c = gi::unwrap (dest_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_path_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra_def_impl.hpp>)
#include <gtk/treedragdest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra_impl.hpp>)
#include <gtk/treedragdest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeDragDestIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkTreeDragDestIface *methods = (::GtkTreeDragDestIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.drag_data_received) methods->drag_data_received = (decltype (methods->drag_data_received)) detail::method_wrapper<self, bool (*) (Gtk::TreePath_Ref dest, const GObject::Value_Ref value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::drag_data_received_>;
  if (init_data.row_drop_possible) methods->row_drop_possible = (decltype (methods->row_drop_possible)) detail::method_wrapper<self, bool (*) (Gtk::TreePath_Ref dest_path, const GObject::Value_Ref value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::row_drop_possible_>;
}

// gboolean TreeDragDest::drag_data_received (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest /*none*/, const GValue* value /*none*/);
// gboolean TreeDragDest::drag_data_received (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest /*none*/, const ::GValue* value /*none*/);
bool TreeDragDestIfaceClassImpl::drag_data_received_ (Gtk::TreePath_Ref dest, const GObject::Value_Ref value) noexcept
{
  if (!get_struct_()->drag_data_received) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_received;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gboolean TreeDragDest::row_drop_possible (GtkTreeDragDest* drag_dest /*none*/, GtkTreePath* dest_path /*none*/, const GValue* value /*none*/);
// gboolean TreeDragDest::row_drop_possible (::GtkTreeDragDest* drag_dest /*none*/, ::GtkTreePath* dest_path /*none*/, const ::GValue* value /*none*/);
bool TreeDragDestIfaceClassImpl::row_drop_possible_ (Gtk::TreePath_Ref dest_path, const GObject::Value_Ref value) noexcept
{
  if (!get_struct_()->row_drop_possible) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_drop_possible;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto dest_path_to_c = gi::unwrap (dest_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_path_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
