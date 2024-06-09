// AUTO-GENERATED

#ifndef _GI_GTK_FILEFILTER_HPP_
#define _GI_GTK_FILEFILTER_HPP_

#include "filter.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Buildable;

class FileFilter;

namespace base {


#define GI_GTK_FILEFILTER_BASE base::FileFilterBase
class FileFilterBase : public Gtk::Filter
{
typedef Gtk::Filter super_type;
public:
typedef ::GtkFileFilter BaseObjectType;

FileFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_filter_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkFileFilter* /*full*/ gtk_file_filter_new ();
// ::GtkFileFilter* /*full*/ gtk_file_filter_new ();
static GI_INLINE_DECL Gtk::FileFilter new_ () noexcept;

// GtkFileFilter* /*full*/ gtk_file_filter_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkFileFilter* /*full*/ gtk_file_filter_new_from_gvariant (::GVariant* variant /*none*/);
static GI_INLINE_DECL Gtk::FileFilter new_from_gvariant (GLib::Variant variant) noexcept;

// void gtk_file_filter_add_mime_type (GtkFileFilter* filter /*none*/, const char* mime_type /*none*/);
// void gtk_file_filter_add_mime_type (::GtkFileFilter* filter /*none*/, const char* mime_type /*none*/);
GI_INLINE_DECL void add_mime_type (const gi::cstring_v mime_type) noexcept;

// void gtk_file_filter_add_pattern (GtkFileFilter* filter /*none*/, const char* pattern /*none*/);
// void gtk_file_filter_add_pattern (::GtkFileFilter* filter /*none*/, const char* pattern /*none*/);
GI_INLINE_DECL void add_pattern (const gi::cstring_v pattern) noexcept;

// void gtk_file_filter_add_pixbuf_formats (GtkFileFilter* filter /*none*/);
// void gtk_file_filter_add_pixbuf_formats (::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL void add_pixbuf_formats () noexcept;

// void gtk_file_filter_add_suffix (GtkFileFilter* filter /*none*/, const char* suffix /*none*/);
// void gtk_file_filter_add_suffix (::GtkFileFilter* filter /*none*/, const char* suffix /*none*/);
GI_INLINE_DECL void add_suffix (const gi::cstring_v suffix) noexcept;

// const char** /*none*/ gtk_file_filter_get_attributes (GtkFileFilter* filter /*none*/);
// const char** /*none*/ gtk_file_filter_get_attributes (::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_attributes () noexcept;

// const char* /*none,nullable*/ gtk_file_filter_get_name (GtkFileFilter* filter /*none*/);
// const char* /*none,nullable*/ gtk_file_filter_get_name (::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// void gtk_file_filter_set_name (GtkFileFilter* filter /*none*/, const char* name /*none,nullable*/);
// void gtk_file_filter_set_name (::GtkFileFilter* filter /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// GVariant* /*none*/ gtk_file_filter_to_gvariant (GtkFileFilter* filter /*none*/);
// ::GVariant* /*none*/ gtk_file_filter_to_gvariant (::GtkFileFilter* filter /*none*/);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

gi::property_proxy<gi::cstring, base::FileFilterBase> property_name()
{ return gi::property_proxy<gi::cstring, base::FileFilterBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::FileFilterBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::FileFilterBase> (*this, "name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra_def.hpp>)
#include <gtk/filefilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra.hpp>)
#include <gtk/filefilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileFilter : public GI_GTK_FILEFILTER_BASE
{ typedef GI_GTK_FILEFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileFilter>
{ typedef Gtk::FileFilter type; }; 

} // namespace repository

} // namespace gi

#endif
