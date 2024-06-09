// AUTO-GENERATED

#ifndef _GI_GTK_ANYFILTER_IMPL_HPP_
#define _GI_GTK_ANYFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkAnyFilter* /*full*/ gtk_any_filter_new ();
// ::GtkAnyFilter* /*full*/ gtk_any_filter_new ();
Gtk::AnyFilter base::AnyFilterBase::new_ () noexcept
{
  typedef ::GtkAnyFilter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_any_filter_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/anyfilter_extra_def_impl.hpp>)
#include <gtk/anyfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/anyfilter_extra_impl.hpp>)
#include <gtk/anyfilter_extra_impl.hpp>
#endif
#endif

#endif
