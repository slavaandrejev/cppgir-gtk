// AUTO-GENERATED

#ifndef _GI_GTK_CUSTOMSORTER_IMPL_HPP_
#define _GI_GTK_CUSTOMSORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCustomSorter* /*full*/ gtk_custom_sorter_new (GCompareDataFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none,nullable*/);
// ::GtkCustomSorter* /*full*/ gtk_custom_sorter_new (GLib::CompareDataFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none,nullable*/);
Gtk::CustomSorter base::CustomSorterBase::new_ (GLib::CompareDataFunc sort_func) noexcept
{
  typedef ::GtkCustomSorter* (*call_wrap_t) (GLib::CompareDataFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_custom_sorter_new;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((GLib::CompareDataFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_custom_sorter_set_sort_func (GtkCustomSorter* self /*none*/, GCompareDataFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// void gtk_custom_sorter_set_sort_func (::GtkCustomSorter* self /*none*/, GLib::CompareDataFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
void base::CustomSorterBase::set_sort_func (GLib::CompareDataFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkCustomSorter* self, GLib::CompareDataFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_custom_sorter_set_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkCustomSorter*) (gobj_()), (GLib::CompareDataFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/customsorter_extra_def_impl.hpp>)
#include <gtk/customsorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/customsorter_extra_impl.hpp>)
#include <gtk/customsorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CustomSorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCustomSorterClass *methods = (::GtkCustomSorterClass *) class_struct;
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
