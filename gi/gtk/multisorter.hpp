// AUTO-GENERATED

#ifndef _GI_GTK_MULTISORTER_HPP_
#define _GI_GTK_MULTISORTER_HPP_

#include "sorter.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class Sorter;

class MultiSorter;

namespace base {


#define GI_GTK_MULTISORTER_BASE base::MultiSorterBase
class MultiSorterBase : public Gtk::Sorter
{
typedef Gtk::Sorter super_type;
public:
typedef ::GtkMultiSorter BaseObjectType;

MultiSorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_multi_sorter_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkMultiSorter* /*full*/ gtk_multi_sorter_new ();
// ::GtkMultiSorter* /*full*/ gtk_multi_sorter_new ();
static GI_INLINE_DECL Gtk::MultiSorter new_ () noexcept;

// void gtk_multi_sorter_append (GtkMultiSorter* self /*none*/, GtkSorter* sorter /*full*/);
// void gtk_multi_sorter_append (::GtkMultiSorter* self /*none*/, ::GtkSorter* sorter /*full*/);
GI_INLINE_DECL void append (Gtk::Sorter sorter) noexcept;

// void gtk_multi_sorter_remove (GtkMultiSorter* self /*none*/, guint position);
// void gtk_multi_sorter_remove (::GtkMultiSorter* self /*none*/, guint position);
GI_INLINE_DECL void remove (guint position) noexcept;

gi::property_proxy<GType, base::MultiSorterBase> property_item_type()
{ return gi::property_proxy<GType, base::MultiSorterBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::MultiSorterBase> property_item_type() const
{ return gi::property_proxy<GType, base::MultiSorterBase> (*this, "item-type"); }

gi::property_proxy<guint, base::MultiSorterBase> property_n_items()
{ return gi::property_proxy<guint, base::MultiSorterBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::MultiSorterBase> property_n_items() const
{ return gi::property_proxy<guint, base::MultiSorterBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/multisorter_extra_def.hpp>)
#include <gtk/multisorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/multisorter_extra.hpp>)
#include <gtk/multisorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MultiSorter : public GI_GTK_MULTISORTER_BASE
{ typedef GI_GTK_MULTISORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMultiSorter>
{ typedef Gtk::MultiSorter type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MultiSorterClassDef
{
typedef MultiSorterClassDef self;
public:
typedef Gtk::MultiSorter instance_type;
typedef ::GtkMultiSorterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MultiSorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MultiSorterClass: public detail::ClassTemplate<Gtk::impl::internal::MultiSorterClassDef, Gtk::impl::internal::SorterClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl>
{
friend class internal::MultiSorterClassDef;
typedef MultiSorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MultiSorterClassDef, Gtk::impl::internal::SorterClass, Gio::impl::internal::ListModelInterfaceClassImpl, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};


struct MultiSorterClassDef::TypeInitData
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

using MultiSorterImpl = detail::ObjectImpl<MultiSorter, internal::MultiSorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
