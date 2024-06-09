// AUTO-GENERATED

#ifndef _GI_GTK_SCALEBUTTON_HPP_
#define _GI_GTK_SCALEBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleRange;
class Adjustment;
class Button;
class Orientable;
class Widget;

class ScaleButton;

namespace base {


#define GI_GTK_SCALEBUTTON_BASE base::ScaleButtonBase
class ScaleButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkScaleButton BaseObjectType;

ScaleButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scale_button_get_type(); } 

GI_INLINE_DECL Gtk::AccessibleRange interface_ (gi::interface_tag<Gtk::AccessibleRange>);

GI_INLINE_DECL operator Gtk::AccessibleRange ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_scale_button_new (double min, double max, double step, const char** icons /*none,nullable*/);
// ::GtkScaleButton* /*none*/ gtk_scale_button_new (gdouble min, gdouble max, gdouble step, const char** icons /*none,nullable*/);
static GI_INLINE_DECL Gtk::ScaleButton new_ (gdouble min, gdouble max, gdouble step, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> icons) noexcept;

// gboolean gtk_scale_button_get_active (GtkScaleButton* button /*none*/);
// gboolean gtk_scale_button_get_active (::GtkScaleButton* button /*none*/);
GI_INLINE_DECL bool get_active () noexcept;

// GtkAdjustment* /*none*/ gtk_scale_button_get_adjustment (GtkScaleButton* button /*none*/);
// ::GtkAdjustment* /*none*/ gtk_scale_button_get_adjustment (::GtkScaleButton* button /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// GtkWidget* /*none*/ gtk_scale_button_get_minus_button (GtkScaleButton* button /*none*/);
// ::GtkButton* /*none*/ gtk_scale_button_get_minus_button (::GtkScaleButton* button /*none*/);
GI_INLINE_DECL Gtk::Button get_minus_button () noexcept;

// GtkWidget* /*none*/ gtk_scale_button_get_plus_button (GtkScaleButton* button /*none*/);
// ::GtkButton* /*none*/ gtk_scale_button_get_plus_button (::GtkScaleButton* button /*none*/);
GI_INLINE_DECL Gtk::Button get_plus_button () noexcept;

// GtkWidget* /*none*/ gtk_scale_button_get_popup (GtkScaleButton* button /*none*/);
// ::GtkWidget* /*none*/ gtk_scale_button_get_popup (::GtkScaleButton* button /*none*/);
GI_INLINE_DECL Gtk::Widget get_popup () noexcept;

// double gtk_scale_button_get_value (GtkScaleButton* button /*none*/);
// gdouble gtk_scale_button_get_value (::GtkScaleButton* button /*none*/);
GI_INLINE_DECL gdouble get_value () noexcept;

// void gtk_scale_button_set_adjustment (GtkScaleButton* button /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_scale_button_set_adjustment (::GtkScaleButton* button /*none*/, ::GtkAdjustment* adjustment /*none*/);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_scale_button_set_icons (GtkScaleButton* button /*none*/, const char** icons /*none*/);
// void gtk_scale_button_set_icons (::GtkScaleButton* button /*none*/, const char** icons /*none*/);
GI_INLINE_DECL void set_icons (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> icons) noexcept;

// void gtk_scale_button_set_value (GtkScaleButton* button /*none*/, double value);
// void gtk_scale_button_set_value (::GtkScaleButton* button /*none*/, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

gi::property_proxy<bool, base::ScaleButtonBase> property_active()
{ return gi::property_proxy<bool, base::ScaleButtonBase> (*this, "active"); }
const gi::property_proxy<bool, base::ScaleButtonBase> property_active() const
{ return gi::property_proxy<bool, base::ScaleButtonBase> (*this, "active"); }

gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScaleButtonBase> (*this, "adjustment"); }

gi::property_proxy<gdouble, base::ScaleButtonBase> property_value()
{ return gi::property_proxy<gdouble, base::ScaleButtonBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::ScaleButtonBase> property_value() const
{ return gi::property_proxy<gdouble, base::ScaleButtonBase> (*this, "value"); }

// (signal) void popdown ();
// (signal) void popdown ();
gi::signal_proxy<void(Gtk::ScaleButton)> signal_popdown()
{ return gi::signal_proxy<void(Gtk::ScaleButton)> (*this, "popdown"); }

// (signal) void popup ();
// (signal) void popup ();
gi::signal_proxy<void(Gtk::ScaleButton)> signal_popup()
{ return gi::signal_proxy<void(Gtk::ScaleButton)> (*this, "popup"); }

// (signal) void value-changed (gdouble value);
// (signal) void value-changed (gdouble value);
gi::signal_proxy<void(Gtk::ScaleButton, gdouble value)> signal_value_changed()
{ return gi::signal_proxy<void(Gtk::ScaleButton, gdouble value)> (*this, "value-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra_def.hpp>)
#include <gtk/scalebutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra.hpp>)
#include <gtk/scalebutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScaleButton : public GI_GTK_SCALEBUTTON_BASE
{ typedef GI_GTK_SCALEBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScaleButton>
{ typedef Gtk::ScaleButton type; }; 

} // namespace repository

} // namespace gi

#include "accessiblerange.hpp"
#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScaleButtonClassDef
{
typedef ScaleButtonClassDef self;
public:
typedef Gtk::ScaleButton instance_type;
typedef ::GtkScaleButtonClass class_type;

using GI_MEMBER_CHECK_CONFLICT(value_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ScaleButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ScaleButton::value_changed (GtkScaleButton* button /*none*/, double value);
// void ScaleButton::value_changed (::GtkScaleButton* button /*none*/, gdouble value);
virtual void value_changed_ (gdouble value) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ScaleButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ScaleButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::AccessibleRangeInterfaceClassImpl, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::ScaleButtonClassDef;
typedef ScaleButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScaleButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::AccessibleRangeInterfaceClassImpl, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::AccessibleRangeInterfaceClassImpl GtkAccessibleRangeInterface_type;
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// void ScaleButton::value_changed (GtkScaleButton* button /*none*/, double value);
// void ScaleButton::value_changed (::GtkScaleButton* button /*none*/, gdouble value);
GI_INLINE_DECL void value_changed_ (gdouble value) noexcept override;


};


struct ScaleButtonClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ScaleButtonClass, value_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, value_changed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ScaleButtonImpl = detail::ObjectImpl<ScaleButton, internal::ScaleButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
