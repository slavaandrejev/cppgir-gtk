// AUTO-GENERATED

#ifndef _GI_GTK_LINKBUTTON_IMPL_HPP_
#define _GI_GTK_LINKBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_link_button_new (const char* uri /*none*/);
// ::GtkLinkButton* /*none*/ gtk_link_button_new (const char* uri /*none*/);
Gtk::LinkButton base::LinkButtonBase::new_ (const gi::cstring_v uri) noexcept
{
  typedef ::GtkLinkButton* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_new;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_link_button_new_with_label (const char* uri /*none*/, const char* label /*none,nullable*/);
// ::GtkLinkButton* /*none*/ gtk_link_button_new_with_label (const char* uri /*none*/, const char* label /*none,nullable*/);
Gtk::LinkButton base::LinkButtonBase::new_with_label (const gi::cstring_v uri, const gi::cstring_v label) noexcept
{
  typedef ::GtkLinkButton* (*call_wrap_t) (const char* uri, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::LinkButton base::LinkButtonBase::new_with_label (const gi::cstring_v uri) noexcept
{
  typedef ::GtkLinkButton* (*call_wrap_t) (const char* uri, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_new_with_label;
  auto label_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ gtk_link_button_get_uri (GtkLinkButton* link_button /*none*/);
// const char* /*none*/ gtk_link_button_get_uri (::GtkLinkButton* link_button /*none*/);
gi::cstring_v base::LinkButtonBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLinkButton* link_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_link_button_get_uri;
  auto _temp_ret = call_wrap_v ((::GtkLinkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_link_button_get_visited (GtkLinkButton* link_button /*none*/);
// gboolean gtk_link_button_get_visited (::GtkLinkButton* link_button /*none*/);
bool base::LinkButtonBase::get_visited () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLinkButton* link_button);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_link_button_get_visited;
  auto _temp_ret = call_wrap_v ((::GtkLinkButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_link_button_set_uri (GtkLinkButton* link_button /*none*/, const char* uri /*none*/);
// void gtk_link_button_set_uri (::GtkLinkButton* link_button /*none*/, const char* uri /*none*/);
void base::LinkButtonBase::set_uri (const gi::cstring_v uri) noexcept
{
  typedef void (*call_wrap_t) (::GtkLinkButton* link_button, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_link_button_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none);
  call_wrap_v ((::GtkLinkButton*) (gobj_()), (const char*) (uri_to_c));
}

// void gtk_link_button_set_visited (GtkLinkButton* link_button /*none*/, gboolean visited);
// void gtk_link_button_set_visited (::GtkLinkButton* link_button /*none*/, gboolean visited);
void base::LinkButtonBase::set_visited (gboolean visited) noexcept
{
  typedef void (*call_wrap_t) (::GtkLinkButton* link_button, gboolean visited);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_link_button_set_visited;
  auto visited_to_c = visited;
  call_wrap_v ((::GtkLinkButton*) (gobj_()), (gboolean) (visited_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra_def_impl.hpp>)
#include <gtk/linkbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra_impl.hpp>)
#include <gtk/linkbutton_extra_impl.hpp>
#endif
#endif

#endif
