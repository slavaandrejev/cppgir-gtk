// AUTO-GENERATED

#ifndef _GI_GTK_CUSTOMFILTER_IMPL_HPP_
#define _GI_GTK_CUSTOMFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCustomFilter* /*full*/ gtk_custom_filter_new (GtkCustomFilterFunc match_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// ::GtkCustomFilter* /*full*/ gtk_custom_filter_new (Gtk::CustomFilterFunc::cfunction_type match_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
Gtk::CustomFilter base::CustomFilterBase::new_ (Gtk::CustomFilterFunc match_func) noexcept
{
  typedef ::GtkCustomFilter* (*call_wrap_t) (Gtk::CustomFilterFunc::cfunction_type match_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_custom_filter_new;
  auto match_func_wrap_ = match_func ? unwrap (std::move (match_func), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((Gtk::CustomFilterFunc::cfunction_type) (match_func_wrap_ ? &match_func_wrap_->wrapper : nullptr), (void*) (match_func_wrap_), (GLib::DestroyNotify::cfunction_type) (match_func_wrap_ ? &match_func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_custom_filter_set_filter_func (GtkCustomFilter* self /*none*/, GtkCustomFilterFunc match_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// void gtk_custom_filter_set_filter_func (::GtkCustomFilter* self /*none*/, Gtk::CustomFilterFunc::cfunction_type match_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
void base::CustomFilterBase::set_filter_func (Gtk::CustomFilterFunc match_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkCustomFilter* self, Gtk::CustomFilterFunc::cfunction_type match_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_custom_filter_set_filter_func;
  auto match_func_wrap_ = match_func ? unwrap (std::move (match_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkCustomFilter*) (gobj_()), (Gtk::CustomFilterFunc::cfunction_type) (match_func_wrap_ ? &match_func_wrap_->wrapper : nullptr), (void*) (match_func_wrap_), (GLib::DestroyNotify::cfunction_type) (match_func_wrap_ ? &match_func_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/customfilter_extra_def_impl.hpp>)
#include <gtk/customfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/customfilter_extra_impl.hpp>)
#include <gtk/customfilter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CustomFilterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCustomFilterClass *methods = (::GtkCustomFilterClass *) class_struct;
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
