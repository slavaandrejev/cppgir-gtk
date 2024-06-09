// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOX_HPP_
#define _GI_GTK_LISTBOX_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class ListBoxRow;
class Widget;

class ListBox;

namespace base {


#define GI_GTK_LISTBOX_BASE base::ListBoxBase
class ListBoxBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkListBox BaseObjectType;

ListBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_box_get_type(); } 

// GtkWidget* /*none*/ gtk_list_box_new ();
// ::GtkListBox* /*none*/ gtk_list_box_new ();
static GI_INLINE_DECL Gtk::ListBox new_ () noexcept;

// void gtk_list_box_append (GtkListBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_list_box_append (::GtkListBox* box /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void append (Gtk::Widget child) noexcept;

// void gtk_list_box_bind_model (GtkListBox* box /*none*/, GListModel* model /*none,nullable*/, GtkListBoxCreateWidgetFunc create_widget_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void gtk_list_box_bind_model (::GtkListBox* box /*none*/, ::GListModel* model /*none,nullable*/, Gtk::ListBoxCreateWidgetFunc::cfunction_type create_widget_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
GI_INLINE_DECL void bind_model (Gio::ListModel model, Gtk::ListBoxCreateWidgetFunc create_widget_func) noexcept;
GI_INLINE_DECL void bind_model (Gtk::ListBoxCreateWidgetFunc create_widget_func) noexcept;

// void gtk_list_box_drag_highlight_row (GtkListBox* box /*none*/, GtkListBoxRow* row /*none*/);
// void gtk_list_box_drag_highlight_row (::GtkListBox* box /*none*/, ::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL void drag_highlight_row (Gtk::ListBoxRow row) noexcept;

// void gtk_list_box_drag_unhighlight_row (GtkListBox* box /*none*/);
// void gtk_list_box_drag_unhighlight_row (::GtkListBox* box /*none*/);
GI_INLINE_DECL void drag_unhighlight_row () noexcept;

// gboolean gtk_list_box_get_activate_on_single_click (GtkListBox* box /*none*/);
// gboolean gtk_list_box_get_activate_on_single_click (::GtkListBox* box /*none*/);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// GtkAdjustment* /*none,nullable*/ gtk_list_box_get_adjustment (GtkListBox* box /*none*/);
// ::GtkAdjustment* /*none,nullable*/ gtk_list_box_get_adjustment (::GtkListBox* box /*none*/);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// GtkListBoxRow* /*none,nullable*/ gtk_list_box_get_row_at_index (GtkListBox* box /*none*/, int index_);
// ::GtkListBoxRow* /*none,nullable*/ gtk_list_box_get_row_at_index (::GtkListBox* box /*none*/, gint index_);
GI_INLINE_DECL Gtk::ListBoxRow get_row_at_index (gint index_) noexcept;

// GtkListBoxRow* /*none,nullable*/ gtk_list_box_get_row_at_y (GtkListBox* box /*none*/, int y);
// ::GtkListBoxRow* /*none,nullable*/ gtk_list_box_get_row_at_y (::GtkListBox* box /*none*/, gint y);
GI_INLINE_DECL Gtk::ListBoxRow get_row_at_y (gint y) noexcept;

// GtkListBoxRow* /*none,nullable*/ gtk_list_box_get_selected_row (GtkListBox* box /*none*/);
// ::GtkListBoxRow* /*none,nullable*/ gtk_list_box_get_selected_row (::GtkListBox* box /*none*/);
GI_INLINE_DECL Gtk::ListBoxRow get_selected_row () noexcept;

// GList* /*container*/ gtk_list_box_get_selected_rows (GtkListBox* box /*none*/);
// ::GList* /*container*/ gtk_list_box_get_selected_rows (::GtkListBox* box /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkListBoxRow*, gi::transfer_container_t> get_selected_rows () noexcept;

// GtkSelectionMode gtk_list_box_get_selection_mode (GtkListBox* box /*none*/);
// ::GtkSelectionMode gtk_list_box_get_selection_mode (::GtkListBox* box /*none*/);
GI_INLINE_DECL Gtk::SelectionMode get_selection_mode () noexcept;

// gboolean gtk_list_box_get_show_separators (GtkListBox* box /*none*/);
// gboolean gtk_list_box_get_show_separators (::GtkListBox* box /*none*/);
GI_INLINE_DECL bool get_show_separators () noexcept;

// void gtk_list_box_insert (GtkListBox* box /*none*/, GtkWidget* child /*none*/, int position);
// void gtk_list_box_insert (::GtkListBox* box /*none*/, ::GtkWidget* child /*none*/, gint position);
GI_INLINE_DECL void insert (Gtk::Widget child, gint position) noexcept;

// void gtk_list_box_invalidate_filter (GtkListBox* box /*none*/);
// void gtk_list_box_invalidate_filter (::GtkListBox* box /*none*/);
GI_INLINE_DECL void invalidate_filter () noexcept;

// void gtk_list_box_invalidate_headers (GtkListBox* box /*none*/);
// void gtk_list_box_invalidate_headers (::GtkListBox* box /*none*/);
GI_INLINE_DECL void invalidate_headers () noexcept;

// void gtk_list_box_invalidate_sort (GtkListBox* box /*none*/);
// void gtk_list_box_invalidate_sort (::GtkListBox* box /*none*/);
GI_INLINE_DECL void invalidate_sort () noexcept;

// void gtk_list_box_prepend (GtkListBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_list_box_prepend (::GtkListBox* box /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void gtk_list_box_remove (GtkListBox* box /*none*/, GtkWidget* child /*none*/);
// void gtk_list_box_remove (::GtkListBox* box /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void gtk_list_box_remove_all (GtkListBox* box /*none*/);
// void gtk_list_box_remove_all (::GtkListBox* box /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void gtk_list_box_select_all (GtkListBox* box /*none*/);
// void gtk_list_box_select_all (::GtkListBox* box /*none*/);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_list_box_select_row (GtkListBox* box /*none*/, GtkListBoxRow* row /*none,nullable*/);
// void gtk_list_box_select_row (::GtkListBox* box /*none*/, ::GtkListBoxRow* row /*none,nullable*/);
GI_INLINE_DECL void select_row (Gtk::ListBoxRow row) noexcept;
GI_INLINE_DECL void select_row () noexcept;

// void gtk_list_box_selected_foreach (GtkListBox* box /*none*/, GtkListBoxForeachFunc func /*none*/, gpointer data);
// void gtk_list_box_selected_foreach (::GtkListBox* box /*none*/, Gtk::ListBoxForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::ListBoxForeachFunc func) noexcept;

// void gtk_list_box_set_activate_on_single_click (GtkListBox* box /*none*/, gboolean single);
// void gtk_list_box_set_activate_on_single_click (::GtkListBox* box /*none*/, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_list_box_set_adjustment (GtkListBox* box /*none*/, GtkAdjustment* adjustment /*none,nullable*/);
// void gtk_list_box_set_adjustment (::GtkListBox* box /*none*/, ::GtkAdjustment* adjustment /*none,nullable*/);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;
GI_INLINE_DECL void set_adjustment () noexcept;

// void gtk_list_box_set_filter_func (GtkListBox* box /*none*/, GtkListBoxFilterFunc filter_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_list_box_set_filter_func (::GtkListBox* box /*none*/, Gtk::ListBoxFilterFunc::cfunction_type filter_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_filter_func (Gtk::ListBoxFilterFunc filter_func) noexcept;

// void gtk_list_box_set_header_func (GtkListBox* box /*none*/, GtkListBoxUpdateHeaderFunc update_header /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_list_box_set_header_func (::GtkListBox* box /*none*/, Gtk::ListBoxUpdateHeaderFunc::cfunction_type update_header /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_header_func (Gtk::ListBoxUpdateHeaderFunc update_header) noexcept;

// void gtk_list_box_set_placeholder (GtkListBox* box /*none*/, GtkWidget* placeholder /*none,nullable*/);
// void gtk_list_box_set_placeholder (::GtkListBox* box /*none*/, ::GtkWidget* placeholder /*none,nullable*/);
GI_INLINE_DECL void set_placeholder (Gtk::Widget placeholder) noexcept;
GI_INLINE_DECL void set_placeholder () noexcept;

// void gtk_list_box_set_selection_mode (GtkListBox* box /*none*/, GtkSelectionMode mode);
// void gtk_list_box_set_selection_mode (::GtkListBox* box /*none*/, ::GtkSelectionMode mode);
GI_INLINE_DECL void set_selection_mode (Gtk::SelectionMode mode) noexcept;

// void gtk_list_box_set_show_separators (GtkListBox* box /*none*/, gboolean show_separators);
// void gtk_list_box_set_show_separators (::GtkListBox* box /*none*/, gboolean show_separators);
GI_INLINE_DECL void set_show_separators (gboolean show_separators) noexcept;

// void gtk_list_box_set_sort_func (GtkListBox* box /*none*/, GtkListBoxSortFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_list_box_set_sort_func (::GtkListBox* box /*none*/, Gtk::ListBoxSortFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_sort_func (Gtk::ListBoxSortFunc sort_func) noexcept;

// void gtk_list_box_unselect_all (GtkListBox* box /*none*/);
// void gtk_list_box_unselect_all (::GtkListBox* box /*none*/);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_list_box_unselect_row (GtkListBox* box /*none*/, GtkListBoxRow* row /*none*/);
// void gtk_list_box_unselect_row (::GtkListBox* box /*none*/, ::GtkListBoxRow* row /*none*/);
GI_INLINE_DECL void unselect_row (Gtk::ListBoxRow row) noexcept;

gi::property_proxy<bool, base::ListBoxBase> property_accept_unpaired_release()
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "accept-unpaired-release"); }
const gi::property_proxy<bool, base::ListBoxBase> property_accept_unpaired_release() const
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "accept-unpaired-release"); }

gi::property_proxy<bool, base::ListBoxBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::ListBoxBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "activate-on-single-click"); }

gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> property_selection_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> (*this, "selection-mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> property_selection_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::ListBoxBase> (*this, "selection-mode"); }

gi::property_proxy<bool, base::ListBoxBase> property_show_separators()
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "show-separators"); }
const gi::property_proxy<bool, base::ListBoxBase> property_show_separators() const
{ return gi::property_proxy<bool, base::ListBoxBase> (*this, "show-separators"); }

// (signal) void activate-cursor-row ();
// (signal) void activate-cursor-row ();
gi::signal_proxy<void(Gtk::ListBox)> signal_activate_cursor_row()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "activate-cursor-row"); }

// (signal) void move-cursor ( object, gint p0, gboolean p1, gboolean p2);
// (signal) void move-cursor (::GtkMovementStep object, gint p0, gboolean p1, gboolean p2);
gi::signal_proxy<void(Gtk::ListBox, Gtk::MovementStep object, gint p0, gboolean p1, gboolean p2)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::ListBox, Gtk::MovementStep object, gint p0, gboolean p1, gboolean p2)> (*this, "move-cursor"); }

// (signal) void row-activated ( row /*none*/);
// (signal) void row-activated (::GtkListBoxRow* row /*none*/);
gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> signal_row_activated()
{ return gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> (*this, "row-activated"); }

// (signal) void row-selected ( row /*none,nullable*/);
// (signal) void row-selected (::GtkListBoxRow* row /*none,nullable*/);
gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> signal_row_selected()
{ return gi::signal_proxy<void(Gtk::ListBox, Gtk::ListBoxRow row)> (*this, "row-selected"); }

// (signal) void select-all ();
// (signal) void select-all ();
gi::signal_proxy<void(Gtk::ListBox)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "select-all"); }

// (signal) void selected-rows-changed ();
// (signal) void selected-rows-changed ();
gi::signal_proxy<void(Gtk::ListBox)> signal_selected_rows_changed()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "selected-rows-changed"); }

// (signal) void toggle-cursor-row ();
// (signal) void toggle-cursor-row ();
gi::signal_proxy<void(Gtk::ListBox)> signal_toggle_cursor_row()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "toggle-cursor-row"); }

// (signal) void unselect-all ();
// (signal) void unselect-all ();
gi::signal_proxy<void(Gtk::ListBox)> signal_unselect_all()
{ return gi::signal_proxy<void(Gtk::ListBox)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listbox_extra_def.hpp>)
#include <gtk/listbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listbox_extra.hpp>)
#include <gtk/listbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListBox : public GI_GTK_LISTBOX_BASE
{ typedef GI_GTK_LISTBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListBox>
{ typedef Gtk::ListBox type; }; 

} // namespace repository

} // namespace gi

#endif
