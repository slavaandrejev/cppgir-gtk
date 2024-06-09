// AUTO-GENERATED

#ifndef _GI_GTK_BOX_HPP_
#define _GI_GTK_BOX_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Widget;

class Box;

namespace base {


#define GI_GTK_BOX_BASE base::BoxBase
class BoxBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkBox BaseObjectType;

BoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_box_new (GtkOrientation orientation, int spacing);
// ::GtkBox* /*none*/ gtk_box_new (::GtkOrientation orientation, gint spacing);
static GI_INLINE_DECL Gtk::Box new_ (Gtk::Orientation orientation, gint spacing) noexcept;

// void gtk_box_append (GtkBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_box_append (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void append (Gtk::Widget child) noexcept;

// int gtk_box_get_baseline_child (GtkBox* box /*none*/);
// gint gtk_box_get_baseline_child (::GtkBox* box /*none*/);
GI_INLINE_DECL gint get_baseline_child () noexcept;

// GtkBaselinePosition gtk_box_get_baseline_position (GtkBox* box /*none*/);
// ::GtkBaselinePosition gtk_box_get_baseline_position (::GtkBox* box /*none*/);
GI_INLINE_DECL Gtk::BaselinePosition get_baseline_position () noexcept;

// gboolean gtk_box_get_homogeneous (GtkBox* box /*none*/);
// gboolean gtk_box_get_homogeneous (::GtkBox* box /*none*/);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// int gtk_box_get_spacing (GtkBox* box /*none*/);
// gint gtk_box_get_spacing (::GtkBox* box /*none*/);
GI_INLINE_DECL gint get_spacing () noexcept;

// void gtk_box_insert_child_after (GtkBox* box /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void gtk_box_insert_child_after (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
GI_INLINE_DECL void insert_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept;
GI_INLINE_DECL void insert_child_after (Gtk::Widget child) noexcept;

// void gtk_box_prepend (GtkBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_box_prepend (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void gtk_box_remove (GtkBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_box_remove (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void gtk_box_reorder_child_after (GtkBox* box /*none*/, GtkWidget* child /*none*/, GtkWidget* sibling /*none,nullable*/);
// void gtk_box_reorder_child_after (::GtkBox* box /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* sibling /*none,nullable*/);
GI_INLINE_DECL void reorder_child_after (Gtk::Widget child, Gtk::Widget sibling) noexcept;
GI_INLINE_DECL void reorder_child_after (Gtk::Widget child) noexcept;

// void gtk_box_set_baseline_child (GtkBox* box /*none*/, int child);
// void gtk_box_set_baseline_child (::GtkBox* box /*none*/, gint child);
GI_INLINE_DECL void set_baseline_child (gint child) noexcept;

// void gtk_box_set_baseline_position (GtkBox* box /*none*/, GtkBaselinePosition position);
// void gtk_box_set_baseline_position (::GtkBox* box /*none*/, ::GtkBaselinePosition position);
GI_INLINE_DECL void set_baseline_position (Gtk::BaselinePosition position) noexcept;

// void gtk_box_set_homogeneous (GtkBox* box /*none*/, gboolean homogeneous);
// void gtk_box_set_homogeneous (::GtkBox* box /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_box_set_spacing (GtkBox* box /*none*/, int spacing);
// void gtk_box_set_spacing (::GtkBox* box /*none*/, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

gi::property_proxy<gint, base::BoxBase> property_baseline_child()
{ return gi::property_proxy<gint, base::BoxBase> (*this, "baseline-child"); }
const gi::property_proxy<gint, base::BoxBase> property_baseline_child() const
{ return gi::property_proxy<gint, base::BoxBase> (*this, "baseline-child"); }

gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> property_baseline_position()
{ return gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> (*this, "baseline-position"); }
const gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> property_baseline_position() const
{ return gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> (*this, "baseline-position"); }

gi::property_proxy<bool, base::BoxBase> property_homogeneous()
{ return gi::property_proxy<bool, base::BoxBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::BoxBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::BoxBase> (*this, "homogeneous"); }

gi::property_proxy<gint, base::BoxBase> property_spacing()
{ return gi::property_proxy<gint, base::BoxBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::BoxBase> property_spacing() const
{ return gi::property_proxy<gint, base::BoxBase> (*this, "spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/box_extra_def.hpp>)
#include <gtk/box_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/box_extra.hpp>)
#include <gtk/box_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Box : public GI_GTK_BOX_BASE
{ typedef GI_GTK_BOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBox>
{ typedef Gtk::Box type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BoxClassDef
{
typedef BoxClassDef self;
public:
typedef Gtk::Box instance_type;
typedef ::GtkBoxClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BoxClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BoxClass: public detail::ClassTemplate<Gtk::impl::internal::BoxClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
friend class internal::BoxClassDef;
typedef BoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BoxClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

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


struct BoxClassDef::TypeInitData
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

using BoxImpl = detail::ObjectImpl<Box, internal::BoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
