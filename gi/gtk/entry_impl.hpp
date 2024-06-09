// AUTO-GENERATED

#ifndef _GI_GTK_ENTRY_IMPL_HPP_
#define _GI_GTK_ENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellEditable EntryBase::interface_ (gi::interface_tag<Gtk::CellEditable>)
{ return gi::wrap ((Gtk::CellEditable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EntryBase::operator Gtk::CellEditable ()
{ return interface_ (gi::interface_tag<Gtk::CellEditable>()); }

Gtk::Editable EntryBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

EntryBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* /*none*/ gtk_entry_new ();
// ::GtkEntry* /*none*/ gtk_entry_new ();
Gtk::Entry base::EntryBase::new_ () noexcept
{
  typedef ::GtkEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none*/ gtk_entry_new_with_buffer (GtkEntryBuffer* buffer /*none*/);
// ::GtkEntry* /*none*/ gtk_entry_new_with_buffer (::GtkEntryBuffer* buffer /*none*/);
Gtk::Entry base::EntryBase::new_with_buffer (Gtk::EntryBuffer buffer) noexcept
{
  typedef ::GtkEntry* (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_new_with_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_entry_get_activates_default (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_activates_default (::GtkEntry* entry /*none*/);
bool base::EntryBase::get_activates_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_activates_default;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// float gtk_entry_get_alignment (GtkEntry* entry /*none*/);
// gfloat gtk_entry_get_alignment (::GtkEntry* entry /*none*/);
gfloat base::EntryBase::get_alignment () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_alignment;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// PangoAttrList* /*none,nullable*/ gtk_entry_get_attributes (GtkEntry* entry /*none*/);
// ::PangoAttrList* /*none,nullable*/ gtk_entry_get_attributes (::GtkEntry* entry /*none*/);
Pango::AttrList_Ref base::EntryBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkEntryBuffer* /*none*/ gtk_entry_get_buffer (GtkEntry* entry /*none*/);
// ::GtkEntryBuffer* /*none*/ gtk_entry_get_buffer (::GtkEntry* entry /*none*/);
Gtk::EntryBuffer base::EntryBase::get_buffer () noexcept
{
  typedef ::GtkEntryBuffer* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_buffer;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkEntryCompletion* /*none,nullable*/ gtk_entry_get_completion (GtkEntry* entry /*none*/);
// ::GtkEntryCompletion* /*none,nullable*/ gtk_entry_get_completion (::GtkEntry* entry /*none*/);
Gtk::EntryCompletion base::EntryBase::get_completion () noexcept
{
  typedef ::GtkEntryCompletion* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_completion;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_entry_get_current_icon_drag_source (GtkEntry* entry /*none*/);
// gint gtk_entry_get_current_icon_drag_source (::GtkEntry* entry /*none*/);
gint base::EntryBase::get_current_icon_drag_source () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_current_icon_drag_source;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// GMenuModel* /*none,nullable*/ gtk_entry_get_extra_menu (GtkEntry* entry /*none*/);
// ::GMenuModel* /*none,nullable*/ gtk_entry_get_extra_menu (::GtkEntry* entry /*none*/);
Gio::MenuModel base::EntryBase::get_extra_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_extra_menu;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_entry_get_has_frame (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_has_frame (::GtkEntry* entry /*none*/);
bool base::EntryBase::get_has_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_has_frame;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_get_icon_activatable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_activatable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
bool base::EntryBase::get_icon_activatable (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_activatable;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return _temp_ret;
}

// void gtk_entry_get_icon_area (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GdkRectangle* icon_area /*none,out,ca*/);
// void gtk_entry_get_icon_area (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area /*none,out,ca*/);
void base::EntryBase::get_icon_area (Gtk::EntryIconPosition icon_pos, Gdk::Rectangle & icon_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_area;
  detail::allocate(icon_area);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(icon_area).gobj_()), "");
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkRectangle*) ((::GdkRectangle*) (icon_area).gobj_()));
}
Gdk::Rectangle base::EntryBase::get_icon_area (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_area;
  Gdk::Rectangle icon_area_c;
  auto icon_area = &icon_area_c;
  detail::allocate(*icon_area);
  static_assert(sizeof(::GdkRectangle) == sizeof(*(*icon_area).gobj_()), "");
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkRectangle*) (icon_area ? (::GdkRectangle*) (*icon_area).gobj_() : nullptr));
  return icon_area_c;
}

// int gtk_entry_get_icon_at_pos (GtkEntry* entry /*none*/, int x, int y);
// gint gtk_entry_get_icon_at_pos (::GtkEntry* entry /*none*/, gint x, gint y);
gint base::EntryBase::get_icon_at_pos (gint x, gint y) noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_at_pos;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// GIcon* /*none,nullable*/ gtk_entry_get_icon_gicon (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// ::GIcon* /*none,nullable*/ gtk_entry_get_icon_gicon (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
Gio::Icon base::EntryBase::get_icon_gicon (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_gicon;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_entry_get_icon_name (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// const char* /*none,nullable*/ gtk_entry_get_icon_name (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
gi::cstring_v base::EntryBase::get_icon_name (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_name;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPaintable* /*none,nullable*/ gtk_entry_get_icon_paintable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// ::GdkPaintable* /*none,nullable*/ gtk_entry_get_icon_paintable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
Gdk::Paintable base::EntryBase::get_icon_paintable (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef ::GdkPaintable* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_paintable;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_entry_get_icon_sensitive (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_sensitive (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
bool base::EntryBase::get_icon_sensitive (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_sensitive;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return _temp_ret;
}

// GtkImageType gtk_entry_get_icon_storage_type (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// ::GtkImageType gtk_entry_get_icon_storage_type (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
Gtk::ImageType base::EntryBase::get_icon_storage_type (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef ::GtkImageType (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_storage_type;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret);
}

// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_markup (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_markup (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
gi::cstring base::EntryBase::get_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_tooltip_markup;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_text (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos);
// char* /*full,nullable*/ gtk_entry_get_icon_tooltip_text (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos);
gi::cstring base::EntryBase::get_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_icon_tooltip_text;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkInputHints gtk_entry_get_input_hints (GtkEntry* entry /*none*/);
// ::GtkInputHints gtk_entry_get_input_hints (::GtkEntry* entry /*none*/);
Gtk::InputHints base::EntryBase::get_input_hints () noexcept
{
  typedef ::GtkInputHints (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_input_hints;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkInputPurpose gtk_entry_get_input_purpose (GtkEntry* entry /*none*/);
// ::GtkInputPurpose gtk_entry_get_input_purpose (::GtkEntry* entry /*none*/);
Gtk::InputPurpose base::EntryBase::get_input_purpose () noexcept
{
  typedef ::GtkInputPurpose (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_input_purpose;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gunichar gtk_entry_get_invisible_char (GtkEntry* entry /*none*/);
// gunichar gtk_entry_get_invisible_char (::GtkEntry* entry /*none*/);
gunichar base::EntryBase::get_invisible_char () noexcept
{
  typedef gunichar (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_invisible_char;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// int gtk_entry_get_max_length (GtkEntry* entry /*none*/);
// gint gtk_entry_get_max_length (::GtkEntry* entry /*none*/);
gint base::EntryBase::get_max_length () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_max_length;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_get_overwrite_mode (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_overwrite_mode (::GtkEntry* entry /*none*/);
bool base::EntryBase::get_overwrite_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_overwrite_mode;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ gtk_entry_get_placeholder_text (GtkEntry* entry /*none*/);
// const char* /*none,nullable*/ gtk_entry_get_placeholder_text (::GtkEntry* entry /*none*/);
gi::cstring_v base::EntryBase::get_placeholder_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_placeholder_text;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// double gtk_entry_get_progress_fraction (GtkEntry* entry /*none*/);
// gdouble gtk_entry_get_progress_fraction (::GtkEntry* entry /*none*/);
gdouble base::EntryBase::get_progress_fraction () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_progress_fraction;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// double gtk_entry_get_progress_pulse_step (GtkEntry* entry /*none*/);
// gdouble gtk_entry_get_progress_pulse_step (::GtkEntry* entry /*none*/);
gdouble base::EntryBase::get_progress_pulse_step () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_progress_pulse_step;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// PangoTabArray* /*none,nullable*/ gtk_entry_get_tabs (GtkEntry* entry /*none*/);
// ::PangoTabArray* /*none,nullable*/ gtk_entry_get_tabs (::GtkEntry* entry /*none*/);
Pango::TabArray_Ref base::EntryBase::get_tabs () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_tabs;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint16 gtk_entry_get_text_length (GtkEntry* entry /*none*/);
// guint16 gtk_entry_get_text_length (::GtkEntry* entry /*none*/);
guint16 base::EntryBase::get_text_length () noexcept
{
  typedef guint16 (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_text_length;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_get_visibility (GtkEntry* entry /*none*/);
// gboolean gtk_entry_get_visibility (::GtkEntry* entry /*none*/);
bool base::EntryBase::get_visibility () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_get_visibility;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_grab_focus_without_selecting (GtkEntry* entry /*none*/);
// gboolean gtk_entry_grab_focus_without_selecting (::GtkEntry* entry /*none*/);
bool base::EntryBase::grab_focus_without_selecting () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_grab_focus_without_selecting;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// void gtk_entry_progress_pulse (GtkEntry* entry /*none*/);
// void gtk_entry_progress_pulse (::GtkEntry* entry /*none*/);
void base::EntryBase::progress_pulse () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_progress_pulse;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void gtk_entry_reset_im_context (GtkEntry* entry /*none*/);
// void gtk_entry_reset_im_context (::GtkEntry* entry /*none*/);
void base::EntryBase::reset_im_context () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_reset_im_context;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void gtk_entry_set_activates_default (GtkEntry* entry /*none*/, gboolean setting);
// void gtk_entry_set_activates_default (::GtkEntry* entry /*none*/, gboolean setting);
void base::EntryBase::set_activates_default (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_activates_default;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_entry_set_alignment (GtkEntry* entry /*none*/, float xalign);
// void gtk_entry_set_alignment (::GtkEntry* entry /*none*/, gfloat xalign);
void base::EntryBase::set_alignment (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_alignment;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_entry_set_attributes (GtkEntry* entry /*none*/, PangoAttrList* attrs /*none*/);
// void gtk_entry_set_attributes (::GtkEntry* entry /*none*/, ::PangoAttrList* attrs /*none*/);
void base::EntryBase::set_attributes (Pango::AttrList_Ref attrs) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void gtk_entry_set_buffer (GtkEntry* entry /*none*/, GtkEntryBuffer* buffer /*none*/);
// void gtk_entry_set_buffer (::GtkEntry* entry /*none*/, ::GtkEntryBuffer* buffer /*none*/);
void base::EntryBase::set_buffer (Gtk::EntryBuffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryBuffer*) (buffer_to_c));
}

// void gtk_entry_set_completion (GtkEntry* entry /*none*/, GtkEntryCompletion* completion /*none,nullable*/);
// void gtk_entry_set_completion (::GtkEntry* entry /*none*/, ::GtkEntryCompletion* completion /*none,nullable*/);
void base::EntryBase::set_completion (Gtk::EntryCompletion completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_completion;
  auto completion_to_c = gi::unwrap (completion, gi::transfer_none);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryCompletion*) (completion_to_c));
}
void base::EntryBase::set_completion () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_completion;
  auto completion_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryCompletion*) (completion_to_c));
}

// void gtk_entry_set_extra_menu (GtkEntry* entry /*none*/, GMenuModel* model /*none,nullable*/);
// void gtk_entry_set_extra_menu (::GtkEntry* entry /*none*/, ::GMenuModel* model /*none,nullable*/);
void base::EntryBase::set_extra_menu (Gio::MenuModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_extra_menu;
  auto model_to_c = gi::unwrap (model, gi::transfer_none);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GMenuModel*) (model_to_c));
}
void base::EntryBase::set_extra_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_extra_menu;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GMenuModel*) (model_to_c));
}

// void gtk_entry_set_has_frame (GtkEntry* entry /*none*/, gboolean setting);
// void gtk_entry_set_has_frame (::GtkEntry* entry /*none*/, gboolean setting);
void base::EntryBase::set_has_frame (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_has_frame;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_entry_set_icon_activatable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, gboolean activatable);
// void gtk_entry_set_icon_activatable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, gboolean activatable);
void base::EntryBase::set_icon_activatable (Gtk::EntryIconPosition icon_pos, gboolean activatable) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean activatable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_activatable;
  auto activatable_to_c = activatable;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (gboolean) (activatable_to_c));
}

// void gtk_entry_set_icon_drag_source (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GdkContentProvider* provider /*none*/, GdkDragAction actions);
// void gtk_entry_set_icon_drag_source (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GdkContentProvider* provider /*none*/, ::GdkDragAction actions);
void base::EntryBase::set_icon_drag_source (Gtk::EntryIconPosition icon_pos, Gdk::ContentProvider provider, Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkContentProvider* provider, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_drag_source;
  auto actions_to_c = gi::unwrap (actions);
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkContentProvider*) (provider_to_c), (::GdkDragAction) (actions_to_c));
}

// void gtk_entry_set_icon_from_gicon (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GIcon* icon /*none,nullable*/);
// void gtk_entry_set_icon_from_gicon (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GIcon* icon /*none,nullable*/);
void base::EntryBase::set_icon_from_gicon (Gtk::EntryIconPosition icon_pos, Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_from_gicon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GIcon*) (icon_to_c));
}
void base::EntryBase::set_icon_from_gicon (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_from_gicon;
  auto icon_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GIcon*) (icon_to_c));
}

// void gtk_entry_set_icon_from_icon_name (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, const char* icon_name /*none,nullable*/);
// void gtk_entry_set_icon_from_icon_name (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, const char* icon_name /*none,nullable*/);
void base::EntryBase::set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos, const gi::cstring_v icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_from_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (icon_name_to_c));
}
void base::EntryBase::set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_from_icon_name;
  auto icon_name_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (icon_name_to_c));
}

// void gtk_entry_set_icon_from_paintable (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, GdkPaintable* paintable /*none,nullable*/);
// void gtk_entry_set_icon_from_paintable (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, ::GdkPaintable* paintable /*none,nullable*/);
void base::EntryBase::set_icon_from_paintable (Gtk::EntryIconPosition icon_pos, Gdk::Paintable paintable) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_from_paintable;
  auto paintable_to_c = gi::unwrap (paintable, gi::transfer_none);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkPaintable*) (paintable_to_c));
}
void base::EntryBase::set_icon_from_paintable (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkPaintable* paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_from_paintable;
  auto paintable_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkPaintable*) (paintable_to_c));
}

// void gtk_entry_set_icon_sensitive (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, gboolean sensitive);
// void gtk_entry_set_icon_sensitive (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, gboolean sensitive);
void base::EntryBase::set_icon_sensitive (Gtk::EntryIconPosition icon_pos, gboolean sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_sensitive;
  auto sensitive_to_c = sensitive;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (gboolean) (sensitive_to_c));
}

// void gtk_entry_set_icon_tooltip_markup (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
// void gtk_entry_set_icon_tooltip_markup (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
void base::EntryBase::set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos, const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_tooltip_markup;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}
void base::EntryBase::set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_tooltip_markup;
  auto tooltip_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}

// void gtk_entry_set_icon_tooltip_text (GtkEntry* entry /*none*/, GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
// void gtk_entry_set_icon_tooltip_text (::GtkEntry* entry /*none*/, ::GtkEntryIconPosition icon_pos, const char* tooltip /*none,nullable*/);
void base::EntryBase::set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos, const gi::cstring_v tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_tooltip_text;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}
void base::EntryBase::set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_icon_tooltip_text;
  auto tooltip_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}

// void gtk_entry_set_input_hints (GtkEntry* entry /*none*/, GtkInputHints hints);
// void gtk_entry_set_input_hints (::GtkEntry* entry /*none*/, ::GtkInputHints hints);
void base::EntryBase::set_input_hints (Gtk::InputHints hints) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkInputHints hints);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_input_hints;
  auto hints_to_c = gi::unwrap (hints);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkInputHints) (hints_to_c));
}

// void gtk_entry_set_input_purpose (GtkEntry* entry /*none*/, GtkInputPurpose purpose);
// void gtk_entry_set_input_purpose (::GtkEntry* entry /*none*/, ::GtkInputPurpose purpose);
void base::EntryBase::set_input_purpose (Gtk::InputPurpose purpose) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkInputPurpose purpose);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_input_purpose;
  auto purpose_to_c = gi::unwrap (purpose);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkInputPurpose) (purpose_to_c));
}

// void gtk_entry_set_invisible_char (GtkEntry* entry /*none*/, gunichar ch);
// void gtk_entry_set_invisible_char (::GtkEntry* entry /*none*/, gunichar ch);
void base::EntryBase::set_invisible_char (gunichar ch) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_invisible_char;
  auto ch_to_c = ch;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gunichar) (ch_to_c));
}

// void gtk_entry_set_max_length (GtkEntry* entry /*none*/, int max);
// void gtk_entry_set_max_length (::GtkEntry* entry /*none*/, gint max);
void base::EntryBase::set_max_length (gint max) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gint max);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_max_length;
  auto max_to_c = max;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (max_to_c));
}

// void gtk_entry_set_overwrite_mode (GtkEntry* entry /*none*/, gboolean overwrite);
// void gtk_entry_set_overwrite_mode (::GtkEntry* entry /*none*/, gboolean overwrite);
void base::EntryBase::set_overwrite_mode (gboolean overwrite) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_overwrite_mode;
  auto overwrite_to_c = overwrite;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (overwrite_to_c));
}

// void gtk_entry_set_placeholder_text (GtkEntry* entry /*none*/, const char* text /*none,nullable*/);
// void gtk_entry_set_placeholder_text (::GtkEntry* entry /*none*/, const char* text /*none,nullable*/);
void base::EntryBase::set_placeholder_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_placeholder_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkEntry*) (gobj_()), (const char*) (text_to_c));
}
void base::EntryBase::set_placeholder_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_placeholder_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_entry_set_progress_fraction (GtkEntry* entry /*none*/, double fraction);
// void gtk_entry_set_progress_fraction (::GtkEntry* entry /*none*/, gdouble fraction);
void base::EntryBase::set_progress_fraction (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_progress_fraction;
  auto fraction_to_c = fraction;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gdouble) (fraction_to_c));
}

// void gtk_entry_set_progress_pulse_step (GtkEntry* entry /*none*/, double fraction);
// void gtk_entry_set_progress_pulse_step (::GtkEntry* entry /*none*/, gdouble fraction);
void base::EntryBase::set_progress_pulse_step (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_progress_pulse_step;
  auto fraction_to_c = fraction;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gdouble) (fraction_to_c));
}

// void gtk_entry_set_tabs (GtkEntry* entry /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void gtk_entry_set_tabs (::GtkEntry* entry /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
void base::EntryBase::set_tabs (Pango::TabArray_Ref tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_tabs;
  auto tabs_to_c = gi::unwrap (tabs, gi::transfer_none);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}
void base::EntryBase::set_tabs () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_tabs;
  auto tabs_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}

// void gtk_entry_set_visibility (GtkEntry* entry /*none*/, gboolean visible);
// void gtk_entry_set_visibility (::GtkEntry* entry /*none*/, gboolean visible);
void base::EntryBase::set_visibility (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_set_visibility;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (visible_to_c));
}

// void gtk_entry_unset_invisible_char (GtkEntry* entry /*none*/);
// void gtk_entry_unset_invisible_char (::GtkEntry* entry /*none*/);
void base::EntryBase::unset_invisible_char () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_entry_unset_invisible_char;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entry_extra_def_impl.hpp>)
#include <gtk/entry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entry_extra_impl.hpp>)
#include <gtk/entry_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EntryClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkEntryClass *methods = (::GtkEntryClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_>;
}

// void Entry::activate (GtkEntry* entry /*none*/);
// void Entry::activate (::GtkEntry* entry /*none*/);
void EntryClass::activate_ () noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
