// AUTO-GENERATED

#ifndef _GI_GTK_BUILDERLISTITEMFACTORY_HPP_
#define _GI_GTK_BUILDERLISTITEMFACTORY_HPP_

#include "listitemfactory.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class BuilderScope;

class BuilderListItemFactory;

namespace base {


#define GI_GTK_BUILDERLISTITEMFACTORY_BASE base::BuilderListItemFactoryBase
class BuilderListItemFactoryBase : public Gtk::ListItemFactory
{
typedef Gtk::ListItemFactory super_type;
public:
typedef ::GtkBuilderListItemFactory BaseObjectType;

BuilderListItemFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_builder_list_item_factory_get_type(); } 

// GtkListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_bytes (GtkBuilderScope* scope /*none,nullable*/, GBytes* bytes /*none*/);
// ::GtkBuilderListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_bytes (::GtkBuilderScope* scope /*none,nullable*/, ::GBytes* bytes /*none*/);
static GI_INLINE_DECL Gtk::BuilderListItemFactory new_from_bytes (Gtk::BuilderScope scope, GLib::Bytes_Ref bytes) noexcept;
static GI_INLINE_DECL Gtk::BuilderListItemFactory new_from_bytes (GLib::Bytes_Ref bytes) noexcept;

// GtkListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_resource (GtkBuilderScope* scope /*none,nullable*/, const char* resource_path /*none*/);
// ::GtkBuilderListItemFactory* /*full*/ gtk_builder_list_item_factory_new_from_resource (::GtkBuilderScope* scope /*none,nullable*/, const char* resource_path /*none*/);
static GI_INLINE_DECL Gtk::BuilderListItemFactory new_from_resource (Gtk::BuilderScope scope, const gi::cstring_v resource_path) noexcept;
static GI_INLINE_DECL Gtk::BuilderListItemFactory new_from_resource (const gi::cstring_v resource_path) noexcept;

// GBytes* /*none*/ gtk_builder_list_item_factory_get_bytes (GtkBuilderListItemFactory* self /*none*/);
// ::GBytes* /*none*/ gtk_builder_list_item_factory_get_bytes (::GtkBuilderListItemFactory* self /*none*/);
GI_INLINE_DECL GLib::Bytes_Ref get_bytes () noexcept;

// const char* /*none,nullable*/ gtk_builder_list_item_factory_get_resource (GtkBuilderListItemFactory* self /*none*/);
// const char* /*none,nullable*/ gtk_builder_list_item_factory_get_resource (::GtkBuilderListItemFactory* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_resource () noexcept;

// GtkBuilderScope* /*none,nullable*/ gtk_builder_list_item_factory_get_scope (GtkBuilderListItemFactory* self /*none*/);
// ::GtkBuilderScope* /*none,nullable*/ gtk_builder_list_item_factory_get_scope (::GtkBuilderListItemFactory* self /*none*/);
GI_INLINE_DECL Gtk::BuilderScope get_scope () noexcept;

gi::property_proxy<GLib::Bytes, base::BuilderListItemFactoryBase> property_bytes()
{ return gi::property_proxy<GLib::Bytes, base::BuilderListItemFactoryBase> (*this, "bytes"); }
const gi::property_proxy<GLib::Bytes, base::BuilderListItemFactoryBase> property_bytes() const
{ return gi::property_proxy<GLib::Bytes, base::BuilderListItemFactoryBase> (*this, "bytes"); }

gi::property_proxy<gi::cstring, base::BuilderListItemFactoryBase> property_resource()
{ return gi::property_proxy<gi::cstring, base::BuilderListItemFactoryBase> (*this, "resource"); }
const gi::property_proxy<gi::cstring, base::BuilderListItemFactoryBase> property_resource() const
{ return gi::property_proxy<gi::cstring, base::BuilderListItemFactoryBase> (*this, "resource"); }

gi::property_proxy<Gtk::BuilderScope, base::BuilderListItemFactoryBase> property_scope()
{ return gi::property_proxy<Gtk::BuilderScope, base::BuilderListItemFactoryBase> (*this, "scope"); }
const gi::property_proxy<Gtk::BuilderScope, base::BuilderListItemFactoryBase> property_scope() const
{ return gi::property_proxy<Gtk::BuilderScope, base::BuilderListItemFactoryBase> (*this, "scope"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/builderlistitemfactory_extra_def.hpp>)
#include <gtk/builderlistitemfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/builderlistitemfactory_extra.hpp>)
#include <gtk/builderlistitemfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BuilderListItemFactory : public GI_GTK_BUILDERLISTITEMFACTORY_BASE
{ typedef GI_GTK_BUILDERLISTITEMFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuilderListItemFactory>
{ typedef Gtk::BuilderListItemFactory type; }; 

} // namespace repository

} // namespace gi

#endif
