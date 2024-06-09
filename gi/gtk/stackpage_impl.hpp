// AUTO-GENERATED

#ifndef _GI_GTK_STACKPAGE_IMPL_HPP_
#define _GI_GTK_STACKPAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Accessible StackPageBase::interface_ (gi::interface_tag<Gtk::Accessible>)
{ return gi::wrap ((Gtk::Accessible::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

StackPageBase::operator Gtk::Accessible ()
{ return interface_ (gi::interface_tag<Gtk::Accessible>()); }

// GtkWidget* /*none*/ gtk_stack_page_get_child (GtkStackPage* self /*none*/);
// ::GtkWidget* /*none*/ gtk_stack_page_get_child (::GtkStackPage* self /*none*/);
Gtk::Widget base::StackPageBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_child;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_stack_page_get_icon_name (GtkStackPage* self /*none*/);
// const char* /*none,nullable*/ gtk_stack_page_get_icon_name (::GtkStackPage* self /*none*/);
gi::cstring_v base::StackPageBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_stack_page_get_name (GtkStackPage* self /*none*/);
// const char* /*none,nullable*/ gtk_stack_page_get_name (::GtkStackPage* self /*none*/);
gi::cstring_v base::StackPageBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_name;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_stack_page_get_needs_attention (GtkStackPage* self /*none*/);
// gboolean gtk_stack_page_get_needs_attention (::GtkStackPage* self /*none*/);
bool base::StackPageBase::get_needs_attention () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_needs_attention;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_stack_page_get_title (GtkStackPage* self /*none*/);
// const char* /*none,nullable*/ gtk_stack_page_get_title (::GtkStackPage* self /*none*/);
gi::cstring_v base::StackPageBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_title;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_stack_page_get_use_underline (GtkStackPage* self /*none*/);
// gboolean gtk_stack_page_get_use_underline (::GtkStackPage* self /*none*/);
bool base::StackPageBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_stack_page_get_visible (GtkStackPage* self /*none*/);
// gboolean gtk_stack_page_get_visible (::GtkStackPage* self /*none*/);
bool base::StackPageBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStackPage* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkStackPage*) (gobj_()));
  return _temp_ret;
}

// void gtk_stack_page_set_icon_name (GtkStackPage* self /*none*/, const char* setting /*none*/);
// void gtk_stack_page_set_icon_name (::GtkStackPage* self /*none*/, const char* setting /*none*/);
void base::StackPageBase::set_icon_name (const gi::cstring_v setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackPage* self, const char* setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_set_icon_name;
  auto setting_to_c = gi::unwrap (setting, gi::transfer_none);
  call_wrap_v ((::GtkStackPage*) (gobj_()), (const char*) (setting_to_c));
}

// void gtk_stack_page_set_name (GtkStackPage* self /*none*/, const char* setting /*none*/);
// void gtk_stack_page_set_name (::GtkStackPage* self /*none*/, const char* setting /*none*/);
void base::StackPageBase::set_name (const gi::cstring_v setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackPage* self, const char* setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_set_name;
  auto setting_to_c = gi::unwrap (setting, gi::transfer_none);
  call_wrap_v ((::GtkStackPage*) (gobj_()), (const char*) (setting_to_c));
}

// void gtk_stack_page_set_needs_attention (GtkStackPage* self /*none*/, gboolean setting);
// void gtk_stack_page_set_needs_attention (::GtkStackPage* self /*none*/, gboolean setting);
void base::StackPageBase::set_needs_attention (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackPage* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_set_needs_attention;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkStackPage*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_stack_page_set_title (GtkStackPage* self /*none*/, const char* setting /*none*/);
// void gtk_stack_page_set_title (::GtkStackPage* self /*none*/, const char* setting /*none*/);
void base::StackPageBase::set_title (const gi::cstring_v setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackPage* self, const char* setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_set_title;
  auto setting_to_c = gi::unwrap (setting, gi::transfer_none);
  call_wrap_v ((::GtkStackPage*) (gobj_()), (const char*) (setting_to_c));
}

// void gtk_stack_page_set_use_underline (GtkStackPage* self /*none*/, gboolean setting);
// void gtk_stack_page_set_use_underline (::GtkStackPage* self /*none*/, gboolean setting);
void base::StackPageBase::set_use_underline (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackPage* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_set_use_underline;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkStackPage*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_stack_page_set_visible (GtkStackPage* self /*none*/, gboolean visible);
// void gtk_stack_page_set_visible (::GtkStackPage* self /*none*/, gboolean visible);
void base::StackPageBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackPage* self, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_stack_page_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkStackPage*) (gobj_()), (gboolean) (visible_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackpage_extra_def_impl.hpp>)
#include <gtk/stackpage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackpage_extra_impl.hpp>)
#include <gtk/stackpage_extra_impl.hpp>
#endif
#endif

#endif
