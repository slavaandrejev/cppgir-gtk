// AUTO-GENERATED

#ifndef _GI_GTK_STACK_IMPL_HPP_
#define _GI_GTK_STACK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_stack_new ();
// ::GtkStack* /*none*/ gtk_stack_new ();
Gtk::Stack base::StackBase::new_ () noexcept
{
  typedef ::GtkStack* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkStackPage* /*none*/ gtk_stack_add_child (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// ::GtkStackPage* /*none*/ gtk_stack_add_child (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
Gtk::StackPage base::StackBase::add_child (Gtk::Widget child) noexcept
{
  typedef ::GtkStackPage* (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_add_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkStackPage* /*none*/ gtk_stack_add_named (GtkStack* stack /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/);
// ::GtkStackPage* /*none*/ gtk_stack_add_named (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/);
Gtk::StackPage base::StackBase::add_named (Gtk::Widget child, const gi::cstring_v name) noexcept
{
  typedef ::GtkStackPage* (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_add_named;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::StackPage base::StackBase::add_named (Gtk::Widget child) noexcept
{
  typedef ::GtkStackPage* (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_add_named;
  auto name_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkStackPage* /*none*/ gtk_stack_add_titled (GtkStack* stack /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
// ::GtkStackPage* /*none*/ gtk_stack_add_titled (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
Gtk::StackPage base::StackBase::add_titled (Gtk::Widget child, const gi::cstring_v name, const gi::cstring_v title) noexcept
{
  typedef ::GtkStackPage* (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child, const char* name, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_add_titled;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::StackPage base::StackBase::add_titled (Gtk::Widget child, const gi::cstring_v title) noexcept
{
  typedef ::GtkStackPage* (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child, const char* name, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_add_titled;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto name_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_stack_get_child_by_name (GtkStack* stack /*none*/, const char* name /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_stack_get_child_by_name (::GtkStack* stack /*none*/, const char* name /*none*/);
Gtk::Widget base::StackBase::get_child_by_name (const gi::cstring_v name) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkStack* stack, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_child_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_stack_get_hhomogeneous (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_hhomogeneous (::GtkStack* stack /*none*/);
bool base::StackBase::get_hhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_hhomogeneous;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_stack_get_interpolate_size (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_interpolate_size (::GtkStack* stack /*none*/);
bool base::StackBase::get_interpolate_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_interpolate_size;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// GtkStackPage* /*none*/ gtk_stack_get_page (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// ::GtkStackPage* /*none*/ gtk_stack_get_page (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
Gtk::StackPage base::StackBase::get_page (Gtk::Widget child) noexcept
{
  typedef ::GtkStackPage* (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_page;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkSelectionModel* /*full*/ gtk_stack_get_pages (GtkStack* stack /*none*/);
// ::GtkSelectionModel* /*full*/ gtk_stack_get_pages (::GtkStack* stack /*none*/);
Gtk::SelectionModel base::StackBase::get_pages () noexcept
{
  typedef ::GtkSelectionModel* (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_pages;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// guint gtk_stack_get_transition_duration (GtkStack* stack /*none*/);
// guint gtk_stack_get_transition_duration (::GtkStack* stack /*none*/);
guint base::StackBase::get_transition_duration () noexcept
{
  typedef guint (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_transition_duration;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_stack_get_transition_running (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_transition_running (::GtkStack* stack /*none*/);
bool base::StackBase::get_transition_running () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_transition_running;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// GtkStackTransitionType gtk_stack_get_transition_type (GtkStack* stack /*none*/);
// ::GtkStackTransitionType gtk_stack_get_transition_type (::GtkStack* stack /*none*/);
Gtk::StackTransitionType base::StackBase::get_transition_type () noexcept
{
  typedef ::GtkStackTransitionType (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_transition_type;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_stack_get_vhomogeneous (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_vhomogeneous (::GtkStack* stack /*none*/);
bool base::StackBase::get_vhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_vhomogeneous;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_stack_get_visible_child (GtkStack* stack /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_stack_get_visible_child (::GtkStack* stack /*none*/);
Gtk::Widget base::StackBase::get_visible_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_visible_child;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_stack_get_visible_child_name (GtkStack* stack /*none*/);
// const char* /*none,nullable*/ gtk_stack_get_visible_child_name (::GtkStack* stack /*none*/);
gi::cstring_v base::StackBase::get_visible_child_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_get_visible_child_name;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_stack_remove (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// void gtk_stack_remove (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
void base::StackBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_stack_set_hhomogeneous (GtkStack* stack /*none*/, gboolean hhomogeneous);
// void gtk_stack_set_hhomogeneous (::GtkStack* stack /*none*/, gboolean hhomogeneous);
void base::StackBase::set_hhomogeneous (gboolean hhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean hhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_hhomogeneous;
  auto hhomogeneous_to_c = hhomogeneous;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (hhomogeneous_to_c));
}

// void gtk_stack_set_interpolate_size (GtkStack* stack /*none*/, gboolean interpolate_size);
// void gtk_stack_set_interpolate_size (::GtkStack* stack /*none*/, gboolean interpolate_size);
void base::StackBase::set_interpolate_size (gboolean interpolate_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean interpolate_size);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_interpolate_size;
  auto interpolate_size_to_c = interpolate_size;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (interpolate_size_to_c));
}

// void gtk_stack_set_transition_duration (GtkStack* stack /*none*/, guint duration);
// void gtk_stack_set_transition_duration (::GtkStack* stack /*none*/, guint duration);
void base::StackBase::set_transition_duration (guint duration) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, guint duration);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_transition_duration;
  auto duration_to_c = duration;
  call_wrap_v ((::GtkStack*) (gobj_()), (guint) (duration_to_c));
}

// void gtk_stack_set_transition_type (GtkStack* stack /*none*/, GtkStackTransitionType transition);
// void gtk_stack_set_transition_type (::GtkStack* stack /*none*/, ::GtkStackTransitionType transition);
void base::StackBase::set_transition_type (Gtk::StackTransitionType transition) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkStackTransitionType transition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_transition_type;
  auto transition_to_c = gi::unwrap (transition);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkStackTransitionType) (transition_to_c));
}

// void gtk_stack_set_vhomogeneous (GtkStack* stack /*none*/, gboolean vhomogeneous);
// void gtk_stack_set_vhomogeneous (::GtkStack* stack /*none*/, gboolean vhomogeneous);
void base::StackBase::set_vhomogeneous (gboolean vhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean vhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_vhomogeneous;
  auto vhomogeneous_to_c = vhomogeneous;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (vhomogeneous_to_c));
}

// void gtk_stack_set_visible_child (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// void gtk_stack_set_visible_child (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
void base::StackBase::set_visible_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_visible_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_stack_set_visible_child_full (GtkStack* stack /*none*/, const char* name /*none*/, GtkStackTransitionType transition);
// void gtk_stack_set_visible_child_full (::GtkStack* stack /*none*/, const char* name /*none*/, ::GtkStackTransitionType transition);
void base::StackBase::set_visible_child_full (const gi::cstring_v name, Gtk::StackTransitionType transition) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, const char* name, ::GtkStackTransitionType transition);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_visible_child_full;
  auto transition_to_c = gi::unwrap (transition);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkStack*) (gobj_()), (const char*) (name_to_c), (::GtkStackTransitionType) (transition_to_c));
}

// void gtk_stack_set_visible_child_name (GtkStack* stack /*none*/, const char* name /*none*/);
// void gtk_stack_set_visible_child_name (::GtkStack* stack /*none*/, const char* name /*none*/);
void base::StackBase::set_visible_child_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_set_visible_child_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkStack*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stack_extra_def_impl.hpp>)
#include <gtk/stack_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stack_extra_impl.hpp>)
#include <gtk/stack_extra_impl.hpp>
#endif
#endif

#endif
