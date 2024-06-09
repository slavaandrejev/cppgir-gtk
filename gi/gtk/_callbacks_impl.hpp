// AUTO-GENERATED

#ifndef _GI_GTK__CALLBACKS_IMPL_HPP_
#define _GI_GTK__CALLBACKS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

// typedef int (*GtkAssistantPageFunc) (int current_page, gpointer data);
// typedef gint (*GtkAssistantPageFunc) (gint current_page, void* data);
namespace internal {

gint AssistantPageFunc_CF (gint current_page, AssistantPageFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto current_page_to_c = current_page;
  auto _temp_ret = _call ((gint) (current_page_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkCellAllocCallback) (GtkCellRenderer* renderer /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* cell_background /*none*/, gpointer data);
// typedef gboolean (*GtkCellAllocCallback) (::GtkCellRenderer* renderer /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* cell_background /*none*/, void* data);
namespace internal {

bool CellAllocCallback_CF (Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref cell_background, CellAllocCallback_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto cell_background_to_c = gi::unwrap (cell_background, gi::transfer_none);
  auto cell_area_to_c = gi::unwrap (cell_area, gi::transfer_none);
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = _call ((::GtkCellRenderer*) (renderer_to_c), (const ::GdkRectangle*) (cell_area_to_c), (const ::GdkRectangle*) (cell_background_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkCellCallback) (GtkCellRenderer* renderer /*none*/, gpointer data);
// typedef gboolean (*GtkCellCallback) (::GtkCellRenderer* renderer /*none*/, void* data);
namespace internal {

bool CellCallback_CF (Gtk::CellRenderer renderer, CellCallback_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none);
  auto _temp_ret = _call ((::GtkCellRenderer*) (renderer_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkCellLayoutDataFunc) (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef void (*GtkCellLayoutDataFunc) (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

void CellLayoutDataFunc_CF (Gtk::CellLayout cell_layout, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, CellLayoutDataFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none);
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  auto cell_layout_to_c = gi::unwrap (cell_layout, gi::transfer_none);
  _call ((::GtkCellLayout*) (cell_layout_to_c), (::GtkCellRenderer*) (cell_to_c), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef void (*GtkCustomAllocateFunc) (GtkWidget* widget /*none*/, int width, int height, int baseline);
// typedef void (*GtkCustomAllocateFunc) (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
// SKIP; not a callback since no user_data

// typedef gboolean (*GtkCustomFilterFunc) (gpointer item /*none*/, gpointer user_data);
// typedef gboolean (*GtkCustomFilterFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

bool CustomFilterFunc_CF (GObject::Object item, CustomFilterFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = _call ((::GObject*) (item_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkCustomMeasureFunc) (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// typedef void (*GtkCustomMeasureFunc) (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
// SKIP; not a callback since no user_data

// typedef GtkSizeRequestMode (*GtkCustomRequestModeFunc) (GtkWidget* widget /*none*/);
// typedef ::GtkSizeRequestMode (*GtkCustomRequestModeFunc) (::GtkWidget* widget /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GtkDrawingAreaDrawFunc) (GtkDrawingArea* drawing_area /*none*/, cairo_t* cr /*none*/, int width, int height, gpointer user_data);
// typedef void (*GtkDrawingAreaDrawFunc) (::GtkDrawingArea* drawing_area /*none*/, ::cairo_t* cr /*none*/, gint width, gint height, void* user_data);
namespace internal {

void DrawingAreaDrawFunc_CF (Gtk::DrawingArea drawing_area, cairo::Context_Ref cr, gint width, gint height, DrawingAreaDrawFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto height_to_c = height;
  auto width_to_c = width;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none);
  auto drawing_area_to_c = gi::unwrap (drawing_area, gi::transfer_none);
  _call ((::GtkDrawingArea*) (drawing_area_to_c), (::cairo_t*) (cr_to_c), (gint) (width_to_c), (gint) (height_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GtkEntryCompletionMatchFunc) (GtkEntryCompletion* completion /*none*/, const char* key /*none*/, GtkTreeIter* iter /*none*/, gpointer user_data);
// typedef gboolean (*GtkEntryCompletionMatchFunc) (::GtkEntryCompletion* completion /*none*/, const char* key /*none*/, ::GtkTreeIter* iter /*none*/, void* user_data);
namespace internal {

bool EntryCompletionMatchFunc_CF (Gtk::EntryCompletion completion, const gi::cstring_v key, Gtk::TreeIter_Ref iter, EntryCompletionMatchFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto completion_to_c = gi::unwrap (completion, gi::transfer_none);
  auto _temp_ret = _call ((::GtkEntryCompletion*) (completion_to_c), (const char*) (key_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkExpressionNotify) (gpointer user_data);
// typedef void (*GtkExpressionNotify) (void* user_data);
namespace internal {

void ExpressionNotify_CF (ExpressionNotify_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  _call ((void*) (user_data_to_c));
}
} // namespace internal


// typedef GtkWidget* /*full*/ (*GtkFlowBoxCreateWidgetFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::GtkWidget* /*full*/ (*GtkFlowBoxCreateWidgetFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

Gtk::Widget FlowBoxCreateWidgetFunc_CF (GObject::Object item, FlowBoxCreateWidgetFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = _call ((::GObject*) (item_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef gboolean (*GtkFlowBoxFilterFunc) (GtkFlowBoxChild* child /*none*/, gpointer user_data);
// typedef gboolean (*GtkFlowBoxFilterFunc) (::GtkFlowBoxChild* child /*none*/, void* user_data);
namespace internal {

bool FlowBoxFilterFunc_CF (Gtk::FlowBoxChild child, FlowBoxFilterFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = _call ((::GtkFlowBoxChild*) (child_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkFlowBoxForeachFunc) (GtkFlowBox* box /*none*/, GtkFlowBoxChild* child /*none*/, gpointer user_data);
// typedef void (*GtkFlowBoxForeachFunc) (::GtkFlowBox* box /*none*/, ::GtkFlowBoxChild* child /*none*/, void* user_data);
namespace internal {

void FlowBoxForeachFunc_CF (Gtk::FlowBox box, Gtk::FlowBoxChild child, FlowBoxForeachFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto box_to_c = gi::unwrap (box, gi::transfer_none);
  _call ((::GtkFlowBox*) (box_to_c), (::GtkFlowBoxChild*) (child_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef int (*GtkFlowBoxSortFunc) (GtkFlowBoxChild* child1 /*none*/, GtkFlowBoxChild* child2 /*none*/, gpointer user_data);
// typedef gint (*GtkFlowBoxSortFunc) (::GtkFlowBoxChild* child1 /*none*/, ::GtkFlowBoxChild* child2 /*none*/, void* user_data);
namespace internal {

gint FlowBoxSortFunc_CF (Gtk::FlowBoxChild child1, Gtk::FlowBoxChild child2, FlowBoxSortFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto child2_to_c = gi::unwrap (child2, gi::transfer_none);
  auto child1_to_c = gi::unwrap (child1, gi::transfer_none);
  auto _temp_ret = _call ((::GtkFlowBoxChild*) (child1_to_c), (::GtkFlowBoxChild*) (child2_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkFontFilterFunc) (const PangoFontFamily* family /*none*/, const PangoFontFace* face /*none*/, gpointer data);
// typedef gboolean (*GtkFontFilterFunc) (const ::PangoFontFamily* family /*none*/, const ::PangoFontFace* face /*none*/, void* data);
namespace internal {

bool FontFilterFunc_CF (const Pango::FontFamily & family, const Pango::FontFace & face, FontFilterFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto face_to_c = gi::unwrap (face, gi::transfer_none);
  auto family_to_c = gi::unwrap (family, gi::transfer_none);
  auto _temp_ret = _call ((const ::PangoFontFamily*) (family_to_c), (const ::PangoFontFace*) (face_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkIconViewForeachFunc) (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, gpointer data);
// typedef void (*GtkIconViewForeachFunc) (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, void* data);
namespace internal {

void IconViewForeachFunc_CF (Gtk::IconView icon_view, Gtk::TreePath_Ref path, IconViewForeachFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto icon_view_to_c = gi::unwrap (icon_view, gi::transfer_none);
  _call ((::GtkIconView*) (icon_view_to_c), (::GtkTreePath*) (path_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef GtkWidget* /*full*/ (*GtkListBoxCreateWidgetFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::GtkWidget* /*full*/ (*GtkListBoxCreateWidgetFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

Gtk::Widget ListBoxCreateWidgetFunc_CF (GObject::Object item, ListBoxCreateWidgetFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = _call ((::GObject*) (item_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef gboolean (*GtkListBoxFilterFunc) (GtkListBoxRow* row /*none*/, gpointer user_data);
// typedef gboolean (*GtkListBoxFilterFunc) (::GtkListBoxRow* row /*none*/, void* user_data);
namespace internal {

bool ListBoxFilterFunc_CF (Gtk::ListBoxRow row, ListBoxFilterFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto row_to_c = gi::unwrap (row, gi::transfer_none);
  auto _temp_ret = _call ((::GtkListBoxRow*) (row_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkListBoxForeachFunc) (GtkListBox* box /*none*/, GtkListBoxRow* row /*none*/, gpointer user_data);
// typedef void (*GtkListBoxForeachFunc) (::GtkListBox* box /*none*/, ::GtkListBoxRow* row /*none*/, void* user_data);
namespace internal {

void ListBoxForeachFunc_CF (Gtk::ListBox box, Gtk::ListBoxRow row, ListBoxForeachFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto row_to_c = gi::unwrap (row, gi::transfer_none);
  auto box_to_c = gi::unwrap (box, gi::transfer_none);
  _call ((::GtkListBox*) (box_to_c), (::GtkListBoxRow*) (row_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef int (*GtkListBoxSortFunc) (GtkListBoxRow* row1 /*none*/, GtkListBoxRow* row2 /*none*/, gpointer user_data);
// typedef gint (*GtkListBoxSortFunc) (::GtkListBoxRow* row1 /*none*/, ::GtkListBoxRow* row2 /*none*/, void* user_data);
namespace internal {

gint ListBoxSortFunc_CF (Gtk::ListBoxRow row1, Gtk::ListBoxRow row2, ListBoxSortFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto row2_to_c = gi::unwrap (row2, gi::transfer_none);
  auto row1_to_c = gi::unwrap (row1, gi::transfer_none);
  auto _temp_ret = _call ((::GtkListBoxRow*) (row1_to_c), (::GtkListBoxRow*) (row2_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkListBoxUpdateHeaderFunc) (GtkListBoxRow* row /*none*/, GtkListBoxRow* before /*none,nullable*/, gpointer user_data);
// typedef void (*GtkListBoxUpdateHeaderFunc) (::GtkListBoxRow* row /*none*/, ::GtkListBoxRow* before /*none,nullable*/, void* user_data);
namespace internal {

void ListBoxUpdateHeaderFunc_CF (Gtk::ListBoxRow row, Gtk::ListBoxRow before, ListBoxUpdateHeaderFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto before_to_c = gi::unwrap (before, gi::transfer_none);
  auto row_to_c = gi::unwrap (row, gi::transfer_none);
  _call ((::GtkListBoxRow*) (row_to_c), (::GtkListBoxRow*) (before_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gpointer /*full*/ (*GtkMapListModelMapFunc) (gpointer item /*full*/, gpointer user_data);
// typedef ::GObject* /*full*/ (*GtkMapListModelMapFunc) (::GObject* item /*full*/, void* user_data);
namespace internal {

GObject::Object MapListModelMapFunc_CF (GObject::Object item, MapListModelMapFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto item_to_c = gi::unwrap (item, gi::transfer_full);
  auto _temp_ret = _call ((::GObject*) (item_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef void (*GtkMenuButtonCreatePopupFunc) (GtkMenuButton* menu_button /*none*/, gpointer user_data);
// typedef void (*GtkMenuButtonCreatePopupFunc) (::GtkMenuButton* menu_button /*none*/, void* user_data);
namespace internal {

void MenuButtonCreatePopupFunc_CF (Gtk::MenuButton menu_button, MenuButtonCreatePopupFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto menu_button_to_c = gi::unwrap (menu_button, gi::transfer_none);
  _call ((::GtkMenuButton*) (menu_button_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef void (*GtkPageSetupDoneFunc) (GtkPageSetup* page_setup /*none*/, gpointer data);
// typedef void (*GtkPageSetupDoneFunc) (::GtkPageSetup* page_setup /*none*/, void* data);
namespace internal {

void PageSetupDoneFunc_CF (Gtk::PageSetup page_setup, PageSetupDoneFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none);
  _call ((::GtkPageSetup*) (page_setup_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef void (*GtkPrintJobCompleteFunc) (GtkPrintJob* print_job /*none*/, gpointer user_data, const GError* error /*none*/);
// typedef void (*GtkPrintJobCompleteFunc) (::GtkPrintJob* print_job /*none*/, void* user_data, const ::GError* error /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GtkPrintSettingsFunc) (const char* key /*none*/, const char* value /*none*/, gpointer user_data);
// typedef void (*GtkPrintSettingsFunc) (const char* key /*none*/, const char* value /*none*/, void* user_data);
namespace internal {

void PrintSettingsFunc_CF (const gi::cstring_v key, const gi::cstring_v value, PrintSettingsFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  _call ((const char*) (key_to_c), (const char*) (value_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GtkPrinterFunc) (GtkPrinter* printer /*none*/, gpointer data);
// typedef gboolean (*GtkPrinterFunc) (::GtkPrinter* printer /*none*/, void* data);
namespace internal {

bool PrinterFunc_CF (Gtk::Printer printer, PrinterFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto printer_to_c = gi::unwrap (printer, gi::transfer_none);
  auto _temp_ret = _call ((::GtkPrinter*) (printer_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef char* /*full*/ (*GtkScaleFormatValueFunc) (GtkScale* scale /*none*/, double value, gpointer user_data);
// typedef char* /*full*/ (*GtkScaleFormatValueFunc) (::GtkScale* scale /*none*/, gdouble value, void* user_data);
namespace internal {

gi::cstring ScaleFormatValueFunc_CF (Gtk::Scale scale, gdouble value, ScaleFormatValueFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto value_to_c = value;
  auto scale_to_c = gi::unwrap (scale, gi::transfer_none);
  auto _temp_ret = _call ((::GtkScale*) (scale_to_c), (gdouble) (value_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef gboolean (*GtkShortcutFunc) (GtkWidget* widget /*none*/, GVariant* args /*none,nullable*/, gpointer user_data);
// typedef gboolean (*GtkShortcutFunc) (::GtkWidget* widget /*none*/, ::GVariant* args /*none,nullable*/, void* user_data);
namespace internal {

bool ShortcutFunc_CF (Gtk::Widget widget, GLib::Variant args, ShortcutFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto args_to_c = gi::unwrap (args, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = _call ((::GtkWidget*) (widget_to_c), (::GVariant*) (args_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkTextCharPredicate) (gunichar ch, gpointer user_data);
// typedef gboolean (*GtkTextCharPredicate) (gunichar ch, void* user_data);
namespace internal {

bool TextCharPredicate_CF (gunichar ch, TextCharPredicate_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto ch_to_c = ch;
  auto _temp_ret = _call ((gunichar) (ch_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkTextTagTableForeach) (GtkTextTag* tag /*none*/, gpointer data);
// typedef void (*GtkTextTagTableForeach) (::GtkTextTag* tag /*none*/, void* data);
namespace internal {

void TextTagTableForeach_CF (Gtk::TextTag tag, TextTagTableForeach_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  _call ((::GtkTextTag*) (tag_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef gboolean (*GtkTickCallback) (GtkWidget* widget /*none*/, GdkFrameClock* frame_clock /*none*/, gpointer user_data);
// typedef gboolean (*GtkTickCallback) (::GtkWidget* widget /*none*/, ::GdkFrameClock* frame_clock /*none*/, void* user_data);
namespace internal {

bool TickCallback_CF (Gtk::Widget widget, Gdk::FrameClock frame_clock, TickCallback_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto frame_clock_to_c = gi::unwrap (frame_clock, gi::transfer_none);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto _temp_ret = _call ((::GtkWidget*) (widget_to_c), (::GdkFrameClock*) (frame_clock_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkTreeCellDataFunc) (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef void (*GtkTreeCellDataFunc) (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

void TreeCellDataFunc_CF (Gtk::TreeViewColumn tree_column, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, TreeCellDataFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none);
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none);
  auto tree_column_to_c = gi::unwrap (tree_column, gi::transfer_none);
  _call ((::GtkTreeViewColumn*) (tree_column_to_c), (::GtkCellRenderer*) (cell_to_c), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef int (*GtkTreeIterCompareFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* a /*none*/, GtkTreeIter* b /*none*/, gpointer user_data);
// typedef gint (*GtkTreeIterCompareFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* a /*none*/, ::GtkTreeIter* b /*none*/, void* user_data);
namespace internal {

gint TreeIterCompareFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref a, Gtk::TreeIter_Ref b, TreeIterCompareFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto b_to_c = gi::unwrap (b, gi::transfer_none);
  auto a_to_c = gi::unwrap (a, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeModel*) (model_to_c), (::GtkTreeIter*) (a_to_c), (::GtkTreeIter*) (b_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef GListModel* /*full,nullable*/ (*GtkTreeListModelCreateModelFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::GListModel* /*full,nullable*/ (*GtkTreeListModelCreateModelFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

Gio::ListModel TreeListModelCreateModelFunc_CF (GObject::Object item, TreeListModelCreateModelFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto item_to_c = gi::unwrap (item, gi::transfer_none);
  auto _temp_ret = _call ((::GObject*) (item_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
} // namespace internal


// typedef void (*GtkTreeModelFilterModifyFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* iter /*none*/, GValue* value /*none,out,ca*/, int column, gpointer data);
// typedef void (*GtkTreeModelFilterModifyFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, ::GValue* value /*none,out,ca*/, gint column, void* data);
namespace internal {

void TreeModelFilterModifyFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column, TreeModelFilterModifyFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto column_to_c = column;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  _call ((::GtkTreeModel*) (model_to_c), (::GtkTreeIter*) (iter_to_c), (::GValue*) (value_to_c), (gint) (column_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef gboolean (*GtkTreeModelFilterVisibleFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef gboolean (*GtkTreeModelFilterVisibleFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

bool TreeModelFilterVisibleFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref iter, TreeModelFilterVisibleFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeModel*) (model_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkTreeModelForeachFunc) (GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef gboolean (*GtkTreeModelForeachFunc) (::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

bool TreeModelForeachFunc_CF (Gtk::TreeModel model, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, TreeModelForeachFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeModel*) (model_to_c), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkTreeSelectionForeachFunc) (GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef void (*GtkTreeSelectionForeachFunc) (::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

void TreeSelectionForeachFunc_CF (Gtk::TreeModel model, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, TreeSelectionForeachFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  _call ((::GtkTreeModel*) (model_to_c), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (data_to_c));
}
} // namespace internal


// typedef gboolean (*GtkTreeSelectionFunc) (GtkTreeSelection* selection /*none*/, GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/, gboolean path_currently_selected, gpointer data);
// typedef gboolean (*GtkTreeSelectionFunc) (::GtkTreeSelection* selection /*none*/, ::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/, gboolean path_currently_selected, void* data);
namespace internal {

bool TreeSelectionFunc_CF (Gtk::TreeSelection selection, Gtk::TreeModel model, Gtk::TreePath_Ref path, gboolean path_currently_selected, TreeSelectionFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto path_currently_selected_to_c = path_currently_selected;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto selection_to_c = gi::unwrap (selection, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeSelection*) (selection_to_c), (::GtkTreeModel*) (model_to_c), (::GtkTreePath*) (path_to_c), (gboolean) (path_currently_selected_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkTreeViewColumnDropFunc) (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none*/, GtkTreeViewColumn* prev_column /*none*/, GtkTreeViewColumn* next_column /*none*/, gpointer data);
// typedef gboolean (*GtkTreeViewColumnDropFunc) (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none*/, ::GtkTreeViewColumn* prev_column /*none*/, ::GtkTreeViewColumn* next_column /*none*/, void* data);
namespace internal {

bool TreeViewColumnDropFunc_CF (Gtk::TreeView tree_view, Gtk::TreeViewColumn column, Gtk::TreeViewColumn prev_column, Gtk::TreeViewColumn next_column, TreeViewColumnDropFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto next_column_to_c = gi::unwrap (next_column, gi::transfer_none);
  auto prev_column_to_c = gi::unwrap (prev_column, gi::transfer_none);
  auto column_to_c = gi::unwrap (column, gi::transfer_none);
  auto tree_view_to_c = gi::unwrap (tree_view, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeView*) (tree_view_to_c), (::GtkTreeViewColumn*) (column_to_c), (::GtkTreeViewColumn*) (prev_column_to_c), (::GtkTreeViewColumn*) (next_column_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkTreeViewMappingFunc) (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, gpointer user_data);
// typedef void (*GtkTreeViewMappingFunc) (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, void* user_data);
namespace internal {

void TreeViewMappingFunc_CF (Gtk::TreeView tree_view, Gtk::TreePath_Ref path, TreeViewMappingFunc_CF_CType _call, gpointer user_data) noexcept
{
  auto user_data_to_c = user_data;
  auto path_to_c = gi::unwrap (path, gi::transfer_none);
  auto tree_view_to_c = gi::unwrap (tree_view, gi::transfer_none);
  _call ((::GtkTreeView*) (tree_view_to_c), (::GtkTreePath*) (path_to_c), (void*) (user_data_to_c));
}
} // namespace internal


// typedef gboolean (*GtkTreeViewRowSeparatorFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef gboolean (*GtkTreeViewRowSeparatorFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

bool TreeViewRowSeparatorFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref iter, TreeViewRowSeparatorFunc_CF_CType _call, gpointer data) noexcept
{
  auto data_to_c = data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeModel*) (model_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef gboolean (*GtkTreeViewSearchEqualFunc) (GtkTreeModel* model /*none*/, int column, const char* key /*none*/, GtkTreeIter* iter /*none*/, gpointer search_data);
// typedef gboolean (*GtkTreeViewSearchEqualFunc) (::GtkTreeModel* model /*none*/, gint column, const char* key /*none*/, ::GtkTreeIter* iter /*none*/, void* search_data);
namespace internal {

bool TreeViewSearchEqualFunc_CF (Gtk::TreeModel model, gint column, const gi::cstring_v key, Gtk::TreeIter_Ref iter, TreeViewSearchEqualFunc_CF_CType _call, gpointer search_data) noexcept
{
  auto search_data_to_c = search_data;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto key_to_c = gi::unwrap (key, gi::transfer_none);
  auto column_to_c = column;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  auto _temp_ret = _call ((::GtkTreeModel*) (model_to_c), (gint) (column_to_c), (const char*) (key_to_c), (::GtkTreeIter*) (iter_to_c), (void*) (search_data_to_c));
  return _temp_ret;
}
} // namespace internal


// typedef void (*GtkWidgetActionActivateFunc) (GtkWidget* widget /*none*/, const char* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// typedef void (*GtkWidgetActionActivateFunc) (::GtkWidget* widget /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
// SKIP; not a callback since no user_data

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
