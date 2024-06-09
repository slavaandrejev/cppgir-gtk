// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAGTABLE_HPP_
#define _GI_GTK_TEXTTAGTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class TextTag;

class TextTagTable;

namespace base {


#define GI_GTK_TEXTTAGTABLE_BASE base::TextTagTableBase
class TextTagTableBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextTagTable BaseObjectType;

TextTagTableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_tag_table_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkTextTagTable* /*full*/ gtk_text_tag_table_new ();
// ::GtkTextTagTable* /*full*/ gtk_text_tag_table_new ();
static GI_INLINE_DECL Gtk::TextTagTable new_ () noexcept;

// gboolean gtk_text_tag_table_add (GtkTextTagTable* table /*none*/, GtkTextTag* tag /*none*/);
// gboolean gtk_text_tag_table_add (::GtkTextTagTable* table /*none*/, ::GtkTextTag* tag /*none*/);
GI_INLINE_DECL bool add (Gtk::TextTag tag) noexcept;

// void gtk_text_tag_table_foreach (GtkTextTagTable* table /*none*/, GtkTextTagTableForeach func /*none*/, gpointer data);
// void gtk_text_tag_table_foreach (::GtkTextTagTable* table /*none*/, Gtk::TextTagTableForeach::cfunction_type func /*none*/, void* data);
GI_INLINE_DECL void foreach (Gtk::TextTagTableForeach func) noexcept;

// int gtk_text_tag_table_get_size (GtkTextTagTable* table /*none*/);
// gint gtk_text_tag_table_get_size (::GtkTextTagTable* table /*none*/);
GI_INLINE_DECL gint get_size () noexcept;

// GtkTextTag* /*none,nullable*/ gtk_text_tag_table_lookup (GtkTextTagTable* table /*none*/, const char* name /*none*/);
// ::GtkTextTag* /*none,nullable*/ gtk_text_tag_table_lookup (::GtkTextTagTable* table /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gtk::TextTag lookup (const gi::cstring_v name) noexcept;

// void gtk_text_tag_table_remove (GtkTextTagTable* table /*none*/, GtkTextTag* tag /*none*/);
// void gtk_text_tag_table_remove (::GtkTextTagTable* table /*none*/, ::GtkTextTag* tag /*none*/);
GI_INLINE_DECL void remove (Gtk::TextTag tag) noexcept;

// (signal) void tag-added ( tag /*none*/);
// (signal) void tag-added (::GtkTextTag* tag /*none*/);
gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> signal_tag_added()
{ return gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> (*this, "tag-added"); }

// (signal) void tag-changed ( tag /*none*/, gboolean size_changed);
// (signal) void tag-changed (::GtkTextTag* tag /*none*/, gboolean size_changed);
gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag, gboolean size_changed)> signal_tag_changed()
{ return gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag, gboolean size_changed)> (*this, "tag-changed"); }

// (signal) void tag-removed ( tag /*none*/);
// (signal) void tag-removed (::GtkTextTag* tag /*none*/);
gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> signal_tag_removed()
{ return gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> (*this, "tag-removed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra_def.hpp>)
#include <gtk/texttagtable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra.hpp>)
#include <gtk/texttagtable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextTagTable : public GI_GTK_TEXTTAGTABLE_BASE
{ typedef GI_GTK_TEXTTAGTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextTagTable>
{ typedef Gtk::TextTagTable type; }; 

} // namespace repository

} // namespace gi

#endif
