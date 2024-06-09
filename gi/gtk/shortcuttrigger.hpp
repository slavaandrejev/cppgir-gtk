// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTTRIGGER_HPP_
#define _GI_GTK_SHORTCUTTRIGGER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class ShortcutTrigger;

namespace base {


#define GI_GTK_SHORTCUTTRIGGER_BASE base::ShortcutTriggerBase
class ShortcutTriggerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkShortcutTrigger BaseObjectType;

ShortcutTriggerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcut_trigger_get_type(); } 

// GtkShortcutTrigger* /*full,nullable*/ gtk_shortcut_trigger_parse_string (const char* string /*none*/);
// ::GtkShortcutTrigger* /*full,nullable*/ gtk_shortcut_trigger_parse_string (const char* string /*none*/);
static GI_INLINE_DECL Gtk::ShortcutTrigger parse_string (const gi::cstring_v string) noexcept;

// int gtk_shortcut_trigger_compare (gconstpointer trigger1 /*none*/, gconstpointer trigger2 /*none*/);
// gint gtk_shortcut_trigger_compare (const ::GtkShortcutTrigger* trigger1 /*none*/, const ::GtkShortcutTrigger* trigger2 /*none*/);
GI_INLINE_DECL gint compare (const Gtk::ShortcutTrigger & trigger2) const noexcept;

// gboolean gtk_shortcut_trigger_equal (gconstpointer trigger1 /*none*/, gconstpointer trigger2 /*none*/);
// gboolean gtk_shortcut_trigger_equal (const ::GtkShortcutTrigger* trigger1 /*none*/, const ::GtkShortcutTrigger* trigger2 /*none*/);
GI_INLINE_DECL bool equal (const Gtk::ShortcutTrigger & trigger2) const noexcept;

// guint gtk_shortcut_trigger_hash (gconstpointer trigger /*none*/);
// guint gtk_shortcut_trigger_hash (const ::GtkShortcutTrigger* trigger /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// void gtk_shortcut_trigger_print (GtkShortcutTrigger* self /*none*/, GString* string /*none*/);
// void gtk_shortcut_trigger_print (::GtkShortcutTrigger* self /*none*/, ::GString* string /*none*/);
GI_INLINE_DECL void print (GLib::String_Ref string) noexcept;

// gboolean gtk_shortcut_trigger_print_label (GtkShortcutTrigger* self /*none*/, GdkDisplay* display /*none*/, GString* string /*none*/);
// gboolean gtk_shortcut_trigger_print_label (::GtkShortcutTrigger* self /*none*/, ::GdkDisplay* display /*none*/, ::GString* string /*none*/);
GI_INLINE_DECL bool print_label (Gdk::Display display, GLib::String_Ref string) noexcept;

// char* /*full*/ gtk_shortcut_trigger_to_label (GtkShortcutTrigger* self /*none*/, GdkDisplay* display /*none*/);
// char* /*full*/ gtk_shortcut_trigger_to_label (::GtkShortcutTrigger* self /*none*/, ::GdkDisplay* display /*none*/);
GI_INLINE_DECL gi::cstring to_label (Gdk::Display display) noexcept;

// char* /*full*/ gtk_shortcut_trigger_to_string (GtkShortcutTrigger* self /*none*/);
// char* /*full*/ gtk_shortcut_trigger_to_string (::GtkShortcutTrigger* self /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// GdkKeyMatch gtk_shortcut_trigger_trigger (GtkShortcutTrigger* self /*none*/, GdkEvent* event /*none*/, gboolean enable_mnemonics);
// ::GdkKeyMatch gtk_shortcut_trigger_trigger (::GtkShortcutTrigger* self /*none*/,  event /*none*/, gboolean enable_mnemonics);
// SKIP; event type  not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcuttrigger_extra_def.hpp>)
#include <gtk/shortcuttrigger_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcuttrigger_extra.hpp>)
#include <gtk/shortcuttrigger_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutTrigger : public GI_GTK_SHORTCUTTRIGGER_BASE
{ typedef GI_GTK_SHORTCUTTRIGGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutTrigger>
{ typedef Gtk::ShortcutTrigger type; }; 

} // namespace repository

} // namespace gi

#endif
