// AUTO-GENERATED

#ifndef _GI_GTK_STATUSBAR_IMPL_HPP_
#define _GI_GTK_STATUSBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_statusbar_new ();
// ::GtkStatusbar* /*none*/ gtk_statusbar_new ();
Gtk::Statusbar base::StatusbarBase::new_ () noexcept
{
  typedef ::GtkStatusbar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_statusbar_get_context_id (GtkStatusbar* statusbar /*none*/, const char* context_description /*none*/);
// guint gtk_statusbar_get_context_id (::GtkStatusbar* statusbar /*none*/, const char* context_description /*none*/);
guint base::StatusbarBase::get_context_id (const gi::cstring_v context_description) noexcept
{
  typedef guint (*call_wrap_t) (::GtkStatusbar* statusbar, const char* context_description);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_statusbar_get_context_id;
  auto context_description_to_c = gi::unwrap (context_description, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStatusbar*) (gobj_()), (const char*) (context_description_to_c));
  return _temp_ret;
}

// void gtk_statusbar_pop (GtkStatusbar* statusbar /*none*/, guint context_id);
// void gtk_statusbar_pop (::GtkStatusbar* statusbar /*none*/, guint context_id);
void base::StatusbarBase::pop (guint context_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_statusbar_pop;
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c));
}

// guint gtk_statusbar_push (GtkStatusbar* statusbar /*none*/, guint context_id, const char* text /*none*/);
// guint gtk_statusbar_push (::GtkStatusbar* statusbar /*none*/, guint context_id, const char* text /*none*/);
guint base::StatusbarBase::push (guint context_id, const gi::cstring_v text) noexcept
{
  typedef guint (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_statusbar_push;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto context_id_to_c = context_id;
  auto _temp_ret = call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c), (const char*) (text_to_c));
  return _temp_ret;
}

// void gtk_statusbar_remove (GtkStatusbar* statusbar /*none*/, guint context_id, guint message_id);
// void gtk_statusbar_remove (::GtkStatusbar* statusbar /*none*/, guint context_id, guint message_id);
void base::StatusbarBase::remove (guint context_id, guint message_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id, guint message_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_statusbar_remove;
  auto message_id_to_c = message_id;
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c), (guint) (message_id_to_c));
}

// void gtk_statusbar_remove_all (GtkStatusbar* statusbar /*none*/, guint context_id);
// void gtk_statusbar_remove_all (::GtkStatusbar* statusbar /*none*/, guint context_id);
void base::StatusbarBase::remove_all (guint context_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_statusbar_remove_all;
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra_def_impl.hpp>)
#include <gtk/statusbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra_impl.hpp>)
#include <gtk/statusbar_extra_impl.hpp>
#endif
#endif

#endif
