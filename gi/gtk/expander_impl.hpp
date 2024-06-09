// AUTO-GENERATED

#ifndef _GI_GTK_EXPANDER_IMPL_HPP_
#define _GI_GTK_EXPANDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_expander_new (const char* label /*none,nullable*/);
// ::GtkExpander* /*none*/ gtk_expander_new (const char* label /*none,nullable*/);
Gtk::Expander base::ExpanderBase::new_ (const gi::cstring_v label) noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Expander base::ExpanderBase::new_ () noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_expander_new_with_mnemonic (const char* label /*none,nullable*/);
// ::GtkExpander* /*none*/ gtk_expander_new_with_mnemonic (const char* label /*none,nullable*/);
Gtk::Expander base::ExpanderBase::new_with_mnemonic (const gi::cstring_v label) noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Expander base::ExpanderBase::new_with_mnemonic () noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new_with_mnemonic;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_expander_get_child (GtkExpander* expander /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_expander_get_child (::GtkExpander* expander /*none*/);
Gtk::Widget base::ExpanderBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_child;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_expander_get_expanded (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_expanded (::GtkExpander* expander /*none*/);
bool base::ExpanderBase::get_expanded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_expanded;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_expander_get_label (GtkExpander* expander /*none*/);
// const char* /*none,nullable*/ gtk_expander_get_label (::GtkExpander* expander /*none*/);
gi::cstring_v base::ExpanderBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_label;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_expander_get_label_widget (GtkExpander* expander /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_expander_get_label_widget (::GtkExpander* expander /*none*/);
Gtk::Widget base::ExpanderBase::get_label_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_label_widget;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_expander_get_resize_toplevel (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_resize_toplevel (::GtkExpander* expander /*none*/);
bool base::ExpanderBase::get_resize_toplevel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_resize_toplevel;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_expander_get_use_markup (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_use_markup (::GtkExpander* expander /*none*/);
bool base::ExpanderBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_use_markup;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_expander_get_use_underline (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_use_underline (::GtkExpander* expander /*none*/);
bool base::ExpanderBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// void gtk_expander_set_child (GtkExpander* expander /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_expander_set_child (::GtkExpander* expander /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::ExpanderBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkExpander*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::ExpanderBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkExpander*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_expander_set_expanded (GtkExpander* expander /*none*/, gboolean expanded);
// void gtk_expander_set_expanded (::GtkExpander* expander /*none*/, gboolean expanded);
void base::ExpanderBase::set_expanded (gboolean expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_expanded;
  auto expanded_to_c = expanded;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (expanded_to_c));
}

// void gtk_expander_set_label (GtkExpander* expander /*none*/, const char* label /*none,nullable*/);
// void gtk_expander_set_label (::GtkExpander* expander /*none*/, const char* label /*none,nullable*/);
void base::ExpanderBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkExpander*) (gobj_()), (const char*) (label_to_c));
}
void base::ExpanderBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkExpander*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_expander_set_label_widget (GtkExpander* expander /*none*/, GtkWidget* label_widget /*none,nullable*/);
// void gtk_expander_set_label_widget (::GtkExpander* expander /*none*/, ::GtkWidget* label_widget /*none,nullable*/);
void base::ExpanderBase::set_label_widget (Gtk::Widget label_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_label_widget;
  auto label_widget_to_c = gi::unwrap (label_widget, gi::transfer_none);
  call_wrap_v ((::GtkExpander*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}
void base::ExpanderBase::set_label_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_label_widget;
  auto label_widget_to_c = nullptr;
  call_wrap_v ((::GtkExpander*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}

// void gtk_expander_set_resize_toplevel (GtkExpander* expander /*none*/, gboolean resize_toplevel);
// void gtk_expander_set_resize_toplevel (::GtkExpander* expander /*none*/, gboolean resize_toplevel);
void base::ExpanderBase::set_resize_toplevel (gboolean resize_toplevel) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean resize_toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_resize_toplevel;
  auto resize_toplevel_to_c = resize_toplevel;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (resize_toplevel_to_c));
}

// void gtk_expander_set_use_markup (GtkExpander* expander /*none*/, gboolean use_markup);
// void gtk_expander_set_use_markup (::GtkExpander* expander /*none*/, gboolean use_markup);
void base::ExpanderBase::set_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (use_markup_to_c));
}

// void gtk_expander_set_use_underline (GtkExpander* expander /*none*/, gboolean use_underline);
// void gtk_expander_set_use_underline (::GtkExpander* expander /*none*/, gboolean use_underline);
void base::ExpanderBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expander_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (use_underline_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expander_extra_def_impl.hpp>)
#include <gtk/expander_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expander_extra_impl.hpp>)
#include <gtk/expander_extra_impl.hpp>
#endif
#endif

#endif
