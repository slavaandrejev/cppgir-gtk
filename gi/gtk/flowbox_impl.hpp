// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOX_IMPL_HPP_
#define _GI_GTK_FLOWBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable FlowBoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FlowBoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* /*none*/ gtk_flow_box_new ();
// ::GtkFlowBox* /*none*/ gtk_flow_box_new ();
Gtk::FlowBox base::FlowBoxBase::new_ () noexcept
{
  typedef ::GtkFlowBox* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_flow_box_append (GtkFlowBox* self /*none*/, GtkWidget* child /*none*/);
// void gtk_flow_box_append (::GtkFlowBox* self /*none*/, ::GtkWidget* child /*none*/);
void base::FlowBoxBase::append (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_append;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_flow_box_bind_model (GtkFlowBox* box /*none*/, GListModel* model /*none,nullable*/, GtkFlowBoxCreateWidgetFunc create_widget_func /*none*/, gpointer user_data, GDestroyNotify user_data_free_func /*none*/);
// void gtk_flow_box_bind_model (::GtkFlowBox* box /*none*/, ::GListModel* model /*none,nullable*/, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func /*none*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func /*none*/);
void base::FlowBoxBase::bind_model (Gio::ListModel model, Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GListModel* model, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_bind_model;
  auto create_widget_func_wrap_ = create_widget_func ? unwrap (std::move (create_widget_func), gi::scope_notified) : nullptr;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::FlowBoxCreateWidgetFunc::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->wrapper : nullptr), (void*) (create_widget_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->destroy : nullptr));
}
void base::FlowBoxBase::bind_model (Gtk::FlowBoxCreateWidgetFunc create_widget_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GListModel* model, Gtk::FlowBoxCreateWidgetFunc::cfunction_type create_widget_func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_bind_model;
  auto create_widget_func_wrap_ = create_widget_func ? unwrap (std::move (create_widget_func), gi::scope_notified) : nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GListModel*) (model_to_c), (Gtk::FlowBoxCreateWidgetFunc::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->wrapper : nullptr), (void*) (create_widget_func_wrap_), (GLib::DestroyNotify::cfunction_type) (create_widget_func_wrap_ ? &create_widget_func_wrap_->destroy : nullptr));
}

// gboolean gtk_flow_box_get_activate_on_single_click (GtkFlowBox* box /*none*/);
// gboolean gtk_flow_box_get_activate_on_single_click (::GtkFlowBox* box /*none*/);
bool base::FlowBoxBase::get_activate_on_single_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_activate_on_single_click;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_index (GtkFlowBox* box /*none*/, int idx);
// ::GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_index (::GtkFlowBox* box /*none*/, gint idx);
Gtk::FlowBoxChild base::FlowBoxBase::get_child_at_index (gint idx) noexcept
{
  typedef ::GtkFlowBoxChild* (*call_wrap_t) (::GtkFlowBox* box, gint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_child_at_index;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()), (gint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_pos (GtkFlowBox* box /*none*/, int x, int y);
// ::GtkFlowBoxChild* /*none,nullable*/ gtk_flow_box_get_child_at_pos (::GtkFlowBox* box /*none*/, gint x, gint y);
Gtk::FlowBoxChild base::FlowBoxBase::get_child_at_pos (gint x, gint y) noexcept
{
  typedef ::GtkFlowBoxChild* (*call_wrap_t) (::GtkFlowBox* box, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_child_at_pos;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_flow_box_get_column_spacing (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_column_spacing (::GtkFlowBox* box /*none*/);
guint base::FlowBoxBase::get_column_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_column_spacing;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_flow_box_get_homogeneous (GtkFlowBox* box /*none*/);
// gboolean gtk_flow_box_get_homogeneous (::GtkFlowBox* box /*none*/);
bool base::FlowBoxBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// guint gtk_flow_box_get_max_children_per_line (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_max_children_per_line (::GtkFlowBox* box /*none*/);
guint base::FlowBoxBase::get_max_children_per_line () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_max_children_per_line;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// guint gtk_flow_box_get_min_children_per_line (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_min_children_per_line (::GtkFlowBox* box /*none*/);
guint base::FlowBoxBase::get_min_children_per_line () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_min_children_per_line;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// guint gtk_flow_box_get_row_spacing (GtkFlowBox* box /*none*/);
// guint gtk_flow_box_get_row_spacing (::GtkFlowBox* box /*none*/);
guint base::FlowBoxBase::get_row_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_row_spacing;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return _temp_ret;
}

// GList* /*container*/ gtk_flow_box_get_selected_children (GtkFlowBox* box /*none*/);
// ::GList* /*container*/ gtk_flow_box_get_selected_children (::GtkFlowBox* box /*none*/);
gi::Collection<GList, ::GtkFlowBoxChild*, gi::transfer_container_t> base::FlowBoxBase::get_selected_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_selected_children;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkFlowBoxChild*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}

// GtkSelectionMode gtk_flow_box_get_selection_mode (GtkFlowBox* box /*none*/);
// ::GtkSelectionMode gtk_flow_box_get_selection_mode (::GtkFlowBox* box /*none*/);
Gtk::SelectionMode base::FlowBoxBase::get_selection_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_get_selection_mode;
  auto _temp_ret = call_wrap_v ((::GtkFlowBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_flow_box_insert (GtkFlowBox* box /*none*/, GtkWidget* widget /*none*/, int position);
// void gtk_flow_box_insert (::GtkFlowBox* box /*none*/, ::GtkWidget* widget /*none*/, gint position);
void base::FlowBoxBase::insert (Gtk::Widget widget, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkWidget* widget, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_insert;
  auto position_to_c = position;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (position_to_c));
}

// void gtk_flow_box_invalidate_filter (GtkFlowBox* box /*none*/);
// void gtk_flow_box_invalidate_filter (::GtkFlowBox* box /*none*/);
void base::FlowBoxBase::invalidate_filter () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_invalidate_filter;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_invalidate_sort (GtkFlowBox* box /*none*/);
// void gtk_flow_box_invalidate_sort (::GtkFlowBox* box /*none*/);
void base::FlowBoxBase::invalidate_sort () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_invalidate_sort;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_prepend (GtkFlowBox* self /*none*/, GtkWidget* child /*none*/);
// void gtk_flow_box_prepend (::GtkFlowBox* self /*none*/, ::GtkWidget* child /*none*/);
void base::FlowBoxBase::prepend (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* self, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_flow_box_remove (GtkFlowBox* box /*none*/, GtkWidget* widget /*none*/);
// void gtk_flow_box_remove (::GtkFlowBox* box /*none*/, ::GtkWidget* widget /*none*/);
void base::FlowBoxBase::remove (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_remove;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_flow_box_remove_all (GtkFlowBox* box /*none*/);
// void gtk_flow_box_remove_all (::GtkFlowBox* box /*none*/);
void base::FlowBoxBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_remove_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_select_all (GtkFlowBox* box /*none*/);
// void gtk_flow_box_select_all (::GtkFlowBox* box /*none*/);
void base::FlowBoxBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_select_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_select_child (GtkFlowBox* box /*none*/, GtkFlowBoxChild* child /*none*/);
// void gtk_flow_box_select_child (::GtkFlowBox* box /*none*/, ::GtkFlowBoxChild* child /*none*/);
void base::FlowBoxBase::select_child (Gtk::FlowBoxChild child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_select_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkFlowBoxChild*) (child_to_c));
}

// void gtk_flow_box_selected_foreach (GtkFlowBox* box /*none*/, GtkFlowBoxForeachFunc func /*none*/, gpointer data);
// void gtk_flow_box_selected_foreach (::GtkFlowBox* box /*none*/, Gtk::FlowBoxForeachFunc::cfunction_type func /*none*/, void* data);
void base::FlowBoxBase::selected_foreach (Gtk::FlowBoxForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, Gtk::FlowBoxForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (Gtk::FlowBoxForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_flow_box_set_activate_on_single_click (GtkFlowBox* box /*none*/, gboolean single);
// void gtk_flow_box_set_activate_on_single_click (::GtkFlowBox* box /*none*/, gboolean single);
void base::FlowBoxBase::set_activate_on_single_click (gboolean single) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, gboolean single);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_activate_on_single_click;
  auto single_to_c = single;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (gboolean) (single_to_c));
}

// void gtk_flow_box_set_column_spacing (GtkFlowBox* box /*none*/, guint spacing);
// void gtk_flow_box_set_column_spacing (::GtkFlowBox* box /*none*/, guint spacing);
void base::FlowBoxBase::set_column_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_column_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (spacing_to_c));
}

// void gtk_flow_box_set_filter_func (GtkFlowBox* box /*none*/, GtkFlowBoxFilterFunc filter_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_flow_box_set_filter_func (::GtkFlowBox* box /*none*/, Gtk::FlowBoxFilterFunc::cfunction_type filter_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::FlowBoxBase::set_filter_func (Gtk::FlowBoxFilterFunc filter_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, Gtk::FlowBoxFilterFunc::cfunction_type filter_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_filter_func;
  auto filter_func_wrap_ = filter_func ? unwrap (std::move (filter_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (Gtk::FlowBoxFilterFunc::cfunction_type) (filter_func_wrap_ ? &filter_func_wrap_->wrapper : nullptr), (void*) (filter_func_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_func_wrap_ ? &filter_func_wrap_->destroy : nullptr));
}

// void gtk_flow_box_set_hadjustment (GtkFlowBox* box /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_flow_box_set_hadjustment (::GtkFlowBox* box /*none*/, ::GtkAdjustment* adjustment /*none*/);
void base::FlowBoxBase::set_hadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_hadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_flow_box_set_homogeneous (GtkFlowBox* box /*none*/, gboolean homogeneous);
// void gtk_flow_box_set_homogeneous (::GtkFlowBox* box /*none*/, gboolean homogeneous);
void base::FlowBoxBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_flow_box_set_max_children_per_line (GtkFlowBox* box /*none*/, guint n_children);
// void gtk_flow_box_set_max_children_per_line (::GtkFlowBox* box /*none*/, guint n_children);
void base::FlowBoxBase::set_max_children_per_line (guint n_children) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_max_children_per_line;
  auto n_children_to_c = n_children;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (n_children_to_c));
}

// void gtk_flow_box_set_min_children_per_line (GtkFlowBox* box /*none*/, guint n_children);
// void gtk_flow_box_set_min_children_per_line (::GtkFlowBox* box /*none*/, guint n_children);
void base::FlowBoxBase::set_min_children_per_line (guint n_children) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_min_children_per_line;
  auto n_children_to_c = n_children;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (n_children_to_c));
}

// void gtk_flow_box_set_row_spacing (GtkFlowBox* box /*none*/, guint spacing);
// void gtk_flow_box_set_row_spacing (::GtkFlowBox* box /*none*/, guint spacing);
void base::FlowBoxBase::set_row_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_row_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (guint) (spacing_to_c));
}

// void gtk_flow_box_set_selection_mode (GtkFlowBox* box /*none*/, GtkSelectionMode mode);
// void gtk_flow_box_set_selection_mode (::GtkFlowBox* box /*none*/, ::GtkSelectionMode mode);
void base::FlowBoxBase::set_selection_mode (Gtk::SelectionMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkSelectionMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_selection_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkSelectionMode) (mode_to_c));
}

// void gtk_flow_box_set_sort_func (GtkFlowBox* box /*none*/, GtkFlowBoxSortFunc sort_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_flow_box_set_sort_func (::GtkFlowBox* box /*none*/, Gtk::FlowBoxSortFunc::cfunction_type sort_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::FlowBoxBase::set_sort_func (Gtk::FlowBoxSortFunc sort_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, Gtk::FlowBoxSortFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_sort_func;
  auto sort_func_wrap_ = sort_func ? unwrap (std::move (sort_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (Gtk::FlowBoxSortFunc::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->wrapper : nullptr), (void*) (sort_func_wrap_), (GLib::DestroyNotify::cfunction_type) (sort_func_wrap_ ? &sort_func_wrap_->destroy : nullptr));
}

// void gtk_flow_box_set_vadjustment (GtkFlowBox* box /*none*/, GtkAdjustment* adjustment /*none*/);
// void gtk_flow_box_set_vadjustment (::GtkFlowBox* box /*none*/, ::GtkAdjustment* adjustment /*none*/);
void base::FlowBoxBase::set_vadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_set_vadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_flow_box_unselect_all (GtkFlowBox* box /*none*/);
// void gtk_flow_box_unselect_all (::GtkFlowBox* box /*none*/);
void base::FlowBoxBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_unselect_all;
  call_wrap_v ((::GtkFlowBox*) (gobj_()));
}

// void gtk_flow_box_unselect_child (GtkFlowBox* box /*none*/, GtkFlowBoxChild* child /*none*/);
// void gtk_flow_box_unselect_child (::GtkFlowBox* box /*none*/, ::GtkFlowBoxChild* child /*none*/);
void base::FlowBoxBase::unselect_child (Gtk::FlowBoxChild child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBox* box, ::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_flow_box_unselect_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkFlowBox*) (gobj_()), (::GtkFlowBoxChild*) (child_to_c));
}









} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra_def_impl.hpp>)
#include <gtk/flowbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowbox_extra_impl.hpp>)
#include <gtk/flowbox_extra_impl.hpp>
#endif
#endif

#endif
