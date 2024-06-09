// AUTO-GENERATED

#ifndef _GI_GTK_SPINNER_IMPL_HPP_
#define _GI_GTK_SPINNER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_spinner_new ();
// ::GtkSpinner* /*none*/ gtk_spinner_new ();
Gtk::Spinner base::SpinnerBase::new_ () noexcept
{
  typedef ::GtkSpinner* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spinner_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_spinner_get_spinning (GtkSpinner* spinner /*none*/);
// gboolean gtk_spinner_get_spinning (::GtkSpinner* spinner /*none*/);
bool base::SpinnerBase::get_spinning () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinner* spinner);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spinner_get_spinning;
  auto _temp_ret = call_wrap_v ((::GtkSpinner*) (gobj_()));
  return _temp_ret;
}

// void gtk_spinner_set_spinning (GtkSpinner* spinner /*none*/, gboolean spinning);
// void gtk_spinner_set_spinning (::GtkSpinner* spinner /*none*/, gboolean spinning);
void base::SpinnerBase::set_spinning (gboolean spinning) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinner* spinner, gboolean spinning);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spinner_set_spinning;
  auto spinning_to_c = spinning;
  call_wrap_v ((::GtkSpinner*) (gobj_()), (gboolean) (spinning_to_c));
}

// void gtk_spinner_start (GtkSpinner* spinner /*none*/);
// void gtk_spinner_start (::GtkSpinner* spinner /*none*/);
void base::SpinnerBase::start () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinner* spinner);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spinner_start;
  call_wrap_v ((::GtkSpinner*) (gobj_()));
}

// void gtk_spinner_stop (GtkSpinner* spinner /*none*/);
// void gtk_spinner_stop (::GtkSpinner* spinner /*none*/);
void base::SpinnerBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinner* spinner);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_spinner_stop;
  call_wrap_v ((::GtkSpinner*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra_def_impl.hpp>)
#include <gtk/spinner_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra_impl.hpp>)
#include <gtk/spinner_extra_impl.hpp>
#endif
#endif

#endif
