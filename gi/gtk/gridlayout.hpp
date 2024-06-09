// AUTO-GENERATED

#ifndef _GI_GTK_GRIDLAYOUT_HPP_
#define _GI_GTK_GRIDLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GridLayout;

namespace base {


#define GI_GTK_GRIDLAYOUT_BASE base::GridLayoutBase
class GridLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkGridLayout BaseObjectType;

GridLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_grid_layout_get_type(); } 

// GtkLayoutManager* /*full*/ gtk_grid_layout_new ();
// ::GtkGridLayout* /*full*/ gtk_grid_layout_new ();
static GI_INLINE_DECL Gtk::GridLayout new_ () noexcept;

// int gtk_grid_layout_get_baseline_row (GtkGridLayout* grid /*none*/);
// gint gtk_grid_layout_get_baseline_row (::GtkGridLayout* grid /*none*/);
GI_INLINE_DECL gint get_baseline_row () noexcept;

// gboolean gtk_grid_layout_get_column_homogeneous (GtkGridLayout* grid /*none*/);
// gboolean gtk_grid_layout_get_column_homogeneous (::GtkGridLayout* grid /*none*/);
GI_INLINE_DECL bool get_column_homogeneous () noexcept;

// guint gtk_grid_layout_get_column_spacing (GtkGridLayout* grid /*none*/);
// guint gtk_grid_layout_get_column_spacing (::GtkGridLayout* grid /*none*/);
GI_INLINE_DECL guint get_column_spacing () noexcept;

// GtkBaselinePosition gtk_grid_layout_get_row_baseline_position (GtkGridLayout* grid /*none*/, int row);
// ::GtkBaselinePosition gtk_grid_layout_get_row_baseline_position (::GtkGridLayout* grid /*none*/, gint row);
GI_INLINE_DECL Gtk::BaselinePosition get_row_baseline_position (gint row) noexcept;

// gboolean gtk_grid_layout_get_row_homogeneous (GtkGridLayout* grid /*none*/);
// gboolean gtk_grid_layout_get_row_homogeneous (::GtkGridLayout* grid /*none*/);
GI_INLINE_DECL bool get_row_homogeneous () noexcept;

// guint gtk_grid_layout_get_row_spacing (GtkGridLayout* grid /*none*/);
// guint gtk_grid_layout_get_row_spacing (::GtkGridLayout* grid /*none*/);
GI_INLINE_DECL guint get_row_spacing () noexcept;

// void gtk_grid_layout_set_baseline_row (GtkGridLayout* grid /*none*/, int row);
// void gtk_grid_layout_set_baseline_row (::GtkGridLayout* grid /*none*/, gint row);
GI_INLINE_DECL void set_baseline_row (gint row) noexcept;

// void gtk_grid_layout_set_column_homogeneous (GtkGridLayout* grid /*none*/, gboolean homogeneous);
// void gtk_grid_layout_set_column_homogeneous (::GtkGridLayout* grid /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_column_homogeneous (gboolean homogeneous) noexcept;

// void gtk_grid_layout_set_column_spacing (GtkGridLayout* grid /*none*/, guint spacing);
// void gtk_grid_layout_set_column_spacing (::GtkGridLayout* grid /*none*/, guint spacing);
GI_INLINE_DECL void set_column_spacing (guint spacing) noexcept;

// void gtk_grid_layout_set_row_baseline_position (GtkGridLayout* grid /*none*/, int row, GtkBaselinePosition pos);
// void gtk_grid_layout_set_row_baseline_position (::GtkGridLayout* grid /*none*/, gint row, ::GtkBaselinePosition pos);
GI_INLINE_DECL void set_row_baseline_position (gint row, Gtk::BaselinePosition pos) noexcept;

// void gtk_grid_layout_set_row_homogeneous (GtkGridLayout* grid /*none*/, gboolean homogeneous);
// void gtk_grid_layout_set_row_homogeneous (::GtkGridLayout* grid /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_row_homogeneous (gboolean homogeneous) noexcept;

// void gtk_grid_layout_set_row_spacing (GtkGridLayout* grid /*none*/, guint spacing);
// void gtk_grid_layout_set_row_spacing (::GtkGridLayout* grid /*none*/, guint spacing);
GI_INLINE_DECL void set_row_spacing (guint spacing) noexcept;

gi::property_proxy<gint, base::GridLayoutBase> property_baseline_row()
{ return gi::property_proxy<gint, base::GridLayoutBase> (*this, "baseline-row"); }
const gi::property_proxy<gint, base::GridLayoutBase> property_baseline_row() const
{ return gi::property_proxy<gint, base::GridLayoutBase> (*this, "baseline-row"); }

gi::property_proxy<bool, base::GridLayoutBase> property_column_homogeneous()
{ return gi::property_proxy<bool, base::GridLayoutBase> (*this, "column-homogeneous"); }
const gi::property_proxy<bool, base::GridLayoutBase> property_column_homogeneous() const
{ return gi::property_proxy<bool, base::GridLayoutBase> (*this, "column-homogeneous"); }

gi::property_proxy<gint, base::GridLayoutBase> property_column_spacing()
{ return gi::property_proxy<gint, base::GridLayoutBase> (*this, "column-spacing"); }
const gi::property_proxy<gint, base::GridLayoutBase> property_column_spacing() const
{ return gi::property_proxy<gint, base::GridLayoutBase> (*this, "column-spacing"); }

gi::property_proxy<bool, base::GridLayoutBase> property_row_homogeneous()
{ return gi::property_proxy<bool, base::GridLayoutBase> (*this, "row-homogeneous"); }
const gi::property_proxy<bool, base::GridLayoutBase> property_row_homogeneous() const
{ return gi::property_proxy<bool, base::GridLayoutBase> (*this, "row-homogeneous"); }

gi::property_proxy<gint, base::GridLayoutBase> property_row_spacing()
{ return gi::property_proxy<gint, base::GridLayoutBase> (*this, "row-spacing"); }
const gi::property_proxy<gint, base::GridLayoutBase> property_row_spacing() const
{ return gi::property_proxy<gint, base::GridLayoutBase> (*this, "row-spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gridlayout_extra_def.hpp>)
#include <gtk/gridlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gridlayout_extra.hpp>)
#include <gtk/gridlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GridLayout : public GI_GTK_GRIDLAYOUT_BASE
{ typedef GI_GTK_GRIDLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGridLayout>
{ typedef Gtk::GridLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class GridLayoutClassDef
{
typedef GridLayoutClassDef self;
public:
typedef Gtk::GridLayout instance_type;
typedef ::GtkGridLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~GridLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GridLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::GridLayoutClassDef, Gtk::impl::internal::LayoutManagerClass>
{
friend class internal::GridLayoutClassDef;
typedef GridLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::GridLayoutClassDef, Gtk::impl::internal::LayoutManagerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct GridLayoutClassDef::TypeInitData
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

using GridLayoutImpl = detail::ObjectImpl<GridLayout, internal::GridLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
