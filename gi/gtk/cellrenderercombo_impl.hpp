// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERCOMBO_IMPL_HPP_
#define _GI_GTK_CELLRENDERERCOMBO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* /*none*/ gtk_cell_renderer_combo_new ();
// ::GtkCellRendererCombo* /*none*/ gtk_cell_renderer_combo_new ();
Gtk::CellRendererCombo base::CellRendererComboBase::new_ () noexcept
{
  typedef ::GtkCellRendererCombo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_combo_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderercombo_extra_def_impl.hpp>)
#include <gtk/cellrenderercombo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderercombo_extra_impl.hpp>)
#include <gtk/cellrenderercombo_extra_impl.hpp>
#endif
#endif

#endif
