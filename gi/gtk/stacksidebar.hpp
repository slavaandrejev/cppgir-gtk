// AUTO-GENERATED

#ifndef _GI_GTK_STACKSIDEBAR_HPP_
#define _GI_GTK_STACKSIDEBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Stack;

class StackSidebar;

namespace base {


#define GI_GTK_STACKSIDEBAR_BASE base::StackSidebarBase
class StackSidebarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkStackSidebar BaseObjectType;

StackSidebarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_sidebar_get_type(); } 

// GtkWidget* /*none*/ gtk_stack_sidebar_new ();
// ::GtkStackSidebar* /*none*/ gtk_stack_sidebar_new ();
static GI_INLINE_DECL Gtk::StackSidebar new_ () noexcept;

// GtkStack* /*none,nullable*/ gtk_stack_sidebar_get_stack (GtkStackSidebar* self /*none*/);
// ::GtkStack* /*none,nullable*/ gtk_stack_sidebar_get_stack (::GtkStackSidebar* self /*none*/);
GI_INLINE_DECL Gtk::Stack get_stack () noexcept;

// void gtk_stack_sidebar_set_stack (GtkStackSidebar* self /*none*/, GtkStack* stack /*none*/);
// void gtk_stack_sidebar_set_stack (::GtkStackSidebar* self /*none*/, ::GtkStack* stack /*none*/);
GI_INLINE_DECL void set_stack (Gtk::Stack stack) noexcept;

gi::property_proxy<Gtk::Stack, base::StackSidebarBase> property_stack()
{ return gi::property_proxy<Gtk::Stack, base::StackSidebarBase> (*this, "stack"); }
const gi::property_proxy<Gtk::Stack, base::StackSidebarBase> property_stack() const
{ return gi::property_proxy<Gtk::Stack, base::StackSidebarBase> (*this, "stack"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stacksidebar_extra_def.hpp>)
#include <gtk/stacksidebar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stacksidebar_extra.hpp>)
#include <gtk/stacksidebar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StackSidebar : public GI_GTK_STACKSIDEBAR_BASE
{ typedef GI_GTK_STACKSIDEBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStackSidebar>
{ typedef Gtk::StackSidebar type; }; 

} // namespace repository

} // namespace gi

#endif
