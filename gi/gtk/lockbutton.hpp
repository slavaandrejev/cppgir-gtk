// AUTO-GENERATED

#ifndef _GI_GTK_LOCKBUTTON_HPP_
#define _GI_GTK_LOCKBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LockButton;

namespace base {


#define GI_GTK_LOCKBUTTON_BASE base::LockButtonBase
class LockButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkLockButton BaseObjectType;

LockButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_lock_button_get_type(); } 

// GtkWidget* /*none*/ gtk_lock_button_new (GPermission* permission /*none,nullable*/);
// ::GtkLockButton* /*none*/ gtk_lock_button_new (::GPermission* permission /*none,nullable*/);
static GI_INLINE_DECL Gtk::LockButton new_ (Gio::Permission permission) noexcept;
static GI_INLINE_DECL Gtk::LockButton new_ () noexcept;

// GPermission* /*none,nullable*/ gtk_lock_button_get_permission (GtkLockButton* button /*none*/);
// ::GPermission* /*none,nullable*/ gtk_lock_button_get_permission (::GtkLockButton* button /*none*/);
GI_INLINE_DECL Gio::Permission get_permission () noexcept;

// void gtk_lock_button_set_permission (GtkLockButton* button /*none*/, GPermission* permission /*none,nullable*/);
// void gtk_lock_button_set_permission (::GtkLockButton* button /*none*/, ::GPermission* permission /*none,nullable*/);
GI_INLINE_DECL void set_permission (Gio::Permission permission) noexcept;
GI_INLINE_DECL void set_permission () noexcept;

gi::property_proxy<Gio::Permission, base::LockButtonBase> property_permission()
{ return gi::property_proxy<Gio::Permission, base::LockButtonBase> (*this, "permission"); }
const gi::property_proxy<Gio::Permission, base::LockButtonBase> property_permission() const
{ return gi::property_proxy<Gio::Permission, base::LockButtonBase> (*this, "permission"); }

gi::property_proxy<gi::cstring, base::LockButtonBase> property_text_lock()
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "text-lock"); }
const gi::property_proxy<gi::cstring, base::LockButtonBase> property_text_lock() const
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "text-lock"); }

gi::property_proxy<gi::cstring, base::LockButtonBase> property_text_unlock()
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "text-unlock"); }
const gi::property_proxy<gi::cstring, base::LockButtonBase> property_text_unlock() const
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "text-unlock"); }

gi::property_proxy<gi::cstring, base::LockButtonBase> property_tooltip_lock()
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "tooltip-lock"); }
const gi::property_proxy<gi::cstring, base::LockButtonBase> property_tooltip_lock() const
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "tooltip-lock"); }

gi::property_proxy<gi::cstring, base::LockButtonBase> property_tooltip_not_authorized()
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "tooltip-not-authorized"); }
const gi::property_proxy<gi::cstring, base::LockButtonBase> property_tooltip_not_authorized() const
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "tooltip-not-authorized"); }

gi::property_proxy<gi::cstring, base::LockButtonBase> property_tooltip_unlock()
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "tooltip-unlock"); }
const gi::property_proxy<gi::cstring, base::LockButtonBase> property_tooltip_unlock() const
{ return gi::property_proxy<gi::cstring, base::LockButtonBase> (*this, "tooltip-unlock"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/lockbutton_extra_def.hpp>)
#include <gtk/lockbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/lockbutton_extra.hpp>)
#include <gtk/lockbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LockButton : public GI_GTK_LOCKBUTTON_BASE
{ typedef GI_GTK_LOCKBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLockButton>
{ typedef Gtk::LockButton type; }; 

} // namespace repository

} // namespace gi

#endif
