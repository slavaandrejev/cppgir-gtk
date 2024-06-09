// AUTO-GENERATED

#ifndef _GI_GTK_LISTITEMFACTORY_HPP_
#define _GI_GTK_LISTITEMFACTORY_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class ListItemFactory;

namespace base {


#define GI_GTK_LISTITEMFACTORY_BASE base::ListItemFactoryBase
class ListItemFactoryBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkListItemFactory BaseObjectType;

ListItemFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_item_factory_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listitemfactory_extra_def.hpp>)
#include <gtk/listitemfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listitemfactory_extra.hpp>)
#include <gtk/listitemfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListItemFactory : public GI_GTK_LISTITEMFACTORY_BASE
{ typedef GI_GTK_LISTITEMFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListItemFactory>
{ typedef Gtk::ListItemFactory type; }; 

} // namespace repository

} // namespace gi

#endif
