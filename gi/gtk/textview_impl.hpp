// AUTO-GENERATED

#ifndef _GI_GTK_TEXTVIEW_IMPL_HPP_
#define _GI_GTK_TEXTVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Scrollable TextViewBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TextViewBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* /*none*/ gtk_text_view_new ();
// ::GtkTextView* /*none*/ gtk_text_view_new ();
Gtk::TextView base::TextViewBase::new_ () noexcept
{
  typedef ::GtkTextView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_text_view_new_with_buffer (GtkTextBuffer* buffer /*none*/);
// ::GtkTextView* /*none*/ gtk_text_view_new_with_buffer (::GtkTextBuffer* buffer /*none*/);
Gtk::TextView base::TextViewBase::new_with_buffer (Gtk::TextBuffer buffer) noexcept
{
  typedef ::GtkTextView* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_view_new_with_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_text_view_add_child_at_anchor (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void gtk_text_view_add_child_at_anchor (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
void base::TextViewBase::add_child_at_anchor (Gtk::Widget child, Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkWidget* child, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_add_child_at_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none);
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkTextChildAnchor*) (anchor_to_c));
}

// void gtk_text_view_add_overlay (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/, int xpos, int ypos);
// void gtk_text_view_add_overlay (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/, gint xpos, gint ypos);
void base::TextViewBase::add_overlay (Gtk::Widget child, gint xpos, gint ypos) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkWidget* child, gint xpos, gint ypos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_add_overlay;
  auto ypos_to_c = ypos;
  auto xpos_to_c = xpos;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (xpos_to_c), (gint) (ypos_to_c));
}

// gboolean gtk_text_view_backward_display_line (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_backward_display_line (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
bool base::TextViewBase::backward_display_line (Gtk::TextIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_backward_display_line;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_text_view_backward_display_line_start (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_backward_display_line_start (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
bool base::TextViewBase::backward_display_line_start (Gtk::TextIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_backward_display_line_start;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_text_view_buffer_to_window_coords (GtkTextView* text_view /*none*/, GtkTextWindowType win, int buffer_x, int buffer_y, int* window_x, int* window_y);
// void gtk_text_view_buffer_to_window_coords (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y);
void base::TextViewBase::buffer_to_window_coords (Gtk::TextWindowType win, gint buffer_x, gint buffer_y, gint * window_x, gint * window_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_buffer_to_window_coords;
  gint window_y_o {};
  gint window_x_o {};
  auto buffer_y_to_c = buffer_y;
  auto buffer_x_to_c = buffer_x;
  auto win_to_c = gi::unwrap (win);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c), (gint) (buffer_x_to_c), (gint) (buffer_y_to_c), (gint*) (window_x ? &window_x_o : nullptr), (gint*) (window_y ? &window_y_o : nullptr));
  if (window_y) *window_y = window_y_o;
  if (window_x) *window_x = window_x_o;
}
std::tuple<gint, gint> base::TextViewBase::buffer_to_window_coords (Gtk::TextWindowType win, gint buffer_x, gint buffer_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_buffer_to_window_coords;
  gint window_y_o {};
  gint window_x_o {};
  auto buffer_y_to_c = buffer_y;
  auto buffer_x_to_c = buffer_x;
  auto win_to_c = gi::unwrap (win);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c), (gint) (buffer_x_to_c), (gint) (buffer_y_to_c), (gint*) (&window_x_o), (gint*) (&window_y_o));
  auto &&tmp_return_1 = window_x_o;
  auto &&tmp_return_2 = window_y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_view_forward_display_line (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_forward_display_line (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
bool base::TextViewBase::forward_display_line (Gtk::TextIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_forward_display_line;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_text_view_forward_display_line_end (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_forward_display_line_end (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/);
bool base::TextViewBase::forward_display_line_end (Gtk::TextIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_forward_display_line_end;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_text_view_get_accepts_tab (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_accepts_tab (::GtkTextView* text_view /*none*/);
bool base::TextViewBase::get_accepts_tab () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_accepts_tab;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_view_get_bottom_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_bottom_margin (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_bottom_margin () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_bottom_margin;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// GtkTextBuffer* /*none*/ gtk_text_view_get_buffer (GtkTextView* text_view /*none*/);
// ::GtkTextBuffer* /*none*/ gtk_text_view_get_buffer (::GtkTextView* text_view /*none*/);
Gtk::TextBuffer base::TextViewBase::get_buffer () noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_buffer;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_text_view_get_cursor_locations (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none,nullable*/, GdkRectangle* strong /*none,out,opt,ca*/, GdkRectangle* weak /*none,out,opt,ca*/);
// void gtk_text_view_get_cursor_locations (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none,nullable*/, ::GdkRectangle* strong /*none,out,opt,ca*/, ::GdkRectangle* weak /*none,out,opt,ca*/);
void base::TextViewBase::get_cursor_locations (const Gtk::TextIter_Ref iter, Gdk::Rectangle * strong, Gdk::Rectangle * weak) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* strong, ::GdkRectangle* weak);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_cursor_locations;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*weak).gobj_()), "");
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*strong).gobj_()), "");
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (::GdkRectangle*) (strong ? (::GdkRectangle*) (*strong).gobj_() : nullptr), (::GdkRectangle*) (weak ? (::GdkRectangle*) (*weak).gobj_() : nullptr));
}
void base::TextViewBase::get_cursor_locations (Gdk::Rectangle * strong, Gdk::Rectangle * weak) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* strong, ::GdkRectangle* weak);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_cursor_locations;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*weak).gobj_()), "");
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*strong).gobj_()), "");
  auto iter_to_c = nullptr;
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (::GdkRectangle*) (strong ? (::GdkRectangle*) (*strong).gobj_() : nullptr), (::GdkRectangle*) (weak ? (::GdkRectangle*) (*weak).gobj_() : nullptr));
}
std::tuple<Gdk::Rectangle, Gdk::Rectangle> base::TextViewBase::get_cursor_locations (const Gtk::TextIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* strong, ::GdkRectangle* weak);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_cursor_locations;
  Gdk::Rectangle weak_c;
  auto weak = &weak_c;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*weak).gobj_()), "");
  Gdk::Rectangle strong_c;
  auto strong = &strong_c;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*strong).gobj_()), "");
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (::GdkRectangle*) (strong ? (::GdkRectangle*) (*strong).gobj_() : nullptr), (::GdkRectangle*) (weak ? (::GdkRectangle*) (*weak).gobj_() : nullptr));
  auto &&tmp_return_1 = strong_c;
  auto &&tmp_return_2 = weak_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<Gdk::Rectangle, Gdk::Rectangle> base::TextViewBase::get_cursor_locations () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* strong, ::GdkRectangle* weak);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_cursor_locations;
  Gdk::Rectangle weak_c;
  auto weak = &weak_c;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*weak).gobj_()), "");
  Gdk::Rectangle strong_c;
  auto strong = &strong_c;
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*strong).gobj_()), "");
  auto iter_to_c = nullptr;
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (::GdkRectangle*) (strong ? (::GdkRectangle*) (*strong).gobj_() : nullptr), (::GdkRectangle*) (weak ? (::GdkRectangle*) (*weak).gobj_() : nullptr));
  auto &&tmp_return_1 = strong_c;
  auto &&tmp_return_2 = weak_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_view_get_cursor_visible (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_cursor_visible (::GtkTextView* text_view /*none*/);
bool base::TextViewBase::get_cursor_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_cursor_visible;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_view_get_editable (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_editable (::GtkTextView* text_view /*none*/);
bool base::TextViewBase::get_editable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_editable;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none*/ gtk_text_view_get_extra_menu (GtkTextView* text_view /*none*/);
// ::GMenuModel* /*none*/ gtk_text_view_get_extra_menu (::GtkTextView* text_view /*none*/);
Gio::MenuModel base::TextViewBase::get_extra_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_extra_menu;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_text_view_get_gutter (GtkTextView* text_view /*none*/, GtkTextWindowType win);
// ::GtkWidget* /*none,nullable*/ gtk_text_view_get_gutter (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win);
Gtk::Widget base::TextViewBase::get_gutter (Gtk::TextWindowType win) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_gutter;
  auto win_to_c = gi::unwrap (win);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_text_view_get_indent (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_indent (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_indent () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_indent;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// GtkInputHints gtk_text_view_get_input_hints (GtkTextView* text_view /*none*/);
// ::GtkInputHints gtk_text_view_get_input_hints (::GtkTextView* text_view /*none*/);
Gtk::InputHints base::TextViewBase::get_input_hints () noexcept
{
  typedef ::GtkInputHints (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_input_hints;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkInputPurpose gtk_text_view_get_input_purpose (GtkTextView* text_view /*none*/);
// ::GtkInputPurpose gtk_text_view_get_input_purpose (::GtkTextView* text_view /*none*/);
Gtk::InputPurpose base::TextViewBase::get_input_purpose () noexcept
{
  typedef ::GtkInputPurpose (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_input_purpose;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_text_view_get_iter_at_location (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none,out,ca*/, int x, int y);
// gboolean gtk_text_view_get_iter_at_location (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint x, gint y);
bool base::TextViewBase::get_iter_at_location (Gtk::TextIter & iter, gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_iter_at_location;
  auto y_to_c = y;
  auto x_to_c = x;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter> base::TextViewBase::get_iter_at_location (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_iter_at_location;
  auto y_to_c = y;
  auto x_to_c = x;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (gint) (x_to_c), (gint) (y_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_view_get_iter_at_position (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none,out,ca*/, int* trailing, int x, int y);
// gboolean gtk_text_view_get_iter_at_position (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint* trailing, gint x, gint y);
bool base::TextViewBase::get_iter_at_position (Gtk::TextIter & iter, gint * trailing, gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter, gint* trailing, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_iter_at_position;
  auto y_to_c = y;
  auto x_to_c = x;
  gint trailing_o {};
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (gint*) (trailing ? &trailing_o : nullptr), (gint) (x_to_c), (gint) (y_to_c));
  if (trailing) *trailing = trailing_o;
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter, gint> base::TextViewBase::get_iter_at_position (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter, gint* trailing, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_iter_at_position;
  auto y_to_c = y;
  auto x_to_c = x;
  gint trailing_o {};
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (gint*) (&trailing_o), (gint) (x_to_c), (gint) (y_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  auto &&tmp_return_3 = trailing_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void gtk_text_view_get_iter_location (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none*/, GdkRectangle* location /*none,out,ca*/);
// void gtk_text_view_get_iter_location (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none*/, ::GdkRectangle* location /*none,out,ca*/);
void base::TextViewBase::get_iter_location (const Gtk::TextIter_Ref iter, Gdk::Rectangle & location) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_iter_location;
  detail::allocate(location);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(location).gobj_()), "");
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (::GdkRectangle*) ((::GdkRectangle*) (location).gobj_()));
}
Gdk::Rectangle base::TextViewBase::get_iter_location (const Gtk::TextIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, ::GdkRectangle* location);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_iter_location;
  Gdk::Rectangle location_c;
  auto location = &location_c;
  detail::allocate(*location);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*location).gobj_()), "");
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (::GdkRectangle*) (location ? (::GdkRectangle*) (*location).gobj_() : nullptr));
  return location_c;
}

// GtkJustification gtk_text_view_get_justification (GtkTextView* text_view /*none*/);
// ::GtkJustification gtk_text_view_get_justification (::GtkTextView* text_view /*none*/);
Gtk::Justification base::TextViewBase::get_justification () noexcept
{
  typedef ::GtkJustification (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_justification;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gtk_text_view_get_left_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_left_margin (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_left_margin () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_left_margin;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_view_get_line_at_y (GtkTextView* text_view /*none*/, GtkTextIter* target_iter /*none,out,ca*/, int y, int* line_top);
// void gtk_text_view_get_line_at_y (::GtkTextView* text_view /*none*/, ::GtkTextIter* target_iter /*none,out,ca*/, gint y, gint* line_top);
void base::TextViewBase::get_line_at_y (Gtk::TextIter & target_iter, gint y, gint & line_top) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* target_iter, gint y, gint* line_top);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_line_at_y;
  gint line_top_o {};
  auto y_to_c = y;
  detail::allocate(target_iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(target_iter).gobj_()), "");
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (target_iter).gobj_()), (gint) (y_to_c), (gint*) (&line_top_o));
  line_top = line_top_o;
}
std::tuple<Gtk::TextIter, gint> base::TextViewBase::get_line_at_y (gint y) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* target_iter, gint y, gint* line_top);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_line_at_y;
  gint line_top_o {};
  auto y_to_c = y;
  Gtk::TextIter target_iter_c;
  auto target_iter = &target_iter_c;
  detail::allocate(*target_iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*target_iter).gobj_()), "");
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (target_iter ? (::GtkTextIter*) (*target_iter).gobj_() : nullptr), (gint) (y_to_c), (gint*) (&line_top_o));
  auto &&tmp_return_1 = target_iter_c;
  auto &&tmp_return_2 = line_top_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_text_view_get_line_yrange (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none*/, int* y, int* height);
// void gtk_text_view_get_line_yrange (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none*/, gint* y, gint* height);
void base::TextViewBase::get_line_yrange (const Gtk::TextIter_Ref iter, gint & y, gint & height) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, gint* y, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_line_yrange;
  gint height_o {};
  gint y_o {};
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (gint*) (&y_o), (gint*) (&height_o));
  height = height_o;
  y = y_o;
}
std::tuple<gint, gint> base::TextViewBase::get_line_yrange (const Gtk::TextIter_Ref iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter, gint* y, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_line_yrange;
  gint height_o {};
  gint y_o {};
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c), (gint*) (&y_o), (gint*) (&height_o));
  auto &&tmp_return_1 = y_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoContext* /*none*/ gtk_text_view_get_ltr_context (GtkTextView* text_view /*none*/);
// ::PangoContext* /*none*/ gtk_text_view_get_ltr_context (::GtkTextView* text_view /*none*/);
Pango::Context base::TextViewBase::get_ltr_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_ltr_context;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_text_view_get_monospace (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_monospace (::GtkTextView* text_view /*none*/);
bool base::TextViewBase::get_monospace () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_monospace;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_view_get_overwrite (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_get_overwrite (::GtkTextView* text_view /*none*/);
bool base::TextViewBase::get_overwrite () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_overwrite;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_view_get_pixels_above_lines (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_pixels_above_lines (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_pixels_above_lines () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_pixels_above_lines;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_view_get_pixels_below_lines (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_pixels_below_lines (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_pixels_below_lines () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_pixels_below_lines;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_view_get_pixels_inside_wrap (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_pixels_inside_wrap (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_pixels_inside_wrap () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_pixels_inside_wrap;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_view_get_right_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_right_margin (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_right_margin () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_right_margin;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// PangoContext* /*none*/ gtk_text_view_get_rtl_context (GtkTextView* text_view /*none*/);
// ::PangoContext* /*none*/ gtk_text_view_get_rtl_context (::GtkTextView* text_view /*none*/);
Pango::Context base::TextViewBase::get_rtl_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_rtl_context;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoTabArray* /*full,nullable*/ gtk_text_view_get_tabs (GtkTextView* text_view /*none*/);
// ::PangoTabArray* /*full,nullable*/ gtk_text_view_get_tabs (::GtkTextView* text_view /*none*/);
Pango::TabArray base::TextViewBase::get_tabs () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_tabs;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int gtk_text_view_get_top_margin (GtkTextView* text_view /*none*/);
// gint gtk_text_view_get_top_margin (::GtkTextView* text_view /*none*/);
gint base::TextViewBase::get_top_margin () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_top_margin;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_view_get_visible_rect (GtkTextView* text_view /*none*/, GdkRectangle* visible_rect /*none,out,ca*/);
// void gtk_text_view_get_visible_rect (::GtkTextView* text_view /*none*/, ::GdkRectangle* visible_rect /*none,out,ca*/);
void base::TextViewBase::get_visible_rect (Gdk::Rectangle & visible_rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GdkRectangle* visible_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_visible_rect;
  detail::allocate(visible_rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(visible_rect).gobj_()), "");
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) (visible_rect).gobj_()));
}
Gdk::Rectangle base::TextViewBase::get_visible_rect () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GdkRectangle* visible_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_visible_rect;
  Gdk::Rectangle visible_rect_c;
  auto visible_rect = &visible_rect_c;
  detail::allocate(*visible_rect);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*visible_rect).gobj_()), "");
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GdkRectangle*) (visible_rect ? (::GdkRectangle*) (*visible_rect).gobj_() : nullptr));
  return visible_rect_c;
}

// GtkWrapMode gtk_text_view_get_wrap_mode (GtkTextView* text_view /*none*/);
// ::GtkWrapMode gtk_text_view_get_wrap_mode (::GtkTextView* text_view /*none*/);
Gtk::WrapMode base::TextViewBase::get_wrap_mode () noexcept
{
  typedef ::GtkWrapMode (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_get_wrap_mode;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_text_view_im_context_filter_keypress (GtkTextView* text_view /*none*/, GdkEvent* event /*none*/);
// gboolean gtk_text_view_im_context_filter_keypress (::GtkTextView* text_view /*none*/,  event /*none*/);
// SKIP; event type  not supported

// gboolean gtk_text_view_move_mark_onscreen (GtkTextView* text_view /*none*/, GtkTextMark* mark /*none*/);
// gboolean gtk_text_view_move_mark_onscreen (::GtkTextView* text_view /*none*/, ::GtkTextMark* mark /*none*/);
bool base::TextViewBase::move_mark_onscreen (Gtk::TextMark mark) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_move_mark_onscreen;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextMark*) (mark_to_c));
  return _temp_ret;
}

// void gtk_text_view_move_overlay (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/, int xpos, int ypos);
// void gtk_text_view_move_overlay (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/, gint xpos, gint ypos);
void base::TextViewBase::move_overlay (Gtk::Widget child, gint xpos, gint ypos) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkWidget* child, gint xpos, gint ypos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_move_overlay;
  auto ypos_to_c = ypos;
  auto xpos_to_c = xpos;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (xpos_to_c), (gint) (ypos_to_c));
}

// gboolean gtk_text_view_move_visually (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/, int count);
// gboolean gtk_text_view_move_visually (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/, gint count);
bool base::TextViewBase::move_visually (Gtk::TextIter_Ref iter, gint count) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_move_visually;
  auto count_to_c = count;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter_to_c), (gint) (count_to_c));
  return _temp_ret;
}

// gboolean gtk_text_view_place_cursor_onscreen (GtkTextView* text_view /*none*/);
// gboolean gtk_text_view_place_cursor_onscreen (::GtkTextView* text_view /*none*/);
bool base::TextViewBase::place_cursor_onscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_place_cursor_onscreen;
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_view_remove (GtkTextView* text_view /*none*/, GtkWidget* child /*none*/);
// void gtk_text_view_remove (::GtkTextView* text_view /*none*/, ::GtkWidget* child /*none*/);
void base::TextViewBase::remove (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_remove;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_text_view_reset_cursor_blink (GtkTextView* text_view /*none*/);
// void gtk_text_view_reset_cursor_blink (::GtkTextView* text_view /*none*/);
void base::TextViewBase::reset_cursor_blink () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_reset_cursor_blink;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void gtk_text_view_reset_im_context (GtkTextView* text_view /*none*/);
// void gtk_text_view_reset_im_context (::GtkTextView* text_view /*none*/);
void base::TextViewBase::reset_im_context () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_reset_im_context;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void gtk_text_view_scroll_mark_onscreen (GtkTextView* text_view /*none*/, GtkTextMark* mark /*none*/);
// void gtk_text_view_scroll_mark_onscreen (::GtkTextView* text_view /*none*/, ::GtkTextMark* mark /*none*/);
void base::TextViewBase::scroll_mark_onscreen (Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_scroll_mark_onscreen;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextMark*) (mark_to_c));
}

// gboolean gtk_text_view_scroll_to_iter (GtkTextView* text_view /*none*/, GtkTextIter* iter /*none*/, double within_margin, gboolean use_align, double xalign, double yalign);
// gboolean gtk_text_view_scroll_to_iter (::GtkTextView* text_view /*none*/, ::GtkTextIter* iter /*none*/, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
bool base::TextViewBase::scroll_to_iter (Gtk::TextIter_Ref iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextIter* iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_scroll_to_iter;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  auto use_align_to_c = use_align;
  auto within_margin_to_c = within_margin;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextIter*) (iter_to_c), (gdouble) (within_margin_to_c), (gboolean) (use_align_to_c), (gdouble) (xalign_to_c), (gdouble) (yalign_to_c));
  return _temp_ret;
}

// void gtk_text_view_scroll_to_mark (GtkTextView* text_view /*none*/, GtkTextMark* mark /*none*/, double within_margin, gboolean use_align, double xalign, double yalign);
// void gtk_text_view_scroll_to_mark (::GtkTextView* text_view /*none*/, ::GtkTextMark* mark /*none*/, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
void base::TextViewBase::scroll_to_mark (Gtk::TextMark mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextMark* mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_scroll_to_mark;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  auto use_align_to_c = use_align;
  auto within_margin_to_c = within_margin;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextMark*) (mark_to_c), (gdouble) (within_margin_to_c), (gboolean) (use_align_to_c), (gdouble) (xalign_to_c), (gdouble) (yalign_to_c));
}

// void gtk_text_view_set_accepts_tab (GtkTextView* text_view /*none*/, gboolean accepts_tab);
// void gtk_text_view_set_accepts_tab (::GtkTextView* text_view /*none*/, gboolean accepts_tab);
void base::TextViewBase::set_accepts_tab (gboolean accepts_tab) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gboolean accepts_tab);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_accepts_tab;
  auto accepts_tab_to_c = accepts_tab;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gboolean) (accepts_tab_to_c));
}

// void gtk_text_view_set_bottom_margin (GtkTextView* text_view /*none*/, int bottom_margin);
// void gtk_text_view_set_bottom_margin (::GtkTextView* text_view /*none*/, gint bottom_margin);
void base::TextViewBase::set_bottom_margin (gint bottom_margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint bottom_margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_bottom_margin;
  auto bottom_margin_to_c = bottom_margin;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (bottom_margin_to_c));
}

// void gtk_text_view_set_buffer (GtkTextView* text_view /*none*/, GtkTextBuffer* buffer /*none,nullable*/);
// void gtk_text_view_set_buffer (::GtkTextView* text_view /*none*/, ::GtkTextBuffer* buffer /*none,nullable*/);
void base::TextViewBase::set_buffer (Gtk::TextBuffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextBuffer*) (buffer_to_c));
}
void base::TextViewBase::set_buffer () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_buffer;
  auto buffer_to_c = nullptr;
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextBuffer*) (buffer_to_c));
}

// void gtk_text_view_set_cursor_visible (GtkTextView* text_view /*none*/, gboolean setting);
// void gtk_text_view_set_cursor_visible (::GtkTextView* text_view /*none*/, gboolean setting);
void base::TextViewBase::set_cursor_visible (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_cursor_visible;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_text_view_set_editable (GtkTextView* text_view /*none*/, gboolean setting);
// void gtk_text_view_set_editable (::GtkTextView* text_view /*none*/, gboolean setting);
void base::TextViewBase::set_editable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_editable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_text_view_set_extra_menu (GtkTextView* text_view /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_text_view_set_extra_menu (::GtkTextView* text_view /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::TextViewBase::set_extra_menu (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_extra_menu;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::TextViewBase::set_extra_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_extra_menu;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GMenuModel*) (model_to_c));
}

// void gtk_text_view_set_gutter (GtkTextView* text_view /*none*/, GtkTextWindowType win, GtkWidget* widget /*none,nullable*/);
// void gtk_text_view_set_gutter (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win, ::GtkWidget* widget /*none,nullable*/);
void base::TextViewBase::set_gutter (Gtk::TextWindowType win, Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_gutter;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  auto win_to_c = gi::unwrap (win);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c), (::GtkWidget*) (widget_to_c));
}
void base::TextViewBase::set_gutter (Gtk::TextWindowType win) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_gutter;
  auto widget_to_c = nullptr;
  auto win_to_c = gi::unwrap (win);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c), (::GtkWidget*) (widget_to_c));
}

// void gtk_text_view_set_indent (GtkTextView* text_view /*none*/, int indent);
// void gtk_text_view_set_indent (::GtkTextView* text_view /*none*/, gint indent);
void base::TextViewBase::set_indent (gint indent) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint indent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_indent;
  auto indent_to_c = indent;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (indent_to_c));
}

// void gtk_text_view_set_input_hints (GtkTextView* text_view /*none*/, GtkInputHints hints);
// void gtk_text_view_set_input_hints (::GtkTextView* text_view /*none*/, ::GtkInputHints hints);
void base::TextViewBase::set_input_hints (Gtk::InputHints hints) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkInputHints hints);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_input_hints;
  auto hints_to_c = gi::unwrap (hints);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkInputHints) (hints_to_c));
}

// void gtk_text_view_set_input_purpose (GtkTextView* text_view /*none*/, GtkInputPurpose purpose);
// void gtk_text_view_set_input_purpose (::GtkTextView* text_view /*none*/, ::GtkInputPurpose purpose);
void base::TextViewBase::set_input_purpose (Gtk::InputPurpose purpose) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkInputPurpose purpose);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_input_purpose;
  auto purpose_to_c = gi::unwrap (purpose);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkInputPurpose) (purpose_to_c));
}

// void gtk_text_view_set_justification (GtkTextView* text_view /*none*/, GtkJustification justification);
// void gtk_text_view_set_justification (::GtkTextView* text_view /*none*/, ::GtkJustification justification);
void base::TextViewBase::set_justification (Gtk::Justification justification) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkJustification justification);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_justification;
  auto justification_to_c = gi::unwrap (justification);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkJustification) (justification_to_c));
}

// void gtk_text_view_set_left_margin (GtkTextView* text_view /*none*/, int left_margin);
// void gtk_text_view_set_left_margin (::GtkTextView* text_view /*none*/, gint left_margin);
void base::TextViewBase::set_left_margin (gint left_margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint left_margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_left_margin;
  auto left_margin_to_c = left_margin;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (left_margin_to_c));
}

// void gtk_text_view_set_monospace (GtkTextView* text_view /*none*/, gboolean monospace);
// void gtk_text_view_set_monospace (::GtkTextView* text_view /*none*/, gboolean monospace);
void base::TextViewBase::set_monospace (gboolean monospace) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gboolean monospace);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_monospace;
  auto monospace_to_c = monospace;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gboolean) (monospace_to_c));
}

// void gtk_text_view_set_overwrite (GtkTextView* text_view /*none*/, gboolean overwrite);
// void gtk_text_view_set_overwrite (::GtkTextView* text_view /*none*/, gboolean overwrite);
void base::TextViewBase::set_overwrite (gboolean overwrite) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_overwrite;
  auto overwrite_to_c = overwrite;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gboolean) (overwrite_to_c));
}

// void gtk_text_view_set_pixels_above_lines (GtkTextView* text_view /*none*/, int pixels_above_lines);
// void gtk_text_view_set_pixels_above_lines (::GtkTextView* text_view /*none*/, gint pixels_above_lines);
void base::TextViewBase::set_pixels_above_lines (gint pixels_above_lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint pixels_above_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_pixels_above_lines;
  auto pixels_above_lines_to_c = pixels_above_lines;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (pixels_above_lines_to_c));
}

// void gtk_text_view_set_pixels_below_lines (GtkTextView* text_view /*none*/, int pixels_below_lines);
// void gtk_text_view_set_pixels_below_lines (::GtkTextView* text_view /*none*/, gint pixels_below_lines);
void base::TextViewBase::set_pixels_below_lines (gint pixels_below_lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint pixels_below_lines);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_pixels_below_lines;
  auto pixels_below_lines_to_c = pixels_below_lines;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (pixels_below_lines_to_c));
}

// void gtk_text_view_set_pixels_inside_wrap (GtkTextView* text_view /*none*/, int pixels_inside_wrap);
// void gtk_text_view_set_pixels_inside_wrap (::GtkTextView* text_view /*none*/, gint pixels_inside_wrap);
void base::TextViewBase::set_pixels_inside_wrap (gint pixels_inside_wrap) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint pixels_inside_wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_pixels_inside_wrap;
  auto pixels_inside_wrap_to_c = pixels_inside_wrap;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (pixels_inside_wrap_to_c));
}

// void gtk_text_view_set_right_margin (GtkTextView* text_view /*none*/, int right_margin);
// void gtk_text_view_set_right_margin (::GtkTextView* text_view /*none*/, gint right_margin);
void base::TextViewBase::set_right_margin (gint right_margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint right_margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_right_margin;
  auto right_margin_to_c = right_margin;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (right_margin_to_c));
}

// void gtk_text_view_set_tabs (GtkTextView* text_view /*none*/, PangoTabArray* tabs /*none*/);
// void gtk_text_view_set_tabs (::GtkTextView* text_view /*none*/, ::PangoTabArray* tabs /*none*/);
void base::TextViewBase::set_tabs (Pango::TabArray_Ref tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_tabs;
  auto tabs_to_c = gi::unwrap (tabs, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}

// void gtk_text_view_set_top_margin (GtkTextView* text_view /*none*/, int top_margin);
// void gtk_text_view_set_top_margin (::GtkTextView* text_view /*none*/, gint top_margin);
void base::TextViewBase::set_top_margin (gint top_margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, gint top_margin);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_top_margin;
  auto top_margin_to_c = top_margin;
  call_wrap_v ((::GtkTextView*) (gobj_()), (gint) (top_margin_to_c));
}

// void gtk_text_view_set_wrap_mode (GtkTextView* text_view /*none*/, GtkWrapMode wrap_mode);
// void gtk_text_view_set_wrap_mode (::GtkTextView* text_view /*none*/, ::GtkWrapMode wrap_mode);
void base::TextViewBase::set_wrap_mode (Gtk::WrapMode wrap_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkWrapMode wrap_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_set_wrap_mode;
  auto wrap_mode_to_c = gi::unwrap (wrap_mode);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkWrapMode) (wrap_mode_to_c));
}

// gboolean gtk_text_view_starts_display_line (GtkTextView* text_view /*none*/, const GtkTextIter* iter /*none*/);
// gboolean gtk_text_view_starts_display_line (::GtkTextView* text_view /*none*/, const ::GtkTextIter* iter /*none*/);
bool base::TextViewBase::starts_display_line (const Gtk::TextIter_Ref iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, const ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_starts_display_line;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (const ::GtkTextIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_text_view_window_to_buffer_coords (GtkTextView* text_view /*none*/, GtkTextWindowType win, int window_x, int window_y, int* buffer_x, int* buffer_y);
// void gtk_text_view_window_to_buffer_coords (::GtkTextView* text_view /*none*/, ::GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y);
void base::TextViewBase::window_to_buffer_coords (Gtk::TextWindowType win, gint window_x, gint window_y, gint * buffer_x, gint * buffer_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_window_to_buffer_coords;
  gint buffer_y_o {};
  gint buffer_x_o {};
  auto window_y_to_c = window_y;
  auto window_x_to_c = window_x;
  auto win_to_c = gi::unwrap (win);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c), (gint) (window_x_to_c), (gint) (window_y_to_c), (gint*) (buffer_x ? &buffer_x_o : nullptr), (gint*) (buffer_y ? &buffer_y_o : nullptr));
  if (buffer_y) *buffer_y = buffer_y_o;
  if (buffer_x) *buffer_x = buffer_x_o;
}
std::tuple<gint, gint> base::TextViewBase::window_to_buffer_coords (Gtk::TextWindowType win, gint window_x, gint window_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_view_window_to_buffer_coords;
  gint buffer_y_o {};
  gint buffer_x_o {};
  auto window_y_to_c = window_y;
  auto window_x_to_c = window_x;
  auto win_to_c = gi::unwrap (win);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextWindowType) (win_to_c), (gint) (window_x_to_c), (gint) (window_y_to_c), (gint*) (&buffer_x_o), (gint*) (&buffer_y_o));
  auto &&tmp_return_1 = buffer_x_o;
  auto &&tmp_return_2 = buffer_y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

















} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textview_extra_def_impl.hpp>)
#include <gtk/textview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textview_extra_impl.hpp>)
#include <gtk/textview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextViewClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTextViewClass *methods = (::GtkTextViewClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.backspace) methods->backspace = (decltype (methods->backspace)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::backspace_>;
  if (init_data.copy_clipboard) methods->copy_clipboard = (decltype (methods->copy_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::copy_clipboard_>;
  if (init_data.cut_clipboard) methods->cut_clipboard = (decltype (methods->cut_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::cut_clipboard_>;
  if (init_data.delete_from_cursor) methods->delete_from_cursor = (decltype (methods->delete_from_cursor)) detail::method_wrapper<self, void (*) (Gtk::DeleteType type, gint count), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::delete_from_cursor_>;
  if (init_data.extend_selection) methods->extend_selection = (decltype (methods->extend_selection)) detail::method_wrapper<self, bool (*) (Gtk::TextExtendSelection granularity, const Gtk::TextIter_Ref location, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::extend_selection_>;
  if (init_data.insert_at_cursor) methods->insert_at_cursor = (decltype (methods->insert_at_cursor)) detail::method_wrapper<self, void (*) (const gi::cstring_v str), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::insert_at_cursor_>;
  if (init_data.insert_emoji) methods->insert_emoji = (decltype (methods->insert_emoji)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::insert_emoji_>;
  if (init_data.move_cursor) methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, void (*) (Gtk::MovementStep step, gint count, gboolean extend_selection), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::move_cursor_>;
  if (init_data.paste_clipboard) methods->paste_clipboard = (decltype (methods->paste_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::paste_clipboard_>;
  if (init_data.set_anchor) methods->set_anchor = (decltype (methods->set_anchor)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::set_anchor_>;
  if (init_data.toggle_overwrite) methods->toggle_overwrite = (decltype (methods->toggle_overwrite)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::toggle_overwrite_>;
}

// void TextView::backspace (GtkTextView* text_view /*none*/);
// void TextView::backspace (::GtkTextView* text_view /*none*/);
void TextViewClass::backspace_ () noexcept
{
  if (!get_struct_()->backspace) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->backspace;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void TextView::copy_clipboard (GtkTextView* text_view /*none*/);
// void TextView::copy_clipboard (::GtkTextView* text_view /*none*/);
void TextViewClass::copy_clipboard_ () noexcept
{
  if (!get_struct_()->copy_clipboard) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_clipboard;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void TextView::cut_clipboard (GtkTextView* text_view /*none*/);
// void TextView::cut_clipboard (::GtkTextView* text_view /*none*/);
void TextViewClass::cut_clipboard_ () noexcept
{
  if (!get_struct_()->cut_clipboard) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cut_clipboard;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void TextView::delete_from_cursor (GtkTextView* text_view /*none*/, GtkDeleteType type, int count);
// void TextView::delete_from_cursor (::GtkTextView* text_view /*none*/, ::GtkDeleteType type, gint count);
void TextViewClass::delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept
{
  if (!get_struct_()->delete_from_cursor) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkDeleteType type, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_from_cursor;
  auto count_to_c = count;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkDeleteType) (type_to_c), (gint) (count_to_c));
}

// gboolean TextView::extend_selection (GtkTextView* text_view /*none*/, GtkTextExtendSelection granularity, const GtkTextIter* location /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// gboolean TextView::extend_selection (::GtkTextView* text_view /*none*/, ::GtkTextExtendSelection granularity, const ::GtkTextIter* location /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
bool TextViewClass::extend_selection_ (Gtk::TextExtendSelection granularity, const Gtk::TextIter_Ref location, Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept
{
  if (!get_struct_()->extend_selection) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkTextView* text_view, ::GtkTextExtendSelection granularity, const ::GtkTextIter* location, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->extend_selection;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto location_to_c = gi::unwrap (location, gi::transfer_none);
  auto granularity_to_c = gi::unwrap (granularity);
  auto _temp_ret = call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkTextExtendSelection) (granularity_to_c), (const ::GtkTextIter*) (location_to_c), (::GtkTextIter*) (start_to_c), (::GtkTextIter*) (end_to_c));
  return _temp_ret;
}

// void TextView::insert_at_cursor (GtkTextView* text_view /*none*/, const char* str /*none*/);
// void TextView::insert_at_cursor (::GtkTextView* text_view /*none*/, const char* str /*none*/);
void TextViewClass::insert_at_cursor_ (const gi::cstring_v str) noexcept
{
  if (!get_struct_()->insert_at_cursor) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_at_cursor;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkTextView*) (gobj_()), (const char*) (str_to_c));
}

// void TextView::insert_emoji (GtkTextView* text_view /*none*/);
// void TextView::insert_emoji (::GtkTextView* text_view /*none*/);
void TextViewClass::insert_emoji_ () noexcept
{
  if (!get_struct_()->insert_emoji) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_emoji;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void TextView::move_cursor (GtkTextView* text_view /*none*/, GtkMovementStep step, int count, gboolean extend_selection);
// void TextView::move_cursor (::GtkTextView* text_view /*none*/, ::GtkMovementStep step, gint count, gboolean extend_selection);
void TextViewClass::move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept
{
  if (!get_struct_()->move_cursor) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view, ::GtkMovementStep step, gint count, gboolean extend_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto extend_selection_to_c = extend_selection;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  call_wrap_v ((::GtkTextView*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c), (gboolean) (extend_selection_to_c));
}

// void TextView::paste_clipboard (GtkTextView* text_view /*none*/);
// void TextView::paste_clipboard (::GtkTextView* text_view /*none*/);
void TextViewClass::paste_clipboard_ () noexcept
{
  if (!get_struct_()->paste_clipboard) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->paste_clipboard;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void TextView::set_anchor (GtkTextView* text_view /*none*/);
// void TextView::set_anchor (::GtkTextView* text_view /*none*/);
void TextViewClass::set_anchor_ () noexcept
{
  if (!get_struct_()->set_anchor) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_anchor;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

// void TextView::snapshot_layer (GtkTextView* text_view /*none*/, GtkTextViewLayer layer, GtkSnapshot* snapshot /*none*/);
// void TextView::snapshot_layer (::GtkTextView* text_view /*none*/, ::GtkTextViewLayer layer,  snapshot /*none*/);
// SKIP; snapshot type  not supported

// void TextView::toggle_overwrite (GtkTextView* text_view /*none*/);
// void TextView::toggle_overwrite (::GtkTextView* text_view /*none*/);
void TextViewClass::toggle_overwrite_ () noexcept
{
  if (!get_struct_()->toggle_overwrite) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextView* text_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_overwrite;
  call_wrap_v ((::GtkTextView*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
