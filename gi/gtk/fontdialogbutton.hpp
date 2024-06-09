// AUTO-GENERATED

#ifndef _GI_GTK_FONTDIALOGBUTTON_HPP_
#define _GI_GTK_FONTDIALOGBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FontDialog;

class FontDialogButton;

namespace base {


#define GI_GTK_FONTDIALOGBUTTON_BASE base::FontDialogButtonBase
class FontDialogButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFontDialogButton BaseObjectType;

FontDialogButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_dialog_button_get_type(); } 

// GtkWidget* /*none*/ gtk_font_dialog_button_new (GtkFontDialog* dialog /*full,nullable*/);
// ::GtkFontDialogButton* /*none*/ gtk_font_dialog_button_new (::GtkFontDialog* dialog /*full,nullable*/);
static GI_INLINE_DECL Gtk::FontDialogButton new_ (Gtk::FontDialog dialog) noexcept;
static GI_INLINE_DECL Gtk::FontDialogButton new_ () noexcept;

// GtkFontDialog* /*none,nullable*/ gtk_font_dialog_button_get_dialog (GtkFontDialogButton* self /*none*/);
// ::GtkFontDialog* /*none,nullable*/ gtk_font_dialog_button_get_dialog (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL Gtk::FontDialog get_dialog () noexcept;

// PangoFontDescription* /*none,nullable*/ gtk_font_dialog_button_get_font_desc (GtkFontDialogButton* self /*none*/);
// ::PangoFontDescription* /*none,nullable*/ gtk_font_dialog_button_get_font_desc (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL Pango::FontDescription_Ref get_font_desc () noexcept;

// const char* /*none,nullable*/ gtk_font_dialog_button_get_font_features (GtkFontDialogButton* self /*none*/);
// const char* /*none,nullable*/ gtk_font_dialog_button_get_font_features (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_font_features () noexcept;

// PangoLanguage* /*full,nullable*/ gtk_font_dialog_button_get_language (GtkFontDialogButton* self /*none*/);
// ::PangoLanguage* /*full,nullable*/ gtk_font_dialog_button_get_language (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL Pango::Language get_language () noexcept;

// GtkFontLevel gtk_font_dialog_button_get_level (GtkFontDialogButton* self /*none*/);
// ::GtkFontLevel gtk_font_dialog_button_get_level (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL Gtk::FontLevel get_level () noexcept;

// gboolean gtk_font_dialog_button_get_use_font (GtkFontDialogButton* self /*none*/);
// gboolean gtk_font_dialog_button_get_use_font (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL bool get_use_font () noexcept;

// gboolean gtk_font_dialog_button_get_use_size (GtkFontDialogButton* self /*none*/);
// gboolean gtk_font_dialog_button_get_use_size (::GtkFontDialogButton* self /*none*/);
GI_INLINE_DECL bool get_use_size () noexcept;

// void gtk_font_dialog_button_set_dialog (GtkFontDialogButton* self /*none*/, GtkFontDialog* dialog /*none*/);
// void gtk_font_dialog_button_set_dialog (::GtkFontDialogButton* self /*none*/, ::GtkFontDialog* dialog /*none*/);
GI_INLINE_DECL void set_dialog (Gtk::FontDialog dialog) noexcept;

// void gtk_font_dialog_button_set_font_desc (GtkFontDialogButton* self /*none*/, const PangoFontDescription* font_desc /*none*/);
// void gtk_font_dialog_button_set_font_desc (::GtkFontDialogButton* self /*none*/, const ::PangoFontDescription* font_desc /*none*/);
GI_INLINE_DECL void set_font_desc (const Pango::FontDescription_Ref font_desc) noexcept;

// void gtk_font_dialog_button_set_font_features (GtkFontDialogButton* self /*none*/, const char* font_features /*none,nullable*/);
// void gtk_font_dialog_button_set_font_features (::GtkFontDialogButton* self /*none*/, const char* font_features /*none,nullable*/);
GI_INLINE_DECL void set_font_features (const gi::cstring_v font_features) noexcept;
GI_INLINE_DECL void set_font_features () noexcept;

// void gtk_font_dialog_button_set_language (GtkFontDialogButton* self /*none*/, PangoLanguage* language /*none,nullable*/);
// void gtk_font_dialog_button_set_language (::GtkFontDialogButton* self /*none*/, ::PangoLanguage* language /*none,nullable*/);
GI_INLINE_DECL void set_language (Pango::Language_Ref language) noexcept;
GI_INLINE_DECL void set_language () noexcept;

// void gtk_font_dialog_button_set_level (GtkFontDialogButton* self /*none*/, GtkFontLevel level);
// void gtk_font_dialog_button_set_level (::GtkFontDialogButton* self /*none*/, ::GtkFontLevel level);
GI_INLINE_DECL void set_level (Gtk::FontLevel level) noexcept;

// void gtk_font_dialog_button_set_use_font (GtkFontDialogButton* self /*none*/, gboolean use_font);
// void gtk_font_dialog_button_set_use_font (::GtkFontDialogButton* self /*none*/, gboolean use_font);
GI_INLINE_DECL void set_use_font (gboolean use_font) noexcept;

// void gtk_font_dialog_button_set_use_size (GtkFontDialogButton* self /*none*/, gboolean use_size);
// void gtk_font_dialog_button_set_use_size (::GtkFontDialogButton* self /*none*/, gboolean use_size);
GI_INLINE_DECL void set_use_size (gboolean use_size) noexcept;

gi::property_proxy<Gtk::FontDialog, base::FontDialogButtonBase> property_dialog()
{ return gi::property_proxy<Gtk::FontDialog, base::FontDialogButtonBase> (*this, "dialog"); }
const gi::property_proxy<Gtk::FontDialog, base::FontDialogButtonBase> property_dialog() const
{ return gi::property_proxy<Gtk::FontDialog, base::FontDialogButtonBase> (*this, "dialog"); }

gi::property_proxy<Pango::FontDescription, base::FontDialogButtonBase> property_font_desc()
{ return gi::property_proxy<Pango::FontDescription, base::FontDialogButtonBase> (*this, "font-desc"); }
const gi::property_proxy<Pango::FontDescription, base::FontDialogButtonBase> property_font_desc() const
{ return gi::property_proxy<Pango::FontDescription, base::FontDialogButtonBase> (*this, "font-desc"); }

gi::property_proxy<gi::cstring, base::FontDialogButtonBase> property_font_features()
{ return gi::property_proxy<gi::cstring, base::FontDialogButtonBase> (*this, "font-features"); }
const gi::property_proxy<gi::cstring, base::FontDialogButtonBase> property_font_features() const
{ return gi::property_proxy<gi::cstring, base::FontDialogButtonBase> (*this, "font-features"); }

gi::property_proxy<Pango::Language, base::FontDialogButtonBase> property_language()
{ return gi::property_proxy<Pango::Language, base::FontDialogButtonBase> (*this, "language"); }
const gi::property_proxy<Pango::Language, base::FontDialogButtonBase> property_language() const
{ return gi::property_proxy<Pango::Language, base::FontDialogButtonBase> (*this, "language"); }

gi::property_proxy<Gtk::FontLevel, base::FontDialogButtonBase> property_level()
{ return gi::property_proxy<Gtk::FontLevel, base::FontDialogButtonBase> (*this, "level"); }
const gi::property_proxy<Gtk::FontLevel, base::FontDialogButtonBase> property_level() const
{ return gi::property_proxy<Gtk::FontLevel, base::FontDialogButtonBase> (*this, "level"); }

gi::property_proxy<bool, base::FontDialogButtonBase> property_use_font()
{ return gi::property_proxy<bool, base::FontDialogButtonBase> (*this, "use-font"); }
const gi::property_proxy<bool, base::FontDialogButtonBase> property_use_font() const
{ return gi::property_proxy<bool, base::FontDialogButtonBase> (*this, "use-font"); }

gi::property_proxy<bool, base::FontDialogButtonBase> property_use_size()
{ return gi::property_proxy<bool, base::FontDialogButtonBase> (*this, "use-size"); }
const gi::property_proxy<bool, base::FontDialogButtonBase> property_use_size() const
{ return gi::property_proxy<bool, base::FontDialogButtonBase> (*this, "use-size"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::FontDialogButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::FontDialogButton)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontdialogbutton_extra_def.hpp>)
#include <gtk/fontdialogbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontdialogbutton_extra.hpp>)
#include <gtk/fontdialogbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontDialogButton : public GI_GTK_FONTDIALOGBUTTON_BASE
{ typedef GI_GTK_FONTDIALOGBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontDialogButton>
{ typedef Gtk::FontDialogButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontDialogButtonClassDef
{
typedef FontDialogButtonClassDef self;
public:
typedef Gtk::FontDialogButton instance_type;
typedef ::GtkFontDialogButtonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FontDialogButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FontDialogButtonClass: public detail::ClassTemplate<Gtk::impl::internal::FontDialogButtonClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::FontDialogButtonClassDef;
typedef FontDialogButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FontDialogButtonClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FontDialogButtonClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FontDialogButtonImpl = detail::ObjectImpl<FontDialogButton, internal::FontDialogButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
