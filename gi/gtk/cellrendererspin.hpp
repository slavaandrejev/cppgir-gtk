// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERSPIN_HPP_
#define _GI_GTK_CELLRENDERERSPIN_HPP_

#include "cellrenderertext.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class CellRendererSpin;

namespace base {


#define GI_GTK_CELLRENDERERSPIN_BASE base::CellRendererSpinBase
class CellRendererSpinBase : public Gtk::CellRendererText
{
typedef Gtk::CellRendererText super_type;
public:
typedef ::GtkCellRendererSpin BaseObjectType;

CellRendererSpinBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_spin_get_type(); } 

// GtkCellRenderer* /*none*/ gtk_cell_renderer_spin_new ();
// ::GtkCellRendererSpin* /*none*/ gtk_cell_renderer_spin_new ();
static GI_INLINE_DECL Gtk::CellRendererSpin new_ () noexcept;

gi::property_proxy<Gtk::Adjustment, base::CellRendererSpinBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::CellRendererSpinBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::CellRendererSpinBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::CellRendererSpinBase> (*this, "adjustment"); }

gi::property_proxy<gdouble, base::CellRendererSpinBase> property_climb_rate()
{ return gi::property_proxy<gdouble, base::CellRendererSpinBase> (*this, "climb-rate"); }
const gi::property_proxy<gdouble, base::CellRendererSpinBase> property_climb_rate() const
{ return gi::property_proxy<gdouble, base::CellRendererSpinBase> (*this, "climb-rate"); }

gi::property_proxy<guint, base::CellRendererSpinBase> property_digits()
{ return gi::property_proxy<guint, base::CellRendererSpinBase> (*this, "digits"); }
const gi::property_proxy<guint, base::CellRendererSpinBase> property_digits() const
{ return gi::property_proxy<guint, base::CellRendererSpinBase> (*this, "digits"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspin_extra_def.hpp>)
#include <gtk/cellrendererspin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspin_extra.hpp>)
#include <gtk/cellrendererspin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererSpin : public GI_GTK_CELLRENDERERSPIN_BASE
{ typedef GI_GTK_CELLRENDERERSPIN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererSpin>
{ typedef Gtk::CellRendererSpin type; }; 

} // namespace repository

} // namespace gi

#endif
