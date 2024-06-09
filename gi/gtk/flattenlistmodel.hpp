// AUTO-GENERATED

#ifndef _GI_GTK_FLATTENLISTMODEL_HPP_
#define _GI_GTK_FLATTENLISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;

class FlattenListModel;

namespace base {


#define GI_GTK_FLATTENLISTMODEL_BASE base::FlattenListModelBase
class FlattenListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkFlattenListModel BaseObjectType;

FlattenListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_flatten_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

// GtkFlattenListModel* /*full*/ gtk_flatten_list_model_new (GListModel* model /*full,nullable*/);
// ::GtkFlattenListModel* /*full*/ gtk_flatten_list_model_new (::GListModel* model /*full,nullable*/);
static GI_INLINE_DECL Gtk::FlattenListModel new_ (Gio::ListModel model) noexcept;
static GI_INLINE_DECL Gtk::FlattenListModel new_ () noexcept;

// GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model (GtkFlattenListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model (::GtkFlattenListModel* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model_for_item (GtkFlattenListModel* self /*none*/, guint position);
// ::GListModel* /*none,nullable*/ gtk_flatten_list_model_get_model_for_item (::GtkFlattenListModel* self /*none*/, guint position);
GI_INLINE_DECL Gio::ListModel get_model_for_item (guint position) noexcept;

// void gtk_flatten_list_model_set_model (GtkFlattenListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_flatten_list_model_set_model (::GtkFlattenListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<GType, base::FlattenListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::FlattenListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::FlattenListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::FlattenListModelBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::FlattenListModelBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::FlattenListModelBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::FlattenListModelBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::FlattenListModelBase> (*this, "model"); }

gi::property_proxy<guint, base::FlattenListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::FlattenListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::FlattenListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::FlattenListModelBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flattenlistmodel_extra_def.hpp>)
#include <gtk/flattenlistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flattenlistmodel_extra.hpp>)
#include <gtk/flattenlistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FlattenListModel : public GI_GTK_FLATTENLISTMODEL_BASE
{ typedef GI_GTK_FLATTENLISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFlattenListModel>
{ typedef Gtk::FlattenListModel type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FlattenListModelClassDef
{
typedef FlattenListModelClassDef self;
public:
typedef Gtk::FlattenListModel instance_type;
typedef ::GtkFlattenListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FlattenListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FlattenListModelClass: public detail::ClassTemplate<Gtk::impl::internal::FlattenListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl>
{
friend class internal::FlattenListModelClassDef;
typedef FlattenListModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FlattenListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl> super;

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


struct FlattenListModelClassDef::TypeInitData
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

using FlattenListModelImpl = detail::ObjectImpl<FlattenListModel, internal::FlattenListModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
