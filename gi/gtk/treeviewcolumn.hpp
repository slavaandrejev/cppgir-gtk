// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEWCOLUMN_HPP_
#define _GI_GTK_TREEVIEWCOLUMN_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class CellArea;
class CellLayout;
class CellRenderer;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class Widget;

class TreeViewColumn;

namespace base {


#define GI_GTK_TREEVIEWCOLUMN_BASE base::TreeViewColumnBase
class TreeViewColumnBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkTreeViewColumn BaseObjectType;

TreeViewColumnBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_view_column_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// GtkTreeViewColumn* /*none*/ gtk_tree_view_column_new ();
// ::GtkTreeViewColumn* /*none*/ gtk_tree_view_column_new ();
static GI_INLINE_DECL Gtk::TreeViewColumn new_ () noexcept;

// GtkTreeViewColumn* /*none*/ gtk_tree_view_column_new_with_area (GtkCellArea* area /*none*/);
// ::GtkTreeViewColumn* /*none*/ gtk_tree_view_column_new_with_area (::GtkCellArea* area /*none*/);
static GI_INLINE_DECL Gtk::TreeViewColumn new_with_area (Gtk::CellArea area) noexcept;

// GtkTreeViewColumn* /*none*/ gtk_tree_view_column_new_with_attributes (const char* title /*none*/, GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// ::GtkTreeViewColumn* /*none*/ gtk_tree_view_column_new_with_attributes (const char* title /*none*/, ::GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_tree_view_column_add_attribute (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell_renderer /*none*/, const char* attribute /*none*/, int column);
// void gtk_tree_view_column_add_attribute (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell_renderer /*none*/, const char* attribute /*none*/, gint column);
GI_INLINE_DECL void add_attribute (Gtk::CellRenderer cell_renderer, const gi::cstring_v attribute, gint column) noexcept;

// gboolean gtk_tree_view_column_cell_get_position (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell_renderer /*none*/, int* x_offset, int* width);
// gboolean gtk_tree_view_column_cell_get_position (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell_renderer /*none*/, gint* x_offset, gint* width);
GI_INLINE_DECL bool cell_get_position (Gtk::CellRenderer cell_renderer, gint * x_offset, gint * width) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> cell_get_position (Gtk::CellRenderer cell_renderer) noexcept;

// void gtk_tree_view_column_cell_get_size (GtkTreeViewColumn* tree_column /*none*/, int* x_offset, int* y_offset, int* width, int* height);
// void gtk_tree_view_column_cell_get_size (::GtkTreeViewColumn* tree_column /*none*/, gint* x_offset, gint* y_offset, gint* width, gint* height);
GI_INLINE_DECL void cell_get_size (gint * x_offset, gint * y_offset, gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> cell_get_size () noexcept;

// gboolean gtk_tree_view_column_cell_is_visible (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_cell_is_visible (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool cell_is_visible () noexcept;

// void gtk_tree_view_column_cell_set_cell_data (GtkTreeViewColumn* tree_column /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
// void gtk_tree_view_column_cell_set_cell_data (::GtkTreeViewColumn* tree_column /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, gboolean is_expander, gboolean is_expanded);
GI_INLINE_DECL void cell_set_cell_data (Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, gboolean is_expander, gboolean is_expanded) noexcept;

// void gtk_tree_view_column_clear (GtkTreeViewColumn* tree_column /*none*/);
// void gtk_tree_view_column_clear (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL void clear () noexcept;

// void gtk_tree_view_column_clear_attributes (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell_renderer /*none*/);
// void gtk_tree_view_column_clear_attributes (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell_renderer /*none*/);
GI_INLINE_DECL void clear_attributes (Gtk::CellRenderer cell_renderer) noexcept;

// void gtk_tree_view_column_clicked (GtkTreeViewColumn* tree_column /*none*/);
// void gtk_tree_view_column_clicked (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL void clicked () noexcept;

// void gtk_tree_view_column_focus_cell (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell /*none*/);
// void gtk_tree_view_column_focus_cell (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL void focus_cell (Gtk::CellRenderer cell) noexcept;

// float gtk_tree_view_column_get_alignment (GtkTreeViewColumn* tree_column /*none*/);
// gfloat gtk_tree_view_column_get_alignment (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gfloat get_alignment () noexcept;

// GtkWidget* /*none*/ gtk_tree_view_column_get_button (GtkTreeViewColumn* tree_column /*none*/);
// ::GtkWidget* /*none*/ gtk_tree_view_column_get_button (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL Gtk::Widget get_button () noexcept;

// gboolean gtk_tree_view_column_get_clickable (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_get_clickable (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool get_clickable () noexcept;

// gboolean gtk_tree_view_column_get_expand (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_get_expand (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool get_expand () noexcept;

// int gtk_tree_view_column_get_fixed_width (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_fixed_width (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_fixed_width () noexcept;

// int gtk_tree_view_column_get_max_width (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_max_width (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_max_width () noexcept;

// int gtk_tree_view_column_get_min_width (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_min_width (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_min_width () noexcept;

// gboolean gtk_tree_view_column_get_reorderable (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_get_reorderable (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool get_reorderable () noexcept;

// gboolean gtk_tree_view_column_get_resizable (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_get_resizable (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool get_resizable () noexcept;

// GtkTreeViewColumnSizing gtk_tree_view_column_get_sizing (GtkTreeViewColumn* tree_column /*none*/);
// ::GtkTreeViewColumnSizing gtk_tree_view_column_get_sizing (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL Gtk::TreeViewColumnSizing get_sizing () noexcept;

// int gtk_tree_view_column_get_sort_column_id (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_sort_column_id (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_sort_column_id () noexcept;

// gboolean gtk_tree_view_column_get_sort_indicator (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_get_sort_indicator (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool get_sort_indicator () noexcept;

// GtkSortType gtk_tree_view_column_get_sort_order (GtkTreeViewColumn* tree_column /*none*/);
// ::GtkSortType gtk_tree_view_column_get_sort_order (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL Gtk::SortType get_sort_order () noexcept;

// int gtk_tree_view_column_get_spacing (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_spacing (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_spacing () noexcept;

// const char* /*none*/ gtk_tree_view_column_get_title (GtkTreeViewColumn* tree_column /*none*/);
// const char* /*none*/ gtk_tree_view_column_get_title (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// GtkWidget* /*none,nullable*/ gtk_tree_view_column_get_tree_view (GtkTreeViewColumn* tree_column /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_tree_view_column_get_tree_view (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL Gtk::Widget get_tree_view () noexcept;

// gboolean gtk_tree_view_column_get_visible (GtkTreeViewColumn* tree_column /*none*/);
// gboolean gtk_tree_view_column_get_visible (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// GtkWidget* /*none,nullable*/ gtk_tree_view_column_get_widget (GtkTreeViewColumn* tree_column /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_tree_view_column_get_widget (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// int gtk_tree_view_column_get_width (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_width (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// int gtk_tree_view_column_get_x_offset (GtkTreeViewColumn* tree_column /*none*/);
// gint gtk_tree_view_column_get_x_offset (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL gint get_x_offset () noexcept;

// void gtk_tree_view_column_pack_end (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void gtk_tree_view_column_pack_end (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
GI_INLINE_DECL void pack_end (Gtk::CellRenderer cell, gboolean expand) noexcept;

// void gtk_tree_view_column_pack_start (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell /*none*/, gboolean expand);
// void gtk_tree_view_column_pack_start (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell /*none*/, gboolean expand);
GI_INLINE_DECL void pack_start (Gtk::CellRenderer cell, gboolean expand) noexcept;

// void gtk_tree_view_column_queue_resize (GtkTreeViewColumn* tree_column /*none*/);
// void gtk_tree_view_column_queue_resize (::GtkTreeViewColumn* tree_column /*none*/);
GI_INLINE_DECL void queue_resize () noexcept;

// void gtk_tree_view_column_set_alignment (GtkTreeViewColumn* tree_column /*none*/, float xalign);
// void gtk_tree_view_column_set_alignment (::GtkTreeViewColumn* tree_column /*none*/, gfloat xalign);
GI_INLINE_DECL void set_alignment (gfloat xalign) noexcept;

// void gtk_tree_view_column_set_attributes (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell_renderer /*none*/,  ..._ /*none*/);
// void gtk_tree_view_column_set_attributes (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell_renderer /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_tree_view_column_set_cell_data_func (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell_renderer /*none*/, GtkTreeCellDataFunc func /*none,nullable*/, gpointer func_data, GDestroyNotify destroy /*none*/);
// void gtk_tree_view_column_set_cell_data_func (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell_renderer /*none*/, Gtk::TreeCellDataFunc::cfunction_type func /*none,nullable*/, void* func_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_cell_data_func (Gtk::CellRenderer cell_renderer, Gtk::TreeCellDataFunc func) noexcept;

// void gtk_tree_view_column_set_clickable (GtkTreeViewColumn* tree_column /*none*/, gboolean clickable);
// void gtk_tree_view_column_set_clickable (::GtkTreeViewColumn* tree_column /*none*/, gboolean clickable);
GI_INLINE_DECL void set_clickable (gboolean clickable) noexcept;

// void gtk_tree_view_column_set_expand (GtkTreeViewColumn* tree_column /*none*/, gboolean expand);
// void gtk_tree_view_column_set_expand (::GtkTreeViewColumn* tree_column /*none*/, gboolean expand);
GI_INLINE_DECL void set_expand (gboolean expand) noexcept;

// void gtk_tree_view_column_set_fixed_width (GtkTreeViewColumn* tree_column /*none*/, int fixed_width);
// void gtk_tree_view_column_set_fixed_width (::GtkTreeViewColumn* tree_column /*none*/, gint fixed_width);
GI_INLINE_DECL void set_fixed_width (gint fixed_width) noexcept;

// void gtk_tree_view_column_set_max_width (GtkTreeViewColumn* tree_column /*none*/, int max_width);
// void gtk_tree_view_column_set_max_width (::GtkTreeViewColumn* tree_column /*none*/, gint max_width);
GI_INLINE_DECL void set_max_width (gint max_width) noexcept;

// void gtk_tree_view_column_set_min_width (GtkTreeViewColumn* tree_column /*none*/, int min_width);
// void gtk_tree_view_column_set_min_width (::GtkTreeViewColumn* tree_column /*none*/, gint min_width);
GI_INLINE_DECL void set_min_width (gint min_width) noexcept;

// void gtk_tree_view_column_set_reorderable (GtkTreeViewColumn* tree_column /*none*/, gboolean reorderable);
// void gtk_tree_view_column_set_reorderable (::GtkTreeViewColumn* tree_column /*none*/, gboolean reorderable);
GI_INLINE_DECL void set_reorderable (gboolean reorderable) noexcept;

// void gtk_tree_view_column_set_resizable (GtkTreeViewColumn* tree_column /*none*/, gboolean resizable);
// void gtk_tree_view_column_set_resizable (::GtkTreeViewColumn* tree_column /*none*/, gboolean resizable);
GI_INLINE_DECL void set_resizable (gboolean resizable) noexcept;

// void gtk_tree_view_column_set_sizing (GtkTreeViewColumn* tree_column /*none*/, GtkTreeViewColumnSizing type);
// void gtk_tree_view_column_set_sizing (::GtkTreeViewColumn* tree_column /*none*/, ::GtkTreeViewColumnSizing type);
GI_INLINE_DECL void set_sizing (Gtk::TreeViewColumnSizing type) noexcept;

// void gtk_tree_view_column_set_sort_column_id (GtkTreeViewColumn* tree_column /*none*/, int sort_column_id);
// void gtk_tree_view_column_set_sort_column_id (::GtkTreeViewColumn* tree_column /*none*/, gint sort_column_id);
GI_INLINE_DECL void set_sort_column_id (gint sort_column_id) noexcept;

// void gtk_tree_view_column_set_sort_indicator (GtkTreeViewColumn* tree_column /*none*/, gboolean setting);
// void gtk_tree_view_column_set_sort_indicator (::GtkTreeViewColumn* tree_column /*none*/, gboolean setting);
GI_INLINE_DECL void set_sort_indicator (gboolean setting) noexcept;

// void gtk_tree_view_column_set_sort_order (GtkTreeViewColumn* tree_column /*none*/, GtkSortType order);
// void gtk_tree_view_column_set_sort_order (::GtkTreeViewColumn* tree_column /*none*/, ::GtkSortType order);
GI_INLINE_DECL void set_sort_order (Gtk::SortType order) noexcept;

// void gtk_tree_view_column_set_spacing (GtkTreeViewColumn* tree_column /*none*/, int spacing);
// void gtk_tree_view_column_set_spacing (::GtkTreeViewColumn* tree_column /*none*/, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

// void gtk_tree_view_column_set_title (GtkTreeViewColumn* tree_column /*none*/, const char* title /*none*/);
// void gtk_tree_view_column_set_title (::GtkTreeViewColumn* tree_column /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void gtk_tree_view_column_set_visible (GtkTreeViewColumn* tree_column /*none*/, gboolean visible);
// void gtk_tree_view_column_set_visible (::GtkTreeViewColumn* tree_column /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

// void gtk_tree_view_column_set_widget (GtkTreeViewColumn* tree_column /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_tree_view_column_set_widget (::GtkTreeViewColumn* tree_column /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_widget () noexcept;

gi::property_proxy<gfloat, base::TreeViewColumnBase> property_alignment()
{ return gi::property_proxy<gfloat, base::TreeViewColumnBase> (*this, "alignment"); }
const gi::property_proxy<gfloat, base::TreeViewColumnBase> property_alignment() const
{ return gi::property_proxy<gfloat, base::TreeViewColumnBase> (*this, "alignment"); }

gi::property_proxy<Gtk::CellArea, base::TreeViewColumnBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::TreeViewColumnBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::TreeViewColumnBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::TreeViewColumnBase> (*this, "cell-area"); }

gi::property_proxy<bool, base::TreeViewColumnBase> property_clickable()
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "clickable"); }
const gi::property_proxy<bool, base::TreeViewColumnBase> property_clickable() const
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "clickable"); }

gi::property_proxy<bool, base::TreeViewColumnBase> property_expand()
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "expand"); }
const gi::property_proxy<bool, base::TreeViewColumnBase> property_expand() const
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "expand"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_fixed_width()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "fixed-width"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_fixed_width() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "fixed-width"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_max_width()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "max-width"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_max_width() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "max-width"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_min_width()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "min-width"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_min_width() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "min-width"); }

gi::property_proxy<bool, base::TreeViewColumnBase> property_reorderable()
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::TreeViewColumnBase> property_reorderable() const
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "reorderable"); }

gi::property_proxy<bool, base::TreeViewColumnBase> property_resizable()
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "resizable"); }
const gi::property_proxy<bool, base::TreeViewColumnBase> property_resizable() const
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "resizable"); }

gi::property_proxy<Gtk::TreeViewColumnSizing, base::TreeViewColumnBase> property_sizing()
{ return gi::property_proxy<Gtk::TreeViewColumnSizing, base::TreeViewColumnBase> (*this, "sizing"); }
const gi::property_proxy<Gtk::TreeViewColumnSizing, base::TreeViewColumnBase> property_sizing() const
{ return gi::property_proxy<Gtk::TreeViewColumnSizing, base::TreeViewColumnBase> (*this, "sizing"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_sort_column_id()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "sort-column-id"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_sort_column_id() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "sort-column-id"); }

gi::property_proxy<bool, base::TreeViewColumnBase> property_sort_indicator()
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "sort-indicator"); }
const gi::property_proxy<bool, base::TreeViewColumnBase> property_sort_indicator() const
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "sort-indicator"); }

gi::property_proxy<Gtk::SortType, base::TreeViewColumnBase> property_sort_order()
{ return gi::property_proxy<Gtk::SortType, base::TreeViewColumnBase> (*this, "sort-order"); }
const gi::property_proxy<Gtk::SortType, base::TreeViewColumnBase> property_sort_order() const
{ return gi::property_proxy<Gtk::SortType, base::TreeViewColumnBase> (*this, "sort-order"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_spacing()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_spacing() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "spacing"); }

gi::property_proxy<gi::cstring, base::TreeViewColumnBase> property_title()
{ return gi::property_proxy<gi::cstring, base::TreeViewColumnBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::TreeViewColumnBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::TreeViewColumnBase> (*this, "title"); }

gi::property_proxy<bool, base::TreeViewColumnBase> property_visible()
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "visible"); }
const gi::property_proxy<bool, base::TreeViewColumnBase> property_visible() const
{ return gi::property_proxy<bool, base::TreeViewColumnBase> (*this, "visible"); }

gi::property_proxy<Gtk::Widget, base::TreeViewColumnBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::TreeViewColumnBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::TreeViewColumnBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::TreeViewColumnBase> (*this, "widget"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_width()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "width"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_width() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "width"); }

gi::property_proxy<gint, base::TreeViewColumnBase> property_x_offset()
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "x-offset"); }
const gi::property_proxy<gint, base::TreeViewColumnBase> property_x_offset() const
{ return gi::property_proxy<gint, base::TreeViewColumnBase> (*this, "x-offset"); }

// (signal) void clicked ();
// (signal) void clicked ();
gi::signal_proxy<void(Gtk::TreeViewColumn)> signal_clicked()
{ return gi::signal_proxy<void(Gtk::TreeViewColumn)> (*this, "clicked"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeviewcolumn_extra_def.hpp>)
#include <gtk/treeviewcolumn_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeviewcolumn_extra.hpp>)
#include <gtk/treeviewcolumn_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeViewColumn : public GI_GTK_TREEVIEWCOLUMN_BASE
{ typedef GI_GTK_TREEVIEWCOLUMN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeViewColumn>
{ typedef Gtk::TreeViewColumn type; }; 

} // namespace repository

} // namespace gi

#endif
