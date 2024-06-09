// AUTO-GENERATED

#ifndef _GI_GTK_SELECTIONMODEL_IMPL_HPP_
#define _GI_GTK_SELECTIONMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkBitset* /*full*/ gtk_selection_model_get_selection (GtkSelectionModel* model /*none*/);
// ::GtkBitset* /*full*/ gtk_selection_model_get_selection (::GtkSelectionModel* model /*none*/);
Gtk::Bitset base::SelectionModelBase::get_selection () noexcept
{
  typedef ::GtkBitset* (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_get_selection;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkBitset* /*full*/ gtk_selection_model_get_selection_in_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// ::GtkBitset* /*full*/ gtk_selection_model_get_selection_in_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
Gtk::Bitset base::SelectionModelBase::get_selection_in_range (guint position, guint n_items) noexcept
{
  typedef ::GtkBitset* (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_get_selection_in_range;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_selection_model_is_selected (GtkSelectionModel* model /*none*/, guint position);
// gboolean gtk_selection_model_is_selected (::GtkSelectionModel* model /*none*/, guint position);
bool base::SelectionModelBase::is_selected (guint position) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_is_selected;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_model_select_all (GtkSelectionModel* model /*none*/);
// gboolean gtk_selection_model_select_all (::GtkSelectionModel* model /*none*/);
bool base::SelectionModelBase::select_all () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_select_all;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_selection_model_select_item (GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
// gboolean gtk_selection_model_select_item (::GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
bool base::SelectionModelBase::select_item (guint position, gboolean unselect_rest) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position, gboolean unselect_rest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_select_item;
  auto unselect_rest_to_c = unselect_rest;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (gboolean) (unselect_rest_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_model_select_range (GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
// gboolean gtk_selection_model_select_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
bool base::SelectionModelBase::select_range (guint position, guint n_items, gboolean unselect_rest) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items, gboolean unselect_rest);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_select_range;
  auto unselect_rest_to_c = unselect_rest;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c), (gboolean) (unselect_rest_to_c));
  return _temp_ret;
}

// void gtk_selection_model_selection_changed (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// void gtk_selection_model_selection_changed (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
void base::SelectionModelBase::selection_changed (guint position, guint n_items) noexcept
{
  typedef void (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_selection_changed;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c));
}

// gboolean gtk_selection_model_set_selection (GtkSelectionModel* model /*none*/, GtkBitset* selected /*none*/, GtkBitset* mask /*none*/);
// gboolean gtk_selection_model_set_selection (::GtkSelectionModel* model /*none*/, ::GtkBitset* selected /*none*/, ::GtkBitset* mask /*none*/);
bool base::SelectionModelBase::set_selection (Gtk::Bitset_Ref selected, Gtk::Bitset_Ref mask) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, ::GtkBitset* selected, ::GtkBitset* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_set_selection;
  auto mask_to_c = gi::unwrap (mask, gi::transfer_none);
  auto selected_to_c = gi::unwrap (selected, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (::GtkBitset*) (selected_to_c), (::GtkBitset*) (mask_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_model_unselect_all (GtkSelectionModel* model /*none*/);
// gboolean gtk_selection_model_unselect_all (::GtkSelectionModel* model /*none*/);
bool base::SelectionModelBase::unselect_all () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_unselect_all;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_selection_model_unselect_item (GtkSelectionModel* model /*none*/, guint position);
// gboolean gtk_selection_model_unselect_item (::GtkSelectionModel* model /*none*/, guint position);
bool base::SelectionModelBase::unselect_item (guint position) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_unselect_item;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_model_unselect_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// gboolean gtk_selection_model_unselect_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
bool base::SelectionModelBase::unselect_range (guint position, guint n_items) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_selection_model_unselect_range;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/selectionmodel_extra_def_impl.hpp>)
#include <gtk/selectionmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/selectionmodel_extra_impl.hpp>)
#include <gtk/selectionmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SelectionModelInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkSelectionModelInterface *methods = (::GtkSelectionModelInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_selection_in_range) methods->get_selection_in_range = (decltype (methods->get_selection_in_range)) detail::method_wrapper<self, Gtk::Bitset (*) (guint position, guint n_items), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::get_selection_in_range_>;
  if (init_data.is_selected) methods->is_selected = (decltype (methods->is_selected)) detail::method_wrapper<self, bool (*) (guint position), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::is_selected_>;
  if (init_data.select_all) methods->select_all = (decltype (methods->select_all)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::select_all_>;
  if (init_data.select_item) methods->select_item = (decltype (methods->select_item)) detail::method_wrapper<self, bool (*) (guint position, gboolean unselect_rest), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::select_item_>;
  if (init_data.select_range) methods->select_range = (decltype (methods->select_range)) detail::method_wrapper<self, bool (*) (guint position, guint n_items, gboolean unselect_rest), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::select_range_>;
  if (init_data.set_selection) methods->set_selection = (decltype (methods->set_selection)) detail::method_wrapper<self, bool (*) (Gtk::Bitset_Ref selected, Gtk::Bitset_Ref mask), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_selection_>;
  if (init_data.unselect_all) methods->unselect_all = (decltype (methods->unselect_all)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::unselect_all_>;
  if (init_data.unselect_item) methods->unselect_item = (decltype (methods->unselect_item)) detail::method_wrapper<self, bool (*) (guint position), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::unselect_item_>;
  if (init_data.unselect_range) methods->unselect_range = (decltype (methods->unselect_range)) detail::method_wrapper<self, bool (*) (guint position, guint n_items), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::unselect_range_>;
}

// GtkBitset* /*full*/ SelectionModel::get_selection_in_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// ::GtkBitset* /*full*/ SelectionModel::get_selection_in_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
Gtk::Bitset SelectionModelInterfaceClassImpl::get_selection_in_range_ (guint position, guint n_items) noexcept
{
  if (!get_struct_()->get_selection_in_range) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkBitset* (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_selection_in_range;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean SelectionModel::is_selected (GtkSelectionModel* model /*none*/, guint position);
// gboolean SelectionModel::is_selected (::GtkSelectionModel* model /*none*/, guint position);
bool SelectionModelInterfaceClassImpl::is_selected_ (guint position) noexcept
{
  if (!get_struct_()->is_selected) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_selected;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c));
  return _temp_ret;
}

// gboolean SelectionModel::select_all (GtkSelectionModel* model /*none*/);
// gboolean SelectionModel::select_all (::GtkSelectionModel* model /*none*/);
bool SelectionModelInterfaceClassImpl::select_all_ () noexcept
{
  if (!get_struct_()->select_all) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()));
  return _temp_ret;
}

// gboolean SelectionModel::select_item (GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
// gboolean SelectionModel::select_item (::GtkSelectionModel* model /*none*/, guint position, gboolean unselect_rest);
bool SelectionModelInterfaceClassImpl::select_item_ (guint position, gboolean unselect_rest) noexcept
{
  if (!get_struct_()->select_item) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position, gboolean unselect_rest);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_item;
  auto unselect_rest_to_c = unselect_rest;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (gboolean) (unselect_rest_to_c));
  return _temp_ret;
}

// gboolean SelectionModel::select_range (GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
// gboolean SelectionModel::select_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items, gboolean unselect_rest);
bool SelectionModelInterfaceClassImpl::select_range_ (guint position, guint n_items, gboolean unselect_rest) noexcept
{
  if (!get_struct_()->select_range) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items, gboolean unselect_rest);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_range;
  auto unselect_rest_to_c = unselect_rest;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c), (gboolean) (unselect_rest_to_c));
  return _temp_ret;
}

// gboolean SelectionModel::set_selection (GtkSelectionModel* model /*none*/, GtkBitset* selected /*none*/, GtkBitset* mask /*none*/);
// gboolean SelectionModel::set_selection (::GtkSelectionModel* model /*none*/, ::GtkBitset* selected /*none*/, ::GtkBitset* mask /*none*/);
bool SelectionModelInterfaceClassImpl::set_selection_ (Gtk::Bitset_Ref selected, Gtk::Bitset_Ref mask) noexcept
{
  if (!get_struct_()->set_selection) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, ::GtkBitset* selected, ::GtkBitset* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_selection;
  auto mask_to_c = gi::unwrap (mask, gi::transfer_none);
  auto selected_to_c = gi::unwrap (selected, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (::GtkBitset*) (selected_to_c), (::GtkBitset*) (mask_to_c));
  return _temp_ret;
}

// gboolean SelectionModel::unselect_all (GtkSelectionModel* model /*none*/);
// gboolean SelectionModel::unselect_all (::GtkSelectionModel* model /*none*/);
bool SelectionModelInterfaceClassImpl::unselect_all_ () noexcept
{
  if (!get_struct_()->unselect_all) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_all;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()));
  return _temp_ret;
}

// gboolean SelectionModel::unselect_item (GtkSelectionModel* model /*none*/, guint position);
// gboolean SelectionModel::unselect_item (::GtkSelectionModel* model /*none*/, guint position);
bool SelectionModelInterfaceClassImpl::unselect_item_ (guint position) noexcept
{
  if (!get_struct_()->unselect_item) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_item;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c));
  return _temp_ret;
}

// gboolean SelectionModel::unselect_range (GtkSelectionModel* model /*none*/, guint position, guint n_items);
// gboolean SelectionModel::unselect_range (::GtkSelectionModel* model /*none*/, guint position, guint n_items);
bool SelectionModelInterfaceClassImpl::unselect_range_ (guint position, guint n_items) noexcept
{
  if (!get_struct_()->unselect_range) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkSelectionModel* model, guint position, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unselect_range;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkSelectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
