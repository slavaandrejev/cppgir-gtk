// AUTO-GENERATED

#ifndef _GI_GTK_ICONVIEW_HPP_
#define _GI_GTK_ICONVIEW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellLayout;
class CellRenderer;
class Scrollable;
class Tooltip;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreePath;
class TreePath_Ref;

class IconView;

namespace base {


#define GI_GTK_ICONVIEW_BASE base::IconViewBase
class IconViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkIconView BaseObjectType;

IconViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_view_get_type(); } 

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* /*none*/ gtk_icon_view_new ();
// ::GtkIconView* /*none*/ gtk_icon_view_new ();
static GI_INLINE_DECL Gtk::IconView new_ () noexcept;

// GtkWidget* /*none*/ gtk_icon_view_new_with_area (GtkCellArea* area /*none*/);
// ::GtkIconView* /*none*/ gtk_icon_view_new_with_area (::GtkCellArea* area /*none*/);
static GI_INLINE_DECL Gtk::IconView new_with_area (Gtk::CellArea area) noexcept;

// GtkWidget* /*none*/ gtk_icon_view_new_with_model (GtkTreeModel* model /*none*/);
// ::GtkIconView* /*none*/ gtk_icon_view_new_with_model (::GtkTreeModel* model /*none*/);
static GI_INLINE_DECL Gtk::IconView new_with_model (Gtk::TreeModel model) noexcept;

// GdkPaintable* /*full,nullable*/ gtk_icon_view_create_drag_icon (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// ::GdkPaintable* /*full,nullable*/ gtk_icon_view_create_drag_icon (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL Gdk::Paintable create_drag_icon (Gtk::TreePath_Ref path) noexcept;

// void gtk_icon_view_enable_model_drag_dest (GtkIconView* icon_view /*none*/, GdkContentFormats* formats /*none*/, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_dest (::GtkIconView* icon_view /*none*/, ::GdkContentFormats* formats /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void enable_model_drag_dest (Gdk::ContentFormats_Ref formats, Gdk::DragAction actions) noexcept;

// void gtk_icon_view_enable_model_drag_source (GtkIconView* icon_view /*none*/, GdkModifierType start_button_mask, GdkContentFormats* formats /*none*/, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_source (::GtkIconView* icon_view /*none*/, ::GdkModifierType start_button_mask, ::GdkContentFormats* formats /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void enable_model_drag_source (Gdk::ModifierType start_button_mask, Gdk::ContentFormats_Ref formats, Gdk::DragAction actions) noexcept;

// gboolean gtk_icon_view_get_activate_on_single_click (GtkIconView* icon_view /*none*/);
// gboolean gtk_icon_view_get_activate_on_single_click (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// gboolean gtk_icon_view_get_cell_rect (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, GtkCellRenderer* cell /*none,nullable*/, GdkRectangle* rect /*none,out,ca*/);
// gboolean gtk_icon_view_get_cell_rect (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkCellRenderer* cell /*none,nullable*/, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL bool get_cell_rect (Gtk::TreePath_Ref path, Gtk::CellRenderer cell, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL bool get_cell_rect (Gtk::TreePath_Ref path, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_cell_rect (Gtk::TreePath_Ref path, Gtk::CellRenderer cell) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_cell_rect (Gtk::TreePath_Ref path) noexcept;

// int gtk_icon_view_get_column_spacing (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_column_spacing (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_column_spacing () noexcept;

// int gtk_icon_view_get_columns (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_columns (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_columns () noexcept;

// gboolean gtk_icon_view_get_cursor (GtkIconView* icon_view /*none*/, GtkTreePath** path /*full,out,opt*/, GtkCellRenderer** cell /*none,out,opt*/);
// gboolean gtk_icon_view_get_cursor (::GtkIconView* icon_view /*none*/, ::GtkTreePath** path /*full,out,opt*/, ::GtkCellRenderer** cell /*none,out,opt*/);
GI_INLINE_DECL bool get_cursor (Gtk::TreePath * path, Gtk::CellRenderer * cell) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> get_cursor () noexcept;

// gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView* icon_view /*none*/, int drag_x, int drag_y, GtkTreePath** path /*full,out,opt*/, GtkIconViewDropPosition* pos);
// gboolean gtk_icon_view_get_dest_item_at_pos (::GtkIconView* icon_view /*none*/, gint drag_x, gint drag_y, ::GtkTreePath** path /*full,out,opt*/, ::GtkIconViewDropPosition* pos);
GI_INLINE_DECL bool get_dest_item_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path, Gtk::IconViewDropPosition * pos) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::IconViewDropPosition> get_dest_item_at_pos (gint drag_x, gint drag_y) noexcept;

// void gtk_icon_view_get_drag_dest_item (GtkIconView* icon_view /*none*/, GtkTreePath** path /*full,out,opt,nullable*/, GtkIconViewDropPosition* pos);
// void gtk_icon_view_get_drag_dest_item (::GtkIconView* icon_view /*none*/, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkIconViewDropPosition* pos);
GI_INLINE_DECL void get_drag_dest_item (Gtk::TreePath * path, Gtk::IconViewDropPosition * pos) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TreePath, Gtk::IconViewDropPosition> get_drag_dest_item () noexcept;

// gboolean gtk_icon_view_get_item_at_pos (GtkIconView* icon_view /*none*/, int x, int y, GtkTreePath** path /*full,out,opt*/, GtkCellRenderer** cell /*none,out,opt*/);
// gboolean gtk_icon_view_get_item_at_pos (::GtkIconView* icon_view /*none*/, gint x, gint y, ::GtkTreePath** path /*full,out,opt*/, ::GtkCellRenderer** cell /*none,out,opt*/);
GI_INLINE_DECL bool get_item_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::CellRenderer * cell) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> get_item_at_pos (gint x, gint y) noexcept;

// int gtk_icon_view_get_item_column (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// gint gtk_icon_view_get_item_column (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL gint get_item_column (Gtk::TreePath_Ref path) noexcept;

// GtkOrientation gtk_icon_view_get_item_orientation (GtkIconView* icon_view /*none*/);
// ::GtkOrientation gtk_icon_view_get_item_orientation (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL Gtk::Orientation get_item_orientation () noexcept;

// int gtk_icon_view_get_item_padding (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_item_padding (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_item_padding () noexcept;

// int gtk_icon_view_get_item_row (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// gint gtk_icon_view_get_item_row (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL gint get_item_row (Gtk::TreePath_Ref path) noexcept;

// int gtk_icon_view_get_item_width (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_item_width (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_item_width () noexcept;

// int gtk_icon_view_get_margin (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_margin (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_margin () noexcept;

// int gtk_icon_view_get_markup_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_markup_column (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_markup_column () noexcept;

// GtkTreeModel* /*none,nullable*/ gtk_icon_view_get_model (GtkIconView* icon_view /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_icon_view_get_model (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// GtkTreePath* /*full,nullable*/ gtk_icon_view_get_path_at_pos (GtkIconView* icon_view /*none*/, int x, int y);
// ::GtkTreePath* /*full,nullable*/ gtk_icon_view_get_path_at_pos (::GtkIconView* icon_view /*none*/, gint x, gint y);
GI_INLINE_DECL Gtk::TreePath get_path_at_pos (gint x, gint y) noexcept;

// int gtk_icon_view_get_pixbuf_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_pixbuf_column (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_pixbuf_column () noexcept;

// gboolean gtk_icon_view_get_reorderable (GtkIconView* icon_view /*none*/);
// gboolean gtk_icon_view_get_reorderable (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL bool get_reorderable () noexcept;

// int gtk_icon_view_get_row_spacing (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_row_spacing (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_row_spacing () noexcept;

// GList* /*full*/ gtk_icon_view_get_selected_items (GtkIconView* icon_view /*none*/);
// ::GList* /*full*/ gtk_icon_view_get_selected_items (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t> get_selected_items () noexcept;

// GtkSelectionMode gtk_icon_view_get_selection_mode (GtkIconView* icon_view /*none*/);
// ::GtkSelectionMode gtk_icon_view_get_selection_mode (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL Gtk::SelectionMode get_selection_mode () noexcept;

// int gtk_icon_view_get_spacing (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_spacing (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_spacing () noexcept;

// int gtk_icon_view_get_text_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_text_column (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_text_column () noexcept;

// int gtk_icon_view_get_tooltip_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_tooltip_column (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL gint get_tooltip_column () noexcept;

// gboolean gtk_icon_view_get_tooltip_context (GtkIconView* icon_view /*none*/, int x, int y, gboolean keyboard_tip, GtkTreeModel** model /*none,out,opt*/, GtkTreePath** path /*full,out,opt*/, GtkTreeIter* iter /*none,out,opt,ca*/);
// gboolean gtk_icon_view_get_tooltip_context (::GtkIconView* icon_view /*none*/, gint x, gint y, gboolean keyboard_tip, ::GtkTreeModel** model /*none,out,opt*/, ::GtkTreePath** path /*full,out,opt*/, ::GtkTreeIter* iter /*none,out,opt,ca*/);
GI_INLINE_DECL bool get_tooltip_context (gint x, gint y, gboolean keyboard_tip, Gtk::TreeModel * model, Gtk::TreePath * path, Gtk::TreeIter * iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> get_tooltip_context (gint x, gint y, gboolean keyboard_tip) noexcept;

// gboolean gtk_icon_view_get_visible_range (GtkIconView* icon_view /*none*/, GtkTreePath** start_path /*full,out,opt*/, GtkTreePath** end_path /*full,out,opt*/);
// gboolean gtk_icon_view_get_visible_range (::GtkIconView* icon_view /*none*/, ::GtkTreePath** start_path /*full,out,opt*/, ::GtkTreePath** end_path /*full,out,opt*/);
GI_INLINE_DECL bool get_visible_range (Gtk::TreePath * start_path, Gtk::TreePath * end_path) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreePath> get_visible_range () noexcept;

// void gtk_icon_view_item_activated (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_item_activated (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void item_activated (Gtk::TreePath_Ref path) noexcept;

// gboolean gtk_icon_view_path_is_selected (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_icon_view_path_is_selected (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool path_is_selected (Gtk::TreePath_Ref path) noexcept;

// void gtk_icon_view_scroll_to_path (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, gboolean use_align, float row_align, float col_align);
// void gtk_icon_view_scroll_to_path (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, gboolean use_align, gfloat row_align, gfloat col_align);
GI_INLINE_DECL void scroll_to_path (Gtk::TreePath_Ref path, gboolean use_align, gfloat row_align, gfloat col_align) noexcept;

// void gtk_icon_view_select_all (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_select_all (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_icon_view_select_path (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_select_path (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void select_path (Gtk::TreePath_Ref path) noexcept;

// void gtk_icon_view_selected_foreach (GtkIconView* icon_view /*none*/, GtkIconViewForeachFunc func /*none*/, gpointer data);
// void gtk_icon_view_selected_foreach (::GtkIconView* icon_view /*none*/, Gtk::IconViewForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::IconViewForeachFunc func) noexcept;

// void gtk_icon_view_set_activate_on_single_click (GtkIconView* icon_view /*none*/, gboolean single);
// void gtk_icon_view_set_activate_on_single_click (::GtkIconView* icon_view /*none*/, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_icon_view_set_column_spacing (GtkIconView* icon_view /*none*/, int column_spacing);
// void gtk_icon_view_set_column_spacing (::GtkIconView* icon_view /*none*/, gint column_spacing);
GI_INLINE_DECL void set_column_spacing (gint column_spacing) noexcept;

// void gtk_icon_view_set_columns (GtkIconView* icon_view /*none*/, int columns);
// void gtk_icon_view_set_columns (::GtkIconView* icon_view /*none*/, gint columns);
GI_INLINE_DECL void set_columns (gint columns) noexcept;

// void gtk_icon_view_set_cursor (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, GtkCellRenderer* cell /*none,nullable*/, gboolean start_editing);
// void gtk_icon_view_set_cursor (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkCellRenderer* cell /*none,nullable*/, gboolean start_editing);
GI_INLINE_DECL void set_cursor (Gtk::TreePath_Ref path, Gtk::CellRenderer cell, gboolean start_editing) noexcept;
GI_INLINE_DECL void set_cursor (Gtk::TreePath_Ref path, gboolean start_editing) noexcept;

// void gtk_icon_view_set_drag_dest_item (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none,nullable*/, GtkIconViewDropPosition pos);
// void gtk_icon_view_set_drag_dest_item (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkIconViewDropPosition pos);
GI_INLINE_DECL void set_drag_dest_item (Gtk::TreePath_Ref path, Gtk::IconViewDropPosition pos) noexcept;
GI_INLINE_DECL void set_drag_dest_item (Gtk::IconViewDropPosition pos) noexcept;

// void gtk_icon_view_set_item_orientation (GtkIconView* icon_view /*none*/, GtkOrientation orientation);
// void gtk_icon_view_set_item_orientation (::GtkIconView* icon_view /*none*/, ::GtkOrientation orientation);
GI_INLINE_DECL void set_item_orientation (Gtk::Orientation orientation) noexcept;

// void gtk_icon_view_set_item_padding (GtkIconView* icon_view /*none*/, int item_padding);
// void gtk_icon_view_set_item_padding (::GtkIconView* icon_view /*none*/, gint item_padding);
GI_INLINE_DECL void set_item_padding (gint item_padding) noexcept;

// void gtk_icon_view_set_item_width (GtkIconView* icon_view /*none*/, int item_width);
// void gtk_icon_view_set_item_width (::GtkIconView* icon_view /*none*/, gint item_width);
GI_INLINE_DECL void set_item_width (gint item_width) noexcept;

// void gtk_icon_view_set_margin (GtkIconView* icon_view /*none*/, int margin);
// void gtk_icon_view_set_margin (::GtkIconView* icon_view /*none*/, gint margin);
GI_INLINE_DECL void set_margin (gint margin) noexcept;

// void gtk_icon_view_set_markup_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_markup_column (::GtkIconView* icon_view /*none*/, gint column);
GI_INLINE_DECL void set_markup_column (gint column) noexcept;

// void gtk_icon_view_set_model (GtkIconView* icon_view /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_icon_view_set_model (::GtkIconView* icon_view /*none*/, ::GtkTreeModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_icon_view_set_pixbuf_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_pixbuf_column (::GtkIconView* icon_view /*none*/, gint column);
GI_INLINE_DECL void set_pixbuf_column (gint column) noexcept;

// void gtk_icon_view_set_reorderable (GtkIconView* icon_view /*none*/, gboolean reorderable);
// void gtk_icon_view_set_reorderable (::GtkIconView* icon_view /*none*/, gboolean reorderable);
GI_INLINE_DECL void set_reorderable (gboolean reorderable) noexcept;

// void gtk_icon_view_set_row_spacing (GtkIconView* icon_view /*none*/, int row_spacing);
// void gtk_icon_view_set_row_spacing (::GtkIconView* icon_view /*none*/, gint row_spacing);
GI_INLINE_DECL void set_row_spacing (gint row_spacing) noexcept;

// void gtk_icon_view_set_selection_mode (GtkIconView* icon_view /*none*/, GtkSelectionMode mode);
// void gtk_icon_view_set_selection_mode (::GtkIconView* icon_view /*none*/, ::GtkSelectionMode mode);
GI_INLINE_DECL void set_selection_mode (Gtk::SelectionMode mode) noexcept;

// void gtk_icon_view_set_spacing (GtkIconView* icon_view /*none*/, int spacing);
// void gtk_icon_view_set_spacing (::GtkIconView* icon_view /*none*/, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

// void gtk_icon_view_set_text_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_text_column (::GtkIconView* icon_view /*none*/, gint column);
GI_INLINE_DECL void set_text_column (gint column) noexcept;

// void gtk_icon_view_set_tooltip_cell (GtkIconView* icon_view /*none*/, GtkTooltip* tooltip /*none*/, GtkTreePath* path /*none*/, GtkCellRenderer* cell /*none,nullable*/);
// void gtk_icon_view_set_tooltip_cell (::GtkIconView* icon_view /*none*/, ::GtkTooltip* tooltip /*none*/, ::GtkTreePath* path /*none*/, ::GtkCellRenderer* cell /*none,nullable*/);
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path, Gtk::CellRenderer cell) noexcept;
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path) noexcept;

// void gtk_icon_view_set_tooltip_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_tooltip_column (::GtkIconView* icon_view /*none*/, gint column);
GI_INLINE_DECL void set_tooltip_column (gint column) noexcept;

// void gtk_icon_view_set_tooltip_item (GtkIconView* icon_view /*none*/, GtkTooltip* tooltip /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_set_tooltip_item (::GtkIconView* icon_view /*none*/, ::GtkTooltip* tooltip /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void set_tooltip_item (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path) noexcept;

// void gtk_icon_view_unselect_all (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_unselect_all (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_icon_view_unselect_path (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_unselect_path (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void unselect_path (Gtk::TreePath_Ref path) noexcept;

// void gtk_icon_view_unset_model_drag_dest (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_unset_model_drag_dest (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL void unset_model_drag_dest () noexcept;

// void gtk_icon_view_unset_model_drag_source (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_unset_model_drag_source (::GtkIconView* icon_view /*none*/);
GI_INLINE_DECL void unset_model_drag_source () noexcept;

gi::property_proxy<bool, base::IconViewBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::IconViewBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "activate-on-single-click"); }

gi::property_proxy<Gtk::CellArea, base::IconViewBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::IconViewBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::IconViewBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::IconViewBase> (*this, "cell-area"); }

gi::property_proxy<gint, base::IconViewBase> property_column_spacing()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "column-spacing"); }
const gi::property_proxy<gint, base::IconViewBase> property_column_spacing() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "column-spacing"); }

gi::property_proxy<gint, base::IconViewBase> property_columns()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "columns"); }
const gi::property_proxy<gint, base::IconViewBase> property_columns() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "columns"); }

gi::property_proxy<Gtk::Orientation, base::IconViewBase> property_item_orientation()
{ return gi::property_proxy<Gtk::Orientation, base::IconViewBase> (*this, "item-orientation"); }
const gi::property_proxy<Gtk::Orientation, base::IconViewBase> property_item_orientation() const
{ return gi::property_proxy<Gtk::Orientation, base::IconViewBase> (*this, "item-orientation"); }

gi::property_proxy<gint, base::IconViewBase> property_item_padding()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-padding"); }
const gi::property_proxy<gint, base::IconViewBase> property_item_padding() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-padding"); }

gi::property_proxy<gint, base::IconViewBase> property_item_width()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-width"); }
const gi::property_proxy<gint, base::IconViewBase> property_item_width() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "item-width"); }

gi::property_proxy<gint, base::IconViewBase> property_margin()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "margin"); }
const gi::property_proxy<gint, base::IconViewBase> property_margin() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "margin"); }

gi::property_proxy<gint, base::IconViewBase> property_markup_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "markup-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_markup_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "markup-column"); }

gi::property_proxy<Gtk::TreeModel, base::IconViewBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::IconViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::IconViewBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::IconViewBase> (*this, "model"); }

gi::property_proxy<gint, base::IconViewBase> property_pixbuf_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "pixbuf-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_pixbuf_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "pixbuf-column"); }

gi::property_proxy<bool, base::IconViewBase> property_reorderable()
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::IconViewBase> property_reorderable() const
{ return gi::property_proxy<bool, base::IconViewBase> (*this, "reorderable"); }

gi::property_proxy<gint, base::IconViewBase> property_row_spacing()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "row-spacing"); }
const gi::property_proxy<gint, base::IconViewBase> property_row_spacing() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "row-spacing"); }

gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> property_selection_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> (*this, "selection-mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> property_selection_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::IconViewBase> (*this, "selection-mode"); }

gi::property_proxy<gint, base::IconViewBase> property_spacing()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::IconViewBase> property_spacing() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "spacing"); }

gi::property_proxy<gint, base::IconViewBase> property_text_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "text-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_text_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "text-column"); }

gi::property_proxy<gint, base::IconViewBase> property_tooltip_column()
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "tooltip-column"); }
const gi::property_proxy<gint, base::IconViewBase> property_tooltip_column() const
{ return gi::property_proxy<gint, base::IconViewBase> (*this, "tooltip-column"); }

// (signal) gboolean activate-cursor-item ();
// (signal) gboolean activate-cursor-item ();
gi::signal_proxy<bool(Gtk::IconView)> signal_activate_cursor_item()
{ return gi::signal_proxy<bool(Gtk::IconView)> (*this, "activate-cursor-item"); }

// (signal) void item-activated ( path /*none*/);
// (signal) void item-activated (::GtkTreePath* path /*none*/);
gi::signal_proxy<void(Gtk::IconView, Gtk::TreePath_Ref path)> signal_item_activated()
{ return gi::signal_proxy<void(Gtk::IconView, Gtk::TreePath_Ref path)> (*this, "item-activated"); }

// (signal) gboolean move-cursor ( step, gint count, gboolean extend, gboolean modify);
// (signal) gboolean move-cursor (::GtkMovementStep step, gint count, gboolean extend, gboolean modify);
gi::signal_proxy<bool(Gtk::IconView, Gtk::MovementStep step, gint count, gboolean extend, gboolean modify)> signal_move_cursor()
{ return gi::signal_proxy<bool(Gtk::IconView, Gtk::MovementStep step, gint count, gboolean extend, gboolean modify)> (*this, "move-cursor"); }

// (signal) void select-all ();
// (signal) void select-all ();
gi::signal_proxy<void(Gtk::IconView)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "select-all"); }

// (signal) void select-cursor-item ();
// (signal) void select-cursor-item ();
gi::signal_proxy<void(Gtk::IconView)> signal_select_cursor_item()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "select-cursor-item"); }

// (signal) void selection-changed ();
// (signal) void selection-changed ();
gi::signal_proxy<void(Gtk::IconView)> signal_selection_changed()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "selection-changed"); }

// (signal) void toggle-cursor-item ();
// (signal) void toggle-cursor-item ();
gi::signal_proxy<void(Gtk::IconView)> signal_toggle_cursor_item()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "toggle-cursor-item"); }

// (signal) void unselect-all ();
// (signal) void unselect-all ();
gi::signal_proxy<void(Gtk::IconView)> signal_unselect_all()
{ return gi::signal_proxy<void(Gtk::IconView)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra_def.hpp>)
#include <gtk/iconview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra.hpp>)
#include <gtk/iconview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconView : public GI_GTK_ICONVIEW_BASE
{ typedef GI_GTK_ICONVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconView>
{ typedef Gtk::IconView type; }; 

} // namespace repository

} // namespace gi

#endif
