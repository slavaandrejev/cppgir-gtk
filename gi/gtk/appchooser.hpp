// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSER_HPP_
#define _GI_GTK_APPCHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class AppChooser;

namespace base {


#define GI_GTK_APPCHOOSER_BASE base::AppChooserBase
class AppChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkAppChooser BaseObjectType;

AppChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_get_type(); } 

// GAppInfo* /*full,nullable*/ gtk_app_chooser_get_app_info (GtkAppChooser* self /*none*/);
// ::GAppInfo* /*full,nullable*/ gtk_app_chooser_get_app_info (::GtkAppChooser* self /*none*/);
GI_INLINE_DECL Gio::AppInfo get_app_info () noexcept;

// char* /*full*/ gtk_app_chooser_get_content_type (GtkAppChooser* self /*none*/);
// char* /*full*/ gtk_app_chooser_get_content_type (::GtkAppChooser* self /*none*/);
GI_INLINE_DECL gi::cstring get_content_type () noexcept;

// void gtk_app_chooser_refresh (GtkAppChooser* self /*none*/);
// void gtk_app_chooser_refresh (::GtkAppChooser* self /*none*/);
GI_INLINE_DECL void refresh () noexcept;

gi::property_proxy<gi::cstring, base::AppChooserBase> property_content_type()
{ return gi::property_proxy<gi::cstring, base::AppChooserBase> (*this, "content-type"); }
const gi::property_proxy<gi::cstring, base::AppChooserBase> property_content_type() const
{ return gi::property_proxy<gi::cstring, base::AppChooserBase> (*this, "content-type"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooser_extra_def.hpp>)
#include <gtk/appchooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooser_extra.hpp>)
#include <gtk/appchooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser : public GI_GTK_APPCHOOSER_BASE
{ typedef GI_GTK_APPCHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooser>
{ typedef Gtk::AppChooser type; }; 

} // namespace repository

} // namespace gi

#endif
