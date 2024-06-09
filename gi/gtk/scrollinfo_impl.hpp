// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLINFO_IMPL_HPP_
#define _GI_GTK_SCROLLINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkScrollInfo* /*full*/ gtk_scroll_info_new ();
// ::GtkScrollInfo* /*full*/ gtk_scroll_info_new ();
Gtk::ScrollInfo base::ScrollInfoBase::new_ () noexcept
{
  typedef ::GtkScrollInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scroll_info_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_scroll_info_get_enable_horizontal (GtkScrollInfo* self /*none*/);
// gboolean gtk_scroll_info_get_enable_horizontal (::GtkScrollInfo* self /*none*/);
bool base::ScrollInfoBase::get_enable_horizontal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrollInfo* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scroll_info_get_enable_horizontal;
  auto _temp_ret = call_wrap_v ((::GtkScrollInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scroll_info_get_enable_vertical (GtkScrollInfo* self /*none*/);
// gboolean gtk_scroll_info_get_enable_vertical (::GtkScrollInfo* self /*none*/);
bool base::ScrollInfoBase::get_enable_vertical () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScrollInfo* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scroll_info_get_enable_vertical;
  auto _temp_ret = call_wrap_v ((::GtkScrollInfo*) (gobj_()));
  return _temp_ret;
}

// GtkScrollInfo* /*full*/ gtk_scroll_info_ref (GtkScrollInfo* self /*none*/);
// ::GtkScrollInfo* /*full*/ gtk_scroll_info_ref (::GtkScrollInfo* self /*none*/);
// IGNORE; marked ignore

// void gtk_scroll_info_set_enable_horizontal (GtkScrollInfo* self /*none*/, gboolean horizontal);
// void gtk_scroll_info_set_enable_horizontal (::GtkScrollInfo* self /*none*/, gboolean horizontal);
void base::ScrollInfoBase::set_enable_horizontal (gboolean horizontal) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollInfo* self, gboolean horizontal);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scroll_info_set_enable_horizontal;
  auto horizontal_to_c = horizontal;
  call_wrap_v ((::GtkScrollInfo*) (gobj_()), (gboolean) (horizontal_to_c));
}

// void gtk_scroll_info_set_enable_vertical (GtkScrollInfo* self /*none*/, gboolean vertical);
// void gtk_scroll_info_set_enable_vertical (::GtkScrollInfo* self /*none*/, gboolean vertical);
void base::ScrollInfoBase::set_enable_vertical (gboolean vertical) noexcept
{
  typedef void (*call_wrap_t) (::GtkScrollInfo* self, gboolean vertical);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_scroll_info_set_enable_vertical;
  auto vertical_to_c = vertical;
  call_wrap_v ((::GtkScrollInfo*) (gobj_()), (gboolean) (vertical_to_c));
}

// void gtk_scroll_info_unref (GtkScrollInfo* self /*none*/);
// void gtk_scroll_info_unref (::GtkScrollInfo* self /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollinfo_extra_def_impl.hpp>)
#include <gtk/scrollinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollinfo_extra_impl.hpp>)
#include <gtk/scrollinfo_extra_impl.hpp>
#endif
#endif

#endif
