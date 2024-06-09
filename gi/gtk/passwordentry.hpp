// AUTO-GENERATED

#ifndef _GI_GTK_PASSWORDENTRY_HPP_
#define _GI_GTK_PASSWORDENTRY_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Editable;

class PasswordEntry;

namespace base {


#define GI_GTK_PASSWORDENTRY_BASE base::PasswordEntryBase
class PasswordEntryBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkPasswordEntry BaseObjectType;

PasswordEntryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_password_entry_get_type(); } 

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ gtk_password_entry_new ();
// ::GtkPasswordEntry* /*none*/ gtk_password_entry_new ();
static GI_INLINE_DECL Gtk::PasswordEntry new_ () noexcept;

// GMenuModel* /*none,nullable*/ gtk_password_entry_get_extra_menu (GtkPasswordEntry* entry /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_password_entry_get_extra_menu (::GtkPasswordEntry* entry /*none*/);
GI_INLINE_DECL Gio::MenuModel get_extra_menu () noexcept;

// gboolean gtk_password_entry_get_show_peek_icon (GtkPasswordEntry* entry /*none*/);
// gboolean gtk_password_entry_get_show_peek_icon (::GtkPasswordEntry* entry /*none*/);
GI_INLINE_DECL bool get_show_peek_icon () noexcept;

// void gtk_password_entry_set_extra_menu (GtkPasswordEntry* entry /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_password_entry_set_extra_menu (::GtkPasswordEntry* entry /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_extra_menu (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_extra_menu () noexcept;

// void gtk_password_entry_set_show_peek_icon (GtkPasswordEntry* entry /*none*/, gboolean show_peek_icon);
// void gtk_password_entry_set_show_peek_icon (::GtkPasswordEntry* entry /*none*/, gboolean show_peek_icon);
GI_INLINE_DECL void set_show_peek_icon (gboolean show_peek_icon) noexcept;

gi::property_proxy<bool, base::PasswordEntryBase> property_activates_default()
{ return gi::property_proxy<bool, base::PasswordEntryBase> (*this, "activates-default"); }
const gi::property_proxy<bool, base::PasswordEntryBase> property_activates_default() const
{ return gi::property_proxy<bool, base::PasswordEntryBase> (*this, "activates-default"); }

gi::property_proxy<Gio::MenuModel, base::PasswordEntryBase> property_extra_menu()
{ return gi::property_proxy<Gio::MenuModel, base::PasswordEntryBase> (*this, "extra-menu"); }
const gi::property_proxy<Gio::MenuModel, base::PasswordEntryBase> property_extra_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::PasswordEntryBase> (*this, "extra-menu"); }

gi::property_proxy<gi::cstring, base::PasswordEntryBase> property_placeholder_text()
{ return gi::property_proxy<gi::cstring, base::PasswordEntryBase> (*this, "placeholder-text"); }
const gi::property_proxy<gi::cstring, base::PasswordEntryBase> property_placeholder_text() const
{ return gi::property_proxy<gi::cstring, base::PasswordEntryBase> (*this, "placeholder-text"); }

gi::property_proxy<bool, base::PasswordEntryBase> property_show_peek_icon()
{ return gi::property_proxy<bool, base::PasswordEntryBase> (*this, "show-peek-icon"); }
const gi::property_proxy<bool, base::PasswordEntryBase> property_show_peek_icon() const
{ return gi::property_proxy<bool, base::PasswordEntryBase> (*this, "show-peek-icon"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::PasswordEntry)> signal_activate()
{ return gi::signal_proxy<void(Gtk::PasswordEntry)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/passwordentry_extra_def.hpp>)
#include <gtk/passwordentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/passwordentry_extra.hpp>)
#include <gtk/passwordentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PasswordEntry : public GI_GTK_PASSWORDENTRY_BASE
{ typedef GI_GTK_PASSWORDENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPasswordEntry>
{ typedef Gtk::PasswordEntry type; }; 

} // namespace repository

} // namespace gi

#endif
