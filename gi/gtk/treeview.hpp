// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEW_HPP_
#define _GI_GTK_TREEVIEW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellRenderer;
class Editable;
class Scrollable;
class Tooltip;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreePath;
class TreePath_Ref;
class TreeSelection;
class TreeViewColumn;

class TreeView;

namespace base {


#define GI_GTK_TREEVIEW_BASE base::TreeViewBase
class TreeViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkTreeView BaseObjectType;

TreeViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_view_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* /*none*/ gtk_tree_view_new ();
// ::GtkTreeView* /*none*/ gtk_tree_view_new ();
static GI_INLINE_DECL Gtk::TreeView new_ () noexcept;

// GtkWidget* /*none*/ gtk_tree_view_new_with_model (GtkTreeModel* model /*none*/);
// ::GtkTreeView* /*none*/ gtk_tree_view_new_with_model (::GtkTreeModel* model /*none*/);
static GI_INLINE_DECL Gtk::TreeView new_with_model (Gtk::TreeModel model) noexcept;

// int gtk_tree_view_append_column (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none*/);
// gint gtk_tree_view_append_column (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none*/);
GI_INLINE_DECL gint append_column (Gtk::TreeViewColumn column) noexcept;

// void gtk_tree_view_collapse_all (GtkTreeView* tree_view /*none*/);
// void gtk_tree_view_collapse_all (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void collapse_all () noexcept;

// gboolean gtk_tree_view_collapse_row (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_view_collapse_row (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool collapse_row (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_view_columns_autosize (GtkTreeView* tree_view /*none*/);
// void gtk_tree_view_columns_autosize (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void columns_autosize () noexcept;

// void gtk_tree_view_convert_bin_window_to_tree_coords (GtkTreeView* tree_view /*none*/, int bx, int by, int* tx, int* ty);
// void gtk_tree_view_convert_bin_window_to_tree_coords (::GtkTreeView* tree_view /*none*/, gint bx, gint by, gint* tx, gint* ty);
GI_INLINE_DECL void convert_bin_window_to_tree_coords (gint bx, gint by, gint & tx, gint & ty) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_bin_window_to_tree_coords (gint bx, gint by) noexcept;

// void gtk_tree_view_convert_bin_window_to_widget_coords (GtkTreeView* tree_view /*none*/, int bx, int by, int* wx, int* wy);
// void gtk_tree_view_convert_bin_window_to_widget_coords (::GtkTreeView* tree_view /*none*/, gint bx, gint by, gint* wx, gint* wy);
GI_INLINE_DECL void convert_bin_window_to_widget_coords (gint bx, gint by, gint & wx, gint & wy) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_bin_window_to_widget_coords (gint bx, gint by) noexcept;

// void gtk_tree_view_convert_tree_to_bin_window_coords (GtkTreeView* tree_view /*none*/, int tx, int ty, int* bx, int* by);
// void gtk_tree_view_convert_tree_to_bin_window_coords (::GtkTreeView* tree_view /*none*/, gint tx, gint ty, gint* bx, gint* by);
GI_INLINE_DECL void convert_tree_to_bin_window_coords (gint tx, gint ty, gint & bx, gint & by) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_tree_to_bin_window_coords (gint tx, gint ty) noexcept;

// void gtk_tree_view_convert_tree_to_widget_coords (GtkTreeView* tree_view /*none*/, int tx, int ty, int* wx, int* wy);
// void gtk_tree_view_convert_tree_to_widget_coords (::GtkTreeView* tree_view /*none*/, gint tx, gint ty, gint* wx, gint* wy);
GI_INLINE_DECL void convert_tree_to_widget_coords (gint tx, gint ty, gint & wx, gint & wy) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_tree_to_widget_coords (gint tx, gint ty) noexcept;

// void gtk_tree_view_convert_widget_to_bin_window_coords (GtkTreeView* tree_view /*none*/, int wx, int wy, int* bx, int* by);
// void gtk_tree_view_convert_widget_to_bin_window_coords (::GtkTreeView* tree_view /*none*/, gint wx, gint wy, gint* bx, gint* by);
GI_INLINE_DECL void convert_widget_to_bin_window_coords (gint wx, gint wy, gint & bx, gint & by) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_widget_to_bin_window_coords (gint wx, gint wy) noexcept;

// void gtk_tree_view_convert_widget_to_tree_coords (GtkTreeView* tree_view /*none*/, int wx, int wy, int* tx, int* ty);
// void gtk_tree_view_convert_widget_to_tree_coords (::GtkTreeView* tree_view /*none*/, gint wx, gint wy, gint* tx, gint* ty);
GI_INLINE_DECL void convert_widget_to_tree_coords (gint wx, gint wy, gint & tx, gint & ty) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> convert_widget_to_tree_coords (gint wx, gint wy) noexcept;

// GdkPaintable* /*full,nullable*/ gtk_tree_view_create_row_drag_icon (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/);
// ::GdkPaintable* /*full,nullable*/ gtk_tree_view_create_row_drag_icon (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL Gdk::Paintable create_row_drag_icon (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_view_enable_model_drag_dest (GtkTreeView* tree_view /*none*/, GdkContentFormats* formats /*none*/, GdkDragAction actions);
// void gtk_tree_view_enable_model_drag_dest (::GtkTreeView* tree_view /*none*/, ::GdkContentFormats* formats /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void enable_model_drag_dest (Gdk::ContentFormats_Ref formats, Gdk::DragAction actions) noexcept;

// void gtk_tree_view_enable_model_drag_source (GtkTreeView* tree_view /*none*/, GdkModifierType start_button_mask, GdkContentFormats* formats /*none*/, GdkDragAction actions);
// void gtk_tree_view_enable_model_drag_source (::GtkTreeView* tree_view /*none*/, ::GdkModifierType start_button_mask, ::GdkContentFormats* formats /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void enable_model_drag_source (Gdk::ModifierType start_button_mask, Gdk::ContentFormats_Ref formats, Gdk::DragAction actions) noexcept;

// void gtk_tree_view_expand_all (GtkTreeView* tree_view /*none*/);
// void gtk_tree_view_expand_all (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void expand_all () noexcept;

// gboolean gtk_tree_view_expand_row (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, gboolean open_all);
// gboolean gtk_tree_view_expand_row (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, gboolean open_all);
GI_INLINE_DECL bool expand_row (Gtk::TreePath_Ref path, gboolean open_all) noexcept;

// void gtk_tree_view_expand_to_path (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_view_expand_to_path (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void expand_to_path (Gtk::TreePath_Ref path) noexcept;

// gboolean gtk_tree_view_get_activate_on_single_click (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_activate_on_single_click (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// void gtk_tree_view_get_background_area (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none,nullable*/, GtkTreeViewColumn* column /*none,nullable*/, GdkRectangle* rect /*none,out,ca*/);
// void gtk_tree_view_get_background_area (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkTreeViewColumn* column /*none,nullable*/, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL void get_background_area (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL void get_background_area (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_background_area (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_background_area () noexcept;

// void gtk_tree_view_get_cell_area (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none,nullable*/, GtkTreeViewColumn* column /*none,nullable*/, GdkRectangle* rect /*none,out,ca*/);
// void gtk_tree_view_get_cell_area (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkTreeViewColumn* column /*none,nullable*/, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL void get_cell_area (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column, Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL void get_cell_area (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_area (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_area () noexcept;

// GtkTreeViewColumn* /*none,nullable*/ gtk_tree_view_get_column (GtkTreeView* tree_view /*none*/, int n);
// ::GtkTreeViewColumn* /*none,nullable*/ gtk_tree_view_get_column (::GtkTreeView* tree_view /*none*/, gint n);
GI_INLINE_DECL Gtk::TreeViewColumn get_column (gint n) noexcept;

// GList* /*container*/ gtk_tree_view_get_columns (GtkTreeView* tree_view /*none*/);
// ::GList* /*container*/ gtk_tree_view_get_columns (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkTreeViewColumn*, gi::transfer_container_t> get_columns () noexcept;

// void gtk_tree_view_get_cursor (GtkTreeView* tree_view /*none*/, GtkTreePath** path /*full,out,opt,nullable*/, GtkTreeViewColumn** focus_column /*none,out,opt,nullable*/);
// void gtk_tree_view_get_cursor (::GtkTreeView* tree_view /*none*/, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkTreeViewColumn** focus_column /*none,out,opt,nullable*/);
GI_INLINE_DECL void get_cursor (Gtk::TreePath * path, Gtk::TreeViewColumn * focus_column) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TreePath, Gtk::TreeViewColumn> get_cursor () noexcept;

// gboolean gtk_tree_view_get_dest_row_at_pos (GtkTreeView* tree_view /*none*/, int drag_x, int drag_y, GtkTreePath** path /*full,out,opt,nullable*/, GtkTreeViewDropPosition* pos);
// gboolean gtk_tree_view_get_dest_row_at_pos (::GtkTreeView* tree_view /*none*/, gint drag_x, gint drag_y, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkTreeViewDropPosition* pos);
GI_INLINE_DECL bool get_dest_row_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path, Gtk::TreeViewDropPosition * pos) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreeViewDropPosition> get_dest_row_at_pos (gint drag_x, gint drag_y) noexcept;

// void gtk_tree_view_get_drag_dest_row (GtkTreeView* tree_view /*none*/, GtkTreePath** path /*full,out,opt,nullable*/, GtkTreeViewDropPosition* pos);
// void gtk_tree_view_get_drag_dest_row (::GtkTreeView* tree_view /*none*/, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkTreeViewDropPosition* pos);
GI_INLINE_DECL void get_drag_dest_row (Gtk::TreePath * path, Gtk::TreeViewDropPosition * pos) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TreePath, Gtk::TreeViewDropPosition> get_drag_dest_row () noexcept;

// gboolean gtk_tree_view_get_enable_search (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_enable_search (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_enable_search () noexcept;

// gboolean gtk_tree_view_get_enable_tree_lines (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_enable_tree_lines (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_enable_tree_lines () noexcept;

// GtkTreeViewColumn* /*none,nullable*/ gtk_tree_view_get_expander_column (GtkTreeView* tree_view /*none*/);
// ::GtkTreeViewColumn* /*none,nullable*/ gtk_tree_view_get_expander_column (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL Gtk::TreeViewColumn get_expander_column () noexcept;

// gboolean gtk_tree_view_get_fixed_height_mode (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_fixed_height_mode (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_fixed_height_mode () noexcept;

// GtkTreeViewGridLines gtk_tree_view_get_grid_lines (GtkTreeView* tree_view /*none*/);
// ::GtkTreeViewGridLines gtk_tree_view_get_grid_lines (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL Gtk::TreeViewGridLines get_grid_lines () noexcept;

// gboolean gtk_tree_view_get_headers_clickable (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_headers_clickable (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_headers_clickable () noexcept;

// gboolean gtk_tree_view_get_headers_visible (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_headers_visible (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_headers_visible () noexcept;

// gboolean gtk_tree_view_get_hover_expand (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_hover_expand (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_hover_expand () noexcept;

// gboolean gtk_tree_view_get_hover_selection (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_hover_selection (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_hover_selection () noexcept;

// int gtk_tree_view_get_level_indentation (GtkTreeView* tree_view /*none*/);
// gint gtk_tree_view_get_level_indentation (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL gint get_level_indentation () noexcept;

// GtkTreeModel* /*none,nullable*/ gtk_tree_view_get_model (GtkTreeView* tree_view /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_tree_view_get_model (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// guint gtk_tree_view_get_n_columns (GtkTreeView* tree_view /*none*/);
// guint gtk_tree_view_get_n_columns (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL guint get_n_columns () noexcept;

// gboolean gtk_tree_view_get_path_at_pos (GtkTreeView* tree_view /*none*/, int x, int y, GtkTreePath** path /*full,out,opt,nullable*/, GtkTreeViewColumn** column /*none,out,opt,nullable*/, int* cell_x, int* cell_y);
// gboolean gtk_tree_view_get_path_at_pos (::GtkTreeView* tree_view /*none*/, gint x, gint y, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkTreeViewColumn** column /*none,out,opt,nullable*/, gint* cell_x, gint* cell_y);
GI_INLINE_DECL bool get_path_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::TreeViewColumn * column, gint * cell_x, gint * cell_y) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreeViewColumn, gint, gint> get_path_at_pos (gint x, gint y) noexcept;

// gboolean gtk_tree_view_get_reorderable (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_reorderable (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_reorderable () noexcept;

// FAILURE on gtk_tree_view_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_view_get_rubber_banding (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_rubber_banding (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_rubber_banding () noexcept;

// int gtk_tree_view_get_search_column (GtkTreeView* tree_view /*none*/);
// gint gtk_tree_view_get_search_column (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL gint get_search_column () noexcept;

// GtkEditable* /*none,nullable*/ gtk_tree_view_get_search_entry (GtkTreeView* tree_view /*none*/);
// ::GtkEditable* /*none,nullable*/ gtk_tree_view_get_search_entry (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL Gtk::Editable get_search_entry () noexcept;

// FAILURE on gtk_tree_view_get_search_equal_func; No such node (<xmlattr>.transfer-ownership)
// GtkTreeSelection* /*none*/ gtk_tree_view_get_selection (GtkTreeView* tree_view /*none*/);
// ::GtkTreeSelection* /*none*/ gtk_tree_view_get_selection (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL Gtk::TreeSelection get_selection () noexcept;

// gboolean gtk_tree_view_get_show_expanders (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_get_show_expanders (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool get_show_expanders () noexcept;

// int gtk_tree_view_get_tooltip_column (GtkTreeView* tree_view /*none*/);
// gint gtk_tree_view_get_tooltip_column (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL gint get_tooltip_column () noexcept;

// gboolean gtk_tree_view_get_tooltip_context (GtkTreeView* tree_view /*none*/, int x, int y, gboolean keyboard_tip, GtkTreeModel** model /*none,out,opt,nullable*/, GtkTreePath** path /*full,out,opt*/, GtkTreeIter* iter /*none,out,opt,ca*/);
// gboolean gtk_tree_view_get_tooltip_context (::GtkTreeView* tree_view /*none*/, gint x, gint y, gboolean keyboard_tip, ::GtkTreeModel** model /*none,out,opt,nullable*/, ::GtkTreePath** path /*full,out,opt*/, ::GtkTreeIter* iter /*none,out,opt,ca*/);
GI_INLINE_DECL bool get_tooltip_context (gint x, gint y, gboolean keyboard_tip, Gtk::TreeModel * model, Gtk::TreePath * path, Gtk::TreeIter * iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> get_tooltip_context (gint x, gint y, gboolean keyboard_tip) noexcept;

// gboolean gtk_tree_view_get_visible_range (GtkTreeView* tree_view /*none*/, GtkTreePath** start_path /*full,out,opt*/, GtkTreePath** end_path /*full,out,opt*/);
// gboolean gtk_tree_view_get_visible_range (::GtkTreeView* tree_view /*none*/, ::GtkTreePath** start_path /*full,out,opt*/, ::GtkTreePath** end_path /*full,out,opt*/);
GI_INLINE_DECL bool get_visible_range (Gtk::TreePath * start_path, Gtk::TreePath * end_path) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreePath> get_visible_range () noexcept;

// void gtk_tree_view_get_visible_rect (GtkTreeView* tree_view /*none*/, GdkRectangle* visible_rect /*none,out,ca*/);
// void gtk_tree_view_get_visible_rect (::GtkTreeView* tree_view /*none*/, ::GdkRectangle* visible_rect /*none,out,ca*/);
GI_INLINE_DECL void get_visible_rect (Gdk::Rectangle & visible_rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_visible_rect () noexcept;

// int gtk_tree_view_insert_column (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none*/, int position);
// gint gtk_tree_view_insert_column (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none*/, gint position);
GI_INLINE_DECL gint insert_column (Gtk::TreeViewColumn column, gint position) noexcept;

// int gtk_tree_view_insert_column_with_attributes (GtkTreeView* tree_view /*none*/, int position, const char* title /*none*/, GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// gint gtk_tree_view_insert_column_with_attributes (::GtkTreeView* tree_view /*none*/, gint position, const char* title /*none*/, ::GtkCellRenderer* cell /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// int gtk_tree_view_insert_column_with_data_func (GtkTreeView* tree_view /*none*/, int position, const char* title /*none*/, GtkCellRenderer* cell /*none*/, GtkTreeCellDataFunc func /*none*/, gpointer data, GDestroyNotify dnotify /*none*/);
// gint gtk_tree_view_insert_column_with_data_func (::GtkTreeView* tree_view /*none*/, gint position, const char* title /*none*/, ::GtkCellRenderer* cell /*none*/, Gtk::TreeCellDataFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type dnotify /*none*/);
GI_INLINE_DECL gint insert_column_with_data_func (gint position, const gi::cstring_v title, Gtk::CellRenderer cell, Gtk::TreeCellDataFunc func) noexcept;

// gboolean gtk_tree_view_is_blank_at_pos (GtkTreeView* tree_view /*none*/, int x, int y, GtkTreePath** path /*full,out,opt,nullable*/, GtkTreeViewColumn** column /*none,out,opt,nullable*/, int* cell_x, int* cell_y);
// gboolean gtk_tree_view_is_blank_at_pos (::GtkTreeView* tree_view /*none*/, gint x, gint y, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkTreeViewColumn** column /*none,out,opt,nullable*/, gint* cell_x, gint* cell_y);
GI_INLINE_DECL bool is_blank_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::TreeViewColumn * column, gint * cell_x, gint * cell_y) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreePath, Gtk::TreeViewColumn, gint, gint> is_blank_at_pos (gint x, gint y) noexcept;

// gboolean gtk_tree_view_is_rubber_banding_active (GtkTreeView* tree_view /*none*/);
// gboolean gtk_tree_view_is_rubber_banding_active (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool is_rubber_banding_active () noexcept;

// void gtk_tree_view_map_expanded_rows (GtkTreeView* tree_view /*none*/, GtkTreeViewMappingFunc func /*none*/, gpointer data);
// void gtk_tree_view_map_expanded_rows (::GtkTreeView* tree_view /*none*/, Gtk::TreeViewMappingFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void map_expanded_rows (Gtk::TreeViewMappingFunc func) noexcept;

// void gtk_tree_view_move_column_after (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none*/, GtkTreeViewColumn* base_column /*none,nullable*/);
// void gtk_tree_view_move_column_after (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none*/, ::GtkTreeViewColumn* base_column /*none,nullable*/);
GI_INLINE_DECL void move_column_after (Gtk::TreeViewColumn column, Gtk::TreeViewColumn base_column) noexcept;
GI_INLINE_DECL void move_column_after (Gtk::TreeViewColumn column) noexcept;

// int gtk_tree_view_remove_column (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none*/);
// gint gtk_tree_view_remove_column (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none*/);
GI_INLINE_DECL gint remove_column (Gtk::TreeViewColumn column) noexcept;

// void gtk_tree_view_row_activated (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, GtkTreeViewColumn* column /*none,nullable*/);
// void gtk_tree_view_row_activated (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeViewColumn* column /*none,nullable*/);
GI_INLINE_DECL void row_activated (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL void row_activated (Gtk::TreePath_Ref path) noexcept;

// gboolean gtk_tree_view_row_expanded (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_tree_view_row_expanded (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool row_expanded (Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_view_scroll_to_cell (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none,nullable*/, GtkTreeViewColumn* column /*none,nullable*/, gboolean use_align, float row_align, float col_align);
// void gtk_tree_view_scroll_to_cell (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkTreeViewColumn* column /*none,nullable*/, gboolean use_align, gfloat row_align, gfloat col_align);
GI_INLINE_DECL void scroll_to_cell (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column, gboolean use_align, gfloat row_align, gfloat col_align) noexcept;
GI_INLINE_DECL void scroll_to_cell (gboolean use_align, gfloat row_align, gfloat col_align) noexcept;

// void gtk_tree_view_scroll_to_point (GtkTreeView* tree_view /*none*/, int tree_x, int tree_y);
// void gtk_tree_view_scroll_to_point (::GtkTreeView* tree_view /*none*/, gint tree_x, gint tree_y);
GI_INLINE_DECL void scroll_to_point (gint tree_x, gint tree_y) noexcept;

// void gtk_tree_view_set_activate_on_single_click (GtkTreeView* tree_view /*none*/, gboolean single);
// void gtk_tree_view_set_activate_on_single_click (::GtkTreeView* tree_view /*none*/, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_tree_view_set_column_drag_function (GtkTreeView* tree_view /*none*/, GtkTreeViewColumnDropFunc func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_view_set_column_drag_function (::GtkTreeView* tree_view /*none*/, Gtk::TreeViewColumnDropFunc::cfunction_type func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_column_drag_function (Gtk::TreeViewColumnDropFunc func) noexcept;

// void gtk_tree_view_set_cursor (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, GtkTreeViewColumn* focus_column /*none,nullable*/, gboolean start_editing);
// void gtk_tree_view_set_cursor (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeViewColumn* focus_column /*none,nullable*/, gboolean start_editing);
GI_INLINE_DECL void set_cursor (Gtk::TreePath_Ref path, Gtk::TreeViewColumn focus_column, gboolean start_editing) noexcept;
GI_INLINE_DECL void set_cursor (Gtk::TreePath_Ref path, gboolean start_editing) noexcept;

// void gtk_tree_view_set_cursor_on_cell (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, GtkTreeViewColumn* focus_column /*none,nullable*/, GtkCellRenderer* focus_cell /*none,nullable*/, gboolean start_editing);
// void gtk_tree_view_set_cursor_on_cell (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeViewColumn* focus_column /*none,nullable*/, ::GtkCellRenderer* focus_cell /*none,nullable*/, gboolean start_editing);
GI_INLINE_DECL void set_cursor_on_cell (Gtk::TreePath_Ref path, Gtk::TreeViewColumn focus_column, Gtk::CellRenderer focus_cell, gboolean start_editing) noexcept;
GI_INLINE_DECL void set_cursor_on_cell (Gtk::TreePath_Ref path, gboolean start_editing) noexcept;

// void gtk_tree_view_set_drag_dest_row (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none,nullable*/, GtkTreeViewDropPosition pos);
// void gtk_tree_view_set_drag_dest_row (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkTreeViewDropPosition pos);
GI_INLINE_DECL void set_drag_dest_row (Gtk::TreePath_Ref path, Gtk::TreeViewDropPosition pos) noexcept;
GI_INLINE_DECL void set_drag_dest_row (Gtk::TreeViewDropPosition pos) noexcept;

// void gtk_tree_view_set_enable_search (GtkTreeView* tree_view /*none*/, gboolean enable_search);
// void gtk_tree_view_set_enable_search (::GtkTreeView* tree_view /*none*/, gboolean enable_search);
GI_INLINE_DECL void set_enable_search (gboolean enable_search) noexcept;

// void gtk_tree_view_set_enable_tree_lines (GtkTreeView* tree_view /*none*/, gboolean enabled);
// void gtk_tree_view_set_enable_tree_lines (::GtkTreeView* tree_view /*none*/, gboolean enabled);
GI_INLINE_DECL void set_enable_tree_lines (gboolean enabled) noexcept;

// void gtk_tree_view_set_expander_column (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none,nullable*/);
// void gtk_tree_view_set_expander_column (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none,nullable*/);
GI_INLINE_DECL void set_expander_column (Gtk::TreeViewColumn column) noexcept;
GI_INLINE_DECL void set_expander_column () noexcept;

// void gtk_tree_view_set_fixed_height_mode (GtkTreeView* tree_view /*none*/, gboolean enable);
// void gtk_tree_view_set_fixed_height_mode (::GtkTreeView* tree_view /*none*/, gboolean enable);
GI_INLINE_DECL void set_fixed_height_mode (gboolean enable) noexcept;

// void gtk_tree_view_set_grid_lines (GtkTreeView* tree_view /*none*/, GtkTreeViewGridLines grid_lines);
// void gtk_tree_view_set_grid_lines (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewGridLines grid_lines);
GI_INLINE_DECL void set_grid_lines (Gtk::TreeViewGridLines grid_lines) noexcept;

// void gtk_tree_view_set_headers_clickable (GtkTreeView* tree_view /*none*/, gboolean setting);
// void gtk_tree_view_set_headers_clickable (::GtkTreeView* tree_view /*none*/, gboolean setting);
GI_INLINE_DECL void set_headers_clickable (gboolean setting) noexcept;

// void gtk_tree_view_set_headers_visible (GtkTreeView* tree_view /*none*/, gboolean headers_visible);
// void gtk_tree_view_set_headers_visible (::GtkTreeView* tree_view /*none*/, gboolean headers_visible);
GI_INLINE_DECL void set_headers_visible (gboolean headers_visible) noexcept;

// void gtk_tree_view_set_hover_expand (GtkTreeView* tree_view /*none*/, gboolean expand);
// void gtk_tree_view_set_hover_expand (::GtkTreeView* tree_view /*none*/, gboolean expand);
GI_INLINE_DECL void set_hover_expand (gboolean expand) noexcept;

// void gtk_tree_view_set_hover_selection (GtkTreeView* tree_view /*none*/, gboolean hover);
// void gtk_tree_view_set_hover_selection (::GtkTreeView* tree_view /*none*/, gboolean hover);
GI_INLINE_DECL void set_hover_selection (gboolean hover) noexcept;

// void gtk_tree_view_set_level_indentation (GtkTreeView* tree_view /*none*/, int indentation);
// void gtk_tree_view_set_level_indentation (::GtkTreeView* tree_view /*none*/, gint indentation);
GI_INLINE_DECL void set_level_indentation (gint indentation) noexcept;

// void gtk_tree_view_set_model (GtkTreeView* tree_view /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_tree_view_set_model (::GtkTreeView* tree_view /*none*/, ::GtkTreeModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_tree_view_set_reorderable (GtkTreeView* tree_view /*none*/, gboolean reorderable);
// void gtk_tree_view_set_reorderable (::GtkTreeView* tree_view /*none*/, gboolean reorderable);
GI_INLINE_DECL void set_reorderable (gboolean reorderable) noexcept;

// void gtk_tree_view_set_row_separator_func (GtkTreeView* tree_view /*none*/, GtkTreeViewRowSeparatorFunc func /*none,nullable*/, gpointer data, GDestroyNotify destroy /*none,nullable*/);
// void gtk_tree_view_set_row_separator_func (::GtkTreeView* tree_view /*none*/, Gtk::TreeViewRowSeparatorFunc::cfunction_type func /*none,nullable*/, void* data, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
GI_INLINE_DECL void set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept;

// void gtk_tree_view_set_rubber_banding (GtkTreeView* tree_view /*none*/, gboolean enable);
// void gtk_tree_view_set_rubber_banding (::GtkTreeView* tree_view /*none*/, gboolean enable);
GI_INLINE_DECL void set_rubber_banding (gboolean enable) noexcept;

// void gtk_tree_view_set_search_column (GtkTreeView* tree_view /*none*/, int column);
// void gtk_tree_view_set_search_column (::GtkTreeView* tree_view /*none*/, gint column);
GI_INLINE_DECL void set_search_column (gint column) noexcept;

// void gtk_tree_view_set_search_entry (GtkTreeView* tree_view /*none*/, GtkEditable* entry /*none,nullable*/);
// void gtk_tree_view_set_search_entry (::GtkTreeView* tree_view /*none*/, ::GtkEditable* entry /*none,nullable*/);
GI_INLINE_DECL void set_search_entry (Gtk::Editable entry) noexcept;
GI_INLINE_DECL void set_search_entry () noexcept;

// void gtk_tree_view_set_search_equal_func (GtkTreeView* tree_view /*none*/, GtkTreeViewSearchEqualFunc search_equal_func /*none*/, gpointer search_user_data, GDestroyNotify search_destroy /*none,nullable*/);
// void gtk_tree_view_set_search_equal_func (::GtkTreeView* tree_view /*none*/, Gtk::TreeViewSearchEqualFunc::cfunction_type search_equal_func /*none*/, void* search_user_data, GLib::DestroyNotify::cfunction_type search_destroy /*none,nullable*/);
GI_INLINE_DECL void set_search_equal_func (Gtk::TreeViewSearchEqualFunc search_equal_func) noexcept;

// void gtk_tree_view_set_show_expanders (GtkTreeView* tree_view /*none*/, gboolean enabled);
// void gtk_tree_view_set_show_expanders (::GtkTreeView* tree_view /*none*/, gboolean enabled);
GI_INLINE_DECL void set_show_expanders (gboolean enabled) noexcept;

// void gtk_tree_view_set_tooltip_cell (GtkTreeView* tree_view /*none*/, GtkTooltip* tooltip /*none*/, GtkTreePath* path /*none,nullable*/, GtkTreeViewColumn* column /*none,nullable*/, GtkCellRenderer* cell /*none,nullable*/);
// void gtk_tree_view_set_tooltip_cell (::GtkTreeView* tree_view /*none*/, ::GtkTooltip* tooltip /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkTreeViewColumn* column /*none,nullable*/, ::GtkCellRenderer* cell /*none,nullable*/);
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path, Gtk::TreeViewColumn column, Gtk::CellRenderer cell) noexcept;
GI_INLINE_DECL void set_tooltip_cell (Gtk::Tooltip tooltip) noexcept;

// void gtk_tree_view_set_tooltip_column (GtkTreeView* tree_view /*none*/, int column);
// void gtk_tree_view_set_tooltip_column (::GtkTreeView* tree_view /*none*/, gint column);
GI_INLINE_DECL void set_tooltip_column (gint column) noexcept;

// void gtk_tree_view_set_tooltip_row (GtkTreeView* tree_view /*none*/, GtkTooltip* tooltip /*none*/, GtkTreePath* path /*none*/);
// void gtk_tree_view_set_tooltip_row (::GtkTreeView* tree_view /*none*/, ::GtkTooltip* tooltip /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void set_tooltip_row (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path) noexcept;

// void gtk_tree_view_unset_rows_drag_dest (GtkTreeView* tree_view /*none*/);
// void gtk_tree_view_unset_rows_drag_dest (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void unset_rows_drag_dest () noexcept;

// void gtk_tree_view_unset_rows_drag_source (GtkTreeView* tree_view /*none*/);
// void gtk_tree_view_unset_rows_drag_source (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void unset_rows_drag_source () noexcept;

gi::property_proxy<bool, base::TreeViewBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::TreeViewBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "activate-on-single-click"); }

gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> property_enable_grid_lines()
{ return gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> (*this, "enable-grid-lines"); }
const gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> property_enable_grid_lines() const
{ return gi::property_proxy<Gtk::TreeViewGridLines, base::TreeViewBase> (*this, "enable-grid-lines"); }

gi::property_proxy<bool, base::TreeViewBase> property_enable_search()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-search"); }
const gi::property_proxy<bool, base::TreeViewBase> property_enable_search() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-search"); }

gi::property_proxy<bool, base::TreeViewBase> property_enable_tree_lines()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-tree-lines"); }
const gi::property_proxy<bool, base::TreeViewBase> property_enable_tree_lines() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "enable-tree-lines"); }

gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> property_expander_column()
{ return gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> (*this, "expander-column"); }
const gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> property_expander_column() const
{ return gi::property_proxy<Gtk::TreeViewColumn, base::TreeViewBase> (*this, "expander-column"); }

gi::property_proxy<bool, base::TreeViewBase> property_fixed_height_mode()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "fixed-height-mode"); }
const gi::property_proxy<bool, base::TreeViewBase> property_fixed_height_mode() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "fixed-height-mode"); }

gi::property_proxy<bool, base::TreeViewBase> property_headers_clickable()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-clickable"); }
const gi::property_proxy<bool, base::TreeViewBase> property_headers_clickable() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-clickable"); }

gi::property_proxy<bool, base::TreeViewBase> property_headers_visible()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-visible"); }
const gi::property_proxy<bool, base::TreeViewBase> property_headers_visible() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "headers-visible"); }

gi::property_proxy<bool, base::TreeViewBase> property_hover_expand()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-expand"); }
const gi::property_proxy<bool, base::TreeViewBase> property_hover_expand() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-expand"); }

gi::property_proxy<bool, base::TreeViewBase> property_hover_selection()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-selection"); }
const gi::property_proxy<bool, base::TreeViewBase> property_hover_selection() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "hover-selection"); }

gi::property_proxy<gint, base::TreeViewBase> property_level_indentation()
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "level-indentation"); }
const gi::property_proxy<gint, base::TreeViewBase> property_level_indentation() const
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "level-indentation"); }

gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::TreeViewBase> (*this, "model"); }

gi::property_proxy<bool, base::TreeViewBase> property_reorderable()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::TreeViewBase> property_reorderable() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "reorderable"); }

gi::property_proxy<bool, base::TreeViewBase> property_rubber_banding()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "rubber-banding"); }
const gi::property_proxy<bool, base::TreeViewBase> property_rubber_banding() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "rubber-banding"); }

gi::property_proxy<gint, base::TreeViewBase> property_search_column()
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "search-column"); }
const gi::property_proxy<gint, base::TreeViewBase> property_search_column() const
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "search-column"); }

gi::property_proxy<bool, base::TreeViewBase> property_show_expanders()
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "show-expanders"); }
const gi::property_proxy<bool, base::TreeViewBase> property_show_expanders() const
{ return gi::property_proxy<bool, base::TreeViewBase> (*this, "show-expanders"); }

gi::property_proxy<gint, base::TreeViewBase> property_tooltip_column()
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "tooltip-column"); }
const gi::property_proxy<gint, base::TreeViewBase> property_tooltip_column() const
{ return gi::property_proxy<gint, base::TreeViewBase> (*this, "tooltip-column"); }

// (signal) void columns-changed ();
// (signal) void columns-changed ();
gi::signal_proxy<void(Gtk::TreeView)> signal_columns_changed()
{ return gi::signal_proxy<void(Gtk::TreeView)> (*this, "columns-changed"); }

// (signal) void cursor-changed ();
// (signal) void cursor-changed ();
gi::signal_proxy<void(Gtk::TreeView)> signal_cursor_changed()
{ return gi::signal_proxy<void(Gtk::TreeView)> (*this, "cursor-changed"); }

// (signal) gboolean expand-collapse-cursor-row (gboolean object, gboolean p0, gboolean p1);
// (signal) gboolean expand-collapse-cursor-row (gboolean object, gboolean p0, gboolean p1);
gi::signal_proxy<bool(Gtk::TreeView, gboolean object, gboolean p0, gboolean p1)> signal_expand_collapse_cursor_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, gboolean object, gboolean p0, gboolean p1)> (*this, "expand-collapse-cursor-row"); }

// (signal) gboolean move-cursor ( step, gint direction, gboolean extend, gboolean modify);
// (signal) gboolean move-cursor (::GtkMovementStep step, gint direction, gboolean extend, gboolean modify);
gi::signal_proxy<bool(Gtk::TreeView, Gtk::MovementStep step, gint direction, gboolean extend, gboolean modify)> signal_move_cursor()
{ return gi::signal_proxy<bool(Gtk::TreeView, Gtk::MovementStep step, gint direction, gboolean extend, gboolean modify)> (*this, "move-cursor"); }

// (signal) void row-activated ( path /*none*/,  column /*none,nullable*/);
// (signal) void row-activated (::GtkTreePath* path /*none*/, ::GtkTreeViewColumn* column /*none,nullable*/);
gi::signal_proxy<void(Gtk::TreeView, Gtk::TreePath_Ref path, Gtk::TreeViewColumn column)> signal_row_activated()
{ return gi::signal_proxy<void(Gtk::TreeView, Gtk::TreePath_Ref path, Gtk::TreeViewColumn column)> (*this, "row-activated"); }

// (signal) void row-collapsed ( iter /*none*/,  path /*none*/);
// (signal) void row-collapsed (::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> signal_row_collapsed()
{ return gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> (*this, "row-collapsed"); }

// (signal) void row-expanded ( iter /*none*/,  path /*none*/);
// (signal) void row-expanded (::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> signal_row_expanded()
{ return gi::signal_proxy<void(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> (*this, "row-expanded"); }

// (signal) gboolean select-all ();
// (signal) gboolean select-all ();
gi::signal_proxy<bool(Gtk::TreeView)> signal_select_all()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "select-all"); }

// (signal) gboolean select-cursor-parent ();
// (signal) gboolean select-cursor-parent ();
gi::signal_proxy<bool(Gtk::TreeView)> signal_select_cursor_parent()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "select-cursor-parent"); }

// (signal) gboolean select-cursor-row (gboolean object);
// (signal) gboolean select-cursor-row (gboolean object);
gi::signal_proxy<bool(Gtk::TreeView, gboolean object)> signal_select_cursor_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, gboolean object)> (*this, "select-cursor-row"); }

// (signal) gboolean start-interactive-search ();
// (signal) gboolean start-interactive-search ();
gi::signal_proxy<bool(Gtk::TreeView)> signal_start_interactive_search()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "start-interactive-search"); }

// (signal) gboolean test-collapse-row ( iter /*none*/,  path /*none*/);
// (signal) gboolean test-collapse-row (::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> signal_test_collapse_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> (*this, "test-collapse-row"); }

// (signal) gboolean test-expand-row ( iter /*none*/,  path /*none*/);
// (signal) gboolean test-expand-row (::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> signal_test_expand_row()
{ return gi::signal_proxy<bool(Gtk::TreeView, Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path)> (*this, "test-expand-row"); }

// (signal) gboolean toggle-cursor-row ();
// (signal) gboolean toggle-cursor-row ();
gi::signal_proxy<bool(Gtk::TreeView)> signal_toggle_cursor_row()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "toggle-cursor-row"); }

// (signal) gboolean unselect-all ();
// (signal) gboolean unselect-all ();
gi::signal_proxy<bool(Gtk::TreeView)> signal_unselect_all()
{ return gi::signal_proxy<bool(Gtk::TreeView)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeview_extra_def.hpp>)
#include <gtk/treeview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeview_extra.hpp>)
#include <gtk/treeview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeView : public GI_GTK_TREEVIEW_BASE
{ typedef GI_GTK_TREEVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeView>
{ typedef Gtk::TreeView type; }; 

} // namespace repository

} // namespace gi

#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeViewClassDef
{
typedef TreeViewClassDef self;
public:
typedef Gtk::TreeView instance_type;
typedef ::GtkTreeViewClass class_type;

using GI_MEMBER_CHECK_CONFLICT(columns_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(cursor_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(expand_collapse_cursor_row) = self;
using GI_MEMBER_CHECK_CONFLICT(move_cursor) = self;
using GI_MEMBER_CHECK_CONFLICT(row_activated) = self;
using GI_MEMBER_CHECK_CONFLICT(row_collapsed) = self;
using GI_MEMBER_CHECK_CONFLICT(row_expanded) = self;
using GI_MEMBER_CHECK_CONFLICT(select_all) = self;
using GI_MEMBER_CHECK_CONFLICT(select_cursor_parent) = self;
using GI_MEMBER_CHECK_CONFLICT(select_cursor_row) = self;
using GI_MEMBER_CHECK_CONFLICT(start_interactive_search) = self;
using GI_MEMBER_CHECK_CONFLICT(test_collapse_row) = self;
using GI_MEMBER_CHECK_CONFLICT(test_expand_row) = self;
using GI_MEMBER_CHECK_CONFLICT(toggle_cursor_row) = self;
using GI_MEMBER_CHECK_CONFLICT(unselect_all) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TreeViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TreeView::columns_changed (GtkTreeView* tree_view /*none*/);
// void TreeView::columns_changed (::GtkTreeView* tree_view /*none*/);
virtual void columns_changed_ () noexcept = 0;

// void TreeView::cursor_changed (GtkTreeView* tree_view /*none*/);
// void TreeView::cursor_changed (::GtkTreeView* tree_view /*none*/);
virtual void cursor_changed_ () noexcept = 0;

// gboolean TreeView::expand_collapse_cursor_row (GtkTreeView* tree_view /*none*/, gboolean logical, gboolean expand, gboolean open_all);
// gboolean TreeView::expand_collapse_cursor_row (::GtkTreeView* tree_view /*none*/, gboolean logical, gboolean expand, gboolean open_all);
virtual bool expand_collapse_cursor_row_ (gboolean logical, gboolean expand, gboolean open_all) noexcept = 0;

// gboolean TreeView::move_cursor (GtkTreeView* tree_view /*none*/, GtkMovementStep step, int count, gboolean extend, gboolean modify);
// gboolean TreeView::move_cursor (::GtkTreeView* tree_view /*none*/, ::GtkMovementStep step, gint count, gboolean extend, gboolean modify);
virtual bool move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend, gboolean modify) noexcept = 0;

// void TreeView::row_activated (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, GtkTreeViewColumn* column /*none,nullable*/);
// void TreeView::row_activated (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeViewColumn* column /*none,nullable*/);
virtual void row_activated_ (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column) noexcept = 0;

// void TreeView::row_collapsed (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// void TreeView::row_collapsed (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
virtual void row_collapsed_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept = 0;

// void TreeView::row_expanded (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// void TreeView::row_expanded (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
virtual void row_expanded_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept = 0;

// gboolean TreeView::select_all (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::select_all (::GtkTreeView* tree_view /*none*/);
virtual bool select_all_ () noexcept = 0;

// gboolean TreeView::select_cursor_parent (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::select_cursor_parent (::GtkTreeView* tree_view /*none*/);
virtual bool select_cursor_parent_ () noexcept = 0;

// gboolean TreeView::select_cursor_row (GtkTreeView* tree_view /*none*/, gboolean start_editing);
// gboolean TreeView::select_cursor_row (::GtkTreeView* tree_view /*none*/, gboolean start_editing);
virtual bool select_cursor_row_ (gboolean start_editing) noexcept = 0;

// gboolean TreeView::start_interactive_search (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::start_interactive_search (::GtkTreeView* tree_view /*none*/);
virtual bool start_interactive_search_ () noexcept = 0;

// gboolean TreeView::test_collapse_row (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeView::test_collapse_row (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
virtual bool test_collapse_row_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept = 0;

// gboolean TreeView::test_expand_row (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeView::test_expand_row (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
virtual bool test_expand_row_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept = 0;

// gboolean TreeView::toggle_cursor_row (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::toggle_cursor_row (::GtkTreeView* tree_view /*none*/);
virtual bool toggle_cursor_row_ () noexcept = 0;

// gboolean TreeView::unselect_all (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::unselect_all (::GtkTreeView* tree_view /*none*/);
virtual bool unselect_all_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TreeViewClass: public detail::ClassTemplate<Gtk::impl::internal::TreeViewClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
friend class internal::TreeViewClassDef;
typedef TreeViewClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeViewClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;


// void TreeView::columns_changed (GtkTreeView* tree_view /*none*/);
// void TreeView::columns_changed (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void columns_changed_ () noexcept override;

// void TreeView::cursor_changed (GtkTreeView* tree_view /*none*/);
// void TreeView::cursor_changed (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL void cursor_changed_ () noexcept override;

// gboolean TreeView::expand_collapse_cursor_row (GtkTreeView* tree_view /*none*/, gboolean logical, gboolean expand, gboolean open_all);
// gboolean TreeView::expand_collapse_cursor_row (::GtkTreeView* tree_view /*none*/, gboolean logical, gboolean expand, gboolean open_all);
GI_INLINE_DECL bool expand_collapse_cursor_row_ (gboolean logical, gboolean expand, gboolean open_all) noexcept override;

// gboolean TreeView::move_cursor (GtkTreeView* tree_view /*none*/, GtkMovementStep step, int count, gboolean extend, gboolean modify);
// gboolean TreeView::move_cursor (::GtkTreeView* tree_view /*none*/, ::GtkMovementStep step, gint count, gboolean extend, gboolean modify);
GI_INLINE_DECL bool move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend, gboolean modify) noexcept override;

// void TreeView::row_activated (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, GtkTreeViewColumn* column /*none,nullable*/);
// void TreeView::row_activated (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeViewColumn* column /*none,nullable*/);
GI_INLINE_DECL void row_activated_ (Gtk::TreePath_Ref path, Gtk::TreeViewColumn column) noexcept override;

// void TreeView::row_collapsed (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// void TreeView::row_collapsed (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void row_collapsed_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept override;

// void TreeView::row_expanded (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// void TreeView::row_expanded (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL void row_expanded_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept override;

// gboolean TreeView::select_all (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::select_all (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool select_all_ () noexcept override;

// gboolean TreeView::select_cursor_parent (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::select_cursor_parent (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool select_cursor_parent_ () noexcept override;

// gboolean TreeView::select_cursor_row (GtkTreeView* tree_view /*none*/, gboolean start_editing);
// gboolean TreeView::select_cursor_row (::GtkTreeView* tree_view /*none*/, gboolean start_editing);
GI_INLINE_DECL bool select_cursor_row_ (gboolean start_editing) noexcept override;

// gboolean TreeView::start_interactive_search (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::start_interactive_search (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool start_interactive_search_ () noexcept override;

// gboolean TreeView::test_collapse_row (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeView::test_collapse_row (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool test_collapse_row_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept override;

// gboolean TreeView::test_expand_row (GtkTreeView* tree_view /*none*/, GtkTreeIter* iter /*none*/, GtkTreePath* path /*none*/);
// gboolean TreeView::test_expand_row (::GtkTreeView* tree_view /*none*/, ::GtkTreeIter* iter /*none*/, ::GtkTreePath* path /*none*/);
GI_INLINE_DECL bool test_expand_row_ (Gtk::TreeIter_Ref iter, Gtk::TreePath_Ref path) noexcept override;

// gboolean TreeView::toggle_cursor_row (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::toggle_cursor_row (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool toggle_cursor_row_ () noexcept override;

// gboolean TreeView::unselect_all (GtkTreeView* tree_view /*none*/);
// gboolean TreeView::unselect_all (::GtkTreeView* tree_view /*none*/);
GI_INLINE_DECL bool unselect_all_ () noexcept override;


};


struct TreeViewClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TreeViewClass, columns_changed)
  GI_MEMBER_DEFINE(TreeViewClass, cursor_changed)
  GI_MEMBER_DEFINE(TreeViewClass, expand_collapse_cursor_row)
  GI_MEMBER_DEFINE(TreeViewClass, move_cursor)
  GI_MEMBER_DEFINE(TreeViewClass, row_activated)
  GI_MEMBER_DEFINE(TreeViewClass, row_collapsed)
  GI_MEMBER_DEFINE(TreeViewClass, row_expanded)
  GI_MEMBER_DEFINE(TreeViewClass, select_all)
  GI_MEMBER_DEFINE(TreeViewClass, select_cursor_parent)
  GI_MEMBER_DEFINE(TreeViewClass, select_cursor_row)
  GI_MEMBER_DEFINE(TreeViewClass, start_interactive_search)
  GI_MEMBER_DEFINE(TreeViewClass, test_collapse_row)
  GI_MEMBER_DEFINE(TreeViewClass, test_expand_row)
  GI_MEMBER_DEFINE(TreeViewClass, toggle_cursor_row)
  GI_MEMBER_DEFINE(TreeViewClass, unselect_all)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, columns_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, cursor_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, expand_collapse_cursor_row),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, move_cursor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_activated),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_collapsed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, row_expanded),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, select_all),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, select_cursor_parent),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, select_cursor_row),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, start_interactive_search),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, test_collapse_row),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, test_expand_row),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, toggle_cursor_row),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unselect_all)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TreeViewImpl = detail::ObjectImpl<TreeView, internal::TreeViewClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
