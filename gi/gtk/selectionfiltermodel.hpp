// AUTO-GENERATED

#ifndef _GI_GTK_SELECTIONFILTERMODEL_HPP_
#define _GI_GTK_SELECTIONFILTERMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SelectionModel;

class SelectionFilterModel;

namespace base {


#define GI_GTK_SELECTIONFILTERMODEL_BASE base::SelectionFilterModelBase
class SelectionFilterModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSelectionFilterModel BaseObjectType;

SelectionFilterModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_selection_filter_model_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// GtkSelectionFilterModel* /*full*/ gtk_selection_filter_model_new (GtkSelectionModel* model /*none,nullable*/);
// ::GtkSelectionFilterModel* /*full*/ gtk_selection_filter_model_new (::GtkSelectionModel* model /*none,nullable*/);
static GI_INLINE_DECL Gtk::SelectionFilterModel new_ (Gtk::SelectionModel model) noexcept;
static GI_INLINE_DECL Gtk::SelectionFilterModel new_ () noexcept;

// GtkSelectionModel* /*none,nullable*/ gtk_selection_filter_model_get_model (GtkSelectionFilterModel* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_selection_filter_model_get_model (::GtkSelectionFilterModel* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_model () noexcept;

// void gtk_selection_filter_model_set_model (GtkSelectionFilterModel* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_selection_filter_model_set_model (::GtkSelectionFilterModel* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::SelectionModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<GType, base::SelectionFilterModelBase> property_item_type()
{ return gi::property_proxy<GType, base::SelectionFilterModelBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::SelectionFilterModelBase> property_item_type() const
{ return gi::property_proxy<GType, base::SelectionFilterModelBase> (*this, "item-type"); }

gi::property_proxy<Gtk::SelectionModel, base::SelectionFilterModelBase> property_model()
{ return gi::property_proxy<Gtk::SelectionModel, base::SelectionFilterModelBase> (*this, "model"); }
const gi::property_proxy<Gtk::SelectionModel, base::SelectionFilterModelBase> property_model() const
{ return gi::property_proxy<Gtk::SelectionModel, base::SelectionFilterModelBase> (*this, "model"); }

gi::property_proxy<guint, base::SelectionFilterModelBase> property_n_items()
{ return gi::property_proxy<guint, base::SelectionFilterModelBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::SelectionFilterModelBase> property_n_items() const
{ return gi::property_proxy<guint, base::SelectionFilterModelBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/selectionfiltermodel_extra_def.hpp>)
#include <gtk/selectionfiltermodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/selectionfiltermodel_extra.hpp>)
#include <gtk/selectionfiltermodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SelectionFilterModel : public GI_GTK_SELECTIONFILTERMODEL_BASE
{ typedef GI_GTK_SELECTIONFILTERMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSelectionFilterModel>
{ typedef Gtk::SelectionFilterModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SelectionFilterModelClassDef
{
typedef SelectionFilterModelClassDef self;
public:
typedef Gtk::SelectionFilterModel instance_type;
typedef ::GtkSelectionFilterModelClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SelectionFilterModelClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SelectionFilterModelClass: public detail::ClassTemplate<Gtk::impl::internal::SelectionFilterModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::SelectionFilterModelClassDef;
typedef SelectionFilterModelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SelectionFilterModelClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;



};


struct SelectionFilterModelClassDef::TypeInitData
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

using SelectionFilterModelImpl = detail::ObjectImpl<SelectionFilterModel, internal::SelectionFilterModelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
