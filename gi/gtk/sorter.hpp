// AUTO-GENERATED

#ifndef _GI_GTK_SORTER_HPP_
#define _GI_GTK_SORTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Sorter;

namespace base {


#define GI_GTK_SORTER_BASE base::SorterBase
class SorterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSorter BaseObjectType;

SorterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_sorter_get_type(); } 

// void gtk_sorter_changed (GtkSorter* self /*none*/, GtkSorterChange change);
// void gtk_sorter_changed (::GtkSorter* self /*none*/, ::GtkSorterChange change);
GI_INLINE_DECL void changed (Gtk::SorterChange change) noexcept;

// GtkOrdering gtk_sorter_compare (GtkSorter* self /*none*/, gpointer item1 /*none*/, gpointer item2 /*none*/);
// ::GtkOrdering gtk_sorter_compare (::GtkSorter* self /*none*/, ::GObject* item1 /*none*/, ::GObject* item2 /*none*/);
GI_INLINE_DECL Gtk::Ordering compare (GObject::Object item1, GObject::Object item2) noexcept;

// GtkSorterOrder gtk_sorter_get_order (GtkSorter* self /*none*/);
// ::GtkSorterOrder gtk_sorter_get_order (::GtkSorter* self /*none*/);
GI_INLINE_DECL Gtk::SorterOrder get_order () noexcept;

// (signal) void changed ( change);
// (signal) void changed (::GtkSorterChange change);
gi::signal_proxy<void(Gtk::Sorter, Gtk::SorterChange change)> signal_changed()
{ return gi::signal_proxy<void(Gtk::Sorter, Gtk::SorterChange change)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sorter_extra_def.hpp>)
#include <gtk/sorter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sorter_extra.hpp>)
#include <gtk/sorter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Sorter : public GI_GTK_SORTER_BASE
{ typedef GI_GTK_SORTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSorter>
{ typedef Gtk::Sorter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SorterClassDef
{
typedef SorterClassDef self;
public:
typedef Gtk::Sorter instance_type;
typedef ::GtkSorterClass class_type;

using GI_MEMBER_CHECK_CONFLICT(compare) = self;
using GI_MEMBER_CHECK_CONFLICT(get_order) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SorterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GtkOrdering Sorter::compare (GtkSorter* self /*none*/, gpointer item1 /*none,nullable*/, gpointer item2 /*none,nullable*/);
// ::GtkOrdering Sorter::compare (::GtkSorter* self /*none*/, ::GObject* item1 /*none,nullable*/, ::GObject* item2 /*none,nullable*/);
virtual Gtk::Ordering compare_ (GObject::Object item1, GObject::Object item2) noexcept = 0;

// GtkSorterOrder Sorter::get_order (GtkSorter* self /*none*/);
// ::GtkSorterOrder Sorter::get_order (::GtkSorter* self /*none*/);
virtual Gtk::SorterOrder get_order_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SorterClass: public detail::ClassTemplate<Gtk::impl::internal::SorterClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::SorterClassDef;
typedef SorterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SorterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GtkOrdering Sorter::compare (GtkSorter* self /*none*/, gpointer item1 /*none,nullable*/, gpointer item2 /*none,nullable*/);
// ::GtkOrdering Sorter::compare (::GtkSorter* self /*none*/, ::GObject* item1 /*none,nullable*/, ::GObject* item2 /*none,nullable*/);
GI_INLINE_DECL Gtk::Ordering compare_ (GObject::Object item1, GObject::Object item2) noexcept override;

// GtkSorterOrder Sorter::get_order (GtkSorter* self /*none*/);
// ::GtkSorterOrder Sorter::get_order (::GtkSorter* self /*none*/);
GI_INLINE_DECL Gtk::SorterOrder get_order_ () noexcept override;


};


struct SorterClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SorterClass, compare)
  GI_MEMBER_DEFINE(SorterClass, get_order)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, compare),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_order)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SorterImpl = detail::ObjectImpl<Sorter, internal::SorterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
