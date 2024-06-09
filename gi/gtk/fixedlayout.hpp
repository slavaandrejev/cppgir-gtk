// AUTO-GENERATED

#ifndef _GI_GTK_FIXEDLAYOUT_HPP_
#define _GI_GTK_FIXEDLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class FixedLayout;

namespace base {


#define GI_GTK_FIXEDLAYOUT_BASE base::FixedLayoutBase
class FixedLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkFixedLayout BaseObjectType;

FixedLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_fixed_layout_get_type(); } 

// GtkLayoutManager* /*full*/ gtk_fixed_layout_new ();
// ::GtkFixedLayout* /*full*/ gtk_fixed_layout_new ();
static GI_INLINE_DECL Gtk::FixedLayout new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixedlayout_extra_def.hpp>)
#include <gtk/fixedlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixedlayout_extra.hpp>)
#include <gtk/fixedlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FixedLayout : public GI_GTK_FIXEDLAYOUT_BASE
{ typedef GI_GTK_FIXEDLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFixedLayout>
{ typedef Gtk::FixedLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FixedLayoutClassDef
{
typedef FixedLayoutClassDef self;
public:
typedef Gtk::FixedLayout instance_type;
typedef ::GtkFixedLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FixedLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FixedLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::FixedLayoutClassDef, Gtk::impl::internal::LayoutManagerClass>
{
friend class internal::FixedLayoutClassDef;
typedef FixedLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FixedLayoutClassDef, Gtk::impl::internal::LayoutManagerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FixedLayoutClassDef::TypeInitData
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

using FixedLayoutImpl = detail::ObjectImpl<FixedLayout, internal::FixedLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
