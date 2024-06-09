// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEW_HPP_
#define _GI_GTK_COLUMNVIEW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColumnViewColumn;
class ListItemFactory;
class ScrollInfo;
class ScrollInfo_Ref;
class Scrollable;
class SelectionModel;
class Sorter;

class ColumnView;

namespace base {


#define GI_GTK_COLUMNVIEW_BASE base::ColumnViewBase
class ColumnViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkColumnView BaseObjectType;

ColumnViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_column_view_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* /*none*/ gtk_column_view_new (GtkSelectionModel* model /*full,nullable*/);
// ::GtkColumnView* /*none*/ gtk_column_view_new (::GtkSelectionModel* model /*full,nullable*/);
static GI_INLINE_DECL Gtk::ColumnView new_ (Gtk::SelectionModel model) noexcept;
static GI_INLINE_DECL Gtk::ColumnView new_ () noexcept;

// void gtk_column_view_append_column (GtkColumnView* self /*none*/, GtkColumnViewColumn* column /*none*/);
// void gtk_column_view_append_column (::GtkColumnView* self /*none*/, ::GtkColumnViewColumn* column /*none*/);
GI_INLINE_DECL void append_column (Gtk::ColumnViewColumn column) noexcept;

// GListModel* /*none*/ gtk_column_view_get_columns (GtkColumnView* self /*none*/);
// ::GListModel* /*none*/ gtk_column_view_get_columns (::GtkColumnView* self /*none*/);
GI_INLINE_DECL Gio::ListModel get_columns () noexcept;

// gboolean gtk_column_view_get_enable_rubberband (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_enable_rubberband (::GtkColumnView* self /*none*/);
GI_INLINE_DECL bool get_enable_rubberband () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_header_factory (GtkColumnView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_header_factory (::GtkColumnView* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_header_factory () noexcept;

// GtkSelectionModel* /*none,nullable*/ gtk_column_view_get_model (GtkColumnView* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_column_view_get_model (::GtkColumnView* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_model () noexcept;

// gboolean gtk_column_view_get_reorderable (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_reorderable (::GtkColumnView* self /*none*/);
GI_INLINE_DECL bool get_reorderable () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_row_factory (GtkColumnView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_column_view_get_row_factory (::GtkColumnView* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_row_factory () noexcept;

// gboolean gtk_column_view_get_show_column_separators (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_show_column_separators (::GtkColumnView* self /*none*/);
GI_INLINE_DECL bool get_show_column_separators () noexcept;

// gboolean gtk_column_view_get_show_row_separators (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_show_row_separators (::GtkColumnView* self /*none*/);
GI_INLINE_DECL bool get_show_row_separators () noexcept;

// gboolean gtk_column_view_get_single_click_activate (GtkColumnView* self /*none*/);
// gboolean gtk_column_view_get_single_click_activate (::GtkColumnView* self /*none*/);
GI_INLINE_DECL bool get_single_click_activate () noexcept;

// GtkSorter* /*none,nullable*/ gtk_column_view_get_sorter (GtkColumnView* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_column_view_get_sorter (::GtkColumnView* self /*none*/);
GI_INLINE_DECL Gtk::Sorter get_sorter () noexcept;

// GtkListTabBehavior gtk_column_view_get_tab_behavior (GtkColumnView* self /*none*/);
// ::GtkListTabBehavior gtk_column_view_get_tab_behavior (::GtkColumnView* self /*none*/);
GI_INLINE_DECL Gtk::ListTabBehavior get_tab_behavior () noexcept;

// void gtk_column_view_insert_column (GtkColumnView* self /*none*/, guint position, GtkColumnViewColumn* column /*none*/);
// void gtk_column_view_insert_column (::GtkColumnView* self /*none*/, guint position, ::GtkColumnViewColumn* column /*none*/);
GI_INLINE_DECL void insert_column (guint position, Gtk::ColumnViewColumn column) noexcept;

// void gtk_column_view_remove_column (GtkColumnView* self /*none*/, GtkColumnViewColumn* column /*none*/);
// void gtk_column_view_remove_column (::GtkColumnView* self /*none*/, ::GtkColumnViewColumn* column /*none*/);
GI_INLINE_DECL void remove_column (Gtk::ColumnViewColumn column) noexcept;

// void gtk_column_view_scroll_to (GtkColumnView* self /*none*/, guint pos, GtkColumnViewColumn* column /*none,nullable*/, GtkListScrollFlags flags, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_column_view_scroll_to (::GtkColumnView* self /*none*/, guint pos, ::GtkColumnViewColumn* column /*none,nullable*/, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll /*full,nullable*/);
GI_INLINE_DECL void scroll_to (guint pos, Gtk::ColumnViewColumn column, Gtk::ListScrollFlags flags, Gtk::ScrollInfo scroll) noexcept;
GI_INLINE_DECL void scroll_to (guint pos, Gtk::ListScrollFlags flags) noexcept;

// void gtk_column_view_set_enable_rubberband (GtkColumnView* self /*none*/, gboolean enable_rubberband);
// void gtk_column_view_set_enable_rubberband (::GtkColumnView* self /*none*/, gboolean enable_rubberband);
GI_INLINE_DECL void set_enable_rubberband (gboolean enable_rubberband) noexcept;

// void gtk_column_view_set_header_factory (GtkColumnView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_column_view_set_header_factory (::GtkColumnView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_header_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_header_factory () noexcept;

// void gtk_column_view_set_model (GtkColumnView* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_column_view_set_model (::GtkColumnView* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::SelectionModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_column_view_set_reorderable (GtkColumnView* self /*none*/, gboolean reorderable);
// void gtk_column_view_set_reorderable (::GtkColumnView* self /*none*/, gboolean reorderable);
GI_INLINE_DECL void set_reorderable (gboolean reorderable) noexcept;

// void gtk_column_view_set_row_factory (GtkColumnView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_column_view_set_row_factory (::GtkColumnView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_row_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_row_factory () noexcept;

// void gtk_column_view_set_show_column_separators (GtkColumnView* self /*none*/, gboolean show_column_separators);
// void gtk_column_view_set_show_column_separators (::GtkColumnView* self /*none*/, gboolean show_column_separators);
GI_INLINE_DECL void set_show_column_separators (gboolean show_column_separators) noexcept;

// void gtk_column_view_set_show_row_separators (GtkColumnView* self /*none*/, gboolean show_row_separators);
// void gtk_column_view_set_show_row_separators (::GtkColumnView* self /*none*/, gboolean show_row_separators);
GI_INLINE_DECL void set_show_row_separators (gboolean show_row_separators) noexcept;

// void gtk_column_view_set_single_click_activate (GtkColumnView* self /*none*/, gboolean single_click_activate);
// void gtk_column_view_set_single_click_activate (::GtkColumnView* self /*none*/, gboolean single_click_activate);
GI_INLINE_DECL void set_single_click_activate (gboolean single_click_activate) noexcept;

// void gtk_column_view_set_tab_behavior (GtkColumnView* self /*none*/, GtkListTabBehavior tab_behavior);
// void gtk_column_view_set_tab_behavior (::GtkColumnView* self /*none*/, ::GtkListTabBehavior tab_behavior);
GI_INLINE_DECL void set_tab_behavior (Gtk::ListTabBehavior tab_behavior) noexcept;

// void gtk_column_view_sort_by_column (GtkColumnView* self /*none*/, GtkColumnViewColumn* column /*none,nullable*/, GtkSortType direction);
// void gtk_column_view_sort_by_column (::GtkColumnView* self /*none*/, ::GtkColumnViewColumn* column /*none,nullable*/, ::GtkSortType direction);
GI_INLINE_DECL void sort_by_column (Gtk::ColumnViewColumn column, Gtk::SortType direction) noexcept;
GI_INLINE_DECL void sort_by_column (Gtk::SortType direction) noexcept;

gi::property_proxy<Gio::ListModel, base::ColumnViewBase> property_columns()
{ return gi::property_proxy<Gio::ListModel, base::ColumnViewBase> (*this, "columns"); }
const gi::property_proxy<Gio::ListModel, base::ColumnViewBase> property_columns() const
{ return gi::property_proxy<Gio::ListModel, base::ColumnViewBase> (*this, "columns"); }

gi::property_proxy<bool, base::ColumnViewBase> property_enable_rubberband()
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "enable-rubberband"); }
const gi::property_proxy<bool, base::ColumnViewBase> property_enable_rubberband() const
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "enable-rubberband"); }

gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> property_header_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> (*this, "header-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> property_header_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> (*this, "header-factory"); }

gi::property_proxy<Gtk::SelectionModel, base::ColumnViewBase> property_model()
{ return gi::property_proxy<Gtk::SelectionModel, base::ColumnViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::SelectionModel, base::ColumnViewBase> property_model() const
{ return gi::property_proxy<Gtk::SelectionModel, base::ColumnViewBase> (*this, "model"); }

gi::property_proxy<bool, base::ColumnViewBase> property_reorderable()
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::ColumnViewBase> property_reorderable() const
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "reorderable"); }

gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> property_row_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> (*this, "row-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> property_row_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewBase> (*this, "row-factory"); }

gi::property_proxy<bool, base::ColumnViewBase> property_show_column_separators()
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "show-column-separators"); }
const gi::property_proxy<bool, base::ColumnViewBase> property_show_column_separators() const
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "show-column-separators"); }

gi::property_proxy<bool, base::ColumnViewBase> property_show_row_separators()
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "show-row-separators"); }
const gi::property_proxy<bool, base::ColumnViewBase> property_show_row_separators() const
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "show-row-separators"); }

gi::property_proxy<bool, base::ColumnViewBase> property_single_click_activate()
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "single-click-activate"); }
const gi::property_proxy<bool, base::ColumnViewBase> property_single_click_activate() const
{ return gi::property_proxy<bool, base::ColumnViewBase> (*this, "single-click-activate"); }

gi::property_proxy<Gtk::Sorter, base::ColumnViewBase> property_sorter()
{ return gi::property_proxy<Gtk::Sorter, base::ColumnViewBase> (*this, "sorter"); }
const gi::property_proxy<Gtk::Sorter, base::ColumnViewBase> property_sorter() const
{ return gi::property_proxy<Gtk::Sorter, base::ColumnViewBase> (*this, "sorter"); }

gi::property_proxy<Gtk::ListTabBehavior, base::ColumnViewBase> property_tab_behavior()
{ return gi::property_proxy<Gtk::ListTabBehavior, base::ColumnViewBase> (*this, "tab-behavior"); }
const gi::property_proxy<Gtk::ListTabBehavior, base::ColumnViewBase> property_tab_behavior() const
{ return gi::property_proxy<Gtk::ListTabBehavior, base::ColumnViewBase> (*this, "tab-behavior"); }

// (signal) void activate (guint position);
// (signal) void activate (guint position);
gi::signal_proxy<void(Gtk::ColumnView, guint position)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ColumnView, guint position)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnview_extra_def.hpp>)
#include <gtk/columnview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnview_extra.hpp>)
#include <gtk/columnview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColumnView : public GI_GTK_COLUMNVIEW_BASE
{ typedef GI_GTK_COLUMNVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColumnView>
{ typedef Gtk::ColumnView type; }; 

} // namespace repository

} // namespace gi

#endif
