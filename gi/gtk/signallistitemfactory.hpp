// AUTO-GENERATED

#ifndef _GI_GTK_SIGNALLISTITEMFACTORY_HPP_
#define _GI_GTK_SIGNALLISTITEMFACTORY_HPP_

#include "listitemfactory.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SignalListItemFactory;

namespace base {


#define GI_GTK_SIGNALLISTITEMFACTORY_BASE base::SignalListItemFactoryBase
class SignalListItemFactoryBase : public Gtk::ListItemFactory
{
typedef Gtk::ListItemFactory super_type;
public:
typedef ::GtkSignalListItemFactory BaseObjectType;

SignalListItemFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_signal_list_item_factory_get_type(); } 

// GtkListItemFactory* /*full*/ gtk_signal_list_item_factory_new ();
// ::GtkSignalListItemFactory* /*full*/ gtk_signal_list_item_factory_new ();
static GI_INLINE_DECL Gtk::SignalListItemFactory new_ () noexcept;

// (signal) void bind ( object /*none*/);
// (signal) void bind (::GObject* object /*none*/);
gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> signal_bind()
{ return gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> (*this, "bind"); }

// (signal) void setup ( object /*none*/);
// (signal) void setup (::GObject* object /*none*/);
gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> signal_setup()
{ return gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> (*this, "setup"); }

// (signal) void teardown ( object /*none*/);
// (signal) void teardown (::GObject* object /*none*/);
gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> signal_teardown()
{ return gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> (*this, "teardown"); }

// (signal) void unbind ( object /*none*/);
// (signal) void unbind (::GObject* object /*none*/);
gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> signal_unbind()
{ return gi::signal_proxy<void(Gtk::SignalListItemFactory, GObject::Object object)> (*this, "unbind"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/signallistitemfactory_extra_def.hpp>)
#include <gtk/signallistitemfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/signallistitemfactory_extra.hpp>)
#include <gtk/signallistitemfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SignalListItemFactory : public GI_GTK_SIGNALLISTITEMFACTORY_BASE
{ typedef GI_GTK_SIGNALLISTITEMFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSignalListItemFactory>
{ typedef Gtk::SignalListItemFactory type; }; 

} // namespace repository

} // namespace gi

#endif
