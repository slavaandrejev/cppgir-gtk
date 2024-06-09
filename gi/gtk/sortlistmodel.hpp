// AUTO-GENERATED

#ifndef _GI_GTK_SORTLISTMODEL_HPP_
#define _GI_GTK_SORTLISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;
class Sorter;

class SortListModel;

namespace base {


#define GI_GTK_SORTLISTMODEL_BASE base::SortListModelBase
class SortListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSortListModel BaseObjectType;

SortListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_sort_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

// GtkSortListModel* /*full*/ gtk_sort_list_model_new (GListModel* model /*full,nullable*/, GtkSorter* sorter /*full,nullable*/);
// ::GtkSortListModel* /*full*/ gtk_sort_list_model_new (::GListModel* model /*full,nullable*/, ::GtkSorter* sorter /*full,nullable*/);
static GI_INLINE_DECL Gtk::SortListModel new_ (Gio::ListModel model, Gtk::Sorter sorter) noexcept;
static GI_INLINE_DECL Gtk::SortListModel new_ () noexcept;

// gboolean gtk_sort_list_model_get_incremental (GtkSortListModel* self /*none*/);
// gboolean gtk_sort_list_model_get_incremental (::GtkSortListModel* self /*none*/);
GI_INLINE_DECL bool get_incremental () noexcept;

// GListModel* /*none,nullable*/ gtk_sort_list_model_get_model (GtkSortListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_sort_list_model_get_model (::GtkSortListModel* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// guint gtk_sort_list_model_get_pending (GtkSortListModel* self /*none*/);
// guint gtk_sort_list_model_get_pending (::GtkSortListModel* self /*none*/);
GI_INLINE_DECL guint get_pending () noexcept;

// GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_section_sorter (GtkSortListModel* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_section_sorter (::GtkSortListModel* self /*none*/);
GI_INLINE_DECL Gtk::Sorter get_section_sorter () noexcept;

// GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_sorter (GtkSortListModel* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_sort_list_model_get_sorter (::GtkSortListModel* self /*none*/);
GI_INLINE_DECL Gtk::Sorter get_sorter () noexcept;

// void gtk_sort_list_model_set_incremental (GtkSortListModel* self /*none*/, gboolean incremental);
// void gtk_sort_list_model_set_incremental (::GtkSortListModel* self /*none*/, gboolean incremental);
GI_INLINE_DECL void set_incremental (gboolean incremental) noexcept;

// void gtk_sort_list_model_set_model (GtkSortListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_sort_list_model_set_model (::GtkSortListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_sort_list_model_set_section_sorter (GtkSortListModel* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_sort_list_model_set_section_sorter (::GtkSortListModel* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
GI_INLINE_DECL void set_section_sorter (Gtk::Sorter sorter) noexcept;
GI_INLINE_DECL void set_section_sorter () noexcept;

// void gtk_sort_list_model_set_sorter (GtkSortListModel* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_sort_list_model_set_sorter (::GtkSortListModel* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
GI_INLINE_DECL void set_sorter (Gtk::Sorter sorter) noexcept;
GI_INLINE_DECL void set_sorter () noexcept;

gi::property_proxy<bool, base::SortListModelBase> property_incremental()
{ return gi::property_proxy<bool, base::SortListModelBase> (*this, "incremental"); }
const gi::property_proxy<bool, base::SortListModelBase> property_incremental() const
{ return gi::property_proxy<bool, base::SortListModelBase> (*this, "incremental"); }

gi::property_proxy<GType, base::SortListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::SortListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::SortListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::SortListModelBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::SortListModelBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::SortListModelBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::SortListModelBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::SortListModelBase> (*this, "model"); }

gi::property_proxy<guint, base::SortListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::SortListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::SortListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::SortListModelBase> (*this, "n-items"); }

gi::property_proxy<guint, base::SortListModelBase> property_pending()
{ return gi::property_proxy<guint, base::SortListModelBase> (*this, "pending"); }
const gi::property_proxy<guint, base::SortListModelBase> property_pending() const
{ return gi::property_proxy<guint, base::SortListModelBase> (*this, "pending"); }

gi::property_proxy<Gtk::Sorter, base::SortListModelBase> property_section_sorter()
{ return gi::property_proxy<Gtk::Sorter, base::SortListModelBase> (*this, "section-sorter"); }
const gi::property_proxy<Gtk::Sorter, base::SortListModelBase> property_section_sorter() const
{ return gi::property_proxy<Gtk::Sorter, base::SortListModelBase> (*this, "section-sorter"); }

gi::property_proxy<Gtk::Sorter, base::SortListModelBase> property_sorter()
{ return gi::property_proxy<Gtk::Sorter, base::SortListModelBase> (*this, "sorter"); }
const gi::property_proxy<Gtk::Sorter, base::SortListModelBase> property_sorter() const
{ return gi::property_proxy<Gtk::Sorter, base::SortListModelBase> (*this, "sorter"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sortlistmodel_extra_def.hpp>)
#include <gtk/sortlistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sortlistmodel_extra.hpp>)
#include <gtk/sortlistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SortListModel : public GI_GTK_SORTLISTMODEL_BASE
{ typedef GI_GTK_SORTLISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSortListModel>
{ typedef Gtk::SortListModel type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SortListModelClassDef
{
typedef SortListModelClassDef self;
public:
typedef Gtk::SortListModel instance_type;
typedef ::GtkSortListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SortListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SortListModelClass: public detail::ClassTemplate<Gtk::impl::internal::SortListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl>
{
friend class internal::SortListModelClassDef;
typedef SortListModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SortListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl> super;

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


struct SortListModelClassDef::TypeInitData
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

using SortListModelImpl = detail::ObjectImpl<SortListModel, internal::SortListModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
