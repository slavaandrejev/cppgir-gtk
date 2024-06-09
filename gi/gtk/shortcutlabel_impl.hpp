// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTLABEL_IMPL_HPP_
#define _GI_GTK_SHORTCUTLABEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_shortcut_label_new (const char* accelerator /*none*/);
// ::GtkShortcutLabel* /*none*/ gtk_shortcut_label_new (const char* accelerator /*none*/);
Gtk::ShortcutLabel base::ShortcutLabelBase::new_ (const gi::cstring_v accelerator) noexcept
{
  typedef ::GtkShortcutLabel* (*call_wrap_t) (const char* accelerator);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_shortcut_label_new;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (accelerator_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_shortcut_label_get_accelerator (GtkShortcutLabel* self /*none*/);
// const char* /*none,nullable*/ gtk_shortcut_label_get_accelerator (::GtkShortcutLabel* self /*none*/);
gi::cstring_v base::ShortcutLabelBase::get_accelerator () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkShortcutLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_label_get_accelerator;
  auto _temp_ret = call_wrap_v ((::GtkShortcutLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_shortcut_label_get_disabled_text (GtkShortcutLabel* self /*none*/);
// const char* /*none,nullable*/ gtk_shortcut_label_get_disabled_text (::GtkShortcutLabel* self /*none*/);
gi::cstring_v base::ShortcutLabelBase::get_disabled_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkShortcutLabel* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_label_get_disabled_text;
  auto _temp_ret = call_wrap_v ((::GtkShortcutLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_shortcut_label_set_accelerator (GtkShortcutLabel* self /*none*/, const char* accelerator /*none*/);
// void gtk_shortcut_label_set_accelerator (::GtkShortcutLabel* self /*none*/, const char* accelerator /*none*/);
void base::ShortcutLabelBase::set_accelerator (const gi::cstring_v accelerator) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutLabel* self, const char* accelerator);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_label_set_accelerator;
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none);
  call_wrap_v ((::GtkShortcutLabel*) (gobj_()), (const char*) (accelerator_to_c));
}

// void gtk_shortcut_label_set_disabled_text (GtkShortcutLabel* self /*none*/, const char* disabled_text /*none*/);
// void gtk_shortcut_label_set_disabled_text (::GtkShortcutLabel* self /*none*/, const char* disabled_text /*none*/);
void base::ShortcutLabelBase::set_disabled_text (const gi::cstring_v disabled_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkShortcutLabel* self, const char* disabled_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_shortcut_label_set_disabled_text;
  auto disabled_text_to_c = gi::unwrap (disabled_text, gi::transfer_none);
  call_wrap_v ((::GtkShortcutLabel*) (gobj_()), (const char*) (disabled_text_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutlabel_extra_def_impl.hpp>)
#include <gtk/shortcutlabel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutlabel_extra_impl.hpp>)
#include <gtk/shortcutlabel_extra_impl.hpp>
#endif
#endif

#endif
