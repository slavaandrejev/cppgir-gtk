// AUTO-GENERATED

#ifndef _GI_GTK_CELLAREABOX_HPP_
#define _GI_GTK_CELLAREABOX_HPP_

#include "cellarea.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellRenderer;
class Orientable;

class CellAreaBox;

namespace base {


#define GI_GTK_CELLAREABOX_BASE base::CellAreaBoxBase
class CellAreaBoxBase : public Gtk::CellArea
{
typedef Gtk::CellArea super_type;
public:
typedef ::GtkCellAreaBox BaseObjectType;

CellAreaBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_area_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkCellArea* /*none*/ gtk_cell_area_box_new ();
// ::GtkCellAreaBox* /*none*/ gtk_cell_area_box_new ();
static GI_INLINE_DECL Gtk::CellAreaBox new_ () noexcept;

// int gtk_cell_area_box_get_spacing (GtkCellAreaBox* box /*none*/);
// gint gtk_cell_area_box_get_spacing (::GtkCellAreaBox* box /*none*/);
GI_INLINE_DECL gint get_spacing () noexcept;

// void gtk_cell_area_box_pack_end (GtkCellAreaBox* box /*none*/, GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
// void gtk_cell_area_box_pack_end (::GtkCellAreaBox* box /*none*/, ::GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
GI_INLINE_DECL void pack_end (Gtk::CellRenderer renderer, gboolean expand, gboolean align, gboolean fixed) noexcept;

// void gtk_cell_area_box_pack_start (GtkCellAreaBox* box /*none*/, GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
// void gtk_cell_area_box_pack_start (::GtkCellAreaBox* box /*none*/, ::GtkCellRenderer* renderer /*none*/, gboolean expand, gboolean align, gboolean fixed);
GI_INLINE_DECL void pack_start (Gtk::CellRenderer renderer, gboolean expand, gboolean align, gboolean fixed) noexcept;

// void gtk_cell_area_box_set_spacing (GtkCellAreaBox* box /*none*/, int spacing);
// void gtk_cell_area_box_set_spacing (::GtkCellAreaBox* box /*none*/, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

gi::property_proxy<gint, base::CellAreaBoxBase> property_spacing()
{ return gi::property_proxy<gint, base::CellAreaBoxBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::CellAreaBoxBase> property_spacing() const
{ return gi::property_proxy<gint, base::CellAreaBoxBase> (*this, "spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellareabox_extra_def.hpp>)
#include <gtk/cellareabox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellareabox_extra.hpp>)
#include <gtk/cellareabox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellAreaBox : public GI_GTK_CELLAREABOX_BASE
{ typedef GI_GTK_CELLAREABOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellAreaBox>
{ typedef Gtk::CellAreaBox type; }; 

} // namespace repository

} // namespace gi

#endif
