// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERBUTTON_HPP_
#define _GI_GTK_APPCHOOSERBUTTON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser;

class AppChooserButton;

namespace base {


#define GI_GTK_APPCHOOSERBUTTON_BASE base::AppChooserButtonBase
class AppChooserButtonBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkAppChooserButton BaseObjectType;

AppChooserButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_button_get_type(); } 

GI_INLINE_DECL Gtk::AppChooser interface_ (gi::interface_tag<Gtk::AppChooser>);

GI_INLINE_DECL operator Gtk::AppChooser ();

// GtkWidget* /*none*/ gtk_app_chooser_button_new (const char* content_type /*none*/);
// ::GtkAppChooserButton* /*none*/ gtk_app_chooser_button_new (const char* content_type /*none*/);
static GI_INLINE_DECL Gtk::AppChooserButton new_ (const gi::cstring_v content_type) noexcept;

// void gtk_app_chooser_button_append_custom_item (GtkAppChooserButton* self /*none*/, const char* name /*none*/, const char* label /*none*/, GIcon* icon /*none*/);
// void gtk_app_chooser_button_append_custom_item (::GtkAppChooserButton* self /*none*/, const char* name /*none*/, const char* label /*none*/, ::GIcon* icon /*none*/);
GI_INLINE_DECL void append_custom_item (const gi::cstring_v name, const gi::cstring_v label, Gio::Icon icon) noexcept;

// void gtk_app_chooser_button_append_separator (GtkAppChooserButton* self /*none*/);
// void gtk_app_chooser_button_append_separator (::GtkAppChooserButton* self /*none*/);
GI_INLINE_DECL void append_separator () noexcept;

// const char* /*none,nullable*/ gtk_app_chooser_button_get_heading (GtkAppChooserButton* self /*none*/);
// const char* /*none,nullable*/ gtk_app_chooser_button_get_heading (::GtkAppChooserButton* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_heading () noexcept;

// gboolean gtk_app_chooser_button_get_modal (GtkAppChooserButton* self /*none*/);
// gboolean gtk_app_chooser_button_get_modal (::GtkAppChooserButton* self /*none*/);
GI_INLINE_DECL bool get_modal () noexcept;

// gboolean gtk_app_chooser_button_get_show_default_item (GtkAppChooserButton* self /*none*/);
// gboolean gtk_app_chooser_button_get_show_default_item (::GtkAppChooserButton* self /*none*/);
GI_INLINE_DECL bool get_show_default_item () noexcept;

// gboolean gtk_app_chooser_button_get_show_dialog_item (GtkAppChooserButton* self /*none*/);
// gboolean gtk_app_chooser_button_get_show_dialog_item (::GtkAppChooserButton* self /*none*/);
GI_INLINE_DECL bool get_show_dialog_item () noexcept;

// void gtk_app_chooser_button_set_active_custom_item (GtkAppChooserButton* self /*none*/, const char* name /*none*/);
// void gtk_app_chooser_button_set_active_custom_item (::GtkAppChooserButton* self /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_active_custom_item (const gi::cstring_v name) noexcept;

// void gtk_app_chooser_button_set_heading (GtkAppChooserButton* self /*none*/, const char* heading /*none*/);
// void gtk_app_chooser_button_set_heading (::GtkAppChooserButton* self /*none*/, const char* heading /*none*/);
GI_INLINE_DECL void set_heading (const gi::cstring_v heading) noexcept;

// void gtk_app_chooser_button_set_modal (GtkAppChooserButton* self /*none*/, gboolean modal);
// void gtk_app_chooser_button_set_modal (::GtkAppChooserButton* self /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_app_chooser_button_set_show_default_item (GtkAppChooserButton* self /*none*/, gboolean setting);
// void gtk_app_chooser_button_set_show_default_item (::GtkAppChooserButton* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_default_item (gboolean setting) noexcept;

// void gtk_app_chooser_button_set_show_dialog_item (GtkAppChooserButton* self /*none*/, gboolean setting);
// void gtk_app_chooser_button_set_show_dialog_item (::GtkAppChooserButton* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_dialog_item (gboolean setting) noexcept;

gi::property_proxy<gi::cstring, base::AppChooserButtonBase> property_heading()
{ return gi::property_proxy<gi::cstring, base::AppChooserButtonBase> (*this, "heading"); }
const gi::property_proxy<gi::cstring, base::AppChooserButtonBase> property_heading() const
{ return gi::property_proxy<gi::cstring, base::AppChooserButtonBase> (*this, "heading"); }

gi::property_proxy<bool, base::AppChooserButtonBase> property_modal()
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "modal"); }
const gi::property_proxy<bool, base::AppChooserButtonBase> property_modal() const
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "modal"); }

gi::property_proxy<bool, base::AppChooserButtonBase> property_show_default_item()
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-default-item"); }
const gi::property_proxy<bool, base::AppChooserButtonBase> property_show_default_item() const
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-default-item"); }

gi::property_proxy<bool, base::AppChooserButtonBase> property_show_dialog_item()
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-dialog-item"); }
const gi::property_proxy<bool, base::AppChooserButtonBase> property_show_dialog_item() const
{ return gi::property_proxy<bool, base::AppChooserButtonBase> (*this, "show-dialog-item"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::AppChooserButton)> signal_activate()
{ return gi::signal_proxy<void(Gtk::AppChooserButton)> (*this, "activate"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gtk::AppChooserButton)> signal_changed()
{ return gi::signal_proxy<void(Gtk::AppChooserButton)> (*this, "changed"); }

// (signal) void custom-item-activated (gchar* item_name /*none*/);
// (signal) void custom-item-activated (char* item_name /*none*/);
gi::signal_proxy<void(Gtk::AppChooserButton, gi::cstring_v item_name)> signal_custom_item_activated()
{ return gi::signal_proxy<void(Gtk::AppChooserButton, gi::cstring_v item_name)> (*this, "custom-item-activated"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra_def.hpp>)
#include <gtk/appchooserbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra.hpp>)
#include <gtk/appchooserbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooserButton : public GI_GTK_APPCHOOSERBUTTON_BASE
{ typedef GI_GTK_APPCHOOSERBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooserButton>
{ typedef Gtk::AppChooserButton type; }; 

} // namespace repository

} // namespace gi

#endif
