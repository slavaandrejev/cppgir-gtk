// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONGROUP_IMPL_HPP_
#define _GI_GIO_ACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_action_group_action_added (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void g_action_group_action_added (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
void base::ActionGroupBase::action_added (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_action_added;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void g_action_group_action_enabled_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean enabled);
// void g_action_group_action_enabled_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean enabled);
void base::ActionGroupBase::action_enabled_changed (const gi::cstring_v action_name, gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_action_enabled_changed;
  auto enabled_to_c = enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean) (enabled_to_c));
}

// void g_action_group_action_removed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void g_action_group_action_removed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
void base::ActionGroupBase::action_removed (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_action_removed;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void g_action_group_action_state_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* state /*none*/);
// void g_action_group_action_state_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* state /*none*/);
void base::ActionGroupBase::action_state_changed (const gi::cstring_v action_name, GLib::Variant state) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_action_state_changed;
  auto state_to_c = gi::unwrap (state, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (state_to_c));
}

// void g_action_group_activate_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// void g_action_group_activate_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
void base::ActionGroupBase::activate_action (const gi::cstring_v action_name, GLib::Variant parameter) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_activate_action;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c));
}
void base::ActionGroupBase::activate_action (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_activate_action;
  auto parameter_to_c = nullptr;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c));
}

// void g_action_group_change_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/);
// void g_action_group_change_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/);
void base::ActionGroupBase::change_action_state (const gi::cstring_v action_name, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_change_action_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (value_to_c));
}

// gboolean g_action_group_get_action_enabled (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean g_action_group_get_action_enabled (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
bool base::ActionGroupBase::get_action_enabled (const gi::cstring_v action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_get_action_enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// const GVariantType* /*none,nullable*/ g_action_group_get_action_parameter_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_group_get_action_parameter_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::VariantType_Ref base::ActionGroupBase::get_action_parameter_type (const gi::cstring_v action_name) noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_get_action_parameter_type;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full,nullable*/ g_action_group_get_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ g_action_group_get_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::Variant base::ActionGroupBase::get_action_state (const gi::cstring_v action_name) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_get_action_state;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full,nullable*/ g_action_group_get_action_state_hint (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ g_action_group_get_action_state_hint (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::Variant base::ActionGroupBase::get_action_state_hint (const gi::cstring_v action_name) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_get_action_state_hint;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GVariantType* /*none,nullable*/ g_action_group_get_action_state_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_group_get_action_state_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::VariantType_Ref base::ActionGroupBase::get_action_state_type (const gi::cstring_v action_name) noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_get_action_state_type;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_action_group_has_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean g_action_group_has_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
bool base::ActionGroupBase::has_action (const gi::cstring_v action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_has_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// gchar** /*full*/ g_action_group_list_actions (GActionGroup* action_group /*none*/);
// char** /*full*/ g_action_group_list_actions (::GActionGroup* action_group /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::ActionGroupBase::list_actions () noexcept
{
  typedef char** (*call_wrap_t) (::GActionGroup* action_group);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_list_actions;
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_action_group_query_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean* enabled, const GVariantType** parameter_type /*none,out,opt*/, const GVariantType** state_type /*none,out,opt*/, GVariant** state_hint /*full,out,opt*/, GVariant** state /*full,out,opt*/);
// gboolean g_action_group_query_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean* enabled, const ::GVariantType** parameter_type /*none,out,opt*/, const ::GVariantType** state_type /*none,out,opt*/, ::GVariant** state_hint /*full,out,opt*/, ::GVariant** state /*full,out,opt*/);
bool base::ActionGroupBase::query_action (const gi::cstring_v action_name, bool & enabled, GLib::VariantType_Ref * parameter_type, GLib::VariantType_Ref * state_type, GLib::Variant * state_hint, GLib::Variant * state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_query_action;
  ::GVariant* state_o {};
  ::GVariant* state_hint_o {};
  const ::GVariantType* state_type_o {};
  const ::GVariantType* parameter_type_o {};
  gboolean enabled_o {};
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean*) (&enabled_o), (const ::GVariantType**) (parameter_type ? &parameter_type_o : nullptr), (const ::GVariantType**) (state_type ? &state_type_o : nullptr), (::GVariant**) (state_hint ? &state_hint_o : nullptr), (::GVariant**) (state ? &state_o : nullptr));
  if (state) *state = gi::wrap (state_o, gi::transfer_full);
  if (state_hint) *state_hint = gi::wrap (state_hint_o, gi::transfer_full);
  if (state_type) *state_type = gi::wrap (state_type_o, gi::transfer_none);
  if (parameter_type) *parameter_type = gi::wrap (parameter_type_o, gi::transfer_none);
  enabled = enabled_o;
  return _temp_ret;
}
std::tuple<bool, bool, GLib::VariantType_Ref, GLib::VariantType_Ref, GLib::Variant, GLib::Variant> base::ActionGroupBase::query_action (const gi::cstring_v action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_group_query_action;
  ::GVariant* state_o {};
  ::GVariant* state_hint_o {};
  const ::GVariantType* state_type_o {};
  const ::GVariantType* parameter_type_o {};
  gboolean enabled_o {};
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean*) (&enabled_o), (const ::GVariantType**) (&parameter_type_o), (const ::GVariantType**) (&state_type_o), (::GVariant**) (&state_hint_o), (::GVariant**) (&state_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = enabled_o;
  auto &&tmp_return_3 = gi::wrap (parameter_type_o, gi::transfer_none);
  auto &&tmp_return_4 = gi::wrap (state_type_o, gi::transfer_none);
  auto &&tmp_return_5 = gi::wrap (state_hint_o, gi::transfer_full);
  auto &&tmp_return_6 = gi::wrap (state_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5),std::move(tmp_return_6));
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra_def_impl.hpp>)
#include <gio/actiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra_impl.hpp>)
#include <gio/actiongroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ActionGroupInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GActionGroupInterface *methods = (::GActionGroupInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.action_added) methods->action_added = (decltype (methods->action_added)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::action_added_>;
  if (init_data.action_enabled_changed) methods->action_enabled_changed = (decltype (methods->action_enabled_changed)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name, gboolean enabled), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::action_enabled_changed_>;
  if (init_data.action_removed) methods->action_removed = (decltype (methods->action_removed)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::action_removed_>;
  if (init_data.action_state_changed) methods->action_state_changed = (decltype (methods->action_state_changed)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name, GLib::Variant state), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::action_state_changed_>;
  if (init_data.activate_action) methods->activate_action = (decltype (methods->activate_action)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name, GLib::Variant parameter), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::activate_action_>;
  if (init_data.change_action_state) methods->change_action_state = (decltype (methods->change_action_state)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name, GLib::Variant value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::change_action_state_>;
  if (init_data.get_action_enabled) methods->get_action_enabled = (decltype (methods->get_action_enabled)) detail::method_wrapper<self, bool (*) (const gi::cstring_v action_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_action_enabled_>;
  if (init_data.get_action_parameter_type) methods->get_action_parameter_type = (decltype (methods->get_action_parameter_type)) detail::method_wrapper<self, GLib::VariantType_Ref (*) (const gi::cstring_v action_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_action_parameter_type_>;
  if (init_data.get_action_state) methods->get_action_state = (decltype (methods->get_action_state)) detail::method_wrapper<self, GLib::Variant (*) (const gi::cstring_v action_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_action_state_>;
  if (init_data.get_action_state_hint) methods->get_action_state_hint = (decltype (methods->get_action_state_hint)) detail::method_wrapper<self, GLib::Variant (*) (const gi::cstring_v action_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_action_state_hint_>;
  if (init_data.get_action_state_type) methods->get_action_state_type = (decltype (methods->get_action_state_type)) detail::method_wrapper<self, GLib::VariantType_Ref (*) (const gi::cstring_v action_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_action_state_type_>;
  if (init_data.has_action) methods->has_action = (decltype (methods->has_action)) detail::method_wrapper<self, bool (*) (const gi::cstring_v action_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::has_action_>;
  if (init_data.list_actions) methods->list_actions = (decltype (methods->list_actions)) detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::list_actions_>;
  if (init_data.query_action) methods->query_action = (decltype (methods->query_action)) detail::method_wrapper<self, bool (*) (const gi::cstring_v action_name, bool & enabled, GLib::VariantType_Ref & parameter_type, GLib::VariantType_Ref & state_type, GLib::Variant & state_hint, GLib::Variant & state), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::query_action_>;
}

// void ActionGroup::action_added (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void ActionGroup::action_added (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
void ActionGroupInterfaceClassImpl::action_added_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->action_added) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_added;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void ActionGroup::action_enabled_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean enabled);
// void ActionGroup::action_enabled_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean enabled);
void ActionGroupInterfaceClassImpl::action_enabled_changed_ (const gi::cstring_v action_name, gboolean enabled) noexcept
{
  if (!get_struct_()->action_enabled_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_enabled_changed;
  auto enabled_to_c = enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean) (enabled_to_c));
}

// void ActionGroup::action_removed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void ActionGroup::action_removed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
void ActionGroupInterfaceClassImpl::action_removed_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->action_removed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_removed;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void ActionGroup::action_state_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* state /*none*/);
// void ActionGroup::action_state_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* state /*none*/);
void ActionGroupInterfaceClassImpl::action_state_changed_ (const gi::cstring_v action_name, GLib::Variant state) noexcept
{
  if (!get_struct_()->action_state_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_state_changed;
  auto state_to_c = gi::unwrap (state, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (state_to_c));
}

// void ActionGroup::activate_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// void ActionGroup::activate_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
void ActionGroupInterfaceClassImpl::activate_action_ (const gi::cstring_v action_name, GLib::Variant parameter) noexcept
{
  if (!get_struct_()->activate_action) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_action;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c));
}

// void ActionGroup::change_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/);
// void ActionGroup::change_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/);
void ActionGroupInterfaceClassImpl::change_action_state_ (const gi::cstring_v action_name, GLib::Variant value) noexcept
{
  if (!get_struct_()->change_action_state) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_action_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (value_to_c));
}

// gboolean ActionGroup::get_action_enabled (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean ActionGroup::get_action_enabled (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
bool ActionGroupInterfaceClassImpl::get_action_enabled_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->get_action_enabled) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// const GVariantType* /*none,nullable*/ ActionGroup::get_action_parameter_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ ActionGroup::get_action_parameter_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::VariantType_Ref ActionGroupInterfaceClassImpl::get_action_parameter_type_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->get_action_parameter_type) { g_critical ("no method in class struct"); return {}; }
  typedef const ::GVariantType* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_parameter_type;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GVariant* /*full,nullable*/ ActionGroup::get_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ ActionGroup::get_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::Variant ActionGroupInterfaceClassImpl::get_action_state_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->get_action_state) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_state;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full,nullable*/ ActionGroup::get_action_state_hint (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ ActionGroup::get_action_state_hint (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::Variant ActionGroupInterfaceClassImpl::get_action_state_hint_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->get_action_state_hint) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_state_hint;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GVariantType* /*none,nullable*/ ActionGroup::get_action_state_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ ActionGroup::get_action_state_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GLib::VariantType_Ref ActionGroupInterfaceClassImpl::get_action_state_type_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->get_action_state_type) { g_critical ("no method in class struct"); return {}; }
  typedef const ::GVariantType* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_state_type;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean ActionGroup::has_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean ActionGroup::has_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
bool ActionGroupInterfaceClassImpl::has_action_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->has_action) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// gchar** /*full*/ ActionGroup::list_actions (GActionGroup* action_group /*none*/);
// char** /*full*/ ActionGroup::list_actions (::GActionGroup* action_group /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> ActionGroupInterfaceClassImpl::list_actions_ () noexcept
{
  if (!get_struct_()->list_actions) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GActionGroup* action_group);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->list_actions;
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean ActionGroup::query_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean* enabled, const GVariantType** parameter_type /*none,out,opt*/, const GVariantType** state_type /*none,out,opt*/, GVariant** state_hint /*full,out,opt*/, GVariant** state /*full,out,opt*/);
// gboolean ActionGroup::query_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean* enabled, const ::GVariantType** parameter_type /*none,out,opt*/, const ::GVariantType** state_type /*none,out,opt*/, ::GVariant** state_hint /*full,out,opt*/, ::GVariant** state /*full,out,opt*/);
bool ActionGroupInterfaceClassImpl::query_action_ (const gi::cstring_v action_name, bool & enabled, GLib::VariantType_Ref & parameter_type, GLib::VariantType_Ref & state_type, GLib::Variant & state_hint, GLib::Variant & state) noexcept
{
  if (!get_struct_()->query_action) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_action;
  ::GVariant* state_o {};
  ::GVariant* state_hint_o {};
  const ::GVariantType* state_type_o {};
  const ::GVariantType* parameter_type_o {};
  gboolean enabled_o {};
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean*) (&enabled_o), (const ::GVariantType**) (&parameter_type_o), (const ::GVariantType**) (&state_type_o), (::GVariant**) (&state_hint_o), (::GVariant**) (&state_o));
  state = gi::wrap (state_o, gi::transfer_full);
  state_hint = gi::wrap (state_hint_o, gi::transfer_full);
  state_type = gi::wrap (state_type_o, gi::transfer_none);
  parameter_type = gi::wrap (parameter_type_o, gi::transfer_none);
  enabled = enabled_o;
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
