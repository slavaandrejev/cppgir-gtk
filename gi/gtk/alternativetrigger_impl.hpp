// AUTO-GENERATED

#ifndef _GI_GTK_ALTERNATIVETRIGGER_IMPL_HPP_
#define _GI_GTK_ALTERNATIVETRIGGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkShortcutTrigger* /*full*/ gtk_alternative_trigger_new (GtkShortcutTrigger* first /*full*/, GtkShortcutTrigger* second /*full*/);
// ::GtkAlternativeTrigger* /*full*/ gtk_alternative_trigger_new (::GtkShortcutTrigger* first /*full*/, ::GtkShortcutTrigger* second /*full*/);
Gtk::AlternativeTrigger base::AlternativeTriggerBase::new_ (Gtk::ShortcutTrigger first, Gtk::ShortcutTrigger second) noexcept
{
  typedef ::GtkAlternativeTrigger* (*call_wrap_t) (::GtkShortcutTrigger* first, ::GtkShortcutTrigger* second);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_alternative_trigger_new;
  auto second_to_c = gi::unwrap (second, gi::transfer_full);
  auto first_to_c = gi::unwrap (first, gi::transfer_full);
  auto _temp_ret = call_wrap_v ((::GtkShortcutTrigger*) (first_to_c), (::GtkShortcutTrigger*) (second_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_first (GtkAlternativeTrigger* self /*none*/);
// ::GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_first (::GtkAlternativeTrigger* self /*none*/);
Gtk::ShortcutTrigger base::AlternativeTriggerBase::get_first () noexcept
{
  typedef ::GtkShortcutTrigger* (*call_wrap_t) (::GtkAlternativeTrigger* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alternative_trigger_get_first;
  auto _temp_ret = call_wrap_v ((::GtkAlternativeTrigger*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_second (GtkAlternativeTrigger* self /*none*/);
// ::GtkShortcutTrigger* /*none*/ gtk_alternative_trigger_get_second (::GtkAlternativeTrigger* self /*none*/);
Gtk::ShortcutTrigger base::AlternativeTriggerBase::get_second () noexcept
{
  typedef ::GtkShortcutTrigger* (*call_wrap_t) (::GtkAlternativeTrigger* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_alternative_trigger_get_second;
  auto _temp_ret = call_wrap_v ((::GtkAlternativeTrigger*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/alternativetrigger_extra_def_impl.hpp>)
#include <gtk/alternativetrigger_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/alternativetrigger_extra_impl.hpp>)
#include <gtk/alternativetrigger_extra_impl.hpp>
#endif
#endif

#endif
