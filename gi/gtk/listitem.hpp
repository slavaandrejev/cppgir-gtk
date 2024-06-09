// AUTO-GENERATED

#ifndef _GI_GTK_LISTITEM_HPP_
#define _GI_GTK_LISTITEM_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ListItem;

namespace base {


#define GI_GTK_LISTITEM_BASE base::ListItemBase
class ListItemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkListItem BaseObjectType;

ListItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_item_get_type(); } 

// const char* /*none*/ gtk_list_item_get_accessible_description (GtkListItem* self /*none*/);
// const char* /*none*/ gtk_list_item_get_accessible_description (::GtkListItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accessible_description () noexcept;

// const char* /*none*/ gtk_list_item_get_accessible_label (GtkListItem* self /*none*/);
// const char* /*none*/ gtk_list_item_get_accessible_label (::GtkListItem* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_accessible_label () noexcept;

// gboolean gtk_list_item_get_activatable (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_activatable (::GtkListItem* self /*none*/);
GI_INLINE_DECL bool get_activatable () noexcept;

// GtkWidget* /*none,nullable*/ gtk_list_item_get_child (GtkListItem* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_item_get_child (::GtkListItem* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_list_item_get_focusable (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_focusable (::GtkListItem* self /*none*/);
GI_INLINE_DECL bool get_focusable () noexcept;

// gpointer /*none,nullable*/ gtk_list_item_get_item (GtkListItem* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_list_item_get_item (::GtkListItem* self /*none*/);
GI_INLINE_DECL GObject::Object get_item () noexcept;

// guint gtk_list_item_get_position (GtkListItem* self /*none*/);
// guint gtk_list_item_get_position (::GtkListItem* self /*none*/);
GI_INLINE_DECL guint get_position () noexcept;

// gboolean gtk_list_item_get_selectable (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_selectable (::GtkListItem* self /*none*/);
GI_INLINE_DECL bool get_selectable () noexcept;

// gboolean gtk_list_item_get_selected (GtkListItem* self /*none*/);
// gboolean gtk_list_item_get_selected (::GtkListItem* self /*none*/);
GI_INLINE_DECL bool get_selected () noexcept;

// void gtk_list_item_set_accessible_description (GtkListItem* self /*none*/, const char* description /*none*/);
// void gtk_list_item_set_accessible_description (::GtkListItem* self /*none*/, const char* description /*none*/);
GI_INLINE_DECL void set_accessible_description (const gi::cstring_v description) noexcept;

// void gtk_list_item_set_accessible_label (GtkListItem* self /*none*/, const char* label /*none*/);
// void gtk_list_item_set_accessible_label (::GtkListItem* self /*none*/, const char* label /*none*/);
GI_INLINE_DECL void set_accessible_label (const gi::cstring_v label) noexcept;

// void gtk_list_item_set_activatable (GtkListItem* self /*none*/, gboolean activatable);
// void gtk_list_item_set_activatable (::GtkListItem* self /*none*/, gboolean activatable);
GI_INLINE_DECL void set_activatable (gboolean activatable) noexcept;

// void gtk_list_item_set_child (GtkListItem* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_list_item_set_child (::GtkListItem* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_list_item_set_focusable (GtkListItem* self /*none*/, gboolean focusable);
// void gtk_list_item_set_focusable (::GtkListItem* self /*none*/, gboolean focusable);
GI_INLINE_DECL void set_focusable (gboolean focusable) noexcept;

// void gtk_list_item_set_selectable (GtkListItem* self /*none*/, gboolean selectable);
// void gtk_list_item_set_selectable (::GtkListItem* self /*none*/, gboolean selectable);
GI_INLINE_DECL void set_selectable (gboolean selectable) noexcept;

gi::property_proxy<gi::cstring, base::ListItemBase> property_accessible_description()
{ return gi::property_proxy<gi::cstring, base::ListItemBase> (*this, "accessible-description"); }
const gi::property_proxy<gi::cstring, base::ListItemBase> property_accessible_description() const
{ return gi::property_proxy<gi::cstring, base::ListItemBase> (*this, "accessible-description"); }

gi::property_proxy<gi::cstring, base::ListItemBase> property_accessible_label()
{ return gi::property_proxy<gi::cstring, base::ListItemBase> (*this, "accessible-label"); }
const gi::property_proxy<gi::cstring, base::ListItemBase> property_accessible_label() const
{ return gi::property_proxy<gi::cstring, base::ListItemBase> (*this, "accessible-label"); }

gi::property_proxy<bool, base::ListItemBase> property_activatable()
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "activatable"); }
const gi::property_proxy<bool, base::ListItemBase> property_activatable() const
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "activatable"); }

gi::property_proxy<Gtk::Widget, base::ListItemBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ListItemBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ListItemBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ListItemBase> (*this, "child"); }

gi::property_proxy<bool, base::ListItemBase> property_focusable()
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "focusable"); }
const gi::property_proxy<bool, base::ListItemBase> property_focusable() const
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "focusable"); }

gi::property_proxy<GObject::Object, base::ListItemBase> property_item()
{ return gi::property_proxy<GObject::Object, base::ListItemBase> (*this, "item"); }
const gi::property_proxy<GObject::Object, base::ListItemBase> property_item() const
{ return gi::property_proxy<GObject::Object, base::ListItemBase> (*this, "item"); }

gi::property_proxy<guint, base::ListItemBase> property_position()
{ return gi::property_proxy<guint, base::ListItemBase> (*this, "position"); }
const gi::property_proxy<guint, base::ListItemBase> property_position() const
{ return gi::property_proxy<guint, base::ListItemBase> (*this, "position"); }

gi::property_proxy<bool, base::ListItemBase> property_selectable()
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "selectable"); }
const gi::property_proxy<bool, base::ListItemBase> property_selectable() const
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "selectable"); }

gi::property_proxy<bool, base::ListItemBase> property_selected()
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "selected"); }
const gi::property_proxy<bool, base::ListItemBase> property_selected() const
{ return gi::property_proxy<bool, base::ListItemBase> (*this, "selected"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listitem_extra_def.hpp>)
#include <gtk/listitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listitem_extra.hpp>)
#include <gtk/listitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListItem : public GI_GTK_LISTITEM_BASE
{ typedef GI_GTK_LISTITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListItem>
{ typedef Gtk::ListItem type; }; 

} // namespace repository

} // namespace gi

#endif
