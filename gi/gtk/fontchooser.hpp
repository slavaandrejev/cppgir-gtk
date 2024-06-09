// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSER_HPP_
#define _GI_GTK_FONTCHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class FontChooser;

namespace base {


#define GI_GTK_FONTCHOOSER_BASE base::FontChooserBase
class FontChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkFontChooser BaseObjectType;

FontChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_chooser_get_type(); } 

// char* /*full,nullable*/ gtk_font_chooser_get_font (GtkFontChooser* fontchooser /*none*/);
// char* /*full,nullable*/ gtk_font_chooser_get_font (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL gi::cstring get_font () noexcept;

// PangoFontDescription* /*full,nullable*/ gtk_font_chooser_get_font_desc (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontDescription* /*full,nullable*/ gtk_font_chooser_get_font_desc (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontDescription get_font_desc () noexcept;

// PangoFontFace* /*none,nullable*/ gtk_font_chooser_get_font_face (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFace* /*none,nullable*/ gtk_font_chooser_get_font_face (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontFace get_font_face () noexcept;

// PangoFontFamily* /*none,nullable*/ gtk_font_chooser_get_font_family (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFamily* /*none,nullable*/ gtk_font_chooser_get_font_family (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontFamily get_font_family () noexcept;

// char* /*full*/ gtk_font_chooser_get_font_features (GtkFontChooser* fontchooser /*none*/);
// char* /*full*/ gtk_font_chooser_get_font_features (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL gi::cstring get_font_features () noexcept;

// PangoFontMap* /*full,nullable*/ gtk_font_chooser_get_font_map (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontMap* /*full,nullable*/ gtk_font_chooser_get_font_map (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// int gtk_font_chooser_get_font_size (GtkFontChooser* fontchooser /*none*/);
// gint gtk_font_chooser_get_font_size (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL gint get_font_size () noexcept;

// char* /*full*/ gtk_font_chooser_get_language (GtkFontChooser* fontchooser /*none*/);
// char* /*full*/ gtk_font_chooser_get_language (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL gi::cstring get_language () noexcept;

// GtkFontChooserLevel gtk_font_chooser_get_level (GtkFontChooser* fontchooser /*none*/);
// ::GtkFontChooserLevel gtk_font_chooser_get_level (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Gtk::FontChooserLevel get_level () noexcept;

// char* /*full*/ gtk_font_chooser_get_preview_text (GtkFontChooser* fontchooser /*none*/);
// char* /*full*/ gtk_font_chooser_get_preview_text (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL gi::cstring get_preview_text () noexcept;

// gboolean gtk_font_chooser_get_show_preview_entry (GtkFontChooser* fontchooser /*none*/);
// gboolean gtk_font_chooser_get_show_preview_entry (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL bool get_show_preview_entry () noexcept;

// void gtk_font_chooser_set_filter_func (GtkFontChooser* fontchooser /*none*/, GtkFontFilterFunc filter /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_font_chooser_set_filter_func (::GtkFontChooser* fontchooser /*none*/, Gtk::FontFilterFunc::cfunction_type filter /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_filter_func (Gtk::FontFilterFunc filter) noexcept;

// void gtk_font_chooser_set_font (GtkFontChooser* fontchooser /*none*/, const char* fontname /*none*/);
// void gtk_font_chooser_set_font (::GtkFontChooser* fontchooser /*none*/, const char* fontname /*none*/);
GI_INLINE_DECL void set_font (const gi::cstring_v fontname) noexcept;

// void gtk_font_chooser_set_font_desc (GtkFontChooser* fontchooser /*none*/, const PangoFontDescription* font_desc /*none*/);
// void gtk_font_chooser_set_font_desc (::GtkFontChooser* fontchooser /*none*/, const ::PangoFontDescription* font_desc /*none*/);
GI_INLINE_DECL void set_font_desc (const Pango::FontDescription_Ref font_desc) noexcept;

// void gtk_font_chooser_set_font_map (GtkFontChooser* fontchooser /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void gtk_font_chooser_set_font_map (::GtkFontChooser* fontchooser /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
GI_INLINE_DECL void set_font_map (Pango::FontMap fontmap) noexcept;
GI_INLINE_DECL void set_font_map () noexcept;

// void gtk_font_chooser_set_language (GtkFontChooser* fontchooser /*none*/, const char* language /*none*/);
// void gtk_font_chooser_set_language (::GtkFontChooser* fontchooser /*none*/, const char* language /*none*/);
GI_INLINE_DECL void set_language (const gi::cstring_v language) noexcept;

// void gtk_font_chooser_set_level (GtkFontChooser* fontchooser /*none*/, GtkFontChooserLevel level);
// void gtk_font_chooser_set_level (::GtkFontChooser* fontchooser /*none*/, ::GtkFontChooserLevel level);
GI_INLINE_DECL void set_level (Gtk::FontChooserLevel level) noexcept;

// void gtk_font_chooser_set_preview_text (GtkFontChooser* fontchooser /*none*/, const char* text /*none*/);
// void gtk_font_chooser_set_preview_text (::GtkFontChooser* fontchooser /*none*/, const char* text /*none*/);
GI_INLINE_DECL void set_preview_text (const gi::cstring_v text) noexcept;

// void gtk_font_chooser_set_show_preview_entry (GtkFontChooser* fontchooser /*none*/, gboolean show_preview_entry);
// void gtk_font_chooser_set_show_preview_entry (::GtkFontChooser* fontchooser /*none*/, gboolean show_preview_entry);
GI_INLINE_DECL void set_show_preview_entry (gboolean show_preview_entry) noexcept;

gi::property_proxy<gi::cstring, base::FontChooserBase> property_font()
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "font"); }
const gi::property_proxy<gi::cstring, base::FontChooserBase> property_font() const
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "font"); }

gi::property_proxy<Pango::FontDescription, base::FontChooserBase> property_font_desc()
{ return gi::property_proxy<Pango::FontDescription, base::FontChooserBase> (*this, "font-desc"); }
const gi::property_proxy<Pango::FontDescription, base::FontChooserBase> property_font_desc() const
{ return gi::property_proxy<Pango::FontDescription, base::FontChooserBase> (*this, "font-desc"); }

gi::property_proxy<gi::cstring, base::FontChooserBase> property_font_features()
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "font-features"); }
const gi::property_proxy<gi::cstring, base::FontChooserBase> property_font_features() const
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "font-features"); }

gi::property_proxy<gi::cstring, base::FontChooserBase> property_language()
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "language"); }
const gi::property_proxy<gi::cstring, base::FontChooserBase> property_language() const
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "language"); }

gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> property_level()
{ return gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> (*this, "level"); }
const gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> property_level() const
{ return gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> (*this, "level"); }

gi::property_proxy<gi::cstring, base::FontChooserBase> property_preview_text()
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "preview-text"); }
const gi::property_proxy<gi::cstring, base::FontChooserBase> property_preview_text() const
{ return gi::property_proxy<gi::cstring, base::FontChooserBase> (*this, "preview-text"); }

gi::property_proxy<bool, base::FontChooserBase> property_show_preview_entry()
{ return gi::property_proxy<bool, base::FontChooserBase> (*this, "show-preview-entry"); }
const gi::property_proxy<bool, base::FontChooserBase> property_show_preview_entry() const
{ return gi::property_proxy<bool, base::FontChooserBase> (*this, "show-preview-entry"); }

// (signal) void font-activated (gchar* fontname /*none*/);
// (signal) void font-activated (char* fontname /*none*/);
gi::signal_proxy<void(Gtk::FontChooser, gi::cstring_v fontname)> signal_font_activated()
{ return gi::signal_proxy<void(Gtk::FontChooser, gi::cstring_v fontname)> (*this, "font-activated"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra_def.hpp>)
#include <gtk/fontchooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra.hpp>)
#include <gtk/fontchooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser : public GI_GTK_FONTCHOOSER_BASE
{ typedef GI_GTK_FONTCHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontChooser>
{ typedef Gtk::FontChooser type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontChooserIfaceDef
{
typedef FontChooserIfaceDef self;
public:
typedef Gtk::FontChooser instance_type;
typedef ::GtkFontChooserIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(font_activated) = self;
using GI_MEMBER_CHECK_CONFLICT(get_font_face) = self;
using GI_MEMBER_CHECK_CONFLICT(get_font_family) = self;
using GI_MEMBER_CHECK_CONFLICT(get_font_map) = self;
using GI_MEMBER_CHECK_CONFLICT(get_font_size) = self;
using GI_MEMBER_CHECK_CONFLICT(set_filter_func) = self;
using GI_MEMBER_CHECK_CONFLICT(set_font_map) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FontChooserIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void FontChooser::font_activated (GtkFontChooser* chooser /*none*/, const char* fontname /*none*/);
// void FontChooser::font_activated (::GtkFontChooser* chooser /*none*/, const char* fontname /*none*/);
virtual void font_activated_ (const gi::cstring_v fontname) noexcept = 0;

// PangoFontFace* /*none,nullable*/ FontChooser::get_font_face (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFace* /*none,nullable*/ FontChooser::get_font_face (::GtkFontChooser* fontchooser /*none*/);
virtual Pango::FontFace get_font_face_ () noexcept = 0;

// PangoFontFamily* /*none,nullable*/ FontChooser::get_font_family (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFamily* /*none,nullable*/ FontChooser::get_font_family (::GtkFontChooser* fontchooser /*none*/);
virtual Pango::FontFamily get_font_family_ () noexcept = 0;

// PangoFontMap* /*full,nullable*/ FontChooser::get_font_map (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontMap* /*full,nullable*/ FontChooser::get_font_map (::GtkFontChooser* fontchooser /*none*/);
virtual Pango::FontMap get_font_map_ () noexcept = 0;

// int FontChooser::get_font_size (GtkFontChooser* fontchooser /*none*/);
// gint FontChooser::get_font_size (::GtkFontChooser* fontchooser /*none*/);
virtual gint get_font_size_ () noexcept = 0;

// void FontChooser::set_filter_func (GtkFontChooser* fontchooser /*none*/, GtkFontFilterFunc filter /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void FontChooser::set_filter_func (::GtkFontChooser* fontchooser /*none*/, Gtk::FontFilterFunc::cfunction_type filter /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
virtual void set_filter_func_ (Gtk::FontFilterFunc filter) noexcept = 0;

// void FontChooser::set_font_map (GtkFontChooser* fontchooser /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void FontChooser::set_font_map (::GtkFontChooser* fontchooser /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
virtual void set_font_map_ (Pango::FontMap fontmap) noexcept = 0;


};

using FontChooserImpl = detail::InterfaceImpl<FontChooserIfaceDef>;

class FontChooserIfaceClassImpl: public detail::InterfaceClassImpl<FontChooserImpl>
{
friend class internal::FontChooserIfaceDef;
typedef FontChooserIfaceClassImpl self;
typedef detail::InterfaceClassImpl<FontChooserImpl> super;

protected:
using super::super;

// void FontChooser::font_activated (GtkFontChooser* chooser /*none*/, const char* fontname /*none*/);
// void FontChooser::font_activated (::GtkFontChooser* chooser /*none*/, const char* fontname /*none*/);
GI_INLINE_DECL void font_activated_ (const gi::cstring_v fontname) noexcept override;

// PangoFontFace* /*none,nullable*/ FontChooser::get_font_face (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFace* /*none,nullable*/ FontChooser::get_font_face (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontFace get_font_face_ () noexcept override;

// PangoFontFamily* /*none,nullable*/ FontChooser::get_font_family (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontFamily* /*none,nullable*/ FontChooser::get_font_family (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontFamily get_font_family_ () noexcept override;

// PangoFontMap* /*full,nullable*/ FontChooser::get_font_map (GtkFontChooser* fontchooser /*none*/);
// ::PangoFontMap* /*full,nullable*/ FontChooser::get_font_map (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL Pango::FontMap get_font_map_ () noexcept override;

// int FontChooser::get_font_size (GtkFontChooser* fontchooser /*none*/);
// gint FontChooser::get_font_size (::GtkFontChooser* fontchooser /*none*/);
GI_INLINE_DECL gint get_font_size_ () noexcept override;

// void FontChooser::set_filter_func (GtkFontChooser* fontchooser /*none*/, GtkFontFilterFunc filter /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void FontChooser::set_filter_func (::GtkFontChooser* fontchooser /*none*/, Gtk::FontFilterFunc::cfunction_type filter /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_filter_func_ (Gtk::FontFilterFunc filter) noexcept override;

// void FontChooser::set_font_map (GtkFontChooser* fontchooser /*none*/, PangoFontMap* fontmap /*none,nullable*/);
// void FontChooser::set_font_map (::GtkFontChooser* fontchooser /*none*/, ::PangoFontMap* fontmap /*none,nullable*/);
GI_INLINE_DECL void set_font_map_ (Pango::FontMap fontmap) noexcept override;


};


struct FontChooserIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, font_activated)
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, get_font_face)
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, get_font_family)
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, get_font_map)
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, get_font_size)
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, set_filter_func)
  GI_MEMBER_DEFINE(FontChooserIfaceClassImpl, set_font_map)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, font_activated),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_font_face),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_font_family),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_font_map),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_font_size),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_filter_func),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_font_map)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
