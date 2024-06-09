// AUTO-GENERATED

#ifndef _GI_GTK_EVERYFILTER_IMPL_HPP_
#define _GI_GTK_EVERYFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEveryFilter* /*full*/ gtk_every_filter_new ();
// ::GtkEveryFilter* /*full*/ gtk_every_filter_new ();
Gtk::EveryFilter base::EveryFilterBase::new_ () noexcept
{
  typedef ::GtkEveryFilter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_every_filter_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/everyfilter_extra_def_impl.hpp>)
#include <gtk/everyfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/everyfilter_extra_impl.hpp>)
#include <gtk/everyfilter_extra_impl.hpp>
#endif
#endif

#endif
