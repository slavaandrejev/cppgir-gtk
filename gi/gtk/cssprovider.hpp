// AUTO-GENERATED

#ifndef _GI_GTK_CSSPROVIDER_HPP_
#define _GI_GTK_CSSPROVIDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CssSection;
class CssSection_Ref;
class StyleProvider;

class CssProvider;

namespace base {


#define GI_GTK_CSSPROVIDER_BASE base::CssProviderBase
class CssProviderBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkCssProvider BaseObjectType;

CssProviderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_css_provider_get_type(); } 

GI_INLINE_DECL Gtk::StyleProvider interface_ (gi::interface_tag<Gtk::StyleProvider>);

GI_INLINE_DECL operator Gtk::StyleProvider ();

// GtkCssProvider* /*full*/ gtk_css_provider_new ();
// ::GtkCssProvider* /*full*/ gtk_css_provider_new ();
static GI_INLINE_DECL Gtk::CssProvider new_ () noexcept;

// void gtk_css_provider_load_from_bytes (GtkCssProvider* css_provider /*none*/, GBytes* data /*none*/);
// void gtk_css_provider_load_from_bytes (::GtkCssProvider* css_provider /*none*/, ::GBytes* data /*none*/);
GI_INLINE_DECL void load_from_bytes (GLib::Bytes_Ref data) noexcept;

// void gtk_css_provider_load_from_data (GtkCssProvider* css_provider /*none*/, const char* data /*none*/, gssize length);
// void gtk_css_provider_load_from_data (::GtkCssProvider* css_provider /*none*/, const char* data /*none*/, gssize length);
GI_INLINE_DECL void load_from_data (const gi::cstring_v data, gssize length) noexcept;

// void gtk_css_provider_load_from_file (GtkCssProvider* css_provider /*none*/, GFile* file /*none*/);
// void gtk_css_provider_load_from_file (::GtkCssProvider* css_provider /*none*/, ::GFile* file /*none*/);
GI_INLINE_DECL void load_from_file (Gio::File file) noexcept;

// void gtk_css_provider_load_from_path (GtkCssProvider* css_provider /*none*/, const char* path /*none*/);
// void gtk_css_provider_load_from_path (::GtkCssProvider* css_provider /*none*/, const char* path /*none*/);
GI_INLINE_DECL void load_from_path (const gi::cstring_v path) noexcept;

// void gtk_css_provider_load_from_resource (GtkCssProvider* css_provider /*none*/, const char* resource_path /*none*/);
// void gtk_css_provider_load_from_resource (::GtkCssProvider* css_provider /*none*/, const char* resource_path /*none*/);
GI_INLINE_DECL void load_from_resource (const gi::cstring_v resource_path) noexcept;

// void gtk_css_provider_load_from_string (GtkCssProvider* css_provider /*none*/, const char* string /*none*/);
// void gtk_css_provider_load_from_string (::GtkCssProvider* css_provider /*none*/, const char* string /*none*/);
GI_INLINE_DECL void load_from_string (const gi::cstring_v string) noexcept;

// void gtk_css_provider_load_named (GtkCssProvider* provider /*none*/, const char* name /*none*/, const char* variant /*none,nullable*/);
// void gtk_css_provider_load_named (::GtkCssProvider* provider /*none*/, const char* name /*none*/, const char* variant /*none,nullable*/);
GI_INLINE_DECL void load_named (const gi::cstring_v name, const gi::cstring_v variant) noexcept;
GI_INLINE_DECL void load_named (const gi::cstring_v name) noexcept;

// char* /*full*/ gtk_css_provider_to_string (GtkCssProvider* provider /*none*/);
// char* /*full*/ gtk_css_provider_to_string (::GtkCssProvider* provider /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// (signal) void parsing-error ( section /*none*/,  error /*none*/);
// (signal) void parsing-error (::GtkCssSection* section /*none*/, ::GError* error /*none*/);
gi::signal_proxy<void(Gtk::CssProvider, Gtk::CssSection_Ref section, GLib::Error_Ref error)> signal_parsing_error()
{ return gi::signal_proxy<void(Gtk::CssProvider, Gtk::CssSection_Ref section, GLib::Error_Ref error)> (*this, "parsing-error"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra_def.hpp>)
#include <gtk/cssprovider_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cssprovider_extra.hpp>)
#include <gtk/cssprovider_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CssProvider : public GI_GTK_CSSPROVIDER_BASE
{ typedef GI_GTK_CSSPROVIDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCssProvider>
{ typedef Gtk::CssProvider type; }; 

} // namespace repository

} // namespace gi

#endif
