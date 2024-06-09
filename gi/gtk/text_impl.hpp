// AUTO-GENERATED

#ifndef _GI_GTK_TEXT_IMPL_HPP_
#define _GI_GTK_TEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Editable TextBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

TextBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ gtk_text_new ();
// ::GtkText* /*none*/ gtk_text_new ();
Gtk::Text base::TextBase::new_ () noexcept
{
  typedef ::GtkText* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_text_new_with_buffer (GtkEntryBuffer* buffer /*none*/);
// ::GtkText* /*none*/ gtk_text_new_with_buffer (::GtkEntryBuffer* buffer /*none*/);
Gtk::Text base::TextBase::new_with_buffer (Gtk::EntryBuffer buffer) noexcept
{
  typedef ::GtkText* (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_new_with_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_text_compute_cursor_extents (GtkText* self /*none*/, gsize position, graphene_rect_t* strong /*none,out,opt,ca*/, graphene_rect_t* weak /*none,out,opt,ca*/);
// void gtk_text_compute_cursor_extents (::GtkText* self /*none*/, gsize position, ::graphene_rect_t* strong /*none,out,opt,ca*/, ::graphene_rect_t* weak /*none,out,opt,ca*/);
void base::TextBase::compute_cursor_extents (gsize position, Graphene::Rect * strong, Graphene::Rect * weak) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gsize position, ::graphene_rect_t* strong, ::graphene_rect_t* weak);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_compute_cursor_extents;
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*weak).gobj_()), "");
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*strong).gobj_()), "");
  auto position_to_c = position;
  call_wrap_v ((::GtkText*) (gobj_()), (gsize) (position_to_c), (::graphene_rect_t*) (strong ? (::graphene_rect_t*) (*strong).gobj_() : nullptr), (::graphene_rect_t*) (weak ? (::graphene_rect_t*) (*weak).gobj_() : nullptr));
}
std::tuple<Graphene::Rect, Graphene::Rect> base::TextBase::compute_cursor_extents (gsize position) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gsize position, ::graphene_rect_t* strong, ::graphene_rect_t* weak);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_compute_cursor_extents;
  Graphene::Rect weak_c;
  auto weak = &weak_c;
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*weak).gobj_()), "");
  Graphene::Rect strong_c;
  auto strong = &strong_c;
  static_assert(sizeof(::graphene_rect_t) == sizeof(*(*strong).gobj_()), "");
  auto position_to_c = position;
  call_wrap_v ((::GtkText*) (gobj_()), (gsize) (position_to_c), (::graphene_rect_t*) (strong ? (::graphene_rect_t*) (*strong).gobj_() : nullptr), (::graphene_rect_t*) (weak ? (::graphene_rect_t*) (*weak).gobj_() : nullptr));
  auto &&tmp_return_1 = strong_c;
  auto &&tmp_return_2 = weak_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_text_get_activates_default (GtkText* self /*none*/);
// gboolean gtk_text_get_activates_default (::GtkText* self /*none*/);
bool base::TextBase::get_activates_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_activates_default;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// PangoAttrList* /*none,nullable*/ gtk_text_get_attributes (GtkText* self /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_text_get_attributes (::GtkText* self /*none*/);
Pango::AttrList_Ref base::TextBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkEntryBuffer* /*none*/ gtk_text_get_buffer (GtkText* self /*none*/);
// ::GtkEntryBuffer* /*none*/ gtk_text_get_buffer (::GtkText* self /*none*/);
Gtk::EntryBuffer base::TextBase::get_buffer () noexcept
{
  typedef ::GtkEntryBuffer* (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_buffer;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_text_get_enable_emoji_completion (GtkText* self /*none*/);
// gboolean gtk_text_get_enable_emoji_completion (::GtkText* self /*none*/);
bool base::TextBase::get_enable_emoji_completion () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_enable_emoji_completion;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ gtk_text_get_extra_menu (GtkText* self /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_text_get_extra_menu (::GtkText* self /*none*/);
Gio::MenuModel base::TextBase::get_extra_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_extra_menu;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkInputHints gtk_text_get_input_hints (GtkText* self /*none*/);
// ::GtkInputHints gtk_text_get_input_hints (::GtkText* self /*none*/);
Gtk::InputHints base::TextBase::get_input_hints () noexcept
{
  typedef ::GtkInputHints (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_input_hints;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkInputPurpose gtk_text_get_input_purpose (GtkText* self /*none*/);
// ::GtkInputPurpose gtk_text_get_input_purpose (::GtkText* self /*none*/);
Gtk::InputPurpose base::TextBase::get_input_purpose () noexcept
{
  typedef ::GtkInputPurpose (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_input_purpose;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gunichar gtk_text_get_invisible_char (GtkText* self /*none*/);
// gunichar gtk_text_get_invisible_char (::GtkText* self /*none*/);
gunichar base::TextBase::get_invisible_char () noexcept
{
  typedef gunichar (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_invisible_char;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// int gtk_text_get_max_length (GtkText* self /*none*/);
// gint gtk_text_get_max_length (::GtkText* self /*none*/);
gint base::TextBase::get_max_length () noexcept
{
  typedef gint (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_max_length;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_get_overwrite_mode (GtkText* self /*none*/);
// gboolean gtk_text_get_overwrite_mode (::GtkText* self /*none*/);
bool base::TextBase::get_overwrite_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_overwrite_mode;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_text_get_placeholder_text (GtkText* self /*none*/);
// const char* /*none,nullable*/ gtk_text_get_placeholder_text (::GtkText* self /*none*/);
gi::cstring_v base::TextBase::get_placeholder_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_placeholder_text;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_text_get_propagate_text_width (GtkText* self /*none*/);
// gboolean gtk_text_get_propagate_text_width (::GtkText* self /*none*/);
bool base::TextBase::get_propagate_text_width () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_propagate_text_width;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// PangoTabArray* /*none,nullable*/ gtk_text_get_tabs (GtkText* self /*none*/);
// ::PangoTabArray* /*none,nullable*/ gtk_text_get_tabs (::GtkText* self /*none*/);
Pango::TabArray_Ref base::TextBase::get_tabs () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_tabs;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint16 gtk_text_get_text_length (GtkText* self /*none*/);
// guint16 gtk_text_get_text_length (::GtkText* self /*none*/);
guint16 base::TextBase::get_text_length () noexcept
{
  typedef guint16 (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_text_length;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_get_truncate_multiline (GtkText* self /*none*/);
// gboolean gtk_text_get_truncate_multiline (::GtkText* self /*none*/);
bool base::TextBase::get_truncate_multiline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_truncate_multiline;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_get_visibility (GtkText* self /*none*/);
// gboolean gtk_text_get_visibility (::GtkText* self /*none*/);
bool base::TextBase::get_visibility () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_get_visibility;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_grab_focus_without_selecting (GtkText* self /*none*/);
// gboolean gtk_text_grab_focus_without_selecting (::GtkText* self /*none*/);
bool base::TextBase::grab_focus_without_selecting () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_grab_focus_without_selecting;
  auto _temp_ret = call_wrap_v ((::GtkText*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_set_activates_default (GtkText* self /*none*/, gboolean activates);
// void gtk_text_set_activates_default (::GtkText* self /*none*/, gboolean activates);
void base::TextBase::set_activates_default (gboolean activates) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gboolean activates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_activates_default;
  auto activates_to_c = activates;
  call_wrap_v ((::GtkText*) (gobj_()), (gboolean) (activates_to_c));
}

// void gtk_text_set_attributes (GtkText* self /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void gtk_text_set_attributes (::GtkText* self /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
void base::TextBase::set_attributes (Pango::AttrList_Ref attrs) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  call_wrap_v ((::GtkText*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}
void base::TextBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_attributes;
  auto attrs_to_c = nullptr;
  call_wrap_v ((::GtkText*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void gtk_text_set_buffer (GtkText* self /*none*/, GtkEntryBuffer* buffer /*none*/);
// void gtk_text_set_buffer (::GtkText* self /*none*/, ::GtkEntryBuffer* buffer /*none*/);
void base::TextBase::set_buffer (Gtk::EntryBuffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  call_wrap_v ((::GtkText*) (gobj_()), (::GtkEntryBuffer*) (buffer_to_c));
}

// void gtk_text_set_enable_emoji_completion (GtkText* self /*none*/, gboolean enable_emoji_completion);
// void gtk_text_set_enable_emoji_completion (::GtkText* self /*none*/, gboolean enable_emoji_completion);
void base::TextBase::set_enable_emoji_completion (gboolean enable_emoji_completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gboolean enable_emoji_completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_enable_emoji_completion;
  auto enable_emoji_completion_to_c = enable_emoji_completion;
  call_wrap_v ((::GtkText*) (gobj_()), (gboolean) (enable_emoji_completion_to_c));
}

// void gtk_text_set_extra_menu (GtkText* self /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_text_set_extra_menu (::GtkText* self /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::TextBase::set_extra_menu (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_extra_menu;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkText*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::TextBase::set_extra_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_extra_menu;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkText*) (gobj_()), (::GMenuModel*) (model_to_c));
}

// void gtk_text_set_input_hints (GtkText* self /*none*/, GtkInputHints hints);
// void gtk_text_set_input_hints (::GtkText* self /*none*/, ::GtkInputHints hints);
void base::TextBase::set_input_hints (Gtk::InputHints hints) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::GtkInputHints hints);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_input_hints;
  auto hints_to_c = gi::unwrap (hints);
  call_wrap_v ((::GtkText*) (gobj_()), (::GtkInputHints) (hints_to_c));
}

// void gtk_text_set_input_purpose (GtkText* self /*none*/, GtkInputPurpose purpose);
// void gtk_text_set_input_purpose (::GtkText* self /*none*/, ::GtkInputPurpose purpose);
void base::TextBase::set_input_purpose (Gtk::InputPurpose purpose) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::GtkInputPurpose purpose);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_input_purpose;
  auto purpose_to_c = gi::unwrap (purpose);
  call_wrap_v ((::GtkText*) (gobj_()), (::GtkInputPurpose) (purpose_to_c));
}

// void gtk_text_set_invisible_char (GtkText* self /*none*/, gunichar ch);
// void gtk_text_set_invisible_char (::GtkText* self /*none*/, gunichar ch);
void base::TextBase::set_invisible_char (gunichar ch) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_invisible_char;
  auto ch_to_c = ch;
  call_wrap_v ((::GtkText*) (gobj_()), (gunichar) (ch_to_c));
}

// void gtk_text_set_max_length (GtkText* self /*none*/, int length);
// void gtk_text_set_max_length (::GtkText* self /*none*/, gint length);
void base::TextBase::set_max_length (gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_max_length;
  auto length_to_c = length;
  call_wrap_v ((::GtkText*) (gobj_()), (gint) (length_to_c));
}

// void gtk_text_set_overwrite_mode (GtkText* self /*none*/, gboolean overwrite);
// void gtk_text_set_overwrite_mode (::GtkText* self /*none*/, gboolean overwrite);
void base::TextBase::set_overwrite_mode (gboolean overwrite) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_overwrite_mode;
  auto overwrite_to_c = overwrite;
  call_wrap_v ((::GtkText*) (gobj_()), (gboolean) (overwrite_to_c));
}

// void gtk_text_set_placeholder_text (GtkText* self /*none*/, const char* text /*none,nullable*/);
// void gtk_text_set_placeholder_text (::GtkText* self /*none*/, const char* text /*none,nullable*/);
void base::TextBase::set_placeholder_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_placeholder_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkText*) (gobj_()), (const char*) (text_to_c));
}
void base::TextBase::set_placeholder_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_placeholder_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkText*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_text_set_propagate_text_width (GtkText* self /*none*/, gboolean propagate_text_width);
// void gtk_text_set_propagate_text_width (::GtkText* self /*none*/, gboolean propagate_text_width);
void base::TextBase::set_propagate_text_width (gboolean propagate_text_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gboolean propagate_text_width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_propagate_text_width;
  auto propagate_text_width_to_c = propagate_text_width;
  call_wrap_v ((::GtkText*) (gobj_()), (gboolean) (propagate_text_width_to_c));
}

// void gtk_text_set_tabs (GtkText* self /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void gtk_text_set_tabs (::GtkText* self /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
void base::TextBase::set_tabs (Pango::TabArray_Ref tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_tabs;
  auto tabs_to_c = gi::unwrap (tabs, gi::transfer_none);
  call_wrap_v ((::GtkText*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}
void base::TextBase::set_tabs () noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_tabs;
  auto tabs_to_c = nullptr;
  call_wrap_v ((::GtkText*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}

// void gtk_text_set_truncate_multiline (GtkText* self /*none*/, gboolean truncate_multiline);
// void gtk_text_set_truncate_multiline (::GtkText* self /*none*/, gboolean truncate_multiline);
void base::TextBase::set_truncate_multiline (gboolean truncate_multiline) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gboolean truncate_multiline);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_truncate_multiline;
  auto truncate_multiline_to_c = truncate_multiline;
  call_wrap_v ((::GtkText*) (gobj_()), (gboolean) (truncate_multiline_to_c));
}

// void gtk_text_set_visibility (GtkText* self /*none*/, gboolean visible);
// void gtk_text_set_visibility (::GtkText* self /*none*/, gboolean visible);
void base::TextBase::set_visibility (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_set_visibility;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkText*) (gobj_()), (gboolean) (visible_to_c));
}

// void gtk_text_unset_invisible_char (GtkText* self /*none*/);
// void gtk_text_unset_invisible_char (::GtkText* self /*none*/);
void base::TextBase::unset_invisible_char () noexcept
{
  typedef void (*call_wrap_t) (::GtkText* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_text_unset_invisible_char;
  call_wrap_v ((::GtkText*) (gobj_()));
}













} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/text_extra_def_impl.hpp>)
#include <gtk/text_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/text_extra_impl.hpp>)
#include <gtk/text_extra_impl.hpp>
#endif
#endif

#endif
