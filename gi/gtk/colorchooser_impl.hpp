// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSER_IMPL_HPP_
#define _GI_GTK_COLORCHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_color_chooser_add_palette (GtkColorChooser* chooser /*none*/, GtkOrientation orientation, int colors_per_line, int n_colors, GdkRGBA* colors /*none,nullable*/);
// void gtk_color_chooser_add_palette (::GtkColorChooser* chooser /*none*/, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors /*none,nullable*/);
// SKIP; colors in boxed array not supported (depth 1)

// void gtk_color_chooser_get_rgba (GtkColorChooser* chooser /*none*/, GdkRGBA* color /*none,out,ca*/);
// void gtk_color_chooser_get_rgba (::GtkColorChooser* chooser /*none*/, ::GdkRGBA* color /*none,out,ca*/);
void base::ColorChooserBase::get_rgba (Gdk::RGBA & color) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_chooser_get_rgba;
  detail::allocate(color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(color).gobj_()), "");
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) (color).gobj_()));
}
Gdk::RGBA base::ColorChooserBase::get_rgba () noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_chooser_get_rgba;
  Gdk::RGBA color_c;
  auto color = &color_c;
  detail::allocate(*color);
  static_assert(sizeof(::GdkRGBA) == sizeof(*(*color).gobj_()), "");
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (::GdkRGBA*) (color ? (::GdkRGBA*) (*color).gobj_() : nullptr));
  return color_c;
}

// gboolean gtk_color_chooser_get_use_alpha (GtkColorChooser* chooser /*none*/);
// gboolean gtk_color_chooser_get_use_alpha (::GtkColorChooser* chooser /*none*/);
bool base::ColorChooserBase::get_use_alpha () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_chooser_get_use_alpha;
  auto _temp_ret = call_wrap_v ((::GtkColorChooser*) (gobj_()));
  return _temp_ret;
}

// void gtk_color_chooser_set_rgba (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void gtk_color_chooser_set_rgba (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
void base::ColorChooserBase::set_rgba (const Gdk::RGBA_Ref color) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_chooser_set_rgba;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}

// void gtk_color_chooser_set_use_alpha (GtkColorChooser* chooser /*none*/, gboolean use_alpha);
// void gtk_color_chooser_set_use_alpha (::GtkColorChooser* chooser /*none*/, gboolean use_alpha);
void base::ColorChooserBase::set_use_alpha (gboolean use_alpha) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, gboolean use_alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_color_chooser_set_use_alpha;
  auto use_alpha_to_c = use_alpha;
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (gboolean) (use_alpha_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra_def_impl.hpp>)
#include <gtk/colorchooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra_impl.hpp>)
#include <gtk/colorchooser_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorChooserInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkColorChooserInterface *methods = (::GtkColorChooserInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.color_activated) methods->color_activated = (decltype (methods->color_activated)) detail::method_wrapper<self, void (*) (const Gdk::RGBA_Ref color), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::color_activated_>;
  if (init_data.get_rgba) methods->get_rgba = (decltype (methods->get_rgba)) detail::method_wrapper<self, void (*) (Gdk::RGBA_Ref color), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_rgba_>;
  if (init_data.set_rgba) methods->set_rgba = (decltype (methods->set_rgba)) detail::method_wrapper<self, void (*) (const Gdk::RGBA_Ref color), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_rgba_>;
}

// void ColorChooser::add_palette (GtkColorChooser* chooser /*none*/, GtkOrientation orientation, int colors_per_line, int n_colors, GdkRGBA* colors /*none,nullable*/);
// void ColorChooser::add_palette (::GtkColorChooser* chooser /*none*/, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors /*none,nullable*/);
// SKIP; colors in boxed array not supported (depth 1)

// void ColorChooser::color_activated (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void ColorChooser::color_activated (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
void ColorChooserInterfaceClassImpl::color_activated_ (const Gdk::RGBA_Ref color) noexcept
{
  if (!get_struct_()->color_activated) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->color_activated;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}

// void ColorChooser::get_rgba (GtkColorChooser* chooser /*none*/, GdkRGBA* color /*none,out,ca*/);
// void ColorChooser::get_rgba (::GtkColorChooser* chooser /*none*/, ::GdkRGBA* color /*none,out,ca*/);
void ColorChooserInterfaceClassImpl::get_rgba_ (Gdk::RGBA_Ref color) noexcept
{
  if (!get_struct_()->get_rgba) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_rgba;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (::GdkRGBA*) (color_to_c));
}

// void ColorChooser::set_rgba (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void ColorChooser::set_rgba (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
void ColorChooserInterfaceClassImpl::set_rgba_ (const Gdk::RGBA_Ref color) noexcept
{
  if (!get_struct_()->set_rgba) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_rgba;
  auto color_to_c = gi::unwrap (color, gi::transfer_none);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
