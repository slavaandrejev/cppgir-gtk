// AUTO-GENERATED

#ifndef _GI_GTK_STYLEPROVIDER_HPP_
#define _GI_GTK_STYLEPROVIDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class StyleProvider;

namespace base {


#define GI_GTK_STYLEPROVIDER_BASE base::StyleProviderBase
class StyleProviderBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkStyleProvider BaseObjectType;

StyleProviderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_style_provider_get_type(); } 

// (signal) void gtk-private-changed ();
// (signal) void gtk-private-changed ();
gi::signal_proxy<void(Gtk::StyleProvider)> signal_gtk_private_changed()
{ return gi::signal_proxy<void(Gtk::StyleProvider)> (*this, "gtk-private-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/styleprovider_extra_def.hpp>)
#include <gtk/styleprovider_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/styleprovider_extra.hpp>)
#include <gtk/styleprovider_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StyleProvider : public GI_GTK_STYLEPROVIDER_BASE
{ typedef GI_GTK_STYLEPROVIDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStyleProvider>
{ typedef Gtk::StyleProvider type; }; 

} // namespace repository

} // namespace gi

#endif
