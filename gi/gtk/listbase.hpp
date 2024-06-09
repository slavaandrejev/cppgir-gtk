// AUTO-GENERATED

#ifndef _GI_GTK_LISTBASE_HPP_
#define _GI_GTK_LISTBASE_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Scrollable;

class ListBase;

namespace base {


#define GI_GTK_LISTBASE_BASE base::ListBaseBase
class ListBaseBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkListBase BaseObjectType;

ListBaseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_base_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

gi::property_proxy<Gtk::Orientation, base::ListBaseBase> property_orientation()
{ return gi::property_proxy<Gtk::Orientation, base::ListBaseBase> (*this, "orientation"); }
const gi::property_proxy<Gtk::Orientation, base::ListBaseBase> property_orientation() const
{ return gi::property_proxy<Gtk::Orientation, base::ListBaseBase> (*this, "orientation"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listbase_extra_def.hpp>)
#include <gtk/listbase_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listbase_extra.hpp>)
#include <gtk/listbase_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListBase : public GI_GTK_LISTBASE_BASE
{ typedef GI_GTK_LISTBASE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListBase>
{ typedef Gtk::ListBase type; }; 

} // namespace repository

} // namespace gi

#endif
