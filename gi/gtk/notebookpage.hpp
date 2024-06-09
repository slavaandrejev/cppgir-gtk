// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOKPAGE_HPP_
#define _GI_GTK_NOTEBOOKPAGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class NotebookPage;

namespace base {


#define GI_GTK_NOTEBOOKPAGE_BASE base::NotebookPageBase
class NotebookPageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkNotebookPage BaseObjectType;

NotebookPageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_notebook_page_get_type(); } 

// GtkWidget* /*none*/ gtk_notebook_page_get_child (GtkNotebookPage* page /*none*/);
// ::GtkWidget* /*none*/ gtk_notebook_page_get_child (::GtkNotebookPage* page /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

gi::property_proxy<Gtk::Widget, base::NotebookPageBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::NotebookPageBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::NotebookPageBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::NotebookPageBase> (*this, "child"); }

gi::property_proxy<bool, base::NotebookPageBase> property_detachable()
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "detachable"); }
const gi::property_proxy<bool, base::NotebookPageBase> property_detachable() const
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "detachable"); }

gi::property_proxy<Gtk::Widget, base::NotebookPageBase> property_menu()
{ return gi::property_proxy<Gtk::Widget, base::NotebookPageBase> (*this, "menu"); }
const gi::property_proxy<Gtk::Widget, base::NotebookPageBase> property_menu() const
{ return gi::property_proxy<Gtk::Widget, base::NotebookPageBase> (*this, "menu"); }

gi::property_proxy<gi::cstring, base::NotebookPageBase> property_menu_label()
{ return gi::property_proxy<gi::cstring, base::NotebookPageBase> (*this, "menu-label"); }
const gi::property_proxy<gi::cstring, base::NotebookPageBase> property_menu_label() const
{ return gi::property_proxy<gi::cstring, base::NotebookPageBase> (*this, "menu-label"); }

gi::property_proxy<gint, base::NotebookPageBase> property_position()
{ return gi::property_proxy<gint, base::NotebookPageBase> (*this, "position"); }
const gi::property_proxy<gint, base::NotebookPageBase> property_position() const
{ return gi::property_proxy<gint, base::NotebookPageBase> (*this, "position"); }

gi::property_proxy<bool, base::NotebookPageBase> property_reorderable()
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "reorderable"); }
const gi::property_proxy<bool, base::NotebookPageBase> property_reorderable() const
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "reorderable"); }

gi::property_proxy<Gtk::Widget, base::NotebookPageBase> property_tab()
{ return gi::property_proxy<Gtk::Widget, base::NotebookPageBase> (*this, "tab"); }
const gi::property_proxy<Gtk::Widget, base::NotebookPageBase> property_tab() const
{ return gi::property_proxy<Gtk::Widget, base::NotebookPageBase> (*this, "tab"); }

gi::property_proxy<bool, base::NotebookPageBase> property_tab_expand()
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "tab-expand"); }
const gi::property_proxy<bool, base::NotebookPageBase> property_tab_expand() const
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "tab-expand"); }

gi::property_proxy<bool, base::NotebookPageBase> property_tab_fill()
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "tab-fill"); }
const gi::property_proxy<bool, base::NotebookPageBase> property_tab_fill() const
{ return gi::property_proxy<bool, base::NotebookPageBase> (*this, "tab-fill"); }

gi::property_proxy<gi::cstring, base::NotebookPageBase> property_tab_label()
{ return gi::property_proxy<gi::cstring, base::NotebookPageBase> (*this, "tab-label"); }
const gi::property_proxy<gi::cstring, base::NotebookPageBase> property_tab_label() const
{ return gi::property_proxy<gi::cstring, base::NotebookPageBase> (*this, "tab-label"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebookpage_extra_def.hpp>)
#include <gtk/notebookpage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebookpage_extra.hpp>)
#include <gtk/notebookpage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NotebookPage : public GI_GTK_NOTEBOOKPAGE_BASE
{ typedef GI_GTK_NOTEBOOKPAGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNotebookPage>
{ typedef Gtk::NotebookPage type; }; 

} // namespace repository

} // namespace gi

#endif
