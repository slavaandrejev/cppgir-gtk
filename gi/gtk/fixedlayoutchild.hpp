// AUTO-GENERATED

#ifndef _GI_GTK_FIXEDLAYOUTCHILD_HPP_
#define _GI_GTK_FIXEDLAYOUTCHILD_HPP_

#include "layoutchild.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class FixedLayoutChild;

namespace base {


#define GI_GTK_FIXEDLAYOUTCHILD_BASE base::FixedLayoutChildBase
class FixedLayoutChildBase : public Gtk::LayoutChild
{
typedef Gtk::LayoutChild super_type;
public:
typedef ::GtkFixedLayoutChild BaseObjectType;

FixedLayoutChildBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_fixed_layout_child_get_type(); } 

// GskTransform* /*none,nullable*/ gtk_fixed_layout_child_get_transform (GtkFixedLayoutChild* child /*none*/);
// ::GskTransform* /*none,nullable*/ gtk_fixed_layout_child_get_transform (::GtkFixedLayoutChild* child /*none*/);
GI_INLINE_DECL Gsk::Transform_Ref get_transform () noexcept;

// void gtk_fixed_layout_child_set_transform (GtkFixedLayoutChild* child /*none*/, GskTransform* transform /*none*/);
// void gtk_fixed_layout_child_set_transform (::GtkFixedLayoutChild* child /*none*/, ::GskTransform* transform /*none*/);
GI_INLINE_DECL void set_transform (Gsk::Transform_Ref transform) noexcept;

gi::property_proxy<Gsk::Transform, base::FixedLayoutChildBase> property_transform()
{ return gi::property_proxy<Gsk::Transform, base::FixedLayoutChildBase> (*this, "transform"); }
const gi::property_proxy<Gsk::Transform, base::FixedLayoutChildBase> property_transform() const
{ return gi::property_proxy<Gsk::Transform, base::FixedLayoutChildBase> (*this, "transform"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixedlayoutchild_extra_def.hpp>)
#include <gtk/fixedlayoutchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixedlayoutchild_extra.hpp>)
#include <gtk/fixedlayoutchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FixedLayoutChild : public GI_GTK_FIXEDLAYOUTCHILD_BASE
{ typedef GI_GTK_FIXEDLAYOUTCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFixedLayoutChild>
{ typedef Gtk::FixedLayoutChild type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FixedLayoutChildClassDef
{
typedef FixedLayoutChildClassDef self;
public:
typedef Gtk::FixedLayoutChild instance_type;
typedef ::GtkFixedLayoutChildClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FixedLayoutChildClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FixedLayoutChildClass: public detail::ClassTemplate<Gtk::impl::internal::FixedLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass>
{
friend class internal::FixedLayoutChildClassDef;
typedef FixedLayoutChildClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FixedLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FixedLayoutChildClassDef::TypeInitData
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

using FixedLayoutChildImpl = detail::ObjectImpl<FixedLayoutChild, internal::FixedLayoutChildClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
