// AUTO-GENERATED

#ifndef _GI_GTK__CALLBACKS_HPP_
#define _GI_GTK__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

class CellLayout;
class CellRenderer;
class DrawingArea;
class EntryCompletion;
class FlowBox;
class FlowBoxChild;
class IconView;
class ListBox;
class ListBoxRow;
class MenuButton;
class PageSetup;
class PrintJob;
class Printer;
class Scale;
class TextTag;
class TreeIter;
class TreeIter_Ref;
class TreeModel;
class TreePath;
class TreePath_Ref;
class TreeSelection;
class TreeView;
class TreeViewColumn;
class Widget;

// typedef int (*GtkAssistantPageFunc) (int current_page, gpointer data);
// typedef gint (*GtkAssistantPageFunc) (gint current_page, void* data);
namespace internal {

typedef gint (*AssistantPageFunc_CF_CType) (gint current_page, void* data);
GI_INLINE_DECL gint AssistantPageFunc_CF (gint current_page, AssistantPageFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(AssistantPageFunc_CB_Trait, AssistantPageFunc_CF_CType, AssistantPageFunc_CF);
} // namespace internal

typedef gi::detail::callback<gint(gint current_page), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> AssistantPageFunc;

// typedef gboolean (*GtkCellAllocCallback) (GtkCellRenderer* renderer /*none*/, const GdkRectangle* cell_area /*none*/, const GdkRectangle* cell_background /*none*/, gpointer data);
// typedef gboolean (*GtkCellAllocCallback) (::GtkCellRenderer* renderer /*none*/, const ::GdkRectangle* cell_area /*none*/, const ::GdkRectangle* cell_background /*none*/, void* data);
namespace internal {

typedef gboolean (*CellAllocCallback_CF_CType) (::GtkCellRenderer* renderer, const ::GdkRectangle* cell_area, const ::GdkRectangle* cell_background, void* data);
GI_INLINE_DECL bool CellAllocCallback_CF (Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref cell_background, CellAllocCallback_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CellAllocCallback_CB_Trait, CellAllocCallback_CF_CType, CellAllocCallback_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::CellRenderer renderer, const Gdk::Rectangle_Ref cell_area, const Gdk::Rectangle_Ref cell_background), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> CellAllocCallback;

// typedef gboolean (*GtkCellCallback) (GtkCellRenderer* renderer /*none*/, gpointer data);
// typedef gboolean (*GtkCellCallback) (::GtkCellRenderer* renderer /*none*/, void* data);
namespace internal {

typedef gboolean (*CellCallback_CF_CType) (::GtkCellRenderer* renderer, void* data);
GI_INLINE_DECL bool CellCallback_CF (Gtk::CellRenderer renderer, CellCallback_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CellCallback_CB_Trait, CellCallback_CF_CType, CellCallback_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::CellRenderer renderer), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> CellCallback;

// typedef void (*GtkCellLayoutDataFunc) (GtkCellLayout* cell_layout /*none*/, GtkCellRenderer* cell /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef void (*GtkCellLayoutDataFunc) (::GtkCellLayout* cell_layout /*none*/, ::GtkCellRenderer* cell /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

typedef void (*CellLayoutDataFunc_CF_CType) (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, void* data);
GI_INLINE_DECL void CellLayoutDataFunc_CF (Gtk::CellLayout cell_layout, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, CellLayoutDataFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CellLayoutDataFunc_CB_Trait, CellLayoutDataFunc_CF_CType, CellLayoutDataFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::CellLayout cell_layout, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> CellLayoutDataFunc;

// typedef void (*GtkCustomAllocateFunc) (GtkWidget* widget /*none*/, int width, int height, int baseline);
// typedef void (*GtkCustomAllocateFunc) (::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
// SKIP; not a callback since no user_data

// typedef gboolean (*GtkCustomFilterFunc) (gpointer item /*none*/, gpointer user_data);
// typedef gboolean (*GtkCustomFilterFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

typedef gboolean (*CustomFilterFunc_CF_CType) (::GObject* item, void* user_data);
GI_INLINE_DECL bool CustomFilterFunc_CF (GObject::Object item, CustomFilterFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(CustomFilterFunc_CB_Trait, CustomFilterFunc_CF_CType, CustomFilterFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(GObject::Object item), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> CustomFilterFunc;

// typedef void (*GtkCustomMeasureFunc) (GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// typedef void (*GtkCustomMeasureFunc) (::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
// SKIP; not a callback since no user_data

// typedef GtkSizeRequestMode (*GtkCustomRequestModeFunc) (GtkWidget* widget /*none*/);
// typedef ::GtkSizeRequestMode (*GtkCustomRequestModeFunc) (::GtkWidget* widget /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GtkDrawingAreaDrawFunc) (GtkDrawingArea* drawing_area /*none*/, cairo_t* cr /*none*/, int width, int height, gpointer user_data);
// typedef void (*GtkDrawingAreaDrawFunc) (::GtkDrawingArea* drawing_area /*none*/, ::cairo_t* cr /*none*/, gint width, gint height, void* user_data);
namespace internal {

typedef void (*DrawingAreaDrawFunc_CF_CType) (::GtkDrawingArea* drawing_area, ::cairo_t* cr, gint width, gint height, void* user_data);
GI_INLINE_DECL void DrawingAreaDrawFunc_CF (Gtk::DrawingArea drawing_area, cairo::Context_Ref cr, gint width, gint height, DrawingAreaDrawFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(DrawingAreaDrawFunc_CB_Trait, DrawingAreaDrawFunc_CF_CType, DrawingAreaDrawFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::DrawingArea drawing_area, cairo::Context_Ref cr, gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> DrawingAreaDrawFunc;

// typedef gboolean (*GtkEntryCompletionMatchFunc) (GtkEntryCompletion* completion /*none*/, const char* key /*none*/, GtkTreeIter* iter /*none*/, gpointer user_data);
// typedef gboolean (*GtkEntryCompletionMatchFunc) (::GtkEntryCompletion* completion /*none*/, const char* key /*none*/, ::GtkTreeIter* iter /*none*/, void* user_data);
namespace internal {

typedef gboolean (*EntryCompletionMatchFunc_CF_CType) (::GtkEntryCompletion* completion, const char* key, ::GtkTreeIter* iter, void* user_data);
GI_INLINE_DECL bool EntryCompletionMatchFunc_CF (Gtk::EntryCompletion completion, const gi::cstring_v key, Gtk::TreeIter_Ref iter, EntryCompletionMatchFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(EntryCompletionMatchFunc_CB_Trait, EntryCompletionMatchFunc_CF_CType, EntryCompletionMatchFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::EntryCompletion completion, const gi::cstring_v key, Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> EntryCompletionMatchFunc;

// typedef void (*GtkExpressionNotify) (gpointer user_data);
// typedef void (*GtkExpressionNotify) (void* user_data);
namespace internal {

typedef void (*ExpressionNotify_CF_CType) (void* user_data);
GI_INLINE_DECL void ExpressionNotify_CF (ExpressionNotify_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ExpressionNotify_CB_Trait, ExpressionNotify_CF_CType, ExpressionNotify_CF);
} // namespace internal

typedef gi::detail::callback<void(), gi::transfer_full_t, std::tuple<>> ExpressionNotify;

// typedef GtkWidget* /*full*/ (*GtkFlowBoxCreateWidgetFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::GtkWidget* /*full*/ (*GtkFlowBoxCreateWidgetFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

typedef ::GtkWidget* (*FlowBoxCreateWidgetFunc_CF_CType) (::GObject* item, void* user_data);
GI_INLINE_DECL Gtk::Widget FlowBoxCreateWidgetFunc_CF (GObject::Object item, FlowBoxCreateWidgetFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FlowBoxCreateWidgetFunc_CB_Trait, FlowBoxCreateWidgetFunc_CF_CType, FlowBoxCreateWidgetFunc_CF);
} // namespace internal

typedef gi::detail::callback<Gtk::Widget(GObject::Object item), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> FlowBoxCreateWidgetFunc;

// typedef gboolean (*GtkFlowBoxFilterFunc) (GtkFlowBoxChild* child /*none*/, gpointer user_data);
// typedef gboolean (*GtkFlowBoxFilterFunc) (::GtkFlowBoxChild* child /*none*/, void* user_data);
namespace internal {

typedef gboolean (*FlowBoxFilterFunc_CF_CType) (::GtkFlowBoxChild* child, void* user_data);
GI_INLINE_DECL bool FlowBoxFilterFunc_CF (Gtk::FlowBoxChild child, FlowBoxFilterFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FlowBoxFilterFunc_CB_Trait, FlowBoxFilterFunc_CF_CType, FlowBoxFilterFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::FlowBoxChild child), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> FlowBoxFilterFunc;

// typedef void (*GtkFlowBoxForeachFunc) (GtkFlowBox* box /*none*/, GtkFlowBoxChild* child /*none*/, gpointer user_data);
// typedef void (*GtkFlowBoxForeachFunc) (::GtkFlowBox* box /*none*/, ::GtkFlowBoxChild* child /*none*/, void* user_data);
namespace internal {

typedef void (*FlowBoxForeachFunc_CF_CType) (::GtkFlowBox* box, ::GtkFlowBoxChild* child, void* user_data);
GI_INLINE_DECL void FlowBoxForeachFunc_CF (Gtk::FlowBox box, Gtk::FlowBoxChild child, FlowBoxForeachFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FlowBoxForeachFunc_CB_Trait, FlowBoxForeachFunc_CF_CType, FlowBoxForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::FlowBox box, Gtk::FlowBoxChild child), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> FlowBoxForeachFunc;

// typedef int (*GtkFlowBoxSortFunc) (GtkFlowBoxChild* child1 /*none*/, GtkFlowBoxChild* child2 /*none*/, gpointer user_data);
// typedef gint (*GtkFlowBoxSortFunc) (::GtkFlowBoxChild* child1 /*none*/, ::GtkFlowBoxChild* child2 /*none*/, void* user_data);
namespace internal {

typedef gint (*FlowBoxSortFunc_CF_CType) (::GtkFlowBoxChild* child1, ::GtkFlowBoxChild* child2, void* user_data);
GI_INLINE_DECL gint FlowBoxSortFunc_CF (Gtk::FlowBoxChild child1, Gtk::FlowBoxChild child2, FlowBoxSortFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FlowBoxSortFunc_CB_Trait, FlowBoxSortFunc_CF_CType, FlowBoxSortFunc_CF);
} // namespace internal

typedef gi::detail::callback<gint(Gtk::FlowBoxChild child1, Gtk::FlowBoxChild child2), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> FlowBoxSortFunc;

// typedef gboolean (*GtkFontFilterFunc) (const PangoFontFamily* family /*none*/, const PangoFontFace* face /*none*/, gpointer data);
// typedef gboolean (*GtkFontFilterFunc) (const ::PangoFontFamily* family /*none*/, const ::PangoFontFace* face /*none*/, void* data);
namespace internal {

typedef gboolean (*FontFilterFunc_CF_CType) (const ::PangoFontFamily* family, const ::PangoFontFace* face, void* data);
GI_INLINE_DECL bool FontFilterFunc_CF (const Pango::FontFamily & family, const Pango::FontFace & face, FontFilterFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(FontFilterFunc_CB_Trait, FontFilterFunc_CF_CType, FontFilterFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(const Pango::FontFamily & family, const Pango::FontFace & face), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> FontFilterFunc;

// typedef void (*GtkIconViewForeachFunc) (GtkIconView* icon_view /*none*/, GtkTreePath* path /*none*/, gpointer data);
// typedef void (*GtkIconViewForeachFunc) (::GtkIconView* icon_view /*none*/, ::GtkTreePath* path /*none*/, void* data);
namespace internal {

typedef void (*IconViewForeachFunc_CF_CType) (::GtkIconView* icon_view, ::GtkTreePath* path, void* data);
GI_INLINE_DECL void IconViewForeachFunc_CF (Gtk::IconView icon_view, Gtk::TreePath_Ref path, IconViewForeachFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(IconViewForeachFunc_CB_Trait, IconViewForeachFunc_CF_CType, IconViewForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::IconView icon_view, Gtk::TreePath_Ref path), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> IconViewForeachFunc;

// typedef GtkWidget* /*full*/ (*GtkListBoxCreateWidgetFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::GtkWidget* /*full*/ (*GtkListBoxCreateWidgetFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

typedef ::GtkWidget* (*ListBoxCreateWidgetFunc_CF_CType) (::GObject* item, void* user_data);
GI_INLINE_DECL Gtk::Widget ListBoxCreateWidgetFunc_CF (GObject::Object item, ListBoxCreateWidgetFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ListBoxCreateWidgetFunc_CB_Trait, ListBoxCreateWidgetFunc_CF_CType, ListBoxCreateWidgetFunc_CF);
} // namespace internal

typedef gi::detail::callback<Gtk::Widget(GObject::Object item), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> ListBoxCreateWidgetFunc;

// typedef gboolean (*GtkListBoxFilterFunc) (GtkListBoxRow* row /*none*/, gpointer user_data);
// typedef gboolean (*GtkListBoxFilterFunc) (::GtkListBoxRow* row /*none*/, void* user_data);
namespace internal {

typedef gboolean (*ListBoxFilterFunc_CF_CType) (::GtkListBoxRow* row, void* user_data);
GI_INLINE_DECL bool ListBoxFilterFunc_CF (Gtk::ListBoxRow row, ListBoxFilterFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ListBoxFilterFunc_CB_Trait, ListBoxFilterFunc_CF_CType, ListBoxFilterFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::ListBoxRow row), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> ListBoxFilterFunc;

// typedef void (*GtkListBoxForeachFunc) (GtkListBox* box /*none*/, GtkListBoxRow* row /*none*/, gpointer user_data);
// typedef void (*GtkListBoxForeachFunc) (::GtkListBox* box /*none*/, ::GtkListBoxRow* row /*none*/, void* user_data);
namespace internal {

typedef void (*ListBoxForeachFunc_CF_CType) (::GtkListBox* box, ::GtkListBoxRow* row, void* user_data);
GI_INLINE_DECL void ListBoxForeachFunc_CF (Gtk::ListBox box, Gtk::ListBoxRow row, ListBoxForeachFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ListBoxForeachFunc_CB_Trait, ListBoxForeachFunc_CF_CType, ListBoxForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::ListBox box, Gtk::ListBoxRow row), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> ListBoxForeachFunc;

// typedef int (*GtkListBoxSortFunc) (GtkListBoxRow* row1 /*none*/, GtkListBoxRow* row2 /*none*/, gpointer user_data);
// typedef gint (*GtkListBoxSortFunc) (::GtkListBoxRow* row1 /*none*/, ::GtkListBoxRow* row2 /*none*/, void* user_data);
namespace internal {

typedef gint (*ListBoxSortFunc_CF_CType) (::GtkListBoxRow* row1, ::GtkListBoxRow* row2, void* user_data);
GI_INLINE_DECL gint ListBoxSortFunc_CF (Gtk::ListBoxRow row1, Gtk::ListBoxRow row2, ListBoxSortFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ListBoxSortFunc_CB_Trait, ListBoxSortFunc_CF_CType, ListBoxSortFunc_CF);
} // namespace internal

typedef gi::detail::callback<gint(Gtk::ListBoxRow row1, Gtk::ListBoxRow row2), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> ListBoxSortFunc;

// typedef void (*GtkListBoxUpdateHeaderFunc) (GtkListBoxRow* row /*none*/, GtkListBoxRow* before /*none,nullable*/, gpointer user_data);
// typedef void (*GtkListBoxUpdateHeaderFunc) (::GtkListBoxRow* row /*none*/, ::GtkListBoxRow* before /*none,nullable*/, void* user_data);
namespace internal {

typedef void (*ListBoxUpdateHeaderFunc_CF_CType) (::GtkListBoxRow* row, ::GtkListBoxRow* before, void* user_data);
GI_INLINE_DECL void ListBoxUpdateHeaderFunc_CF (Gtk::ListBoxRow row, Gtk::ListBoxRow before, ListBoxUpdateHeaderFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ListBoxUpdateHeaderFunc_CB_Trait, ListBoxUpdateHeaderFunc_CF_CType, ListBoxUpdateHeaderFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::ListBoxRow row, Gtk::ListBoxRow before), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> ListBoxUpdateHeaderFunc;

// typedef gpointer /*full*/ (*GtkMapListModelMapFunc) (gpointer item /*full*/, gpointer user_data);
// typedef ::GObject* /*full*/ (*GtkMapListModelMapFunc) (::GObject* item /*full*/, void* user_data);
namespace internal {

typedef ::GObject* (*MapListModelMapFunc_CF_CType) (::GObject* item, void* user_data);
GI_INLINE_DECL GObject::Object MapListModelMapFunc_CF (GObject::Object item, MapListModelMapFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(MapListModelMapFunc_CB_Trait, MapListModelMapFunc_CF_CType, MapListModelMapFunc_CF);
} // namespace internal

typedef gi::detail::callback<GObject::Object(GObject::Object item), gi::transfer_full_t, std::tuple<gi::transfer_full_t>> MapListModelMapFunc;

// typedef void (*GtkMenuButtonCreatePopupFunc) (GtkMenuButton* menu_button /*none*/, gpointer user_data);
// typedef void (*GtkMenuButtonCreatePopupFunc) (::GtkMenuButton* menu_button /*none*/, void* user_data);
namespace internal {

typedef void (*MenuButtonCreatePopupFunc_CF_CType) (::GtkMenuButton* menu_button, void* user_data);
GI_INLINE_DECL void MenuButtonCreatePopupFunc_CF (Gtk::MenuButton menu_button, MenuButtonCreatePopupFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(MenuButtonCreatePopupFunc_CB_Trait, MenuButtonCreatePopupFunc_CF_CType, MenuButtonCreatePopupFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::MenuButton menu_button), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> MenuButtonCreatePopupFunc;

// typedef void (*GtkPageSetupDoneFunc) (GtkPageSetup* page_setup /*none*/, gpointer data);
// typedef void (*GtkPageSetupDoneFunc) (::GtkPageSetup* page_setup /*none*/, void* data);
namespace internal {

typedef void (*PageSetupDoneFunc_CF_CType) (::GtkPageSetup* page_setup, void* data);
GI_INLINE_DECL void PageSetupDoneFunc_CF (Gtk::PageSetup page_setup, PageSetupDoneFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PageSetupDoneFunc_CB_Trait, PageSetupDoneFunc_CF_CType, PageSetupDoneFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::PageSetup page_setup), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> PageSetupDoneFunc;

// typedef void (*GtkPrintJobCompleteFunc) (GtkPrintJob* print_job /*none*/, gpointer user_data, const GError* error /*none*/);
// typedef void (*GtkPrintJobCompleteFunc) (::GtkPrintJob* print_job /*none*/, void* user_data, const ::GError* error /*none*/);
// SKIP; not a callback since no user_data

// typedef void (*GtkPrintSettingsFunc) (const char* key /*none*/, const char* value /*none*/, gpointer user_data);
// typedef void (*GtkPrintSettingsFunc) (const char* key /*none*/, const char* value /*none*/, void* user_data);
namespace internal {

typedef void (*PrintSettingsFunc_CF_CType) (const char* key, const char* value, void* user_data);
GI_INLINE_DECL void PrintSettingsFunc_CF (const gi::cstring_v key, const gi::cstring_v value, PrintSettingsFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PrintSettingsFunc_CB_Trait, PrintSettingsFunc_CF_CType, PrintSettingsFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(const gi::cstring_v key, const gi::cstring_v value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> PrintSettingsFunc;

// typedef gboolean (*GtkPrinterFunc) (GtkPrinter* printer /*none*/, gpointer data);
// typedef gboolean (*GtkPrinterFunc) (::GtkPrinter* printer /*none*/, void* data);
namespace internal {

typedef gboolean (*PrinterFunc_CF_CType) (::GtkPrinter* printer, void* data);
GI_INLINE_DECL bool PrinterFunc_CF (Gtk::Printer printer, PrinterFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(PrinterFunc_CB_Trait, PrinterFunc_CF_CType, PrinterFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::Printer printer), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> PrinterFunc;

// typedef char* /*full*/ (*GtkScaleFormatValueFunc) (GtkScale* scale /*none*/, double value, gpointer user_data);
// typedef char* /*full*/ (*GtkScaleFormatValueFunc) (::GtkScale* scale /*none*/, gdouble value, void* user_data);
namespace internal {

typedef char* (*ScaleFormatValueFunc_CF_CType) (::GtkScale* scale, gdouble value, void* user_data);
GI_INLINE_DECL gi::cstring ScaleFormatValueFunc_CF (Gtk::Scale scale, gdouble value, ScaleFormatValueFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ScaleFormatValueFunc_CB_Trait, ScaleFormatValueFunc_CF_CType, ScaleFormatValueFunc_CF);
} // namespace internal

typedef gi::detail::callback<gi::cstring(Gtk::Scale scale, gdouble value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> ScaleFormatValueFunc;

// typedef gboolean (*GtkShortcutFunc) (GtkWidget* widget /*none*/, GVariant* args /*none,nullable*/, gpointer user_data);
// typedef gboolean (*GtkShortcutFunc) (::GtkWidget* widget /*none*/, ::GVariant* args /*none,nullable*/, void* user_data);
namespace internal {

typedef gboolean (*ShortcutFunc_CF_CType) (::GtkWidget* widget, ::GVariant* args, void* user_data);
GI_INLINE_DECL bool ShortcutFunc_CF (Gtk::Widget widget, GLib::Variant args, ShortcutFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(ShortcutFunc_CB_Trait, ShortcutFunc_CF_CType, ShortcutFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::Widget widget, GLib::Variant args), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> ShortcutFunc;

// typedef gboolean (*GtkTextCharPredicate) (gunichar ch, gpointer user_data);
// typedef gboolean (*GtkTextCharPredicate) (gunichar ch, void* user_data);
namespace internal {

typedef gboolean (*TextCharPredicate_CF_CType) (gunichar ch, void* user_data);
GI_INLINE_DECL bool TextCharPredicate_CF (gunichar ch, TextCharPredicate_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TextCharPredicate_CB_Trait, TextCharPredicate_CF_CType, TextCharPredicate_CF);
} // namespace internal

typedef gi::detail::callback<bool(gunichar ch), gi::transfer_none_t, std::tuple<gi::transfer_none_t>> TextCharPredicate;

// typedef void (*GtkTextTagTableForeach) (GtkTextTag* tag /*none*/, gpointer data);
// typedef void (*GtkTextTagTableForeach) (::GtkTextTag* tag /*none*/, void* data);
namespace internal {

typedef void (*TextTagTableForeach_CF_CType) (::GtkTextTag* tag, void* data);
GI_INLINE_DECL void TextTagTableForeach_CF (Gtk::TextTag tag, TextTagTableForeach_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TextTagTableForeach_CB_Trait, TextTagTableForeach_CF_CType, TextTagTableForeach_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::TextTag tag), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> TextTagTableForeach;

// typedef gboolean (*GtkTickCallback) (GtkWidget* widget /*none*/, GdkFrameClock* frame_clock /*none*/, gpointer user_data);
// typedef gboolean (*GtkTickCallback) (::GtkWidget* widget /*none*/, ::GdkFrameClock* frame_clock /*none*/, void* user_data);
namespace internal {

typedef gboolean (*TickCallback_CF_CType) (::GtkWidget* widget, ::GdkFrameClock* frame_clock, void* user_data);
GI_INLINE_DECL bool TickCallback_CF (Gtk::Widget widget, Gdk::FrameClock frame_clock, TickCallback_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TickCallback_CB_Trait, TickCallback_CF_CType, TickCallback_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::Widget widget, Gdk::FrameClock frame_clock), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> TickCallback;

// typedef void (*GtkTreeCellDataFunc) (GtkTreeViewColumn* tree_column /*none*/, GtkCellRenderer* cell /*none*/, GtkTreeModel* tree_model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef void (*GtkTreeCellDataFunc) (::GtkTreeViewColumn* tree_column /*none*/, ::GtkCellRenderer* cell /*none*/, ::GtkTreeModel* tree_model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

typedef void (*TreeCellDataFunc_CF_CType) (::GtkTreeViewColumn* tree_column, ::GtkCellRenderer* cell, ::GtkTreeModel* tree_model, ::GtkTreeIter* iter, void* data);
GI_INLINE_DECL void TreeCellDataFunc_CF (Gtk::TreeViewColumn tree_column, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter, TreeCellDataFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeCellDataFunc_CB_Trait, TreeCellDataFunc_CF_CType, TreeCellDataFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::TreeViewColumn tree_column, Gtk::CellRenderer cell, Gtk::TreeModel tree_model, Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeCellDataFunc;

// typedef int (*GtkTreeIterCompareFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* a /*none*/, GtkTreeIter* b /*none*/, gpointer user_data);
// typedef gint (*GtkTreeIterCompareFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* a /*none*/, ::GtkTreeIter* b /*none*/, void* user_data);
namespace internal {

typedef gint (*TreeIterCompareFunc_CF_CType) (::GtkTreeModel* model, ::GtkTreeIter* a, ::GtkTreeIter* b, void* user_data);
GI_INLINE_DECL gint TreeIterCompareFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref a, Gtk::TreeIter_Ref b, TreeIterCompareFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeIterCompareFunc_CB_Trait, TreeIterCompareFunc_CF_CType, TreeIterCompareFunc_CF);
} // namespace internal

typedef gi::detail::callback<gint(Gtk::TreeModel model, Gtk::TreeIter_Ref a, Gtk::TreeIter_Ref b), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeIterCompareFunc;

// typedef GListModel* /*full,nullable*/ (*GtkTreeListModelCreateModelFunc) (gpointer item /*none*/, gpointer user_data);
// typedef ::GListModel* /*full,nullable*/ (*GtkTreeListModelCreateModelFunc) (::GObject* item /*none*/, void* user_data);
namespace internal {

typedef ::GListModel* (*TreeListModelCreateModelFunc_CF_CType) (::GObject* item, void* user_data);
GI_INLINE_DECL Gio::ListModel TreeListModelCreateModelFunc_CF (GObject::Object item, TreeListModelCreateModelFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeListModelCreateModelFunc_CB_Trait, TreeListModelCreateModelFunc_CF_CType, TreeListModelCreateModelFunc_CF);
} // namespace internal

typedef gi::detail::callback<Gio::ListModel(GObject::Object item), gi::transfer_full_t, std::tuple<gi::transfer_none_t>> TreeListModelCreateModelFunc;

// typedef void (*GtkTreeModelFilterModifyFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* iter /*none*/, GValue* value /*none,out,ca*/, int column, gpointer data);
// typedef void (*GtkTreeModelFilterModifyFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, ::GValue* value /*none,out,ca*/, gint column, void* data);
namespace internal {

typedef void (*TreeModelFilterModifyFunc_CF_CType) (::GtkTreeModel* model, ::GtkTreeIter* iter, ::GValue* value, gint column, void* data);
GI_INLINE_DECL void TreeModelFilterModifyFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column, TreeModelFilterModifyFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeModelFilterModifyFunc_CB_Trait, TreeModelFilterModifyFunc_CF_CType, TreeModelFilterModifyFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::TreeModel model, Gtk::TreeIter_Ref iter, GObject::Value_Ref value, gint column), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeModelFilterModifyFunc;

// typedef gboolean (*GtkTreeModelFilterVisibleFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef gboolean (*GtkTreeModelFilterVisibleFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

typedef gboolean (*TreeModelFilterVisibleFunc_CF_CType) (::GtkTreeModel* model, ::GtkTreeIter* iter, void* data);
GI_INLINE_DECL bool TreeModelFilterVisibleFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref iter, TreeModelFilterVisibleFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeModelFilterVisibleFunc_CB_Trait, TreeModelFilterVisibleFunc_CF_CType, TreeModelFilterVisibleFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::TreeModel model, Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> TreeModelFilterVisibleFunc;

// typedef gboolean (*GtkTreeModelForeachFunc) (GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef gboolean (*GtkTreeModelForeachFunc) (::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

typedef gboolean (*TreeModelForeachFunc_CF_CType) (::GtkTreeModel* model, ::GtkTreePath* path, ::GtkTreeIter* iter, void* data);
GI_INLINE_DECL bool TreeModelForeachFunc_CF (Gtk::TreeModel model, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, TreeModelForeachFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeModelForeachFunc_CB_Trait, TreeModelForeachFunc_CF_CType, TreeModelForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::TreeModel model, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeModelForeachFunc;

// typedef void (*GtkTreeSelectionForeachFunc) (GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef void (*GtkTreeSelectionForeachFunc) (::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

typedef void (*TreeSelectionForeachFunc_CF_CType) (::GtkTreeModel* model, ::GtkTreePath* path, ::GtkTreeIter* iter, void* data);
GI_INLINE_DECL void TreeSelectionForeachFunc_CF (Gtk::TreeModel model, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter, TreeSelectionForeachFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeSelectionForeachFunc_CB_Trait, TreeSelectionForeachFunc_CF_CType, TreeSelectionForeachFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::TreeModel model, Gtk::TreePath_Ref path, Gtk::TreeIter_Ref iter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeSelectionForeachFunc;

// typedef gboolean (*GtkTreeSelectionFunc) (GtkTreeSelection* selection /*none*/, GtkTreeModel* model /*none*/, GtkTreePath* path /*none*/, gboolean path_currently_selected, gpointer data);
// typedef gboolean (*GtkTreeSelectionFunc) (::GtkTreeSelection* selection /*none*/, ::GtkTreeModel* model /*none*/, ::GtkTreePath* path /*none*/, gboolean path_currently_selected, void* data);
namespace internal {

typedef gboolean (*TreeSelectionFunc_CF_CType) (::GtkTreeSelection* selection, ::GtkTreeModel* model, ::GtkTreePath* path, gboolean path_currently_selected, void* data);
GI_INLINE_DECL bool TreeSelectionFunc_CF (Gtk::TreeSelection selection, Gtk::TreeModel model, Gtk::TreePath_Ref path, gboolean path_currently_selected, TreeSelectionFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeSelectionFunc_CB_Trait, TreeSelectionFunc_CF_CType, TreeSelectionFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::TreeSelection selection, Gtk::TreeModel model, Gtk::TreePath_Ref path, gboolean path_currently_selected), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeSelectionFunc;

// typedef gboolean (*GtkTreeViewColumnDropFunc) (GtkTreeView* tree_view /*none*/, GtkTreeViewColumn* column /*none*/, GtkTreeViewColumn* prev_column /*none*/, GtkTreeViewColumn* next_column /*none*/, gpointer data);
// typedef gboolean (*GtkTreeViewColumnDropFunc) (::GtkTreeView* tree_view /*none*/, ::GtkTreeViewColumn* column /*none*/, ::GtkTreeViewColumn* prev_column /*none*/, ::GtkTreeViewColumn* next_column /*none*/, void* data);
namespace internal {

typedef gboolean (*TreeViewColumnDropFunc_CF_CType) (::GtkTreeView* tree_view, ::GtkTreeViewColumn* column, ::GtkTreeViewColumn* prev_column, ::GtkTreeViewColumn* next_column, void* data);
GI_INLINE_DECL bool TreeViewColumnDropFunc_CF (Gtk::TreeView tree_view, Gtk::TreeViewColumn column, Gtk::TreeViewColumn prev_column, Gtk::TreeViewColumn next_column, TreeViewColumnDropFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeViewColumnDropFunc_CB_Trait, TreeViewColumnDropFunc_CF_CType, TreeViewColumnDropFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::TreeView tree_view, Gtk::TreeViewColumn column, Gtk::TreeViewColumn prev_column, Gtk::TreeViewColumn next_column), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeViewColumnDropFunc;

// typedef void (*GtkTreeViewMappingFunc) (GtkTreeView* tree_view /*none*/, GtkTreePath* path /*none*/, gpointer user_data);
// typedef void (*GtkTreeViewMappingFunc) (::GtkTreeView* tree_view /*none*/, ::GtkTreePath* path /*none*/, void* user_data);
namespace internal {

typedef void (*TreeViewMappingFunc_CF_CType) (::GtkTreeView* tree_view, ::GtkTreePath* path, void* user_data);
GI_INLINE_DECL void TreeViewMappingFunc_CF (Gtk::TreeView tree_view, Gtk::TreePath_Ref path, TreeViewMappingFunc_CF_CType _call, gpointer user_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeViewMappingFunc_CB_Trait, TreeViewMappingFunc_CF_CType, TreeViewMappingFunc_CF);
} // namespace internal

typedef gi::detail::callback<void(Gtk::TreeView tree_view, Gtk::TreePath_Ref path), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> TreeViewMappingFunc;

// typedef gboolean (*GtkTreeViewRowSeparatorFunc) (GtkTreeModel* model /*none*/, GtkTreeIter* iter /*none*/, gpointer data);
// typedef gboolean (*GtkTreeViewRowSeparatorFunc) (::GtkTreeModel* model /*none*/, ::GtkTreeIter* iter /*none*/, void* data);
namespace internal {

typedef gboolean (*TreeViewRowSeparatorFunc_CF_CType) (::GtkTreeModel* model, ::GtkTreeIter* iter, void* data);
GI_INLINE_DECL bool TreeViewRowSeparatorFunc_CF (Gtk::TreeModel model, Gtk::TreeIter_Ref iter, TreeViewRowSeparatorFunc_CF_CType _call, gpointer data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeViewRowSeparatorFunc_CB_Trait, TreeViewRowSeparatorFunc_CF_CType, TreeViewRowSeparatorFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::TreeModel model, Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>> TreeViewRowSeparatorFunc;

// typedef gboolean (*GtkTreeViewSearchEqualFunc) (GtkTreeModel* model /*none*/, int column, const char* key /*none*/, GtkTreeIter* iter /*none*/, gpointer search_data);
// typedef gboolean (*GtkTreeViewSearchEqualFunc) (::GtkTreeModel* model /*none*/, gint column, const char* key /*none*/, ::GtkTreeIter* iter /*none*/, void* search_data);
namespace internal {

typedef gboolean (*TreeViewSearchEqualFunc_CF_CType) (::GtkTreeModel* model, gint column, const char* key, ::GtkTreeIter* iter, void* search_data);
GI_INLINE_DECL bool TreeViewSearchEqualFunc_CF (Gtk::TreeModel model, gint column, const gi::cstring_v key, Gtk::TreeIter_Ref iter, TreeViewSearchEqualFunc_CF_CType _call, gpointer search_data) noexcept;
GI_CB_ARG_CALLBACK_CUSTOM(TreeViewSearchEqualFunc_CB_Trait, TreeViewSearchEqualFunc_CF_CType, TreeViewSearchEqualFunc_CF);
} // namespace internal

typedef gi::detail::callback<bool(Gtk::TreeModel model, gint column, const gi::cstring_v key, Gtk::TreeIter_Ref iter), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>> TreeViewSearchEqualFunc;

// typedef void (*GtkWidgetActionActivateFunc) (GtkWidget* widget /*none*/, const char* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// typedef void (*GtkWidgetActionActivateFunc) (::GtkWidget* widget /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
// SKIP; not a callback since no user_data

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
