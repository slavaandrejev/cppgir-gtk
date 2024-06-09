// AUTO-GENERATED

#ifndef _GI_GTK_TEXTBUFFER_IMPL_HPP_
#define _GI_GTK_TEXTBUFFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextBuffer* /*full*/ gtk_text_buffer_new (GtkTextTagTable* table /*none,nullable*/);
// ::GtkTextBuffer* /*full*/ gtk_text_buffer_new (::GtkTextTagTable* table /*none,nullable*/);
Gtk::TextBuffer base::TextBufferBase::new_ (Gtk::TextTagTable table) noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (::GtkTextTagTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_new;
  auto table_to_c = gi::unwrap (table, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (table_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::TextBuffer base::TextBufferBase::new_ () noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (::GtkTextTagTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_buffer_new;
  auto table_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (table_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_text_buffer_add_mark (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_add_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/, const ::GtkTextIter* where /*none*/);
void base::TextBufferBase::add_mark (Gtk::TextMark mark, const Gtk::TextIter_Ref where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_add_mark;
  auto where_to_c = gi::unwrap (where, gi::transfer_none);
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_add_selection_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void gtk_text_buffer_add_selection_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
void base::TextBufferBase::add_selection_clipboard (Gdk::Clipboard clipboard) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_add_selection_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c));
}

// void gtk_text_buffer_apply_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_apply_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void base::TextBufferBase::apply_tag (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_apply_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_apply_tag_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_apply_tag_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void base::TextBufferBase::apply_tag_by_name (const gi::cstring_v name, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_apply_tag_by_name;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// gboolean gtk_text_buffer_backspace (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_backspace (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, gboolean interactive, gboolean default_editable);
bool base::TextBufferBase::backspace (Gtk::TextIter_Ref iter, gboolean interactive, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gboolean interactive, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_backspace;
  auto default_editable_to_c = default_editable;
  auto interactive_to_c = interactive;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (gboolean) (interactive_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_begin_irreversible_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_begin_irreversible_action (::GtkTextBuffer* buffer /*none*/);
void base::TextBufferBase::begin_irreversible_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_begin_irreversible_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_begin_user_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_begin_user_action (::GtkTextBuffer* buffer /*none*/);
void base::TextBufferBase::begin_user_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_begin_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_copy_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void gtk_text_buffer_copy_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
void base::TextBufferBase::copy_clipboard (Gdk::Clipboard clipboard) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_copy_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c));
}

// GtkTextChildAnchor* /*none*/ gtk_text_buffer_create_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/);
// ::GtkTextChildAnchor* /*none*/ gtk_text_buffer_create_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/);
Gtk::TextChildAnchor base::TextBufferBase::create_child_anchor (Gtk::TextIter_Ref iter) noexcept
{
  typedef ::GtkTextChildAnchor* (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_create_child_anchor;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkTextMark* /*none*/ gtk_text_buffer_create_mark (GtkTextBuffer* buffer /*none*/, const char* mark_name /*none,nullable*/, const GtkTextIter* where /*none*/, gboolean left_gravity);
// ::GtkTextMark* /*none*/ gtk_text_buffer_create_mark (::GtkTextBuffer* buffer /*none*/, const char* mark_name /*none,nullable*/, const ::GtkTextIter* where /*none*/, gboolean left_gravity);
Gtk::TextMark base::TextBufferBase::create_mark (const gi::cstring_v mark_name, const Gtk::TextIter_Ref where, gboolean left_gravity) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer, const char* mark_name, const ::GtkTextIter* where, gboolean left_gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_create_mark;
  auto left_gravity_to_c = left_gravity;
  auto where_to_c = gi::unwrap (where, gi::transfer_none);
  auto mark_name_to_c = gi::unwrap (mark_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (mark_name_to_c), (const ::GtkTextIter*) (where_to_c), (gboolean) (left_gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::TextMark base::TextBufferBase::create_mark (const Gtk::TextIter_Ref where, gboolean left_gravity) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer, const char* mark_name, const ::GtkTextIter* where, gboolean left_gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_create_mark;
  auto left_gravity_to_c = left_gravity;
  auto where_to_c = gi::unwrap (where, gi::transfer_none);
  auto mark_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (mark_name_to_c), (const ::GtkTextIter*) (where_to_c), (gboolean) (left_gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkTextTag* /*none*/ gtk_text_buffer_create_tag (GtkTextBuffer* buffer /*none*/, const char* tag_name /*none,nullable*/, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// ::GtkTextTag* /*none*/ gtk_text_buffer_create_tag (::GtkTextBuffer* buffer /*none*/, const char* tag_name /*none,nullable*/, const char* first_property_name /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_cut_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/, gboolean default_editable);
// void gtk_text_buffer_cut_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/, gboolean default_editable);
void base::TextBufferBase::cut_clipboard (Gdk::Clipboard clipboard, gboolean default_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_cut_clipboard;
  auto default_editable_to_c = default_editable;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c), (gboolean) (default_editable_to_c));
}

// void gtk_text_buffer_delete (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// void gtk_text_buffer_delete (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
void base::TextBufferBase::delete_ (Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_delete;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start_to_c), (::GtkTextIter*) (end_to_c));
}

// gboolean gtk_text_buffer_delete_interactive (GtkTextBuffer* buffer /*none*/, GtkTextIter* start_iter /*none*/, GtkTextIter* end_iter /*none*/, gboolean default_editable);
// gboolean gtk_text_buffer_delete_interactive (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start_iter /*none*/, ::GtkTextIter* end_iter /*none*/, gboolean default_editable);
bool base::TextBufferBase::delete_interactive (Gtk::TextIter_Ref start_iter, Gtk::TextIter_Ref end_iter, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start_iter, ::GtkTextIter* end_iter, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_delete_interactive;
  auto default_editable_to_c = default_editable;
  auto end_iter_to_c = gi::unwrap (end_iter, gi::transfer_none);
  auto start_iter_to_c = gi::unwrap (start_iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start_iter_to_c), (::GtkTextIter*) (end_iter_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_delete_mark (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/);
// void gtk_text_buffer_delete_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/);
void base::TextBufferBase::delete_mark (Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_delete_mark;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c));
}

// void gtk_text_buffer_delete_mark_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
// void gtk_text_buffer_delete_mark_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
void base::TextBufferBase::delete_mark_by_name (const gi::cstring_v name) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_delete_mark_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c));
}

// gboolean gtk_text_buffer_delete_selection (GtkTextBuffer* buffer /*none*/, gboolean interactive, gboolean default_editable);
// gboolean gtk_text_buffer_delete_selection (::GtkTextBuffer* buffer /*none*/, gboolean interactive, gboolean default_editable);
bool base::TextBufferBase::delete_selection (gboolean interactive, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_delete_selection;
  auto default_editable_to_c = default_editable;
  auto interactive_to_c = interactive;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (gboolean) (interactive_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_end_irreversible_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_end_irreversible_action (::GtkTextBuffer* buffer /*none*/);
void base::TextBufferBase::end_irreversible_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_end_irreversible_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_end_user_action (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_end_user_action (::GtkTextBuffer* buffer /*none*/);
void base::TextBufferBase::end_user_action () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_end_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_get_bounds (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none,out,ca*/, GtkTextIter* end /*none,out,ca*/);
// void gtk_text_buffer_get_bounds (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none,out,ca*/, ::GtkTextIter* end /*none,out,ca*/);
void base::TextBufferBase::get_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_bounds;
  detail::allocate(end);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(end).gobj_()), "");
  detail::allocate(start);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(start).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (start).gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (end).gobj_()));
}
std::tuple<Gtk::TextIter, Gtk::TextIter> base::TextBufferBase::get_bounds () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_bounds;
  Gtk::TextIter end_c;
  auto end = &end_c;
  detail::allocate(*end);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*end).gobj_()), "");
  Gtk::TextIter start_c;
  auto start = &start_c;
  detail::allocate(*start);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*start).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start ? (::GtkTextIter*) (*start).gobj_() : nullptr), (::GtkTextIter*) (end ? (::GtkTextIter*) (*end).gobj_() : nullptr));
  auto &&tmp_return_1 = start_c;
  auto &&tmp_return_2 = end_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_buffer_get_can_redo (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_can_redo (::GtkTextBuffer* buffer /*none*/);
bool base::TextBufferBase::get_can_redo () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_can_redo;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_buffer_get_can_undo (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_can_undo (::GtkTextBuffer* buffer /*none*/);
bool base::TextBufferBase::get_can_undo () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_can_undo;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_buffer_get_char_count (GtkTextBuffer* buffer /*none*/);
// gint gtk_text_buffer_get_char_count (::GtkTextBuffer* buffer /*none*/);
gint base::TextBufferBase::get_char_count () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_char_count;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_buffer_get_enable_undo (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_enable_undo (::GtkTextBuffer* buffer /*none*/);
bool base::TextBufferBase::get_enable_undo () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_enable_undo;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_buffer_get_end_iter (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/);
// void gtk_text_buffer_get_end_iter (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/);
void base::TextBufferBase::get_end_iter (Gtk::TextIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_end_iter;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()));
}
Gtk::TextIter base::TextBufferBase::get_end_iter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_end_iter;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr));
  return iter_c;
}

// gboolean gtk_text_buffer_get_has_selection (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_has_selection (::GtkTextBuffer* buffer /*none*/);
bool base::TextBufferBase::get_has_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_has_selection;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTextMark* /*none*/ gtk_text_buffer_get_insert (GtkTextBuffer* buffer /*none*/);
// ::GtkTextMark* /*none*/ gtk_text_buffer_get_insert (::GtkTextBuffer* buffer /*none*/);
Gtk::TextMark base::TextBufferBase::get_insert () noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_insert;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_text_buffer_get_iter_at_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, GtkTextChildAnchor* anchor /*none*/);
// void gtk_text_buffer_get_iter_at_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, ::GtkTextChildAnchor* anchor /*none*/);
void base::TextBufferBase::get_iter_at_child_anchor (Gtk::TextIter & iter, Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (::GtkTextChildAnchor*) (anchor_to_c));
}
Gtk::TextIter base::TextBufferBase::get_iter_at_child_anchor (Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none);
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (::GtkTextChildAnchor*) (anchor_to_c));
  return iter_c;
}

// gboolean gtk_text_buffer_get_iter_at_line (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int line_number);
// gboolean gtk_text_buffer_get_iter_at_line (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint line_number);
bool base::TextBufferBase::get_iter_at_line (Gtk::TextIter & iter, gint line_number) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_line;
  auto line_number_to_c = line_number;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (gint) (line_number_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter> base::TextBufferBase::get_iter_at_line (gint line_number) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_line;
  auto line_number_to_c = line_number;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (gint) (line_number_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_buffer_get_iter_at_line_index (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int line_number, int byte_index);
// gboolean gtk_text_buffer_get_iter_at_line_index (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint line_number, gint byte_index);
bool base::TextBufferBase::get_iter_at_line_index (Gtk::TextIter & iter, gint line_number, gint byte_index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint byte_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_line_index;
  auto byte_index_to_c = byte_index;
  auto line_number_to_c = line_number;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (gint) (line_number_to_c), (gint) (byte_index_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter> base::TextBufferBase::get_iter_at_line_index (gint line_number, gint byte_index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint byte_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_line_index;
  auto byte_index_to_c = byte_index;
  auto line_number_to_c = line_number;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (gint) (line_number_to_c), (gint) (byte_index_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_buffer_get_iter_at_line_offset (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int line_number, int char_offset);
// gboolean gtk_text_buffer_get_iter_at_line_offset (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint line_number, gint char_offset);
bool base::TextBufferBase::get_iter_at_line_offset (Gtk::TextIter & iter, gint line_number, gint char_offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_line_offset;
  auto char_offset_to_c = char_offset;
  auto line_number_to_c = line_number;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (gint) (line_number_to_c), (gint) (char_offset_to_c));
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter> base::TextBufferBase::get_iter_at_line_offset (gint line_number, gint char_offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint line_number, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_line_offset;
  auto char_offset_to_c = char_offset;
  auto line_number_to_c = line_number;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (gint) (line_number_to_c), (gint) (char_offset_to_c));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = iter_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_text_buffer_get_iter_at_mark (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, GtkTextMark* mark /*none*/);
// void gtk_text_buffer_get_iter_at_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, ::GtkTextMark* mark /*none*/);
void base::TextBufferBase::get_iter_at_mark (Gtk::TextIter & iter, Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_mark;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (::GtkTextMark*) (mark_to_c));
}
Gtk::TextIter base::TextBufferBase::get_iter_at_mark (Gtk::TextMark mark) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_mark;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (::GtkTextMark*) (mark_to_c));
  return iter_c;
}

// void gtk_text_buffer_get_iter_at_offset (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/, int char_offset);
// void gtk_text_buffer_get_iter_at_offset (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/, gint char_offset);
void base::TextBufferBase::get_iter_at_offset (Gtk::TextIter & iter, gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_offset;
  auto char_offset_to_c = char_offset;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()), (gint) (char_offset_to_c));
}
Gtk::TextIter base::TextBufferBase::get_iter_at_offset (gint char_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, gint char_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_iter_at_offset;
  auto char_offset_to_c = char_offset;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr), (gint) (char_offset_to_c));
  return iter_c;
}

// int gtk_text_buffer_get_line_count (GtkTextBuffer* buffer /*none*/);
// gint gtk_text_buffer_get_line_count (::GtkTextBuffer* buffer /*none*/);
gint base::TextBufferBase::get_line_count () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_line_count;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTextMark* /*none,nullable*/ gtk_text_buffer_get_mark (GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
// ::GtkTextMark* /*none,nullable*/ gtk_text_buffer_get_mark (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/);
Gtk::TextMark base::TextBufferBase::get_mark (const gi::cstring_v name) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_mark;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint gtk_text_buffer_get_max_undo_levels (GtkTextBuffer* buffer /*none*/);
// guint gtk_text_buffer_get_max_undo_levels (::GtkTextBuffer* buffer /*none*/);
guint base::TextBufferBase::get_max_undo_levels () noexcept
{
  typedef guint (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_max_undo_levels;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_buffer_get_modified (GtkTextBuffer* buffer /*none*/);
// gboolean gtk_text_buffer_get_modified (::GtkTextBuffer* buffer /*none*/);
bool base::TextBufferBase::get_modified () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_modified;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return _temp_ret;
}

// GtkTextMark* /*none*/ gtk_text_buffer_get_selection_bound (GtkTextBuffer* buffer /*none*/);
// ::GtkTextMark* /*none*/ gtk_text_buffer_get_selection_bound (::GtkTextBuffer* buffer /*none*/);
Gtk::TextMark base::TextBufferBase::get_selection_bound () noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_selection_bound;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_text_buffer_get_selection_bounds (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none,out,ca*/, GtkTextIter* end /*none,out,ca*/);
// gboolean gtk_text_buffer_get_selection_bounds (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none,out,ca*/, ::GtkTextIter* end /*none,out,ca*/);
bool base::TextBufferBase::get_selection_bounds (Gtk::TextIter & start, Gtk::TextIter & end) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_selection_bounds;
  detail::allocate(end);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(end).gobj_()), "");
  detail::allocate(start);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(start).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (start).gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (end).gobj_()));
  return _temp_ret;
}
std::tuple<bool, Gtk::TextIter, Gtk::TextIter> base::TextBufferBase::get_selection_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_selection_bounds;
  Gtk::TextIter end_c;
  auto end = &end_c;
  detail::allocate(*end);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*end).gobj_()), "");
  Gtk::TextIter start_c;
  auto start = &start_c;
  detail::allocate(*start);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*start).gobj_()), "");
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start ? (::GtkTextIter*) (*start).gobj_() : nullptr), (::GtkTextIter*) (end ? (::GtkTextIter*) (*end).gobj_() : nullptr));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = start_c;
  auto &&tmp_return_3 = end_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// GdkContentProvider* /*full*/ gtk_text_buffer_get_selection_content (GtkTextBuffer* buffer /*none*/);
// ::GdkContentProvider* /*full*/ gtk_text_buffer_get_selection_content (::GtkTextBuffer* buffer /*none*/);
Gdk::ContentProvider base::TextBufferBase::get_selection_content () noexcept
{
  typedef ::GdkContentProvider* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_selection_content;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ gtk_text_buffer_get_slice (GtkTextBuffer* buffer /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/, gboolean include_hidden_chars);
// char* /*full*/ gtk_text_buffer_get_slice (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/, gboolean include_hidden_chars);
gi::cstring base::TextBufferBase::get_slice (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end, gboolean include_hidden_chars) noexcept
{
  typedef char* (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_slice;
  auto include_hidden_chars_to_c = include_hidden_chars;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c), (gboolean) (include_hidden_chars_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_text_buffer_get_start_iter (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none,out,ca*/);
// void gtk_text_buffer_get_start_iter (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none,out,ca*/);
void base::TextBufferBase::get_start_iter (Gtk::TextIter & iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_start_iter;
  detail::allocate(iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) ((::GtkTextIter*) (iter).gobj_()));
}
Gtk::TextIter base::TextBufferBase::get_start_iter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_start_iter;
  Gtk::TextIter iter_c;
  auto iter = &iter_c;
  detail::allocate(*iter);
  static_assert(sizeof(::GtkTextIter) == sizeof(*(*iter).gobj_()), "");
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter ? (::GtkTextIter*) (*iter).gobj_() : nullptr));
  return iter_c;
}

// GtkTextTagTable* /*none*/ gtk_text_buffer_get_tag_table (GtkTextBuffer* buffer /*none*/);
// ::GtkTextTagTable* /*none*/ gtk_text_buffer_get_tag_table (::GtkTextBuffer* buffer /*none*/);
Gtk::TextTagTable base::TextBufferBase::get_tag_table () noexcept
{
  typedef ::GtkTextTagTable* (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_tag_table;
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// char* /*full*/ gtk_text_buffer_get_text (GtkTextBuffer* buffer /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/, gboolean include_hidden_chars);
// char* /*full*/ gtk_text_buffer_get_text (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/, gboolean include_hidden_chars);
gi::cstring base::TextBufferBase::get_text (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end, gboolean include_hidden_chars) noexcept
{
  typedef char* (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean include_hidden_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_get_text;
  auto include_hidden_chars_to_c = include_hidden_chars;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c), (gboolean) (include_hidden_chars_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gtk_text_buffer_insert (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len);
// void gtk_text_buffer_insert (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len);
void base::TextBufferBase::insert (Gtk::TextIter_Ref iter, const gi::cstring_v text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const char*) (text_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_insert_at_cursor (GtkTextBuffer* buffer /*none*/, const char* text /*none*/, int len);
// void gtk_text_buffer_insert_at_cursor (::GtkTextBuffer* buffer /*none*/, const char* text /*none*/, gint len);
void base::TextBufferBase::insert_at_cursor (const gi::cstring_v text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_at_cursor;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_insert_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void gtk_text_buffer_insert_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
void base::TextBufferBase::insert_child_anchor (Gtk::TextIter_Ref iter, Gtk::TextChildAnchor anchor) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GtkTextChildAnchor*) (anchor_to_c));
}

// gboolean gtk_text_buffer_insert_interactive (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len, gboolean default_editable);
bool base::TextBufferBase::insert_interactive (Gtk::TextIter_Ref iter, const gi::cstring_v text, gint len, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* text, gint len, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_interactive;
  auto default_editable_to_c = default_editable;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const char*) (text_to_c), (gint) (len_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// gboolean gtk_text_buffer_insert_interactive_at_cursor (GtkTextBuffer* buffer /*none*/, const char* text /*none*/, int len, gboolean default_editable);
// gboolean gtk_text_buffer_insert_interactive_at_cursor (::GtkTextBuffer* buffer /*none*/, const char* text /*none*/, gint len, gboolean default_editable);
bool base::TextBufferBase::insert_interactive_at_cursor (const gi::cstring_v text, gint len, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, const char* text, gint len, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_interactive_at_cursor;
  auto default_editable_to_c = default_editable;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_insert_markup (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* markup /*none*/, int len);
// void gtk_text_buffer_insert_markup (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* markup /*none*/, gint len);
void base::TextBufferBase::insert_markup (Gtk::TextIter_Ref iter, const gi::cstring_v markup, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const char* markup, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_markup;
  auto len_to_c = len;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const char*) (markup_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_insert_paintable (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GdkPaintable* paintable /*none*/);
// void gtk_text_buffer_insert_paintable (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GdkPaintable* paintable /*none*/);
void base::TextBufferBase::insert_paintable (Gtk::TextIter_Ref iter, Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GdkPaintable*) (paintable_to_c));
}

// void gtk_text_buffer_insert_range (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_insert_range (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void base::TextBufferBase::insert_range (Gtk::TextIter_Ref iter, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_range;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// gboolean gtk_text_buffer_insert_range_interactive (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/, gboolean default_editable);
// gboolean gtk_text_buffer_insert_range_interactive (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/, gboolean default_editable);
bool base::TextBufferBase::insert_range_interactive (Gtk::TextIter_Ref iter, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end, gboolean default_editable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, const ::GtkTextIter* start, const ::GtkTextIter* end, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_insert_range_interactive;
  auto default_editable_to_c = default_editable;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c), (gboolean) (default_editable_to_c));
  return _temp_ret;
}

// void gtk_text_buffer_insert_with_tags (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len, GtkTextTag* first_tag /*none*/,  ..._ /*none*/);
// void gtk_text_buffer_insert_with_tags (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len, ::GtkTextTag* first_tag /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_insert_with_tags_by_name (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, const char* text /*none*/, int len, const char* first_tag_name /*none*/,  ..._ /*none*/);
// void gtk_text_buffer_insert_with_tags_by_name (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, const char* text /*none*/, gint len, const char* first_tag_name /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_text_buffer_move_mark (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_move_mark (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/, const ::GtkTextIter* where /*none*/);
void base::TextBufferBase::move_mark (Gtk::TextMark mark, const Gtk::TextIter_Ref where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_move_mark;
  auto where_to_c = gi::unwrap (where, gi::transfer_none);
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_move_mark_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_move_mark_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const ::GtkTextIter* where /*none*/);
void base::TextBufferBase::move_mark_by_name (const gi::cstring_v name, const Gtk::TextIter_Ref where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_move_mark_by_name;
  auto where_to_c = gi::unwrap (where, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_paste_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/, GtkTextIter* override_location /*none,nullable*/, gboolean default_editable);
// void gtk_text_buffer_paste_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/, ::GtkTextIter* override_location /*none,nullable*/, gboolean default_editable);
void base::TextBufferBase::paste_clipboard (Gdk::Clipboard clipboard, Gtk::TextIter_Ref override_location, gboolean default_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard, ::GtkTextIter* override_location, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_paste_clipboard;
  auto default_editable_to_c = default_editable;
  auto override_location_to_c = gi::unwrap (override_location, gi::transfer_none);
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c), (::GtkTextIter*) (override_location_to_c), (gboolean) (default_editable_to_c));
}
void base::TextBufferBase::paste_clipboard (Gdk::Clipboard clipboard, gboolean default_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard, ::GtkTextIter* override_location, gboolean default_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_paste_clipboard;
  auto default_editable_to_c = default_editable;
  auto override_location_to_c = nullptr;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c), (::GtkTextIter*) (override_location_to_c), (gboolean) (default_editable_to_c));
}

// void gtk_text_buffer_place_cursor (GtkTextBuffer* buffer /*none*/, const GtkTextIter* where /*none*/);
// void gtk_text_buffer_place_cursor (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* where /*none*/);
void base::TextBufferBase::place_cursor (const Gtk::TextIter_Ref where) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* where);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_place_cursor;
  auto where_to_c = gi::unwrap (where, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (where_to_c));
}

// void gtk_text_buffer_redo (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_redo (::GtkTextBuffer* buffer /*none*/);
void base::TextBufferBase::redo () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_redo;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void gtk_text_buffer_remove_all_tags (GtkTextBuffer* buffer /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_remove_all_tags (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void base::TextBufferBase::remove_all_tags (const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_remove_all_tags;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_remove_selection_clipboard (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void gtk_text_buffer_remove_selection_clipboard (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
void base::TextBufferBase::remove_selection_clipboard (Gdk::Clipboard clipboard) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_remove_selection_clipboard;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c));
}

// void gtk_text_buffer_remove_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_remove_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void base::TextBufferBase::remove_tag (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_remove_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_remove_tag_by_name (GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void gtk_text_buffer_remove_tag_by_name (::GtkTextBuffer* buffer /*none*/, const char* name /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void base::TextBufferBase::remove_tag_by_name (const gi::cstring_v name, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* name, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_remove_tag_by_name;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (name_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void gtk_text_buffer_select_range (GtkTextBuffer* buffer /*none*/, const GtkTextIter* ins /*none*/, const GtkTextIter* bound /*none*/);
// void gtk_text_buffer_select_range (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* ins /*none*/, const ::GtkTextIter* bound /*none*/);
void base::TextBufferBase::select_range (const Gtk::TextIter_Ref ins, const Gtk::TextIter_Ref bound) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* ins, const ::GtkTextIter* bound);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_select_range;
  auto bound_to_c = gi::unwrap (bound, gi::transfer_none);
  auto ins_to_c = gi::unwrap (ins, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (ins_to_c), (const ::GtkTextIter*) (bound_to_c));
}

// void gtk_text_buffer_set_enable_undo (GtkTextBuffer* buffer /*none*/, gboolean enable_undo);
// void gtk_text_buffer_set_enable_undo (::GtkTextBuffer* buffer /*none*/, gboolean enable_undo);
void base::TextBufferBase::set_enable_undo (gboolean enable_undo) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, gboolean enable_undo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_set_enable_undo;
  auto enable_undo_to_c = enable_undo;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (gboolean) (enable_undo_to_c));
}

// void gtk_text_buffer_set_max_undo_levels (GtkTextBuffer* buffer /*none*/, guint max_undo_levels);
// void gtk_text_buffer_set_max_undo_levels (::GtkTextBuffer* buffer /*none*/, guint max_undo_levels);
void base::TextBufferBase::set_max_undo_levels (guint max_undo_levels) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, guint max_undo_levels);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_set_max_undo_levels;
  auto max_undo_levels_to_c = max_undo_levels;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (guint) (max_undo_levels_to_c));
}

// void gtk_text_buffer_set_modified (GtkTextBuffer* buffer /*none*/, gboolean setting);
// void gtk_text_buffer_set_modified (::GtkTextBuffer* buffer /*none*/, gboolean setting);
void base::TextBufferBase::set_modified (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_set_modified;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_text_buffer_set_text (GtkTextBuffer* buffer /*none*/, const char* text /*none*/, int len);
// void gtk_text_buffer_set_text (::GtkTextBuffer* buffer /*none*/, const char* text /*none*/, gint len);
void base::TextBufferBase::set_text (const gi::cstring_v text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_set_text;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c));
}

// void gtk_text_buffer_undo (GtkTextBuffer* buffer /*none*/);
// void gtk_text_buffer_undo (::GtkTextBuffer* buffer /*none*/);
void base::TextBufferBase::undo () noexcept
{
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_buffer_undo;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

















} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra_def_impl.hpp>)
#include <gtk/textbuffer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textbuffer_extra_impl.hpp>)
#include <gtk/textbuffer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextBufferClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkTextBufferClass *methods = (::GtkTextBufferClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.apply_tag) methods->apply_tag = (decltype (methods->apply_tag)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::apply_tag_>;
  if (init_data.begin_user_action) methods->begin_user_action = (decltype (methods->begin_user_action)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::begin_user_action_>;
  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.delete_range) methods->delete_range = (decltype (methods->delete_range)) detail::method_wrapper<self, void (*) (Gtk::TextIter_Ref start, Gtk::TextIter_Ref end), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::delete_range_>;
  if (init_data.end_user_action) methods->end_user_action = (decltype (methods->end_user_action)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::end_user_action_>;
  if (init_data.insert_child_anchor) methods->insert_child_anchor = (decltype (methods->insert_child_anchor)) detail::method_wrapper<self, void (*) (Gtk::TextIter_Ref iter, Gtk::TextChildAnchor anchor), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::insert_child_anchor_>;
  if (init_data.insert_paintable) methods->insert_paintable = (decltype (methods->insert_paintable)) detail::method_wrapper<self, void (*) (Gtk::TextIter_Ref iter, Gdk::Paintable paintable), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::insert_paintable_>;
  if (init_data.insert_text) methods->insert_text = (decltype (methods->insert_text)) detail::method_wrapper<self, void (*) (Gtk::TextIter_Ref pos, const gi::cstring_v new_text, gint new_text_length), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::insert_text_>;
  if (init_data.mark_deleted) methods->mark_deleted = (decltype (methods->mark_deleted)) detail::method_wrapper<self, void (*) (Gtk::TextMark mark), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::mark_deleted_>;
  if (init_data.mark_set) methods->mark_set = (decltype (methods->mark_set)) detail::method_wrapper<self, void (*) (const Gtk::TextIter_Ref location, Gtk::TextMark mark), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::mark_set_>;
  if (init_data.modified_changed) methods->modified_changed = (decltype (methods->modified_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::modified_changed_>;
  if (init_data.paste_done) methods->paste_done = (decltype (methods->paste_done)) detail::method_wrapper<self, void (*) (Gdk::Clipboard clipboard), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::paste_done_>;
  if (init_data.redo) methods->redo = (decltype (methods->redo)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::redo_>;
  if (init_data.remove_tag) methods->remove_tag = (decltype (methods->remove_tag)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::remove_tag_>;
  if (init_data.undo) methods->undo = (decltype (methods->undo)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::undo_>;
}

// void TextBuffer::apply_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void TextBuffer::apply_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void TextBufferClass::apply_tag_ (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  if (!get_struct_()->apply_tag) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->apply_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void TextBuffer::begin_user_action (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::begin_user_action (::GtkTextBuffer* buffer /*none*/);
void TextBufferClass::begin_user_action_ () noexcept
{
  if (!get_struct_()->begin_user_action) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->begin_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::changed (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::changed (::GtkTextBuffer* buffer /*none*/);
void TextBufferClass::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::delete_range (GtkTextBuffer* buffer /*none*/, GtkTextIter* start /*none*/, GtkTextIter* end /*none*/);
// void TextBuffer::delete_range (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* start /*none*/, ::GtkTextIter* end /*none*/);
void TextBufferClass::delete_range_ (Gtk::TextIter_Ref start, Gtk::TextIter_Ref end) noexcept
{
  if (!get_struct_()->delete_range) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* start, ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_range;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (start_to_c), (::GtkTextIter*) (end_to_c));
}

// void TextBuffer::end_user_action (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::end_user_action (::GtkTextBuffer* buffer /*none*/);
void TextBufferClass::end_user_action_ () noexcept
{
  if (!get_struct_()->end_user_action) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->end_user_action;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::insert_child_anchor (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GtkTextChildAnchor* anchor /*none*/);
// void TextBuffer::insert_child_anchor (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GtkTextChildAnchor* anchor /*none*/);
void TextBufferClass::insert_child_anchor_ (Gtk::TextIter_Ref iter, Gtk::TextChildAnchor anchor) noexcept
{
  if (!get_struct_()->insert_child_anchor) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_child_anchor;
  auto anchor_to_c = gi::unwrap (anchor, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GtkTextChildAnchor*) (anchor_to_c));
}

// void TextBuffer::insert_paintable (GtkTextBuffer* buffer /*none*/, GtkTextIter* iter /*none*/, GdkPaintable* paintable /*none*/);
// void TextBuffer::insert_paintable (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* iter /*none*/, ::GdkPaintable* paintable /*none*/);
void TextBufferClass::insert_paintable_ (Gtk::TextIter_Ref iter, Gdk::Paintable paintable) noexcept
{
  if (!get_struct_()->insert_paintable) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* iter, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (iter_to_c), (::GdkPaintable*) (paintable_to_c));
}

// void TextBuffer::insert_text (GtkTextBuffer* buffer /*none*/, GtkTextIter* pos /*none*/, const char* new_text /*none*/, int new_text_length);
// void TextBuffer::insert_text (::GtkTextBuffer* buffer /*none*/, ::GtkTextIter* pos /*none*/, const char* new_text /*none*/, gint new_text_length);
void TextBufferClass::insert_text_ (Gtk::TextIter_Ref pos, const gi::cstring_v new_text, gint new_text_length) noexcept
{
  if (!get_struct_()->insert_text) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextIter* pos, const char* new_text, gint new_text_length);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_text;
  auto new_text_length_to_c = new_text_length;
  auto new_text_to_c = gi::unwrap (new_text, gi::transfer_none);
  auto pos_to_c = gi::unwrap (pos, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextIter*) (pos_to_c), (const char*) (new_text_to_c), (gint) (new_text_length_to_c));
}

// void TextBuffer::mark_deleted (GtkTextBuffer* buffer /*none*/, GtkTextMark* mark /*none*/);
// void TextBuffer::mark_deleted (::GtkTextBuffer* buffer /*none*/, ::GtkTextMark* mark /*none*/);
void TextBufferClass::mark_deleted_ (Gtk::TextMark mark) noexcept
{
  if (!get_struct_()->mark_deleted) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mark_deleted;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextMark*) (mark_to_c));
}

// void TextBuffer::mark_set (GtkTextBuffer* buffer /*none*/, const GtkTextIter* location /*none*/, GtkTextMark* mark /*none*/);
// void TextBuffer::mark_set (::GtkTextBuffer* buffer /*none*/, const ::GtkTextIter* location /*none*/, ::GtkTextMark* mark /*none*/);
void TextBufferClass::mark_set_ (const Gtk::TextIter_Ref location, Gtk::TextMark mark) noexcept
{
  if (!get_struct_()->mark_set) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, const ::GtkTextIter* location, ::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mark_set;
  auto mark_to_c = gi::unwrap (mark, gi::transfer_none);
  auto location_to_c = gi::unwrap (location, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (const ::GtkTextIter*) (location_to_c), (::GtkTextMark*) (mark_to_c));
}

// void TextBuffer::modified_changed (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::modified_changed (::GtkTextBuffer* buffer /*none*/);
void TextBufferClass::modified_changed_ () noexcept
{
  if (!get_struct_()->modified_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->modified_changed;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::paste_done (GtkTextBuffer* buffer /*none*/, GdkClipboard* clipboard /*none*/);
// void TextBuffer::paste_done (::GtkTextBuffer* buffer /*none*/, ::GdkClipboard* clipboard /*none*/);
void TextBufferClass::paste_done_ (Gdk::Clipboard clipboard) noexcept
{
  if (!get_struct_()->paste_done) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GdkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->paste_done;
  auto clipboard_to_c = gi::unwrap (clipboard, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GdkClipboard*) (clipboard_to_c));
}

// void TextBuffer::redo (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::redo (::GtkTextBuffer* buffer /*none*/);
void TextBufferClass::redo_ () noexcept
{
  if (!get_struct_()->redo) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->redo;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

// void TextBuffer::remove_tag (GtkTextBuffer* buffer /*none*/, GtkTextTag* tag /*none*/, const GtkTextIter* start /*none*/, const GtkTextIter* end /*none*/);
// void TextBuffer::remove_tag (::GtkTextBuffer* buffer /*none*/, ::GtkTextTag* tag /*none*/, const ::GtkTextIter* start /*none*/, const ::GtkTextIter* end /*none*/);
void TextBufferClass::remove_tag_ (Gtk::TextTag tag, const Gtk::TextIter_Ref start, const Gtk::TextIter_Ref end) noexcept
{
  if (!get_struct_()->remove_tag) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer, ::GtkTextTag* tag, const ::GtkTextIter* start, const ::GtkTextIter* end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_tag;
  auto end_to_c = gi::unwrap (end, gi::transfer_none);
  auto start_to_c = gi::unwrap (start, gi::transfer_none);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none);
  call_wrap_v ((::GtkTextBuffer*) (gobj_()), (::GtkTextTag*) (tag_to_c), (const ::GtkTextIter*) (start_to_c), (const ::GtkTextIter*) (end_to_c));
}

// void TextBuffer::undo (GtkTextBuffer* buffer /*none*/);
// void TextBuffer::undo (::GtkTextBuffer* buffer /*none*/);
void TextBufferClass::undo_ () noexcept
{
  if (!get_struct_()->undo) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->undo;
  call_wrap_v ((::GtkTextBuffer*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
