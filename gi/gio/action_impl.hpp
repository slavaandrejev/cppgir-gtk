// AUTO-GENERATED

#ifndef _GI_GIO_ACTION_IMPL_HPP_
#define _GI_GIO_ACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_action_name_is_valid (const gchar* action_name /*none*/);
// gboolean g_action_name_is_valid (const char* action_name /*none*/);
bool base::ActionBase::name_is_valid (const gi::cstring_v action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_name_is_valid;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (action_name_to_c));
  return _temp_ret;
}

// gboolean g_action_parse_detailed_name (const gchar* detailed_name /*none*/, gchar** action_name /*full,out,opt*/, GVariant** target_value /*full,out,opt,nullable*/, GError ** error);
// gboolean g_action_parse_detailed_name (const char* detailed_name /*none*/, char** action_name /*full,out,opt*/, ::GVariant** target_value /*full,out,opt,nullable*/, GError ** error);
bool base::ActionBase::parse_detailed_name (const gi::cstring_v detailed_name, gi::cstring * action_name, GLib::Variant * target_value)
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (action_name ? &action_name_o : nullptr), (::GVariant**) (target_value ? &target_value_o : nullptr), &error);
  if (target_value) *target_value = gi::wrap (target_value_o, gi::transfer_full);
  if (action_name) *action_name = gi::wrap (action_name_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ActionBase::parse_detailed_name (const gi::cstring_v detailed_name, gi::cstring * action_name, GLib::Variant * target_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (action_name ? &action_name_o : nullptr), (::GVariant**) (target_value ? &target_value_o : nullptr), _error ? &_error_o : nullptr);
  if (target_value) *target_value = gi::wrap (target_value_o, gi::transfer_full);
  if (action_name) *action_name = gi::wrap (action_name_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
std::tuple<bool, gi::cstring, GLib::Variant> base::ActionBase::parse_detailed_name (const gi::cstring_v detailed_name)
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (&action_name_o), (::GVariant**) (&target_value_o), &error);
  gi::check_error (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (action_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (target_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, GLib::Variant> base::ActionBase::parse_detailed_name (const gi::cstring_v detailed_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (&action_name_o), (::GVariant**) (&target_value_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (action_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (target_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gchar* /*full*/ g_action_print_detailed_name (const gchar* action_name /*none*/, GVariant* target_value /*none,nullable*/);
// char* /*full*/ g_action_print_detailed_name (const char* action_name /*none*/, ::GVariant* target_value /*none,nullable*/);
gi::cstring base::ActionBase::print_detailed_name (const gi::cstring_v action_name, GLib::Variant target_value) noexcept
{
  typedef char* (*call_wrap_t) (const char* action_name, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_print_detailed_name;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (action_name_to_c), (::GVariant*) (target_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::cstring base::ActionBase::print_detailed_name (const gi::cstring_v action_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* action_name, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_print_detailed_name;
  auto target_value_to_c = nullptr;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (action_name_to_c), (::GVariant*) (target_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_action_activate (GAction* action /*none*/, GVariant* parameter /*none,nullable*/);
// void g_action_activate (::GAction* action /*none*/, ::GVariant* parameter /*none,nullable*/);
void base::ActionBase::activate (GLib::Variant parameter) noexcept
{
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_activate;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (parameter_to_c));
}
void base::ActionBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_activate;
  auto parameter_to_c = nullptr;
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (parameter_to_c));
}

// void g_action_change_state (GAction* action /*none*/, GVariant* value /*none*/);
// void g_action_change_state (::GAction* action /*none*/, ::GVariant* value /*none*/);
void base::ActionBase::change_state (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_change_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (value_to_c));
}

// gboolean g_action_get_enabled (GAction* action /*none*/);
// gboolean g_action_get_enabled (::GAction* action /*none*/);
bool base::ActionBase::get_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_get_enabled;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ g_action_get_name (GAction* action /*none*/);
// const char* /*none*/ g_action_get_name (::GAction* action /*none*/);
gi::cstring_v base::ActionBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_get_name;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GVariantType* /*none,nullable*/ g_action_get_parameter_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_get_parameter_type (::GAction* action /*none*/);
GLib::VariantType_Ref base::ActionBase::get_parameter_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_get_parameter_type;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full,nullable*/ g_action_get_state (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ g_action_get_state (::GAction* action /*none*/);
GLib::Variant base::ActionBase::get_state () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_get_state;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full,nullable*/ g_action_get_state_hint (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ g_action_get_state_hint (::GAction* action /*none*/);
GLib::Variant base::ActionBase::get_state_hint () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_get_state_hint;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GVariantType* /*none,nullable*/ g_action_get_state_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_get_state_type (::GAction* action /*none*/);
GLib::VariantType_Ref base::ActionBase::get_state_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_get_state_type;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/action_extra_def_impl.hpp>)
#include <gio/action_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/action_extra_impl.hpp>)
#include <gio/action_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ActionInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GActionInterface *methods = (::GActionInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.activate) methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (GLib::Variant parameter), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::activate_>;
  if (init_data.change_state) methods->change_state = (decltype (methods->change_state)) detail::method_wrapper<self, void (*) (GLib::Variant value), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::change_state_>;
  if (init_data.get_enabled) methods->get_enabled = (decltype (methods->get_enabled)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_enabled_>;
  if (init_data.get_name) methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_name_>;
  if (init_data.get_parameter_type) methods->get_parameter_type = (decltype (methods->get_parameter_type)) detail::method_wrapper<self, GLib::VariantType_Ref (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_parameter_type_>;
  if (init_data.get_state) methods->get_state = (decltype (methods->get_state)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_state_>;
  if (init_data.get_state_hint) methods->get_state_hint = (decltype (methods->get_state_hint)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_state_hint_>;
  if (init_data.get_state_type) methods->get_state_type = (decltype (methods->get_state_type)) detail::method_wrapper<self, GLib::VariantType_Ref (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_state_type_>;
}

// void Action::activate (GAction* action /*none*/, GVariant* parameter /*none,nullable*/);
// void Action::activate (::GAction* action /*none*/, ::GVariant* parameter /*none,nullable*/);
void ActionInterfaceClassImpl::activate_ (GLib::Variant parameter) noexcept
{
  if (!get_struct_()->activate) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (parameter_to_c));
}

// void Action::change_state (GAction* action /*none*/, GVariant* value /*none*/);
// void Action::change_state (::GAction* action /*none*/, ::GVariant* value /*none*/);
void ActionInterfaceClassImpl::change_state_ (GLib::Variant value) noexcept
{
  if (!get_struct_()->change_state) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (value_to_c));
}

// gboolean Action::get_enabled (GAction* action /*none*/);
// gboolean Action::get_enabled (::GAction* action /*none*/);
bool ActionInterfaceClassImpl::get_enabled_ () noexcept
{
  if (!get_struct_()->get_enabled) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_enabled;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none*/ Action::get_name (GAction* action /*none*/);
// const char* /*none*/ Action::get_name (::GAction* action /*none*/);
gi::cstring_v ActionInterfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GVariantType* /*none,nullable*/ Action::get_parameter_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ Action::get_parameter_type (::GAction* action /*none*/);
GLib::VariantType_Ref ActionInterfaceClassImpl::get_parameter_type_ () noexcept
{
  if (!get_struct_()->get_parameter_type) { g_critical ("no method in class struct"); return {}; }
  typedef const ::GVariantType* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_parameter_type;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full,nullable*/ Action::get_state (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ Action::get_state (::GAction* action /*none*/);
GLib::Variant ActionInterfaceClassImpl::get_state_ () noexcept
{
  if (!get_struct_()->get_state) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_state;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full,nullable*/ Action::get_state_hint (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ Action::get_state_hint (::GAction* action /*none*/);
GLib::Variant ActionInterfaceClassImpl::get_state_hint_ () noexcept
{
  if (!get_struct_()->get_state_hint) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_state_hint;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GVariantType* /*none,nullable*/ Action::get_state_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ Action::get_state_type (::GAction* action /*none*/);
GLib::VariantType_Ref ActionInterfaceClassImpl::get_state_type_ () noexcept
{
  if (!get_struct_()->get_state_type) { g_critical ("no method in class struct"); return {}; }
  typedef const ::GVariantType* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_state_type;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
