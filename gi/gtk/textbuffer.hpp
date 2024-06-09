// AUTO-GENERATED

#ifndef _GI_GTK_TEXTBUFFER_HPP_
#define _GI_GTK_TEXTBUFFER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TextChildAnchor;
class TextIter;
class TextIter_Ref;
class TextMark;
class TextTag;
class TextTagTable;

class TextBuffer;

namespace base {


#define GI_GTK_TEXTBUFFER_BASE base::TextBufferBase
class TextBufferBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextBuffer BaseObjectType;

TextBufferBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_buffer_get_type(); } 

// GtkTextBuffer* /*full*/ gtk_text_buffer_new (GtkTextTagTable* table /*none,nullable*/);
// ::GtkTextBuffer* /*full*/ gtk_text_buffer_new (::GtkTextTagTable* table /*none,nullable*/);
static GI_INLINE_DECL Gtk::TextBuffer new_ (Gtk::TextTagTable table) noexcept;
static GI_INLINE_DECL Gtk::TextBuffer new_ () noexcept;

// void gtk_text_buffer_add_mark (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_add_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/, const ::GtkTextIter* where /*none*/);
GI_INLINE_DECL void add_mark (Gtk::TextMark mark, const Gtk::TextIter_Ref where) noexcept;

// void gtk_text_buffer_add_selection_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void gtk_text_buffer_add_selection_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL void add_selection_clipboard (Gdk::Clipboard clipboard) noexcept;

// void gtk_text_buffer_apply_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_apply_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void apply_tag (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept;

// void gtk_text_buffer_apply_tag_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_apply_tag_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void apply_tag_by_name (const gi::cstring_v name, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept;

// gboolean gtk_text_buffer_backspace (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_backspace (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, gboolean interactive, gboolean default_editable);
GI_INLINE_DECL bool backspace (Gtk::TextIter_Ref iter, gboolean interactive, gboolean default_editable) noexcept;

// void gtk_text_buffer_begin_irreversible_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_begin_irreversible_action (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void begin_irreversible_action () noexcept;

// void gtk_text_buffer_begin_user_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_begin_user_action (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void begin_user_action () noexcept;

// void gtk_text_buffer_copy_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void gtk_text_buffer_copy_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL void copy_clipboard (Gdk::Clipboard clipboard) noexcept;

// GtkTextChildAnchor* /*none*/ gtk_text_buffer_create_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/);
// ::GtkTextChildAnchor* /*none*/ gtk_text_buffer_create_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL Gtk::TextChildAnchor create_child_anchor (Gtk::TextIter_Ref iter) noexcept;

// GtkTextMark* /*none*/ gtk_text_buffer_create_mark (GtkTextBuffer* buffer /*none*/, const char* mark_name /*none,nullable*/, const GtkTextIter* where /*none*/, gboolean left_gravity);
// ::GtkTextMark* /*none*/ gtk_text_buffer_create_mark (::GtkTextBuffer* buffer /*none*/, const char* mark_name /*none,nullable*/, const ::GtkTextIter* where /*none*/, gboolean left_gravity);
GI_INLINE_DECL Gtk::TextMark create_mark (const gi::cstring_v mark_name, const Gtk::TextIter_Ref where, gboolean left_gravity) noexcept;
GI_INLINE_DECL Gtk::TextMark create_mark (const Gtk::TextIter_Ref where, gboolean left_gravity) noexcept;

// GtkTextTag* /*none*/ gtk_text_buffer_create_tag (GtkTextBuffer* buffer /*none*/, const char* tag_name /*none,nullable*/, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// ::GtkTextTag* /*none*/ gtk_text_buffer_create_tag (::GtkTextBuffer* buffer /*none*/, const char* tag_name /*none,nullable*/, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_cut_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/, gboolean default_editable);
// void gtk_text_buffer_cut_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/, gboolean default_editable);
GI_INLINE_DECL void cut_clipboard (Gdk::Clipboard clipboard, gboolean default_editable) noexcept;

// void gtk_text_buffer_delete (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// void gtk_text_buffer_delete (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void delete_ (Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept;

// gboolean gtk_text_buffer_delete_interactive (GtkTextBuffer* buffer /*none*/, GtkTextIter* start_iter /*none*/, GtkTextIter* end_iter /*none*/, gboolean default_editable);
// gboolean gtk_text_buffer_delete_interactive (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start_iter /*none*/, ::GtkTextIter* end_iter /*none*/, gboolean default_editable);
GI_INLINE_DECL bool delete_interactive (Gtk::TextIter_Ref start_iter, Gtk::TextIter_Ref end_iter, gboolean default_editable) noexcept;

// void gtk_text_buffer_delete_mark (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/);
// void gtk_text_buffer_delete_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/);
GI_INLINE_DECL void delete_mark (Gtk::TextMark mark) noexcept;

// void gtk_text_buffer_delete_mark_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
// void gtk_text_buffer_delete_mark_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
GI_INLINE_DECL void delete_mark_by_name (const gi::cstring_v name) noexcept;

// gboolean gtk_text_buffer_delete_selection (GtkTextBuffer* buffer /*none*/, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_delete_selection (::GtkTextBuffer* buffer /*none*/, gboolean interactive, gboolean default_editable);
GI_INLINE_DECL bool delete_selection (gboolean interactive, gboolean default_editable) noexcept;

// void gtk_text_buffer_end_irreversible_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_end_irreversible_action (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void end_irreversible_action () noexcept;

// void gtk_text_buffer_end_user_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_end_user_action (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void end_user_action () noexcept;

// void gtk_text_buffer_get_bounds (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none,out,ca*/, GtkTextIter* end /*none,out,ca*/);
// void gtk_text_buffer_get_bounds (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none,out,ca*/, ::GtkTextIter* end /*none,out,ca*/);
GI_INLINE_DECL void get_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TextIter, Gtk::TextIter> get_bounds () noexcept;

// gboolean gtk_text_buffer_get_can_redo (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_can_redo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL bool get_can_redo () noexcept;

// gboolean gtk_text_buffer_get_can_undo (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_can_undo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL bool get_can_undo () noexcept;

// int gtk_text_buffer_get_char_count (GtkTextBuffer* buffer /*none*/);
// gint gtk_text_buffer_get_char_count (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL gint get_char_count () noexcept;

// gboolean gtk_text_buffer_get_enable_undo (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_enable_undo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL bool get_enable_undo () noexcept;

// void gtk_text_buffer_get_end_iter (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/);
// void gtk_text_buffer_get_end_iter (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/);
GI_INLINE_DECL void get_end_iter (Gtk::TextIter & iter) noexcept;
GI_INLINE_DECL Gtk::TextIter get_end_iter () noexcept;

// gboolean gtk_text_buffer_get_has_selection (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_has_selection (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL bool get_has_selection () noexcept;

// GtkTextMark* /*none*/ gtk_text_buffer_get_insert (GtkTextBuffer* buffer /*none*/);
// ::GtkTextMark* /*none*/ gtk_text_buffer_get_insert (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL Gtk::TextMark get_insert () noexcept;

// void gtk_text_buffer_get_iter_at_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, GtkTextChildAnchor* anchor /*none*/);
// void gtk_text_buffer_get_iter_at_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, ::GtkTextChildAnchor* anchor /*none*/);
GI_INLINE_DECL void get_iter_at_child_anchor (Gtk::TextIter & iter, Gtk::TextChildAnchor anchor) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_child_anchor (Gtk::TextChildAnchor anchor) noexcept;

// gboolean gtk_text_buffer_get_iter_at_line (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int line_number);
// gboolean gtk_text_buffer_get_iter_at_line (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint line_number);
GI_INLINE_DECL bool get_iter_at_line (Gtk::TextIter & iter, gint line_number) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter> get_iter_at_line (gint line_number) noexcept;

// gboolean gtk_text_buffer_get_iter_at_line_index (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int line_number, int byte_index);
// gboolean gtk_text_buffer_get_iter_at_line_index (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint line_number, gint byte_index);
GI_INLINE_DECL bool get_iter_at_line_index (Gtk::TextIter & iter, gint line_number, gint byte_index) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter> get_iter_at_line_index (gint line_number, gint byte_index) noexcept;

// gboolean gtk_text_buffer_get_iter_at_line_offset (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int line_number, int char_offset);
// gboolean gtk_text_buffer_get_iter_at_line_offset (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint line_number, gint char_offset);
GI_INLINE_DECL bool get_iter_at_line_offset (Gtk::TextIter & iter, gint line_number, gint char_offset) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter> get_iter_at_line_offset (gint line_number, gint char_offset) noexcept;

// void gtk_text_buffer_get_iter_at_mark (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, GtkTextMark* mark /*none*/);
// void gtk_text_buffer_get_iter_at_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, ::GtkTextMark* mark /*none*/);
GI_INLINE_DECL void get_iter_at_mark (Gtk::TextIter & iter, Gtk::TextMark mark) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_mark (Gtk::TextMark mark) noexcept;

// void gtk_text_buffer_get_iter_at_offset (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int char_offset);
// void gtk_text_buffer_get_iter_at_offset (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint char_offset);
GI_INLINE_DECL void get_iter_at_offset (Gtk::TextIter & iter, gint char_offset) noexcept;
GI_INLINE_DECL Gtk::TextIter get_iter_at_offset (gint char_offset) noexcept;

// int gtk_text_buffer_get_line_count (GtkTextBuffer* buffer /*none*/);
// gint gtk_text_buffer_get_line_count (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL gint get_line_count () noexcept;

// GtkTextMark* /*none,nullable*/ gtk_text_buffer_get_mark (GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
// ::GtkTextMark* /*none,nullable*/ gtk_text_buffer_get_mark (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gtk::TextMark get_mark (const gi::cstring_v name) noexcept;

// guint gtk_text_buffer_get_max_undo_levels (GtkTextBuffer* buffer /*none*/);
// guint gtk_text_buffer_get_max_undo_levels (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL guint get_max_undo_levels () noexcept;

// gboolean gtk_text_buffer_get_modified (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_modified (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL bool get_modified () noexcept;

// GtkTextMark* /*none*/ gtk_text_buffer_get_selection_bound (GtkTextBuffer* buffer /*none*/);
// ::GtkTextMark* /*none*/ gtk_text_buffer_get_selection_bound (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL Gtk::TextMark get_selection_bound () noexcept;

// gboolean gtk_text_buffer_get_selection_bounds (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none,out,ca*/, GtkTextIter* end /*none,out,ca*/);
// gboolean gtk_text_buffer_get_selection_bounds (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none,out,ca*/, ::GtkTextIter* end /*none,out,ca*/);
GI_INLINE_DECL bool get_selection_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> get_selection_bounds () noexcept;

// GdkContentProvider* /*full*/ gtk_text_buffer_get_selection_content (GtkTextBuffer* buffer /*none*/);
// ::GdkContentProvider* /*full*/ gtk_text_buffer_get_selection_content (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL Gdk::ContentProvider get_selection_content () noexcept;

// char* /*full*/ gtk_text_buffer_get_slice (GtkTextBuffer* buffer /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/, gboolean include_hidden_chars);
// char* /*full*/ gtk_text_buffer_get_slice (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/, gboolean include_hidden_chars);
GI_INLINE_DECL gi::cstring get_slice (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end, gboolean include_hidden_chars) noexcept;

// void gtk_text_buffer_get_start_iter (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/);
// void gtk_text_buffer_get_start_iter (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/);
GI_INLINE_DECL void get_start_iter (Gtk::TextIter & iter) noexcept;
GI_INLINE_DECL Gtk::TextIter get_start_iter () noexcept;

// GtkTextTagTable* /*none*/ gtk_text_buffer_get_tag_table (GtkTextBuffer* buffer /*none*/);
// ::GtkTextTagTable* /*none*/ gtk_text_buffer_get_tag_table (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL Gtk::TextTagTable get_tag_table () noexcept;

// char* /*full*/ gtk_text_buffer_get_text (GtkTextBuffer* buffer /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/, gboolean include_hidden_chars);
// char* /*full*/ gtk_text_buffer_get_text (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/, gboolean include_hidden_chars);
GI_INLINE_DECL gi::cstring get_text (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end, gboolean include_hidden_chars) noexcept;

// void gtk_text_buffer_insert (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len);
// void gtk_text_buffer_insert (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len);
GI_INLINE_DECL void insert (Gtk::TextIter_Ref iter, const gi::cstring_v text, gint len) noexcept;

// void gtk_text_buffer_insert_at_cursor (GtkTextBuffer* buffer /*none*/, const char* text /*none*/, int len);
// void gtk_text_buffer_insert_at_cursor (::GtkTextBuffer* buffer /*none*/, const char* text /*none*/, gint len);
GI_INLINE_DECL void insert_at_cursor (const gi::cstring_v text, gint len) noexcept;

// void gtk_text_buffer_insert_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void gtk_text_buffer_insert_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
GI_INLINE_DECL void insert_child_anchor (Gtk::TextIter_Ref iter, Gtk::TextChildAnchor anchor) noexcept;

// gboolean gtk_text_buffer_insert_interactive (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len, gboolean default_editable);
GI_INLINE_DECL bool insert_interactive (Gtk::TextIter_Ref iter, const gi::cstring_v text, gint len, gboolean default_editable) noexcept;

// gboolean gtk_text_buffer_insert_interactive_at_cursor (GtkTextBuffer* buffer /*none*/, const char* text /*none*/, int len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive_at_cursor (::GtkTextBuffer* buffer /*none*/, const char* text /*none*/, gint len, gboolean default_editable);
GI_INLINE_DECL bool insert_interactive_at_cursor (const gi::cstring_v text, gint len, gboolean default_editable) noexcept;

// void gtk_text_buffer_insert_markup (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* markup /*none*/, int len);
// void gtk_text_buffer_insert_markup (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* markup /*none*/, gint len);
GI_INLINE_DECL void insert_markup (Gtk::TextIter_Ref iter, const gi::cstring_v markup, gint len) noexcept;

// void gtk_text_buffer_insert_paintable (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GdkPaintable* paintable /*none*/);
// void gtk_text_buffer_insert_paintable (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL void insert_paintable (Gtk::TextIter_Ref iter, Gdk::Paintable paintable) noexcept;

// void gtk_text_buffer_insert_range (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_insert_range (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void insert_range (Gtk::TextIter_Ref iter, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept;

// gboolean gtk_text_buffer_insert_range_interactive (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/, gboolean default_editable);
// gboolean gtk_text_buffer_insert_range_interactive (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/, gboolean default_editable);
GI_INLINE_DECL bool insert_range_interactive (Gtk::TextIter_Ref iter, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end, gboolean default_editable) noexcept;

// void gtk_text_buffer_insert_with_tags (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len, GtkTextTag* first_tag /*none*/,  ..._ /*none*/);
// void gtk_text_buffer_insert_with_tags (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len, ::GtkTextTag* first_tag /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_insert_with_tags_by_name (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len, const char* first_tag_name /*none*/,  ..._ /*none*/);
// void gtk_text_buffer_insert_with_tags_by_name (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len, const char* first_tag_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_move_mark (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_move_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/, const ::GtkTextIter* where /*none*/);
GI_INLINE_DECL void move_mark (Gtk::TextMark mark, const Gtk::TextIter_Ref where) noexcept;

// void gtk_text_buffer_move_mark_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_move_mark_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const ::GtkTextIter* where /*none*/);
GI_INLINE_DECL void move_mark_by_name (const gi::cstring_v name, const Gtk::TextIter_Ref where) noexcept;

// void gtk_text_buffer_paste_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/, GtkTextIter* override_location /*none,nullable*/, gboolean default_editable);
// void gtk_text_buffer_paste_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/, ::GtkTextIter* override_location /*none,nullable*/, gboolean default_editable);
GI_INLINE_DECL void paste_clipboard (Gdk::Clipboard clipboard, Gtk::TextIter_Ref override_location, gboolean default_editable) noexcept;
GI_INLINE_DECL void paste_clipboard (Gdk::Clipboard clipboard, gboolean default_editable) noexcept;

// void gtk_text_buffer_place_cursor (GtkTextBuffer* buffer /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_place_cursor (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* where /*none*/);
GI_INLINE_DECL void place_cursor (const Gtk::TextIter_Ref where) noexcept;

// void gtk_text_buffer_redo (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_redo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void redo () noexcept;

// void gtk_text_buffer_remove_all_tags (GtkTextBuffer* buffer /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_remove_all_tags (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void remove_all_tags (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept;

// void gtk_text_buffer_remove_selection_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void gtk_text_buffer_remove_selection_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL void remove_selection_clipboard (Gdk::Clipboard clipboard) noexcept;

// void gtk_text_buffer_remove_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_remove_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void remove_tag (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept;

// void gtk_text_buffer_remove_tag_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_remove_tag_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void remove_tag_by_name (const gi::cstring_v name, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept;

// void gtk_text_buffer_select_range (GtkTextBuffer* buffer /*none*/, const GtkTextIter* ins /*none*/, const GtkTextIter* bound /*none*/);
// void gtk_text_buffer_select_range (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* ins /*none*/, const ::GtkTextIter* bound /*none*/);
GI_INLINE_DECL void select_range (const Gtk::TextIter_Ref ins, const Gtk::TextIter_Ref bound) noexcept;

// void gtk_text_buffer_set_enable_undo (GtkTextBuffer* buffer /*none*/, gboolean enable_undo);
// void gtk_text_buffer_set_enable_undo (::GtkTextBuffer* buffer /*none*/, gboolean enable_undo);
GI_INLINE_DECL void set_enable_undo (gboolean enable_undo) noexcept;

// void gtk_text_buffer_set_max_undo_levels (GtkTextBuffer* buffer /*none*/, guint max_undo_levels);
// void gtk_text_buffer_set_max_undo_levels (::GtkTextBuffer* buffer /*none*/, guint max_undo_levels);
GI_INLINE_DECL void set_max_undo_levels (guint max_undo_levels) noexcept;

// void gtk_text_buffer_set_modified (GtkTextBuffer* buffer /*none*/, gboolean setting);
// void gtk_text_buffer_set_modified (::GtkTextBuffer* buffer /*none*/, gboolean setting);
GI_INLINE_DECL void set_modified (gboolean setting) noexcept;

// void gtk_text_buffer_set_text (GtkTextBuffer* buffer /*none*/, const char* text /*none*/, int len);
// void gtk_text_buffer_set_text (::GtkTextBuffer* buffer /*none*/, const char* text /*none*/, gint len);
GI_INLINE_DECL void set_text (const gi::cstring_v text, gint len) noexcept;

// void gtk_text_buffer_undo (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_undo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void undo () noexcept;

gi::property_proxy<bool, base::TextBufferBase> property_can_redo()
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "can-redo"); }
const gi::property_proxy<bool, base::TextBufferBase> property_can_redo() const
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "can-redo"); }

gi::property_proxy<bool, base::TextBufferBase> property_can_undo()
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "can-undo"); }
const gi::property_proxy<bool, base::TextBufferBase> property_can_undo() const
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "can-undo"); }

gi::property_proxy<gint, base::TextBufferBase> property_cursor_position()
{ return gi::property_proxy<gint, base::TextBufferBase> (*this, "cursor-position"); }
const gi::property_proxy<gint, base::TextBufferBase> property_cursor_position() const
{ return gi::property_proxy<gint, base::TextBufferBase> (*this, "cursor-position"); }

gi::property_proxy<bool, base::TextBufferBase> property_enable_undo()
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "enable-undo"); }
const gi::property_proxy<bool, base::TextBufferBase> property_enable_undo() const
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "enable-undo"); }

gi::property_proxy<bool, base::TextBufferBase> property_has_selection()
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "has-selection"); }
const gi::property_proxy<bool, base::TextBufferBase> property_has_selection() const
{ return gi::property_proxy<bool, base::TextBufferBase> (*this, "has-selection"); }

gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> property_tag_table()
{ return gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> (*this, "tag-table"); }
const gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> property_tag_table() const
{ return gi::property_proxy<Gtk::TextTagTable, base::TextBufferBase> (*this, "tag-table"); }

gi::property_proxy<gi::cstring, base::TextBufferBase> property_text()
{ return gi::property_proxy<gi::cstring, base::TextBufferBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::TextBufferBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::TextBufferBase> (*this, "text"); }

// (signal) void apply-tag ( tag /*none*/,  start /*none*/,  end /*none*/);
// (signal) void apply-tag (::GtkTextTag* tag /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> signal_apply_tag()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> (*this, "apply-tag"); }

// (signal) void begin-user-action ();
// (signal) void begin-user-action ();
gi::signal_proxy<void(Gtk::TextBuffer)> signal_begin_user_action()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "begin-user-action"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gtk::TextBuffer)> signal_changed()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "changed"); }

// (signal) void delete-range ( start /*none*/,  end /*none*/);
// (signal) void delete-range (::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> signal_delete_range()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> (*this, "delete-range"); }

// (signal) void end-user-action ();
// (signal) void end-user-action ();
gi::signal_proxy<void(Gtk::TextBuffer)> signal_end_user_action()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "end-user-action"); }

// (signal) void insert-child-anchor ( location /*none*/,  anchor /*none*/);
// (signal) void insert-child-anchor (::GtkTextIter* location /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, Gtk::TextChildAnchor anchor)> signal_insert_child_anchor()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, Gtk::TextChildAnchor anchor)> (*this, "insert-child-anchor"); }

// (signal) void insert-paintable ( location /*none*/,  paintable /*none*/);
// (signal) void insert-paintable (::GtkTextIter* location /*none*/, ::GdkPaintable* paintable /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, Gdk::Paintable paintable)> signal_insert_paintable()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, Gdk::Paintable paintable)> (*this, "insert-paintable"); }

// (signal) void insert-text ( location /*none*/, gchar* text /*none*/, gint len);
// (signal) void insert-text (::GtkTextIter* location /*none*/, char* text /*none*/, gint len);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, gi::cstring_v text, gint len)> signal_insert_text()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, gi::cstring_v text, gint len)> (*this, "insert-text"); }

// (signal) void mark-deleted ( mark /*none*/);
// (signal) void mark-deleted (::GtkTextMark* mark /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextMark mark)> signal_mark_deleted()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextMark mark)> (*this, "mark-deleted"); }

// (signal) void mark-set ( location /*none*/,  mark /*none*/);
// (signal) void mark-set (::GtkTextIter* location /*none*/, ::GtkTextMark* mark /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, Gtk::TextMark mark)> signal_mark_set()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextIter_Ref location, Gtk::TextMark mark)> (*this, "mark-set"); }

// (signal) void modified-changed ();
// (signal) void modified-changed ();
gi::signal_proxy<void(Gtk::TextBuffer)> signal_modified_changed()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "modified-changed"); }

// (signal) void paste-done ( clipboard /*none*/);
// (signal) void paste-done (::GdkClipboard* clipboard /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gdk::Clipboard clipboard)> signal_paste_done()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gdk::Clipboard clipboard)> (*this, "paste-done"); }

// (signal) void redo ();
// (signal) void redo ();
gi::signal_proxy<void(Gtk::TextBuffer)> signal_redo()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "redo"); }

// (signal) void remove-tag ( tag /*none*/,  start /*none*/,  end /*none*/);
// (signal) void remove-tag (::GtkTextTag* tag /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> signal_remove_tag()
{ return gi::signal_proxy<void(Gtk::TextBuffer, Gtk::TextTag tag, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> (*this, "remove-tag"); }

// (signal) void undo ();
// (signal) void undo ();
gi::signal_proxy<void(Gtk::TextBuffer)> signal_undo()
{ return gi::signal_proxy<void(Gtk::TextBuffer)> (*this, "undo"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra_def.hpp>)
#include <gtk/textbuffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra.hpp>)
#include <gtk/textbuffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextBuffer : public GI_GTK_TEXTBUFFER_BASE
{ typedef GI_GTK_TEXTBUFFER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextBuffer>
{ typedef Gtk::TextBuffer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextBufferClassDef
{
typedef TextBufferClassDef self;
public:
typedef Gtk::TextBuffer instance_type;
typedef ::GtkTextBufferClass class_type;

using GI_MEMBER_CHECK_CONFLICT(apply_tag) = self;
using GI_MEMBER_CHECK_CONFLICT(begin_user_action) = self;
using GI_MEMBER_CHECK_CONFLICT(changed) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_range) = self;
using GI_MEMBER_CHECK_CONFLICT(end_user_action) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_child_anchor) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_paintable) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_text) = self;
using GI_MEMBER_CHECK_CONFLICT(mark_deleted) = self;
using GI_MEMBER_CHECK_CONFLICT(mark_set) = self;
using GI_MEMBER_CHECK_CONFLICT(modified_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(paste_done) = self;
using GI_MEMBER_CHECK_CONFLICT(redo) = self;
using GI_MEMBER_CHECK_CONFLICT(remove_tag) = self;
using GI_MEMBER_CHECK_CONFLICT(undo) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TextBufferClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TextBuffer::apply_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void TextBuffer::apply_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
virtual void apply_tag_ (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept = 0;

// void TextBuffer::begin_user_action (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::begin_user_action (::GtkTextBuffer* buffer /*none*/);
virtual void begin_user_action_ () noexcept = 0;

// void TextBuffer::changed (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::changed (::GtkTextBuffer* buffer /*none*/);
virtual void changed_ () noexcept = 0;

// void TextBuffer::delete_range (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// void TextBuffer::delete_range (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
virtual void delete_range_ (Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept = 0;

// void TextBuffer::end_user_action (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::end_user_action (::GtkTextBuffer* buffer /*none*/);
virtual void end_user_action_ () noexcept = 0;

// void TextBuffer::insert_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void TextBuffer::insert_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
virtual void insert_child_anchor_ (Gtk::TextIter_Ref iter, Gtk::TextChildAnchor anchor) noexcept = 0;

// void TextBuffer::insert_paintable (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GdkPaintable* paintable /*none*/);
// void TextBuffer::insert_paintable (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GdkPaintable* paintable /*none*/);
virtual void insert_paintable_ (Gtk::TextIter_Ref iter, Gdk::Paintable paintable) noexcept = 0;

// void TextBuffer::insert_text (GtkTextBuffer* buffer /*none*/, GtkTextIter* pos /*none*/, const char* new_text /*none*/, int new_text_length);
// void TextBuffer::insert_text (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* pos /*none*/, const char* new_text /*none*/, gint new_text_length);
virtual void insert_text_ (Gtk::TextIter_Ref pos, const gi::cstring_v new_text, gint new_text_length) noexcept = 0;

// void TextBuffer::mark_deleted (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/);
// void TextBuffer::mark_deleted (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/);
virtual void mark_deleted_ (Gtk::TextMark mark) noexcept = 0;

// void TextBuffer::mark_set (GtkTextBuffer* buffer /*none*/, const GtkTextIter* location /*none*/, GtkTextMark* mark /*none*/);
// void TextBuffer::mark_set (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* location /*none*/, ::GtkTextMark* mark /*none*/);
virtual void mark_set_ (const Gtk::TextIter_Ref location, Gtk::TextMark mark) noexcept = 0;

// void TextBuffer::modified_changed (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::modified_changed (::GtkTextBuffer* buffer /*none*/);
virtual void modified_changed_ () noexcept = 0;

// void TextBuffer::paste_done (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void TextBuffer::paste_done (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
virtual void paste_done_ (Gdk::Clipboard clipboard) noexcept = 0;

// void TextBuffer::redo (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::redo (::GtkTextBuffer* buffer /*none*/);
virtual void redo_ () noexcept = 0;

// void TextBuffer::remove_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void TextBuffer::remove_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
virtual void remove_tag_ (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept = 0;

// void TextBuffer::undo (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::undo (::GtkTextBuffer* buffer /*none*/);
virtual void undo_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TextBufferClass: public detail::ClassTemplate<Gtk::impl::internal::TextBufferClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TextBufferClassDef;
typedef TextBufferClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextBufferClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void TextBuffer::apply_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void TextBuffer::apply_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void apply_tag_ (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept override;

// void TextBuffer::begin_user_action (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::begin_user_action (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void begin_user_action_ () noexcept override;

// void TextBuffer::changed (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::changed (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void changed_ () noexcept override;

// void TextBuffer::delete_range (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// void TextBuffer::delete_range (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void delete_range_ (Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept override;

// void TextBuffer::end_user_action (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::end_user_action (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void end_user_action_ () noexcept override;

// void TextBuffer::insert_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void TextBuffer::insert_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
GI_INLINE_DECL void insert_child_anchor_ (Gtk::TextIter_Ref iter, Gtk::TextChildAnchor anchor) noexcept override;

// void TextBuffer::insert_paintable (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GdkPaintable* paintable /*none*/);
// void TextBuffer::insert_paintable (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL void insert_paintable_ (Gtk::TextIter_Ref iter, Gdk::Paintable paintable) noexcept override;

// void TextBuffer::insert_text (GtkTextBuffer* buffer /*none*/, GtkTextIter* pos /*none*/, const char* new_text /*none*/, int new_text_length);
// void TextBuffer::insert_text (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* pos /*none*/, const char* new_text /*none*/, gint new_text_length);
GI_INLINE_DECL void insert_text_ (Gtk::TextIter_Ref pos, const gi::cstring_v new_text, gint new_text_length) noexcept override;

// void TextBuffer::mark_deleted (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/);
// void TextBuffer::mark_deleted (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/);
GI_INLINE_DECL void mark_deleted_ (Gtk::TextMark mark) noexcept override;

// void TextBuffer::mark_set (GtkTextBuffer* buffer /*none*/, const GtkTextIter* location /*none*/, GtkTextMark* mark /*none*/);
// void TextBuffer::mark_set (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* location /*none*/, ::GtkTextMark* mark /*none*/);
GI_INLINE_DECL void mark_set_ (const Gtk::TextIter_Ref location, Gtk::TextMark mark) noexcept override;

// void TextBuffer::modified_changed (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::modified_changed (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void modified_changed_ () noexcept override;

// void TextBuffer::paste_done (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void TextBuffer::paste_done (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
GI_INLINE_DECL void paste_done_ (Gdk::Clipboard clipboard) noexcept override;

// void TextBuffer::redo (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::redo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void redo_ () noexcept override;

// void TextBuffer::remove_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void TextBuffer::remove_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL void remove_tag_ (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept override;

// void TextBuffer::undo (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::undo (::GtkTextBuffer* buffer /*none*/);
GI_INLINE_DECL void undo_ () noexcept override;


};


struct TextBufferClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TextBufferClass, apply_tag)
  GI_MEMBER_DEFINE(TextBufferClass, begin_user_action)
  GI_MEMBER_DEFINE(TextBufferClass, changed)
  GI_MEMBER_DEFINE(TextBufferClass, delete_range)
  GI_MEMBER_DEFINE(TextBufferClass, end_user_action)
  GI_MEMBER_DEFINE(TextBufferClass, insert_child_anchor)
  GI_MEMBER_DEFINE(TextBufferClass, insert_paintable)
  GI_MEMBER_DEFINE(TextBufferClass, insert_text)
  GI_MEMBER_DEFINE(TextBufferClass, mark_deleted)
  GI_MEMBER_DEFINE(TextBufferClass, mark_set)
  GI_MEMBER_DEFINE(TextBufferClass, modified_changed)
  GI_MEMBER_DEFINE(TextBufferClass, paste_done)
  GI_MEMBER_DEFINE(TextBufferClass, redo)
  GI_MEMBER_DEFINE(TextBufferClass, remove_tag)
  GI_MEMBER_DEFINE(TextBufferClass, undo)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, apply_tag),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, begin_user_action),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_range),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, end_user_action),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_child_anchor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_paintable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_text),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mark_deleted),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, mark_set),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, modified_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, paste_done),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, redo),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remove_tag),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, undo)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TextBufferImpl = detail::ObjectImpl<TextBuffer, internal::TextBufferClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
