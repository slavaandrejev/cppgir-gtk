// AUTO-GENERATED

#ifndef _GI_GTK_FRAME_HPP_
#define _GI_GTK_FRAME_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Frame;

namespace base {


#define GI_GTK_FRAME_BASE base::FrameBase
class FrameBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFrame BaseObjectType;

FrameBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_frame_get_type(); } 

// GtkWidget* /*none*/ gtk_frame_new (const char* label /*none,nullable*/);
// ::GtkFrame* /*none*/ gtk_frame_new (const char* label /*none,nullable*/);
static GI_INLINE_DECL Gtk::Frame new_ (const gi::cstring_v label) noexcept;
static GI_INLINE_DECL Gtk::Frame new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_frame_get_child (GtkFrame* frame /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_frame_get_child (::GtkFrame* frame /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// const char* /*none,nullable*/ gtk_frame_get_label (GtkFrame* frame /*none*/);
// const char* /*none,nullable*/ gtk_frame_get_label (::GtkFrame* frame /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// float gtk_frame_get_label_align (GtkFrame* frame /*none*/);
// gfloat gtk_frame_get_label_align (::GtkFrame* frame /*none*/);
GI_INLINE_DECL gfloat get_label_align () noexcept;

// GtkWidget* /*none,nullable*/ gtk_frame_get_label_widget (GtkFrame* frame /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_frame_get_label_widget (::GtkFrame* frame /*none*/);
GI_INLINE_DECL Gtk::Widget get_label_widget () noexcept;

// void gtk_frame_set_child (GtkFrame* frame /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_frame_set_child (::GtkFrame* frame /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_frame_set_label (GtkFrame* frame /*none*/, const char* label /*none,nullable*/);
// void gtk_frame_set_label (::GtkFrame* frame /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void gtk_frame_set_label_align (GtkFrame* frame /*none*/, float xalign);
// void gtk_frame_set_label_align (::GtkFrame* frame /*none*/, gfloat xalign);
GI_INLINE_DECL void set_label_align (gfloat xalign) noexcept;

// void gtk_frame_set_label_widget (GtkFrame* frame /*none*/, GtkWidget* label_widget /*none,nullable*/);
// void gtk_frame_set_label_widget (::GtkFrame* frame /*none*/, ::GtkWidget* label_widget /*none,nullable*/);
GI_INLINE_DECL void set_label_widget (Gtk::Widget label_widget) noexcept;
GI_INLINE_DECL void set_label_widget () noexcept;

gi::property_proxy<Gtk::Widget, base::FrameBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::FrameBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::FrameBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::FrameBase> (*this, "child"); }

gi::property_proxy<gi::cstring, base::FrameBase> property_label()
{ return gi::property_proxy<gi::cstring, base::FrameBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::FrameBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::FrameBase> (*this, "label"); }

gi::property_proxy<Gtk::Widget, base::FrameBase> property_label_widget()
{ return gi::property_proxy<Gtk::Widget, base::FrameBase> (*this, "label-widget"); }
const gi::property_proxy<Gtk::Widget, base::FrameBase> property_label_widget() const
{ return gi::property_proxy<Gtk::Widget, base::FrameBase> (*this, "label-widget"); }

gi::property_proxy<gfloat, base::FrameBase> property_label_xalign()
{ return gi::property_proxy<gfloat, base::FrameBase> (*this, "label-xalign"); }
const gi::property_proxy<gfloat, base::FrameBase> property_label_xalign() const
{ return gi::property_proxy<gfloat, base::FrameBase> (*this, "label-xalign"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/frame_extra_def.hpp>)
#include <gtk/frame_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/frame_extra.hpp>)
#include <gtk/frame_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Frame : public GI_GTK_FRAME_BASE
{ typedef GI_GTK_FRAME_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFrame>
{ typedef Gtk::Frame type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FrameClassDef
{
typedef FrameClassDef self;
public:
typedef Gtk::Frame instance_type;
typedef ::GtkFrameClass class_type;

using GI_MEMBER_CHECK_CONFLICT(compute_child_allocation) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FrameClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Frame::compute_child_allocation (GtkFrame* frame /*none*/, GtkAllocation* allocation /*none*/);
// void Frame::compute_child_allocation (::GtkFrame* frame /*none*/, ::GtkAllocation* allocation /*none*/);
virtual void compute_child_allocation_ (Gtk::Allocation_Ref allocation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FrameClass: public detail::ClassTemplate<Gtk::impl::internal::FrameClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::FrameClassDef;
typedef FrameClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FrameClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Frame::compute_child_allocation (GtkFrame* frame /*none*/, GtkAllocation* allocation /*none*/);
// void Frame::compute_child_allocation (::GtkFrame* frame /*none*/, ::GtkAllocation* allocation /*none*/);
GI_INLINE_DECL void compute_child_allocation_ (Gtk::Allocation_Ref allocation) noexcept override;


};


struct FrameClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FrameClass, compute_child_allocation)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, compute_child_allocation)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FrameImpl = detail::ObjectImpl<Frame, internal::FrameClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
