// AUTO-GENERATED

#ifndef _GI_GTK_NOSELECTION_HPP_
#define _GI_GTK_NOSELECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SectionModel;
class SelectionModel;

class NoSelection;

namespace base {


#define GI_GTK_NOSELECTION_BASE base::NoSelectionBase
class NoSelectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkNoSelection BaseObjectType;

NoSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_no_selection_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::SectionModel interface_ (gi::interface_tag<Gtk::SectionModel>);

GI_INLINE_DECL operator Gtk::SectionModel ();

GI_INLINE_DECL Gtk::SelectionModel interface_ (gi::interface_tag<Gtk::SelectionModel>);

GI_INLINE_DECL operator Gtk::SelectionModel ();

// GtkNoSelection* /*full*/ gtk_no_selection_new (GListModel* model /*full,nullable*/);
// ::GtkNoSelection* /*full*/ gtk_no_selection_new (::GListModel* model /*full,nullable*/);
static GI_INLINE_DECL Gtk::NoSelection new_ (Gio::ListModel model) noexcept;
static GI_INLINE_DECL Gtk::NoSelection new_ () noexcept;

// GListModel* /*none,nullable*/ gtk_no_selection_get_model (GtkNoSelection* self /*none*/);
// ::GListModel* /*none,nullable*/ gtk_no_selection_get_model (::GtkNoSelection* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_model () noexcept;

// void gtk_no_selection_set_model (GtkNoSelection* self /*none*/, GListModel* model /*none,nullable*/);
// void gtk_no_selection_set_model (::GtkNoSelection* self /*none*/, ::GListModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gio::ListModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<GType, base::NoSelectionBase> property_item_type()
{ return gi::property_proxy<GType, base::NoSelectionBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::NoSelectionBase> property_item_type() const
{ return gi::property_proxy<GType, base::NoSelectionBase> (*this, "item-type"); }

gi::property_proxy<Gio::ListModel, base::NoSelectionBase> property_model()
{ return gi::property_proxy<Gio::ListModel, base::NoSelectionBase> (*this, "model"); }
const gi::property_proxy<Gio::ListModel, base::NoSelectionBase> property_model() const
{ return gi::property_proxy<Gio::ListModel, base::NoSelectionBase> (*this, "model"); }

gi::property_proxy<guint, base::NoSelectionBase> property_n_items()
{ return gi::property_proxy<guint, base::NoSelectionBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::NoSelectionBase> property_n_items() const
{ return gi::property_proxy<guint, base::NoSelectionBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/noselection_extra_def.hpp>)
#include <gtk/noselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/noselection_extra.hpp>)
#include <gtk/noselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NoSelection : public GI_GTK_NOSELECTION_BASE
{ typedef GI_GTK_NOSELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNoSelection>
{ typedef Gtk::NoSelection type; }; 

} // namespace repository

} // namespace gi

#include "sectionmodel.hpp"
#include "selectionmodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class NoSelectionClassDef
{
typedef NoSelectionClassDef self;
public:
typedef Gtk::NoSelection instance_type;
typedef ::GtkNoSelectionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NoSelectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NoSelectionClass: public detail::ClassTemplate<Gtk::impl::internal::NoSelectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl>
{
friend class internal::NoSelectionClassDef;
typedef NoSelectionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::NoSelectionClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::SectionModelInterfaceClassImpl, Gtk::impl::internal::SelectionModelInterfaceClassImpl> super;

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


struct NoSelectionClassDef::TypeInitData
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

using NoSelectionImpl = detail::ObjectImpl<NoSelection, internal::NoSelectionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
