// AUTO-GENERATED

#ifndef _GI_GTK_EMOJICHOOSER_IMPL_HPP_
#define _GI_GTK_EMOJICHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_emoji_chooser_new ();
// ::GtkEmojiChooser* /*none*/ gtk_emoji_chooser_new ();
Gtk::EmojiChooser base::EmojiChooserBase::new_ () noexcept
{
  typedef ::GtkEmojiChooser* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_emoji_chooser_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/emojichooser_extra_def_impl.hpp>)
#include <gtk/emojichooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/emojichooser_extra_impl.hpp>)
#include <gtk/emojichooser_extra_impl.hpp>
#endif
#endif

#endif
