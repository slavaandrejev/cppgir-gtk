// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOK_HPP_
#define _GI_GTK_NOTEBOOK_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class NotebookPage;
class Widget;

class Notebook;

namespace base {


#define GI_GTK_NOTEBOOK_BASE base::NotebookBase
class NotebookBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkNotebook BaseObjectType;

NotebookBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_notebook_get_type(); } 

// GtkWidget* /*none*/ gtk_notebook_new ();
// ::GtkNotebook* /*none*/ gtk_notebook_new ();
static GI_INLINE_DECL Gtk::Notebook new_ () noexcept;

// int gtk_notebook_append_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/);
// gint gtk_notebook_append_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/);
GI_INLINE_DECL gint append_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept;
GI_INLINE_DECL gint append_page (Gtk::Widget child) noexcept;

// int gtk_notebook_append_page_menu (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, GtkWidget* menu_label /*none,nullable*/);
// gint gtk_notebook_append_page_menu (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, ::GtkWidget* menu_label /*none,nullable*/);
GI_INLINE_DECL gint append_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept;
GI_INLINE_DECL gint append_page_menu (Gtk::Widget child) noexcept;

// void gtk_notebook_detach_tab (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// void gtk_notebook_detach_tab (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void detach_tab (Gtk::Widget child) noexcept;

// GtkWidget* /*none,nullable*/ gtk_notebook_get_action_widget (GtkNotebook* notebook /*none*/, GtkPackType pack_type);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_action_widget (::GtkNotebook* notebook /*none*/, ::GtkPackType pack_type);
GI_INLINE_DECL Gtk::Widget get_action_widget (Gtk::PackType pack_type) noexcept;

// int gtk_notebook_get_current_page (GtkNotebook* notebook /*none*/);
// gint gtk_notebook_get_current_page (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL gint get_current_page () noexcept;

// const char* /*none,nullable*/ gtk_notebook_get_group_name (GtkNotebook* notebook /*none*/);
// const char* /*none,nullable*/ gtk_notebook_get_group_name (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL gi::cstring_v get_group_name () noexcept;

// GtkWidget* /*none,nullable*/ gtk_notebook_get_menu_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_menu_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::Widget get_menu_label (Gtk::Widget child) noexcept;

// const char* /*none,nullable*/ gtk_notebook_get_menu_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// const char* /*none,nullable*/ gtk_notebook_get_menu_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL gi::cstring_v get_menu_label_text (Gtk::Widget child) noexcept;

// int gtk_notebook_get_n_pages (GtkNotebook* notebook /*none*/);
// gint gtk_notebook_get_n_pages (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL gint get_n_pages () noexcept;

// GtkWidget* /*none,nullable*/ gtk_notebook_get_nth_page (GtkNotebook* notebook /*none*/, int page_num);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_nth_page (::GtkNotebook* notebook /*none*/, gint page_num);
GI_INLINE_DECL Gtk::Widget get_nth_page (gint page_num) noexcept;

// GtkNotebookPage* /*none*/ gtk_notebook_get_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// ::GtkNotebookPage* /*none*/ gtk_notebook_get_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::NotebookPage get_page (Gtk::Widget child) noexcept;

// GListModel* /*full*/ gtk_notebook_get_pages (GtkNotebook* notebook /*none*/);
// ::GListModel* /*full*/ gtk_notebook_get_pages (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL Gio::ListModel get_pages () noexcept;

// gboolean gtk_notebook_get_scrollable (GtkNotebook* notebook /*none*/);
// gboolean gtk_notebook_get_scrollable (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL bool get_scrollable () noexcept;

// gboolean gtk_notebook_get_show_border (GtkNotebook* notebook /*none*/);
// gboolean gtk_notebook_get_show_border (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL bool get_show_border () noexcept;

// gboolean gtk_notebook_get_show_tabs (GtkNotebook* notebook /*none*/);
// gboolean gtk_notebook_get_show_tabs (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL bool get_show_tabs () noexcept;

// gboolean gtk_notebook_get_tab_detachable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_notebook_get_tab_detachable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL bool get_tab_detachable (Gtk::Widget child) noexcept;

// GtkWidget* /*none,nullable*/ gtk_notebook_get_tab_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_tab_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::Widget get_tab_label (Gtk::Widget child) noexcept;

// const char* /*none,nullable*/ gtk_notebook_get_tab_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// const char* /*none,nullable*/ gtk_notebook_get_tab_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL gi::cstring_v get_tab_label_text (Gtk::Widget child) noexcept;

// GtkPositionType gtk_notebook_get_tab_pos (GtkNotebook* notebook /*none*/);
// ::GtkPositionType gtk_notebook_get_tab_pos (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL Gtk::PositionType get_tab_pos () noexcept;

// gboolean gtk_notebook_get_tab_reorderable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_notebook_get_tab_reorderable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL bool get_tab_reorderable (Gtk::Widget child) noexcept;

// int gtk_notebook_insert_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, int position);
// gint gtk_notebook_insert_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, gint position);
GI_INLINE_DECL gint insert_page (Gtk::Widget child, Gtk::Widget tab_label, gint position) noexcept;
GI_INLINE_DECL gint insert_page (Gtk::Widget child, gint position) noexcept;

// int gtk_notebook_insert_page_menu (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, GtkWidget* menu_label /*none,nullable*/, int position);
// gint gtk_notebook_insert_page_menu (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, ::GtkWidget* menu_label /*none,nullable*/, gint position);
GI_INLINE_DECL gint insert_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept;
GI_INLINE_DECL gint insert_page_menu (Gtk::Widget child, gint position) noexcept;

// void gtk_notebook_next_page (GtkNotebook* notebook /*none*/);
// void gtk_notebook_next_page (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL void next_page () noexcept;

// int gtk_notebook_page_num (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// gint gtk_notebook_page_num (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL gint page_num (Gtk::Widget child) noexcept;

// void gtk_notebook_popup_disable (GtkNotebook* notebook /*none*/);
// void gtk_notebook_popup_disable (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL void popup_disable () noexcept;

// void gtk_notebook_popup_enable (GtkNotebook* notebook /*none*/);
// void gtk_notebook_popup_enable (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL void popup_enable () noexcept;

// int gtk_notebook_prepend_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/);
// gint gtk_notebook_prepend_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/);
GI_INLINE_DECL gint prepend_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept;
GI_INLINE_DECL gint prepend_page (Gtk::Widget child) noexcept;

// int gtk_notebook_prepend_page_menu (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, GtkWidget* menu_label /*none,nullable*/);
// gint gtk_notebook_prepend_page_menu (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, ::GtkWidget* menu_label /*none,nullable*/);
GI_INLINE_DECL gint prepend_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept;
GI_INLINE_DECL gint prepend_page_menu (Gtk::Widget child) noexcept;

// void gtk_notebook_prev_page (GtkNotebook* notebook /*none*/);
// void gtk_notebook_prev_page (::GtkNotebook* notebook /*none*/);
GI_INLINE_DECL void prev_page () noexcept;

// void gtk_notebook_remove_page (GtkNotebook* notebook /*none*/, int page_num);
// void gtk_notebook_remove_page (::GtkNotebook* notebook /*none*/, gint page_num);
GI_INLINE_DECL void remove_page (gint page_num) noexcept;

// void gtk_notebook_reorder_child (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, int position);
// void gtk_notebook_reorder_child (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, gint position);
GI_INLINE_DECL void reorder_child (Gtk::Widget child, gint position) noexcept;

// void gtk_notebook_set_action_widget (GtkNotebook* notebook /*none*/, GtkWidget* widget /*none*/, GtkPackType pack_type);
// void gtk_notebook_set_action_widget (::GtkNotebook* notebook /*none*/, ::GtkWidget* widget /*none*/, ::GtkPackType pack_type);
GI_INLINE_DECL void set_action_widget (Gtk::Widget widget, Gtk::PackType pack_type) noexcept;

// void gtk_notebook_set_current_page (GtkNotebook* notebook /*none*/, int page_num);
// void gtk_notebook_set_current_page (::GtkNotebook* notebook /*none*/, gint page_num);
GI_INLINE_DECL void set_current_page (gint page_num) noexcept;

// void gtk_notebook_set_group_name (GtkNotebook* notebook /*none*/, const char* group_name /*none,nullable*/);
// void gtk_notebook_set_group_name (::GtkNotebook* notebook /*none*/, const char* group_name /*none,nullable*/);
GI_INLINE_DECL void set_group_name (const gi::cstring_v group_name) noexcept;
GI_INLINE_DECL void set_group_name () noexcept;

// void gtk_notebook_set_menu_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* menu_label /*none,nullable*/);
// void gtk_notebook_set_menu_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* menu_label /*none,nullable*/);
GI_INLINE_DECL void set_menu_label (Gtk::Widget child, Gtk::Widget menu_label) noexcept;
GI_INLINE_DECL void set_menu_label (Gtk::Widget child) noexcept;

// void gtk_notebook_set_menu_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, const char* menu_text /*none*/);
// void gtk_notebook_set_menu_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, const char* menu_text /*none*/);
GI_INLINE_DECL void set_menu_label_text (Gtk::Widget child, const gi::cstring_v menu_text) noexcept;

// void gtk_notebook_set_scrollable (GtkNotebook* notebook /*none*/, gboolean scrollable);
// void gtk_notebook_set_scrollable (::GtkNotebook* notebook /*none*/, gboolean scrollable);
GI_INLINE_DECL void set_scrollable (gboolean scrollable) noexcept;

// void gtk_notebook_set_show_border (GtkNotebook* notebook /*none*/, gboolean show_border);
// void gtk_notebook_set_show_border (::GtkNotebook* notebook /*none*/, gboolean show_border);
GI_INLINE_DECL void set_show_border (gboolean show_border) noexcept;

// void gtk_notebook_set_show_tabs (GtkNotebook* notebook /*none*/, gboolean show_tabs);
// void gtk_notebook_set_show_tabs (::GtkNotebook* notebook /*none*/, gboolean show_tabs);
GI_INLINE_DECL void set_show_tabs (gboolean show_tabs) noexcept;

// void gtk_notebook_set_tab_detachable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, gboolean detachable);
// void gtk_notebook_set_tab_detachable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, gboolean detachable);
GI_INLINE_DECL void set_tab_detachable (Gtk::Widget child, gboolean detachable) noexcept;

// void gtk_notebook_set_tab_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/);
// void gtk_notebook_set_tab_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/);
GI_INLINE_DECL void set_tab_label (Gtk::Widget child, Gtk::Widget tab_label) noexcept;
GI_INLINE_DECL void set_tab_label (Gtk::Widget child) noexcept;

// void gtk_notebook_set_tab_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, const char* tab_text /*none*/);
// void gtk_notebook_set_tab_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, const char* tab_text /*none*/);
GI_INLINE_DECL void set_tab_label_text (Gtk::Widget child, const gi::cstring_v tab_text) noexcept;

// void gtk_notebook_set_tab_pos (GtkNotebook* notebook /*none*/, GtkPositionType pos);
// void gtk_notebook_set_tab_pos (::GtkNotebook* notebook /*none*/, ::GtkPositionType pos);
GI_INLINE_DECL void set_tab_pos (Gtk::PositionType pos) noexcept;

// void gtk_notebook_set_tab_reorderable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, gboolean reorderable);
// void gtk_notebook_set_tab_reorderable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, gboolean reorderable);
GI_INLINE_DECL void set_tab_reorderable (Gtk::Widget child, gboolean reorderable) noexcept;

gi::property_proxy<bool, base::NotebookBase> property_enable_popup()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "enable-popup"); }
const gi::property_proxy<bool, base::NotebookBase> property_enable_popup() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "enable-popup"); }

gi::property_proxy<gi::cstring, base::NotebookBase> property_group_name()
{ return gi::property_proxy<gi::cstring, base::NotebookBase> (*this, "group-name"); }
const gi::property_proxy<gi::cstring, base::NotebookBase> property_group_name() const
{ return gi::property_proxy<gi::cstring, base::NotebookBase> (*this, "group-name"); }

gi::property_proxy<gint, base::NotebookBase> property_page()
{ return gi::property_proxy<gint, base::NotebookBase> (*this, "page"); }
const gi::property_proxy<gint, base::NotebookBase> property_page() const
{ return gi::property_proxy<gint, base::NotebookBase> (*this, "page"); }

gi::property_proxy<Gio::ListModel, base::NotebookBase> property_pages()
{ return gi::property_proxy<Gio::ListModel, base::NotebookBase> (*this, "pages"); }
const gi::property_proxy<Gio::ListModel, base::NotebookBase> property_pages() const
{ return gi::property_proxy<Gio::ListModel, base::NotebookBase> (*this, "pages"); }

gi::property_proxy<bool, base::NotebookBase> property_scrollable()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "scrollable"); }
const gi::property_proxy<bool, base::NotebookBase> property_scrollable() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "scrollable"); }

gi::property_proxy<bool, base::NotebookBase> property_show_border()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-border"); }
const gi::property_proxy<bool, base::NotebookBase> property_show_border() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-border"); }

gi::property_proxy<bool, base::NotebookBase> property_show_tabs()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-tabs"); }
const gi::property_proxy<bool, base::NotebookBase> property_show_tabs() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-tabs"); }

gi::property_proxy<Gtk::PositionType, base::NotebookBase> property_tab_pos()
{ return gi::property_proxy<Gtk::PositionType, base::NotebookBase> (*this, "tab-pos"); }
const gi::property_proxy<Gtk::PositionType, base::NotebookBase> property_tab_pos() const
{ return gi::property_proxy<Gtk::PositionType, base::NotebookBase> (*this, "tab-pos"); }

// (signal) gboolean change-current-page (gint object);
// (signal) gboolean change-current-page (gint object);
gi::signal_proxy<bool(Gtk::Notebook, gint object)> signal_change_current_page()
{ return gi::signal_proxy<bool(Gtk::Notebook, gint object)> (*this, "change-current-page"); }

// (signal)  /*none,nullable*/ create-window ( page /*none*/);
// (signal) ::GtkNotebook* /*none,nullable*/ create-window (::GtkWidget* page /*none*/);
gi::signal_proxy<Gtk::Notebook(Gtk::Notebook, Gtk::Widget page)> signal_create_window()
{ return gi::signal_proxy<Gtk::Notebook(Gtk::Notebook, Gtk::Widget page)> (*this, "create-window"); }

// (signal) gboolean focus-tab ( object);
// (signal) gboolean focus-tab (::GtkNotebookTab object);
gi::signal_proxy<bool(Gtk::Notebook, Gtk::NotebookTab object)> signal_focus_tab()
{ return gi::signal_proxy<bool(Gtk::Notebook, Gtk::NotebookTab object)> (*this, "focus-tab"); }

// (signal) void move-focus-out ( object);
// (signal) void move-focus-out (::GtkDirectionType object);
gi::signal_proxy<void(Gtk::Notebook, Gtk::DirectionType object)> signal_move_focus_out()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::DirectionType object)> (*this, "move-focus-out"); }

// (signal) void page-added ( child /*none*/, guint page_num);
// (signal) void page-added (::GtkWidget* child /*none*/, guint page_num);
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> signal_page_added()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> (*this, "page-added"); }

// (signal) void page-removed ( child /*none*/, guint page_num);
// (signal) void page-removed (::GtkWidget* child /*none*/, guint page_num);
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> signal_page_removed()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> (*this, "page-removed"); }

// (signal) void page-reordered ( child /*none*/, guint page_num);
// (signal) void page-reordered (::GtkWidget* child /*none*/, guint page_num);
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> signal_page_reordered()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> (*this, "page-reordered"); }

// (signal) gboolean reorder-tab ( object, gboolean p0);
// (signal) gboolean reorder-tab (::GtkDirectionType object, gboolean p0);
gi::signal_proxy<bool(Gtk::Notebook, Gtk::DirectionType object, gboolean p0)> signal_reorder_tab()
{ return gi::signal_proxy<bool(Gtk::Notebook, Gtk::DirectionType object, gboolean p0)> (*this, "reorder-tab"); }

// (signal) gboolean select-page (gboolean object);
// (signal) gboolean select-page (gboolean object);
gi::signal_proxy<bool(Gtk::Notebook, gboolean object)> signal_select_page()
{ return gi::signal_proxy<bool(Gtk::Notebook, gboolean object)> (*this, "select-page"); }

// (signal) void switch-page ( page /*none*/, guint page_num);
// (signal) void switch-page (::GtkWidget* page /*none*/, guint page_num);
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget page, guint page_num)> signal_switch_page()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget page, guint page_num)> (*this, "switch-page"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra_def.hpp>)
#include <gtk/notebook_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra.hpp>)
#include <gtk/notebook_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Notebook : public GI_GTK_NOTEBOOK_BASE
{ typedef GI_GTK_NOTEBOOK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNotebook>
{ typedef Gtk::Notebook type; }; 

} // namespace repository

} // namespace gi

#endif
