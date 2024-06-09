// AUTO-GENERATED

#ifndef _GI_GTK_TEXT_HPP_
#define _GI_GTK_TEXT_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Editable;
class EntryBuffer;

class Text;

namespace base {


#define GI_GTK_TEXT_BASE base::TextBase
class TextBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkText BaseObjectType;

TextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_get_type(); } 

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ gtk_text_new ();
// ::GtkText* /*none*/ gtk_text_new ();
static GI_INLINE_DECL Gtk::Text new_ () noexcept;

// GtkWidget* /*none*/ gtk_text_new_with_buffer (GtkEntryBuffer* buffer /*none*/);
// ::GtkText* /*none*/ gtk_text_new_with_buffer (::GtkEntryBuffer* buffer /*none*/);
static GI_INLINE_DECL Gtk::Text new_with_buffer (Gtk::EntryBuffer buffer) noexcept;

// void gtk_text_compute_cursor_extents (GtkText* self /*none*/, gsize position, graphene_rect_t* strong /*none,out,opt,ca*/, graphene_rect_t* weak /*none,out,opt,ca*/);
// void gtk_text_compute_cursor_extents (::GtkText* self /*none*/, gsize position, ::graphene_rect_t* strong /*none,out,opt,ca*/, ::graphene_rect_t* weak /*none,out,opt,ca*/);
GI_INLINE_DECL void compute_cursor_extents (gsize position, Graphene::Rect * strong, Graphene::Rect * weak) noexcept;
GI_INLINE_DECL std::tuple<Graphene::Rect, Graphene::Rect> compute_cursor_extents (gsize position) noexcept;

// gboolean gtk_text_get_activates_default (GtkText* self /*none*/);
// gboolean gtk_text_get_activates_default (::GtkText* self /*none*/);
GI_INLINE_DECL bool get_activates_default () noexcept;

// PangoAttrList* /*none,nullable*/ gtk_text_get_attributes (GtkText* self /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_text_get_attributes (::GtkText* self /*none*/);
GI_INLINE_DECL Pango::AttrList_Ref get_attributes () noexcept;

// GtkEntryBuffer* /*none*/ gtk_text_get_buffer (GtkText* self /*none*/);
// ::GtkEntryBuffer* /*none*/ gtk_text_get_buffer (::GtkText* self /*none*/);
GI_INLINE_DECL Gtk::EntryBuffer get_buffer () noexcept;

// gboolean gtk_text_get_enable_emoji_completion (GtkText* self /*none*/);
// gboolean gtk_text_get_enable_emoji_completion (::GtkText* self /*none*/);
GI_INLINE_DECL bool get_enable_emoji_completion () noexcept;

// GMenuModel* /*none,nullable*/ gtk_text_get_extra_menu (GtkText* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_text_get_extra_menu (::GtkText* self /*none*/);
GI_INLINE_DECL Gio::MenuModel get_extra_menu () noexcept;

// GtkInputHints gtk_text_get_input_hints (GtkText* self /*none*/);
// ::GtkInputHints gtk_text_get_input_hints (::GtkText* self /*none*/);
GI_INLINE_DECL Gtk::InputHints get_input_hints () noexcept;

// GtkInputPurpose gtk_text_get_input_purpose (GtkText* self /*none*/);
// ::GtkInputPurpose gtk_text_get_input_purpose (::GtkText* self /*none*/);
GI_INLINE_DECL Gtk::InputPurpose get_input_purpose () noexcept;

// gunichar gtk_text_get_invisible_char (GtkText* self /*none*/);
// gunichar gtk_text_get_invisible_char (::GtkText* self /*none*/);
GI_INLINE_DECL gunichar get_invisible_char () noexcept;

// int gtk_text_get_max_length (GtkText* self /*none*/);
// gint gtk_text_get_max_length (::GtkText* self /*none*/);
GI_INLINE_DECL gint get_max_length () noexcept;

// gboolean gtk_text_get_overwrite_mode (GtkText* self /*none*/);
// gboolean gtk_text_get_overwrite_mode (::GtkText* self /*none*/);
GI_INLINE_DECL bool get_overwrite_mode () noexcept;

// const char* /*none,nullable*/ gtk_text_get_placeholder_text (GtkText* self /*none*/);
// const char* /*none,nullable*/ gtk_text_get_placeholder_text (::GtkText* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_placeholder_text () noexcept;

// gboolean gtk_text_get_propagate_text_width (GtkText* self /*none*/);
// gboolean gtk_text_get_propagate_text_width (::GtkText* self /*none*/);
GI_INLINE_DECL bool get_propagate_text_width () noexcept;

// PangoTabArray* /*none,nullable*/ gtk_text_get_tabs (GtkText* self /*none*/);
// ::PangoTabArray* /*none,nullable*/ gtk_text_get_tabs (::GtkText* self /*none*/);
GI_INLINE_DECL Pango::TabArray_Ref get_tabs () noexcept;

// guint16 gtk_text_get_text_length (GtkText* self /*none*/);
// guint16 gtk_text_get_text_length (::GtkText* self /*none*/);
GI_INLINE_DECL guint16 get_text_length () noexcept;

// gboolean gtk_text_get_truncate_multiline (GtkText* self /*none*/);
// gboolean gtk_text_get_truncate_multiline (::GtkText* self /*none*/);
GI_INLINE_DECL bool get_truncate_multiline () noexcept;

// gboolean gtk_text_get_visibility (GtkText* self /*none*/);
// gboolean gtk_text_get_visibility (::GtkText* self /*none*/);
GI_INLINE_DECL bool get_visibility () noexcept;

// gboolean gtk_text_grab_focus_without_selecting (GtkText* self /*none*/);
// gboolean gtk_text_grab_focus_without_selecting (::GtkText* self /*none*/);
GI_INLINE_DECL bool grab_focus_without_selecting () noexcept;

// void gtk_text_set_activates_default (GtkText* self /*none*/, gboolean activates);
// void gtk_text_set_activates_default (::GtkText* self /*none*/, gboolean activates);
GI_INLINE_DECL void set_activates_default (gboolean activates) noexcept;

// void gtk_text_set_attributes (GtkText* self /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void gtk_text_set_attributes (::GtkText* self /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
GI_INLINE_DECL void set_attributes (Pango::AttrList_Ref attrs) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void gtk_text_set_buffer (GtkText* self /*none*/, GtkEntryBuffer* buffer /*none*/);
// void gtk_text_set_buffer (::GtkText* self /*none*/, ::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL void set_buffer (Gtk::EntryBuffer buffer) noexcept;

// void gtk_text_set_enable_emoji_completion (GtkText* self /*none*/, gboolean enable_emoji_completion);
// void gtk_text_set_enable_emoji_completion (::GtkText* self /*none*/, gboolean enable_emoji_completion);
GI_INLINE_DECL void set_enable_emoji_completion (gboolean enable_emoji_completion) noexcept;

// void gtk_text_set_extra_menu (GtkText* self /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_text_set_extra_menu (::GtkText* self /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_extra_menu (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_extra_menu () noexcept;

// void gtk_text_set_input_hints (GtkText* self /*none*/, GtkInputHints hints);
// void gtk_text_set_input_hints (::GtkText* self /*none*/, ::GtkInputHints hints);
GI_INLINE_DECL void set_input_hints (Gtk::InputHints hints) noexcept;

// void gtk_text_set_input_purpose (GtkText* self /*none*/, GtkInputPurpose purpose);
// void gtk_text_set_input_purpose (::GtkText* self /*none*/, ::GtkInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (Gtk::InputPurpose purpose) noexcept;

// void gtk_text_set_invisible_char (GtkText* self /*none*/, gunichar ch);
// void gtk_text_set_invisible_char (::GtkText* self /*none*/, gunichar ch);
GI_INLINE_DECL void set_invisible_char (gunichar ch) noexcept;

// void gtk_text_set_max_length (GtkText* self /*none*/, int length);
// void gtk_text_set_max_length (::GtkText* self /*none*/, gint length);
GI_INLINE_DECL void set_max_length (gint length) noexcept;

// void gtk_text_set_overwrite_mode (GtkText* self /*none*/, gboolean overwrite);
// void gtk_text_set_overwrite_mode (::GtkText* self /*none*/, gboolean overwrite);
GI_INLINE_DECL void set_overwrite_mode (gboolean overwrite) noexcept;

// void gtk_text_set_placeholder_text (GtkText* self /*none*/, const char* text /*none,nullable*/);
// void gtk_text_set_placeholder_text (::GtkText* self /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_placeholder_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_placeholder_text () noexcept;

// void gtk_text_set_propagate_text_width (GtkText* self /*none*/, gboolean propagate_text_width);
// void gtk_text_set_propagate_text_width (::GtkText* self /*none*/, gboolean propagate_text_width);
GI_INLINE_DECL void set_propagate_text_width (gboolean propagate_text_width) noexcept;

// void gtk_text_set_tabs (GtkText* self /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void gtk_text_set_tabs (::GtkText* self /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
GI_INLINE_DECL void set_tabs (Pango::TabArray_Ref tabs) noexcept;
GI_INLINE_DECL void set_tabs () noexcept;

// void gtk_text_set_truncate_multiline (GtkText* self /*none*/, gboolean truncate_multiline);
// void gtk_text_set_truncate_multiline (::GtkText* self /*none*/, gboolean truncate_multiline);
GI_INLINE_DECL void set_truncate_multiline (gboolean truncate_multiline) noexcept;

// void gtk_text_set_visibility (GtkText* self /*none*/, gboolean visible);
// void gtk_text_set_visibility (::GtkText* self /*none*/, gboolean visible);
GI_INLINE_DECL void set_visibility (gboolean visible) noexcept;

// void gtk_text_unset_invisible_char (GtkText* self /*none*/);
// void gtk_text_unset_invisible_char (::GtkText* self /*none*/);
GI_INLINE_DECL void unset_invisible_char () noexcept;

gi::property_proxy<bool, base::TextBase> property_activates_default()
{ return gi::property_proxy<bool, base::TextBase> (*this, "activates-default"); }
const gi::property_proxy<bool, base::TextBase> property_activates_default() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "activates-default"); }

gi::property_proxy<Pango::AttrList, base::TextBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::TextBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::TextBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::TextBase> (*this, "attributes"); }

gi::property_proxy<Gtk::EntryBuffer, base::TextBase> property_buffer()
{ return gi::property_proxy<Gtk::EntryBuffer, base::TextBase> (*this, "buffer"); }
const gi::property_proxy<Gtk::EntryBuffer, base::TextBase> property_buffer() const
{ return gi::property_proxy<Gtk::EntryBuffer, base::TextBase> (*this, "buffer"); }

gi::property_proxy<bool, base::TextBase> property_enable_emoji_completion()
{ return gi::property_proxy<bool, base::TextBase> (*this, "enable-emoji-completion"); }
const gi::property_proxy<bool, base::TextBase> property_enable_emoji_completion() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "enable-emoji-completion"); }

gi::property_proxy<Gio::MenuModel, base::TextBase> property_extra_menu()
{ return gi::property_proxy<Gio::MenuModel, base::TextBase> (*this, "extra-menu"); }
const gi::property_proxy<Gio::MenuModel, base::TextBase> property_extra_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::TextBase> (*this, "extra-menu"); }

gi::property_proxy<gi::cstring, base::TextBase> property_im_module()
{ return gi::property_proxy<gi::cstring, base::TextBase> (*this, "im-module"); }
const gi::property_proxy<gi::cstring, base::TextBase> property_im_module() const
{ return gi::property_proxy<gi::cstring, base::TextBase> (*this, "im-module"); }

gi::property_proxy<Gtk::InputHints, base::TextBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::TextBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::TextBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::TextBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::TextBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::TextBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::TextBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::TextBase> (*this, "input-purpose"); }

gi::property_proxy<guint, base::TextBase> property_invisible_char()
{ return gi::property_proxy<guint, base::TextBase> (*this, "invisible-char"); }
const gi::property_proxy<guint, base::TextBase> property_invisible_char() const
{ return gi::property_proxy<guint, base::TextBase> (*this, "invisible-char"); }

gi::property_proxy<bool, base::TextBase> property_invisible_char_set()
{ return gi::property_proxy<bool, base::TextBase> (*this, "invisible-char-set"); }
const gi::property_proxy<bool, base::TextBase> property_invisible_char_set() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "invisible-char-set"); }

gi::property_proxy<gint, base::TextBase> property_max_length()
{ return gi::property_proxy<gint, base::TextBase> (*this, "max-length"); }
const gi::property_proxy<gint, base::TextBase> property_max_length() const
{ return gi::property_proxy<gint, base::TextBase> (*this, "max-length"); }

gi::property_proxy<bool, base::TextBase> property_overwrite_mode()
{ return gi::property_proxy<bool, base::TextBase> (*this, "overwrite-mode"); }
const gi::property_proxy<bool, base::TextBase> property_overwrite_mode() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "overwrite-mode"); }

gi::property_proxy<gi::cstring, base::TextBase> property_placeholder_text()
{ return gi::property_proxy<gi::cstring, base::TextBase> (*this, "placeholder-text"); }
const gi::property_proxy<gi::cstring, base::TextBase> property_placeholder_text() const
{ return gi::property_proxy<gi::cstring, base::TextBase> (*this, "placeholder-text"); }

gi::property_proxy<bool, base::TextBase> property_propagate_text_width()
{ return gi::property_proxy<bool, base::TextBase> (*this, "propagate-text-width"); }
const gi::property_proxy<bool, base::TextBase> property_propagate_text_width() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "propagate-text-width"); }

gi::property_proxy<gint, base::TextBase> property_scroll_offset()
{ return gi::property_proxy<gint, base::TextBase> (*this, "scroll-offset"); }
const gi::property_proxy<gint, base::TextBase> property_scroll_offset() const
{ return gi::property_proxy<gint, base::TextBase> (*this, "scroll-offset"); }

gi::property_proxy<Pango::TabArray, base::TextBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::TextBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::TextBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::TextBase> (*this, "tabs"); }

gi::property_proxy<bool, base::TextBase> property_truncate_multiline()
{ return gi::property_proxy<bool, base::TextBase> (*this, "truncate-multiline"); }
const gi::property_proxy<bool, base::TextBase> property_truncate_multiline() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "truncate-multiline"); }

gi::property_proxy<bool, base::TextBase> property_visibility()
{ return gi::property_proxy<bool, base::TextBase> (*this, "visibility"); }
const gi::property_proxy<bool, base::TextBase> property_visibility() const
{ return gi::property_proxy<bool, base::TextBase> (*this, "visibility"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::Text)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "activate"); }

// (signal) void backspace ();
// (signal) void backspace ();
gi::signal_proxy<void(Gtk::Text)> signal_backspace()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "backspace"); }

// (signal) void copy-clipboard ();
// (signal) void copy-clipboard ();
gi::signal_proxy<void(Gtk::Text)> signal_copy_clipboard()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "copy-clipboard"); }

// (signal) void cut-clipboard ();
// (signal) void cut-clipboard ();
gi::signal_proxy<void(Gtk::Text)> signal_cut_clipboard()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "cut-clipboard"); }

// (signal) void delete-from-cursor ( type, gint count);
// (signal) void delete-from-cursor (::GtkDeleteType type, gint count);
gi::signal_proxy<void(Gtk::Text, Gtk::DeleteType type, gint count)> signal_delete_from_cursor()
{ return gi::signal_proxy<void(Gtk::Text, Gtk::DeleteType type, gint count)> (*this, "delete-from-cursor"); }

// (signal) void insert-at-cursor (gchar* string /*none*/);
// (signal) void insert-at-cursor (char* string /*none*/);
gi::signal_proxy<void(Gtk::Text, gi::cstring_v string)> signal_insert_at_cursor()
{ return gi::signal_proxy<void(Gtk::Text, gi::cstring_v string)> (*this, "insert-at-cursor"); }

// (signal) void insert-emoji ();
// (signal) void insert-emoji ();
gi::signal_proxy<void(Gtk::Text)> signal_insert_emoji()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "insert-emoji"); }

// (signal) void move-cursor ( step, gint count, gboolean extend);
// (signal) void move-cursor (::GtkMovementStep step, gint count, gboolean extend);
gi::signal_proxy<void(Gtk::Text, Gtk::MovementStep step, gint count, gboolean extend)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::Text, Gtk::MovementStep step, gint count, gboolean extend)> (*this, "move-cursor"); }

// (signal) void paste-clipboard ();
// (signal) void paste-clipboard ();
gi::signal_proxy<void(Gtk::Text)> signal_paste_clipboard()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "paste-clipboard"); }

// (signal) void preedit-changed (gchar* preedit /*none*/);
// (signal) void preedit-changed (char* preedit /*none*/);
gi::signal_proxy<void(Gtk::Text, gi::cstring_v preedit)> signal_preedit_changed()
{ return gi::signal_proxy<void(Gtk::Text, gi::cstring_v preedit)> (*this, "preedit-changed"); }

// (signal) void toggle-overwrite ();
// (signal) void toggle-overwrite ();
gi::signal_proxy<void(Gtk::Text)> signal_toggle_overwrite()
{ return gi::signal_proxy<void(Gtk::Text)> (*this, "toggle-overwrite"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/text_extra_def.hpp>)
#include <gtk/text_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/text_extra.hpp>)
#include <gtk/text_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Text : public GI_GTK_TEXT_BASE
{ typedef GI_GTK_TEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkText>
{ typedef Gtk::Text type; }; 

} // namespace repository

} // namespace gi

#endif
