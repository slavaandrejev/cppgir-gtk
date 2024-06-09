// AUTO-GENERATED

#ifndef _GI_GTK_ICONTHEME_HPP_
#define _GI_GTK_ICONTHEME_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class IconPaintable;

class IconTheme;

namespace base {


#define GI_GTK_ICONTHEME_BASE base::IconThemeBase
class IconThemeBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIconTheme BaseObjectType;

IconThemeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_theme_get_type(); } 

// GtkIconTheme* /*full*/ gtk_icon_theme_new ();
// ::GtkIconTheme* /*full*/ gtk_icon_theme_new ();
static GI_INLINE_DECL Gtk::IconTheme new_ () noexcept;

// GtkIconTheme* /*none*/ gtk_icon_theme_get_for_display (GdkDisplay* display /*none*/);
// ::GtkIconTheme* /*none*/ gtk_icon_theme_get_for_display (::GdkDisplay* display /*none*/);
static GI_INLINE_DECL Gtk::IconTheme get_for_display (Gdk::Display display) noexcept;

// void gtk_icon_theme_add_resource_path (GtkIconTheme* self /*none*/, const char* path /*none*/);
// void gtk_icon_theme_add_resource_path (::GtkIconTheme* self /*none*/, const char* path /*none*/);
GI_INLINE_DECL void add_resource_path (const gi::cstring_v path) noexcept;

// void gtk_icon_theme_add_search_path (GtkIconTheme* self /*none*/, const char* path /*none*/);
// void gtk_icon_theme_add_search_path (::GtkIconTheme* self /*none*/, const char* path /*none*/);
GI_INLINE_DECL void add_search_path (const gi::cstring_v path) noexcept;

// GdkDisplay* /*none,nullable*/ gtk_icon_theme_get_display (GtkIconTheme* self /*none*/);
// ::GdkDisplay* /*none,nullable*/ gtk_icon_theme_get_display (::GtkIconTheme* self /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// char** /*full*/ gtk_icon_theme_get_icon_names (GtkIconTheme* self /*none*/);
// char** /*full*/ gtk_icon_theme_get_icon_names (::GtkIconTheme* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_icon_names () noexcept;

// int* /*full*/ gtk_icon_theme_get_icon_sizes (GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
// gint* /*full*/ gtk_icon_theme_get_icon_sizes (::GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, gint, gi::transfer_full_t> get_icon_sizes (const gi::cstring_v icon_name) noexcept;

// char** /*full,nullable*/ gtk_icon_theme_get_resource_path (GtkIconTheme* self /*none*/);
// char** /*full,nullable*/ gtk_icon_theme_get_resource_path (::GtkIconTheme* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_resource_path () noexcept;

// char** /*full,nullable*/ gtk_icon_theme_get_search_path (GtkIconTheme* self /*none*/);
// char** /*full,nullable*/ gtk_icon_theme_get_search_path (::GtkIconTheme* self /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_search_path () noexcept;

// char* /*full*/ gtk_icon_theme_get_theme_name (GtkIconTheme* self /*none*/);
// char* /*full*/ gtk_icon_theme_get_theme_name (::GtkIconTheme* self /*none*/);
GI_INLINE_DECL gi::cstring get_theme_name () noexcept;

// gboolean gtk_icon_theme_has_gicon (GtkIconTheme* self /*none*/, GIcon* gicon /*none*/);
// gboolean gtk_icon_theme_has_gicon (::GtkIconTheme* self /*none*/, ::GIcon* gicon /*none*/);
GI_INLINE_DECL bool has_gicon (Gio::Icon gicon) noexcept;

// gboolean gtk_icon_theme_has_icon (GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
// gboolean gtk_icon_theme_has_icon (::GtkIconTheme* self /*none*/, const char* icon_name /*none*/);
GI_INLINE_DECL bool has_icon (const gi::cstring_v icon_name) noexcept;

// GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_by_gicon (GtkIconTheme* self /*none*/, GIcon* icon /*none*/, int size, int scale, GtkTextDirection direction, GtkIconLookupFlags flags);
// ::GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_by_gicon (::GtkIconTheme* self /*none*/, ::GIcon* icon /*none*/, gint size, gint scale, ::GtkTextDirection direction, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconPaintable lookup_by_gicon (Gio::Icon icon, gint size, gint scale, Gtk::TextDirection direction, Gtk::IconLookupFlags flags) noexcept;

// GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_icon (GtkIconTheme* self /*none*/, const char* icon_name /*none*/, const char** fallbacks /*none,nullable*/, int size, int scale, GtkTextDirection direction, GtkIconLookupFlags flags);
// ::GtkIconPaintable* /*full*/ gtk_icon_theme_lookup_icon (::GtkIconTheme* self /*none*/, const char* icon_name /*none*/, const char** fallbacks /*none,nullable*/, gint size, gint scale, ::GtkTextDirection direction, ::GtkIconLookupFlags flags);
GI_INLINE_DECL Gtk::IconPaintable lookup_icon (const gi::cstring_v icon_name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> fallbacks, gint size, gint scale, Gtk::TextDirection direction, Gtk::IconLookupFlags flags) noexcept;

// void gtk_icon_theme_set_resource_path (GtkIconTheme* self /*none*/, const char* const* path /*none,nullable*/);
// void gtk_icon_theme_set_resource_path (::GtkIconTheme* self /*none*/, const char** path /*none,nullable*/);
GI_INLINE_DECL void set_resource_path (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> path) noexcept;

// void gtk_icon_theme_set_search_path (GtkIconTheme* self /*none*/, const char* const* path /*none,nullable*/);
// void gtk_icon_theme_set_search_path (::GtkIconTheme* self /*none*/, const char** path /*none,nullable*/);
GI_INLINE_DECL void set_search_path (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> path) noexcept;

// void gtk_icon_theme_set_theme_name (GtkIconTheme* self /*none*/, const char* theme_name /*none,nullable*/);
// void gtk_icon_theme_set_theme_name (::GtkIconTheme* self /*none*/, const char* theme_name /*none,nullable*/);
GI_INLINE_DECL void set_theme_name (const gi::cstring_v theme_name) noexcept;
GI_INLINE_DECL void set_theme_name () noexcept;

gi::property_proxy<Gdk::Display, base::IconThemeBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::IconThemeBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::IconThemeBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::IconThemeBase> (*this, "display"); }

gi::property_proxy<gi::cstring, base::IconThemeBase> property_theme_name()
{ return gi::property_proxy<gi::cstring, base::IconThemeBase> (*this, "theme-name"); }
const gi::property_proxy<gi::cstring, base::IconThemeBase> property_theme_name() const
{ return gi::property_proxy<gi::cstring, base::IconThemeBase> (*this, "theme-name"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gtk::IconTheme)> signal_changed()
{ return gi::signal_proxy<void(Gtk::IconTheme)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra_def.hpp>)
#include <gtk/icontheme_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra.hpp>)
#include <gtk/icontheme_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconTheme : public GI_GTK_ICONTHEME_BASE
{ typedef GI_GTK_ICONTHEME_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconTheme>
{ typedef Gtk::IconTheme type; }; 

} // namespace repository

} // namespace gi

#endif
