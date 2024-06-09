// AUTO-GENERATED

#ifndef _GI_GTK_GRIDLAYOUTCHILD_HPP_
#define _GI_GTK_GRIDLAYOUTCHILD_HPP_

#include "layoutchild.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GridLayoutChild;

namespace base {


#define GI_GTK_GRIDLAYOUTCHILD_BASE base::GridLayoutChildBase
class GridLayoutChildBase : public Gtk::LayoutChild
{
typedef Gtk::LayoutChild super_type;
public:
typedef ::GtkGridLayoutChild BaseObjectType;

GridLayoutChildBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_grid_layout_child_get_type(); } 

// int gtk_grid_layout_child_get_column (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_column (::GtkGridLayoutChild* child /*none*/);
GI_INLINE_DECL gint get_column () noexcept;

// int gtk_grid_layout_child_get_column_span (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_column_span (::GtkGridLayoutChild* child /*none*/);
GI_INLINE_DECL gint get_column_span () noexcept;

// int gtk_grid_layout_child_get_row (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_row (::GtkGridLayoutChild* child /*none*/);
GI_INLINE_DECL gint get_row () noexcept;

// int gtk_grid_layout_child_get_row_span (GtkGridLayoutChild* child /*none*/);
// gint gtk_grid_layout_child_get_row_span (::GtkGridLayoutChild* child /*none*/);
GI_INLINE_DECL gint get_row_span () noexcept;

// void gtk_grid_layout_child_set_column (GtkGridLayoutChild* child /*none*/, int column);
// void gtk_grid_layout_child_set_column (::GtkGridLayoutChild* child /*none*/, gint column);
GI_INLINE_DECL void set_column (gint column) noexcept;

// void gtk_grid_layout_child_set_column_span (GtkGridLayoutChild* child /*none*/, int span);
// void gtk_grid_layout_child_set_column_span (::GtkGridLayoutChild* child /*none*/, gint span);
GI_INLINE_DECL void set_column_span (gint span) noexcept;

// void gtk_grid_layout_child_set_row (GtkGridLayoutChild* child /*none*/, int row);
// void gtk_grid_layout_child_set_row (::GtkGridLayoutChild* child /*none*/, gint row);
GI_INLINE_DECL void set_row (gint row) noexcept;

// void gtk_grid_layout_child_set_row_span (GtkGridLayoutChild* child /*none*/, int span);
// void gtk_grid_layout_child_set_row_span (::GtkGridLayoutChild* child /*none*/, gint span);
GI_INLINE_DECL void set_row_span (gint span) noexcept;

gi::property_proxy<gint, base::GridLayoutChildBase> property_column()
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "column"); }
const gi::property_proxy<gint, base::GridLayoutChildBase> property_column() const
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "column"); }

gi::property_proxy<gint, base::GridLayoutChildBase> property_column_span()
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "column-span"); }
const gi::property_proxy<gint, base::GridLayoutChildBase> property_column_span() const
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "column-span"); }

gi::property_proxy<gint, base::GridLayoutChildBase> property_row()
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "row"); }
const gi::property_proxy<gint, base::GridLayoutChildBase> property_row() const
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "row"); }

gi::property_proxy<gint, base::GridLayoutChildBase> property_row_span()
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "row-span"); }
const gi::property_proxy<gint, base::GridLayoutChildBase> property_row_span() const
{ return gi::property_proxy<gint, base::GridLayoutChildBase> (*this, "row-span"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gridlayoutchild_extra_def.hpp>)
#include <gtk/gridlayoutchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gridlayoutchild_extra.hpp>)
#include <gtk/gridlayoutchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GridLayoutChild : public GI_GTK_GRIDLAYOUTCHILD_BASE
{ typedef GI_GTK_GRIDLAYOUTCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGridLayoutChild>
{ typedef Gtk::GridLayoutChild type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class GridLayoutChildClassDef
{
typedef GridLayoutChildClassDef self;
public:
typedef Gtk::GridLayoutChild instance_type;
typedef ::GtkGridLayoutChildClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~GridLayoutChildClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GridLayoutChildClass: public detail::ClassTemplate<Gtk::impl::internal::GridLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass>
{
friend class internal::GridLayoutChildClassDef;
typedef GridLayoutChildClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::GridLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct GridLayoutChildClassDef::TypeInitData
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

using GridLayoutChildImpl = detail::ObjectImpl<GridLayoutChild, internal::GridLayoutChildClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
