// AUTO-GENERATED

#ifndef _GI_GTK_MAPLISTMODEL_HPP_
#define _GI_GTK_MAPLISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;

class MapListModel;

namespace base {


#define GI_GTK_MAPLISTMODEL_BASE base::MapListModelBase
class MapListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkMapListModel BaseObjectType;

MapListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_map_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

// GtkMapListModel* /*full*/ gtk_map_list_model_new (GListModel* model /*full,nullable*/, GtkMapListModelMapFunc map_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// ::GtkMapListModel* /*full*/ gtk_map_list_model_new (::GListModel* model /*full,nullable*/, Gtk::MapListModelMapFunc::cfunction_type map_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
static GI_INLINE_DECL Gtk::MapListModel new_ (Gio::ListModel model, Gtk::MapListModelMapFunc map_func) noexcept;
static GI_INLINE_DECL Gtk::MapListModel new_ (Gtk::MapListModelMapFunc map_func) noexcept;

// GListModel* /*none,nullable*/ gtk_map_list_model_get_model (GtkMapListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_map_list_model_get_model (::GtkMapListModel* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// gboolean gtk_map_list_model_has_map (GtkMapListModel* self /*none*/);
// gboolean gtk_map_list_model_has_map (::GtkMapListModel* self /*none*/);
GI_INLINE_DECL bool has_map () noexcept;

// void gtk_map_list_model_set_map_func (GtkMapListModel* self /*none*/, GtkMapListModelMapFunc map_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// void gtk_map_list_model_set_map_func (::GtkMapListModel* self /*none*/, Gtk::MapListModelMapFunc::cfunction_type map_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
GI_INLINE_DECL void set_map_func (Gtk::MapListModelMapFunc map_func) noexcept;

// void gtk_map_list_model_set_model (GtkMapListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_map_list_model_set_model (::GtkMapListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<bool, base::MapListModelBase> property_has_map()
{ return gi::property_proxy<bool, base::MapListModelBase> (*this, "has-map"); }
const gi::property_proxy<bool, base::MapListModelBase> property_has_map() const
{ return gi::property_proxy<bool, base::MapListModelBase> (*this, "has-map"); }

gi::property_proxy<GType, base::MapListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::MapListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::MapListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::MapListModelBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::MapListModelBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::MapListModelBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::MapListModelBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::MapListModelBase> (*this, "model"); }

gi::property_proxy<guint, base::MapListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::MapListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::MapListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::MapListModelBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/maplistmodel_extra_def.hpp>)
#include <gtk/maplistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/maplistmodel_extra.hpp>)
#include <gtk/maplistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MapListModel : public GI_GTK_MAPLISTMODEL_BASE
{ typedef GI_GTK_MAPLISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMapListModel>
{ typedef Gtk::MapListModel type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MapListModelClassDef
{
typedef MapListModelClassDef self;
public:
typedef Gtk::MapListModel instance_type;
typedef ::GtkMapListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MapListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MapListModelClass: public detail::ClassTemplate<Gtk::impl::internal::MapListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl>
{
friend class internal::MapListModelClassDef;
typedef MapListModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MapListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;
typedef Gtk::impl::internal::SectionModelInterfaceClassImpl GtkSectionModelInterface_type;



};


struct MapListModelClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MapListModelImpl = detail::ObjectImpl<MapListModel, internal::MapListModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
