// AUTO-GENERATED

#ifndef _GI_GTK_MEDIACONTROLS_IMPL_HPP_
#define _GI_GTK_MEDIACONTROLS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_media_controls_new (GtkMediaStream* stream /*none,nullable*/);
// ::GtkMediaControls* /*none*/ gtk_media_controls_new (::GtkMediaStream* stream /*none,nullable*/);
Gtk::MediaControls base::MediaControlsBase::new_ (Gtk::MediaStream stream) noexcept
{
  typedef ::GtkMediaControls* (*call_wrap_t) (::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_controls_new;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::MediaControls base::MediaControlsBase::new_ () noexcept
{
  typedef ::GtkMediaControls* (*call_wrap_t) (::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_media_controls_new;
  auto stream_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkMediaStream*) (stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkMediaStream* /*none,nullable*/ gtk_media_controls_get_media_stream (GtkMediaControls* controls /*none*/);
// ::GtkMediaStream* /*none,nullable*/ gtk_media_controls_get_media_stream (::GtkMediaControls* controls /*none*/);
Gtk::MediaStream base::MediaControlsBase::get_media_stream () noexcept
{
  typedef ::GtkMediaStream* (*call_wrap_t) (::GtkMediaControls* controls);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_controls_get_media_stream;
  auto _temp_ret = call_wrap_v ((::GtkMediaControls*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_media_controls_set_media_stream (GtkMediaControls* controls /*none*/, GtkMediaStream* stream /*none,nullable*/);
// void gtk_media_controls_set_media_stream (::GtkMediaControls* controls /*none*/, ::GtkMediaStream* stream /*none,nullable*/);
void base::MediaControlsBase::set_media_stream (Gtk::MediaStream stream) noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaControls* controls, ::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_controls_set_media_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none);
  call_wrap_v ((::GtkMediaControls*) (gobj_()), (::GtkMediaStream*) (stream_to_c));
}
void base::MediaControlsBase::set_media_stream () noexcept
{
  typedef void (*call_wrap_t) (::GtkMediaControls* controls, ::GtkMediaStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_media_controls_set_media_stream;
  auto stream_to_c = nullptr;
  call_wrap_v ((::GtkMediaControls*) (gobj_()), (::GtkMediaStream*) (stream_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mediacontrols_extra_def_impl.hpp>)
#include <gtk/mediacontrols_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mediacontrols_extra_impl.hpp>)
#include <gtk/mediacontrols_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MediaControlsClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMediaControlsClass *methods = (::GtkMediaControlsClass *) class_struct;
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
