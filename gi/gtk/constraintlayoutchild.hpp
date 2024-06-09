// AUTO-GENERATED

#ifndef _GI_GTK_CONSTRAINTLAYOUTCHILD_HPP_
#define _GI_GTK_CONSTRAINTLAYOUTCHILD_HPP_

#include "layoutchild.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ConstraintLayoutChild;

namespace base {


#define GI_GTK_CONSTRAINTLAYOUTCHILD_BASE base::ConstraintLayoutChildBase
class ConstraintLayoutChildBase : public Gtk::LayoutChild
{
typedef Gtk::LayoutChild super_type;
public:
typedef ::GtkConstraintLayoutChild BaseObjectType;

ConstraintLayoutChildBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_constraint_layout_child_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/constraintlayoutchild_extra_def.hpp>)
#include <gtk/constraintlayoutchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/constraintlayoutchild_extra.hpp>)
#include <gtk/constraintlayoutchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ConstraintLayoutChild : public GI_GTK_CONSTRAINTLAYOUTCHILD_BASE
{ typedef GI_GTK_CONSTRAINTLAYOUTCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkConstraintLayoutChild>
{ typedef Gtk::ConstraintLayoutChild type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ConstraintLayoutChildClassDef
{
typedef ConstraintLayoutChildClassDef self;
public:
typedef Gtk::ConstraintLayoutChild instance_type;
typedef ::GtkConstraintLayoutChildClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ConstraintLayoutChildClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ConstraintLayoutChildClass: public detail::ClassTemplate<Gtk::impl::internal::ConstraintLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass>
{
friend class internal::ConstraintLayoutChildClassDef;
typedef ConstraintLayoutChildClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ConstraintLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ConstraintLayoutChildClassDef::TypeInitData
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

using ConstraintLayoutChildImpl = detail::ObjectImpl<ConstraintLayoutChild, internal::ConstraintLayoutChildClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
