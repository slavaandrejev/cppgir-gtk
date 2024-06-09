// AUTO-GENERATED

#ifndef _GI_GTK_GRIDVIEW_HPP_
#define _GI_GTK_GRIDVIEW_HPP_

#include "listbase.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ListItemFactory;
class ScrollInfo;
class ScrollInfo_Ref;
class SelectionModel;

class GridView;

namespace base {


#define GI_GTK_GRIDVIEW_BASE base::GridViewBase
class GridViewBase : public Gtk::ListBase
{
typedef Gtk::ListBase super_type;
public:
typedef ::GtkGridView BaseObjectType;

GridViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_grid_view_get_type(); } 

// GtkWidget* /*none*/ gtk_grid_view_new (GtkSelectionModel* model /*full,nullable*/, GtkListItemFactory* factory /*full,nullable*/);
// ::GtkGridView* /*none*/ gtk_grid_view_new (::GtkSelectionModel* model /*full,nullable*/, ::GtkListItemFactory* factory /*full,nullable*/);
static GI_INLINE_DECL Gtk::GridView new_ (Gtk::SelectionModel model, Gtk::ListItemFactory factory) noexcept;
static GI_INLINE_DECL Gtk::GridView new_ () noexcept;

// gboolean gtk_grid_view_get_enable_rubberband (GtkGridView* self /*none*/);
// gboolean gtk_grid_view_get_enable_rubberband (::GtkGridView* self /*none*/);
GI_INLINE_DECL bool get_enable_rubberband () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_grid_view_get_factory (GtkGridView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_grid_view_get_factory (::GtkGridView* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_factory () noexcept;

// guint gtk_grid_view_get_max_columns (GtkGridView* self /*none*/);
// guint gtk_grid_view_get_max_columns (::GtkGridView* self /*none*/);
GI_INLINE_DECL guint get_max_columns () noexcept;

// guint gtk_grid_view_get_min_columns (GtkGridView* self /*none*/);
// guint gtk_grid_view_get_min_columns (::GtkGridView* self /*none*/);
GI_INLINE_DECL guint get_min_columns () noexcept;

// GtkSelectionModel* /*none,nullable*/ gtk_grid_view_get_model (GtkGridView* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_grid_view_get_model (::GtkGridView* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_model () noexcept;

// gboolean gtk_grid_view_get_single_click_activate (GtkGridView* self /*none*/);
// gboolean gtk_grid_view_get_single_click_activate (::GtkGridView* self /*none*/);
GI_INLINE_DECL bool get_single_click_activate () noexcept;

// GtkListTabBehavior gtk_grid_view_get_tab_behavior (GtkGridView* self /*none*/);
// ::GtkListTabBehavior gtk_grid_view_get_tab_behavior (::GtkGridView* self /*none*/);
GI_INLINE_DECL Gtk::ListTabBehavior get_tab_behavior () noexcept;

// void gtk_grid_view_scroll_to (GtkGridView* self /*none*/, guint pos, GtkListScrollFlags flags, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_grid_view_scroll_to (::GtkGridView* self /*none*/, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll /*full,nullable*/);
GI_INLINE_DECL void scroll_to (guint pos, Gtk::ListScrollFlags flags, Gtk::ScrollInfo scroll) noexcept;
GI_INLINE_DECL void scroll_to (guint pos, Gtk::ListScrollFlags flags) noexcept;

// void gtk_grid_view_set_enable_rubberband (GtkGridView* self /*none*/, gboolean enable_rubberband);
// void gtk_grid_view_set_enable_rubberband (::GtkGridView* self /*none*/, gboolean enable_rubberband);
GI_INLINE_DECL void set_enable_rubberband (gboolean enable_rubberband) noexcept;

// void gtk_grid_view_set_factory (GtkGridView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_grid_view_set_factory (::GtkGridView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_factory () noexcept;

// void gtk_grid_view_set_max_columns (GtkGridView* self /*none*/, guint max_columns);
// void gtk_grid_view_set_max_columns (::GtkGridView* self /*none*/, guint max_columns);
GI_INLINE_DECL void set_max_columns (guint max_columns) noexcept;

// void gtk_grid_view_set_min_columns (GtkGridView* self /*none*/, guint min_columns);
// void gtk_grid_view_set_min_columns (::GtkGridView* self /*none*/, guint min_columns);
GI_INLINE_DECL void set_min_columns (guint min_columns) noexcept;

// void gtk_grid_view_set_model (GtkGridView* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_grid_view_set_model (::GtkGridView* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::SelectionModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_grid_view_set_single_click_activate (GtkGridView* self /*none*/, gboolean single_click_activate);
// void gtk_grid_view_set_single_click_activate (::GtkGridView* self /*none*/, gboolean single_click_activate);
GI_INLINE_DECL void set_single_click_activate (gboolean single_click_activate) noexcept;

// void gtk_grid_view_set_tab_behavior (GtkGridView* self /*none*/, GtkListTabBehavior tab_behavior);
// void gtk_grid_view_set_tab_behavior (::GtkGridView* self /*none*/, ::GtkListTabBehavior tab_behavior);
GI_INLINE_DECL void set_tab_behavior (Gtk::ListTabBehavior tab_behavior) noexcept;

gi::property_proxy<bool, base::GridViewBase> property_enable_rubberband()
{ return gi::property_proxy<bool, base::GridViewBase> (*this, "enable-rubberband"); }
const gi::property_proxy<bool, base::GridViewBase> property_enable_rubberband() const
{ return gi::property_proxy<bool, base::GridViewBase> (*this, "enable-rubberband"); }

gi::property_proxy<Gtk::ListItemFactory, base::GridViewBase> property_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::GridViewBase> (*this, "factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::GridViewBase> property_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::GridViewBase> (*this, "factory"); }

gi::property_proxy<guint, base::GridViewBase> property_max_columns()
{ return gi::property_proxy<guint, base::GridViewBase> (*this, "max-columns"); }
const gi::property_proxy<guint, base::GridViewBase> property_max_columns() const
{ return gi::property_proxy<guint, base::GridViewBase> (*this, "max-columns"); }

gi::property_proxy<guint, base::GridViewBase> property_min_columns()
{ return gi::property_proxy<guint, base::GridViewBase> (*this, "min-columns"); }
const gi::property_proxy<guint, base::GridViewBase> property_min_columns() const
{ return gi::property_proxy<guint, base::GridViewBase> (*this, "min-columns"); }

gi::property_proxy<Gtk::SelectionModel, base::GridViewBase> property_model()
{ return gi::property_proxy<Gtk::SelectionModel, base::GridViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::SelectionModel, base::GridViewBase> property_model() const
{ return gi::property_proxy<Gtk::SelectionModel, base::GridViewBase> (*this, "model"); }

gi::property_proxy<bool, base::GridViewBase> property_single_click_activate()
{ return gi::property_proxy<bool, base::GridViewBase> (*this, "single-click-activate"); }
const gi::property_proxy<bool, base::GridViewBase> property_single_click_activate() const
{ return gi::property_proxy<bool, base::GridViewBase> (*this, "single-click-activate"); }

gi::property_proxy<Gtk::ListTabBehavior, base::GridViewBase> property_tab_behavior()
{ return gi::property_proxy<Gtk::ListTabBehavior, base::GridViewBase> (*this, "tab-behavior"); }
const gi::property_proxy<Gtk::ListTabBehavior, base::GridViewBase> property_tab_behavior() const
{ return gi::property_proxy<Gtk::ListTabBehavior, base::GridViewBase> (*this, "tab-behavior"); }

// (signal) void activate (guint position);
// (signal) void activate (guint position);
gi::signal_proxy<void(Gtk::GridView, guint position)> signal_activate()
{ return gi::signal_proxy<void(Gtk::GridView, guint position)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gridview_extra_def.hpp>)
#include <gtk/gridview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gridview_extra.hpp>)
#include <gtk/gridview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GridView : public GI_GTK_GRIDVIEW_BASE
{ typedef GI_GTK_GRIDVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGridView>
{ typedef Gtk::GridView type; }; 

} // namespace repository

} // namespace gi

#endif
