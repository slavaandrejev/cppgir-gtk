// AUTO-GENERATED

#ifndef _GI_GTK_TEXTITER_HPP_
#define _GI_GTK_TEXTITER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TextBuffer;
class TextChildAnchor;
class TextIter_Ref;
class TextMark;
class TextTag;

class TextIter;

namespace base {


#define GI_GTK_TEXTITER_BASE base::TextIterBase
class TextIterBase : public gi::detail::GBoxedWrapperBase<TextIterBase, ::GtkTextIter>
{
typedef gi::detail::GBoxedWrapperBase<TextIterBase, ::GtkTextIter> super_type;
public:

TextIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_text_iter_get_type(); } 

// void gtk_text_iter_assign (GtkTextIter* iter /*none*/, const GtkTextIter* other /*none*/);
// void gtk_text_iter_assign (::GtkTextIter* iter /*none*/, const ::GtkTextIter* other /*none*/);
GI_INLINE_DECL void assign (const Gtk::TextIter_Ref other) noexcept;

// gboolean gtk_text_iter_backward_char (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_char (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_char () noexcept;

// gboolean gtk_text_iter_backward_chars (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_chars (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_chars (gint count) noexcept;

// gboolean gtk_text_iter_backward_cursor_position (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_cursor_position (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_cursor_position () noexcept;

// gboolean gtk_text_iter_backward_cursor_positions (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_cursor_positions (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_backward_find_char (GtkTextIter* iter /*none*/, GtkTextCharPredicate pred /*none*/, gpointer user_data, const GtkTextIter* limit /*none,nullable*/);
// gboolean gtk_text_iter_backward_find_char (::GtkTextIter* iter /*none*/, Gtk::TextCharPredicate::cfunction_type pred /*none*/, void* user_data, const ::GtkTextIter* limit /*none,nullable*/);
GI_INLINE_DECL bool backward_find_char (Gtk::TextCharPredicate pred, const Gtk::TextIter_Ref limit) noexcept;
GI_INLINE_DECL bool backward_find_char (Gtk::TextCharPredicate pred) noexcept;

// gboolean gtk_text_iter_backward_line (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_line (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_line () noexcept;

// gboolean gtk_text_iter_backward_lines (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_lines (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_lines (gint count) noexcept;

// gboolean gtk_text_iter_backward_search (const GtkTextIter* iter /*none*/, const char* str /*none*/, GtkTextSearchFlags flags, GtkTextIter* match_start /*none,out,opt,ca*/, GtkTextIter* match_end /*none,out,opt,ca*/, const GtkTextIter* limit /*none,nullable*/);
// gboolean gtk_text_iter_backward_search (const ::GtkTextIter* iter /*none*/, const char* str /*none*/, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start /*none,out,opt,ca*/, ::GtkTextIter* match_end /*none,out,opt,ca*/, const ::GtkTextIter* limit /*none,nullable*/);
GI_INLINE_DECL bool backward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end, const Gtk::TextIter_Ref limit) const noexcept;
GI_INLINE_DECL bool backward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> backward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags, const Gtk::TextIter_Ref limit) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> backward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags) const noexcept;

// gboolean gtk_text_iter_backward_sentence_start (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_sentence_start (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_sentence_start () noexcept;

// gboolean gtk_text_iter_backward_sentence_starts (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_sentence_starts (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_sentence_starts (gint count) noexcept;

// gboolean gtk_text_iter_backward_to_tag_toggle (GtkTextIter* iter /*none*/, GtkTextTag* tag /*none,nullable*/);
// gboolean gtk_text_iter_backward_to_tag_toggle (::GtkTextIter* iter /*none*/, ::GtkTextTag* tag /*none,nullable*/);
GI_INLINE_DECL bool backward_to_tag_toggle (Gtk::TextTag tag) noexcept;
GI_INLINE_DECL bool backward_to_tag_toggle () noexcept;

// gboolean gtk_text_iter_backward_visible_cursor_position (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_visible_cursor_position (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_visible_cursor_position () noexcept;

// gboolean gtk_text_iter_backward_visible_cursor_positions (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_visible_cursor_positions (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_visible_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_backward_visible_line (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_visible_line (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_visible_line () noexcept;

// gboolean gtk_text_iter_backward_visible_lines (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_visible_lines (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_visible_lines (gint count) noexcept;

// gboolean gtk_text_iter_backward_visible_word_start (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_visible_word_start (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_visible_word_start () noexcept;

// gboolean gtk_text_iter_backward_visible_word_starts (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_visible_word_starts (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_visible_word_starts (gint count) noexcept;

// gboolean gtk_text_iter_backward_word_start (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_backward_word_start (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_word_start () noexcept;

// gboolean gtk_text_iter_backward_word_starts (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_backward_word_starts (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool backward_word_starts (gint count) noexcept;

// gboolean gtk_text_iter_can_insert (const GtkTextIter* iter /*none*/, gboolean default_editability);
// gboolean gtk_text_iter_can_insert (const ::GtkTextIter* iter /*none*/, gboolean default_editability);
GI_INLINE_DECL bool can_insert (gboolean default_editability) const noexcept;

// int gtk_text_iter_compare (const GtkTextIter* lhs /*none*/, const GtkTextIter* rhs /*none*/);
// gint gtk_text_iter_compare (const ::GtkTextIter* lhs /*none*/, const ::GtkTextIter* rhs /*none*/);
GI_INLINE_DECL gint compare (const Gtk::TextIter_Ref rhs) const noexcept;

// GtkTextIter* /*full*/ gtk_text_iter_copy (const GtkTextIter* iter /*none*/);
// ::GtkTextIter* /*full*/ gtk_text_iter_copy (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL Gtk::TextIter copy () const noexcept;

// gboolean gtk_text_iter_editable (const GtkTextIter* iter /*none*/, gboolean default_setting);
// gboolean gtk_text_iter_editable (const ::GtkTextIter* iter /*none*/, gboolean default_setting);
GI_INLINE_DECL bool editable (gboolean default_setting) const noexcept;

// gboolean gtk_text_iter_ends_line (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_ends_line (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool ends_line () const noexcept;

// gboolean gtk_text_iter_ends_sentence (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_ends_sentence (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool ends_sentence () const noexcept;

// gboolean gtk_text_iter_ends_tag (const GtkTextIter* iter /*none*/, GtkTextTag* tag /*none,nullable*/);
// gboolean gtk_text_iter_ends_tag (const ::GtkTextIter* iter /*none*/, ::GtkTextTag* tag /*none,nullable*/);
GI_INLINE_DECL bool ends_tag (Gtk::TextTag tag) const noexcept;
GI_INLINE_DECL bool ends_tag () const noexcept;

// gboolean gtk_text_iter_ends_word (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_ends_word (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool ends_word () const noexcept;

// gboolean gtk_text_iter_equal (const GtkTextIter* lhs /*none*/, const GtkTextIter* rhs /*none*/);
// gboolean gtk_text_iter_equal (const ::GtkTextIter* lhs /*none*/, const ::GtkTextIter* rhs /*none*/);
GI_INLINE_DECL bool equal (const Gtk::TextIter_Ref rhs) const noexcept;

// gboolean gtk_text_iter_forward_char (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_char (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_char () noexcept;

// gboolean gtk_text_iter_forward_chars (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_chars (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_chars (gint count) noexcept;

// gboolean gtk_text_iter_forward_cursor_position (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_cursor_position (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_cursor_position () noexcept;

// gboolean gtk_text_iter_forward_cursor_positions (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_cursor_positions (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_forward_find_char (GtkTextIter* iter /*none*/, GtkTextCharPredicate pred /*none*/, gpointer user_data, const GtkTextIter* limit /*none,nullable*/);
// gboolean gtk_text_iter_forward_find_char (::GtkTextIter* iter /*none*/, Gtk::TextCharPredicate::cfunction_type pred /*none*/, void* user_data, const ::GtkTextIter* limit /*none,nullable*/);
GI_INLINE_DECL bool forward_find_char (Gtk::TextCharPredicate pred, const Gtk::TextIter_Ref limit) noexcept;
GI_INLINE_DECL bool forward_find_char (Gtk::TextCharPredicate pred) noexcept;

// gboolean gtk_text_iter_forward_line (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_line (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_line () noexcept;

// gboolean gtk_text_iter_forward_lines (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_lines (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_lines (gint count) noexcept;

// gboolean gtk_text_iter_forward_search (const GtkTextIter* iter /*none*/, const char* str /*none*/, GtkTextSearchFlags flags, GtkTextIter* match_start /*none,out,opt,ca*/, GtkTextIter* match_end /*none,out,opt,ca*/, const GtkTextIter* limit /*none,nullable*/);
// gboolean gtk_text_iter_forward_search (const ::GtkTextIter* iter /*none*/, const char* str /*none*/, ::GtkTextSearchFlags flags, ::GtkTextIter* match_start /*none,out,opt,ca*/, ::GtkTextIter* match_end /*none,out,opt,ca*/, const ::GtkTextIter* limit /*none,nullable*/);
GI_INLINE_DECL bool forward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end, const Gtk::TextIter_Ref limit) const noexcept;
GI_INLINE_DECL bool forward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags, Gtk::TextIter * match_start, Gtk::TextIter * match_end) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> forward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags, const Gtk::TextIter_Ref limit) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, Gtk::TextIter> forward_search (const gi::cstring_v str, Gtk::TextSearchFlags flags) const noexcept;

// gboolean gtk_text_iter_forward_sentence_end (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_sentence_end (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_sentence_end () noexcept;

// gboolean gtk_text_iter_forward_sentence_ends (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_sentence_ends (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_sentence_ends (gint count) noexcept;

// void gtk_text_iter_forward_to_end (GtkTextIter* iter /*none*/);
// void gtk_text_iter_forward_to_end (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL void forward_to_end () noexcept;

// gboolean gtk_text_iter_forward_to_line_end (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_to_line_end (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_to_line_end () noexcept;

// gboolean gtk_text_iter_forward_to_tag_toggle (GtkTextIter* iter /*none*/, GtkTextTag* tag /*none,nullable*/);
// gboolean gtk_text_iter_forward_to_tag_toggle (::GtkTextIter* iter /*none*/, ::GtkTextTag* tag /*none,nullable*/);
GI_INLINE_DECL bool forward_to_tag_toggle (Gtk::TextTag tag) noexcept;
GI_INLINE_DECL bool forward_to_tag_toggle () noexcept;

// gboolean gtk_text_iter_forward_visible_cursor_position (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_visible_cursor_position (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_visible_cursor_position () noexcept;

// gboolean gtk_text_iter_forward_visible_cursor_positions (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_visible_cursor_positions (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_visible_cursor_positions (gint count) noexcept;

// gboolean gtk_text_iter_forward_visible_line (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_visible_line (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_visible_line () noexcept;

// gboolean gtk_text_iter_forward_visible_lines (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_visible_lines (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_visible_lines (gint count) noexcept;

// gboolean gtk_text_iter_forward_visible_word_end (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_visible_word_end (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_visible_word_end () noexcept;

// gboolean gtk_text_iter_forward_visible_word_ends (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_visible_word_ends (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_visible_word_ends (gint count) noexcept;

// gboolean gtk_text_iter_forward_word_end (GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_forward_word_end (::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_word_end () noexcept;

// gboolean gtk_text_iter_forward_word_ends (GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_iter_forward_word_ends (::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool forward_word_ends (gint count) noexcept;

// void gtk_text_iter_free (GtkTextIter* iter /*none*/);
// void gtk_text_iter_free (::GtkTextIter* iter /*none*/);
// IGNORE; marked ignore

// GtkTextBuffer* /*none*/ gtk_text_iter_get_buffer (const GtkTextIter* iter /*none*/);
// ::GtkTextBuffer* /*none*/ gtk_text_iter_get_buffer (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL Gtk::TextBuffer get_buffer () const noexcept;

// int gtk_text_iter_get_bytes_in_line (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_bytes_in_line (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_bytes_in_line () const noexcept;

// gunichar gtk_text_iter_get_char (const GtkTextIter* iter /*none*/);
// gunichar gtk_text_iter_get_char (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gunichar get_char () const noexcept;

// int gtk_text_iter_get_chars_in_line (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_chars_in_line (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_chars_in_line () const noexcept;

// GtkTextChildAnchor* /*none,nullable*/ gtk_text_iter_get_child_anchor (const GtkTextIter* iter /*none*/);
// ::GtkTextChildAnchor* /*none,nullable*/ gtk_text_iter_get_child_anchor (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL Gtk::TextChildAnchor get_child_anchor () const noexcept;

// PangoLanguage* /*full*/ gtk_text_iter_get_language (const GtkTextIter* iter /*none*/);
// ::PangoLanguage* /*full*/ gtk_text_iter_get_language (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL Pango::Language get_language () const noexcept;

// int gtk_text_iter_get_line (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_line (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_line () const noexcept;

// int gtk_text_iter_get_line_index (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_line_index (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_line_index () const noexcept;

// int gtk_text_iter_get_line_offset (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_line_offset (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_line_offset () const noexcept;

// GSList* /*container*/ gtk_text_iter_get_marks (const GtkTextIter* iter /*none*/);
// ::GSList* /*container*/ gtk_text_iter_get_marks (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::GtkTextMark*, gi::transfer_container_t> get_marks () const noexcept;

// int gtk_text_iter_get_offset (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_offset (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_offset () const noexcept;

// GdkPaintable* /*none,nullable*/ gtk_text_iter_get_paintable (const GtkTextIter* iter /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_text_iter_get_paintable (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL Gdk::Paintable get_paintable () const noexcept;

// char* /*full*/ gtk_text_iter_get_slice (const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// char* /*full*/ gtk_text_iter_get_slice (const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL gi::cstring get_slice (const Gtk::TextIter_Ref end) const noexcept;

// GSList* /*container*/ gtk_text_iter_get_tags (const GtkTextIter* iter /*none*/);
// ::GSList* /*container*/ gtk_text_iter_get_tags (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::GtkTextTag*, gi::transfer_container_t> get_tags () const noexcept;

// char* /*full*/ gtk_text_iter_get_text (const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// char* /*full*/ gtk_text_iter_get_text (const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL gi::cstring get_text (const Gtk::TextIter_Ref end) const noexcept;

// GSList* /*container*/ gtk_text_iter_get_toggled_tags (const GtkTextIter* iter /*none*/, gboolean toggled_on);
// ::GSList* /*container*/ gtk_text_iter_get_toggled_tags (const ::GtkTextIter* iter /*none*/, gboolean toggled_on);
GI_INLINE_DECL gi::Collection<GSList, ::GtkTextTag*, gi::transfer_container_t> get_toggled_tags (gboolean toggled_on) const noexcept;

// int gtk_text_iter_get_visible_line_index (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_visible_line_index (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_visible_line_index () const noexcept;

// int gtk_text_iter_get_visible_line_offset (const GtkTextIter* iter /*none*/);
// gint gtk_text_iter_get_visible_line_offset (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL gint get_visible_line_offset () const noexcept;

// char* /*full*/ gtk_text_iter_get_visible_slice (const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// char* /*full*/ gtk_text_iter_get_visible_slice (const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL gi::cstring get_visible_slice (const Gtk::TextIter_Ref end) const noexcept;

// char* /*full*/ gtk_text_iter_get_visible_text (const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// char* /*full*/ gtk_text_iter_get_visible_text (const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL gi::cstring get_visible_text (const Gtk::TextIter_Ref end) const noexcept;

// gboolean gtk_text_iter_has_tag (const GtkTextIter* iter /*none*/, GtkTextTag* tag /*none*/);
// gboolean gtk_text_iter_has_tag (const ::GtkTextIter* iter /*none*/, ::GtkTextTag* tag /*none*/);
GI_INLINE_DECL bool has_tag (Gtk::TextTag tag) const noexcept;

// gboolean gtk_text_iter_in_range (const GtkTextIter* iter /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// gboolean gtk_text_iter_in_range (const ::GtkTextIter* iter /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
GI_INLINE_DECL bool in_range (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) const noexcept;

// gboolean gtk_text_iter_inside_sentence (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_inside_sentence (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool inside_sentence () const noexcept;

// gboolean gtk_text_iter_inside_word (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_inside_word (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool inside_word () const noexcept;

// gboolean gtk_text_iter_is_cursor_position (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_is_cursor_position (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool is_cursor_position () const noexcept;

// gboolean gtk_text_iter_is_end (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_is_end (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool is_end () const noexcept;

// gboolean gtk_text_iter_is_start (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_is_start (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool is_start () const noexcept;

// void gtk_text_iter_order (GtkTextIter* first /*none*/, GtkTextIter* second /*none*/);
// void gtk_text_iter_order (::GtkTextIter* first /*none*/, ::GtkTextIter* second /*none*/);
GI_INLINE_DECL void order (Gtk::TextIter_Ref second) noexcept;

// void gtk_text_iter_set_line (GtkTextIter* iter /*none*/, int line_number);
// void gtk_text_iter_set_line (::GtkTextIter* iter /*none*/, gint line_number);
GI_INLINE_DECL void set_line (gint line_number) noexcept;

// void gtk_text_iter_set_line_index (GtkTextIter* iter /*none*/, int byte_on_line);
// void gtk_text_iter_set_line_index (::GtkTextIter* iter /*none*/, gint byte_on_line);
GI_INLINE_DECL void set_line_index (gint byte_on_line) noexcept;

// void gtk_text_iter_set_line_offset (GtkTextIter* iter /*none*/, int char_on_line);
// void gtk_text_iter_set_line_offset (::GtkTextIter* iter /*none*/, gint char_on_line);
GI_INLINE_DECL void set_line_offset (gint char_on_line) noexcept;

// void gtk_text_iter_set_offset (GtkTextIter* iter /*none*/, int char_offset);
// void gtk_text_iter_set_offset (::GtkTextIter* iter /*none*/, gint char_offset);
GI_INLINE_DECL void set_offset (gint char_offset) noexcept;

// void gtk_text_iter_set_visible_line_index (GtkTextIter* iter /*none*/, int byte_on_line);
// void gtk_text_iter_set_visible_line_index (::GtkTextIter* iter /*none*/, gint byte_on_line);
GI_INLINE_DECL void set_visible_line_index (gint byte_on_line) noexcept;

// void gtk_text_iter_set_visible_line_offset (GtkTextIter* iter /*none*/, int char_on_line);
// void gtk_text_iter_set_visible_line_offset (::GtkTextIter* iter /*none*/, gint char_on_line);
GI_INLINE_DECL void set_visible_line_offset (gint char_on_line) noexcept;

// gboolean gtk_text_iter_starts_line (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_starts_line (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool starts_line () const noexcept;

// gboolean gtk_text_iter_starts_sentence (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_starts_sentence (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool starts_sentence () const noexcept;

// gboolean gtk_text_iter_starts_tag (const GtkTextIter* iter /*none*/, GtkTextTag* tag /*none,nullable*/);
// gboolean gtk_text_iter_starts_tag (const ::GtkTextIter* iter /*none*/, ::GtkTextTag* tag /*none,nullable*/);
GI_INLINE_DECL bool starts_tag (Gtk::TextTag tag) const noexcept;
GI_INLINE_DECL bool starts_tag () const noexcept;

// gboolean gtk_text_iter_starts_word (const GtkTextIter* iter /*none*/);
// gboolean gtk_text_iter_starts_word (const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool starts_word () const noexcept;

// gboolean gtk_text_iter_toggles_tag (const GtkTextIter* iter /*none*/, GtkTextTag* tag /*none,nullable*/);
// gboolean gtk_text_iter_toggles_tag (const ::GtkTextIter* iter /*none*/, ::GtkTextTag* tag /*none,nullable*/);
GI_INLINE_DECL bool toggles_tag (Gtk::TextTag tag) const noexcept;
GI_INLINE_DECL bool toggles_tag () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textiter_extra_def.hpp>)
#include <gtk/textiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textiter_extra.hpp>)
#include <gtk/textiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextIter_Ref;

class TextIter : public gi::detail::GBoxedWrapper<TextIter, ::GtkTextIter, GI_GTK_TEXTITER_BASE, TextIter_Ref>
{ typedef gi::detail::GBoxedWrapper<TextIter, ::GtkTextIter, GI_GTK_TEXTITER_BASE, TextIter_Ref> super_type; using super_type::super_type; };


class TextIter_Ref : public gi::detail::GBoxedRefWrapper<TextIter, ::GtkTextIter, GI_GTK_TEXTITER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TextIter, ::GtkTextIter, GI_GTK_TEXTITER_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextIter>
{ typedef Gtk::TextIter type; }; 

} // namespace repository

} // namespace gi

#endif
