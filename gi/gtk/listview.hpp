// AUTO-GENERATED

#ifndef _GI_GTK_LISTVIEW_HPP_
#define _GI_GTK_LISTVIEW_HPP_

#include "listbase.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ListItemFactory;
class ScrollInfo;
class ScrollInfo_Ref;
class SelectionModel;

class ListView;

namespace base {


#define GI_GTK_LISTVIEW_BASE base::ListViewBase
class ListViewBase : public Gtk::ListBase
{
typedef Gtk::ListBase super_type;
public:
typedef ::GtkListView BaseObjectType;

ListViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_view_get_type(); } 

// GtkWidget* /*none*/ gtk_list_view_new (GtkSelectionModel* model /*full,nullable*/, GtkListItemFactory* factory /*full,nullable*/);
// ::GtkListView* /*none*/ gtk_list_view_new (::GtkSelectionModel* model /*full,nullable*/, ::GtkListItemFactory* factory /*full,nullable*/);
static GI_INLINE_DECL Gtk::ListView new_ (Gtk::SelectionModel model, Gtk::ListItemFactory factory) noexcept;
static GI_INLINE_DECL Gtk::ListView new_ () noexcept;

// gboolean gtk_list_view_get_enable_rubberband (GtkListView* self /*none*/);
// gboolean gtk_list_view_get_enable_rubberband (::GtkListView* self /*none*/);
GI_INLINE_DECL bool get_enable_rubberband () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_factory (GtkListView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_factory (::GtkListView* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_factory () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_header_factory (GtkListView* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_list_view_get_header_factory (::GtkListView* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_header_factory () noexcept;

// GtkSelectionModel* /*none,nullable*/ gtk_list_view_get_model (GtkListView* self /*none*/);
// ::GtkSelectionModel* /*none,nullable*/ gtk_list_view_get_model (::GtkListView* self /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_model () noexcept;

// gboolean gtk_list_view_get_show_separators (GtkListView* self /*none*/);
// gboolean gtk_list_view_get_show_separators (::GtkListView* self /*none*/);
GI_INLINE_DECL bool get_show_separators () noexcept;

// gboolean gtk_list_view_get_single_click_activate (GtkListView* self /*none*/);
// gboolean gtk_list_view_get_single_click_activate (::GtkListView* self /*none*/);
GI_INLINE_DECL bool get_single_click_activate () noexcept;

// GtkListTabBehavior gtk_list_view_get_tab_behavior (GtkListView* self /*none*/);
// ::GtkListTabBehavior gtk_list_view_get_tab_behavior (::GtkListView* self /*none*/);
GI_INLINE_DECL Gtk::ListTabBehavior get_tab_behavior () noexcept;

// void gtk_list_view_scroll_to (GtkListView* self /*none*/, guint pos, GtkListScrollFlags flags, GtkScrollInfo* scroll /*full,nullable*/);
// void gtk_list_view_scroll_to (::GtkListView* self /*none*/, guint pos, ::GtkListScrollFlags flags, ::GtkScrollInfo* scroll /*full,nullable*/);
GI_INLINE_DECL void scroll_to (guint pos, Gtk::ListScrollFlags flags, Gtk::ScrollInfo scroll) noexcept;
GI_INLINE_DECL void scroll_to (guint pos, Gtk::ListScrollFlags flags) noexcept;

// void gtk_list_view_set_enable_rubberband (GtkListView* self /*none*/, gboolean enable_rubberband);
// void gtk_list_view_set_enable_rubberband (::GtkListView* self /*none*/, gboolean enable_rubberband);
GI_INLINE_DECL void set_enable_rubberband (gboolean enable_rubberband) noexcept;

// void gtk_list_view_set_factory (GtkListView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_list_view_set_factory (::GtkListView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_factory () noexcept;

// void gtk_list_view_set_header_factory (GtkListView* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_list_view_set_header_factory (::GtkListView* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_header_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_header_factory () noexcept;

// void gtk_list_view_set_model (GtkListView* self /*none*/, GtkSelectionModel* model /*none,nullable*/);
// void gtk_list_view_set_model (::GtkListView* self /*none*/, ::GtkSelectionModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::SelectionModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_list_view_set_show_separators (GtkListView* self /*none*/, gboolean show_separators);
// void gtk_list_view_set_show_separators (::GtkListView* self /*none*/, gboolean show_separators);
GI_INLINE_DECL void set_show_separators (gboolean show_separators) noexcept;

// void gtk_list_view_set_single_click_activate (GtkListView* self /*none*/, gboolean single_click_activate);
// void gtk_list_view_set_single_click_activate (::GtkListView* self /*none*/, gboolean single_click_activate);
GI_INLINE_DECL void set_single_click_activate (gboolean single_click_activate) noexcept;

// void gtk_list_view_set_tab_behavior (GtkListView* self /*none*/, GtkListTabBehavior tab_behavior);
// void gtk_list_view_set_tab_behavior (::GtkListView* self /*none*/, ::GtkListTabBehavior tab_behavior);
GI_INLINE_DECL void set_tab_behavior (Gtk::ListTabBehavior tab_behavior) noexcept;

gi::property_proxy<bool, base::ListViewBase> property_enable_rubberband()
{ return gi::property_proxy<bool, base::ListViewBase> (*this, "enable-rubberband"); }
const gi::property_proxy<bool, base::ListViewBase> property_enable_rubberband() const
{ return gi::property_proxy<bool, base::ListViewBase> (*this, "enable-rubberband"); }

gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> property_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> (*this, "factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> property_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> (*this, "factory"); }

gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> property_header_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> (*this, "header-factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> property_header_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ListViewBase> (*this, "header-factory"); }

gi::property_proxy<Gtk::SelectionModel, base::ListViewBase> property_model()
{ return gi::property_proxy<Gtk::SelectionModel, base::ListViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::SelectionModel, base::ListViewBase> property_model() const
{ return gi::property_proxy<Gtk::SelectionModel, base::ListViewBase> (*this, "model"); }

gi::property_proxy<bool, base::ListViewBase> property_show_separators()
{ return gi::property_proxy<bool, base::ListViewBase> (*this, "show-separators"); }
const gi::property_proxy<bool, base::ListViewBase> property_show_separators() const
{ return gi::property_proxy<bool, base::ListViewBase> (*this, "show-separators"); }

gi::property_proxy<bool, base::ListViewBase> property_single_click_activate()
{ return gi::property_proxy<bool, base::ListViewBase> (*this, "single-click-activate"); }
const gi::property_proxy<bool, base::ListViewBase> property_single_click_activate() const
{ return gi::property_proxy<bool, base::ListViewBase> (*this, "single-click-activate"); }

gi::property_proxy<Gtk::ListTabBehavior, base::ListViewBase> property_tab_behavior()
{ return gi::property_proxy<Gtk::ListTabBehavior, base::ListViewBase> (*this, "tab-behavior"); }
const gi::property_proxy<Gtk::ListTabBehavior, base::ListViewBase> property_tab_behavior() const
{ return gi::property_proxy<Gtk::ListTabBehavior, base::ListViewBase> (*this, "tab-behavior"); }

// (signal) void activate (guint position);
// (signal) void activate (guint position);
gi::signal_proxy<void(Gtk::ListView, guint position)> signal_activate()
{ return gi::signal_proxy<void(Gtk::ListView, guint position)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listview_extra_def.hpp>)
#include <gtk/listview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listview_extra.hpp>)
#include <gtk/listview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListView : public GI_GTK_LISTVIEW_BASE
{ typedef GI_GTK_LISTVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListView>
{ typedef Gtk::ListView type; }; 

} // namespace repository

} // namespace gi

#endif
