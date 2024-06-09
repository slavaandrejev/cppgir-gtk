// AUTO-GENERATED

#ifndef _GI_GTK_STACKSWITCHER_HPP_
#define _GI_GTK_STACKSWITCHER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Stack;

class StackSwitcher;

namespace base {


#define GI_GTK_STACKSWITCHER_BASE base::StackSwitcherBase
class StackSwitcherBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkStackSwitcher BaseObjectType;

StackSwitcherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_switcher_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_stack_switcher_new ();
// ::GtkStackSwitcher* /*none*/ gtk_stack_switcher_new ();
static GI_INLINE_DECL Gtk::StackSwitcher new_ () noexcept;

// GtkStack* /*none,nullable*/ gtk_stack_switcher_get_stack (GtkStackSwitcher* switcher /*none*/);
// ::GtkStack* /*none,nullable*/ gtk_stack_switcher_get_stack (::GtkStackSwitcher* switcher /*none*/);
GI_INLINE_DECL Gtk::Stack get_stack () noexcept;

// void gtk_stack_switcher_set_stack (GtkStackSwitcher* switcher /*none*/, GtkStack* stack /*none,nullable*/);
// void gtk_stack_switcher_set_stack (::GtkStackSwitcher* switcher /*none*/, ::GtkStack* stack /*none,nullable*/);
GI_INLINE_DECL void set_stack (Gtk::Stack stack) noexcept;
GI_INLINE_DECL void set_stack () noexcept;

gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> property_stack()
{ return gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> (*this, "stack"); }
const gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> property_stack() const
{ return gi::property_proxy<Gtk::Stack, base::StackSwitcherBase> (*this, "stack"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra_def.hpp>)
#include <gtk/stackswitcher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra.hpp>)
#include <gtk/stackswitcher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StackSwitcher : public GI_GTK_STACKSWITCHER_BASE
{ typedef GI_GTK_STACKSWITCHER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStackSwitcher>
{ typedef Gtk::StackSwitcher type; }; 

} // namespace repository

} // namespace gi

#endif
