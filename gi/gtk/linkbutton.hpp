// AUTO-GENERATED

#ifndef _GI_GTK_LINKBUTTON_HPP_
#define _GI_GTK_LINKBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LinkButton;

namespace base {


#define GI_GTK_LINKBUTTON_BASE base::LinkButtonBase
class LinkButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkLinkButton BaseObjectType;

LinkButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_link_button_get_type(); } 

// GtkWidget* /*none*/ gtk_link_button_new (const char* uri /*none*/);
// ::GtkLinkButton* /*none*/ gtk_link_button_new (const char* uri /*none*/);
static GI_INLINE_DECL Gtk::LinkButton new_ (const gi::cstring_v uri) noexcept;

// GtkWidget* /*none*/ gtk_link_button_new_with_label (const char* uri /*none*/, const char* label /*none,nullable*/);
// ::GtkLinkButton* /*none*/ gtk_link_button_new_with_label (const char* uri /*none*/, const char* label /*none,nullable*/);
static GI_INLINE_DECL Gtk::LinkButton new_with_label (const gi::cstring_v uri, const gi::cstring_v label) noexcept;
static GI_INLINE_DECL Gtk::LinkButton new_with_label (const gi::cstring_v uri) noexcept;

// const char* /*none*/ gtk_link_button_get_uri (GtkLinkButton* link_button /*none*/);
// const char* /*none*/ gtk_link_button_get_uri (::GtkLinkButton* link_button /*none*/);
GI_INLINE_DECL gi::cstring_v get_uri () noexcept;

// gboolean gtk_link_button_get_visited (GtkLinkButton* link_button /*none*/);
// gboolean gtk_link_button_get_visited (::GtkLinkButton* link_button /*none*/);
GI_INLINE_DECL bool get_visited () noexcept;

// void gtk_link_button_set_uri (GtkLinkButton* link_button /*none*/, const char* uri /*none*/);
// void gtk_link_button_set_uri (::GtkLinkButton* link_button /*none*/, const char* uri /*none*/);
GI_INLINE_DECL void set_uri (const gi::cstring_v uri) noexcept;

// void gtk_link_button_set_visited (GtkLinkButton* link_button /*none*/, gboolean visited);
// void gtk_link_button_set_visited (::GtkLinkButton* link_button /*none*/, gboolean visited);
GI_INLINE_DECL void set_visited (gboolean visited) noexcept;

gi::property_proxy<gi::cstring, base::LinkButtonBase> property_uri()
{ return gi::property_proxy<gi::cstring, base::LinkButtonBase> (*this, "uri"); }
const gi::property_proxy<gi::cstring, base::LinkButtonBase> property_uri() const
{ return gi::property_proxy<gi::cstring, base::LinkButtonBase> (*this, "uri"); }

gi::property_proxy<bool, base::LinkButtonBase> property_visited()
{ return gi::property_proxy<bool, base::LinkButtonBase> (*this, "visited"); }
const gi::property_proxy<bool, base::LinkButtonBase> property_visited() const
{ return gi::property_proxy<bool, base::LinkButtonBase> (*this, "visited"); }

// (signal) gboolean activate-link ();
// (signal) gboolean activate-link ();
gi::signal_proxy<bool(Gtk::LinkButton)> signal_activate_link()
{ return gi::signal_proxy<bool(Gtk::LinkButton)> (*this, "activate-link"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra_def.hpp>)
#include <gtk/linkbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra.hpp>)
#include <gtk/linkbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LinkButton : public GI_GTK_LINKBUTTON_BASE
{ typedef GI_GTK_LINKBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLinkButton>
{ typedef Gtk::LinkButton type; }; 

} // namespace repository

} // namespace gi

#endif
