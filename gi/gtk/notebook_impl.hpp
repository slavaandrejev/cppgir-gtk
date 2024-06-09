// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOK_IMPL_HPP_
#define _GI_GTK_NOTEBOOK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_notebook_new ();
// ::GtkNotebook* /*none*/ gtk_notebook_new ();
Gtk::Notebook base::NotebookBase::new_ () noexcept
{
  typedef ::GtkNotebook* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_notebook_append_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/);
// gint gtk_notebook_append_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/);
gint base::NotebookBase::append_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_append_page;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::append_page (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_append_page;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}

// int gtk_notebook_append_page_menu (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, GtkWidget* menu_label /*none,nullable*/);
// gint gtk_notebook_append_page_menu (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, ::GtkWidget* menu_label /*none,nullable*/);
gint base::NotebookBase::append_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_append_page_menu;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::append_page_menu (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_append_page_menu;
  auto menu_label_to_c = nullptr;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}

// void gtk_notebook_detach_tab (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// void gtk_notebook_detach_tab (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
void base::NotebookBase::detach_tab (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_detach_tab;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// GtkWidget* /*none,nullable*/ gtk_notebook_get_action_widget (GtkNotebook* notebook /*none*/, GtkPackType pack_type);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_action_widget (::GtkNotebook* notebook /*none*/, ::GtkPackType pack_type);
Gtk::Widget base::NotebookBase::get_action_widget (Gtk::PackType pack_type) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkPackType pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_action_widget;
  auto pack_type_to_c = gi::unwrap (pack_type);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkPackType) (pack_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_notebook_get_current_page (GtkNotebook* notebook /*none*/);
// gint gtk_notebook_get_current_page (::GtkNotebook* notebook /*none*/);
gint base::NotebookBase::get_current_page () noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_current_page;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_notebook_get_group_name (GtkNotebook* notebook /*none*/);
// const char* /*none,nullable*/ gtk_notebook_get_group_name (::GtkNotebook* notebook /*none*/);
gi::cstring_v base::NotebookBase::get_group_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_group_name;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_notebook_get_menu_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_menu_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
Gtk::Widget base::NotebookBase::get_menu_label (Gtk::Widget child) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_menu_label;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_notebook_get_menu_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// const char* /*none,nullable*/ gtk_notebook_get_menu_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
gi::cstring_v base::NotebookBase::get_menu_label_text (Gtk::Widget child) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_menu_label_text;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_notebook_get_n_pages (GtkNotebook* notebook /*none*/);
// gint gtk_notebook_get_n_pages (::GtkNotebook* notebook /*none*/);
gint base::NotebookBase::get_n_pages () noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_n_pages;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_notebook_get_nth_page (GtkNotebook* notebook /*none*/, int page_num);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_nth_page (::GtkNotebook* notebook /*none*/, gint page_num);
Gtk::Widget base::NotebookBase::get_nth_page (gint page_num) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_nth_page;
  auto page_num_to_c = page_num;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (page_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkNotebookPage* /*none*/ gtk_notebook_get_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// ::GtkNotebookPage* /*none*/ gtk_notebook_get_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
Gtk::NotebookPage base::NotebookBase::get_page (Gtk::Widget child) noexcept
{
  typedef ::GtkNotebookPage* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_page;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GListModel* /*full*/ gtk_notebook_get_pages (GtkNotebook* notebook /*none*/);
// ::GListModel* /*full*/ gtk_notebook_get_pages (::GtkNotebook* notebook /*none*/);
Gio::ListModel base::NotebookBase::get_pages () noexcept
{
  typedef ::GListModel* (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_pages;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gtk_notebook_get_scrollable (GtkNotebook* notebook /*none*/);
// gboolean gtk_notebook_get_scrollable (::GtkNotebook* notebook /*none*/);
bool base::NotebookBase::get_scrollable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_scrollable;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_notebook_get_show_border (GtkNotebook* notebook /*none*/);
// gboolean gtk_notebook_get_show_border (::GtkNotebook* notebook /*none*/);
bool base::NotebookBase::get_show_border () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_show_border;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_notebook_get_show_tabs (GtkNotebook* notebook /*none*/);
// gboolean gtk_notebook_get_show_tabs (::GtkNotebook* notebook /*none*/);
bool base::NotebookBase::get_show_tabs () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_show_tabs;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_notebook_get_tab_detachable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_notebook_get_tab_detachable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
bool base::NotebookBase::get_tab_detachable (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_tab_detachable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_notebook_get_tab_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_notebook_get_tab_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
Gtk::Widget base::NotebookBase::get_tab_label (Gtk::Widget child) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_tab_label;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_notebook_get_tab_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// const char* /*none,nullable*/ gtk_notebook_get_tab_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
gi::cstring_v base::NotebookBase::get_tab_label_text (Gtk::Widget child) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_tab_label_text;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkPositionType gtk_notebook_get_tab_pos (GtkNotebook* notebook /*none*/);
// ::GtkPositionType gtk_notebook_get_tab_pos (::GtkNotebook* notebook /*none*/);
Gtk::PositionType base::NotebookBase::get_tab_pos () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_tab_pos;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_notebook_get_tab_reorderable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// gboolean gtk_notebook_get_tab_reorderable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
bool base::NotebookBase::get_tab_reorderable (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_get_tab_reorderable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// int gtk_notebook_insert_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, int position);
// gint gtk_notebook_insert_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, gint position);
gint base::NotebookBase::insert_page (Gtk::Widget child, Gtk::Widget tab_label, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_insert_page;
  auto position_to_c = position;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}
gint base::NotebookBase::insert_page (Gtk::Widget child, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_insert_page;
  auto position_to_c = position;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// int gtk_notebook_insert_page_menu (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, GtkWidget* menu_label /*none,nullable*/, int position);
// gint gtk_notebook_insert_page_menu (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, ::GtkWidget* menu_label /*none,nullable*/, gint position);
gint base::NotebookBase::insert_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_insert_page_menu;
  auto position_to_c = position;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}
gint base::NotebookBase::insert_page_menu (Gtk::Widget child, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_insert_page_menu;
  auto position_to_c = position;
  auto menu_label_to_c = nullptr;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// void gtk_notebook_next_page (GtkNotebook* notebook /*none*/);
// void gtk_notebook_next_page (::GtkNotebook* notebook /*none*/);
void base::NotebookBase::next_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_next_page;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// int gtk_notebook_page_num (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/);
// gint gtk_notebook_page_num (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/);
gint base::NotebookBase::page_num (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_page_num;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// void gtk_notebook_popup_disable (GtkNotebook* notebook /*none*/);
// void gtk_notebook_popup_disable (::GtkNotebook* notebook /*none*/);
void base::NotebookBase::popup_disable () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_popup_disable;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// void gtk_notebook_popup_enable (GtkNotebook* notebook /*none*/);
// void gtk_notebook_popup_enable (::GtkNotebook* notebook /*none*/);
void base::NotebookBase::popup_enable () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_popup_enable;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// int gtk_notebook_prepend_page (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/);
// gint gtk_notebook_prepend_page (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/);
gint base::NotebookBase::prepend_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_prepend_page;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::prepend_page (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_prepend_page;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}

// int gtk_notebook_prepend_page_menu (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/, GtkWidget* menu_label /*none,nullable*/);
// gint gtk_notebook_prepend_page_menu (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/, ::GtkWidget* menu_label /*none,nullable*/);
gint base::NotebookBase::prepend_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_prepend_page_menu;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::prepend_page_menu (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_prepend_page_menu;
  auto menu_label_to_c = nullptr;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}

// void gtk_notebook_prev_page (GtkNotebook* notebook /*none*/);
// void gtk_notebook_prev_page (::GtkNotebook* notebook /*none*/);
void base::NotebookBase::prev_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_prev_page;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// void gtk_notebook_remove_page (GtkNotebook* notebook /*none*/, int page_num);
// void gtk_notebook_remove_page (::GtkNotebook* notebook /*none*/, gint page_num);
void base::NotebookBase::remove_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_remove_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_notebook_reorder_child (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, int position);
// void gtk_notebook_reorder_child (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, gint position);
void base::NotebookBase::reorder_child (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_reorder_child;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void gtk_notebook_set_action_widget (GtkNotebook* notebook /*none*/, GtkWidget* widget /*none*/, GtkPackType pack_type);
// void gtk_notebook_set_action_widget (::GtkNotebook* notebook /*none*/, ::GtkWidget* widget /*none*/, ::GtkPackType pack_type);
void base::NotebookBase::set_action_widget (Gtk::Widget widget, Gtk::PackType pack_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* widget, ::GtkPackType pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_action_widget;
  auto pack_type_to_c = gi::unwrap (pack_type);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkPackType) (pack_type_to_c));
}

// void gtk_notebook_set_current_page (GtkNotebook* notebook /*none*/, int page_num);
// void gtk_notebook_set_current_page (::GtkNotebook* notebook /*none*/, gint page_num);
void base::NotebookBase::set_current_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_current_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_notebook_set_group_name (GtkNotebook* notebook /*none*/, const char* group_name /*none,nullable*/);
// void gtk_notebook_set_group_name (::GtkNotebook* notebook /*none*/, const char* group_name /*none,nullable*/);
void base::NotebookBase::set_group_name (const gi::cstring_v group_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_group_name;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (const char*) (group_name_to_c));
}
void base::NotebookBase::set_group_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_group_name;
  auto group_name_to_c = nullptr;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (const char*) (group_name_to_c));
}

// void gtk_notebook_set_menu_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* menu_label /*none,nullable*/);
// void gtk_notebook_set_menu_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* menu_label /*none,nullable*/);
void base::NotebookBase::set_menu_label (Gtk::Widget child, Gtk::Widget menu_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_menu_label;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (menu_label_to_c));
}
void base::NotebookBase::set_menu_label (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_menu_label;
  auto menu_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (menu_label_to_c));
}

// void gtk_notebook_set_menu_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, const char* menu_text /*none*/);
// void gtk_notebook_set_menu_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, const char* menu_text /*none*/);
void base::NotebookBase::set_menu_label_text (Gtk::Widget child, const gi::cstring_v menu_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, const char* menu_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_menu_label_text;
  auto menu_text_to_c = gi::unwrap (menu_text, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (menu_text_to_c));
}

// void gtk_notebook_set_scrollable (GtkNotebook* notebook /*none*/, gboolean scrollable);
// void gtk_notebook_set_scrollable (::GtkNotebook* notebook /*none*/, gboolean scrollable);
void base::NotebookBase::set_scrollable (gboolean scrollable) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gboolean scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_scrollable;
  auto scrollable_to_c = scrollable;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (scrollable_to_c));
}

// void gtk_notebook_set_show_border (GtkNotebook* notebook /*none*/, gboolean show_border);
// void gtk_notebook_set_show_border (::GtkNotebook* notebook /*none*/, gboolean show_border);
void base::NotebookBase::set_show_border (gboolean show_border) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gboolean show_border);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_show_border;
  auto show_border_to_c = show_border;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (show_border_to_c));
}

// void gtk_notebook_set_show_tabs (GtkNotebook* notebook /*none*/, gboolean show_tabs);
// void gtk_notebook_set_show_tabs (::GtkNotebook* notebook /*none*/, gboolean show_tabs);
void base::NotebookBase::set_show_tabs (gboolean show_tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gboolean show_tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_show_tabs;
  auto show_tabs_to_c = show_tabs;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (show_tabs_to_c));
}

// void gtk_notebook_set_tab_detachable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, gboolean detachable);
// void gtk_notebook_set_tab_detachable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, gboolean detachable);
void base::NotebookBase::set_tab_detachable (Gtk::Widget child, gboolean detachable) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, gboolean detachable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_tab_detachable;
  auto detachable_to_c = detachable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (detachable_to_c));
}

// void gtk_notebook_set_tab_label (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, GtkWidget* tab_label /*none,nullable*/);
// void gtk_notebook_set_tab_label (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, ::GtkWidget* tab_label /*none,nullable*/);
void base::NotebookBase::set_tab_label (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_tab_label;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
}
void base::NotebookBase::set_tab_label (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_tab_label;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
}

// void gtk_notebook_set_tab_label_text (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, const char* tab_text /*none*/);
// void gtk_notebook_set_tab_label_text (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, const char* tab_text /*none*/);
void base::NotebookBase::set_tab_label_text (Gtk::Widget child, const gi::cstring_v tab_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, const char* tab_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_tab_label_text;
  auto tab_text_to_c = gi::unwrap (tab_text, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (tab_text_to_c));
}

// void gtk_notebook_set_tab_pos (GtkNotebook* notebook /*none*/, GtkPositionType pos);
// void gtk_notebook_set_tab_pos (::GtkNotebook* notebook /*none*/, ::GtkPositionType pos);
void base::NotebookBase::set_tab_pos (Gtk::PositionType pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkPositionType pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_tab_pos;
  auto pos_to_c = gi::unwrap (pos);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkPositionType) (pos_to_c));
}

// void gtk_notebook_set_tab_reorderable (GtkNotebook* notebook /*none*/, GtkWidget* child /*none*/, gboolean reorderable);
// void gtk_notebook_set_tab_reorderable (::GtkNotebook* notebook /*none*/, ::GtkWidget* child /*none*/, gboolean reorderable);
void base::NotebookBase::set_tab_reorderable (Gtk::Widget child, gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_notebook_set_tab_reorderable;
  auto reorderable_to_c = reorderable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (reorderable_to_c));
}












} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra_def_impl.hpp>)
#include <gtk/notebook_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra_impl.hpp>)
#include <gtk/notebook_extra_impl.hpp>
#endif
#endif

#endif
