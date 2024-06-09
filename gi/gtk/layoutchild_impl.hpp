// AUTO-GENERATED

#ifndef _GI_GTK_LAYOUTCHILD_IMPL_HPP_
#define _GI_GTK_LAYOUTCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_layout_child_get_child_widget (GtkLayoutChild* layout_child /*none*/);
// ::GtkWidget* /*none*/ gtk_layout_child_get_child_widget (::GtkLayoutChild* layout_child /*none*/);
Gtk::Widget base::LayoutChildBase::get_child_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkLayoutChild* layout_child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_child_get_child_widget;
  auto _temp_ret = call_wrap_v ((::GtkLayoutChild*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkLayoutManager* /*none*/ gtk_layout_child_get_layout_manager (GtkLayoutChild* layout_child /*none*/);
// ::GtkLayoutManager* /*none*/ gtk_layout_child_get_layout_manager (::GtkLayoutChild* layout_child /*none*/);
Gtk::LayoutManager base::LayoutChildBase::get_layout_manager () noexcept
{
  typedef ::GtkLayoutManager* (*call_wrap_t) (::GtkLayoutChild* layout_child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_layout_child_get_layout_manager;
  auto _temp_ret = call_wrap_v ((::GtkLayoutChild*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/layoutchild_extra_def_impl.hpp>)
#include <gtk/layoutchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/layoutchild_extra_impl.hpp>)
#include <gtk/layoutchild_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LayoutChildClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkLayoutChildClass *methods = (::GtkLayoutChildClass *) class_struct;
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
