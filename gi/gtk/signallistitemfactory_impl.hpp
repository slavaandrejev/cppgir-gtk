// AUTO-GENERATED

#ifndef _GI_GTK_SIGNALLISTITEMFACTORY_IMPL_HPP_
#define _GI_GTK_SIGNALLISTITEMFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkListItemFactory* /*full*/ gtk_signal_list_item_factory_new ();
// ::GtkSignalListItemFactory* /*full*/ gtk_signal_list_item_factory_new ();
Gtk::SignalListItemFactory base::SignalListItemFactoryBase::new_ () noexcept
{
  typedef ::GtkSignalListItemFactory* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_signal_list_item_factory_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/signallistitemfactory_extra_def_impl.hpp>)
#include <gtk/signallistitemfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/signallistitemfactory_extra_impl.hpp>)
#include <gtk/signallistitemfactory_extra_impl.hpp>
#endif
#endif

#endif
