// AUTO-GENERATED

#ifndef _GI_GTK_FILTERLISTMODEL_HPP_
#define _GI_GTK_FILTERLISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Filter;
class SectionModel;

class FilterListModel;

namespace base {


#define GI_GTK_FILTERLISTMODEL_BASE base::FilterListModelBase
class FilterListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkFilterListModel BaseObjectType;

FilterListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_filter_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

// GtkFilterListModel* /*full*/ gtk_filter_list_model_new (GListModel* model /*full,nullable*/, GtkFilter* filter /*full,nullable*/);
// ::GtkFilterListModel* /*full*/ gtk_filter_list_model_new (::GListModel* model /*full,nullable*/, ::GtkFilter* filter /*full,nullable*/);
static GI_INLINE_DECL Gtk::FilterListModel new_ (Gio::ListModel model, Gtk::Filter filter) noexcept;
static GI_INLINE_DECL Gtk::FilterListModel new_ () noexcept;

// GtkFilter* /*none,nullable*/ gtk_filter_list_model_get_filter (GtkFilterListModel* self /*none*/);
// ::GtkFilter* /*none,nullable*/ gtk_filter_list_model_get_filter (::GtkFilterListModel* self /*none*/);
GI_INLINE_DECL Gtk::Filter get_filter () noexcept;

// gboolean gtk_filter_list_model_get_incremental (GtkFilterListModel* self /*none*/);
// gboolean gtk_filter_list_model_get_incremental (::GtkFilterListModel* self /*none*/);
GI_INLINE_DECL bool get_incremental () noexcept;

// GListModel* /*none,nullable*/ gtk_filter_list_model_get_model (GtkFilterListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_filter_list_model_get_model (::GtkFilterListModel* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// guint gtk_filter_list_model_get_pending (GtkFilterListModel* self /*none*/);
// guint gtk_filter_list_model_get_pending (::GtkFilterListModel* self /*none*/);
GI_INLINE_DECL guint get_pending () noexcept;

// void gtk_filter_list_model_set_filter (GtkFilterListModel* self /*none*/, GtkFilter* filter /*none,nullable*/);
// void gtk_filter_list_model_set_filter (::GtkFilterListModel* self /*none*/, ::GtkFilter* filter /*none,nullable*/);
GI_INLINE_DECL void set_filter (Gtk::Filter filter) noexcept;
GI_INLINE_DECL void set_filter () noexcept;

// void gtk_filter_list_model_set_incremental (GtkFilterListModel* self /*none*/, gboolean incremental);
// void gtk_filter_list_model_set_incremental (::GtkFilterListModel* self /*none*/, gboolean incremental);
GI_INLINE_DECL void set_incremental (gboolean incremental) noexcept;

// void gtk_filter_list_model_set_model (GtkFilterListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_filter_list_model_set_model (::GtkFilterListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<Gtk::Filter, base::FilterListModelBase> property_filter()
{ return gi::property_proxy<Gtk::Filter, base::FilterListModelBase> (*this, "filter"); }
const gi::property_proxy<Gtk::Filter, base::FilterListModelBase> property_filter() const
{ return gi::property_proxy<Gtk::Filter, base::FilterListModelBase> (*this, "filter"); }

gi::property_proxy<bool, base::FilterListModelBase> property_incremental()
{ return gi::property_proxy<bool, base::FilterListModelBase> (*this, "incremental"); }
const gi::property_proxy<bool, base::FilterListModelBase> property_incremental() const
{ return gi::property_proxy<bool, base::FilterListModelBase> (*this, "incremental"); }

gi::property_proxy<GType, base::FilterListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::FilterListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::FilterListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::FilterListModelBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::FilterListModelBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::FilterListModelBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::FilterListModelBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::FilterListModelBase> (*this, "model"); }

gi::property_proxy<guint, base::FilterListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::FilterListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::FilterListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::FilterListModelBase> (*this, "n-items"); }

gi::property_proxy<guint, base::FilterListModelBase> property_pending()
{ return gi::property_proxy<guint, base::FilterListModelBase> (*this, "pending"); }
const gi::property_proxy<guint, base::FilterListModelBase> property_pending() const
{ return gi::property_proxy<guint, base::FilterListModelBase> (*this, "pending"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filterlistmodel_extra_def.hpp>)
#include <gtk/filterlistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filterlistmodel_extra.hpp>)
#include <gtk/filterlistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FilterListModel : public GI_GTK_FILTERLISTMODEL_BASE
{ typedef GI_GTK_FILTERLISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFilterListModel>
{ typedef Gtk::FilterListModel type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FilterListModelClassDef
{
typedef FilterListModelClassDef self;
public:
typedef Gtk::FilterListModel instance_type;
typedef ::GtkFilterListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FilterListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FilterListModelClass: public detail::ClassTemplate<Gtk::impl::internal::FilterListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl>
{
friend class internal::FilterListModelClassDef;
typedef FilterListModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FilterListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl> super;

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


struct FilterListModelClassDef::TypeInitData
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

using FilterListModelImpl = detail::ObjectImpl<FilterListModel, internal::FilterListModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
