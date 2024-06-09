// AUTO-GENERATED

#ifndef _GI_GTK_COLUMNVIEWROW_HPP_
#define _GI_GTK_COLUMNVIEWROW_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class ColumnViewRow;

namespace base {


#define GI_GTK_COLUMNVIEWROW_BASE base::ColumnViewRowBase
class ColumnViewRowBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkColumnViewRow BaseObjectType;

ColumnViewRowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_column_view_row_get_type(); } 

// const char* /*none*/ gtk_column_view_row_get_accessible_description (GtkColumnViewRow* self /*none*/);
// const char* /*none*/ gtk_column_view_row_get_accessible_description (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accessible_description () noexcept;

// const char* /*none*/ gtk_column_view_row_get_accessible_label (GtkColumnViewRow* self /*none*/);
// const char* /*none*/ gtk_column_view_row_get_accessible_label (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accessible_label () noexcept;

// gboolean gtk_column_view_row_get_activatable (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_activatable (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL bool get_activatable () noexcept;

// gboolean gtk_column_view_row_get_focusable (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_focusable (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL bool get_focusable () noexcept;

// gpointer /*none,nullable*/ gtk_column_view_row_get_item (GtkColumnViewRow* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_column_view_row_get_item (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL GObject::Object get_item () noexcept;

// guint gtk_column_view_row_get_position (GtkColumnViewRow* self /*none*/);
// guint gtk_column_view_row_get_position (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL guint get_position () noexcept;

// gboolean gtk_column_view_row_get_selectable (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_selectable (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL bool get_selectable () noexcept;

// gboolean gtk_column_view_row_get_selected (GtkColumnViewRow* self /*none*/);
// gboolean gtk_column_view_row_get_selected (::GtkColumnViewRow* self /*none*/);
GI_INLINE_DECL bool get_selected () noexcept;

// void gtk_column_view_row_set_accessible_description (GtkColumnViewRow* self /*none*/, const char* description /*none*/);
// void gtk_column_view_row_set_accessible_description (::GtkColumnViewRow* self /*none*/, const char* description /*none*/);
GI_INLINE_DECL void set_accessible_description (const gi::cstring_v description) noexcept;

// void gtk_column_view_row_set_accessible_label (GtkColumnViewRow* self /*none*/, const char* label /*none*/);
// void gtk_column_view_row_set_accessible_label (::GtkColumnViewRow* self /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_accessible_label (const gi::cstring_v label) noexcept;

// void gtk_column_view_row_set_activatable (GtkColumnViewRow* self /*none*/, gboolean activatable);
// void gtk_column_view_row_set_activatable (::GtkColumnViewRow* self /*none*/, gboolean activatable);
GI_INLINE_DECL void set_activatable (gboolean activatable) noexcept;

// void gtk_column_view_row_set_focusable (GtkColumnViewRow* self /*none*/, gboolean focusable);
// void gtk_column_view_row_set_focusable (::GtkColumnViewRow* self /*none*/, gboolean focusable);
GI_INLINE_DECL void set_focusable (gboolean focusable) noexcept;

// void gtk_column_view_row_set_selectable (GtkColumnViewRow* self /*none*/, gboolean selectable);
// void gtk_column_view_row_set_selectable (::GtkColumnViewRow* self /*none*/, gboolean selectable);
GI_INLINE_DECL void set_selectable (gboolean selectable) noexcept;

gi::property_proxy<gi::cstring, base::ColumnViewRowBase> property_accessible_description()
{ return gi::property_proxy<gi::cstring, base::ColumnViewRowBase> (*this, "accessible-description"); }
const gi::property_proxy<gi::cstring, base::ColumnViewRowBase> property_accessible_description() const
{ return gi::property_proxy<gi::cstring, base::ColumnViewRowBase> (*this, "accessible-description"); }

gi::property_proxy<gi::cstring, base::ColumnViewRowBase> property_accessible_label()
{ return gi::property_proxy<gi::cstring, base::ColumnViewRowBase> (*this, "accessible-label"); }
const gi::property_proxy<gi::cstring, base::ColumnViewRowBase> property_accessible_label() const
{ return gi::property_proxy<gi::cstring, base::ColumnViewRowBase> (*this, "accessible-label"); }

gi::property_proxy<bool, base::ColumnViewRowBase> property_activatable()
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "activatable"); }
const gi::property_proxy<bool, base::ColumnViewRowBase> property_activatable() const
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "activatable"); }

gi::property_proxy<bool, base::ColumnViewRowBase> property_focusable()
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "focusable"); }
const gi::property_proxy<bool, base::ColumnViewRowBase> property_focusable() const
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "focusable"); }

gi::property_proxy<GObject::Object, base::ColumnViewRowBase> property_item()
{ return gi::property_proxy<GObject::Object, base::ColumnViewRowBase> (*this, "item"); }
const gi::property_proxy<GObject::Object, base::ColumnViewRowBase> property_item() const
{ return gi::property_proxy<GObject::Object, base::ColumnViewRowBase> (*this, "item"); }

gi::property_proxy<guint, base::ColumnViewRowBase> property_position()
{ return gi::property_proxy<guint, base::ColumnViewRowBase> (*this, "position"); }
const gi::property_proxy<guint, base::ColumnViewRowBase> property_position() const
{ return gi::property_proxy<guint, base::ColumnViewRowBase> (*this, "position"); }

gi::property_proxy<bool, base::ColumnViewRowBase> property_selectable()
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "selectable"); }
const gi::property_proxy<bool, base::ColumnViewRowBase> property_selectable() const
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "selectable"); }

gi::property_proxy<bool, base::ColumnViewRowBase> property_selected()
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "selected"); }
const gi::property_proxy<bool, base::ColumnViewRowBase> property_selected() const
{ return gi::property_proxy<bool, base::ColumnViewRowBase> (*this, "selected"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/columnviewrow_extra_def.hpp>)
#include <gtk/columnviewrow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/columnviewrow_extra.hpp>)
#include <gtk/columnviewrow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColumnViewRow : public GI_GTK_COLUMNVIEWROW_BASE
{ typedef GI_GTK_COLUMNVIEWROW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColumnViewRow>
{ typedef Gtk::ColumnViewRow type; }; 

} // namespace repository

} // namespace gi

#endif
