// AUTO-GENERATED

#ifndef _GI_GTK_CUSTOMSORTER_HPP_
#define _GI_GTK_CUSTOMSORTER_HPP_

#include "sorter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CustomSorter;

namespace base {


#define GI_GTK_CUSTOMSORTER_BASE base::CustomSorterBase
class CustomSorterBase : public Gtk::Sorter
{
typedef Gtk::Sorter super_type;
public:
typedef ::GtkCustomSorter BaseObjectType;

CustomSorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_custom_sorter_get_type(); } 

// GtkCustomSorter* /*full*/ gtk_custom_sorter_new (GCompareDataFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none,nullable*/);
// ::GtkCustomSorter* /*full*/ gtk_custom_sorter_new (GLib::CompareDataFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none,nullable*/);
static GI_INLINE_DECL Gtk::CustomSorter new_ (GLib::CompareDataFunc sort_func) noexcept;

// void gtk_custom_sorter_set_sort_func (GtkCustomSorter* self /*none*/, GCompareDataFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// void gtk_custom_sorter_set_sort_func (::GtkCustomSorter* self /*none*/, GLib::CompareDataFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
GI_INLINE_DECL void set_sort_func (GLib::CompareDataFunc sort_func) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/customsorter_extra_def.hpp>)
#include <gtk/customsorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/customsorter_extra.hpp>)
#include <gtk/customsorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CustomSorter : public GI_GTK_CUSTOMSORTER_BASE
{ typedef GI_GTK_CUSTOMSORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCustomSorter>
{ typedef Gtk::CustomSorter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CustomSorterClassDef
{
typedef CustomSorterClassDef self;
public:
typedef Gtk::CustomSorter instance_type;
typedef ::GtkCustomSorterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CustomSorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CustomSorterClass: public detail::ClassTemplate<Gtk::impl::internal::CustomSorterClassDef, Gtk::impl::internal::SorterClass>
{
friend class internal::CustomSorterClassDef;
typedef CustomSorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CustomSorterClassDef, Gtk::impl::internal::SorterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct CustomSorterClassDef::TypeInitData
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

using CustomSorterImpl = detail::ObjectImpl<CustomSorter, internal::CustomSorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
