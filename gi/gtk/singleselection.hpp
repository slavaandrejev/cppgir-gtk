// AUTO-GENERATED

#ifndef _GI_GTK_SINGLESELECTION_HPP_
#define _GI_GTK_SINGLESELECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;
class SelectionModel;

class SingleSelection;

namespace base {


#define GI_GTK_SINGLESELECTION_BASE base::SingleSelectionBase
class SingleSelectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSingleSelection BaseObjectType;

SingleSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_single_selection_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

GI_INLINE_DECL Gtk::SelectionModel interface_ (gi::interface_tag<Gtk::SelectionModel>);

GI_INLINE_DECL operator Gtk::SelectionModel ();

// GtkSingleSelection* /*full*/ gtk_single_selection_new (GListModel* model /*full,nullable*/);
// ::GtkSingleSelection* /*full*/ gtk_single_selection_new (::GListModel* model /*full,nullable*/);
static GI_INLINE_DECL Gtk::SingleSelection new_ (Gio::ListModel model) noexcept;
static GI_INLINE_DECL Gtk::SingleSelection new_ () noexcept;

// gboolean gtk_single_selection_get_autoselect (GtkSingleSelection* self /*none*/);
// gboolean gtk_single_selection_get_autoselect (::GtkSingleSelection* self /*none*/);
GI_INLINE_DECL bool get_autoselect () noexcept;

// gboolean gtk_single_selection_get_can_unselect (GtkSingleSelection* self /*none*/);
// gboolean gtk_single_selection_get_can_unselect (::GtkSingleSelection* self /*none*/);
GI_INLINE_DECL bool get_can_unselect () noexcept;

// GListModel* /*none,nullable*/ gtk_single_selection_get_model (GtkSingleSelection* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_single_selection_get_model (::GtkSingleSelection* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// guint gtk_single_selection_get_selected (GtkSingleSelection* self /*none*/);
// guint gtk_single_selection_get_selected (::GtkSingleSelection* self /*none*/);
GI_INLINE_DECL guint get_selected () noexcept;

// gpointer /*none,nullable*/ gtk_single_selection_get_selected_item (GtkSingleSelection* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_single_selection_get_selected_item (::GtkSingleSelection* self /*none*/);
GI_INLINE_DECL GObject::Object get_selected_item () noexcept;

// void gtk_single_selection_set_autoselect (GtkSingleSelection* self /*none*/, gboolean autoselect);
// void gtk_single_selection_set_autoselect (::GtkSingleSelection* self /*none*/, gboolean autoselect);
GI_INLINE_DECL void set_autoselect (gboolean autoselect) noexcept;

// void gtk_single_selection_set_can_unselect (GtkSingleSelection* self /*none*/, gboolean can_unselect);
// void gtk_single_selection_set_can_unselect (::GtkSingleSelection* self /*none*/, gboolean can_unselect);
GI_INLINE_DECL void set_can_unselect (gboolean can_unselect) noexcept;

// void gtk_single_selection_set_model (GtkSingleSelection* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_single_selection_set_model (::GtkSingleSelection* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_single_selection_set_selected (GtkSingleSelection* self /*none*/, guint position);
// void gtk_single_selection_set_selected (::GtkSingleSelection* self /*none*/, guint position);
GI_INLINE_DECL void set_selected (guint position) noexcept;

gi::property_proxy<bool, base::SingleSelectionBase> property_autoselect()
{ return gi::property_proxy<bool, base::SingleSelectionBase> (*this, "autoselect"); }
const gi::property_proxy<bool, base::SingleSelectionBase> property_autoselect() const
{ return gi::property_proxy<bool, base::SingleSelectionBase> (*this, "autoselect"); }

gi::property_proxy<bool, base::SingleSelectionBase> property_can_unselect()
{ return gi::property_proxy<bool, base::SingleSelectionBase> (*this, "can-unselect"); }
const gi::property_proxy<bool, base::SingleSelectionBase> property_can_unselect() const
{ return gi::property_proxy<bool, base::SingleSelectionBase> (*this, "can-unselect"); }

gi::property_proxy<GType, base::SingleSelectionBase> property_item_type()
{ return gi::property_proxy<GType, base::SingleSelectionBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::SingleSelectionBase> property_item_type() const
{ return gi::property_proxy<GType, base::SingleSelectionBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::SingleSelectionBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::SingleSelectionBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::SingleSelectionBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::SingleSelectionBase> (*this, "model"); }

gi::property_proxy<guint, base::SingleSelectionBase> property_n_items()
{ return gi::property_proxy<guint, base::SingleSelectionBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::SingleSelectionBase> property_n_items() const
{ return gi::property_proxy<guint, base::SingleSelectionBase> (*this, "n-items"); }

gi::property_proxy<guint, base::SingleSelectionBase> property_selected()
{ return gi::property_proxy<guint, base::SingleSelectionBase> (*this, "selected"); }
const gi::property_proxy<guint, base::SingleSelectionBase> property_selected() const
{ return gi::property_proxy<guint, base::SingleSelectionBase> (*this, "selected"); }

gi::property_proxy<GObject::Object, base::SingleSelectionBase> property_selected_item()
{ return gi::property_proxy<GObject::Object, base::SingleSelectionBase> (*this, "selected-item"); }
const gi::property_proxy<GObject::Object, base::SingleSelectionBase> property_selected_item() const
{ return gi::property_proxy<GObject::Object, base::SingleSelectionBase> (*this, "selected-item"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/singleselection_extra_def.hpp>)
#include <gtk/singleselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/singleselection_extra.hpp>)
#include <gtk/singleselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SingleSelection : public GI_GTK_SINGLESELECTION_BASE
{ typedef GI_GTK_SINGLESELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSingleSelection>
{ typedef Gtk::SingleSelection type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"
#include "selectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SingleSelectionClassDef
{
typedef SingleSelectionClassDef self;
public:
typedef Gtk::SingleSelection instance_type;
typedef ::GtkSingleSelectionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SingleSelectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SingleSelectionClass: public detail::ClassTemplate<Gtk::impl::internal::SingleSelectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl>
{
friend class internal::SingleSelectionClassDef;
typedef SingleSelectionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SingleSelectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl> super;

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


struct SingleSelectionClassDef::TypeInitData
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

using SingleSelectionImpl = detail::ObjectImpl<SingleSelection, internal::SingleSelectionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
