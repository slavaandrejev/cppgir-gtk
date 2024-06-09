// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTACTION_HPP_
#define _GI_GTK_SHORTCUTACTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ShortcutAction;

namespace base {


#define GI_GTK_SHORTCUTACTION_BASE base::ShortcutActionBase
class ShortcutActionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkShortcutAction BaseObjectType;

ShortcutActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcut_action_get_type(); } 

// GtkShortcutAction* /*full,nullable*/ gtk_shortcut_action_parse_string (const char* string /*none*/);
// ::GtkShortcutAction* /*full,nullable*/ gtk_shortcut_action_parse_string (const char* string /*none*/);
static GI_INLINE_DECL Gtk::ShortcutAction parse_string (const gi::cstring_v string) noexcept;

// gboolean gtk_shortcut_action_activate (GtkShortcutAction* self /*none*/, GtkShortcutActionFlags flags, GtkWidget* widget /*none*/, GVariant* args /*none,nullable*/);
// gboolean gtk_shortcut_action_activate (::GtkShortcutAction* self /*none*/, ::GtkShortcutActionFlags flags, ::GtkWidget* widget /*none*/, ::GVariant* args /*none,nullable*/);
GI_INLINE_DECL bool activate (Gtk::ShortcutActionFlags flags, Gtk::Widget widget, GLib::Variant args) noexcept;
GI_INLINE_DECL bool activate (Gtk::ShortcutActionFlags flags, Gtk::Widget widget) noexcept;

// void gtk_shortcut_action_print (GtkShortcutAction* self /*none*/, GString* string /*none*/);
// void gtk_shortcut_action_print (::GtkShortcutAction* self /*none*/, ::GString* string /*none*/);
GI_INLINE_DECL void print (GLib::String_Ref string) noexcept;

// char* /*full*/ gtk_shortcut_action_to_string (GtkShortcutAction* self /*none*/);
// char* /*full*/ gtk_shortcut_action_to_string (::GtkShortcutAction* self /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutaction_extra_def.hpp>)
#include <gtk/shortcutaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutaction_extra.hpp>)
#include <gtk/shortcutaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutAction : public GI_GTK_SHORTCUTACTION_BASE
{ typedef GI_GTK_SHORTCUTACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutAction>
{ typedef Gtk::ShortcutAction type; }; 

} // namespace repository

} // namespace gi

#endif
