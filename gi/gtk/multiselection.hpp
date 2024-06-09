// AUTO-GENERATED

#ifndef _GI_GTK_MULTISELECTION_HPP_
#define _GI_GTK_MULTISELECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;
class SelectionModel;

class MultiSelection;

namespace base {


#define GI_GTK_MULTISELECTION_BASE base::MultiSelectionBase
class MultiSelectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkMultiSelection BaseObjectType;

MultiSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_multi_selection_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

GI_INLINE_DECL Gtk::SelectionModel interface_ (gi::interface_tag<Gtk::SelectionModel>);

GI_INLINE_DECL operator Gtk::SelectionModel ();

// GtkMultiSelection* /*full*/ gtk_multi_selection_new (GListModel* model /*full,nullable*/);
// ::GtkMultiSelection* /*full*/ gtk_multi_selection_new (::GListModel* model /*full,nullable*/);
static GI_INLINE_DECL Gtk::MultiSelection new_ (Gio::ListModel model) noexcept;
static GI_INLINE_DECL Gtk::MultiSelection new_ () noexcept;

// GListModel* /*none,nullable*/ gtk_multi_selection_get_model (GtkMultiSelection* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_multi_selection_get_model (::GtkMultiSelection* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// void gtk_multi_selection_set_model (GtkMultiSelection* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_multi_selection_set_model (::GtkMultiSelection* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<GType, base::MultiSelectionBase> property_item_type()
{ return gi::property_proxy<GType, base::MultiSelectionBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::MultiSelectionBase> property_item_type() const
{ return gi::property_proxy<GType, base::MultiSelectionBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::MultiSelectionBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::MultiSelectionBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::MultiSelectionBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::MultiSelectionBase> (*this, "model"); }

gi::property_proxy<guint, base::MultiSelectionBase> property_n_items()
{ return gi::property_proxy<guint, base::MultiSelectionBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::MultiSelectionBase> property_n_items() const
{ return gi::property_proxy<guint, base::MultiSelectionBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/multiselection_extra_def.hpp>)
#include <gtk/multiselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/multiselection_extra.hpp>)
#include <gtk/multiselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MultiSelection : public GI_GTK_MULTISELECTION_BASE
{ typedef GI_GTK_MULTISELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMultiSelection>
{ typedef Gtk::MultiSelection type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"
#include "selectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MultiSelectionClassDef
{
typedef MultiSelectionClassDef self;
public:
typedef Gtk::MultiSelection instance_type;
typedef ::GtkMultiSelectionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MultiSelectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MultiSelectionClass: public detail::ClassTemplate<Gtk::impl::internal::MultiSelectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl>
{
friend class internal::MultiSelectionClassDef;
typedef MultiSelectionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MultiSelectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl> super;

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
typedef Gtk::impl::internal::SelectionModelInterfaceClassImpl GtkSelectionModelInterface_type;



};


struct MultiSelectionClassDef::TypeInitData
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

using MultiSelectionImpl = detail::ObjectImpl<MultiSelection, internal::MultiSelectionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
