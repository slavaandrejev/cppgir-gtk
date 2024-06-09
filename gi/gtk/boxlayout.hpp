// AUTO-GENERATED

#ifndef _GI_GTK_BOXLAYOUT_HPP_
#define _GI_GTK_BOXLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;

class BoxLayout;

namespace base {


#define GI_GTK_BOXLAYOUT_BASE base::BoxLayoutBase
class BoxLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkBoxLayout BaseObjectType;

BoxLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_box_layout_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkLayoutManager* /*full*/ gtk_box_layout_new (GtkOrientation orientation);
// ::GtkBoxLayout* /*full*/ gtk_box_layout_new (::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::BoxLayout new_ (Gtk::Orientation orientation) noexcept;

// int gtk_box_layout_get_baseline_child (GtkBoxLayout* box_layout /*none*/);
// gint gtk_box_layout_get_baseline_child (::GtkBoxLayout* box_layout /*none*/);
GI_INLINE_DECL gint get_baseline_child () noexcept;

// GtkBaselinePosition gtk_box_layout_get_baseline_position (GtkBoxLayout* box_layout /*none*/);
// ::GtkBaselinePosition gtk_box_layout_get_baseline_position (::GtkBoxLayout* box_layout /*none*/);
GI_INLINE_DECL Gtk::BaselinePosition get_baseline_position () noexcept;

// gboolean gtk_box_layout_get_homogeneous (GtkBoxLayout* box_layout /*none*/);
// gboolean gtk_box_layout_get_homogeneous (::GtkBoxLayout* box_layout /*none*/);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// guint gtk_box_layout_get_spacing (GtkBoxLayout* box_layout /*none*/);
// guint gtk_box_layout_get_spacing (::GtkBoxLayout* box_layout /*none*/);
GI_INLINE_DECL guint get_spacing () noexcept;

// void gtk_box_layout_set_baseline_child (GtkBoxLayout* box_layout /*none*/, int child);
// void gtk_box_layout_set_baseline_child (::GtkBoxLayout* box_layout /*none*/, gint child);
GI_INLINE_DECL void set_baseline_child (gint child) noexcept;

// void gtk_box_layout_set_baseline_position (GtkBoxLayout* box_layout /*none*/, GtkBaselinePosition position);
// void gtk_box_layout_set_baseline_position (::GtkBoxLayout* box_layout /*none*/, ::GtkBaselinePosition position);
GI_INLINE_DECL void set_baseline_position (Gtk::BaselinePosition position) noexcept;

// void gtk_box_layout_set_homogeneous (GtkBoxLayout* box_layout /*none*/, gboolean homogeneous);
// void gtk_box_layout_set_homogeneous (::GtkBoxLayout* box_layout /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_box_layout_set_spacing (GtkBoxLayout* box_layout /*none*/, guint spacing);
// void gtk_box_layout_set_spacing (::GtkBoxLayout* box_layout /*none*/, guint spacing);
GI_INLINE_DECL void set_spacing (guint spacing) noexcept;

gi::property_proxy<gint, base::BoxLayoutBase> property_baseline_child()
{ return gi::property_proxy<gint, base::BoxLayoutBase> (*this, "baseline-child"); }
const gi::property_proxy<gint, base::BoxLayoutBase> property_baseline_child() const
{ return gi::property_proxy<gint, base::BoxLayoutBase> (*this, "baseline-child"); }

gi::property_proxy<Gtk::BaselinePosition, base::BoxLayoutBase> property_baseline_position()
{ return gi::property_proxy<Gtk::BaselinePosition, base::BoxLayoutBase> (*this, "baseline-position"); }
const gi::property_proxy<Gtk::BaselinePosition, base::BoxLayoutBase> property_baseline_position() const
{ return gi::property_proxy<Gtk::BaselinePosition, base::BoxLayoutBase> (*this, "baseline-position"); }

gi::property_proxy<bool, base::BoxLayoutBase> property_homogeneous()
{ return gi::property_proxy<bool, base::BoxLayoutBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::BoxLayoutBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::BoxLayoutBase> (*this, "homogeneous"); }

gi::property_proxy<gint, base::BoxLayoutBase> property_spacing()
{ return gi::property_proxy<gint, base::BoxLayoutBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::BoxLayoutBase> property_spacing() const
{ return gi::property_proxy<gint, base::BoxLayoutBase> (*this, "spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/boxlayout_extra_def.hpp>)
#include <gtk/boxlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/boxlayout_extra.hpp>)
#include <gtk/boxlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BoxLayout : public GI_GTK_BOXLAYOUT_BASE
{ typedef GI_GTK_BOXLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBoxLayout>
{ typedef Gtk::BoxLayout type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BoxLayoutClassDef
{
typedef BoxLayoutClassDef self;
public:
typedef Gtk::BoxLayout instance_type;
typedef ::GtkBoxLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BoxLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BoxLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::BoxLayoutClassDef, Gtk::impl::internal::LayoutManagerClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::BoxLayoutClassDef;
typedef BoxLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BoxLayoutClassDef, Gtk::impl::internal::LayoutManagerClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};


struct BoxLayoutClassDef::TypeInitData
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

using BoxLayoutImpl = detail::ObjectImpl<BoxLayout, internal::BoxLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
