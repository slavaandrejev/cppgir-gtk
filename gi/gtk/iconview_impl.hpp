// AUTO-GENERATED

#ifndef _GI_GTK_ICONVIEW_IMPL_HPP_
#define _GI_GTK_ICONVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellLayout IconViewBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

IconViewBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

Gtk::Scrollable IconViewBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

IconViewBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* /*none*/ gtk_icon_view_new ();
// ::GtkIconView* /*none*/ gtk_icon_view_new ();
Gtk::IconView base::IconViewBase::new_ () noexcept
{
  typedef ::GtkIconView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_icon_view_new_with_area (GtkCellArea* area /*none*/);
// ::GtkIconView* /*none*/ gtk_icon_view_new_with_area (::GtkCellArea* area /*none*/);
Gtk::IconView base::IconViewBase::new_with_area (Gtk::CellArea area) noexcept
{
  typedef ::GtkIconView* (*call_wrap_t) (::GtkCellArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_new_with_area;
  auto area_to_c = gi::unwrap (area, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_icon_view_new_with_model (GtkTreeModel* model /*none*/);
// ::GtkIconView* /*none*/ gtk_icon_view_new_with_model (::GtkTreeModel* model /*none*/);
Gtk::IconView base::IconViewBase::new_with_model (Gtk::TreeModel model) noexcept
{
  typedef ::GtkIconView* (*call_wrap_t) (::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_view_new_with_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPaintable* /*full,nullable*/ gtk_icon_view_create_drag_icon (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// ::GdkPaintable* /*full,nullable*/ gtk_icon_view_create_drag_icon (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
Gdk::Paintable base::IconViewBase::create_drag_icon (Gtk::TreePath_Ref path) noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_create_drag_icon;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_icon_view_enable_model_drag_dest (GtkIconView* icon_view /*none*/, GdkContentFormats* formats /*none*/, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_dest (::GtkIconView* icon_view /*none*/, ::GdkContentFormats* formats /*none*/, ::GdkDragAction actions);
void base::IconViewBase::enable_model_drag_dest (Gdk::ContentFormats_Ref formats, Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GdkContentFormats* formats, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_enable_model_drag_dest;
  auto actions_to_c = gi::unwrap (actions);
  auto formats_to_c = gi::unwrap (formats, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GdkContentFormats*) (formats_to_c), (::GdkDragAction) (actions_to_c));
}

// void gtk_icon_view_enable_model_drag_source (GtkIconView* icon_view /*none*/, GdkModifierType start_button_mask, GdkContentFormats* formats /*none*/, GdkDragAction actions);
// void gtk_icon_view_enable_model_drag_source (::GtkIconView* icon_view /*none*/, ::GdkModifierType start_button_mask, ::GdkContentFormats* formats /*none*/, ::GdkDragAction actions);
void base::IconViewBase::enable_model_drag_source (Gdk::ModifierType start_button_mask, Gdk::ContentFormats_Ref formats, Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GdkModifierType start_button_mask, ::GdkContentFormats* formats, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_enable_model_drag_source;
  auto actions_to_c = gi::unwrap (actions);
  auto formats_to_c = gi::unwrap (formats, gi::transfer_none);
  auto start_button_mask_to_c = gi::unwrap (start_button_mask);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GdkModifierType) (start_button_mask_to_c), (::GdkContentFormats*) (formats_to_c), (::GdkDragAction) (actions_to_c));
}

// gboolean gtk_icon_view_get_activate_on_single_click (GtkIconView* icon_view /*none*/);
// gboolean gtk_icon_view_get_activate_on_single_click (::GtkIconView* icon_view /*none*/);
bool base::IconViewBase::get_activate_on_single_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_activate_on_single_click;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_cell_rect (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, GtkCellRenderer* cell /*none,nullable*/, GdkRectangle* rect /*none,out,ca*/);
// gboolean gtk_icon_view_get_cell_rect (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkCellRenderer* cell /*none,nullable*/, ::GdkRectangle* rect /*none,out,ca*/);
bool base::IconViewBase::get_cell_rect (Gtk::TreePath_Ref path, Gtk::CellRenderer cell, Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_cell_rect;
  detail::allocate(rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(rect).gobj_()), "");
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) (rect).gobj_()));
  return _temp_ret;
}
bool base::IconViewBase::get_cell_rect (Gtk::TreePath_Ref path, Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_cell_rect;
  detail::allocate(rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(rect).gobj_()), "");
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) (rect).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::IconViewBase::get_cell_rect (Gtk::TreePath_Ref path, Gtk::CellRenderer cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_cell_rect;
  Gdk::Rectangle rect_c;
  auto rect = &rect_c;
  detail::allocate(*rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*rect).gobj_()), "");
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) (rect ? (::GdkRectangle*) (*rect).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, Gdk::Rectangle> base::IconViewBase::get_cell_rect (Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_cell_rect;
  Gdk::Rectangle rect_c;
  auto rect = &rect_c;
  detail::allocate(*rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*rect).gobj_()), "");
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (::GdkRectangle*) (rect ? (::GdkRectangle*) (*rect).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// int gtk_icon_view_get_column_spacing (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_column_spacing (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_column_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_column_spacing;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_columns (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_columns (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_columns () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_columns;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_cursor (GtkIconView* icon_view /*none*/, GtkTreePath** path /*full,out,opt*/, GtkCellRenderer** cell /*none,out,opt*/);
// gboolean gtk_icon_view_get_cursor (::GtkIconView* icon_view /*none*/, ::GtkTreePath** path /*full,out,opt*/, ::GtkCellRenderer** cell /*none,out,opt*/);
bool base::IconViewBase::get_cursor (Gtk::TreePath * path, Gtk::CellRenderer * cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_cursor;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkCellRenderer**) (cell ? &cell_o : nullptr));
  if (cell) *cell = gi::wrap (cell_o, gi::transfer_none);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> base::IconViewBase::get_cursor () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_cursor;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (&path_o), (::GtkCellRenderer**) (&cell_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (cell_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView* icon_view /*none*/, int drag_x, int drag_y, GtkTreePath** path /*full,out,opt*/, GtkIconViewDropPosition* pos);
// gboolean gtk_icon_view_get_dest_item_at_pos (::GtkIconView* icon_view /*none*/, gint drag_x, gint drag_y, ::GtkTreePath** path /*full,out,opt*/, ::GtkIconViewDropPosition* pos);
bool base::IconViewBase::get_dest_item_at_pos (gint drag_x, gint drag_y, Gtk::TreePath * path, Gtk::IconViewDropPosition * pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_dest_item_at_pos;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  auto drag_y_to_c = drag_y;
  auto drag_x_to_c = drag_x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (drag_x_to_c), (gint) (drag_y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkIconViewDropPosition*) (pos ? &pos_o : nullptr));
  if (pos) *pos = gi::wrap (pos_o);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::IconViewDropPosition> base::IconViewBase::get_dest_item_at_pos (gint drag_x, gint drag_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint drag_x, gint drag_y, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_dest_item_at_pos;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  auto drag_y_to_c = drag_y;
  auto drag_x_to_c = drag_x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (drag_x_to_c), (gint) (drag_y_to_c), (::GtkTreePath**) (&path_o), (::GtkIconViewDropPosition*) (&pos_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (pos_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gtk_icon_view_get_drag_dest_item (GtkIconView* icon_view /*none*/, GtkTreePath** path /*full,out,opt,nullable*/, GtkIconViewDropPosition* pos);
// void gtk_icon_view_get_drag_dest_item (::GtkIconView* icon_view /*none*/, ::GtkTreePath** path /*full,out,opt,nullable*/, ::GtkIconViewDropPosition* pos);
void base::IconViewBase::get_drag_dest_item (Gtk::TreePath * path, Gtk::IconViewDropPosition * pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_drag_dest_item;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkIconViewDropPosition*) (pos ? &pos_o : nullptr));
  if (pos) *pos = gi::wrap (pos_o);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
}
std::tuple<Gtk::TreePath, Gtk::IconViewDropPosition> base::IconViewBase::get_drag_dest_item () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** path, ::GtkIconViewDropPosition* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_drag_dest_item;
  ::GtkIconViewDropPosition pos_o {};
  ::GtkTreePath* path_o {};
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (&path_o), (::GtkIconViewDropPosition*) (&pos_o));
  auto &&tmp_return_1 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (pos_o);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_icon_view_get_item_at_pos (GtkIconView* icon_view /*none*/, int x, int y, GtkTreePath** path /*full,out,opt*/, GtkCellRenderer** cell /*none,out,opt*/);
// gboolean gtk_icon_view_get_item_at_pos (::GtkIconView* icon_view /*none*/, gint x, gint y, ::GtkTreePath** path /*full,out,opt*/, ::GtkCellRenderer** cell /*none,out,opt*/);
bool base::IconViewBase::get_item_at_pos (gint x, gint y, Gtk::TreePath * path, Gtk::CellRenderer * cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_at_pos;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkCellRenderer**) (cell ? &cell_o : nullptr));
  if (cell) *cell = gi::wrap (cell_o, gi::transfer_none);
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::CellRenderer> base::IconViewBase::get_item_at_pos (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y, ::GtkTreePath** path, ::GtkCellRenderer** cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_at_pos;
  ::GtkCellRenderer* cell_o {};
  ::GtkTreePath* path_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::GtkTreePath**) (&path_o), (::GtkCellRenderer**) (&cell_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (cell_o, gi::transfer_none);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// int gtk_icon_view_get_item_column (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// gint gtk_icon_view_get_item_column (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
gint base::IconViewBase::get_item_column (Gtk::TreePath_Ref path) noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_column;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// GtkOrientation gtk_icon_view_get_item_orientation (GtkIconView* icon_view /*none*/);
// ::GtkOrientation gtk_icon_view_get_item_orientation (::GtkIconView* icon_view /*none*/);
Gtk::Orientation base::IconViewBase::get_item_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_orientation;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gtk_icon_view_get_item_padding (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_item_padding (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_item_padding () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_padding;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_item_row (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// gint gtk_icon_view_get_item_row (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
gint base::IconViewBase::get_item_row (Gtk::TreePath_Ref path) noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// int gtk_icon_view_get_item_width (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_item_width (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_item_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_item_width;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_margin (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_margin (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_margin () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_margin;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_markup_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_markup_column (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_markup_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_markup_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* /*none,nullable*/ gtk_icon_view_get_model (GtkIconView* icon_view /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_icon_view_get_model (::GtkIconView* icon_view /*none*/);
Gtk::TreeModel base::IconViewBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkTreePath* /*full,nullable*/ gtk_icon_view_get_path_at_pos (GtkIconView* icon_view /*none*/, int x, int y);
// ::GtkTreePath* /*full,nullable*/ gtk_icon_view_get_path_at_pos (::GtkIconView* icon_view /*none*/, gint x, gint y);
Gtk::TreePath base::IconViewBase::get_path_at_pos (gint x, gint y) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_path_at_pos;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_icon_view_get_pixbuf_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_pixbuf_column (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_pixbuf_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_pixbuf_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_reorderable (GtkIconView* icon_view /*none*/);
// gboolean gtk_icon_view_get_reorderable (::GtkIconView* icon_view /*none*/);
bool base::IconViewBase::get_reorderable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_reorderable;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_row_spacing (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_row_spacing (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_row_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_row_spacing;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// GList* /*full*/ gtk_icon_view_get_selected_items (GtkIconView* icon_view /*none*/);
// ::GList* /*full*/ gtk_icon_view_get_selected_items (::GtkIconView* icon_view /*none*/);
gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t> base::IconViewBase::get_selected_items () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_selected_items;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap_to<gi::Collection<GList, ::GtkTreePath*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// GtkSelectionMode gtk_icon_view_get_selection_mode (GtkIconView* icon_view /*none*/);
// ::GtkSelectionMode gtk_icon_view_get_selection_mode (::GtkIconView* icon_view /*none*/);
Gtk::SelectionMode base::IconViewBase::get_selection_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_selection_mode;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gtk_icon_view_get_spacing (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_spacing (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_text_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_text_column (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_text_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_text_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// int gtk_icon_view_get_tooltip_column (GtkIconView* icon_view /*none*/);
// gint gtk_icon_view_get_tooltip_column (::GtkIconView* icon_view /*none*/);
gint base::IconViewBase::get_tooltip_column () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_tooltip_column;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_icon_view_get_tooltip_context (GtkIconView* icon_view /*none*/, int x, int y, gboolean keyboard_tip, GtkTreeModel** model /*none,out,opt*/, GtkTreePath** path /*full,out,opt*/, GtkTreeIter* iter /*none,out,opt,ca*/);
// gboolean gtk_icon_view_get_tooltip_context (::GtkIconView* icon_view /*none*/, gint x, gint y, gboolean keyboard_tip, ::GtkTreeModel** model /*none,out,opt*/, ::GtkTreePath** path /*full,out,opt*/, ::GtkTreeIter* iter /*none,out,opt,ca*/);
bool base::IconViewBase::get_tooltip_context (gint x, gint y, gboolean keyboard_tip, Gtk::TreeModel * model, Gtk::TreePath * path, Gtk::TreeIter * iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_tooltip_context;
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* model_o {};
  auto keyboard_tip_to_c = keyboard_tip;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gboolean) (keyboard_tip_to_c), (::GtkTreeModel**) (model ? &model_o : nullptr), (::GtkTreePath**) (path ? &path_o : nullptr), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  if (path) *path = gi::wrap (path_o, gi::transfer_full);
  if (model) *model = gi::wrap (model_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreePath, Gtk::TreeIter> base::IconViewBase::get_tooltip_context (gint x, gint y, gboolean keyboard_tip) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, gint x, gint y, gboolean keyboard_tip, ::GtkTreeModel** model, ::GtkTreePath** path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_tooltip_context;
  Gtk::TreeIter iter_c;
  auto iter = &iter_c;
  static_assert(sizeof(::GtkTreeIter) == sizeof(*(*iter).gobj_()), "");
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* model_o {};
  auto keyboard_tip_to_c = keyboard_tip;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gboolean) (keyboard_tip_to_c), (::GtkTreeModel**) (&model_o), (::GtkTreePath**) (&path_o), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) (*iter).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (model_o, gi::transfer_none);
  auto &&tmp_return_3 = gi::wrap (path_o, gi::transfer_full);
  auto &&tmp_return_4 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// gboolean gtk_icon_view_get_visible_range (GtkIconView* icon_view /*none*/, GtkTreePath** start_path /*full,out,opt*/, GtkTreePath** end_path /*full,out,opt*/);
// gboolean gtk_icon_view_get_visible_range (::GtkIconView* icon_view /*none*/, ::GtkTreePath** start_path /*full,out,opt*/, ::GtkTreePath** end_path /*full,out,opt*/);
bool base::IconViewBase::get_visible_range (Gtk::TreePath * start_path, Gtk::TreePath * end_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_visible_range;
  ::GtkTreePath* end_path_o {};
  ::GtkTreePath* start_path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (start_path ? &start_path_o : nullptr), (::GtkTreePath**) (end_path ? &end_path_o : nullptr));
  if (end_path) *end_path = gi::wrap (end_path_o, gi::transfer_full);
  if (start_path) *start_path = gi::wrap (start_path_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreePath, Gtk::TreePath> base::IconViewBase::get_visible_range () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath** start_path, ::GtkTreePath** end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_get_visible_range;
  ::GtkTreePath* end_path_o {};
  ::GtkTreePath* start_path_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath**) (&start_path_o), (::GtkTreePath**) (&end_path_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (start_path_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (end_path_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gtk_icon_view_item_activated (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_item_activated (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
void base::IconViewBase::item_activated (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_item_activated;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// gboolean gtk_icon_view_path_is_selected (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// gboolean gtk_icon_view_path_is_selected (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
bool base::IconViewBase::path_is_selected (Gtk::TreePath_Ref path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_path_is_selected;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// void gtk_icon_view_scroll_to_path (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, gboolean use_align, float row_align, float col_align);
// void gtk_icon_view_scroll_to_path (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, gboolean use_align, gfloat row_align, gfloat col_align);
void base::IconViewBase::scroll_to_path (Gtk::TreePath_Ref path, gboolean use_align, gfloat row_align, gfloat col_align) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_scroll_to_path;
  auto col_align_to_c = col_align;
  auto row_align_to_c = row_align;
  auto use_align_to_c = use_align;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (gboolean) (use_align_to_c), (gfloat) (row_align_to_c), (gfloat) (col_align_to_c));
}

// void gtk_icon_view_select_all (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_select_all (::GtkIconView* icon_view /*none*/);
void base::IconViewBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_select_all;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void gtk_icon_view_select_path (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_select_path (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
void base::IconViewBase::select_path (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_select_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_icon_view_selected_foreach (GtkIconView* icon_view /*none*/, GtkIconViewForeachFunc func /*none*/, gpointer data);
// void gtk_icon_view_selected_foreach (::GtkIconView* icon_view /*none*/, Gtk::IconViewForeachFunc::cfunction_type func /*none*/, void* data);
void base::IconViewBase::selected_foreach (Gtk::IconViewForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, Gtk::IconViewForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkIconView*) (gobj_()), (Gtk::IconViewForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_icon_view_set_activate_on_single_click (GtkIconView* icon_view /*none*/, gboolean single);
// void gtk_icon_view_set_activate_on_single_click (::GtkIconView* icon_view /*none*/, gboolean single);
void base::IconViewBase::set_activate_on_single_click (gboolean single) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gboolean single);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_activate_on_single_click;
  auto single_to_c = single;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gboolean) (single_to_c));
}

// void gtk_icon_view_set_column_spacing (GtkIconView* icon_view /*none*/, int column_spacing);
// void gtk_icon_view_set_column_spacing (::GtkIconView* icon_view /*none*/, gint column_spacing);
void base::IconViewBase::set_column_spacing (gint column_spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_column_spacing;
  auto column_spacing_to_c = column_spacing;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_spacing_to_c));
}

// void gtk_icon_view_set_columns (GtkIconView* icon_view /*none*/, int columns);
// void gtk_icon_view_set_columns (::GtkIconView* icon_view /*none*/, gint columns);
void base::IconViewBase::set_columns (gint columns) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint columns);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_columns;
  auto columns_to_c = columns;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (columns_to_c));
}

// void gtk_icon_view_set_cursor (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, GtkCellRenderer* cell /*none,nullable*/, gboolean start_editing);
// void gtk_icon_view_set_cursor (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, ::GtkCellRenderer* cell /*none,nullable*/, gboolean start_editing);
void base::IconViewBase::set_cursor (Gtk::TreePath_Ref path, Gtk::CellRenderer cell, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_cursor;
  auto start_editing_to_c = start_editing;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (gboolean) (start_editing_to_c));
}
void base::IconViewBase::set_cursor (Gtk::TreePath_Ref path, gboolean start_editing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkCellRenderer* cell, gboolean start_editing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_cursor;
  auto start_editing_to_c = start_editing;
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c), (gboolean) (start_editing_to_c));
}

// void gtk_icon_view_set_drag_dest_item (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none,nullable*/, GtkIconViewDropPosition pos);
// void gtk_icon_view_set_drag_dest_item (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none,nullable*/, ::GtkIconViewDropPosition pos);
void base::IconViewBase::set_drag_dest_item (Gtk::TreePath_Ref path, Gtk::IconViewDropPosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkIconViewDropPosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_drag_dest_item;
  auto pos_to_c = gi::unwrap (pos);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkIconViewDropPosition) (pos_to_c));
}
void base::IconViewBase::set_drag_dest_item (Gtk::IconViewDropPosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path, ::GtkIconViewDropPosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_drag_dest_item;
  auto pos_to_c = gi::unwrap (pos);
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkIconViewDropPosition) (pos_to_c));
}

// void gtk_icon_view_set_item_orientation (GtkIconView* icon_view /*none*/, GtkOrientation orientation);
// void gtk_icon_view_set_item_orientation (::GtkIconView* icon_view /*none*/, ::GtkOrientation orientation);
void base::IconViewBase::set_item_orientation (Gtk::Orientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_item_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkOrientation) (orientation_to_c));
}

// void gtk_icon_view_set_item_padding (GtkIconView* icon_view /*none*/, int item_padding);
// void gtk_icon_view_set_item_padding (::GtkIconView* icon_view /*none*/, gint item_padding);
void base::IconViewBase::set_item_padding (gint item_padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint item_padding);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_item_padding;
  auto item_padding_to_c = item_padding;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (item_padding_to_c));
}

// void gtk_icon_view_set_item_width (GtkIconView* icon_view /*none*/, int item_width);
// void gtk_icon_view_set_item_width (::GtkIconView* icon_view /*none*/, gint item_width);
void base::IconViewBase::set_item_width (gint item_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint item_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_item_width;
  auto item_width_to_c = item_width;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (item_width_to_c));
}

// void gtk_icon_view_set_margin (GtkIconView* icon_view /*none*/, int margin);
// void gtk_icon_view_set_margin (::GtkIconView* icon_view /*none*/, gint margin);
void base::IconViewBase::set_margin (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_margin;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_icon_view_set_markup_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_markup_column (::GtkIconView* icon_view /*none*/, gint column);
void base::IconViewBase::set_markup_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_markup_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_model (GtkIconView* icon_view /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_icon_view_set_model (::GtkIconView* icon_view /*none*/, ::GtkTreeModel* model /*none,nullable*/);
void base::IconViewBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::IconViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}

// void gtk_icon_view_set_pixbuf_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_pixbuf_column (::GtkIconView* icon_view /*none*/, gint column);
void base::IconViewBase::set_pixbuf_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_pixbuf_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_reorderable (GtkIconView* icon_view /*none*/, gboolean reorderable);
// void gtk_icon_view_set_reorderable (::GtkIconView* icon_view /*none*/, gboolean reorderable);
void base::IconViewBase::set_reorderable (gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_reorderable;
  auto reorderable_to_c = reorderable;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gboolean) (reorderable_to_c));
}

// void gtk_icon_view_set_row_spacing (GtkIconView* icon_view /*none*/, int row_spacing);
// void gtk_icon_view_set_row_spacing (::GtkIconView* icon_view /*none*/, gint row_spacing);
void base::IconViewBase::set_row_spacing (gint row_spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint row_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_row_spacing;
  auto row_spacing_to_c = row_spacing;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (row_spacing_to_c));
}

// void gtk_icon_view_set_selection_mode (GtkIconView* icon_view /*none*/, GtkSelectionMode mode);
// void gtk_icon_view_set_selection_mode (::GtkIconView* icon_view /*none*/, ::GtkSelectionMode mode);
void base::IconViewBase::set_selection_mode (Gtk::SelectionMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkSelectionMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_selection_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkSelectionMode) (mode_to_c));
}

// void gtk_icon_view_set_spacing (GtkIconView* icon_view /*none*/, int spacing);
// void gtk_icon_view_set_spacing (::GtkIconView* icon_view /*none*/, gint spacing);
void base::IconViewBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (spacing_to_c));
}

// void gtk_icon_view_set_text_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_text_column (::GtkIconView* icon_view /*none*/, gint column);
void base::IconViewBase::set_text_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_text_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_tooltip_cell (GtkIconView* icon_view /*none*/, GtkTooltip* tooltip /*none*/, GtkTreePath* path /*none*/, GtkCellRenderer* cell /*none,nullable*/);
// void gtk_icon_view_set_tooltip_cell (::GtkIconView* icon_view /*none*/, ::GtkTooltip* tooltip /*none*/, ::GtkTreePath* path /*none*/, ::GtkCellRenderer* cell /*none,nullable*/);
void base::IconViewBase::set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path, Gtk::CellRenderer cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_tooltip_cell;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c));
}
void base::IconViewBase::set_tooltip_cell (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path, ::GtkCellRenderer* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_tooltip_cell;
  auto cell_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c), (::GtkCellRenderer*) (cell_to_c));
}

// void gtk_icon_view_set_tooltip_column (GtkIconView* icon_view /*none*/, int column);
// void gtk_icon_view_set_tooltip_column (::GtkIconView* icon_view /*none*/, gint column);
void base::IconViewBase::set_tooltip_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_tooltip_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkIconView*) (gobj_()), (gint) (column_to_c));
}

// void gtk_icon_view_set_tooltip_item (GtkIconView* icon_view /*none*/, GtkTooltip* tooltip /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_set_tooltip_item (::GtkIconView* icon_view /*none*/, ::GtkTooltip* tooltip /*none*/, ::GtkTreePath* path /*none*/);
void base::IconViewBase::set_tooltip_item (Gtk::Tooltip tooltip, Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTooltip* tooltip, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_set_tooltip_item;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTooltip*) (tooltip_to_c), (::GtkTreePath*) (path_to_c));
}

// void gtk_icon_view_unselect_all (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_unselect_all (::GtkIconView* icon_view /*none*/);
void base::IconViewBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_unselect_all;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void gtk_icon_view_unselect_path (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/);
// void gtk_icon_view_unselect_path (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/);
void base::IconViewBase::unselect_path (Gtk::TreePath_Ref path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_unselect_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  call_wrap_v ((::GtkIconView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_icon_view_unset_model_drag_dest (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_unset_model_drag_dest (::GtkIconView* icon_view /*none*/);
void base::IconViewBase::unset_model_drag_dest () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_unset_model_drag_dest;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}

// void gtk_icon_view_unset_model_drag_source (GtkIconView* icon_view /*none*/);
// void gtk_icon_view_unset_model_drag_source (::GtkIconView* icon_view /*none*/);
void base::IconViewBase::unset_model_drag_source () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconView* icon_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_icon_view_unset_model_drag_source;
  call_wrap_v ((::GtkIconView*) (gobj_()));
}










} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra_def_impl.hpp>)
#include <gtk/iconview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconview_extra_impl.hpp>)
#include <gtk/iconview_extra_impl.hpp>
#endif
#endif

#endif
