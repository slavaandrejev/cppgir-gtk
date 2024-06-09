// AUTO-GENERATED

#ifndef _GI_GTK_SLICELISTMODEL_HPP_
#define _GI_GTK_SLICELISTMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;

class SliceListModel;

namespace base {


#define GI_GTK_SLICELISTMODEL_BASE base::SliceListModelBase
class SliceListModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSliceListModel BaseObjectType;

SliceListModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_slice_list_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

// GtkSliceListModel* /*full*/ gtk_slice_list_model_new (GListModel* model /*full,nullable*/, guint offset, guint size);
// ::GtkSliceListModel* /*full*/ gtk_slice_list_model_new (::GListModel* model /*full,nullable*/, guint offset, guint size);
static GI_INLINE_DECL Gtk::SliceListModel new_ (Gio::ListModel model, guint offset, guint size) noexcept;
static GI_INLINE_DECL Gtk::SliceListModel new_ (guint offset, guint size) noexcept;

// GListModel* /*none,nullable*/ gtk_slice_list_model_get_model (GtkSliceListModel* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_slice_list_model_get_model (::GtkSliceListModel* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// guint gtk_slice_list_model_get_offset (GtkSliceListModel* self /*none*/);
// guint gtk_slice_list_model_get_offset (::GtkSliceListModel* self /*none*/);
GI_INLINE_DECL guint get_offset () noexcept;

// guint gtk_slice_list_model_get_size (GtkSliceListModel* self /*none*/);
// guint gtk_slice_list_model_get_size (::GtkSliceListModel* self /*none*/);
GI_INLINE_DECL guint get_size () noexcept;

// void gtk_slice_list_model_set_model (GtkSliceListModel* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_slice_list_model_set_model (::GtkSliceListModel* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_slice_list_model_set_offset (GtkSliceListModel* self /*none*/, guint offset);
// void gtk_slice_list_model_set_offset (::GtkSliceListModel* self /*none*/, guint offset);
GI_INLINE_DECL void set_offset (guint offset) noexcept;

// void gtk_slice_list_model_set_size (GtkSliceListModel* self /*none*/, guint size);
// void gtk_slice_list_model_set_size (::GtkSliceListModel* self /*none*/, guint size);
GI_INLINE_DECL void set_size (guint size) noexcept;

gi::property_proxy<GType, base::SliceListModelBase> property_item_type()
{ return gi::property_proxy<GType, base::SliceListModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::SliceListModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::SliceListModelBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::SliceListModelBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::SliceListModelBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::SliceListModelBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::SliceListModelBase> (*this, "model"); }

gi::property_proxy<guint, base::SliceListModelBase> property_n_items()
{ return gi::property_proxy<guint, base::SliceListModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::SliceListModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::SliceListModelBase> (*this, "n-items"); }

gi::property_proxy<guint, base::SliceListModelBase> property_offset()
{ return gi::property_proxy<guint, base::SliceListModelBase> (*this, "offset"); }
const gi::property_proxy<guint, base::SliceListModelBase> property_offset() const
{ return gi::property_proxy<guint, base::SliceListModelBase> (*this, "offset"); }

gi::property_proxy<guint, base::SliceListModelBase> property_size()
{ return gi::property_proxy<guint, base::SliceListModelBase> (*this, "size"); }
const gi::property_proxy<guint, base::SliceListModelBase> property_size() const
{ return gi::property_proxy<guint, base::SliceListModelBase> (*this, "size"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/slicelistmodel_extra_def.hpp>)
#include <gtk/slicelistmodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/slicelistmodel_extra.hpp>)
#include <gtk/slicelistmodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SliceListModel : public GI_GTK_SLICELISTMODEL_BASE
{ typedef GI_GTK_SLICELISTMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSliceListModel>
{ typedef Gtk::SliceListModel type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SliceListModelClassDef
{
typedef SliceListModelClassDef self;
public:
typedef Gtk::SliceListModel instance_type;
typedef ::GtkSliceListModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SliceListModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SliceListModelClass: public detail::ClassTemplate<Gtk::impl::internal::SliceListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl>
{
friend class internal::SliceListModelClassDef;
typedef SliceListModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SliceListModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl> super;

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


struct SliceListModelClassDef::TypeInitData
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

using SliceListModelImpl = detail::ObjectImpl<SliceListModel, internal::SliceListModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
