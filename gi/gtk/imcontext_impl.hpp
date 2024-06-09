// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXT_IMPL_HPP_
#define _GI_GTK_IMCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_im_context_delete_surrounding (GtkIMContext* context /*none*/, int offset, int n_chars);
// gboolean gtk_im_context_delete_surrounding (::GtkIMContext* context /*none*/, gint offset, gint n_chars);
bool base::IMContextBase::delete_surrounding (gint offset, gint n_chars) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, gint offset, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_delete_surrounding;
  auto n_chars_to_c = n_chars;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (gint) (offset_to_c), (gint) (n_chars_to_c));
  return _temp_ret;
}

// gboolean gtk_im_context_filter_key (GtkIMContext* context /*none*/, gboolean press, GdkSurface* surface /*none*/, GdkDevice* device /*none*/, guint32 time, guint keycode, GdkModifierType state, int group);
// gboolean gtk_im_context_filter_key (::GtkIMContext* context /*none*/, gboolean press, ::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, guint32 time, guint keycode, ::GdkModifierType state, gint group);
bool base::IMContextBase::filter_key (gboolean press, Gdk::Surface surface, Gdk::Device device, guint32 time, guint keycode, Gdk::ModifierType state, gint group) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, gboolean press, ::GdkSurface* surface, ::GdkDevice* device, guint32 time, guint keycode, ::GdkModifierType state, gint group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_filter_key;
  auto group_to_c = group;
  auto state_to_c = gi::unwrap (state);
  auto keycode_to_c = keycode;
  auto time_to_c = time;
  auto device_to_c = gi::unwrap (device, gi::transfer_none);
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  auto press_to_c = press;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (gboolean) (press_to_c), (::GdkSurface*) (surface_to_c), (::GdkDevice*) (device_to_c), (guint32) (time_to_c), (guint) (keycode_to_c), (::GdkModifierType) (state_to_c), (gint) (group_to_c));
  return _temp_ret;
}

// gboolean gtk_im_context_filter_keypress (GtkIMContext* context /*none*/, GdkEvent* event /*none*/);
// gboolean gtk_im_context_filter_keypress (::GtkIMContext* context /*none*/,  event /*none*/);
// SKIP; event type  not supported

// void gtk_im_context_focus_in (GtkIMContext* context /*none*/);
// void gtk_im_context_focus_in (::GtkIMContext* context /*none*/);
void base::IMContextBase::focus_in () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_focus_in;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void gtk_im_context_focus_out (GtkIMContext* context /*none*/);
// void gtk_im_context_focus_out (::GtkIMContext* context /*none*/);
void base::IMContextBase::focus_out () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_focus_out;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void gtk_im_context_get_preedit_string (GtkIMContext* context /*none*/, char** str /*full,out*/, PangoAttrList** attrs /*full,out*/, int* cursor_pos);
// void gtk_im_context_get_preedit_string (::GtkIMContext* context /*none*/, char** str /*full,out*/, ::PangoAttrList** attrs /*full,out*/, gint* cursor_pos);
void base::IMContextBase::get_preedit_string (gi::cstring & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_get_preedit_string;
  gint cursor_pos_o {};
  ::PangoAttrList* attrs_o {};
  char* str_o {};
  call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&str_o), (::PangoAttrList**) (&attrs_o), (gint*) (&cursor_pos_o));
  cursor_pos = cursor_pos_o;
  attrs = gi::wrap (attrs_o, gi::transfer_full);
  str = gi::wrap (str_o, gi::transfer_full);
}
std::tuple<gi::cstring, Pango::AttrList, gint> base::IMContextBase::get_preedit_string () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_get_preedit_string;
  gint cursor_pos_o {};
  ::PangoAttrList* attrs_o {};
  char* str_o {};
  call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&str_o), (::PangoAttrList**) (&attrs_o), (gint*) (&cursor_pos_o));
  auto &&tmp_return_1 = gi::wrap (str_o, gi::transfer_full);
  auto &&tmp_return_2 = gi::wrap (attrs_o, gi::transfer_full);
  auto &&tmp_return_3 = cursor_pos_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_im_context_get_surrounding (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index);
// gboolean gtk_im_context_get_surrounding (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index);
bool base::IMContextBase::get_surrounding (gi::cstring & text, gint & cursor_index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_get_surrounding;
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o));
  cursor_index = cursor_index_o;
  text = gi::wrap (text_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gint> base::IMContextBase::get_surrounding () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_get_surrounding;
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (text_o, gi::transfer_full);
  auto &&tmp_return_3 = cursor_index_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean gtk_im_context_get_surrounding_with_selection (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index, int* anchor_index);
// gboolean gtk_im_context_get_surrounding_with_selection (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index, gint* anchor_index);
bool base::IMContextBase::get_surrounding_with_selection (gi::cstring & text, gint & cursor_index, gint & anchor_index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index, gint* anchor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_get_surrounding_with_selection;
  gint anchor_index_o {};
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o), (gint*) (&anchor_index_o));
  anchor_index = anchor_index_o;
  cursor_index = cursor_index_o;
  text = gi::wrap (text_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, gint, gint> base::IMContextBase::get_surrounding_with_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index, gint* anchor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_get_surrounding_with_selection;
  gint anchor_index_o {};
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o), (gint*) (&anchor_index_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (text_o, gi::transfer_full);
  auto &&tmp_return_3 = cursor_index_o;
  auto &&tmp_return_4 = anchor_index_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4));
}

// void gtk_im_context_reset (GtkIMContext* context /*none*/);
// void gtk_im_context_reset (::GtkIMContext* context /*none*/);
void base::IMContextBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_reset;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void gtk_im_context_set_client_widget (GtkIMContext* context /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_im_context_set_client_widget (::GtkIMContext* context /*none*/, ::GtkWidget* widget /*none,nullable*/);
void base::IMContextBase::set_client_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_set_client_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::IMContextBase::set_client_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_set_client_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_im_context_set_cursor_location (GtkIMContext* context /*none*/, const GdkRectangle* area /*none*/);
// void gtk_im_context_set_cursor_location (::GtkIMContext* context /*none*/, const ::GdkRectangle* area /*none*/);
void base::IMContextBase::set_cursor_location (const Gdk::Rectangle_Ref area) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, const ::GdkRectangle* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_set_cursor_location;
  auto area_to_c = gi::unwrap (area, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const ::GdkRectangle*) (area_to_c));
}

// void gtk_im_context_set_surrounding (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index);
// void gtk_im_context_set_surrounding (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index);
void base::IMContextBase::set_surrounding (const gi::cstring_v text, gint len, gint cursor_index) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_set_surrounding;
  auto cursor_index_to_c = cursor_index;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gint) (cursor_index_to_c));
}

// void gtk_im_context_set_surrounding_with_selection (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index, int anchor_index);
// void gtk_im_context_set_surrounding_with_selection (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index, gint anchor_index);
void base::IMContextBase::set_surrounding_with_selection (const gi::cstring_v text, gint len, gint cursor_index, gint anchor_index) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* text, gint len, gint cursor_index, gint anchor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_set_surrounding_with_selection;
  auto anchor_index_to_c = anchor_index;
  auto cursor_index_to_c = cursor_index;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gint) (cursor_index_to_c), (gint) (anchor_index_to_c));
}

// void gtk_im_context_set_use_preedit (GtkIMContext* context /*none*/, gboolean use_preedit);
// void gtk_im_context_set_use_preedit (::GtkIMContext* context /*none*/, gboolean use_preedit);
void base::IMContextBase::set_use_preedit (gboolean use_preedit) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, gboolean use_preedit);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_im_context_set_use_preedit;
  auto use_preedit_to_c = use_preedit;
  call_wrap_v ((::GtkIMContext*) (gobj_()), (gboolean) (use_preedit_to_c));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra_def_impl.hpp>)
#include <gtk/imcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra_impl.hpp>)
#include <gtk/imcontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IMContextClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkIMContextClass *methods = (::GtkIMContextClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate_osk) methods->activate_osk = (decltype (methods->activate_osk)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::activate_osk_>;
  if (init_data.commit) methods->commit = (decltype (methods->commit)) detail::method_wrapper<self, void (*) (const gi::cstring_v str), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::commit_>;
  if (init_data.delete_surrounding) methods->delete_surrounding = (decltype (methods->delete_surrounding)) detail::method_wrapper<self, bool (*) (gint offset, gint n_chars), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::delete_surrounding_>;
  if (init_data.focus_in) methods->focus_in = (decltype (methods->focus_in)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::focus_in_>;
  if (init_data.focus_out) methods->focus_out = (decltype (methods->focus_out)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::focus_out_>;
  if (init_data.get_preedit_string) methods->get_preedit_string = (decltype (methods->get_preedit_string)) detail::method_wrapper<self, void (*) (gi::cstring & str, Pango::AttrList & attrs, gint & cursor_pos), gi::transfer_full_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_preedit_string_>;
  if (init_data.get_surrounding) methods->get_surrounding = (decltype (methods->get_surrounding)) detail::method_wrapper<self, bool (*) (gi::cstring & text, gint & cursor_index), gi::transfer_none_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_surrounding_>;
  if (init_data.get_surrounding_with_selection) methods->get_surrounding_with_selection = (decltype (methods->get_surrounding_with_selection)) detail::method_wrapper<self, bool (*) (gi::cstring & text, gint & cursor_index, gint & anchor_index), gi::transfer_none_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_surrounding_with_selection_>;
  if (init_data.preedit_changed) methods->preedit_changed = (decltype (methods->preedit_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::preedit_changed_>;
  if (init_data.preedit_end) methods->preedit_end = (decltype (methods->preedit_end)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::preedit_end_>;
  if (init_data.preedit_start) methods->preedit_start = (decltype (methods->preedit_start)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::preedit_start_>;
  if (init_data.reset) methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::reset_>;
  if (init_data.retrieve_surrounding) methods->retrieve_surrounding = (decltype (methods->retrieve_surrounding)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::retrieve_surrounding_>;
  if (init_data.set_client_widget) methods->set_client_widget = (decltype (methods->set_client_widget)) detail::method_wrapper<self, void (*) (Gtk::Widget widget), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_client_widget_>;
  if (init_data.set_cursor_location) methods->set_cursor_location = (decltype (methods->set_cursor_location)) detail::method_wrapper<self, void (*) (Gdk::Rectangle_Ref area), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_cursor_location_>;
  if (init_data.set_surrounding) methods->set_surrounding = (decltype (methods->set_surrounding)) detail::method_wrapper<self, void (*) (const gi::cstring_v text, gint len, gint cursor_index), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_surrounding_>;
  if (init_data.set_surrounding_with_selection) methods->set_surrounding_with_selection = (decltype (methods->set_surrounding_with_selection)) detail::method_wrapper<self, void (*) (const gi::cstring_v text, gint len, gint cursor_index, gint anchor_index), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_surrounding_with_selection_>;
  if (init_data.set_use_preedit) methods->set_use_preedit = (decltype (methods->set_use_preedit)) detail::method_wrapper<self, void (*) (gboolean use_preedit), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::set_use_preedit_>;
}

// void IMContext::activate_osk (GtkIMContext* context /*none*/);
// void IMContext::activate_osk (::GtkIMContext* context /*none*/);
void IMContextClass::activate_osk_ () noexcept
{
  if (!get_struct_()->activate_osk) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_osk;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::commit (GtkIMContext* context /*none*/, const char* str /*none*/);
// void IMContext::commit (::GtkIMContext* context /*none*/, const char* str /*none*/);
void IMContextClass::commit_ (const gi::cstring_v str) noexcept
{
  if (!get_struct_()->commit) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->commit;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (str_to_c));
}

// gboolean IMContext::delete_surrounding (GtkIMContext* context /*none*/, int offset, int n_chars);
// gboolean IMContext::delete_surrounding (::GtkIMContext* context /*none*/, gint offset, gint n_chars);
bool IMContextClass::delete_surrounding_ (gint offset, gint n_chars) noexcept
{
  if (!get_struct_()->delete_surrounding) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, gint offset, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_surrounding;
  auto n_chars_to_c = n_chars;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (gint) (offset_to_c), (gint) (n_chars_to_c));
  return _temp_ret;
}

// gboolean IMContext::filter_keypress (GtkIMContext* context /*none*/, GdkEvent* event /*none*/);
// gboolean IMContext::filter_keypress (::GtkIMContext* context /*none*/,  event /*none*/);
// SKIP; event type  not supported

// void IMContext::focus_in (GtkIMContext* context /*none*/);
// void IMContext::focus_in (::GtkIMContext* context /*none*/);
void IMContextClass::focus_in_ () noexcept
{
  if (!get_struct_()->focus_in) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_in;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::focus_out (GtkIMContext* context /*none*/);
// void IMContext::focus_out (::GtkIMContext* context /*none*/);
void IMContextClass::focus_out_ () noexcept
{
  if (!get_struct_()->focus_out) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_out;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::get_preedit_string (GtkIMContext* context /*none*/, char** str /*full,out*/, PangoAttrList** attrs /*full,out*/, int* cursor_pos);
// void IMContext::get_preedit_string (::GtkIMContext* context /*none*/, char** str /*full,out*/, ::PangoAttrList** attrs /*full,out*/, gint* cursor_pos);
void IMContextClass::get_preedit_string_ (gi::cstring & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept
{
  if (!get_struct_()->get_preedit_string) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_preedit_string;
  gint cursor_pos_o {};
  ::PangoAttrList* attrs_o {};
  char* str_o {};
  call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&str_o), (::PangoAttrList**) (&attrs_o), (gint*) (&cursor_pos_o));
  cursor_pos = cursor_pos_o;
  attrs = gi::wrap (attrs_o, gi::transfer_full);
  str = gi::wrap (str_o, gi::transfer_full);
}

// gboolean IMContext::get_surrounding (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index);
// gboolean IMContext::get_surrounding (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index);
bool IMContextClass::get_surrounding_ (gi::cstring & text, gint & cursor_index) noexcept
{
  if (!get_struct_()->get_surrounding) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_surrounding;
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o));
  cursor_index = cursor_index_o;
  text = gi::wrap (text_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean IMContext::get_surrounding_with_selection (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index, int* anchor_index);
// gboolean IMContext::get_surrounding_with_selection (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index, gint* anchor_index);
bool IMContextClass::get_surrounding_with_selection_ (gi::cstring & text, gint & cursor_index, gint & anchor_index) noexcept
{
  if (!get_struct_()->get_surrounding_with_selection) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index, gint* anchor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_surrounding_with_selection;
  gint anchor_index_o {};
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o), (gint*) (&anchor_index_o));
  anchor_index = anchor_index_o;
  cursor_index = cursor_index_o;
  text = gi::wrap (text_o, gi::transfer_full);
  return _temp_ret;
}

// void IMContext::preedit_changed (GtkIMContext* context /*none*/);
// void IMContext::preedit_changed (::GtkIMContext* context /*none*/);
void IMContextClass::preedit_changed_ () noexcept
{
  if (!get_struct_()->preedit_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_changed;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::preedit_end (GtkIMContext* context /*none*/);
// void IMContext::preedit_end (::GtkIMContext* context /*none*/);
void IMContextClass::preedit_end_ () noexcept
{
  if (!get_struct_()->preedit_end) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_end;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::preedit_start (GtkIMContext* context /*none*/);
// void IMContext::preedit_start (::GtkIMContext* context /*none*/);
void IMContextClass::preedit_start_ () noexcept
{
  if (!get_struct_()->preedit_start) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_start;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::reset (GtkIMContext* context /*none*/);
// void IMContext::reset (::GtkIMContext* context /*none*/);
void IMContextClass::reset_ () noexcept
{
  if (!get_struct_()->reset) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// gboolean IMContext::retrieve_surrounding (GtkIMContext* context /*none*/);
// gboolean IMContext::retrieve_surrounding (::GtkIMContext* context /*none*/);
bool IMContextClass::retrieve_surrounding_ () noexcept
{
  if (!get_struct_()->retrieve_surrounding) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->retrieve_surrounding;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()));
  return _temp_ret;
}

// void IMContext::set_client_widget (GtkIMContext* context /*none*/, GtkWidget* widget /*none,nullable*/);
// void IMContext::set_client_widget (::GtkIMContext* context /*none*/, ::GtkWidget* widget /*none,nullable*/);
void IMContextClass::set_client_widget_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->set_client_widget) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_client_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void IMContext::set_cursor_location (GtkIMContext* context /*none*/, GdkRectangle* area /*none*/);
// void IMContext::set_cursor_location (::GtkIMContext* context /*none*/, ::GdkRectangle* area /*none*/);
void IMContextClass::set_cursor_location_ (Gdk::Rectangle_Ref area) noexcept
{
  if (!get_struct_()->set_cursor_location) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GdkRectangle* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_cursor_location;
  auto area_to_c = gi::unwrap (area, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkRectangle*) (area_to_c));
}

// void IMContext::set_surrounding (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index);
// void IMContext::set_surrounding (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index);
void IMContextClass::set_surrounding_ (const gi::cstring_v text, gint len, gint cursor_index) noexcept
{
  if (!get_struct_()->set_surrounding) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_surrounding;
  auto cursor_index_to_c = cursor_index;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gint) (cursor_index_to_c));
}

// void IMContext::set_surrounding_with_selection (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index, int anchor_index);
// void IMContext::set_surrounding_with_selection (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index, gint anchor_index);
void IMContextClass::set_surrounding_with_selection_ (const gi::cstring_v text, gint len, gint cursor_index, gint anchor_index) noexcept
{
  if (!get_struct_()->set_surrounding_with_selection) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* text, gint len, gint cursor_index, gint anchor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_surrounding_with_selection;
  auto anchor_index_to_c = anchor_index;
  auto cursor_index_to_c = cursor_index;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gint) (cursor_index_to_c), (gint) (anchor_index_to_c));
}

// void IMContext::set_use_preedit (GtkIMContext* context /*none*/, gboolean use_preedit);
// void IMContext::set_use_preedit (::GtkIMContext* context /*none*/, gboolean use_preedit);
void IMContextClass::set_use_preedit_ (gboolean use_preedit) noexcept
{
  if (!get_struct_()->set_use_preedit) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkIMContext* context, gboolean use_preedit);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_use_preedit;
  auto use_preedit_to_c = use_preedit;
  call_wrap_v ((::GtkIMContext*) (gobj_()), (gboolean) (use_preedit_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
