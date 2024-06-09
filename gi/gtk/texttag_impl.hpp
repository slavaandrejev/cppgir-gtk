// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAG_IMPL_HPP_
#define _GI_GTK_TEXTTAG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextTag* /*full*/ gtk_text_tag_new (const char* name /*none,nullable*/);
// ::GtkTextTag* /*full*/ gtk_text_tag_new (const char* name /*none,nullable*/);
Gtk::TextTag base::TextTagBase::new_ (const gi::cstring_v name) noexcept
{
  typedef ::GtkTextTag* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_new;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::TextTag base::TextTagBase::new_ () noexcept
{
  typedef ::GtkTextTag* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_new;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_text_tag_changed (GtkTextTag* tag /*none*/, gboolean size_changed);
// void gtk_text_tag_changed (::GtkTextTag* tag /*none*/, gboolean size_changed);
void base::TextTagBase::changed (gboolean size_changed) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTag* tag, gboolean size_changed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_changed;
  auto size_changed_to_c = size_changed;
  call_wrap_v ((::GtkTextTag*) (gobj_()), (gboolean) (size_changed_to_c));
}

// int gtk_text_tag_get_priority (GtkTextTag* tag /*none*/);
// gint gtk_text_tag_get_priority (::GtkTextTag* tag /*none*/);
gint base::TextTagBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_get_priority;
  auto _temp_ret = call_wrap_v ((::GtkTextTag*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_tag_set_priority (GtkTextTag* tag /*none*/, int priority);
// void gtk_text_tag_set_priority (::GtkTextTag* tag /*none*/, gint priority);
void base::TextTagBase::set_priority (gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTag* tag, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_tag_set_priority;
  auto priority_to_c = priority;
  call_wrap_v ((::GtkTextTag*) (gobj_()), (gint) (priority_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttag_extra_def_impl.hpp>)
#include <gtk/texttag_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttag_extra_impl.hpp>)
#include <gtk/texttag_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextTagClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTextTagClass *methods = (::GtkTextTagClass *) class_struct;
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
