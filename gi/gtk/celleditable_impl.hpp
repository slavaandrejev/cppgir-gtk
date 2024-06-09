// AUTO-GENERATED

#ifndef _GI_GTK_CELLEDITABLE_IMPL_HPP_
#define _GI_GTK_CELLEDITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_cell_editable_editing_done (GtkCellEditable* cell_editable /*none*/);
// void gtk_cell_editable_editing_done (::GtkCellEditable* cell_editable /*none*/);
void base::CellEditableBase::editing_done () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_editable_editing_done;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void gtk_cell_editable_remove_widget (GtkCellEditable* cell_editable /*none*/);
// void gtk_cell_editable_remove_widget (::GtkCellEditable* cell_editable /*none*/);
void base::CellEditableBase::remove_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_cell_editable_remove_widget;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void gtk_cell_editable_start_editing (GtkCellEditable* cell_editable /*none*/, GdkEvent* event /*none,nullable*/);
// void gtk_cell_editable_start_editing (::GtkCellEditable* cell_editable /*none*/,  event /*none,nullable*/);
// SKIP; event type  not supported




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/celleditable_extra_def_impl.hpp>)
#include <gtk/celleditable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/celleditable_extra_impl.hpp>)
#include <gtk/celleditable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellEditableIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkCellEditableIface *methods = (::GtkCellEditableIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.editing_done) methods->editing_done = (decltype (methods->editing_done)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::editing_done_>;
  if (init_data.remove_widget) methods->remove_widget = (decltype (methods->remove_widget)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::remove_widget_>;
}

// void CellEditable::editing_done (GtkCellEditable* cell_editable /*none*/);
// void CellEditable::editing_done (::GtkCellEditable* cell_editable /*none*/);
void CellEditableIfaceClassImpl::editing_done_ () noexcept
{
  if (!get_struct_()->editing_done) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->editing_done;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void CellEditable::remove_widget (GtkCellEditable* cell_editable /*none*/);
// void CellEditable::remove_widget (::GtkCellEditable* cell_editable /*none*/);
void CellEditableIfaceClassImpl::remove_widget_ () noexcept
{
  if (!get_struct_()->remove_widget) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_widget;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void CellEditable::start_editing (GtkCellEditable* cell_editable /*none*/, GdkEvent* event /*none,nullable*/);
// void CellEditable::start_editing (::GtkCellEditable* cell_editable /*none*/,  event /*none,nullable*/);
// SKIP; event type  not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
