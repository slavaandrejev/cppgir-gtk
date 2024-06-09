// AUTO-GENERATED

#ifndef _GI_GTK_ENTRY_HPP_
#define _GI_GTK_ENTRY_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellEditable;
class Editable;
class EntryBuffer;
class EntryCompletion;

class Entry;

namespace base {


#define GI_GTK_ENTRY_BASE base::EntryBase
class EntryBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkEntry BaseObjectType;

EntryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_get_type(); } 

GI_INLINE_DECL Gtk::CellEditable interface_ (gi::interface_tag<Gtk::CellEditable>);

GI_INLINE_DECL operator Gtk::CellEditable ();

GI_INLINE_DECL Gtk::Editable interface_ (gi::interface_tag<Gtk::Editable>);

GI_INLINE_DECL operator Gtk::Editable ();

// GtkWidget* /*none*/ gtk_entry_new ();
// ::GtkEntry* /*none*/ gtk_entry_new ();
static GI_INLINE_DECL Gtk::Entry new_ () noexcept;

// GtkWidget* /*none*/ gtk_entry_new_with_buffer (GtkEntryBuffer* buffer /*none*/);
// ::GtkEntry* /*none*/ gtk_entry_new_with_buffer (::GtkEntryBuffer* buffer /*none*/);
static GI_INLINE_DECL Gtk::Entry new_with_buffer (Gtk::EntryBuffer buffer) noexcept;

// gboolean gtk_entry_get_activates_default (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_activates_default (::GtkEntry* entry /*none*/);
GI_INLINE_DECL bool get_activates_default () noexcept;

// float gtk_entry_get_alignment (GtkEntry* entry /*none*/);
// gfloat gtk_entry_get_alignment (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gfloat get_alignment () noexcept;

// PangoAttrList* /*none,nullable*/ gtk_entry_get_attributes (GtkEntry* entry /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_entry_get_attributes (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Pango::AttrList_Ref get_attributes () noexcept;

// GtkEntryBuffer* /*none*/ gtk_entry_get_buffer (GtkEntry* entry /*none*/);
// ::GtkEntryBuffer* /*none*/ gtk_entry_get_buffer (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Gtk::EntryBuffer get_buffer () noexcept;

// GtkEntryCompletion* /*none,nullable*/ gtk_entry_get_completion (GtkEntry* entry /*none*/);
// ::GtkEntryCompletion* /*none,nullable*/ gtk_entry_get_completion (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Gtk::EntryCompletion get_completion () noexcept;

// int gtk_entry_get_current_icon_drag_source (GtkEntry* entry /*none*/);
// gint gtk_entry_get_current_icon_drag_source (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gint get_current_icon_drag_source () noexcept;

// GMenuModel* /*none,nullable*/ gtk_entry_get_extra_menu (GtkEntry* entry /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_entry_get_extra_menu (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Gio::MenuModel get_extra_menu () noexcept;

// gboolean gtk_entry_get_has_frame (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_has_frame (::GtkEntry* entry /*none*/);
GI_INLINE_DECL bool get_has_frame () noexcept;

// gboolean gtk_entry_get_icon_activatable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_activatable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL bool get_icon_activatable (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_get_icon_area (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GdkRectangle* icon_area /*none,out,ca*/);
// void gtk_entry_get_icon_area (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area /*none,out,ca*/);
GI_INLINE_DECL void get_icon_area (Gtk::EntryIconPosition icon_pos, Gdk::Rectangle & icon_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_icon_area (Gtk::EntryIconPosition icon_pos) noexcept;

// int gtk_entry_get_icon_at_pos (GtkEntry* entry /*none*/, int x, int y);
// gint gtk_entry_get_icon_at_pos (::GtkEntry* entry /*none*/, gint x, gint y);
GI_INLINE_DECL gint get_icon_at_pos (gint x, gint y) noexcept;

// GIcon* /*none,nullable*/ gtk_entry_get_icon_gicon (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// ::GIcon* /*none,nullable*/ gtk_entry_get_icon_gicon (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL Gio::Icon get_icon_gicon (Gtk::EntryIconPosition icon_pos) noexcept;

// const char* /*none,nullable*/ gtk_entry_get_icon_name (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// const char* /*none,nullable*/ gtk_entry_get_icon_name (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL gi::cstring_v get_icon_name (Gtk::EntryIconPosition icon_pos) noexcept;

// GdkPaintable* /*none,nullable*/ gtk_entry_get_icon_paintable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// ::GdkPaintable* /*none,nullable*/ gtk_entry_get_icon_paintable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL Gdk::Paintable get_icon_paintable (Gtk::EntryIconPosition icon_pos) noexcept;

// gboolean gtk_entry_get_icon_sensitive (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_sensitive (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL bool get_icon_sensitive (Gtk::EntryIconPosition icon_pos) noexcept;

// GtkImageType gtk_entry_get_icon_storage_type (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// ::GtkImageType gtk_entry_get_icon_storage_type (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL Gtk::ImageType get_icon_storage_type (Gtk::EntryIconPosition icon_pos) noexcept;

// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_markup (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_markup (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL gi::cstring get_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept;

// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_text (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_text (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
GI_INLINE_DECL gi::cstring get_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept;

// GtkInputHints gtk_entry_get_input_hints (GtkEntry* entry /*none*/);
// ::GtkInputHints gtk_entry_get_input_hints (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Gtk::InputHints get_input_hints () noexcept;

// GtkInputPurpose gtk_entry_get_input_purpose (GtkEntry* entry /*none*/);
// ::GtkInputPurpose gtk_entry_get_input_purpose (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Gtk::InputPurpose get_input_purpose () noexcept;

// gunichar gtk_entry_get_invisible_char (GtkEntry* entry /*none*/);
// gunichar gtk_entry_get_invisible_char (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gunichar get_invisible_char () noexcept;

// int gtk_entry_get_max_length (GtkEntry* entry /*none*/);
// gint gtk_entry_get_max_length (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gint get_max_length () noexcept;

// gboolean gtk_entry_get_overwrite_mode (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_overwrite_mode (::GtkEntry* entry /*none*/);
GI_INLINE_DECL bool get_overwrite_mode () noexcept;

// const char* /*none,nullable*/ gtk_entry_get_placeholder_text (GtkEntry* entry /*none*/);
// const char* /*none,nullable*/ gtk_entry_get_placeholder_text (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_placeholder_text () noexcept;

// double gtk_entry_get_progress_fraction (GtkEntry* entry /*none*/);
// gdouble gtk_entry_get_progress_fraction (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gdouble get_progress_fraction () noexcept;

// double gtk_entry_get_progress_pulse_step (GtkEntry* entry /*none*/);
// gdouble gtk_entry_get_progress_pulse_step (::GtkEntry* entry /*none*/);
GI_INLINE_DECL gdouble get_progress_pulse_step () noexcept;

// PangoTabArray* /*none,nullable*/ gtk_entry_get_tabs (GtkEntry* entry /*none*/);
// ::PangoTabArray* /*none,nullable*/ gtk_entry_get_tabs (::GtkEntry* entry /*none*/);
GI_INLINE_DECL Pango::TabArray_Ref get_tabs () noexcept;

// guint16 gtk_entry_get_text_length (GtkEntry* entry /*none*/);
// guint16 gtk_entry_get_text_length (::GtkEntry* entry /*none*/);
GI_INLINE_DECL guint16 get_text_length () noexcept;

// gboolean gtk_entry_get_visibility (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_visibility (::GtkEntry* entry /*none*/);
GI_INLINE_DECL bool get_visibility () noexcept;

// gboolean gtk_entry_grab_focus_without_selecting (GtkEntry* entry /*none*/);
// gboolean gtk_entry_grab_focus_without_selecting (::GtkEntry* entry /*none*/);
GI_INLINE_DECL bool grab_focus_without_selecting () noexcept;

// void gtk_entry_progress_pulse (GtkEntry* entry /*none*/);
// void gtk_entry_progress_pulse (::GtkEntry* entry /*none*/);
GI_INLINE_DECL void progress_pulse () noexcept;

// void gtk_entry_reset_im_context (GtkEntry* entry /*none*/);
// void gtk_entry_reset_im_context (::GtkEntry* entry /*none*/);
GI_INLINE_DECL void reset_im_context () noexcept;

// void gtk_entry_set_activates_default (GtkEntry* entry /*none*/, gboolean setting);
// void gtk_entry_set_activates_default (::GtkEntry* entry /*none*/, gboolean setting);
GI_INLINE_DECL void set_activates_default (gboolean setting) noexcept;

// void gtk_entry_set_alignment (GtkEntry* entry /*none*/, float xalign);
// void gtk_entry_set_alignment (::GtkEntry* entry /*none*/, gfloat xalign);
GI_INLINE_DECL void set_alignment (gfloat xalign) noexcept;

// void gtk_entry_set_attributes (GtkEntry* entry /*none*/, PangoAttrList* attrs /*none*/);
// void gtk_entry_set_attributes (::GtkEntry* entry /*none*/, ::PangoAttrList* attrs /*none*/);
GI_INLINE_DECL void set_attributes (Pango::AttrList_Ref attrs) noexcept;

// void gtk_entry_set_buffer (GtkEntry* entry /*none*/, GtkEntryBuffer* buffer /*none*/);
// void gtk_entry_set_buffer (::GtkEntry* entry /*none*/, ::GtkEntryBuffer* buffer /*none*/);
GI_INLINE_DECL void set_buffer (Gtk::EntryBuffer buffer) noexcept;

// void gtk_entry_set_completion (GtkEntry* entry /*none*/, GtkEntryCompletion* completion /*none,nullable*/);
// void gtk_entry_set_completion (::GtkEntry* entry /*none*/, ::GtkEntryCompletion* completion /*none,nullable*/);
GI_INLINE_DECL void set_completion (Gtk::EntryCompletion completion) noexcept;
GI_INLINE_DECL void set_completion () noexcept;

// void gtk_entry_set_extra_menu (GtkEntry* entry /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_entry_set_extra_menu (::GtkEntry* entry /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_extra_menu (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_extra_menu () noexcept;

// void gtk_entry_set_has_frame (GtkEntry* entry /*none*/, gboolean setting);
// void gtk_entry_set_has_frame (::GtkEntry* entry /*none*/, gboolean setting);
GI_INLINE_DECL void set_has_frame (gboolean setting) noexcept;

// void gtk_entry_set_icon_activatable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, gboolean activatable);
// void gtk_entry_set_icon_activatable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, gboolean activatable);
GI_INLINE_DECL void set_icon_activatable (Gtk::EntryIconPosition icon_pos, gboolean activatable) noexcept;

// void gtk_entry_set_icon_drag_source (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GdkContentProvider* provider /*none*/, GdkDragAction actions);
// void gtk_entry_set_icon_drag_source (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GdkContentProvider* provider /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void set_icon_drag_source (Gtk::EntryIconPosition icon_pos, Gdk::ContentProvider provider, Gdk::DragAction actions) noexcept;

// void gtk_entry_set_icon_from_gicon (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GIcon* icon /*none,nullable*/);
// void gtk_entry_set_icon_from_gicon (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GIcon* icon /*none,nullable*/);
GI_INLINE_DECL void set_icon_from_gicon (Gtk::EntryIconPosition icon_pos, Gio::Icon icon) noexcept;
GI_INLINE_DECL void set_icon_from_gicon (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_from_icon_name (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, const char* icon_name /*none,nullable*/);
// void gtk_entry_set_icon_from_icon_name (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos, const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_from_paintable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GdkPaintable* paintable /*none,nullable*/);
// void gtk_entry_set_icon_from_paintable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GdkPaintable* paintable /*none,nullable*/);
GI_INLINE_DECL void set_icon_from_paintable (Gtk::EntryIconPosition icon_pos, Gdk::Paintable paintable) noexcept;
GI_INLINE_DECL void set_icon_from_paintable (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_sensitive (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, gboolean sensitive);
// void gtk_entry_set_icon_sensitive (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, gboolean sensitive);
GI_INLINE_DECL void set_icon_sensitive (Gtk::EntryIconPosition icon_pos, gboolean sensitive) noexcept;

// void gtk_entry_set_icon_tooltip_markup (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
// void gtk_entry_set_icon_tooltip_markup (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
GI_INLINE_DECL void set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos, const gi::cstring_v tooltip) noexcept;
GI_INLINE_DECL void set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_icon_tooltip_text (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
// void gtk_entry_set_icon_tooltip_text (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
GI_INLINE_DECL void set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos, const gi::cstring_v tooltip) noexcept;
GI_INLINE_DECL void set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept;

// void gtk_entry_set_input_hints (GtkEntry* entry /*none*/, GtkInputHints hints);
// void gtk_entry_set_input_hints (::GtkEntry* entry /*none*/, ::GtkInputHints hints);
GI_INLINE_DECL void set_input_hints (Gtk::InputHints hints) noexcept;

// void gtk_entry_set_input_purpose (GtkEntry* entry /*none*/, GtkInputPurpose purpose);
// void gtk_entry_set_input_purpose (::GtkEntry* entry /*none*/, ::GtkInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (Gtk::InputPurpose purpose) noexcept;

// void gtk_entry_set_invisible_char (GtkEntry* entry /*none*/, gunichar ch);
// void gtk_entry_set_invisible_char (::GtkEntry* entry /*none*/, gunichar ch);
GI_INLINE_DECL void set_invisible_char (gunichar ch) noexcept;

// void gtk_entry_set_max_length (GtkEntry* entry /*none*/, int max);
// void gtk_entry_set_max_length (::GtkEntry* entry /*none*/, gint max);
GI_INLINE_DECL void set_max_length (gint max) noexcept;

// void gtk_entry_set_overwrite_mode (GtkEntry* entry /*none*/, gboolean overwrite);
// void gtk_entry_set_overwrite_mode (::GtkEntry* entry /*none*/, gboolean overwrite);
GI_INLINE_DECL void set_overwrite_mode (gboolean overwrite) noexcept;

// void gtk_entry_set_placeholder_text (GtkEntry* entry /*none*/, const char* text /*none,nullable*/);
// void gtk_entry_set_placeholder_text (::GtkEntry* entry /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_placeholder_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_placeholder_text () noexcept;

// void gtk_entry_set_progress_fraction (GtkEntry* entry /*none*/, double fraction);
// void gtk_entry_set_progress_fraction (::GtkEntry* entry /*none*/, gdouble fraction);
GI_INLINE_DECL void set_progress_fraction (gdouble fraction) noexcept;

// void gtk_entry_set_progress_pulse_step (GtkEntry* entry /*none*/, double fraction);
// void gtk_entry_set_progress_pulse_step (::GtkEntry* entry /*none*/, gdouble fraction);
GI_INLINE_DECL void set_progress_pulse_step (gdouble fraction) noexcept;

// void gtk_entry_set_tabs (GtkEntry* entry /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void gtk_entry_set_tabs (::GtkEntry* entry /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
GI_INLINE_DECL void set_tabs (Pango::TabArray_Ref tabs) noexcept;
GI_INLINE_DECL void set_tabs () noexcept;

// void gtk_entry_set_visibility (GtkEntry* entry /*none*/, gboolean visible);
// void gtk_entry_set_visibility (::GtkEntry* entry /*none*/, gboolean visible);
GI_INLINE_DECL void set_visibility (gboolean visible) noexcept;

// void gtk_entry_unset_invisible_char (GtkEntry* entry /*none*/);
// void gtk_entry_unset_invisible_char (::GtkEntry* entry /*none*/);
GI_INLINE_DECL void unset_invisible_char () noexcept;

gi::property_proxy<bool, base::EntryBase> property_activates_default()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "activates-default"); }
const gi::property_proxy<bool, base::EntryBase> property_activates_default() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "activates-default"); }

gi::property_proxy<Pango::AttrList, base::EntryBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::EntryBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::EntryBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::EntryBase> (*this, "attributes"); }

gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> property_buffer()
{ return gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> (*this, "buffer"); }
const gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> property_buffer() const
{ return gi::property_proxy<Gtk::EntryBuffer, base::EntryBase> (*this, "buffer"); }

gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> property_completion()
{ return gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> (*this, "completion"); }
const gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> property_completion() const
{ return gi::property_proxy<Gtk::EntryCompletion, base::EntryBase> (*this, "completion"); }

gi::property_proxy<bool, base::EntryBase> property_enable_emoji_completion()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "enable-emoji-completion"); }
const gi::property_proxy<bool, base::EntryBase> property_enable_emoji_completion() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "enable-emoji-completion"); }

gi::property_proxy<Gio::MenuModel, base::EntryBase> property_extra_menu()
{ return gi::property_proxy<Gio::MenuModel, base::EntryBase> (*this, "extra-menu"); }
const gi::property_proxy<Gio::MenuModel, base::EntryBase> property_extra_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::EntryBase> (*this, "extra-menu"); }

gi::property_proxy<bool, base::EntryBase> property_has_frame()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::EntryBase> property_has_frame() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "has-frame"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_im_module()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "im-module"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_im_module() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "im-module"); }

gi::property_proxy<Gtk::InputHints, base::EntryBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::EntryBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::EntryBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::EntryBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::EntryBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::EntryBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::EntryBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::EntryBase> (*this, "input-purpose"); }

gi::property_proxy<guint, base::EntryBase> property_invisible_char()
{ return gi::property_proxy<guint, base::EntryBase> (*this, "invisible-char"); }
const gi::property_proxy<guint, base::EntryBase> property_invisible_char() const
{ return gi::property_proxy<guint, base::EntryBase> (*this, "invisible-char"); }

gi::property_proxy<bool, base::EntryBase> property_invisible_char_set()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "invisible-char-set"); }
const gi::property_proxy<bool, base::EntryBase> property_invisible_char_set() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "invisible-char-set"); }

gi::property_proxy<gint, base::EntryBase> property_max_length()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "max-length"); }
const gi::property_proxy<gint, base::EntryBase> property_max_length() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "max-length"); }

gi::property_proxy<bool, base::EntryBase> property_overwrite_mode()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "overwrite-mode"); }
const gi::property_proxy<bool, base::EntryBase> property_overwrite_mode() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "overwrite-mode"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_placeholder_text()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "placeholder-text"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_placeholder_text() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "placeholder-text"); }

gi::property_proxy<bool, base::EntryBase> property_primary_icon_activatable()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-activatable"); }
const gi::property_proxy<bool, base::EntryBase> property_primary_icon_activatable() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-activatable"); }

gi::property_proxy<Gio::Icon, base::EntryBase> property_primary_icon_gicon()
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "primary-icon-gicon"); }
const gi::property_proxy<Gio::Icon, base::EntryBase> property_primary_icon_gicon() const
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "primary-icon-gicon"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_primary_icon_name()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "primary-icon-name"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_primary_icon_name() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "primary-icon-name"); }

gi::property_proxy<Gdk::Paintable, base::EntryBase> property_primary_icon_paintable()
{ return gi::property_proxy<Gdk::Paintable, base::EntryBase> (*this, "primary-icon-paintable"); }
const gi::property_proxy<Gdk::Paintable, base::EntryBase> property_primary_icon_paintable() const
{ return gi::property_proxy<Gdk::Paintable, base::EntryBase> (*this, "primary-icon-paintable"); }

gi::property_proxy<bool, base::EntryBase> property_primary_icon_sensitive()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-sensitive"); }
const gi::property_proxy<bool, base::EntryBase> property_primary_icon_sensitive() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "primary-icon-sensitive"); }

gi::property_proxy<Gtk::ImageType, base::EntryBase> property_primary_icon_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "primary-icon-storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::EntryBase> property_primary_icon_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "primary-icon-storage-type"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_primary_icon_tooltip_markup()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "primary-icon-tooltip-markup"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_primary_icon_tooltip_markup() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "primary-icon-tooltip-markup"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_primary_icon_tooltip_text()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "primary-icon-tooltip-text"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_primary_icon_tooltip_text() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "primary-icon-tooltip-text"); }

gi::property_proxy<gdouble, base::EntryBase> property_progress_fraction()
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-fraction"); }
const gi::property_proxy<gdouble, base::EntryBase> property_progress_fraction() const
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-fraction"); }

gi::property_proxy<gdouble, base::EntryBase> property_progress_pulse_step()
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-pulse-step"); }
const gi::property_proxy<gdouble, base::EntryBase> property_progress_pulse_step() const
{ return gi::property_proxy<gdouble, base::EntryBase> (*this, "progress-pulse-step"); }

gi::property_proxy<gint, base::EntryBase> property_scroll_offset()
{ return gi::property_proxy<gint, base::EntryBase> (*this, "scroll-offset"); }
const gi::property_proxy<gint, base::EntryBase> property_scroll_offset() const
{ return gi::property_proxy<gint, base::EntryBase> (*this, "scroll-offset"); }

gi::property_proxy<bool, base::EntryBase> property_secondary_icon_activatable()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-activatable"); }
const gi::property_proxy<bool, base::EntryBase> property_secondary_icon_activatable() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-activatable"); }

gi::property_proxy<Gio::Icon, base::EntryBase> property_secondary_icon_gicon()
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "secondary-icon-gicon"); }
const gi::property_proxy<Gio::Icon, base::EntryBase> property_secondary_icon_gicon() const
{ return gi::property_proxy<Gio::Icon, base::EntryBase> (*this, "secondary-icon-gicon"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_secondary_icon_name()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "secondary-icon-name"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_secondary_icon_name() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "secondary-icon-name"); }

gi::property_proxy<Gdk::Paintable, base::EntryBase> property_secondary_icon_paintable()
{ return gi::property_proxy<Gdk::Paintable, base::EntryBase> (*this, "secondary-icon-paintable"); }
const gi::property_proxy<Gdk::Paintable, base::EntryBase> property_secondary_icon_paintable() const
{ return gi::property_proxy<Gdk::Paintable, base::EntryBase> (*this, "secondary-icon-paintable"); }

gi::property_proxy<bool, base::EntryBase> property_secondary_icon_sensitive()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-sensitive"); }
const gi::property_proxy<bool, base::EntryBase> property_secondary_icon_sensitive() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "secondary-icon-sensitive"); }

gi::property_proxy<Gtk::ImageType, base::EntryBase> property_secondary_icon_storage_type()
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "secondary-icon-storage-type"); }
const gi::property_proxy<Gtk::ImageType, base::EntryBase> property_secondary_icon_storage_type() const
{ return gi::property_proxy<Gtk::ImageType, base::EntryBase> (*this, "secondary-icon-storage-type"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_secondary_icon_tooltip_markup()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "secondary-icon-tooltip-markup"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_secondary_icon_tooltip_markup() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "secondary-icon-tooltip-markup"); }

gi::property_proxy<gi::cstring, base::EntryBase> property_secondary_icon_tooltip_text()
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "secondary-icon-tooltip-text"); }
const gi::property_proxy<gi::cstring, base::EntryBase> property_secondary_icon_tooltip_text() const
{ return gi::property_proxy<gi::cstring, base::EntryBase> (*this, "secondary-icon-tooltip-text"); }

gi::property_proxy<bool, base::EntryBase> property_show_emoji_icon()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "show-emoji-icon"); }
const gi::property_proxy<bool, base::EntryBase> property_show_emoji_icon() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "show-emoji-icon"); }

gi::property_proxy<Pango::TabArray, base::EntryBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::EntryBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::EntryBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::EntryBase> (*this, "tabs"); }

gi::property_proxy<guint, base::EntryBase> property_text_length()
{ return gi::property_proxy<guint, base::EntryBase> (*this, "text-length"); }
const gi::property_proxy<guint, base::EntryBase> property_text_length() const
{ return gi::property_proxy<guint, base::EntryBase> (*this, "text-length"); }

gi::property_proxy<bool, base::EntryBase> property_truncate_multiline()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "truncate-multiline"); }
const gi::property_proxy<bool, base::EntryBase> property_truncate_multiline() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "truncate-multiline"); }

gi::property_proxy<bool, base::EntryBase> property_visibility()
{ return gi::property_proxy<bool, base::EntryBase> (*this, "visibility"); }
const gi::property_proxy<bool, base::EntryBase> property_visibility() const
{ return gi::property_proxy<bool, base::EntryBase> (*this, "visibility"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::Entry)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Entry)> (*this, "activate"); }

// (signal) void icon-press ( icon_pos);
// (signal) void icon-press (::GtkEntryIconPosition icon_pos);
gi::signal_proxy<void(Gtk::Entry, Gtk::EntryIconPosition icon_pos)> signal_icon_press()
{ return gi::signal_proxy<void(Gtk::Entry, Gtk::EntryIconPosition icon_pos)> (*this, "icon-press"); }

// (signal) void icon-release ( icon_pos);
// (signal) void icon-release (::GtkEntryIconPosition icon_pos);
gi::signal_proxy<void(Gtk::Entry, Gtk::EntryIconPosition icon_pos)> signal_icon_release()
{ return gi::signal_proxy<void(Gtk::Entry, Gtk::EntryIconPosition icon_pos)> (*this, "icon-release"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entry_extra_def.hpp>)
#include <gtk/entry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entry_extra.hpp>)
#include <gtk/entry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Entry : public GI_GTK_ENTRY_BASE
{ typedef GI_GTK_ENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntry>
{ typedef Gtk::Entry type; }; 

} // namespace repository

} // namespace gi

#include "celleditable.hpp"
#include "editable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EntryClassDef
{
typedef EntryClassDef self;
public:
typedef Gtk::Entry instance_type;
typedef ::GtkEntryClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~EntryClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Entry::activate (GtkEntry* entry /*none*/);
// void Entry::activate (::GtkEntry* entry /*none*/);
virtual void activate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class EntryClass: public detail::ClassTemplate<Gtk::impl::internal::EntryClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::EditableInterfaceClassImpl>
{
friend class internal::EntryClassDef;
typedef EntryClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EntryClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::EditableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::CellEditableIfaceClassImpl GtkCellEditableIface_type;
typedef Gtk::impl::internal::EditableInterfaceClassImpl GtkEditableInterface_type;


// void Entry::activate (GtkEntry* entry /*none*/);
// void Entry::activate (::GtkEntry* entry /*none*/);
GI_INLINE_DECL void activate_ () noexcept override;


};


struct EntryClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(EntryClass, activate)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using EntryImpl = detail::ObjectImpl<Entry, internal::EntryClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
