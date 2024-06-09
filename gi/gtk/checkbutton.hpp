// AUTO-GENERATED

#ifndef _GI_GTK_CHECKBUTTON_HPP_
#define _GI_GTK_CHECKBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Widget;

class CheckButton;

namespace base {


#define GI_GTK_CHECKBUTTON_BASE base::CheckButtonBase
class CheckButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkCheckButton BaseObjectType;

CheckButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_check_button_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

// GtkWidget* /*none*/ gtk_check_button_new ();
// ::GtkCheckButton* /*none*/ gtk_check_button_new ();
static GI_INLINE_DECL Gtk::CheckButton new_ () noexcept;

// GtkWidget* /*none*/ gtk_check_button_new_with_label (const char* label /*none,nullable*/);
// ::GtkCheckButton* /*none*/ gtk_check_button_new_with_label (const char* label /*none,nullable*/);
static GI_INLINE_DECL Gtk::CheckButton new_with_label (const gi::cstring_v label) noexcept;
static GI_INLINE_DECL Gtk::CheckButton new_with_label () noexcept;

// GtkWidget* /*none*/ gtk_check_button_new_with_mnemonic (const char* label /*none,nullable*/);
// ::GtkCheckButton* /*none*/ gtk_check_button_new_with_mnemonic (const char* label /*none,nullable*/);
static GI_INLINE_DECL Gtk::CheckButton new_with_mnemonic (const gi::cstring_v label) noexcept;
static GI_INLINE_DECL Gtk::CheckButton new_with_mnemonic () noexcept;

// gboolean gtk_check_button_get_active (GtkCheckButton* self /*none*/);
// gboolean gtk_check_button_get_active (::GtkCheckButton* self /*none*/);
GI_INLINE_DECL bool get_active () noexcept;

// GtkWidget* /*none,nullable*/ gtk_check_button_get_child (GtkCheckButton* button /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_check_button_get_child (::GtkCheckButton* button /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_check_button_get_inconsistent (GtkCheckButton* check_button /*none*/);
// gboolean gtk_check_button_get_inconsistent (::GtkCheckButton* check_button /*none*/);
GI_INLINE_DECL bool get_inconsistent () noexcept;

// const char* /*none,nullable*/ gtk_check_button_get_label (GtkCheckButton* self /*none*/);
// const char* /*none,nullable*/ gtk_check_button_get_label (::GtkCheckButton* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// gboolean gtk_check_button_get_use_underline (GtkCheckButton* self /*none*/);
// gboolean gtk_check_button_get_use_underline (::GtkCheckButton* self /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_check_button_set_active (GtkCheckButton* self /*none*/, gboolean setting);
// void gtk_check_button_set_active (::GtkCheckButton* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_active (gboolean setting) noexcept;

// void gtk_check_button_set_child (GtkCheckButton* button /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_check_button_set_child (::GtkCheckButton* button /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_check_button_set_group (GtkCheckButton* self /*none*/, GtkCheckButton* group /*none,nullable*/);
// void gtk_check_button_set_group (::GtkCheckButton* self /*none*/, ::GtkCheckButton* group /*none,nullable*/);
GI_INLINE_DECL void set_group (Gtk::CheckButton group) noexcept;
GI_INLINE_DECL void set_group () noexcept;

// void gtk_check_button_set_inconsistent (GtkCheckButton* check_button /*none*/, gboolean inconsistent);
// void gtk_check_button_set_inconsistent (::GtkCheckButton* check_button /*none*/, gboolean inconsistent);
GI_INLINE_DECL void set_inconsistent (gboolean inconsistent) noexcept;

// void gtk_check_button_set_label (GtkCheckButton* self /*none*/, const char* label /*none,nullable*/);
// void gtk_check_button_set_label (::GtkCheckButton* self /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void gtk_check_button_set_use_underline (GtkCheckButton* self /*none*/, gboolean setting);
// void gtk_check_button_set_use_underline (::GtkCheckButton* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_use_underline (gboolean setting) noexcept;

gi::property_proxy<bool, base::CheckButtonBase> property_active()
{ return gi::property_proxy<bool, base::CheckButtonBase> (*this, "active"); }
const gi::property_proxy<bool, base::CheckButtonBase> property_active() const
{ return gi::property_proxy<bool, base::CheckButtonBase> (*this, "active"); }

gi::property_proxy<Gtk::Widget, base::CheckButtonBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::CheckButtonBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::CheckButtonBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::CheckButtonBase> (*this, "child"); }

gi::property_proxy_write<Gtk::CheckButton, base::CheckButtonBase> property_group()
{ return gi::property_proxy_write<Gtk::CheckButton, base::CheckButtonBase> (*this, "group"); }

gi::property_proxy<bool, base::CheckButtonBase> property_inconsistent()
{ return gi::property_proxy<bool, base::CheckButtonBase> (*this, "inconsistent"); }
const gi::property_proxy<bool, base::CheckButtonBase> property_inconsistent() const
{ return gi::property_proxy<bool, base::CheckButtonBase> (*this, "inconsistent"); }

gi::property_proxy<gi::cstring, base::CheckButtonBase> property_label()
{ return gi::property_proxy<gi::cstring, base::CheckButtonBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::CheckButtonBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::CheckButtonBase> (*this, "label"); }

gi::property_proxy<bool, base::CheckButtonBase> property_use_underline()
{ return gi::property_proxy<bool, base::CheckButtonBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::CheckButtonBase> property_use_underline() const
{ return gi::property_proxy<bool, base::CheckButtonBase> (*this, "use-underline"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::CheckButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::CheckButton)> (*this, "activate"); }

// (signal) void toggled ();
// (signal) void toggled ();
gi::signal_proxy<void(Gtk::CheckButton)> signal_toggled()
{ return gi::signal_proxy<void(Gtk::CheckButton)> (*this, "toggled"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra_def.hpp>)
#include <gtk/checkbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkbutton_extra.hpp>)
#include <gtk/checkbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CheckButton : public GI_GTK_CHECKBUTTON_BASE
{ typedef GI_GTK_CHECKBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCheckButton>
{ typedef Gtk::CheckButton type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CheckButtonClassDef
{
typedef CheckButtonClassDef self;
public:
typedef Gtk::CheckButton instance_type;
typedef ::GtkCheckButtonClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;
using GI_MEMBER_CHECK_CONFLICT(toggled) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~CheckButtonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CheckButton::activate (GtkCheckButton* check_button /*none*/);
// void CheckButton::activate (::GtkCheckButton* check_button /*none*/);
virtual void activate_ () noexcept = 0;

// void CheckButton::toggled (GtkCheckButton* check_button /*none*/);
// void CheckButton::toggled (::GtkCheckButton* check_button /*none*/);
virtual void toggled_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CheckButtonClass: public detail::ClassTemplate<Gtk::impl::internal::CheckButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
friend class internal::CheckButtonClassDef;
typedef CheckButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CheckButtonClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void CheckButton::activate (GtkCheckButton* check_button /*none*/);
// void CheckButton::activate (::GtkCheckButton* check_button /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;

// void CheckButton::toggled (GtkCheckButton* check_button /*none*/);
// void CheckButton::toggled (::GtkCheckButton* check_button /*none*/);
GI_INLINE_DECL void toggled_ () noexcept override;


};


struct CheckButtonClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(CheckButtonClass, activate)
  GI_MEMBER_DEFINE(CheckButtonClass, toggled)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, toggled)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using CheckButtonImpl = detail::ObjectImpl<CheckButton, internal::CheckButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
