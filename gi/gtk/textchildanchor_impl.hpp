// AUTO-GENERATED

#ifndef _GI_GTK_TEXTCHILDANCHOR_IMPL_HPP_
#define _GI_GTK_TEXTCHILDANCHOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new ();
// ::GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new ();
Gtk::TextChildAnchor base::TextChildAnchorBase::new_ () noexcept
{
  typedef ::GtkTextChildAnchor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_child_anchor_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new_with_replacement (const char* character /*none*/);
// ::GtkTextChildAnchor* /*full*/ gtk_text_child_anchor_new_with_replacement (const char* character /*none*/);
Gtk::TextChildAnchor base::TextChildAnchorBase::new_with_replacement (const gi::cstring_v character) noexcept
{
  typedef ::GtkTextChildAnchor* (*call_wrap_t) (const char* character);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_child_anchor_new_with_replacement;
  auto character_to_c = gi::unwrap (character, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (character_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_text_child_anchor_get_deleted (GtkTextChildAnchor* anchor /*none*/);
// gboolean gtk_text_child_anchor_get_deleted (::GtkTextChildAnchor* anchor /*none*/);
bool base::TextChildAnchorBase::get_deleted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_child_anchor_get_deleted;
  auto _temp_ret = call_wrap_v ((::GtkTextChildAnchor*) (gobj_()));
  return _temp_ret;
}

// GtkWidget** /*container*/ gtk_text_child_anchor_get_widgets (GtkTextChildAnchor* anchor /*none*/, guint* out_len);
// ::GtkWidget** /*container*/ gtk_text_child_anchor_get_widgets (::GtkTextChildAnchor* anchor /*none*/, guint* out_len);
gi::Collection<gi::DSpan, ::GtkWidget*, gi::transfer_container_t> base::TextChildAnchorBase::get_widgets () noexcept
{
  typedef ::GtkWidget** (*call_wrap_t) (::GtkTextChildAnchor* anchor, guint* out_len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_child_anchor_get_widgets;
  guint out_len;
  auto _ret_o = call_wrap_v ((::GtkTextChildAnchor*) (gobj_()), (guint*) (&out_len));
  gi::Collection<gi::DSpan, ::GtkWidget*, gi::transfer_container_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, ::GtkWidget*, gi::transfer_container_t>>(_ret_o, out_len, gi::transfer_container);
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textchildanchor_extra_def_impl.hpp>)
#include <gtk/textchildanchor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textchildanchor_extra_impl.hpp>)
#include <gtk/textchildanchor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextChildAnchorClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTextChildAnchorClass *methods = (::GtkTextChildAnchorClass *) class_struct;
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
