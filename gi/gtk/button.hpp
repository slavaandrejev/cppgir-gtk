// AUTO-GENERATED

#ifndef _GI_GTK_BUTTON_HPP_
#define _GI_GTK_BUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Widget;

class Button;

namespace base {


#define GI_GTK_BUTTON_BASE base::ButtonBase
class ButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkButton BaseObjectType;

ButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_button_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ gtk_button_new ();
// ::GtkButton* /*none*/ gtk_button_new ();
static GI_INLINE_DECL Gtk::Button new_ () noexcept;

// GtkWidget* /*none*/ gtk_button_new_from_icon_name (const char* icon_name /*none*/);
// ::GtkButton* /*none*/ gtk_button_new_from_icon_name (const char* icon_name /*none*/);
static GI_INLINE_DECL Gtk::Button new_from_icon_name (const gi::cstring_v icon_name) noexcept;

// GtkWidget* /*none*/ gtk_button_new_with_label (const char* label /*none*/);
// ::GtkButton* /*none*/ gtk_button_new_with_label (const char* label /*none*/);
static GI_INLINE_DECL Gtk::Button new_with_label (const gi::cstring_v label) noexcept;

// GtkWidget* /*none*/ gtk_button_new_with_mnemonic (const char* label /*none*/);
// ::GtkButton* /*none*/ gtk_button_new_with_mnemonic (const char* label /*none*/);
static GI_INLINE_DECL Gtk::Button new_with_mnemonic (const gi::cstring_v label) noexcept;

// gboolean gtk_button_get_can_shrink (GtkButton* button /*none*/);
// gboolean gtk_button_get_can_shrink (::GtkButton* button /*none*/);
GI_INLINE_DECL bool get_can_shrink () noexcept;

// GtkWidget* /*none,nullable*/ gtk_button_get_child (GtkButton* button /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_button_get_child (::GtkButton* button /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_button_get_has_frame (GtkButton* button /*none*/);
// gboolean gtk_button_get_has_frame (::GtkButton* button /*none*/);
GI_INLINE_DECL bool get_has_frame () noexcept;

// const char* /*none,nullable*/ gtk_button_get_icon_name (GtkButton* button /*none*/);
// const char* /*none,nullable*/ gtk_button_get_icon_name (::GtkButton* button /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// const char* /*none,nullable*/ gtk_button_get_label (GtkButton* button /*none*/);
// const char* /*none,nullable*/ gtk_button_get_label (::GtkButton* button /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// gboolean gtk_button_get_use_underline (GtkButton* button /*none*/);
// gboolean gtk_button_get_use_underline (::GtkButton* button /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_button_set_can_shrink (GtkButton* button /*none*/, gboolean can_shrink);
// void gtk_button_set_can_shrink (::GtkButton* button /*none*/, gboolean can_shrink);
GI_INLINE_DECL void set_can_shrink (gboolean can_shrink) noexcept;

// void gtk_button_set_child (GtkButton* button /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_button_set_child (::GtkButton* button /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_button_set_has_frame (GtkButton* button /*none*/, gboolean has_frame);
// void gtk_button_set_has_frame (::GtkButton* button /*none*/, gboolean has_frame);
GI_INLINE_DECL void set_has_frame (gboolean has_frame) noexcept;

// void gtk_button_set_icon_name (GtkButton* button /*none*/, const char* icon_name /*none*/);
// void gtk_button_set_icon_name (::GtkButton* button /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL void set_icon_name (const gi::cstring_v icon_name) noexcept;

// void gtk_button_set_label (GtkButton* button /*none*/, const char* label /*none*/);
// void gtk_button_set_label (::GtkButton* button /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;

// void gtk_button_set_use_underline (GtkButton* button /*none*/, gboolean use_underline);
// void gtk_button_set_use_underline (::GtkButton* button /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<bool, base::ButtonBase> property_can_shrink()
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "can-shrink"); }
const gi::property_proxy<bool, base::ButtonBase> property_can_shrink() const
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "can-shrink"); }

gi::property_proxy<Gtk::Widget, base::ButtonBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ButtonBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ButtonBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ButtonBase> (*this, "child"); }

gi::property_proxy<bool, base::ButtonBase> property_has_frame()
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::ButtonBase> property_has_frame() const
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "has-frame"); }

gi::property_proxy<gi::cstring, base::ButtonBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::ButtonBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::ButtonBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::ButtonBase> (*this, "icon-name"); }

gi::property_proxy<gi::cstring, base::ButtonBase> property_label()
{ return gi::property_proxy<gi::cstring, base::ButtonBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::ButtonBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::ButtonBase> (*this, "label"); }

gi::property_proxy<bool, base::ButtonBase> property_use_underline()
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ButtonBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "use-underline"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::Button)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Button)> (*this, "activate"); }

// (signal) void clicked ();
// (signal) void clicked ();
gi::signal_proxy<void(Gtk::Button)> signal_clicked()
{ return gi::signal_proxy<void(Gtk::Button)> (*this, "clicked"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/button_extra_def.hpp>)
#include <gtk/button_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/button_extra.hpp>)
#include <gtk/button_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Button : public GI_GTK_BUTTON_BASE
{ typedef GI_GTK_BUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkButton>
{ typedef Gtk::Button type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ButtonClassDef
{
typedef ButtonClassDef self;
public:
typedef Gtk::Button instance_type;
typedef ::GtkButtonClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;
using GI_MEMBER_CHECK_CONFLICT(clicked) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Button::activate (GtkButton* button /*none*/);
// void Button::activate (::GtkButton* button /*none*/);
virtual void activate_ () noexcept = 0;

// void Button::clicked (GtkButton* button /*none*/);
// void Button::clicked (::GtkButton* button /*none*/);
virtual void clicked_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
friend class internal::ButtonClassDef;
typedef ButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void Button::activate (GtkButton* button /*none*/);
// void Button::activate (::GtkButton* button /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;

// void Button::clicked (GtkButton* button /*none*/);
// void Button::clicked (::GtkButton* button /*none*/);
GI_INLINE_DECL void clicked_ () noexcept override;


};


struct ButtonClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ButtonClass, activate)
  GI_MEMBER_DEFINE(ButtonClass, clicked)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, clicked)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ButtonImpl = detail::ObjectImpl<Button, internal::ButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
