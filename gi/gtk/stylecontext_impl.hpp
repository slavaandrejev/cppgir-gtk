// AUTO-GENERATED

#ifndef _GI_GTK_STYLECONTEXT_IMPL_HPP_
#define _GI_GTK_STYLECONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_style_context_add_provider_for_display (GdkDisplay* display /*none*/, GtkStyleProvider* provider /*none*/, guint priority);
// void gtk_style_context_add_provider_for_display (::GdkDisplay* display /*none*/, ::GtkStyleProvider* provider /*none*/, guint priority);
void base::StyleContextBase::add_provider_for_display (Gdk::Display display, Gtk::StyleProvider provider, guint priority) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, ::GtkStyleProvider* provider, guint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_add_provider_for_display;
  auto priority_to_c = priority;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none);
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GdkDisplay*) (display_to_c), (::GtkStyleProvider*) (provider_to_c), (guint) (priority_to_c));
}

// void gtk_style_context_remove_provider_for_display (GdkDisplay* display /*none*/, GtkStyleProvider* provider /*none*/);
// void gtk_style_context_remove_provider_for_display (::GdkDisplay* display /*none*/, ::GtkStyleProvider* provider /*none*/);
void base::StyleContextBase::remove_provider_for_display (Gdk::Display display, Gtk::StyleProvider provider) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, ::GtkStyleProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_remove_provider_for_display;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none);
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GdkDisplay*) (display_to_c), (::GtkStyleProvider*) (provider_to_c));
}

// void gtk_style_context_add_class (GtkStyleContext* context /*none*/, const char* class_name /*none*/);
// void gtk_style_context_add_class (::GtkStyleContext* context /*none*/, const char* class_name /*none*/);
void base::StyleContextBase::add_class (const gi::cstring_v class_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* class_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_add_class;
  auto class_name_to_c = gi::unwrap (class_name, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (class_name_to_c));
}

// void gtk_style_context_add_provider (GtkStyleContext* context /*none*/, GtkStyleProvider* provider /*none*/, guint priority);
// void gtk_style_context_add_provider (::GtkStyleContext* context /*none*/, ::GtkStyleProvider* provider /*none*/, guint priority);
void base::StyleContextBase::add_provider (Gtk::StyleProvider provider, guint priority) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleProvider* provider, guint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_add_provider;
  auto priority_to_c = priority;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleProvider*) (provider_to_c), (guint) (priority_to_c));
}

// void gtk_style_context_get_border (GtkStyleContext* context /*none*/, GtkBorder* border /*none,out,ca*/);
// void gtk_style_context_get_border (::GtkStyleContext* context /*none*/, ::GtkBorder* border /*none,out,ca*/);
void base::StyleContextBase::get_border (Gtk::Border & border) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_border;
  detail::allocate(border);
  static_assert(sizeof(::GtkBorder) == sizeof(*(border).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkBorder*) ((::GtkBorder*) (border).gobj_()));
}
Gtk::Border base::StyleContextBase::get_border () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_border;
  Gtk::Border border_c;
  auto border = &border_c;
  detail::allocate(*border);
  static_assert(sizeof(::GtkBorder) == sizeof(*(*border).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkBorder*) (border ? (::GtkBorder*) (*border).gobj_() : nullptr));
  return border_c;
}

// void gtk_style_context_get_color (GtkStyleContext* context /*none*/, GdkRGBA* color /*none,out,ca*/);
// void gtk_style_context_get_color (::GtkStyleContext* context /*none*/, ::GdkRGBA* color /*none,out,ca*/);
void base::StyleContextBase::get_color (Gdk::RGBA & color) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_color;
  detail::allocate(color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(color).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) (color).gobj_()));
}
Gdk::RGBA base::StyleContextBase::get_color () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_color;
  Gdk::RGBA color_c;
  auto color = &color_c;
  detail::allocate(*color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*color).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GdkRGBA*) (color ? (::GdkRGBA*) (*color).gobj_() : nullptr));
  return color_c;
}

// GdkDisplay* /*none*/ gtk_style_context_get_display (GtkStyleContext* context /*none*/);
// ::GdkDisplay* /*none*/ gtk_style_context_get_display (::GtkStyleContext* context /*none*/);
Gdk::Display base::StyleContextBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_display;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_style_context_get_margin (GtkStyleContext* context /*none*/, GtkBorder* margin /*none,out,ca*/);
// void gtk_style_context_get_margin (::GtkStyleContext* context /*none*/, ::GtkBorder* margin /*none,out,ca*/);
void base::StyleContextBase::get_margin (Gtk::Border & margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkBorder* margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_margin;
  detail::allocate(margin);
  static_assert(sizeof(::GtkBorder) == sizeof(*(margin).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkBorder*) ((::GtkBorder*) (margin).gobj_()));
}
Gtk::Border base::StyleContextBase::get_margin () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkBorder* margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_margin;
  Gtk::Border margin_c;
  auto margin = &margin_c;
  detail::allocate(*margin);
  static_assert(sizeof(::GtkBorder) == sizeof(*(*margin).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkBorder*) (margin ? (::GtkBorder*) (*margin).gobj_() : nullptr));
  return margin_c;
}

// void gtk_style_context_get_padding (GtkStyleContext* context /*none*/, GtkBorder* padding /*none,out,ca*/);
// void gtk_style_context_get_padding (::GtkStyleContext* context /*none*/, ::GtkBorder* padding /*none,out,ca*/);
void base::StyleContextBase::get_padding (Gtk::Border & padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkBorder* padding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_padding;
  detail::allocate(padding);
  static_assert(sizeof(::GtkBorder) == sizeof(*(padding).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkBorder*) ((::GtkBorder*) (padding).gobj_()));
}
Gtk::Border base::StyleContextBase::get_padding () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkBorder* padding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_padding;
  Gtk::Border padding_c;
  auto padding = &padding_c;
  detail::allocate(*padding);
  static_assert(sizeof(::GtkBorder) == sizeof(*(*padding).gobj_()), "");
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkBorder*) (padding ? (::GtkBorder*) (*padding).gobj_() : nullptr));
  return padding_c;
}

// int gtk_style_context_get_scale (GtkStyleContext* context /*none*/);
// gint gtk_style_context_get_scale (::GtkStyleContext* context /*none*/);
gint base::StyleContextBase::get_scale () noexcept
{
  typedef gint (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_scale;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return _temp_ret;
}

// GtkStateFlags gtk_style_context_get_state (GtkStyleContext* context /*none*/);
// ::GtkStateFlags gtk_style_context_get_state (::GtkStyleContext* context /*none*/);
Gtk::StateFlags base::StyleContextBase::get_state () noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_get_state;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_style_context_has_class (GtkStyleContext* context /*none*/, const char* class_name /*none*/);
// gboolean gtk_style_context_has_class (::GtkStyleContext* context /*none*/, const char* class_name /*none*/);
bool base::StyleContextBase::has_class (const gi::cstring_v class_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleContext* context, const char* class_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_has_class;
  auto class_name_to_c = gi::unwrap (class_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (class_name_to_c));
  return _temp_ret;
}

// gboolean gtk_style_context_lookup_color (GtkStyleContext* context /*none*/, const char* color_name /*none*/, GdkRGBA* color /*none,out,ca*/);
// gboolean gtk_style_context_lookup_color (::GtkStyleContext* context /*none*/, const char* color_name /*none*/, ::GdkRGBA* color /*none,out,ca*/);
bool base::StyleContextBase::lookup_color (const gi::cstring_v color_name, Gdk::RGBA & color) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleContext* context, const char* color_name, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_lookup_color;
  detail::allocate(color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(color).gobj_()), "");
  auto color_name_to_c = gi::unwrap (color_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (color_name_to_c), (::GdkRGBA*) ((::GdkRGBA*) (color).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gdk::RGBA> base::StyleContextBase::lookup_color (const gi::cstring_v color_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleContext* context, const char* color_name, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_lookup_color;
  Gdk::RGBA color_c;
  auto color = &color_c;
  detail::allocate(*color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*color).gobj_()), "");
  auto color_name_to_c = gi::unwrap (color_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (color_name_to_c), (::GdkRGBA*) (color ? (::GdkRGBA*) (*color).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = color_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_style_context_remove_class (GtkStyleContext* context /*none*/, const char* class_name /*none*/);
// void gtk_style_context_remove_class (::GtkStyleContext* context /*none*/, const char* class_name /*none*/);
void base::StyleContextBase::remove_class (const gi::cstring_v class_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* class_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_remove_class;
  auto class_name_to_c = gi::unwrap (class_name, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (class_name_to_c));
}

// void gtk_style_context_remove_provider (GtkStyleContext* context /*none*/, GtkStyleProvider* provider /*none*/);
// void gtk_style_context_remove_provider (::GtkStyleContext* context /*none*/, ::GtkStyleProvider* provider /*none*/);
void base::StyleContextBase::remove_provider (Gtk::StyleProvider provider) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_remove_provider;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleProvider*) (provider_to_c));
}

// void gtk_style_context_restore (GtkStyleContext* context /*none*/);
// void gtk_style_context_restore (::GtkStyleContext* context /*none*/);
void base::StyleContextBase::restore () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_restore;
  call_wrap_v ((::GtkStyleContext*) (gobj_()));
}

// void gtk_style_context_save (GtkStyleContext* context /*none*/);
// void gtk_style_context_save (::GtkStyleContext* context /*none*/);
void base::StyleContextBase::save () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_save;
  call_wrap_v ((::GtkStyleContext*) (gobj_()));
}

// void gtk_style_context_set_display (GtkStyleContext* context /*none*/, GdkDisplay* display /*none*/);
// void gtk_style_context_set_display (::GtkStyleContext* context /*none*/, ::GdkDisplay* display /*none*/);
void base::StyleContextBase::set_display (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_set_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GdkDisplay*) (display_to_c));
}

// void gtk_style_context_set_scale (GtkStyleContext* context /*none*/, int scale);
// void gtk_style_context_set_scale (::GtkStyleContext* context /*none*/, gint scale);
void base::StyleContextBase::set_scale (gint scale) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, gint scale);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_set_scale;
  auto scale_to_c = scale;
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (gint) (scale_to_c));
}

// void gtk_style_context_set_state (GtkStyleContext* context /*none*/, GtkStateFlags flags);
// void gtk_style_context_set_state (::GtkStyleContext* context /*none*/, ::GtkStateFlags flags);
void base::StyleContextBase::set_state (Gtk::StateFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_set_state;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (flags_to_c));
}

// char* /*full*/ gtk_style_context_to_string (GtkStyleContext* context /*none*/, GtkStyleContextPrintFlags flags);
// char* /*full*/ gtk_style_context_to_string (::GtkStyleContext* context /*none*/, ::GtkStyleContextPrintFlags flags);
gi::cstring base::StyleContextBase::to_string (Gtk::StyleContextPrintFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleContextPrintFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_style_context_to_string;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleContextPrintFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra_def_impl.hpp>)
#include <gtk/stylecontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra_impl.hpp>)
#include <gtk/stylecontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StyleContextClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkStyleContextClass *methods = (::GtkStyleContextClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
}

// void StyleContext::changed (GtkStyleContext* context /*none*/);
// void StyleContext::changed (::GtkStyleContext* context /*none*/);
void StyleContextClass::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkStyleContext*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
