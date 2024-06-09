// AUTO-GENERATED

#ifndef _GI_GTK_VOLUMEBUTTON_IMPL_HPP_
#define _GI_GTK_VOLUMEBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_volume_button_new ();
// ::GtkVolumeButton* /*none*/ gtk_volume_button_new ();
Gtk::VolumeButton base::VolumeButtonBase::new_ () noexcept
{
  typedef ::GtkVolumeButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_volume_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/volumebutton_extra_def_impl.hpp>)
#include <gtk/volumebutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/volumebutton_extra_impl.hpp>)
#include <gtk/volumebutton_extra_impl.hpp>
#endif
#endif

#endif
