// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERWIDGET_HPP_
#define _GI_GTK_APPCHOOSERWIDGET_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser;

class AppChooserWidget;

namespace base {


#define GI_GTK_APPCHOOSERWIDGET_BASE base::AppChooserWidgetBase
class AppChooserWidgetBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkAppChooserWidget BaseObjectType;

AppChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::AppChooser interface_ (gi::interface_tag<Gtk::AppChooser>);

GI_INLINE_DECL operator Gtk::AppChooser ();

// GtkWidget* /*none*/ gtk_app_chooser_widget_new (const char* content_type /*none*/);
// ::GtkAppChooserWidget* /*none*/ gtk_app_chooser_widget_new (const char* content_type /*none*/);
static GI_INLINE_DECL Gtk::AppChooserWidget new_ (const gi::cstring_v content_type) noexcept;

// const char* /*none,nullable*/ gtk_app_chooser_widget_get_default_text (GtkAppChooserWidget* self /*none*/);
// const char* /*none,nullable*/ gtk_app_chooser_widget_get_default_text (::GtkAppChooserWidget* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_default_text () noexcept;

// gboolean gtk_app_chooser_widget_get_show_all (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_all (::GtkAppChooserWidget* self /*none*/);
GI_INLINE_DECL bool get_show_all () noexcept;

// gboolean gtk_app_chooser_widget_get_show_default (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_default (::GtkAppChooserWidget* self /*none*/);
GI_INLINE_DECL bool get_show_default () noexcept;

// gboolean gtk_app_chooser_widget_get_show_fallback (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_fallback (::GtkAppChooserWidget* self /*none*/);
GI_INLINE_DECL bool get_show_fallback () noexcept;

// gboolean gtk_app_chooser_widget_get_show_other (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_other (::GtkAppChooserWidget* self /*none*/);
GI_INLINE_DECL bool get_show_other () noexcept;

// gboolean gtk_app_chooser_widget_get_show_recommended (GtkAppChooserWidget* self /*none*/);
// gboolean gtk_app_chooser_widget_get_show_recommended (::GtkAppChooserWidget* self /*none*/);
GI_INLINE_DECL bool get_show_recommended () noexcept;

// void gtk_app_chooser_widget_set_default_text (GtkAppChooserWidget* self /*none*/, const char* text /*none*/);
// void gtk_app_chooser_widget_set_default_text (::GtkAppChooserWidget* self /*none*/, const char* text /*none*/);
GI_INLINE_DECL void set_default_text (const gi::cstring_v text) noexcept;

// void gtk_app_chooser_widget_set_show_all (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_all (::GtkAppChooserWidget* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_all (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_default (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_default (::GtkAppChooserWidget* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_default (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_fallback (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_fallback (::GtkAppChooserWidget* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_fallback (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_other (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_other (::GtkAppChooserWidget* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_other (gboolean setting) noexcept;

// void gtk_app_chooser_widget_set_show_recommended (GtkAppChooserWidget* self /*none*/, gboolean setting);
// void gtk_app_chooser_widget_set_show_recommended (::GtkAppChooserWidget* self /*none*/, gboolean setting);
GI_INLINE_DECL void set_show_recommended (gboolean setting) noexcept;

gi::property_proxy<gi::cstring, base::AppChooserWidgetBase> property_default_text()
{ return gi::property_proxy<gi::cstring, base::AppChooserWidgetBase> (*this, "default-text"); }
const gi::property_proxy<gi::cstring, base::AppChooserWidgetBase> property_default_text() const
{ return gi::property_proxy<gi::cstring, base::AppChooserWidgetBase> (*this, "default-text"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_all()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-all"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_all() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-all"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_default()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-default"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_default() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-default"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_fallback()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-fallback"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_fallback() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-fallback"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_other()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-other"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_other() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-other"); }

gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_recommended()
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-recommended"); }
const gi::property_proxy<bool, base::AppChooserWidgetBase> property_show_recommended() const
{ return gi::property_proxy<bool, base::AppChooserWidgetBase> (*this, "show-recommended"); }

// (signal) void application-activated ( application /*none*/);
// (signal) void application-activated (::GAppInfo* application /*none*/);
gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> signal_application_activated()
{ return gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> (*this, "application-activated"); }

// (signal) void application-selected ( application /*none*/);
// (signal) void application-selected (::GAppInfo* application /*none*/);
gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> signal_application_selected()
{ return gi::signal_proxy<void(Gtk::AppChooserWidget, Gio::AppInfo application)> (*this, "application-selected"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra_def.hpp>)
#include <gtk/appchooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra.hpp>)
#include <gtk/appchooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooserWidget : public GI_GTK_APPCHOOSERWIDGET_BASE
{ typedef GI_GTK_APPCHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooserWidget>
{ typedef Gtk::AppChooserWidget type; }; 

} // namespace repository

} // namespace gi

#endif
