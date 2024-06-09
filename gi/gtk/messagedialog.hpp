// AUTO-GENERATED

#ifndef _GI_GTK_MESSAGEDIALOG_HPP_
#define _GI_GTK_MESSAGEDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;
class Window;

class MessageDialog;

namespace base {


#define GI_GTK_MESSAGEDIALOG_BASE base::MessageDialogBase
class MessageDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkMessageDialog BaseObjectType;

MessageDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_message_dialog_get_type(); } 

// GtkWidget* /*none*/ gtk_message_dialog_new (GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// ::GtkMessageDialog* /*none*/ gtk_message_dialog_new (::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, ::GtkMessageType type, ::GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* /*none*/ gtk_message_dialog_new_with_markup (GtkWindow* parent /*none,nullable*/, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// ::GtkMessageDialog* /*none*/ gtk_message_dialog_new_with_markup (::GtkWindow* parent /*none,nullable*/, ::GtkDialogFlags flags, ::GtkMessageType type, ::GtkButtonsType buttons, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_message_dialog_format_secondary_markup (GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none*/,  ..._ /*none*/);
// void gtk_message_dialog_format_secondary_markup (::GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_message_dialog_format_secondary_text (GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// void gtk_message_dialog_format_secondary_text (::GtkMessageDialog* message_dialog /*none*/, const char* message_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* /*none*/ gtk_message_dialog_get_message_area (GtkMessageDialog* message_dialog /*none*/);
// ::GtkWidget* /*none*/ gtk_message_dialog_get_message_area (::GtkMessageDialog* message_dialog /*none*/);
GI_INLINE_DECL Gtk::Widget get_message_area () noexcept;

// void gtk_message_dialog_set_markup (GtkMessageDialog* message_dialog /*none*/, const char* str /*none*/);
// void gtk_message_dialog_set_markup (::GtkMessageDialog* message_dialog /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_markup (const gi::cstring_v str) noexcept;

gi::property_proxy_write<Gtk::ButtonsType, base::MessageDialogBase> property_buttons()
{ return gi::property_proxy_write<Gtk::ButtonsType, base::MessageDialogBase> (*this, "buttons"); }

gi::property_proxy<Gtk::Widget, base::MessageDialogBase> property_message_area()
{ return gi::property_proxy<Gtk::Widget, base::MessageDialogBase> (*this, "message-area"); }
const gi::property_proxy<Gtk::Widget, base::MessageDialogBase> property_message_area() const
{ return gi::property_proxy<Gtk::Widget, base::MessageDialogBase> (*this, "message-area"); }

gi::property_proxy<Gtk::MessageType, base::MessageDialogBase> property_message_type()
{ return gi::property_proxy<Gtk::MessageType, base::MessageDialogBase> (*this, "message-type"); }
const gi::property_proxy<Gtk::MessageType, base::MessageDialogBase> property_message_type() const
{ return gi::property_proxy<Gtk::MessageType, base::MessageDialogBase> (*this, "message-type"); }

gi::property_proxy<gi::cstring, base::MessageDialogBase> property_secondary_text()
{ return gi::property_proxy<gi::cstring, base::MessageDialogBase> (*this, "secondary-text"); }
const gi::property_proxy<gi::cstring, base::MessageDialogBase> property_secondary_text() const
{ return gi::property_proxy<gi::cstring, base::MessageDialogBase> (*this, "secondary-text"); }

gi::property_proxy<bool, base::MessageDialogBase> property_secondary_use_markup()
{ return gi::property_proxy<bool, base::MessageDialogBase> (*this, "secondary-use-markup"); }
const gi::property_proxy<bool, base::MessageDialogBase> property_secondary_use_markup() const
{ return gi::property_proxy<bool, base::MessageDialogBase> (*this, "secondary-use-markup"); }

gi::property_proxy<gi::cstring, base::MessageDialogBase> property_text()
{ return gi::property_proxy<gi::cstring, base::MessageDialogBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::MessageDialogBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::MessageDialogBase> (*this, "text"); }

gi::property_proxy<bool, base::MessageDialogBase> property_use_markup()
{ return gi::property_proxy<bool, base::MessageDialogBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::MessageDialogBase> property_use_markup() const
{ return gi::property_proxy<bool, base::MessageDialogBase> (*this, "use-markup"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/messagedialog_extra_def.hpp>)
#include <gtk/messagedialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/messagedialog_extra.hpp>)
#include <gtk/messagedialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MessageDialog : public GI_GTK_MESSAGEDIALOG_BASE
{ typedef GI_GTK_MESSAGEDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMessageDialog>
{ typedef Gtk::MessageDialog type; }; 

} // namespace repository

} // namespace gi

#endif
