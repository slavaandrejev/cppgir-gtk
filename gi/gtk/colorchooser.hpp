// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSER_HPP_
#define _GI_GTK_COLORCHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class ColorChooser;

namespace base {


#define GI_GTK_COLORCHOOSER_BASE base::ColorChooserBase
class ColorChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkColorChooser BaseObjectType;

ColorChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_chooser_get_type(); } 

// void gtk_color_chooser_add_palette (GtkColorChooser* chooser /*none*/, GtkOrientation orientation, int colors_per_line, int n_colors, GdkRGBA* colors /*none,nullable*/);
// void gtk_color_chooser_add_palette (::GtkColorChooser* chooser /*none*/, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors /*none,nullable*/);
// SKIP; colors in boxed array not supported (depth 1)

// void gtk_color_chooser_get_rgba (GtkColorChooser* chooser /*none*/, GdkRGBA* color /*none,out,ca*/);
// void gtk_color_chooser_get_rgba (::GtkColorChooser* chooser /*none*/, ::GdkRGBA* color /*none,out,ca*/);
GI_INLINE_DECL void get_rgba (Gdk::RGBA & color) noexcept;
GI_INLINE_DECL Gdk::RGBA get_rgba () noexcept;

// gboolean gtk_color_chooser_get_use_alpha (GtkColorChooser* chooser /*none*/);
// gboolean gtk_color_chooser_get_use_alpha (::GtkColorChooser* chooser /*none*/);
GI_INLINE_DECL bool get_use_alpha () noexcept;

// void gtk_color_chooser_set_rgba (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void gtk_color_chooser_set_rgba (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void set_rgba (const Gdk::RGBA_Ref color) noexcept;

// void gtk_color_chooser_set_use_alpha (GtkColorChooser* chooser /*none*/, gboolean use_alpha);
// void gtk_color_chooser_set_use_alpha (::GtkColorChooser* chooser /*none*/, gboolean use_alpha);
GI_INLINE_DECL void set_use_alpha (gboolean use_alpha) noexcept;

gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> property_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> (*this, "rgba"); }
const gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> property_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> (*this, "rgba"); }

gi::property_proxy<bool, base::ColorChooserBase> property_use_alpha()
{ return gi::property_proxy<bool, base::ColorChooserBase> (*this, "use-alpha"); }
const gi::property_proxy<bool, base::ColorChooserBase> property_use_alpha() const
{ return gi::property_proxy<bool, base::ColorChooserBase> (*this, "use-alpha"); }

// (signal) void color-activated ( color /*none*/);
// (signal) void color-activated (::GdkRGBA* color /*none*/);
gi::signal_proxy<void(Gtk::ColorChooser, Gdk::RGBA_Ref color)> signal_color_activated()
{ return gi::signal_proxy<void(Gtk::ColorChooser, Gdk::RGBA_Ref color)> (*this, "color-activated"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra_def.hpp>)
#include <gtk/colorchooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra.hpp>)
#include <gtk/colorchooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser : public GI_GTK_COLORCHOOSER_BASE
{ typedef GI_GTK_COLORCHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorChooser>
{ typedef Gtk::ColorChooser type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorChooserInterfaceDef
{
typedef ColorChooserInterfaceDef self;
public:
typedef Gtk::ColorChooser instance_type;
typedef ::GtkColorChooserInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(color_activated) = self;
using GI_MEMBER_CHECK_CONFLICT(get_rgba) = self;
using GI_MEMBER_CHECK_CONFLICT(set_rgba) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ColorChooserInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ColorChooser::add_palette (GtkColorChooser* chooser /*none*/, GtkOrientation orientation, int colors_per_line, int n_colors, GdkRGBA* colors /*none,nullable*/);
// void ColorChooser::add_palette (::GtkColorChooser* chooser /*none*/, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors /*none,nullable*/);
// SKIP; colors in boxed array not supported (depth 1)

// void ColorChooser::color_activated (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void ColorChooser::color_activated (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
virtual void color_activated_ (const Gdk::RGBA_Ref color) noexcept = 0;

// void ColorChooser::get_rgba (GtkColorChooser* chooser /*none*/, GdkRGBA* color /*none,out,ca*/);
// void ColorChooser::get_rgba (::GtkColorChooser* chooser /*none*/, ::GdkRGBA* color /*none,out,ca*/);
virtual void get_rgba_ (Gdk::RGBA_Ref color) noexcept = 0;

// void ColorChooser::set_rgba (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void ColorChooser::set_rgba (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
virtual void set_rgba_ (const Gdk::RGBA_Ref color) noexcept = 0;


};

using ColorChooserImpl = detail::InterfaceImpl<ColorChooserInterfaceDef>;

class ColorChooserInterfaceClassImpl: public detail::InterfaceClassImpl<ColorChooserImpl>
{
friend class internal::ColorChooserInterfaceDef;
typedef ColorChooserInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ColorChooserImpl> super;

protected:
using super::super;

// void ColorChooser::add_palette (GtkColorChooser* chooser /*none*/, GtkOrientation orientation, int colors_per_line, int n_colors, GdkRGBA* colors /*none,nullable*/);
// void ColorChooser::add_palette (::GtkColorChooser* chooser /*none*/, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors /*none,nullable*/);
// SKIP; colors in boxed array not supported (depth 1)

// void ColorChooser::color_activated (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void ColorChooser::color_activated (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void color_activated_ (const Gdk::RGBA_Ref color) noexcept override;

// void ColorChooser::get_rgba (GtkColorChooser* chooser /*none*/, GdkRGBA* color /*none,out,ca*/);
// void ColorChooser::get_rgba (::GtkColorChooser* chooser /*none*/, ::GdkRGBA* color /*none,out,ca*/);
GI_INLINE_DECL void get_rgba_ (Gdk::RGBA_Ref color) noexcept override;

// void ColorChooser::set_rgba (GtkColorChooser* chooser /*none*/, const GdkRGBA* color /*none*/);
// void ColorChooser::set_rgba (::GtkColorChooser* chooser /*none*/, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void set_rgba_ (const Gdk::RGBA_Ref color) noexcept override;


};


struct ColorChooserInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ColorChooserInterfaceClassImpl, color_activated)
  GI_MEMBER_DEFINE(ColorChooserInterfaceClassImpl, get_rgba)
  GI_MEMBER_DEFINE(ColorChooserInterfaceClassImpl, set_rgba)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, color_activated),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_rgba),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_rgba)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
