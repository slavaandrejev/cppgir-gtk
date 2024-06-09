// AUTO-GENERATED

#ifndef _GI_GTK_LISTHEADER_HPP_
#define _GI_GTK_LISTHEADER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ListHeader;

namespace base {


#define GI_GTK_LISTHEADER_BASE base::ListHeaderBase
class ListHeaderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkListHeader BaseObjectType;

ListHeaderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_header_get_type(); } 

// GtkWidget* /*none,nullable*/ gtk_list_header_get_child (GtkListHeader* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_list_header_get_child (::GtkListHeader* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// guint gtk_list_header_get_end (GtkListHeader* self /*none*/);
// guint gtk_list_header_get_end (::GtkListHeader* self /*none*/);
GI_INLINE_DECL guint get_end () noexcept;

// gpointer /*none,nullable*/ gtk_list_header_get_item (GtkListHeader* self /*none*/);
// ::GObject* /*none,nullable*/ gtk_list_header_get_item (::GtkListHeader* self /*none*/);
GI_INLINE_DECL GObject::Object get_item () noexcept;

// guint gtk_list_header_get_n_items (GtkListHeader* self /*none*/);
// guint gtk_list_header_get_n_items (::GtkListHeader* self /*none*/);
GI_INLINE_DECL guint get_n_items () noexcept;

// guint gtk_list_header_get_start (GtkListHeader* self /*none*/);
// guint gtk_list_header_get_start (::GtkListHeader* self /*none*/);
GI_INLINE_DECL guint get_start () noexcept;

// void gtk_list_header_set_child (GtkListHeader* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_list_header_set_child (::GtkListHeader* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

gi::property_proxy<Gtk::Widget, base::ListHeaderBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ListHeaderBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ListHeaderBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ListHeaderBase> (*this, "child"); }

gi::property_proxy<guint, base::ListHeaderBase> property_end()
{ return gi::property_proxy<guint, base::ListHeaderBase> (*this, "end"); }
const gi::property_proxy<guint, base::ListHeaderBase> property_end() const
{ return gi::property_proxy<guint, base::ListHeaderBase> (*this, "end"); }

gi::property_proxy<GObject::Object, base::ListHeaderBase> property_item()
{ return gi::property_proxy<GObject::Object, base::ListHeaderBase> (*this, "item"); }
const gi::property_proxy<GObject::Object, base::ListHeaderBase> property_item() const
{ return gi::property_proxy<GObject::Object, base::ListHeaderBase> (*this, "item"); }

gi::property_proxy<guint, base::ListHeaderBase> property_n_items()
{ return gi::property_proxy<guint, base::ListHeaderBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::ListHeaderBase> property_n_items() const
{ return gi::property_proxy<guint, base::ListHeaderBase> (*this, "n-items"); }

gi::property_proxy<guint, base::ListHeaderBase> property_start()
{ return gi::property_proxy<guint, base::ListHeaderBase> (*this, "start"); }
const gi::property_proxy<guint, base::ListHeaderBase> property_start() const
{ return gi::property_proxy<guint, base::ListHeaderBase> (*this, "start"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listheader_extra_def.hpp>)
#include <gtk/listheader_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listheader_extra.hpp>)
#include <gtk/listheader_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListHeader : public GI_GTK_LISTHEADER_BASE
{ typedef GI_GTK_LISTHEADER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListHeader>
{ typedef Gtk::ListHeader type; }; 

} // namespace repository

} // namespace gi

#endif
