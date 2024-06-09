// AUTO-GENERATED

#ifndef _GI_GTK_TOOLTIP_IMPL_HPP_
#define _GI_GTK_TOOLTIP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_tooltip_set_custom (GtkTooltip* tooltip /*none*/, GtkWidget* custom_widget /*none,nullable*/);
// void gtk_tooltip_set_custom (::GtkTooltip* tooltip /*none*/, ::GtkWidget* custom_widget /*none,nullable*/);
void base::TooltipBase::set_custom (Gtk::Widget custom_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GtkWidget* custom_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_custom;
  auto custom_widget_to_c = gi::unwrap (custom_widget, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GtkWidget*) (custom_widget_to_c));
}
void base::TooltipBase::set_custom () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GtkWidget* custom_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_custom;
  auto custom_widget_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GtkWidget*) (custom_widget_to_c));
}

// void gtk_tooltip_set_icon (GtkTooltip* tooltip /*none*/, GdkPaintable* paintable /*none,nullable*/);
// void gtk_tooltip_set_icon (::GtkTooltip* tooltip /*none*/, ::GdkPaintable* paintable /*none,nullable*/);
void base::TooltipBase::set_icon (Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_icon;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}
void base::TooltipBase::set_icon () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_icon;
  auto paintable_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GdkPaintable*) (paintable_to_c));
}

// void gtk_tooltip_set_icon_from_gicon (GtkTooltip* tooltip /*none*/, GIcon* gicon /*none,nullable*/);
// void gtk_tooltip_set_icon_from_gicon (::GtkTooltip* tooltip /*none*/, ::GIcon* gicon /*none,nullable*/);
void base::TooltipBase::set_icon_from_gicon (Gio::Icon gicon) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GIcon* gicon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_icon_from_gicon;
  auto gicon_to_c = gi::unwrap (gicon, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GIcon*) (gicon_to_c));
}
void base::TooltipBase::set_icon_from_gicon () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, ::GIcon* gicon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_icon_from_gicon;
  auto gicon_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (::GIcon*) (gicon_to_c));
}

// void gtk_tooltip_set_icon_from_icon_name (GtkTooltip* tooltip /*none*/, const char* icon_name /*none,nullable*/);
// void gtk_tooltip_set_icon_from_icon_name (::GtkTooltip* tooltip /*none*/, const char* icon_name /*none,nullable*/);
void base::TooltipBase::set_icon_from_icon_name (const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_icon_from_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::TooltipBase::set_icon_from_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_icon_from_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_tooltip_set_markup (GtkTooltip* tooltip /*none*/, const char* markup /*none,nullable*/);
// void gtk_tooltip_set_markup (::GtkTooltip* tooltip /*none*/, const char* markup /*none,nullable*/);
void base::TooltipBase::set_markup (const gi::cstring_v markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (markup_to_c));
}
void base::TooltipBase::set_markup () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_markup;
  auto markup_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_tooltip_set_text (GtkTooltip* tooltip /*none*/, const char* text /*none,nullable*/);
// void gtk_tooltip_set_text (::GtkTooltip* tooltip /*none*/, const char* text /*none,nullable*/);
void base::TooltipBase::set_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (text_to_c));
}
void base::TooltipBase::set_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_tooltip_set_tip_area (GtkTooltip* tooltip /*none*/, const GdkRectangle* rect /*none*/);
// void gtk_tooltip_set_tip_area (::GtkTooltip* tooltip /*none*/, const ::GdkRectangle* rect /*none*/);
void base::TooltipBase::set_tip_area (const Gdk::Rectangle_Ref rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTooltip* tooltip, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_tooltip_set_tip_area;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none);
  call_wrap_v ((::GtkTooltip*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra_def_impl.hpp>)
#include <gtk/tooltip_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra_impl.hpp>)
#include <gtk/tooltip_extra_impl.hpp>
#endif
#endif

#endif
