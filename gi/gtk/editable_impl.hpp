// AUTO-GENERATED

#ifndef _GI_GTK_EDITABLE_IMPL_HPP_
#define _GI_GTK_EDITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_editable_delegate_get_property (GObject* object /*none*/, guint prop_id, GValue* value /*none*/, GParamSpec* pspec /*none*/);
// gboolean gtk_editable_delegate_get_property (::GObject* object /*none*/, guint prop_id, ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
bool base::EditableBase::delegate_get_property (GObject::Object object, guint prop_id, GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* object, guint prop_id, ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_delegate_get_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto prop_id_to_c = prop_id;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (guint) (prop_id_to_c), (::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
  return _temp_ret;
}

// gboolean gtk_editable_delegate_set_property (GObject* object /*none*/, guint prop_id, const GValue* value /*none*/, GParamSpec* pspec /*none*/);
// gboolean gtk_editable_delegate_set_property (::GObject* object /*none*/, guint prop_id, const ::GValue* value /*none*/, ::GParamSpec* pspec /*none*/);
bool base::EditableBase::delegate_set_property (GObject::Object object, guint prop_id, const GObject::Value_Ref value, GObject::ParamSpec pspec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* object, guint prop_id, const ::GValue* value, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_delegate_set_property;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none);
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto prop_id_to_c = prop_id;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (guint) (prop_id_to_c), (const ::GValue*) (value_to_c), (::GParamSpec*) (pspec_to_c));
  return _temp_ret;
}

// guint gtk_editable_install_properties (GObjectClass* object_class /*none*/, guint first_prop);
// guint gtk_editable_install_properties (::GObjectClass object_class /*none*/, guint first_prop);
// SKIP; object_class type GObject::ObjectClass not supported

// gboolean gtk_editable_delegate_get_accessible_platform_state (GtkEditable* editable /*none*/, GtkAccessiblePlatformState state);
// gboolean gtk_editable_delegate_get_accessible_platform_state (::GtkEditable* editable /*none*/, ::GtkAccessiblePlatformState state);
bool base::EditableBase::delegate_get_accessible_platform_state (Gtk::AccessiblePlatformState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable, ::GtkAccessiblePlatformState state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_delegate_get_accessible_platform_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (::GtkAccessiblePlatformState) (state_to_c));
  return _temp_ret;
}

// void gtk_editable_delete_selection (GtkEditable* editable /*none*/);
// void gtk_editable_delete_selection (::GtkEditable* editable /*none*/);
void base::EditableBase::delete_selection () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_delete_selection;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void gtk_editable_delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void gtk_editable_delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
void base::EditableBase::delete_text (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void gtk_editable_finish_delegate (GtkEditable* editable /*none*/);
// void gtk_editable_finish_delegate (::GtkEditable* editable /*none*/);
void base::EditableBase::finish_delegate () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_finish_delegate;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// float gtk_editable_get_alignment (GtkEditable* editable /*none*/);
// gfloat gtk_editable_get_alignment (::GtkEditable* editable /*none*/);
gfloat base::EditableBase::get_alignment () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_alignment;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// char* /*full*/ gtk_editable_get_chars (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// char* /*full*/ gtk_editable_get_chars (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
gi::cstring base::EditableBase::get_chars (gint start_pos, gint end_pos) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_chars;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GtkEditable* /*none,nullable*/ gtk_editable_get_delegate (GtkEditable* editable /*none*/);
// ::GtkEditable* /*none,nullable*/ gtk_editable_get_delegate (::GtkEditable* editable /*none*/);
Gtk::Editable base::EditableBase::get_delegate () noexcept
{
  typedef ::GtkEditable* (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_delegate;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_editable_get_editable (GtkEditable* editable /*none*/);
// gboolean gtk_editable_get_editable (::GtkEditable* editable /*none*/);
bool base::EditableBase::get_editable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_editable;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_editable_get_enable_undo (GtkEditable* editable /*none*/);
// gboolean gtk_editable_get_enable_undo (::GtkEditable* editable /*none*/);
bool base::EditableBase::get_enable_undo () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_enable_undo;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// int gtk_editable_get_max_width_chars (GtkEditable* editable /*none*/);
// gint gtk_editable_get_max_width_chars (::GtkEditable* editable /*none*/);
gint base::EditableBase::get_max_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_max_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// int gtk_editable_get_position (GtkEditable* editable /*none*/);
// gint gtk_editable_get_position (::GtkEditable* editable /*none*/);
gint base::EditableBase::get_position () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_position;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_editable_get_selection_bounds (GtkEditable* editable /*none*/, int* start_pos, int* end_pos);
// gboolean gtk_editable_get_selection_bounds (::GtkEditable* editable /*none*/, gint* start_pos, gint* end_pos);
bool base::EditableBase::get_selection_bounds (gint * start_pos, gint * end_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_selection_bounds;
  gint end_pos_o {};
  gint start_pos_o {};
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint*) (start_pos ? &start_pos_o : nullptr), (gint*) (end_pos ? &end_pos_o : nullptr));
  if (end_pos) *end_pos = end_pos_o;
  if (start_pos) *start_pos = start_pos_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::EditableBase::get_selection_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_selection_bounds;
  gint end_pos_o {};
  gint start_pos_o {};
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = start_pos_o;
  auto &&tmp_return_3 = end_pos_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// const char* /*none*/ gtk_editable_get_text (GtkEditable* editable /*none*/);
// const char* /*none*/ gtk_editable_get_text (::GtkEditable* editable /*none*/);
gi::cstring_v base::EditableBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_text;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_editable_get_width_chars (GtkEditable* editable /*none*/);
// gint gtk_editable_get_width_chars (::GtkEditable* editable /*none*/);
gint base::EditableBase::get_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_get_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// void gtk_editable_init_delegate (GtkEditable* editable /*none*/);
// void gtk_editable_init_delegate (::GtkEditable* editable /*none*/);
void base::EditableBase::init_delegate () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_init_delegate;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void gtk_editable_insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void gtk_editable_insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
void base::EditableBase::insert_text (const gi::cstring_v text, gint length, gint & position) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, const char* text, gint length, gint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_insert_text;
  auto position_to_c = position;
  gint position_o = position_to_c;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkEditable*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (gint*) (&position_o));
  position = position_o;
}

// void gtk_editable_select_region (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void gtk_editable_select_region (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
void base::EditableBase::select_region (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_select_region;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void gtk_editable_set_alignment (GtkEditable* editable /*none*/, float xalign);
// void gtk_editable_set_alignment (::GtkEditable* editable /*none*/, gfloat xalign);
void base::EditableBase::set_alignment (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_alignment;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_editable_set_editable (GtkEditable* editable /*none*/, gboolean is_editable);
// void gtk_editable_set_editable (::GtkEditable* editable /*none*/, gboolean is_editable);
void base::EditableBase::set_editable (gboolean is_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gboolean is_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_editable;
  auto is_editable_to_c = is_editable;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gboolean) (is_editable_to_c));
}

// void gtk_editable_set_enable_undo (GtkEditable* editable /*none*/, gboolean enable_undo);
// void gtk_editable_set_enable_undo (::GtkEditable* editable /*none*/, gboolean enable_undo);
void base::EditableBase::set_enable_undo (gboolean enable_undo) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gboolean enable_undo);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_enable_undo;
  auto enable_undo_to_c = enable_undo;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gboolean) (enable_undo_to_c));
}

// void gtk_editable_set_max_width_chars (GtkEditable* editable /*none*/, int n_chars);
// void gtk_editable_set_max_width_chars (::GtkEditable* editable /*none*/, gint n_chars);
void base::EditableBase::set_max_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_max_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (n_chars_to_c));
}

// void gtk_editable_set_position (GtkEditable* editable /*none*/, int position);
// void gtk_editable_set_position (::GtkEditable* editable /*none*/, gint position);
void base::EditableBase::set_position (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_position;
  auto position_to_c = position;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (position_to_c));
}

// void gtk_editable_set_text (GtkEditable* editable /*none*/, const char* text /*none*/);
// void gtk_editable_set_text (::GtkEditable* editable /*none*/, const char* text /*none*/);
void base::EditableBase::set_text (const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkEditable*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_editable_set_width_chars (GtkEditable* editable /*none*/, int n_chars);
// void gtk_editable_set_width_chars (::GtkEditable* editable /*none*/, gint n_chars);
void base::EditableBase::set_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_editable_set_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (n_chars_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/editable_extra_def_impl.hpp>)
#include <gtk/editable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/editable_extra_impl.hpp>)
#include <gtk/editable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EditableInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkEditableInterface *methods = (::GtkEditableInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.changed) methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.delete_text) methods->delete_text = (decltype (methods->delete_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::delete_text_>;
  if (init_data.do_delete_text) methods->do_delete_text = (decltype (methods->do_delete_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::do_delete_text_>;
  if (init_data.do_insert_text) methods->do_insert_text = (decltype (methods->do_insert_text)) detail::method_wrapper<self, void (*) (const gi::cstring_v text, gint length, gint & position), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, detail::arg_info<gi::transfer_full_t, true>>>::wrapper<&self::do_insert_text_>;
  if (init_data.get_delegate) methods->get_delegate = (decltype (methods->get_delegate)) detail::method_wrapper<self, Gtk::Editable (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_delegate_>;
  if (init_data.get_selection_bounds) methods->get_selection_bounds = (decltype (methods->get_selection_bounds)) detail::method_wrapper<self, bool (*) (gint & start_pos, gint & end_pos), gi::transfer_none_t, std::tuple<gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_selection_bounds_>;
  if (init_data.get_text) methods->get_text = (decltype (methods->get_text)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_text_>;
  if (init_data.insert_text) methods->insert_text = (decltype (methods->insert_text)) detail::method_wrapper<self, void (*) (const gi::cstring_v text, gint length, gint & position), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, detail::arg_info<gi::transfer_full_t, true>>>::wrapper<&self::insert_text_>;
  if (init_data.set_selection_bounds) methods->set_selection_bounds = (decltype (methods->set_selection_bounds)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::set_selection_bounds_>;
}

// void Editable::changed (GtkEditable* editable /*none*/);
// void Editable::changed (::GtkEditable* editable /*none*/);
void EditableInterfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void Editable::delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
void EditableInterfaceClassImpl::delete_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->delete_text) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void Editable::do_delete_text (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::do_delete_text (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
void EditableInterfaceClassImpl::do_delete_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->do_delete_text) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void Editable::do_insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void Editable::do_insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
void EditableInterfaceClassImpl::do_insert_text_ (const gi::cstring_v text, gint length, gint & position) noexcept
{
  if (!get_struct_()->do_insert_text) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEditable* editable, const char* text, gint length, gint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_insert_text;
  auto position_to_c = position;
  gint position_o = position_to_c;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkEditable*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (gint*) (&position_o));
  position = position_o;
}

// GtkEditable* /*none,nullable*/ Editable::get_delegate (GtkEditable* editable /*none*/);
// ::GtkEditable* /*none,nullable*/ Editable::get_delegate (::GtkEditable* editable /*none*/);
Gtk::Editable EditableInterfaceClassImpl::get_delegate_ () noexcept
{
  if (!get_struct_()->get_delegate) { g_critical ("no method in class struct"); return {}; }
  typedef ::GtkEditable* (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_delegate;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean Editable::get_selection_bounds (GtkEditable* editable /*none*/, int* start_pos, int* end_pos);
// gboolean Editable::get_selection_bounds (::GtkEditable* editable /*none*/, gint* start_pos, gint* end_pos);
bool EditableInterfaceClassImpl::get_selection_bounds_ (gint & start_pos, gint & end_pos) noexcept
{
  if (!get_struct_()->get_selection_bounds) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_selection_bounds;
  gint end_pos_o {};
  gint start_pos_o {};
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  end_pos = end_pos_o;
  start_pos = start_pos_o;
  return _temp_ret;
}

// const char* /*none*/ Editable::get_text (GtkEditable* editable /*none*/);
// const char* /*none*/ Editable::get_text (::GtkEditable* editable /*none*/);
gi::cstring_v EditableInterfaceClassImpl::get_text_ () noexcept
{
  if (!get_struct_()->get_text) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_text;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void Editable::insert_text (GtkEditable* editable /*none*/, const char* text /*none*/, int length, int* position);
// void Editable::insert_text (::GtkEditable* editable /*none*/, const char* text /*none*/, gint length, gint* position);
void EditableInterfaceClassImpl::insert_text_ (const gi::cstring_v text, gint length, gint & position) noexcept
{
  if (!get_struct_()->insert_text) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEditable* editable, const char* text, gint length, gint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_text;
  auto position_to_c = position;
  gint position_o = position_to_c;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::GtkEditable*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (gint*) (&position_o));
  position = position_o;
}

// void Editable::set_selection_bounds (GtkEditable* editable /*none*/, int start_pos, int end_pos);
// void Editable::set_selection_bounds (::GtkEditable* editable /*none*/, gint start_pos, gint end_pos);
void EditableInterfaceClassImpl::set_selection_bounds_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->set_selection_bounds) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_selection_bounds;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
