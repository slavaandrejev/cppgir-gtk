// AUTO-GENERATED

#ifndef _GI_GTK_CELLLAYOUT_IMPL_HPP_
#define _GI_GTK_CELLLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_cell_layout_add_attribute (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, int column);
// void gtk_cell_layout_add_attribute (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, gint column);
void base::CellLayoutBase::add_attribute (Gtk::CellRenderer cell, const gi::cstring_v attribute, gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, const char* attribute, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_add_attribute;
  auto column_to_c = column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (const char*) (attribute_to_c), (gint) (column_to_c));
}

// void gtk_cell_layout_clear (GtkCellLayout* cell_layout /*none*/);
// void gtk_cell_layout_clear (::GtkCellLayout* cell_layout /*none*/);
void base::CellLayoutBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_clear;
  call_wrap_v ((::GtkCellLayout*) (gobj_()));
}

// void gtk_cell_layout_clear_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/);
// void gtk_cell_layout_clear_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/);
void base::CellLayoutBase::clear_attributes (Gtk::CellRenderer cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_clear_attributes;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c));
}

// GtkCellArea* /*none,nullable*/ gtk_cell_layout_get_area (GtkCellLayout* cell_layout /*none*/);
// ::GtkCellArea* /*none,nullable*/ gtk_cell_layout_get_area (::GtkCellLayout* cell_layout /*none*/);
Gtk::CellArea base::CellLayoutBase::get_area () noexcept
{
  typedef ::GtkCellArea* (*call_wrap_t) (::GtkCellLayout* cell_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_get_area;
  auto _temp_ret = call_wrap_v ((::GtkCellLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*container*/ gtk_cell_layout_get_cells (GtkCellLayout* cell_layout /*none*/);
// ::GList* /*container*/ gtk_cell_layout_get_cells (::GtkCellLayout* cell_layout /*none*/);
gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t> base::CellLayoutBase::get_cells () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkCellLayout* cell_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_get_cells;
  auto _temp_ret = call_wrap_v ((::GtkCellLayout*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void gtk_cell_layout_pack_end (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void gtk_cell_layout_pack_end (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
void base::CellLayoutBase::pack_end (Gtk::CellRenderer cell, gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_pack_end;
  auto expand_to_c = expand;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gboolean) (expand_to_c));
}

// void gtk_cell_layout_pack_start (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void gtk_cell_layout_pack_start (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
void base::CellLayoutBase::pack_start (Gtk::CellRenderer cell, gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_pack_start;
  auto expand_to_c = expand;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gboolean) (expand_to_c));
}

// void gtk_cell_layout_reorder (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, int position);
// void gtk_cell_layout_reorder (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gint position);
void base::CellLayoutBase::reorder (Gtk::CellRenderer cell, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_reorder;
  auto position_to_c = position;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gint) (position_to_c));
}

// void gtk_cell_layout_set_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// void gtk_cell_layout_set_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_layout_set_cell_data_func (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkCellLayoutDataFunc func /*none,nullable*/, gpointer func_data, GDestroyNotify destroy /*none*/);
// void gtk_cell_layout_set_cell_data_func (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, Gtk::CellLayoutDataFunc::cfunction_type func /*none,nullable*/, void* func_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::CellLayoutBase::set_cell_data_func (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, Gtk::CellLayoutDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_layout_set_cell_data_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (Gtk::CellLayoutDataFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/celllayout_extra_def_impl.hpp>)
#include <gtk/celllayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/celllayout_extra_impl.hpp>)
#include <gtk/celllayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellLayoutIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkCellLayoutIface *methods = (::GtkCellLayoutIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.add_attribute) methods->add_attribute = (decltype (methods->add_attribute)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer cell, const gi::cstring_v attribute, gint column), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::add_attribute_>;
  if (init_data.clear) methods->clear = (decltype (methods->clear)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::clear_>;
  if (init_data.clear_attributes) methods->clear_attributes = (decltype (methods->clear_attributes)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer cell), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::clear_attributes_>;
  if (init_data.get_area) methods->get_area = (decltype (methods->get_area)) detail::method_wrapper<self, Gtk::CellArea (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_area_>;
  if (init_data.get_cells) methods->get_cells = (decltype (methods->get_cells)) detail::method_wrapper<self, gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t> (*) (), gi::transfer_container_t, std::tuple<>>::wrapper<&self::get_cells_>;
  if (init_data.pack_end) methods->pack_end = (decltype (methods->pack_end)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer cell, gboolean expand), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::pack_end_>;
  if (init_data.pack_start) methods->pack_start = (decltype (methods->pack_start)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer cell, gboolean expand), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::pack_start_>;
  if (init_data.reorder) methods->reorder = (decltype (methods->reorder)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer cell, gint position), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::reorder_>;
  if (init_data.set_cell_data_func) methods->set_cell_data_func = (decltype (methods->set_cell_data_func)) detail::method_wrapper<self, void (*) (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, Gtk::internal::CellLayoutDataFunc_CB_Trait, detail::args_index<1, 2, 3>>>, void  (::GtkCellRenderer* cell, Gtk::CellLayoutDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy)>::wrapper<&self::set_cell_data_func_>;
}

// void CellLayout::add_attribute (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, int column);
// void CellLayout::add_attribute (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, const char* attribute /*none*/, gint column);
void CellLayoutIfaceClassImpl::add_attribute_ (Gtk::CellRenderer cell, const gi::cstring_v attribute, gint column) noexcept
{
  if (!get_struct_()->add_attribute) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, const char* attribute, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_attribute;
  auto column_to_c = column;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none);
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (const char*) (attribute_to_c), (gint) (column_to_c));
}

// void CellLayout::clear (GtkCellLayout* cell_layout /*none*/);
// void CellLayout::clear (::GtkCellLayout* cell_layout /*none*/);
void CellLayoutIfaceClassImpl::clear_ () noexcept
{
  if (!get_struct_()->clear) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clear;
  call_wrap_v ((::GtkCellLayout*) (gobj_()));
}

// void CellLayout::clear_attributes (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/);
// void CellLayout::clear_attributes (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/);
void CellLayoutIfaceClassImpl::clear_attributes_ (Gtk::CellRenderer cell) noexcept
{
  if (!get_struct_()->clear_attributes) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clear_attributes;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c));
}

// GtkCellArea* /*none,nullable*/ CellLayout::get_area (GtkCellLayout* cell_layout /*none*/);
// ::GtkCellArea* /*none,nullable*/ CellLayout::get_area (::GtkCellLayout* cell_layout /*none*/);
Gtk::CellArea CellLayoutIfaceClassImpl::get_area_ () noexcept
{
  if (!get_struct_()->get_area) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkCellArea* (*call_wrap_t) (::GtkCellLayout* cell_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_area;
  auto _temp_ret = call_wrap_v ((::GtkCellLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GList* /*container*/ CellLayout::get_cells (GtkCellLayout* cell_layout /*none*/);
// ::GList* /*container*/ CellLayout::get_cells (::GtkCellLayout* cell_layout /*none*/);
gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t> CellLayoutIfaceClassImpl::get_cells_ () noexcept
{
  if (!get_struct_()->get_cells) { g_critical ("no method in class struct"); return {}; }
  typedef ::GList* (*call_wrap_t) (::GtkCellLayout* cell_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_cells;
  auto _temp_ret = call_wrap_v ((::GtkCellLayout*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkCellRenderer*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// void CellLayout::pack_end (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void CellLayout::pack_end (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
void CellLayoutIfaceClassImpl::pack_end_ (Gtk::CellRenderer cell, gboolean expand) noexcept
{
  if (!get_struct_()->pack_end) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pack_end;
  auto expand_to_c = expand;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gboolean) (expand_to_c));
}

// void CellLayout::pack_start (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void CellLayout::pack_start (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
void CellLayoutIfaceClassImpl::pack_start_ (Gtk::CellRenderer cell, gboolean expand) noexcept
{
  if (!get_struct_()->pack_start) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pack_start;
  auto expand_to_c = expand;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gboolean) (expand_to_c));
}

// void CellLayout::reorder (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, int position);
// void CellLayout::reorder (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, gint position);
void CellLayoutIfaceClassImpl::reorder_ (Gtk::CellRenderer cell, gint position) noexcept
{
  if (!get_struct_()->reorder) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reorder;
  auto position_to_c = position;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (gint) (position_to_c));
}

// void CellLayout::set_cell_data_func (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkCellLayoutDataFunc func /*none,nullable*/, gpointer func_data, GDestroyNotify destroy /*none*/);
// void CellLayout::set_cell_data_func (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, Gtk::CellLayoutDataFunc::cfunction_type func /*none,nullable*/, void* func_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void CellLayoutIfaceClassImpl::set_cell_data_func_ (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func) noexcept
{
  if (!get_struct_()->set_cell_data_func) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, Gtk::CellLayoutDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_cell_data_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  call_wrap_v ((::GtkCellLayout*) (gobj_()), (::GtkCellRenderer*) (cell_to_c), (Gtk::CellLayoutDataFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
