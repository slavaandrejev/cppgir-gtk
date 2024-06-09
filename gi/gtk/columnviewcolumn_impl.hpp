// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWCOLUMN_IMPL_HPP_
#define _GI_GTK_COLUMNVIEWCOLUMN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkColumnViewColumn* /*full*/ gtk_column_view_column_new (const char* title /*none,nullable*/, GtkListItemFactory* factory /*full,nullable*/);
// ::GtkColumnViewColumn* /*full*/ gtk_column_view_column_new (const char* title /*none,nullable*/, ::GtkListItemFactory* factory /*full,nullable*/);
Gtk::ColumnViewColumn base::ColumnViewColumnBase::new_ (const gi::cstring_v title, Gtk::ListItemFactory factory) noexcept
{
  typedef ::GtkColumnViewColumn* (*call_wrap_t) (const char* title, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_column_view_column_new;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_full);
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkListItemFactory*) (factory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::ColumnViewColumn base::ColumnViewColumnBase::new_ () noexcept
{
  typedef ::GtkColumnViewColumn* (*call_wrap_t) (const char* title, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_column_view_column_new;
  auto factory_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkListItemFactory*) (factory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkColumnView* /*none,nullable*/ gtk_column_view_column_get_column_view (GtkColumnViewColumn* self /*none*/);
// ::GtkColumnView* /*none,nullable*/ gtk_column_view_column_get_column_view (::GtkColumnViewColumn* self /*none*/);
Gtk::ColumnView base::ColumnViewColumnBase::get_column_view () noexcept
{
  typedef ::GtkColumnView* (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_column_view;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_column_get_expand (GtkColumnViewColumn* self /*none*/);
// gboolean gtk_column_view_column_get_expand (::GtkColumnViewColumn* self /*none*/);
bool base::ColumnViewColumnBase::get_expand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_expand;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return _temp_ret;
}

// GtkListItemFactory* /*none,nullable*/ gtk_column_view_column_get_factory (GtkColumnViewColumn* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_column_view_column_get_factory (::GtkColumnViewColumn* self /*none*/);
Gtk::ListItemFactory base::ColumnViewColumnBase::get_factory () noexcept
{
  typedef ::GtkListItemFactory* (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_factory;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_column_view_column_get_fixed_width (GtkColumnViewColumn* self /*none*/);
// gint gtk_column_view_column_get_fixed_width (::GtkColumnViewColumn* self /*none*/);
gint base::ColumnViewColumnBase::get_fixed_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_fixed_width;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ gtk_column_view_column_get_header_menu (GtkColumnViewColumn* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_column_view_column_get_header_menu (::GtkColumnViewColumn* self /*none*/);
Gio::MenuModel base::ColumnViewColumnBase::get_header_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_header_menu;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_column_view_column_get_id (GtkColumnViewColumn* self /*none*/);
// const char* /*none,nullable*/ gtk_column_view_column_get_id (::GtkColumnViewColumn* self /*none*/);
gi::cstring_v base::ColumnViewColumnBase::get_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_id;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_column_get_resizable (GtkColumnViewColumn* self /*none*/);
// gboolean gtk_column_view_column_get_resizable (::GtkColumnViewColumn* self /*none*/);
bool base::ColumnViewColumnBase::get_resizable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_resizable;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return _temp_ret;
}

// GtkSorter* /*none,nullable*/ gtk_column_view_column_get_sorter (GtkColumnViewColumn* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_column_view_column_get_sorter (::GtkColumnViewColumn* self /*none*/);
Gtk::Sorter base::ColumnViewColumnBase::get_sorter () noexcept
{
  typedef ::GtkSorter* (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_sorter;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_column_view_column_get_title (GtkColumnViewColumn* self /*none*/);
// const char* /*none,nullable*/ gtk_column_view_column_get_title (::GtkColumnViewColumn* self /*none*/);
gi::cstring_v base::ColumnViewColumnBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_title;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_column_view_column_get_visible (GtkColumnViewColumn* self /*none*/);
// gboolean gtk_column_view_column_get_visible (::GtkColumnViewColumn* self /*none*/);
bool base::ColumnViewColumnBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColumnViewColumn* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkColumnViewColumn*) (gobj_()));
  return _temp_ret;
}

// void gtk_column_view_column_set_expand (GtkColumnViewColumn* self /*none*/, gboolean expand);
// void gtk_column_view_column_set_expand (::GtkColumnViewColumn* self /*none*/, gboolean expand);
void base::ColumnViewColumnBase::set_expand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_expand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_column_view_column_set_factory (GtkColumnViewColumn* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_column_view_column_set_factory (::GtkColumnViewColumn* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
void base::ColumnViewColumnBase::set_factory (Gtk::ListItemFactory factory) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_factory;
  auto factory_to_c = gi::unwrap (factory, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}
void base::ColumnViewColumnBase::set_factory () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, ::GtkListItemFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_factory;
  auto factory_to_c = nullptr;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (::GtkListItemFactory*) (factory_to_c));
}

// void gtk_column_view_column_set_fixed_width (GtkColumnViewColumn* self /*none*/, int fixed_width);
// void gtk_column_view_column_set_fixed_width (::GtkColumnViewColumn* self /*none*/, gint fixed_width);
void base::ColumnViewColumnBase::set_fixed_width (gint fixed_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, gint fixed_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_fixed_width;
  auto fixed_width_to_c = fixed_width;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (gint) (fixed_width_to_c));
}

// void gtk_column_view_column_set_header_menu (GtkColumnViewColumn* self /*none*/, GMenuModel* menu /*none,nullable*/);
// void gtk_column_view_column_set_header_menu (::GtkColumnViewColumn* self /*none*/, ::GMenuModel* menu /*none,nullable*/);
void base::ColumnViewColumnBase::set_header_menu (Gio::MenuModel menu) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, ::GMenuModel* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_header_menu;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (::GMenuModel*) (menu_to_c));
}
void base::ColumnViewColumnBase::set_header_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, ::GMenuModel* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_header_menu;
  auto menu_to_c = nullptr;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (::GMenuModel*) (menu_to_c));
}

// void gtk_column_view_column_set_id (GtkColumnViewColumn* self /*none*/, const char* id /*none,nullable*/);
// void gtk_column_view_column_set_id (::GtkColumnViewColumn* self /*none*/, const char* id /*none,nullable*/);
void base::ColumnViewColumnBase::set_id (const gi::cstring_v id) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_id;
  auto id_to_c = gi::unwrap (id, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (const char*) (id_to_c));
}
void base::ColumnViewColumnBase::set_id () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_id;
  auto id_to_c = nullptr;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (const char*) (id_to_c));
}

// void gtk_column_view_column_set_resizable (GtkColumnViewColumn* self /*none*/, gboolean resizable);
// void gtk_column_view_column_set_resizable (::GtkColumnViewColumn* self /*none*/, gboolean resizable);
void base::ColumnViewColumnBase::set_resizable (gboolean resizable) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, gboolean resizable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_resizable;
  auto resizable_to_c = resizable;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (gboolean) (resizable_to_c));
}

// void gtk_column_view_column_set_sorter (GtkColumnViewColumn* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_column_view_column_set_sorter (::GtkColumnViewColumn* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
void base::ColumnViewColumnBase::set_sorter (Gtk::Sorter sorter) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_sorter;
  auto sorter_to_c = gi::unwrap (sorter, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}
void base::ColumnViewColumnBase::set_sorter () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, ::GtkSorter* sorter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_sorter;
  auto sorter_to_c = nullptr;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (::GtkSorter*) (sorter_to_c));
}

// void gtk_column_view_column_set_title (GtkColumnViewColumn* self /*none*/, const char* title /*none,nullable*/);
// void gtk_column_view_column_set_title (::GtkColumnViewColumn* self /*none*/, const char* title /*none,nullable*/);
void base::ColumnViewColumnBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (const char*) (title_to_c));
}
void base::ColumnViewColumnBase::set_title () noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_title;
  auto title_to_c = nullptr;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_column_view_column_set_visible (GtkColumnViewColumn* self /*none*/, gboolean visible);
// void gtk_column_view_column_set_visible (::GtkColumnViewColumn* self /*none*/, gboolean visible);
void base::ColumnViewColumnBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkColumnViewColumn* self, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_column_view_column_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkColumnViewColumn*) (gobj_()), (gboolean) (visible_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewcolumn_extra_def_impl.hpp>)
#include <gtk/columnviewcolumn_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewcolumn_extra_impl.hpp>)
#include <gtk/columnviewcolumn_extra_impl.hpp>
#endif
#endif

#endif
