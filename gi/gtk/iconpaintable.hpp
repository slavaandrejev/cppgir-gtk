// AUTO-GENERATED

#ifndef _GI_GTK_ICONPAINTABLE_HPP_
#define _GI_GTK_ICONPAINTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SymbolicPaintable;

class IconPaintable;

namespace base {


#define GI_GTK_ICONPAINTABLE_BASE base::IconPaintableBase
class IconPaintableBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIconPaintable BaseObjectType;

IconPaintableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_paintable_get_type(); } 

GI_INLINE_DECL Gdk::Paintable interface_ (gi::interface_tag<Gdk::Paintable>);

GI_INLINE_DECL operator Gdk::Paintable ();

GI_INLINE_DECL Gtk::SymbolicPaintable interface_ (gi::interface_tag<Gtk::SymbolicPaintable>);

GI_INLINE_DECL operator Gtk::SymbolicPaintable ();

// GtkIconPaintable* /*full*/ gtk_icon_paintable_new_for_file (GFile* file /*none*/, int size, int scale);
// ::GtkIconPaintable* /*full*/ gtk_icon_paintable_new_for_file (::GFile* file /*none*/, gint size, gint scale);
static GI_INLINE_DECL Gtk::IconPaintable new_for_file (Gio::File file, gint size, gint scale) noexcept;

// GFile* /*full,nullable*/ gtk_icon_paintable_get_file (GtkIconPaintable* self /*none*/);
// ::GFile* /*full,nullable*/ gtk_icon_paintable_get_file (::GtkIconPaintable* self /*none*/);
GI_INLINE_DECL Gio::File get_file () noexcept;

// const char* /*none,nullable*/ gtk_icon_paintable_get_icon_name (GtkIconPaintable* self /*none*/);
// const char* /*none,nullable*/ gtk_icon_paintable_get_icon_name (::GtkIconPaintable* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_icon_name () noexcept;

// gboolean gtk_icon_paintable_is_symbolic (GtkIconPaintable* self /*none*/);
// gboolean gtk_icon_paintable_is_symbolic (::GtkIconPaintable* self /*none*/);
GI_INLINE_DECL bool is_symbolic () noexcept;

gi::property_proxy<Gio::File, base::IconPaintableBase> property_file()
{ return gi::property_proxy<Gio::File, base::IconPaintableBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::IconPaintableBase> property_file() const
{ return gi::property_proxy<Gio::File, base::IconPaintableBase> (*this, "file"); }

gi::property_proxy<gi::cstring, base::IconPaintableBase> property_icon_name()
{ return gi::property_proxy<gi::cstring, base::IconPaintableBase> (*this, "icon-name"); }
const gi::property_proxy<gi::cstring, base::IconPaintableBase> property_icon_name() const
{ return gi::property_proxy<gi::cstring, base::IconPaintableBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::IconPaintableBase> property_is_symbolic()
{ return gi::property_proxy<bool, base::IconPaintableBase> (*this, "is-symbolic"); }
const gi::property_proxy<bool, base::IconPaintableBase> property_is_symbolic() const
{ return gi::property_proxy<bool, base::IconPaintableBase> (*this, "is-symbolic"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconpaintable_extra_def.hpp>)
#include <gtk/iconpaintable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconpaintable_extra.hpp>)
#include <gtk/iconpaintable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconPaintable : public GI_GTK_ICONPAINTABLE_BASE
{ typedef GI_GTK_ICONPAINTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconPaintable>
{ typedef Gtk::IconPaintable type; }; 

} // namespace repository

} // namespace gi

#endif
