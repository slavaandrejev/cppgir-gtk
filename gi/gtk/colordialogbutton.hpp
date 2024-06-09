// AUTO-GENERATED

#ifndef _GI_GTK_COLORDIALOGBUTTON_HPP_
#define _GI_GTK_COLORDIALOGBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColorDialog;

class ColorDialogButton;

namespace base {


#define GI_GTK_COLORDIALOGBUTTON_BASE base::ColorDialogButtonBase
class ColorDialogButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkColorDialogButton BaseObjectType;

ColorDialogButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_dialog_button_get_type(); } 

// GtkWidget* /*none*/ gtk_color_dialog_button_new (GtkColorDialog* dialog /*full,nullable*/);
// ::GtkColorDialogButton* /*none*/ gtk_color_dialog_button_new (::GtkColorDialog* dialog /*full,nullable*/);
static GI_INLINE_DECL Gtk::ColorDialogButton new_ (Gtk::ColorDialog dialog) noexcept;
static GI_INLINE_DECL Gtk::ColorDialogButton new_ () noexcept;

// GtkColorDialog* /*none,nullable*/ gtk_color_dialog_button_get_dialog (GtkColorDialogButton* self /*none*/);
// ::GtkColorDialog* /*none,nullable*/ gtk_color_dialog_button_get_dialog (::GtkColorDialogButton* self /*none*/);
GI_INLINE_DECL Gtk::ColorDialog get_dialog () noexcept;

// const GdkRGBA* /*none*/ gtk_color_dialog_button_get_rgba (GtkColorDialogButton* self /*none*/);
// const ::GdkRGBA* /*none*/ gtk_color_dialog_button_get_rgba (::GtkColorDialogButton* self /*none*/);
GI_INLINE_DECL Gdk::RGBA_Ref get_rgba () noexcept;

// void gtk_color_dialog_button_set_dialog (GtkColorDialogButton* self /*none*/, GtkColorDialog* dialog /*none*/);
// void gtk_color_dialog_button_set_dialog (::GtkColorDialogButton* self /*none*/, ::GtkColorDialog* dialog /*none*/);
GI_INLINE_DECL void set_dialog (Gtk::ColorDialog dialog) noexcept;

// void gtk_color_dialog_button_set_rgba (GtkColorDialogButton* self /*none*/, const GdkRGBA* color /*none*/);
// void gtk_color_dialog_button_set_rgba (::GtkColorDialogButton* self /*none*/, const ::GdkRGBA* color /*none*/);
GI_INLINE_DECL void set_rgba (const Gdk::RGBA_Ref color) noexcept;

gi::property_proxy<Gtk::ColorDialog, base::ColorDialogButtonBase> property_dialog()
{ return gi::property_proxy<Gtk::ColorDialog, base::ColorDialogButtonBase> (*this, "dialog"); }
const gi::property_proxy<Gtk::ColorDialog, base::ColorDialogButtonBase> property_dialog() const
{ return gi::property_proxy<Gtk::ColorDialog, base::ColorDialogButtonBase> (*this, "dialog"); }

gi::property_proxy<Gdk::RGBA, base::ColorDialogButtonBase> property_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::ColorDialogButtonBase> (*this, "rgba"); }
const gi::property_proxy<Gdk::RGBA, base::ColorDialogButtonBase> property_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::ColorDialogButtonBase> (*this, "rgba"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::ColorDialogButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ColorDialogButton)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colordialogbutton_extra_def.hpp>)
#include <gtk/colordialogbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colordialogbutton_extra.hpp>)
#include <gtk/colordialogbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorDialogButton : public GI_GTK_COLORDIALOGBUTTON_BASE
{ typedef GI_GTK_COLORDIALOGBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorDialogButton>
{ typedef Gtk::ColorDialogButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorDialogButtonClassDef
{
typedef ColorDialogButtonClassDef self;
public:
typedef Gtk::ColorDialogButton instance_type;
typedef ::GtkColorDialogButtonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ColorDialogButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ColorDialogButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ColorDialogButtonClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::ColorDialogButtonClassDef;
typedef ColorDialogButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColorDialogButtonClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ColorDialogButtonClassDef::TypeInitData
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

using ColorDialogButtonImpl = detail::ObjectImpl<ColorDialogButton, internal::ColorDialogButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
