// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOX_HPP_
#define _GI_GTK_FLOWBOX_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class FlowBoxChild;
class Orientable;
class Widget;

class FlowBox;

namespace base {


#define GI_GTK_FLOWBOX_BASE base::FlowBoxBase
class FlowBoxBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFlowBox BaseObjectType;

FlowBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_flow_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_flow_box_new ();
// ::GtkFlowBox* /*none*/ gtk_flow_box_new ();
static GI_INLINE_DECL Gtk::FlowBox new_ () noexcept;

// void gtk_flow_box_append (GtkFlowBox* self /*none*/, GtkWidget* child /*none*/);
// void gtk_flow_box_append (::GtkFlowBox* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void append (Gtk::Widget child) noexcept;

// void gtk_flow_box_bind_model (GtkFlowBox* box /*none*/, GListModel* model /*none,nullable*/, GtkFlowBoxCreateWidgetFunc create_widget_func /*none*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void gtk_flow_box_bind_model (::GtkFlowBox* box /*none*/, ::GListModel* model /*none,nullable*/, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
GI_INLINE_DECL void bind_model (Gio::ListModel model, Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept;
GI_INLINE_DECL void bind_model (Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept;

// gboolean gtk_flow_box_get_activate_on_single_click (GtkFlowBox* box /*none*/);
// gboolean gtk_flow_box_get_activate_on_single_click (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL bool get_activate_on_single_click () noexcept;

// GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_index (GtkFlowBox* box /*none*/, int idx);
// ::GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_index (::GtkFlowBox* box /*none*/, gint idx);
GI_INLINE_DECL Gtk::FlowBoxChild get_child_at_index (gint idx) noexcept;

// GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_pos (GtkFlowBox* box /*none*/, int x, int y);
// ::GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_pos (::GtkFlowBox* box /*none*/, gint x, gint y);
GI_INLINE_DECL Gtk::FlowBoxChild get_child_at_pos (gint x, gint y) noexcept;

// guint gtk_flow_box_get_column_spacing (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_column_spacing (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL guint get_column_spacing () noexcept;

// gboolean gtk_flow_box_get_homogeneous (GtkFlowBox* box /*none*/);
// gboolean gtk_flow_box_get_homogeneous (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// guint gtk_flow_box_get_max_children_per_line (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_max_children_per_line (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL guint get_max_children_per_line () noexcept;

// guint gtk_flow_box_get_min_children_per_line (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_min_children_per_line (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL guint get_min_children_per_line () noexcept;

// guint gtk_flow_box_get_row_spacing (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_row_spacing (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL guint get_row_spacing () noexcept;

// GList* /*container*/ gtk_flow_box_get_selected_children (GtkFlowBox* box /*none*/);
// ::GList* /*container*/ gtk_flow_box_get_selected_children (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkFlowBoxChild*, gi::transfer_container_t> get_selected_children () noexcept;

// GtkSelectionMode gtk_flow_box_get_selection_mode (GtkFlowBox* box /*none*/);
// ::GtkSelectionMode gtk_flow_box_get_selection_mode (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL Gtk::SelectionMode get_selection_mode () noexcept;

// void gtk_flow_box_insert (GtkFlowBox* box /*none*/, GtkWidget* widget /*none*/, int position);
// void gtk_flow_box_insert (::GtkFlowBox* box /*none*/, ::GtkWidget* widget /*none*/, gint position);
GI_INLINE_DECL void insert (Gtk::Widget widget, gint position) noexcept;

// void gtk_flow_box_invalidate_filter (GtkFlowBox* box /*none*/);
// void gtk_flow_box_invalidate_filter (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL void invalidate_filter () noexcept;

// void gtk_flow_box_invalidate_sort (GtkFlowBox* box /*none*/);
// void gtk_flow_box_invalidate_sort (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL void invalidate_sort () noexcept;

// void gtk_flow_box_prepend (GtkFlowBox* self /*none*/, GtkWidget* child /*none*/);
// void gtk_flow_box_prepend (::GtkFlowBox* self /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void gtk_flow_box_remove (GtkFlowBox* box /*none*/, GtkWidget* widget /*none*/);
// void gtk_flow_box_remove (::GtkFlowBox* box /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget widget) noexcept;

// void gtk_flow_box_remove_all (GtkFlowBox* box /*none*/);
// void gtk_flow_box_remove_all (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL void remove_all () noexcept;

// void gtk_flow_box_select_all (GtkFlowBox* box /*none*/);
// void gtk_flow_box_select_all (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_flow_box_select_child (GtkFlowBox* box /*none*/, GtkFlowBoxChild* child /*none*/);
// void gtk_flow_box_select_child (::GtkFlowBox* box /*none*/, ::GtkFlowBoxChild* child /*none*/);
GI_INLINE_DECL void select_child (Gtk::FlowBoxChild child) noexcept;

// void gtk_flow_box_selected_foreach (GtkFlowBox* box /*none*/, GtkFlowBoxForeachFunc func /*none*/, gpointer data);
// void gtk_flow_box_selected_foreach (::GtkFlowBox* box /*none*/, Gtk::FlowBoxForeachFunc::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::FlowBoxForeachFunc func) noexcept;

// void gtk_flow_box_set_activate_on_single_click (GtkFlowBox* box /*none*/, gboolean single);
// void gtk_flow_box_set_activate_on_single_click (::GtkFlowBox* box /*none*/, gboolean single);
GI_INLINE_DECL void set_activate_on_single_click (gboolean single) noexcept;

// void gtk_flow_box_set_column_spacing (GtkFlowBox* box /*none*/, guint spacing);
// void gtk_flow_box_set_column_spacing (::GtkFlowBox* box /*none*/, guint spacing);
GI_INLINE_DECL void set_column_spacing (guint spacing) noexcept;

// void gtk_flow_box_set_filter_func (GtkFlowBox* box /*none*/, GtkFlowBoxFilterFunc filter_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_flow_box_set_filter_func (::GtkFlowBox* box /*none*/, Gtk::FlowBoxFilterFunc::cfunction_type filter_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_filter_func (Gtk::FlowBoxFilterFunc filter_func) noexcept;

// void gtk_flow_box_set_hadjustment (GtkFlowBox* box /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_flow_box_set_hadjustment (::GtkFlowBox* box /*none*/, ::GtkAdjustment* adjustment /*none*/);
GI_INLINE_DECL void set_hadjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_flow_box_set_homogeneous (GtkFlowBox* box /*none*/, gboolean homogeneous);
// void gtk_flow_box_set_homogeneous (::GtkFlowBox* box /*none*/, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_flow_box_set_max_children_per_line (GtkFlowBox* box /*none*/, guint n_children);
// void gtk_flow_box_set_max_children_per_line (::GtkFlowBox* box /*none*/, guint n_children);
GI_INLINE_DECL void set_max_children_per_line (guint n_children) noexcept;

// void gtk_flow_box_set_min_children_per_line (GtkFlowBox* box /*none*/, guint n_children);
// void gtk_flow_box_set_min_children_per_line (::GtkFlowBox* box /*none*/, guint n_children);
GI_INLINE_DECL void set_min_children_per_line (guint n_children) noexcept;

// void gtk_flow_box_set_row_spacing (GtkFlowBox* box /*none*/, guint spacing);
// void gtk_flow_box_set_row_spacing (::GtkFlowBox* box /*none*/, guint spacing);
GI_INLINE_DECL void set_row_spacing (guint spacing) noexcept;

// void gtk_flow_box_set_selection_mode (GtkFlowBox* box /*none*/, GtkSelectionMode mode);
// void gtk_flow_box_set_selection_mode (::GtkFlowBox* box /*none*/, ::GtkSelectionMode mode);
GI_INLINE_DECL void set_selection_mode (Gtk::SelectionMode mode) noexcept;

// void gtk_flow_box_set_sort_func (GtkFlowBox* box /*none*/, GtkFlowBoxSortFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_flow_box_set_sort_func (::GtkFlowBox* box /*none*/, Gtk::FlowBoxSortFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_sort_func (Gtk::FlowBoxSortFunc sort_func) noexcept;

// void gtk_flow_box_set_vadjustment (GtkFlowBox* box /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_flow_box_set_vadjustment (::GtkFlowBox* box /*none*/, ::GtkAdjustment* adjustment /*none*/);
GI_INLINE_DECL void set_vadjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_flow_box_unselect_all (GtkFlowBox* box /*none*/);
// void gtk_flow_box_unselect_all (::GtkFlowBox* box /*none*/);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_flow_box_unselect_child (GtkFlowBox* box /*none*/, GtkFlowBoxChild* child /*none*/);
// void gtk_flow_box_unselect_child (::GtkFlowBox* box /*none*/, ::GtkFlowBoxChild* child /*none*/);
GI_INLINE_DECL void unselect_child (Gtk::FlowBoxChild child) noexcept;

gi::property_proxy<bool, base::FlowBoxBase> property_accept_unpaired_release()
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "accept-unpaired-release"); }
const gi::property_proxy<bool, base::FlowBoxBase> property_accept_unpaired_release() const
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "accept-unpaired-release"); }

gi::property_proxy<bool, base::FlowBoxBase> property_activate_on_single_click()
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "activate-on-single-click"); }
const gi::property_proxy<bool, base::FlowBoxBase> property_activate_on_single_click() const
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "activate-on-single-click"); }

gi::property_proxy<guint, base::FlowBoxBase> property_column_spacing()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "column-spacing"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_column_spacing() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "column-spacing"); }

gi::property_proxy<bool, base::FlowBoxBase> property_homogeneous()
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::FlowBoxBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::FlowBoxBase> (*this, "homogeneous"); }

gi::property_proxy<guint, base::FlowBoxBase> property_max_children_per_line()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "max-children-per-line"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_max_children_per_line() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "max-children-per-line"); }

gi::property_proxy<guint, base::FlowBoxBase> property_min_children_per_line()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "min-children-per-line"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_min_children_per_line() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "min-children-per-line"); }

gi::property_proxy<guint, base::FlowBoxBase> property_row_spacing()
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "row-spacing"); }
const gi::property_proxy<guint, base::FlowBoxBase> property_row_spacing() const
{ return gi::property_proxy<guint, base::FlowBoxBase> (*this, "row-spacing"); }

gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> property_selection_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> (*this, "selection-mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> property_selection_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::FlowBoxBase> (*this, "selection-mode"); }

// (signal) void activate-cursor-child ();
// (signal) void activate-cursor-child ();
gi::signal_proxy<void(Gtk::FlowBox)> signal_activate_cursor_child()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "activate-cursor-child"); }

// (signal) void child-activated ( child /*none*/);
// (signal) void child-activated (::GtkFlowBoxChild* child /*none*/);
gi::signal_proxy<void(Gtk::FlowBox, Gtk::FlowBoxChild child)> signal_child_activated()
{ return gi::signal_proxy<void(Gtk::FlowBox, Gtk::FlowBoxChild child)> (*this, "child-activated"); }

// (signal) gboolean move-cursor ( step, gint count, gboolean extend, gboolean modify);
// (signal) gboolean move-cursor (::GtkMovementStep step, gint count, gboolean extend, gboolean modify);
gi::signal_proxy<bool(Gtk::FlowBox, Gtk::MovementStep step, gint count, gboolean extend, gboolean modify)> signal_move_cursor()
{ return gi::signal_proxy<bool(Gtk::FlowBox, Gtk::MovementStep step, gint count, gboolean extend, gboolean modify)> (*this, "move-cursor"); }

// (signal) void select-all ();
// (signal) void select-all ();
gi::signal_proxy<void(Gtk::FlowBox)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "select-all"); }

// (signal) void selected-children-changed ();
// (signal) void selected-children-changed ();
gi::signal_proxy<void(Gtk::FlowBox)> signal_selected_children_changed()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "selected-children-changed"); }

// (signal) void toggle-cursor-child ();
// (signal) void toggle-cursor-child ();
gi::signal_proxy<void(Gtk::FlowBox)> signal_toggle_cursor_child()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "toggle-cursor-child"); }

// (signal) void unselect-all ();
// (signal) void unselect-all ();
gi::signal_proxy<void(Gtk::FlowBox)> signal_unselect_all()
{ return gi::signal_proxy<void(Gtk::FlowBox)> (*this, "unselect-all"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra_def.hpp>)
#include <gtk/flowbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra.hpp>)
#include <gtk/flowbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FlowBox : public GI_GTK_FLOWBOX_BASE
{ typedef GI_GTK_FLOWBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFlowBox>
{ typedef Gtk::FlowBox type; }; 

} // namespace repository

} // namespace gi

#endif
