// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWCELL_HPP_
#define _GI_GTK_COLUMNVIEWCELL_HPP_

#include "listitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ColumnViewCell;

namespace base {


#define GI_GTK_COLUMNVIEWCELL_BASE base::ColumnViewCellBase
class ColumnViewCellBase : public Gtk::ListItem
{
typedef Gtk::ListItem super_type;
public:
typedef ::GtkColumnViewCell BaseObjectType;

ColumnViewCellBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_column_view_cell_get_type(); } 

// GtkWidget* /*none,nullable*/ gtk_column_view_cell_get_child (GtkColumnViewCell* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_column_view_cell_get_child (::GtkColumnViewCell* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_column_view_cell_get_focusable (GtkColumnViewCell* self /*none*/);
// gboolean gtk_column_view_cell_get_focusable (::GtkColumnViewCell* self /*none*/);
GI_INLINE_DECL bool get_focusable () noexcept;

// gpointer /*none,nullable*/ gtk_column_view_cell_get_item (GtkColumnViewCell* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_column_view_cell_get_item (::GtkColumnViewCell* self /*none*/);
GI_INLINE_DECL GObject::Object get_item () noexcept;

// guint gtk_column_view_cell_get_position (GtkColumnViewCell* self /*none*/);
// guint gtk_column_view_cell_get_position (::GtkColumnViewCell* self /*none*/);
GI_INLINE_DECL guint get_position () noexcept;

// gboolean gtk_column_view_cell_get_selected (GtkColumnViewCell* self /*none*/);
// gboolean gtk_column_view_cell_get_selected (::GtkColumnViewCell* self /*none*/);
GI_INLINE_DECL bool get_selected () noexcept;

// void gtk_column_view_cell_set_child (GtkColumnViewCell* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_column_view_cell_set_child (::GtkColumnViewCell* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_column_view_cell_set_focusable (GtkColumnViewCell* self /*none*/, gboolean focusable);
// void gtk_column_view_cell_set_focusable (::GtkColumnViewCell* self /*none*/, gboolean focusable);
GI_INLINE_DECL void set_focusable (gboolean focusable) noexcept;

gi::property_proxy<Gtk::Widget, base::ColumnViewCellBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ColumnViewCellBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ColumnViewCellBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ColumnViewCellBase> (*this, "child"); }

gi::property_proxy<bool, base::ColumnViewCellBase> property_focusable()
{ return gi::property_proxy<bool, base::ColumnViewCellBase> (*this, "focusable"); }
const gi::property_proxy<bool, base::ColumnViewCellBase> property_focusable() const
{ return gi::property_proxy<bool, base::ColumnViewCellBase> (*this, "focusable"); }

gi::property_proxy<GObject::Object, base::ColumnViewCellBase> property_item()
{ return gi::property_proxy<GObject::Object, base::ColumnViewCellBase> (*this, "item"); }
const gi::property_proxy<GObject::Object, base::ColumnViewCellBase> property_item() const
{ return gi::property_proxy<GObject::Object, base::ColumnViewCellBase> (*this, "item"); }

gi::property_proxy<guint, base::ColumnViewCellBase> property_position()
{ return gi::property_proxy<guint, base::ColumnViewCellBase> (*this, "position"); }
const gi::property_proxy<guint, base::ColumnViewCellBase> property_position() const
{ return gi::property_proxy<guint, base::ColumnViewCellBase> (*this, "position"); }

gi::property_proxy<bool, base::ColumnViewCellBase> property_selected()
{ return gi::property_proxy<bool, base::ColumnViewCellBase> (*this, "selected"); }
const gi::property_proxy<bool, base::ColumnViewCellBase> property_selected() const
{ return gi::property_proxy<bool, base::ColumnViewCellBase> (*this, "selected"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewcell_extra_def.hpp>)
#include <gtk/columnviewcell_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewcell_extra.hpp>)
#include <gtk/columnviewcell_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColumnViewCell : public GI_GTK_COLUMNVIEWCELL_BASE
{ typedef GI_GTK_COLUMNVIEWCELL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColumnViewCell>
{ typedef Gtk::ColumnViewCell type; }; 

} // namespace repository

} // namespace gi

#endif
