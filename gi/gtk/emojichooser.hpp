// AUTO-GENERATED

#ifndef _GI_GTK_EMOJICHOOSER_HPP_
#define _GI_GTK_EMOJICHOOSER_HPP_

#include "popover.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EmojiChooser;

namespace base {


#define GI_GTK_EMOJICHOOSER_BASE base::EmojiChooserBase
class EmojiChooserBase : public Gtk::Popover
{
typedef Gtk::Popover super_type;
public:
typedef ::GtkEmojiChooser BaseObjectType;

EmojiChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_emoji_chooser_get_type(); } 

// GtkWidget* /*none*/ gtk_emoji_chooser_new ();
// ::GtkEmojiChooser* /*none*/ gtk_emoji_chooser_new ();
static GI_INLINE_DECL Gtk::EmojiChooser new_ () noexcept;

// (signal) void emoji-picked (gchar* text /*none*/);
// (signal) void emoji-picked (char* text /*none*/);
gi::signal_proxy<void(Gtk::EmojiChooser, gi::cstring_v text)> signal_emoji_picked()
{ return gi::signal_proxy<void(Gtk::EmojiChooser, gi::cstring_v text)> (*this, "emoji-picked"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/emojichooser_extra_def.hpp>)
#include <gtk/emojichooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/emojichooser_extra.hpp>)
#include <gtk/emojichooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EmojiChooser : public GI_GTK_EMOJICHOOSER_BASE
{ typedef GI_GTK_EMOJICHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEmojiChooser>
{ typedef Gtk::EmojiChooser type; }; 

} // namespace repository

} // namespace gi

#endif
