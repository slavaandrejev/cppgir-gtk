// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWCOLUMN_HPP_
#define _GI_GTK_COLUMNVIEWCOLUMN_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ColumnView;
class ListItemFactory;
class Sorter;

class ColumnViewColumn;

namespace base {


#define GI_GTK_COLUMNVIEWCOLUMN_BASE base::ColumnViewColumnBase
class ColumnViewColumnBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkColumnViewColumn BaseObjectType;

ColumnViewColumnBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_column_view_column_get_type(); } 

// GtkColumnViewColumn* /*full*/ gtk_column_view_column_new (const char* title /*none,nullable*/, GtkListItemFactory* factory /*full,nullable*/);
// ::GtkColumnViewColumn* /*full*/ gtk_column_view_column_new (const char* title /*none,nullable*/, ::GtkListItemFactory* factory /*full,nullable*/);
static GI_INLINE_DECL Gtk::ColumnViewColumn new_ (const gi::cstring_v title, Gtk::ListItemFactory factory) noexcept;
static GI_INLINE_DECL Gtk::ColumnViewColumn new_ () noexcept;

// GtkColumnView* /*none,nullable*/ gtk_column_view_column_get_column_view (GtkColumnViewColumn* self /*none*/);
// ::GtkColumnView* /*none,nullable*/ gtk_column_view_column_get_column_view (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL Gtk::ColumnView get_column_view () noexcept;

// gboolean gtk_column_view_column_get_expand (GtkColumnViewColumn* self /*none*/);
// gboolean gtk_column_view_column_get_expand (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL bool get_expand () noexcept;

// GtkListItemFactory* /*none,nullable*/ gtk_column_view_column_get_factory (GtkColumnViewColumn* self /*none*/);
// ::GtkListItemFactory* /*none,nullable*/ gtk_column_view_column_get_factory (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL Gtk::ListItemFactory get_factory () noexcept;

// int gtk_column_view_column_get_fixed_width (GtkColumnViewColumn* self /*none*/);
// gint gtk_column_view_column_get_fixed_width (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL gint get_fixed_width () noexcept;

// GMenuModel* /*none,nullable*/ gtk_column_view_column_get_header_menu (GtkColumnViewColumn* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_column_view_column_get_header_menu (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_header_menu () noexcept;

// const char* /*none,nullable*/ gtk_column_view_column_get_id (GtkColumnViewColumn* self /*none*/);
// const char* /*none,nullable*/ gtk_column_view_column_get_id (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_id () noexcept;

// gboolean gtk_column_view_column_get_resizable (GtkColumnViewColumn* self /*none*/);
// gboolean gtk_column_view_column_get_resizable (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL bool get_resizable () noexcept;

// GtkSorter* /*none,nullable*/ gtk_column_view_column_get_sorter (GtkColumnViewColumn* self /*none*/);
// ::GtkSorter* /*none,nullable*/ gtk_column_view_column_get_sorter (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL Gtk::Sorter get_sorter () noexcept;

// const char* /*none,nullable*/ gtk_column_view_column_get_title (GtkColumnViewColumn* self /*none*/);
// const char* /*none,nullable*/ gtk_column_view_column_get_title (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_title () noexcept;

// gboolean gtk_column_view_column_get_visible (GtkColumnViewColumn* self /*none*/);
// gboolean gtk_column_view_column_get_visible (::GtkColumnViewColumn* self /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// void gtk_column_view_column_set_expand (GtkColumnViewColumn* self /*none*/, gboolean expand);
// void gtk_column_view_column_set_expand (::GtkColumnViewColumn* self /*none*/, gboolean expand);
GI_INLINE_DECL void set_expand (gboolean expand) noexcept;

// void gtk_column_view_column_set_factory (GtkColumnViewColumn* self /*none*/, GtkListItemFactory* factory /*none,nullable*/);
// void gtk_column_view_column_set_factory (::GtkColumnViewColumn* self /*none*/, ::GtkListItemFactory* factory /*none,nullable*/);
GI_INLINE_DECL void set_factory (Gtk::ListItemFactory factory) noexcept;
GI_INLINE_DECL void set_factory () noexcept;

// void gtk_column_view_column_set_fixed_width (GtkColumnViewColumn* self /*none*/, int fixed_width);
// void gtk_column_view_column_set_fixed_width (::GtkColumnViewColumn* self /*none*/, gint fixed_width);
GI_INLINE_DECL void set_fixed_width (gint fixed_width) noexcept;

// void gtk_column_view_column_set_header_menu (GtkColumnViewColumn* self /*none*/, GMenuModel* menu /*none,nullable*/);
// void gtk_column_view_column_set_header_menu (::GtkColumnViewColumn* self /*none*/, ::GMenuModel* menu /*none,nullable*/);
GI_INLINE_DECL void set_header_menu (Gio::MenuModel menu) noexcept;
GI_INLINE_DECL void set_header_menu () noexcept;

// void gtk_column_view_column_set_id (GtkColumnViewColumn* self /*none*/, const char* id /*none,nullable*/);
// void gtk_column_view_column_set_id (::GtkColumnViewColumn* self /*none*/, const char* id /*none,nullable*/);
GI_INLINE_DECL void set_id (const gi::cstring_v id) noexcept;
GI_INLINE_DECL void set_id () noexcept;

// void gtk_column_view_column_set_resizable (GtkColumnViewColumn* self /*none*/, gboolean resizable);
// void gtk_column_view_column_set_resizable (::GtkColumnViewColumn* self /*none*/, gboolean resizable);
GI_INLINE_DECL void set_resizable (gboolean resizable) noexcept;

// void gtk_column_view_column_set_sorter (GtkColumnViewColumn* self /*none*/, GtkSorter* sorter /*none,nullable*/);
// void gtk_column_view_column_set_sorter (::GtkColumnViewColumn* self /*none*/, ::GtkSorter* sorter /*none,nullable*/);
GI_INLINE_DECL void set_sorter (Gtk::Sorter sorter) noexcept;
GI_INLINE_DECL void set_sorter () noexcept;

// void gtk_column_view_column_set_title (GtkColumnViewColumn* self /*none*/, const char* title /*none,nullable*/);
// void gtk_column_view_column_set_title (::GtkColumnViewColumn* self /*none*/, const char* title /*none,nullable*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;
GI_INLINE_DECL void set_title () noexcept;

// void gtk_column_view_column_set_visible (GtkColumnViewColumn* self /*none*/, gboolean visible);
// void gtk_column_view_column_set_visible (::GtkColumnViewColumn* self /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

gi::property_proxy<Gtk::ColumnView, base::ColumnViewColumnBase> property_column_view()
{ return gi::property_proxy<Gtk::ColumnView, base::ColumnViewColumnBase> (*this, "column-view"); }
const gi::property_proxy<Gtk::ColumnView, base::ColumnViewColumnBase> property_column_view() const
{ return gi::property_proxy<Gtk::ColumnView, base::ColumnViewColumnBase> (*this, "column-view"); }

gi::property_proxy<bool, base::ColumnViewColumnBase> property_expand()
{ return gi::property_proxy<bool, base::ColumnViewColumnBase> (*this, "expand"); }
const gi::property_proxy<bool, base::ColumnViewColumnBase> property_expand() const
{ return gi::property_proxy<bool, base::ColumnViewColumnBase> (*this, "expand"); }

gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewColumnBase> property_factory()
{ return gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewColumnBase> (*this, "factory"); }
const gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewColumnBase> property_factory() const
{ return gi::property_proxy<Gtk::ListItemFactory, base::ColumnViewColumnBase> (*this, "factory"); }

gi::property_proxy<gint, base::ColumnViewColumnBase> property_fixed_width()
{ return gi::property_proxy<gint, base::ColumnViewColumnBase> (*this, "fixed-width"); }
const gi::property_proxy<gint, base::ColumnViewColumnBase> property_fixed_width() const
{ return gi::property_proxy<gint, base::ColumnViewColumnBase> (*this, "fixed-width"); }

gi::property_proxy<Gio::MenuModel, base::ColumnViewColumnBase> property_header_menu()
{ return gi::property_proxy<Gio::MenuModel, base::ColumnViewColumnBase> (*this, "header-menu"); }
const gi::property_proxy<Gio::MenuModel, base::ColumnViewColumnBase> property_header_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::ColumnViewColumnBase> (*this, "header-menu"); }

gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> property_id()
{ return gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> (*this, "id"); }
const gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> property_id() const
{ return gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> (*this, "id"); }

gi::property_proxy<bool, base::ColumnViewColumnBase> property_resizable()
{ return gi::property_proxy<bool, base::ColumnViewColumnBase> (*this, "resizable"); }
const gi::property_proxy<bool, base::ColumnViewColumnBase> property_resizable() const
{ return gi::property_proxy<bool, base::ColumnViewColumnBase> (*this, "resizable"); }

gi::property_proxy<Gtk::Sorter, base::ColumnViewColumnBase> property_sorter()
{ return gi::property_proxy<Gtk::Sorter, base::ColumnViewColumnBase> (*this, "sorter"); }
const gi::property_proxy<Gtk::Sorter, base::ColumnViewColumnBase> property_sorter() const
{ return gi::property_proxy<Gtk::Sorter, base::ColumnViewColumnBase> (*this, "sorter"); }

gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ColumnViewColumnBase> (*this, "title"); }

gi::property_proxy<bool, base::ColumnViewColumnBase> property_visible()
{ return gi::property_proxy<bool, base::ColumnViewColumnBase> (*this, "visible"); }
const gi::property_proxy<bool, base::ColumnViewColumnBase> property_visible() const
{ return gi::property_proxy<bool, base::ColumnViewColumnBase> (*this, "visible"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewcolumn_extra_def.hpp>)
#include <gtk/columnviewcolumn_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewcolumn_extra.hpp>)
#include <gtk/columnviewcolumn_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColumnViewColumn : public GI_GTK_COLUMNVIEWCOLUMN_BASE
{ typedef GI_GTK_COLUMNVIEWCOLUMN_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColumnViewColumn>
{ typedef Gtk::ColumnViewColumn type; }; 

} // namespace repository

} // namespace gi

#endif
