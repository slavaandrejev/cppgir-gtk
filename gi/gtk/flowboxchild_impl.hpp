// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOXCHILD_IMPL_HPP_
#define _GI_GTK_FLOWBOXCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_flow_box_child_new ();
// ::GtkFlowBoxChild* /*none*/ gtk_flow_box_child_new ();
Gtk::FlowBoxChild base::FlowBoxChildBase::new_ () noexcept
{
  typedef ::GtkFlowBoxChild* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_child_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_flow_box_child_changed (GtkFlowBoxChild* child /*none*/);
// void gtk_flow_box_child_changed (::GtkFlowBoxChild* child /*none*/);
void base::FlowBoxChildBase::changed () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_child_changed;
  call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
}

// GtkWidget* /*none,nullable*/ gtk_flow_box_child_get_child (GtkFlowBoxChild* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_flow_box_child_get_child (::GtkFlowBoxChild* self /*none*/);
Gtk::Widget base::FlowBoxChildBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkFlowBoxChild* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_child_get_child;
  auto _temp_ret = call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_flow_box_child_get_index (GtkFlowBoxChild* child /*none*/);
// gint gtk_flow_box_child_get_index (::GtkFlowBoxChild* child /*none*/);
gint base::FlowBoxChildBase::get_index () noexcept
{
  typedef gint (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_child_get_index;
  auto _temp_ret = call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_flow_box_child_is_selected (GtkFlowBoxChild* child /*none*/);
// gboolean gtk_flow_box_child_is_selected (::GtkFlowBoxChild* child /*none*/);
bool base::FlowBoxChildBase::is_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_child_is_selected;
  auto _temp_ret = call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
  return _temp_ret;
}

// void gtk_flow_box_child_set_child (GtkFlowBoxChild* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_flow_box_child_set_child (::GtkFlowBoxChild* self /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::FlowBoxChildBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBoxChild* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_child_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkFlowBoxChild*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::FlowBoxChildBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBoxChild* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_child_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkFlowBoxChild*) (gobj_()), (::GtkWidget*) (child_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowboxchild_extra_def_impl.hpp>)
#include <gtk/flowboxchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowboxchild_extra_impl.hpp>)
#include <gtk/flowboxchild_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FlowBoxChildClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFlowBoxChildClass *methods = (::GtkFlowBoxChildClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
}

// void FlowBoxChild::activate (GtkFlowBoxChild* child /*none*/);
// void FlowBoxChild::activate (::GtkFlowBoxChild* child /*none*/);
void FlowBoxChildClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
