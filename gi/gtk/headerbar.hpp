// AUTO-GENERATED

#ifndef _GI_GTK_HEADERBAR_HPP_
#define _GI_GTK_HEADERBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class HeaderBar;

namespace base {


#define GI_GTK_HEADERBAR_BASE base::HeaderBarBase
class HeaderBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkHeaderBar BaseObjectType;

HeaderBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_header_bar_get_type(); } 

// GtkWidget* /*none*/ gtk_header_bar_new ();
// ::GtkHeaderBar* /*none*/ gtk_header_bar_new ();
static GI_INLINE_DECL Gtk::HeaderBar new_ () noexcept;

// const char* /*none,nullable*/ gtk_header_bar_get_decoration_layout (GtkHeaderBar* bar /*none*/);
// const char* /*none,nullable*/ gtk_header_bar_get_decoration_layout (::GtkHeaderBar* bar /*none*/);
GI_INLINE_DECL gi::cstring_v get_decoration_layout () noexcept;

// gboolean gtk_header_bar_get_show_title_buttons (GtkHeaderBar* bar /*none*/);
// gboolean gtk_header_bar_get_show_title_buttons (::GtkHeaderBar* bar /*none*/);
GI_INLINE_DECL bool get_show_title_buttons () noexcept;

// GtkWidget* /*none,nullable*/ gtk_header_bar_get_title_widget (GtkHeaderBar* bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_header_bar_get_title_widget (::GtkHeaderBar* bar /*none*/);
GI_INLINE_DECL Gtk::Widget get_title_widget () noexcept;

// void gtk_header_bar_pack_end (GtkHeaderBar* bar /*none*/, GtkWidget* child /*none*/);
// void gtk_header_bar_pack_end (::GtkHeaderBar* bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void pack_end (Gtk::Widget child) noexcept;

// void gtk_header_bar_pack_start (GtkHeaderBar* bar /*none*/, GtkWidget* child /*none*/);
// void gtk_header_bar_pack_start (::GtkHeaderBar* bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void pack_start (Gtk::Widget child) noexcept;

// void gtk_header_bar_remove (GtkHeaderBar* bar /*none*/, GtkWidget* child /*none*/);
// void gtk_header_bar_remove (::GtkHeaderBar* bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void gtk_header_bar_set_decoration_layout (GtkHeaderBar* bar /*none*/, const char* layout /*none,nullable*/);
// void gtk_header_bar_set_decoration_layout (::GtkHeaderBar* bar /*none*/, const char* layout /*none,nullable*/);
GI_INLINE_DECL void set_decoration_layout (const gi::cstring_v layout) noexcept;
GI_INLINE_DECL void set_decoration_layout () noexcept;

// void gtk_header_bar_set_show_title_buttons (GtkHeaderBar* bar /*none*/, gboolean setting);
// void gtk_header_bar_set_show_title_buttons (::GtkHeaderBar* bar /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_title_buttons (gboolean setting) noexcept;

// void gtk_header_bar_set_title_widget (GtkHeaderBar* bar /*none*/, GtkWidget* title_widget /*none,nullable*/);
// void gtk_header_bar_set_title_widget (::GtkHeaderBar* bar /*none*/, ::GtkWidget* title_widget /*none,nullable*/);
GI_INLINE_DECL void set_title_widget (Gtk::Widget title_widget) noexcept;
GI_INLINE_DECL void set_title_widget () noexcept;

gi::property_proxy<gi::cstring, base::HeaderBarBase> property_decoration_layout()
{ return gi::property_proxy<gi::cstring, base::HeaderBarBase> (*this, "decoration-layout"); }
const gi::property_proxy<gi::cstring, base::HeaderBarBase> property_decoration_layout() const
{ return gi::property_proxy<gi::cstring, base::HeaderBarBase> (*this, "decoration-layout"); }

gi::property_proxy<bool, base::HeaderBarBase> property_show_title_buttons()
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-title-buttons"); }
const gi::property_proxy<bool, base::HeaderBarBase> property_show_title_buttons() const
{ return gi::property_proxy<bool, base::HeaderBarBase> (*this, "show-title-buttons"); }

gi::property_proxy<Gtk::Widget, base::HeaderBarBase> property_title_widget()
{ return gi::property_proxy<Gtk::Widget, base::HeaderBarBase> (*this, "title-widget"); }
const gi::property_proxy<Gtk::Widget, base::HeaderBarBase> property_title_widget() const
{ return gi::property_proxy<Gtk::Widget, base::HeaderBarBase> (*this, "title-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra_def.hpp>)
#include <gtk/headerbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/headerbar_extra.hpp>)
#include <gtk/headerbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HeaderBar : public GI_GTK_HEADERBAR_BASE
{ typedef GI_GTK_HEADERBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHeaderBar>
{ typedef Gtk::HeaderBar type; }; 

} // namespace repository

} // namespace gi

#endif
