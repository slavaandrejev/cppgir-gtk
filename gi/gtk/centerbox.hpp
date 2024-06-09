// AUTO-GENERATED

#ifndef _GI_GTK_CENTERBOX_HPP_
#define _GI_GTK_CENTERBOX_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Widget;

class CenterBox;

namespace base {


#define GI_GTK_CENTERBOX_BASE base::CenterBoxBase
class CenterBoxBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkCenterBox BaseObjectType;

CenterBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_center_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_center_box_new ();
// ::GtkCenterBox* /*none*/ gtk_center_box_new ();
static GI_INLINE_DECL Gtk::CenterBox new_ () noexcept;

// GtkBaselinePosition gtk_center_box_get_baseline_position (GtkCenterBox* self /*none*/);
// ::GtkBaselinePosition gtk_center_box_get_baseline_position (::GtkCenterBox* self /*none*/);
GI_INLINE_DECL Gtk::BaselinePosition get_baseline_position () noexcept;

// GtkWidget* /*none,nullable*/ gtk_center_box_get_center_widget (GtkCenterBox* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_box_get_center_widget (::GtkCenterBox* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_center_widget () noexcept;

// GtkWidget* /*none,nullable*/ gtk_center_box_get_end_widget (GtkCenterBox* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_box_get_end_widget (::GtkCenterBox* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_end_widget () noexcept;

// gboolean gtk_center_box_get_shrink_center_last (GtkCenterBox* self /*none*/);
// gboolean gtk_center_box_get_shrink_center_last (::GtkCenterBox* self /*none*/);
GI_INLINE_DECL bool get_shrink_center_last () noexcept;

// GtkWidget* /*none,nullable*/ gtk_center_box_get_start_widget (GtkCenterBox* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_box_get_start_widget (::GtkCenterBox* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_start_widget () noexcept;

// void gtk_center_box_set_baseline_position (GtkCenterBox* self /*none*/, GtkBaselinePosition position);
// void gtk_center_box_set_baseline_position (::GtkCenterBox* self /*none*/, ::GtkBaselinePosition position);
GI_INLINE_DECL void set_baseline_position (Gtk::BaselinePosition position) noexcept;

// void gtk_center_box_set_center_widget (GtkCenterBox* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_center_box_set_center_widget (::GtkCenterBox* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_center_widget (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_center_widget () noexcept;

// void gtk_center_box_set_end_widget (GtkCenterBox* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_center_box_set_end_widget (::GtkCenterBox* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_end_widget (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_end_widget () noexcept;

// void gtk_center_box_set_shrink_center_last (GtkCenterBox* self /*none*/, gboolean shrink_center_last);
// void gtk_center_box_set_shrink_center_last (::GtkCenterBox* self /*none*/, gboolean shrink_center_last);
GI_INLINE_DECL void set_shrink_center_last (gboolean shrink_center_last) noexcept;

// void gtk_center_box_set_start_widget (GtkCenterBox* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_center_box_set_start_widget (::GtkCenterBox* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_start_widget (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_start_widget () noexcept;

gi::property_proxy<Gtk::BaselinePosition, base::CenterBoxBase> property_baseline_position()
{ return gi::property_proxy<Gtk::BaselinePosition, base::CenterBoxBase> (*this, "baseline-position"); }
const gi::property_proxy<Gtk::BaselinePosition, base::CenterBoxBase> property_baseline_position() const
{ return gi::property_proxy<Gtk::BaselinePosition, base::CenterBoxBase> (*this, "baseline-position"); }

gi::property_proxy<Gtk::Widget, base::CenterBoxBase> property_center_widget()
{ return gi::property_proxy<Gtk::Widget, base::CenterBoxBase> (*this, "center-widget"); }
const gi::property_proxy<Gtk::Widget, base::CenterBoxBase> property_center_widget() const
{ return gi::property_proxy<Gtk::Widget, base::CenterBoxBase> (*this, "center-widget"); }

gi::property_proxy<Gtk::Widget, base::CenterBoxBase> property_end_widget()
{ return gi::property_proxy<Gtk::Widget, base::CenterBoxBase> (*this, "end-widget"); }
const gi::property_proxy<Gtk::Widget, base::CenterBoxBase> property_end_widget() const
{ return gi::property_proxy<Gtk::Widget, base::CenterBoxBase> (*this, "end-widget"); }

gi::property_proxy<bool, base::CenterBoxBase> property_shrink_center_last()
{ return gi::property_proxy<bool, base::CenterBoxBase> (*this, "shrink-center-last"); }
const gi::property_proxy<bool, base::CenterBoxBase> property_shrink_center_last() const
{ return gi::property_proxy<bool, base::CenterBoxBase> (*this, "shrink-center-last"); }

gi::property_proxy<Gtk::Widget, base::CenterBoxBase> property_start_widget()
{ return gi::property_proxy<Gtk::Widget, base::CenterBoxBase> (*this, "start-widget"); }
const gi::property_proxy<Gtk::Widget, base::CenterBoxBase> property_start_widget() const
{ return gi::property_proxy<Gtk::Widget, base::CenterBoxBase> (*this, "start-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/centerbox_extra_def.hpp>)
#include <gtk/centerbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/centerbox_extra.hpp>)
#include <gtk/centerbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CenterBox : public GI_GTK_CENTERBOX_BASE
{ typedef GI_GTK_CENTERBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCenterBox>
{ typedef Gtk::CenterBox type; }; 

} // namespace repository

} // namespace gi

#endif
