// AUTO-GENERATED

#ifndef _GI_GTK_STACKSWITCHER_IMPL_HPP_
#define _GI_GTK_STACKSWITCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable StackSwitcherBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

StackSwitcherBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_stack_switcher_new ();
// ::GtkStackSwitcher* /*none*/ gtk_stack_switcher_new ();
Gtk::StackSwitcher base::StackSwitcherBase::new_ () noexcept
{
  typedef ::GtkStackSwitcher* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_switcher_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkStack* /*none,nullable*/ gtk_stack_switcher_get_stack (GtkStackSwitcher* switcher /*none*/);
// ::GtkStack* /*none,nullable*/ gtk_stack_switcher_get_stack (::GtkStackSwitcher* switcher /*none*/);
Gtk::Stack base::StackSwitcherBase::get_stack () noexcept
{
  typedef ::GtkStack* (*call_wrap_t) (::GtkStackSwitcher* switcher);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_switcher_get_stack;
  auto _temp_ret = call_wrap_v ((::GtkStackSwitcher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_stack_switcher_set_stack (GtkStackSwitcher* switcher /*none*/, GtkStack* stack /*none,nullable*/);
// void gtk_stack_switcher_set_stack (::GtkStackSwitcher* switcher /*none*/, ::GtkStack* stack /*none,nullable*/);
void base::StackSwitcherBase::set_stack (Gtk::Stack stack) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackSwitcher* switcher, ::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_switcher_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none);
  call_wrap_v ((::GtkStackSwitcher*) (gobj_()), (::GtkStack*) (stack_to_c));
}
void base::StackSwitcherBase::set_stack () noexcept
{
  typedef void (*call_wrap_t) (::GtkStackSwitcher* switcher, ::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_switcher_set_stack;
  auto stack_to_c = nullptr;
  call_wrap_v ((::GtkStackSwitcher*) (gobj_()), (::GtkStack*) (stack_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra_def_impl.hpp>)
#include <gtk/stackswitcher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra_impl.hpp>)
#include <gtk/stackswitcher_extra_impl.hpp>
#endif
#endif

#endif
