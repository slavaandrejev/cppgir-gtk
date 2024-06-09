// AUTO-GENERATED

#ifndef _GI_GTK_ATCONTEXT_HPP_
#define _GI_GTK_ATCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Accessible;

class ATContext;

namespace base {


#define GI_GTK_ATCONTEXT_BASE base::ATContextBase
class ATContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkATContext BaseObjectType;

ATContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_at_context_get_type(); } 

// GtkATContext* /*full,nullable*/ gtk_at_context_create (GtkAccessibleRole accessible_role, GtkAccessible* accessible /*none*/, GdkDisplay* display /*none*/);
// ::GtkATContext* /*full,nullable*/ gtk_at_context_create (::GtkAccessibleRole accessible_role, ::GtkAccessible* accessible /*none*/, ::GdkDisplay* display /*none*/);
static GI_INLINE_DECL Gtk::ATContext create (Gtk::AccessibleRole accessible_role, Gtk::Accessible accessible, Gdk::Display display) noexcept;

// GtkAccessible* /*none*/ gtk_at_context_get_accessible (GtkATContext* self /*none*/);
// ::GtkAccessible* /*none*/ gtk_at_context_get_accessible (::GtkATContext* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_accessible () noexcept;

// GtkAccessibleRole gtk_at_context_get_accessible_role (GtkATContext* self /*none*/);
// ::GtkAccessibleRole gtk_at_context_get_accessible_role (::GtkATContext* self /*none*/);
GI_INLINE_DECL Gtk::AccessibleRole get_accessible_role () noexcept;

gi::property_proxy<Gtk::Accessible, base::ATContextBase> property_accessible()
{ return gi::property_proxy<Gtk::Accessible, base::ATContextBase> (*this, "accessible"); }
const gi::property_proxy<Gtk::Accessible, base::ATContextBase> property_accessible() const
{ return gi::property_proxy<Gtk::Accessible, base::ATContextBase> (*this, "accessible"); }

gi::property_proxy<Gtk::AccessibleRole, base::ATContextBase> property_accessible_role()
{ return gi::property_proxy<Gtk::AccessibleRole, base::ATContextBase> (*this, "accessible-role"); }
const gi::property_proxy<Gtk::AccessibleRole, base::ATContextBase> property_accessible_role() const
{ return gi::property_proxy<Gtk::AccessibleRole, base::ATContextBase> (*this, "accessible-role"); }

gi::property_proxy<Gdk::Display, base::ATContextBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::ATContextBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::ATContextBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::ATContextBase> (*this, "display"); }

// (signal) void state-change ();
// (signal) void state-change ();
gi::signal_proxy<void(Gtk::ATContext)> signal_state_change()
{ return gi::signal_proxy<void(Gtk::ATContext)> (*this, "state-change"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/atcontext_extra_def.hpp>)
#include <gtk/atcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/atcontext_extra.hpp>)
#include <gtk/atcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ATContext : public GI_GTK_ATCONTEXT_BASE
{ typedef GI_GTK_ATCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkATContext>
{ typedef Gtk::ATContext type; }; 

} // namespace repository

} // namespace gi

#endif
