// AUTO-GENERATED

#ifndef _GI_GTK_TEXTVIEW_HPP_
#define _GI_GTK_TEXTVIEW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Scrollable;
class TextBuffer;
class TextChildAnchor;
class TextIter;
class TextIter_Ref;
class TextMark;
class Widget;

class TextView;

namespace base {


#define GI_GTK_TEXTVIEW_BASE base::TextViewBase
class TextViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkTextView BaseObjectType;

TextViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_view_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* /*none*/ gtk_text_view_new ();
// ::GtkTextView* /*none*/ gtk_text_view_new ();
static GI_INLINE_DECL Gtk::TextView new_ () noexcept;

// GtkWidget* /*none*/ gtk_text_view_new_with_buffer (GtkTextBuffer* buffer /*none*/);
// ::GtkTextView* /*none*/ gtk_text_view_new_with_buffer (::GtkTextBuffer* buffer /*none*/);
static GI_INLINE_DECL Gtk::TextView new_with_buffer (Gtk::TextBuffer buffer) noexcept;

// void gtk_text_view_add_child_at_anchor (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void gtk_text_view_add_child_at_anchor (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
GI_INLINE_DECL void add_child_at_anchor (Gtk::Widget child, Gtk::TextChildAnchor anchor) noexcept;

// void gtk_text_view_add_overlay (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/, int xpos, int ypos);
// void gtk_text_view_add_overlay (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/, gint xpos, gint ypos);
GI_INLINE_DECL void add_overlay (Gtk::Widget child, gint xpos, gint ypos) noexcept;

// gboolean gtk_text_view_backward_display_line (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_backward_display_line (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_display_line (Gtk::TextIter_Ref iter) noexcept;

// gboolean gtk_text_view_backward_display_line_start (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_backward_display_line_start (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool backward_display_line_start (Gtk::TextIter_Ref iter) noexcept;

// void gtk_text_view_buffer_to_window_coords (GtkTextView* text_view /*none*/, GtkTextWindowType win, int buffer_x, int buffer_y, int* window_x, int* window_y);
// void gtk_text_view_buffer_to_window_coords (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y);
GI_INLINE_DECL void buffer_to_window_coords (Gtk::TextWindowType win, gint buffer_x, gint buffer_y, gint * window_x, gint * window_y) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> buffer_to_window_coords (Gtk::TextWindowType win, gint buffer_x, gint buffer_y) noexcept;

// gboolean gtk_text_view_forward_display_line (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_forward_display_line (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_display_line (Gtk::TextIter_Ref iter) noexcept;

// gboolean gtk_text_view_forward_display_line_end (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_forward_display_line_end (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool forward_display_line_end (Gtk::TextIter_Ref iter) noexcept;

// gboolean gtk_text_view_get_accepts_tab (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_accepts_tab (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL bool get_accepts_tab () noexcept;

// int gtk_text_view_get_bottom_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_bottom_margin (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_bottom_margin () noexcept;

// GtkTextBuffer* /*none*/ gtk_text_view_get_buffer (GtkTextView* text_view /*none*/);
// ::GtkTextBuffer* /*none*/ gtk_text_view_get_buffer (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Gtk::TextBuffer get_buffer () noexcept;

// void gtk_text_view_get_cursor_locations (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none,nullable*/, GdkRectangle* strong /*none,out,opt,ca*/, GdkRectangle* weak /*none,out,opt,ca*/);
// void gtk_text_view_get_cursor_locations (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none,nullable*/, ::GdkRectangle* strong /*none,out,opt,ca*/, ::GdkRectangle* weak /*none,out,opt,ca*/);
GI_INLINE_DECL void get_cursor_locations (const Gtk::TextIter_Ref iter, Gdk::Rectangle * strong, Gdk::Rectangle * weak) noexcept;
GI_INLINE_DECL void get_cursor_locations (Gdk::Rectangle * strong, Gdk::Rectangle * weak) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Rectangle, Gdk::Rectangle> get_cursor_locations (const Gtk::TextIter_Ref iter) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Rectangle, Gdk::Rectangle> get_cursor_locations () noexcept;

// gboolean gtk_text_view_get_cursor_visible (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_cursor_visible (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL bool get_cursor_visible () noexcept;

// gboolean gtk_text_view_get_editable (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_editable (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL bool get_editable () noexcept;

// GMenuModel* /*none*/ gtk_text_view_get_extra_menu (GtkTextView* text_view /*none*/);
// ::GMenuModel* /*none*/ gtk_text_view_get_extra_menu (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Gio::MenuModel get_extra_menu () noexcept;

// GtkWidget* /*none,nullable*/ gtk_text_view_get_gutter (GtkTextView* text_view /*none*/, GtkTextWindowType win);
// ::GtkWidget* /*none,nullable*/ gtk_text_view_get_gutter (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win);
GI_INLINE_DECL Gtk::Widget get_gutter (Gtk::TextWindowType win) noexcept;

// int gtk_text_view_get_indent (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_indent (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_indent () noexcept;

// GtkInputHints gtk_text_view_get_input_hints (GtkTextView* text_view /*none*/);
// ::GtkInputHints gtk_text_view_get_input_hints (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Gtk::InputHints get_input_hints () noexcept;

// GtkInputPurpose gtk_text_view_get_input_purpose (GtkTextView* text_view /*none*/);
// ::GtkInputPurpose gtk_text_view_get_input_purpose (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Gtk::InputPurpose get_input_purpose () noexcept;

// gboolean gtk_text_view_get_iter_at_location (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none,out,ca*/, int x, int y);
// gboolean gtk_text_view_get_iter_at_location (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint x, gint y);
GI_INLINE_DECL bool get_iter_at_location (Gtk::TextIter & iter, gint x, gint y) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter> get_iter_at_location (gint x, gint y) noexcept;

// gboolean gtk_text_view_get_iter_at_position (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none,out,ca*/, int* trailing, int x, int y);
// gboolean gtk_text_view_get_iter_at_position (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint* trailing, gint x, gint y);
GI_INLINE_DECL bool get_iter_at_position (Gtk::TextIter & iter, gint * trailing, gint x, gint y) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TextIter, gint> get_iter_at_position (gint x, gint y) noexcept;

// void gtk_text_view_get_iter_location (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none*/, GdkRectangle* location /*none,out,ca*/);
// void gtk_text_view_get_iter_location (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none*/, ::GdkRectangle* location /*none,out,ca*/);
GI_INLINE_DECL void get_iter_location (const Gtk::TextIter_Ref iter, Gdk::Rectangle & location) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_iter_location (const Gtk::TextIter_Ref iter) noexcept;

// GtkJustification gtk_text_view_get_justification (GtkTextView* text_view /*none*/);
// ::GtkJustification gtk_text_view_get_justification (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Gtk::Justification get_justification () noexcept;

// int gtk_text_view_get_left_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_left_margin (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_left_margin () noexcept;

// void gtk_text_view_get_line_at_y (GtkTextView* text_view /*none*/, GtkTextIter* target_iter /*none,out,ca*/, int y, int* line_top);
// void gtk_text_view_get_line_at_y (::GtkTextView* text_view /*none*/, ::GtkTextIter* target_iter /*none,out,ca*/, gint y, gint* line_top);
GI_INLINE_DECL void get_line_at_y (Gtk::TextIter & target_iter, gint y, gint & line_top) noexcept;
GI_INLINE_DECL std::tuple<Gtk::TextIter, gint> get_line_at_y (gint y) noexcept;

// void gtk_text_view_get_line_yrange (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none*/, int* y, int* height);
// void gtk_text_view_get_line_yrange (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none*/, gint* y, gint* height);
GI_INLINE_DECL void get_line_yrange (const Gtk::TextIter_Ref iter, gint & y, gint & height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_line_yrange (const Gtk::TextIter_Ref iter) noexcept;

// PangoContext* /*none*/ gtk_text_view_get_ltr_context (GtkTextView* text_view /*none*/);
// ::PangoContext* /*none*/ gtk_text_view_get_ltr_context (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Pango::Context get_ltr_context () noexcept;

// gboolean gtk_text_view_get_monospace (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_monospace (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL bool get_monospace () noexcept;

// gboolean gtk_text_view_get_overwrite (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_overwrite (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL bool get_overwrite () noexcept;

// int gtk_text_view_get_pixels_above_lines (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_pixels_above_lines (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_pixels_above_lines () noexcept;

// int gtk_text_view_get_pixels_below_lines (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_pixels_below_lines (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_pixels_below_lines () noexcept;

// int gtk_text_view_get_pixels_inside_wrap (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_pixels_inside_wrap (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_pixels_inside_wrap () noexcept;

// int gtk_text_view_get_right_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_right_margin (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_right_margin () noexcept;

// PangoContext* /*none*/ gtk_text_view_get_rtl_context (GtkTextView* text_view /*none*/);
// ::PangoContext* /*none*/ gtk_text_view_get_rtl_context (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Pango::Context get_rtl_context () noexcept;

// PangoTabArray* /*full,nullable*/ gtk_text_view_get_tabs (GtkTextView* text_view /*none*/);
// ::PangoTabArray* /*full,nullable*/ gtk_text_view_get_tabs (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Pango::TabArray get_tabs () noexcept;

// int gtk_text_view_get_top_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_top_margin (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL gint get_top_margin () noexcept;

// void gtk_text_view_get_visible_rect (GtkTextView* text_view /*none*/, GdkRectangle* visible_rect /*none,out,ca*/);
// void gtk_text_view_get_visible_rect (::GtkTextView* text_view /*none*/, ::GdkRectangle* visible_rect /*none,out,ca*/);
GI_INLINE_DECL void get_visible_rect (Gdk::Rectangle & visible_rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_visible_rect () noexcept;

// GtkWrapMode gtk_text_view_get_wrap_mode (GtkTextView* text_view /*none*/);
// ::GtkWrapMode gtk_text_view_get_wrap_mode (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL Gtk::WrapMode get_wrap_mode () noexcept;

// gboolean gtk_text_view_im_context_filter_keypress (GtkTextView* text_view /*none*/, GdkEvent* event /*none*/);
// gboolean gtk_text_view_im_context_filter_keypress (::GtkTextView* text_view /*none*/,  event /*none*/);
// SKIP; event type  not supported

// gboolean gtk_text_view_move_mark_onscreen (GtkTextView* text_view /*none*/, GtkTextMark* mark /*none*/);
// gboolean gtk_text_view_move_mark_onscreen (::GtkTextView* text_view /*none*/, ::GtkTextMark* mark /*none*/);
GI_INLINE_DECL bool move_mark_onscreen (Gtk::TextMark mark) noexcept;

// void gtk_text_view_move_overlay (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/, int xpos, int ypos);
// void gtk_text_view_move_overlay (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/, gint xpos, gint ypos);
GI_INLINE_DECL void move_overlay (Gtk::Widget child, gint xpos, gint ypos) noexcept;

// gboolean gtk_text_view_move_visually (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_view_move_visually (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/, gint count);
GI_INLINE_DECL bool move_visually (Gtk::TextIter_Ref iter, gint count) noexcept;

// gboolean gtk_text_view_place_cursor_onscreen (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_place_cursor_onscreen (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL bool place_cursor_onscreen () noexcept;

// void gtk_text_view_remove (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/);
// void gtk_text_view_remove (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void gtk_text_view_reset_cursor_blink (GtkTextView* text_view /*none*/);
// void gtk_text_view_reset_cursor_blink (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void reset_cursor_blink () noexcept;

// void gtk_text_view_reset_im_context (GtkTextView* text_view /*none*/);
// void gtk_text_view_reset_im_context (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void reset_im_context () noexcept;

// void gtk_text_view_scroll_mark_onscreen (GtkTextView* text_view /*none*/, GtkTextMark* mark /*none*/);
// void gtk_text_view_scroll_mark_onscreen (::GtkTextView* text_view /*none*/, ::GtkTextMark* mark /*none*/);
GI_INLINE_DECL void scroll_mark_onscreen (Gtk::TextMark mark) noexcept;

// gboolean gtk_text_view_scroll_to_iter (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/, double within_margin, gboolean use_align, double xalign, double yalign);
// gboolean gtk_text_view_scroll_to_iter (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
GI_INLINE_DECL bool scroll_to_iter (Gtk::TextIter_Ref iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign) noexcept;

// void gtk_text_view_scroll_to_mark (GtkTextView* text_view /*none*/, GtkTextMark* mark /*none*/, double within_margin, gboolean use_align, double xalign, double yalign);
// void gtk_text_view_scroll_to_mark (::GtkTextView* text_view /*none*/, ::GtkTextMark* mark /*none*/, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
GI_INLINE_DECL void scroll_to_mark (Gtk::TextMark mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign) noexcept;

// void gtk_text_view_set_accepts_tab (GtkTextView* text_view /*none*/, gboolean accepts_tab);
// void gtk_text_view_set_accepts_tab (::GtkTextView* text_view /*none*/, gboolean accepts_tab);
GI_INLINE_DECL void set_accepts_tab (gboolean accepts_tab) noexcept;

// void gtk_text_view_set_bottom_margin (GtkTextView* text_view /*none*/, int bottom_margin);
// void gtk_text_view_set_bottom_margin (::GtkTextView* text_view /*none*/, gint bottom_margin);
GI_INLINE_DECL void set_bottom_margin (gint bottom_margin) noexcept;

// void gtk_text_view_set_buffer (GtkTextView* text_view /*none*/, GtkTextBuffer* buffer /*none,nullable*/);
// void gtk_text_view_set_buffer (::GtkTextView* text_view /*none*/, ::GtkTextBuffer* buffer /*none,nullable*/);
GI_INLINE_DECL void set_buffer (Gtk::TextBuffer buffer) noexcept;
GI_INLINE_DECL void set_buffer () noexcept;

// void gtk_text_view_set_cursor_visible (GtkTextView* text_view /*none*/, gboolean setting);
// void gtk_text_view_set_cursor_visible (::GtkTextView* text_view /*none*/, gboolean setting);
GI_INLINE_DECL void set_cursor_visible (gboolean setting) noexcept;

// void gtk_text_view_set_editable (GtkTextView* text_view /*none*/, gboolean setting);
// void gtk_text_view_set_editable (::GtkTextView* text_view /*none*/, gboolean setting);
GI_INLINE_DECL void set_editable (gboolean setting) noexcept;

// void gtk_text_view_set_extra_menu (GtkTextView* text_view /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_text_view_set_extra_menu (::GtkTextView* text_view /*none*/, ::GMenuModel* model /*none,nullable*/);
GI_INLINE_DECL void set_extra_menu (Gio::MenuModel model) noexcept;
GI_INLINE_DECL void set_extra_menu () noexcept;

// void gtk_text_view_set_gutter (GtkTextView* text_view /*none*/, GtkTextWindowType win, GtkWidget* widget /*none,nullable*/);
// void gtk_text_view_set_gutter (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_gutter (Gtk::TextWindowType win, Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_gutter (Gtk::TextWindowType win) noexcept;

// void gtk_text_view_set_indent (GtkTextView* text_view /*none*/, int indent);
// void gtk_text_view_set_indent (::GtkTextView* text_view /*none*/, gint indent);
GI_INLINE_DECL void set_indent (gint indent) noexcept;

// void gtk_text_view_set_input_hints (GtkTextView* text_view /*none*/, GtkInputHints hints);
// void gtk_text_view_set_input_hints (::GtkTextView* text_view /*none*/, ::GtkInputHints hints);
GI_INLINE_DECL void set_input_hints (Gtk::InputHints hints) noexcept;

// void gtk_text_view_set_input_purpose (GtkTextView* text_view /*none*/, GtkInputPurpose purpose);
// void gtk_text_view_set_input_purpose (::GtkTextView* text_view /*none*/, ::GtkInputPurpose purpose);
GI_INLINE_DECL void set_input_purpose (Gtk::InputPurpose purpose) noexcept;

// void gtk_text_view_set_justification (GtkTextView* text_view /*none*/, GtkJustification justification);
// void gtk_text_view_set_justification (::GtkTextView* text_view /*none*/, ::GtkJustification justification);
GI_INLINE_DECL void set_justification (Gtk::Justification justification) noexcept;

// void gtk_text_view_set_left_margin (GtkTextView* text_view /*none*/, int left_margin);
// void gtk_text_view_set_left_margin (::GtkTextView* text_view /*none*/, gint left_margin);
GI_INLINE_DECL void set_left_margin (gint left_margin) noexcept;

// void gtk_text_view_set_monospace (GtkTextView* text_view /*none*/, gboolean monospace);
// void gtk_text_view_set_monospace (::GtkTextView* text_view /*none*/, gboolean monospace);
GI_INLINE_DECL void set_monospace (gboolean monospace) noexcept;

// void gtk_text_view_set_overwrite (GtkTextView* text_view /*none*/, gboolean overwrite);
// void gtk_text_view_set_overwrite (::GtkTextView* text_view /*none*/, gboolean overwrite);
GI_INLINE_DECL void set_overwrite (gboolean overwrite) noexcept;

// void gtk_text_view_set_pixels_above_lines (GtkTextView* text_view /*none*/, int pixels_above_lines);
// void gtk_text_view_set_pixels_above_lines (::GtkTextView* text_view /*none*/, gint pixels_above_lines);
GI_INLINE_DECL void set_pixels_above_lines (gint pixels_above_lines) noexcept;

// void gtk_text_view_set_pixels_below_lines (GtkTextView* text_view /*none*/, int pixels_below_lines);
// void gtk_text_view_set_pixels_below_lines (::GtkTextView* text_view /*none*/, gint pixels_below_lines);
GI_INLINE_DECL void set_pixels_below_lines (gint pixels_below_lines) noexcept;

// void gtk_text_view_set_pixels_inside_wrap (GtkTextView* text_view /*none*/, int pixels_inside_wrap);
// void gtk_text_view_set_pixels_inside_wrap (::GtkTextView* text_view /*none*/, gint pixels_inside_wrap);
GI_INLINE_DECL void set_pixels_inside_wrap (gint pixels_inside_wrap) noexcept;

// void gtk_text_view_set_right_margin (GtkTextView* text_view /*none*/, int right_margin);
// void gtk_text_view_set_right_margin (::GtkTextView* text_view /*none*/, gint right_margin);
GI_INLINE_DECL void set_right_margin (gint right_margin) noexcept;

// void gtk_text_view_set_tabs (GtkTextView* text_view /*none*/, PangoTabArray* tabs /*none*/);
// void gtk_text_view_set_tabs (::GtkTextView* text_view /*none*/, ::PangoTabArray* tabs /*none*/);
GI_INLINE_DECL void set_tabs (Pango::TabArray_Ref tabs) noexcept;

// void gtk_text_view_set_top_margin (GtkTextView* text_view /*none*/, int top_margin);
// void gtk_text_view_set_top_margin (::GtkTextView* text_view /*none*/, gint top_margin);
GI_INLINE_DECL void set_top_margin (gint top_margin) noexcept;

// void gtk_text_view_set_wrap_mode (GtkTextView* text_view /*none*/, GtkWrapMode wrap_mode);
// void gtk_text_view_set_wrap_mode (::GtkTextView* text_view /*none*/, ::GtkWrapMode wrap_mode);
GI_INLINE_DECL void set_wrap_mode (Gtk::WrapMode wrap_mode) noexcept;

// gboolean gtk_text_view_starts_display_line (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_starts_display_line (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none*/);
GI_INLINE_DECL bool starts_display_line (const Gtk::TextIter_Ref iter) noexcept;

// void gtk_text_view_window_to_buffer_coords (GtkTextView* text_view /*none*/, GtkTextWindowType win, int window_x, int window_y, int* buffer_x, int* buffer_y);
// void gtk_text_view_window_to_buffer_coords (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y);
GI_INLINE_DECL void window_to_buffer_coords (Gtk::TextWindowType win, gint window_x, gint window_y, gint * buffer_x, gint * buffer_y) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> window_to_buffer_coords (Gtk::TextWindowType win, gint window_x, gint window_y) noexcept;

gi::property_proxy<bool, base::TextViewBase> property_accepts_tab()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "accepts-tab"); }
const gi::property_proxy<bool, base::TextViewBase> property_accepts_tab() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "accepts-tab"); }

gi::property_proxy<gint, base::TextViewBase> property_bottom_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "bottom-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_bottom_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "bottom-margin"); }

gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> property_buffer()
{ return gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> (*this, "buffer"); }
const gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> property_buffer() const
{ return gi::property_proxy<Gtk::TextBuffer, base::TextViewBase> (*this, "buffer"); }

gi::property_proxy<bool, base::TextViewBase> property_cursor_visible()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "cursor-visible"); }
const gi::property_proxy<bool, base::TextViewBase> property_cursor_visible() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "cursor-visible"); }

gi::property_proxy<bool, base::TextViewBase> property_editable()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "editable"); }
const gi::property_proxy<bool, base::TextViewBase> property_editable() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "editable"); }

gi::property_proxy<Gio::MenuModel, base::TextViewBase> property_extra_menu()
{ return gi::property_proxy<Gio::MenuModel, base::TextViewBase> (*this, "extra-menu"); }
const gi::property_proxy<Gio::MenuModel, base::TextViewBase> property_extra_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::TextViewBase> (*this, "extra-menu"); }

gi::property_proxy<gi::cstring, base::TextViewBase> property_im_module()
{ return gi::property_proxy<gi::cstring, base::TextViewBase> (*this, "im-module"); }
const gi::property_proxy<gi::cstring, base::TextViewBase> property_im_module() const
{ return gi::property_proxy<gi::cstring, base::TextViewBase> (*this, "im-module"); }

gi::property_proxy<gint, base::TextViewBase> property_indent()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "indent"); }
const gi::property_proxy<gint, base::TextViewBase> property_indent() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "indent"); }

gi::property_proxy<Gtk::InputHints, base::TextViewBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::TextViewBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::TextViewBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::TextViewBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::TextViewBase> (*this, "input-purpose"); }

gi::property_proxy<Gtk::Justification, base::TextViewBase> property_justification()
{ return gi::property_proxy<Gtk::Justification, base::TextViewBase> (*this, "justification"); }
const gi::property_proxy<Gtk::Justification, base::TextViewBase> property_justification() const
{ return gi::property_proxy<Gtk::Justification, base::TextViewBase> (*this, "justification"); }

gi::property_proxy<gint, base::TextViewBase> property_left_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "left-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_left_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "left-margin"); }

gi::property_proxy<bool, base::TextViewBase> property_monospace()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "monospace"); }
const gi::property_proxy<bool, base::TextViewBase> property_monospace() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "monospace"); }

gi::property_proxy<bool, base::TextViewBase> property_overwrite()
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "overwrite"); }
const gi::property_proxy<bool, base::TextViewBase> property_overwrite() const
{ return gi::property_proxy<bool, base::TextViewBase> (*this, "overwrite"); }

gi::property_proxy<gint, base::TextViewBase> property_pixels_above_lines()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-above-lines"); }
const gi::property_proxy<gint, base::TextViewBase> property_pixels_above_lines() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-above-lines"); }

gi::property_proxy<gint, base::TextViewBase> property_pixels_below_lines()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-below-lines"); }
const gi::property_proxy<gint, base::TextViewBase> property_pixels_below_lines() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-below-lines"); }

gi::property_proxy<gint, base::TextViewBase> property_pixels_inside_wrap()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-inside-wrap"); }
const gi::property_proxy<gint, base::TextViewBase> property_pixels_inside_wrap() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "pixels-inside-wrap"); }

gi::property_proxy<gint, base::TextViewBase> property_right_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "right-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_right_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "right-margin"); }

gi::property_proxy<Pango::TabArray, base::TextViewBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::TextViewBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::TextViewBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::TextViewBase> (*this, "tabs"); }

gi::property_proxy<gint, base::TextViewBase> property_top_margin()
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "top-margin"); }
const gi::property_proxy<gint, base::TextViewBase> property_top_margin() const
{ return gi::property_proxy<gint, base::TextViewBase> (*this, "top-margin"); }

gi::property_proxy<Gtk::WrapMode, base::TextViewBase> property_wrap_mode()
{ return gi::property_proxy<Gtk::WrapMode, base::TextViewBase> (*this, "wrap-mode"); }
const gi::property_proxy<Gtk::WrapMode, base::TextViewBase> property_wrap_mode() const
{ return gi::property_proxy<Gtk::WrapMode, base::TextViewBase> (*this, "wrap-mode"); }

// (signal) void backspace ();
// (signal) void backspace ();
gi::signal_proxy<void(Gtk::TextView)> signal_backspace()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "backspace"); }

// (signal) void copy-clipboard ();
// (signal) void copy-clipboard ();
gi::signal_proxy<void(Gtk::TextView)> signal_copy_clipboard()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "copy-clipboard"); }

// (signal) void cut-clipboard ();
// (signal) void cut-clipboard ();
gi::signal_proxy<void(Gtk::TextView)> signal_cut_clipboard()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "cut-clipboard"); }

// (signal) void delete-from-cursor ( type, gint count);
// (signal) void delete-from-cursor (::GtkDeleteType type, gint count);
gi::signal_proxy<void(Gtk::TextView, Gtk::DeleteType type, gint count)> signal_delete_from_cursor()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::DeleteType type, gint count)> (*this, "delete-from-cursor"); }

// (signal) gboolean extend-selection ( granularity,  location /*none*/,  start /*none*/,  end /*none*/);
// (signal) gboolean extend-selection (::GtkTextExtendSelection granularity, ::GtkTextIter* location /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
gi::signal_proxy<bool(Gtk::TextView, Gtk::TextExtendSelection granularity, Gtk::TextIter_Ref location, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> signal_extend_selection()
{ return gi::signal_proxy<bool(Gtk::TextView, Gtk::TextExtendSelection granularity, Gtk::TextIter_Ref location, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end)> (*this, "extend-selection"); }

// (signal) void insert-at-cursor (gchar* string /*none*/);
// (signal) void insert-at-cursor (char* string /*none*/);
gi::signal_proxy<void(Gtk::TextView, gi::cstring_v string)> signal_insert_at_cursor()
{ return gi::signal_proxy<void(Gtk::TextView, gi::cstring_v string)> (*this, "insert-at-cursor"); }

// (signal) void insert-emoji ();
// (signal) void insert-emoji ();
gi::signal_proxy<void(Gtk::TextView)> signal_insert_emoji()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "insert-emoji"); }

// (signal) void move-cursor ( step, gint count, gboolean extend_selection);
// (signal) void move-cursor (::GtkMovementStep step, gint count, gboolean extend_selection);
gi::signal_proxy<void(Gtk::TextView, Gtk::MovementStep step, gint count, gboolean extend_selection)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::MovementStep step, gint count, gboolean extend_selection)> (*this, "move-cursor"); }

// (signal) void move-viewport ( step, gint count);
// (signal) void move-viewport (::GtkScrollStep step, gint count);
gi::signal_proxy<void(Gtk::TextView, Gtk::ScrollStep step, gint count)> signal_move_viewport()
{ return gi::signal_proxy<void(Gtk::TextView, Gtk::ScrollStep step, gint count)> (*this, "move-viewport"); }

// (signal) void paste-clipboard ();
// (signal) void paste-clipboard ();
gi::signal_proxy<void(Gtk::TextView)> signal_paste_clipboard()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "paste-clipboard"); }

// (signal) void preedit-changed (gchar* preedit /*none*/);
// (signal) void preedit-changed (char* preedit /*none*/);
gi::signal_proxy<void(Gtk::TextView, gi::cstring_v preedit)> signal_preedit_changed()
{ return gi::signal_proxy<void(Gtk::TextView, gi::cstring_v preedit)> (*this, "preedit-changed"); }

// (signal) void select-all (gboolean select);
// (signal) void select-all (gboolean select);
gi::signal_proxy<void(Gtk::TextView, gboolean select)> signal_select_all()
{ return gi::signal_proxy<void(Gtk::TextView, gboolean select)> (*this, "select-all"); }

// (signal) void set-anchor ();
// (signal) void set-anchor ();
gi::signal_proxy<void(Gtk::TextView)> signal_set_anchor()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "set-anchor"); }

// (signal) void toggle-cursor-visible ();
// (signal) void toggle-cursor-visible ();
gi::signal_proxy<void(Gtk::TextView)> signal_toggle_cursor_visible()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "toggle-cursor-visible"); }

// (signal) void toggle-overwrite ();
// (signal) void toggle-overwrite ();
gi::signal_proxy<void(Gtk::TextView)> signal_toggle_overwrite()
{ return gi::signal_proxy<void(Gtk::TextView)> (*this, "toggle-overwrite"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textview_extra_def.hpp>)
#include <gtk/textview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textview_extra.hpp>)
#include <gtk/textview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextView : public GI_GTK_TEXTVIEW_BASE
{ typedef GI_GTK_TEXTVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextView>
{ typedef Gtk::TextView type; }; 

} // namespace repository

} // namespace gi

#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextViewClassDef
{
typedef TextViewClassDef self;
public:
typedef Gtk::TextView instance_type;
typedef ::GtkTextViewClass class_type;

using GI_MEMBER_CHECK_CONFLICT(backspace) = self;
using GI_MEMBER_CHECK_CONFLICT(copy_clipboard) = self;
using GI_MEMBER_CHECK_CONFLICT(cut_clipboard) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_from_cursor) = self;
using GI_MEMBER_CHECK_CONFLICT(extend_selection) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_at_cursor) = self;
using GI_MEMBER_CHECK_CONFLICT(insert_emoji) = self;
using GI_MEMBER_CHECK_CONFLICT(move_cursor) = self;
using GI_MEMBER_CHECK_CONFLICT(paste_clipboard) = self;
using GI_MEMBER_CHECK_CONFLICT(set_anchor) = self;
using GI_MEMBER_CHECK_CONFLICT(toggle_overwrite) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TextViewClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TextView::backspace (GtkTextView* text_view /*none*/);
// void TextView::backspace (::GtkTextView* text_view /*none*/);
virtual void backspace_ () noexcept = 0;

// void TextView::copy_clipboard (GtkTextView* text_view /*none*/);
// void TextView::copy_clipboard (::GtkTextView* text_view /*none*/);
virtual void copy_clipboard_ () noexcept = 0;

// void TextView::cut_clipboard (GtkTextView* text_view /*none*/);
// void TextView::cut_clipboard (::GtkTextView* text_view /*none*/);
virtual void cut_clipboard_ () noexcept = 0;

// void TextView::delete_from_cursor (GtkTextView* text_view /*none*/, GtkDeleteType type, int count);
// void TextView::delete_from_cursor (::GtkTextView* text_view /*none*/, ::GtkDeleteType type, gint count);
virtual void delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept = 0;

// gboolean TextView::extend_selection (GtkTextView* text_view /*none*/, GtkTextExtendSelection granularity, const GtkTextIter* location /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// gboolean TextView::extend_selection (::GtkTextView* text_view /*none*/, ::GtkTextExtendSelection granularity, const ::GtkTextIter* location /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
virtual bool extend_selection_ (Gtk::TextExtendSelection granularity, const Gtk::TextIter_Ref location, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept = 0;

// void TextView::insert_at_cursor (GtkTextView* text_view /*none*/, const char* str /*none*/);
// void TextView::insert_at_cursor (::GtkTextView* text_view /*none*/, const char* str /*none*/);
virtual void insert_at_cursor_ (const gi::cstring_v str) noexcept = 0;

// void TextView::insert_emoji (GtkTextView* text_view /*none*/);
// void TextView::insert_emoji (::GtkTextView* text_view /*none*/);
virtual void insert_emoji_ () noexcept = 0;

// void TextView::move_cursor (GtkTextView* text_view /*none*/, GtkMovementStep step, int count, gboolean extend_selection);
// void TextView::move_cursor (::GtkTextView* text_view /*none*/, ::GtkMovementStep step, gint count, gboolean extend_selection);
virtual void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept = 0;

// void TextView::paste_clipboard (GtkTextView* text_view /*none*/);
// void TextView::paste_clipboard (::GtkTextView* text_view /*none*/);
virtual void paste_clipboard_ () noexcept = 0;

// void TextView::set_anchor (GtkTextView* text_view /*none*/);
// void TextView::set_anchor (::GtkTextView* text_view /*none*/);
virtual void set_anchor_ () noexcept = 0;

// void TextView::snapshot_layer (GtkTextView* text_view /*none*/, GtkTextViewLayer layer, GtkSnapshot* snapshot /*none*/);
// void TextView::snapshot_layer (::GtkTextView* text_view /*none*/, ::GtkTextViewLayer layer,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// void TextView::toggle_overwrite (GtkTextView* text_view /*none*/);
// void TextView::toggle_overwrite (::GtkTextView* text_view /*none*/);
virtual void toggle_overwrite_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TextViewClass: public detail::ClassTemplate<Gtk::impl::internal::TextViewClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
friend class internal::TextViewClassDef;
typedef TextViewClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextViewClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;


// void TextView::backspace (GtkTextView* text_view /*none*/);
// void TextView::backspace (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void backspace_ () noexcept override;

// void TextView::copy_clipboard (GtkTextView* text_view /*none*/);
// void TextView::copy_clipboard (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void copy_clipboard_ () noexcept override;

// void TextView::cut_clipboard (GtkTextView* text_view /*none*/);
// void TextView::cut_clipboard (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void cut_clipboard_ () noexcept override;

// void TextView::delete_from_cursor (GtkTextView* text_view /*none*/, GtkDeleteType type, int count);
// void TextView::delete_from_cursor (::GtkTextView* text_view /*none*/, ::GtkDeleteType type, gint count);
GI_INLINE_DECL void delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept override;

// gboolean TextView::extend_selection (GtkTextView* text_view /*none*/, GtkTextExtendSelection granularity, const GtkTextIter* location /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// gboolean TextView::extend_selection (::GtkTextView* text_view /*none*/, ::GtkTextExtendSelection granularity, const ::GtkTextIter* location /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
GI_INLINE_DECL bool extend_selection_ (Gtk::TextExtendSelection granularity, const Gtk::TextIter_Ref location, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept override;

// void TextView::insert_at_cursor (GtkTextView* text_view /*none*/, const char* str /*none*/);
// void TextView::insert_at_cursor (::GtkTextView* text_view /*none*/, const char* str /*none*/);
GI_INLINE_DECL void insert_at_cursor_ (const gi::cstring_v str) noexcept override;

// void TextView::insert_emoji (GtkTextView* text_view /*none*/);
// void TextView::insert_emoji (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void insert_emoji_ () noexcept override;

// void TextView::move_cursor (GtkTextView* text_view /*none*/, GtkMovementStep step, int count, gboolean extend_selection);
// void TextView::move_cursor (::GtkTextView* text_view /*none*/, ::GtkMovementStep step, gint count, gboolean extend_selection);
GI_INLINE_DECL void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept override;

// void TextView::paste_clipboard (GtkTextView* text_view /*none*/);
// void TextView::paste_clipboard (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void paste_clipboard_ () noexcept override;

// void TextView::set_anchor (GtkTextView* text_view /*none*/);
// void TextView::set_anchor (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void set_anchor_ () noexcept override;

// void TextView::snapshot_layer (GtkTextView* text_view /*none*/, GtkTextViewLayer layer, GtkSnapshot* snapshot /*none*/);
// void TextView::snapshot_layer (::GtkTextView* text_view /*none*/, ::GtkTextViewLayer layer,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// void TextView::toggle_overwrite (GtkTextView* text_view /*none*/);
// void TextView::toggle_overwrite (::GtkTextView* text_view /*none*/);
GI_INLINE_DECL void toggle_overwrite_ () noexcept override;


};


struct TextViewClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TextViewClass, backspace)
  GI_MEMBER_DEFINE(TextViewClass, copy_clipboard)
  GI_MEMBER_DEFINE(TextViewClass, cut_clipboard)
  GI_MEMBER_DEFINE(TextViewClass, delete_from_cursor)
  GI_MEMBER_DEFINE(TextViewClass, extend_selection)
  GI_MEMBER_DEFINE(TextViewClass, insert_at_cursor)
  GI_MEMBER_DEFINE(TextViewClass, insert_emoji)
  GI_MEMBER_DEFINE(TextViewClass, move_cursor)
  GI_MEMBER_DEFINE(TextViewClass, paste_clipboard)
  GI_MEMBER_DEFINE(TextViewClass, set_anchor)
  GI_MEMBER_DEFINE(TextViewClass, toggle_overwrite)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, backspace),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, copy_clipboard),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, cut_clipboard),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_from_cursor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, extend_selection),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_at_cursor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, insert_emoji),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, move_cursor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, paste_clipboard),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_anchor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, toggle_overwrite)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TextViewImpl = detail::ObjectImpl<TextView, internal::TextViewClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
