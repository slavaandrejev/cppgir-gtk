// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONMAP_IMPL_HPP_
#define _GI_GIO_ACTIONMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_action_map_add_action (GActionMap* action_map /*none*/, GAction* action /*none*/);
// void g_action_map_add_action (::GActionMap* action_map /*none*/, ::GAction* action /*none*/);
void base::ActionMapBase::add_action (Gio::Action action) noexcept
{
  typedef void (*call_wrap_t) (::GActionMap* action_map, ::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_map_add_action;
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  call_wrap_v ((::GActionMap*) (gobj_()), (::GAction*) (action_to_c));
}

// void g_action_map_add_action_entries (GActionMap* action_map /*none*/, const GActionEntry* entries /*none*/, gint n_entries, gpointer user_data);
// void g_action_map_add_action_entries (::GActionMap* action_map /*none*/, const ::GActionEntry** entries /*none*/, gint n_entries, void* user_data);
// SKIP; entries in boxed array not supported (depth 1)

// GAction* /*none,nullable*/ g_action_map_lookup_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// ::GAction* /*none,nullable*/ g_action_map_lookup_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
Gio::Action base::ActionMapBase::lookup_action (const gi::cstring_v action_name) noexcept
{
  typedef ::GAction* (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_map_lookup_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_action_map_remove_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// void g_action_map_remove_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
void base::ActionMapBase::remove_action (const gi::cstring_v action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_action_map_remove_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
}

// void g_action_map_remove_action_entries (GActionMap* action_map /*none*/, const GActionEntry* entries /*none*/, gint n_entries);
// void g_action_map_remove_action_entries (::GActionMap* action_map /*none*/, const ::GActionEntry** entries /*none*/, gint n_entries);
// SKIP; entries in boxed array not supported (depth 1)


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actionmap_extra_def_impl.hpp>)
#include <gio/actionmap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actionmap_extra_impl.hpp>)
#include <gio/actionmap_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ActionMapInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GActionMapInterface *methods = (::GActionMapInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.add_action) methods->add_action = (decltype (methods->add_action)) detail::method_wrapper<self, void (*) (Gio::Action action), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::add_action_>;
  if (init_data.lookup_action) methods->lookup_action = (decltype (methods->lookup_action)) detail::method_wrapper<self, Gio::Action (*) (const gi::cstring_v action_name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::lookup_action_>;
  if (init_data.remove_action) methods->remove_action = (decltype (methods->remove_action)) detail::method_wrapper<self, void (*) (const gi::cstring_v action_name), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::remove_action_>;
}

// void ActionMap::add_action (GActionMap* action_map /*none*/, GAction* action /*none*/);
// void ActionMap::add_action (::GActionMap* action_map /*none*/, ::GAction* action /*none*/);
void ActionMapInterfaceClassImpl::add_action_ (Gio::Action action) noexcept
{
  if (!get_struct_()->add_action) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionMap* action_map, ::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_action;
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  call_wrap_v ((::GActionMap*) (gobj_()), (::GAction*) (action_to_c));
}

// GAction* /*none,nullable*/ ActionMap::lookup_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// ::GAction* /*none,nullable*/ ActionMap::lookup_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
Gio::Action ActionMapInterfaceClassImpl::lookup_action_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->lookup_action) { g_critical ("no method in class struct"); return {}; }
  typedef ::GAction* (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void ActionMap::remove_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// void ActionMap::remove_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
void ActionMapInterfaceClassImpl::remove_action_ (const gi::cstring_v action_name) noexcept
{
  if (!get_struct_()->remove_action) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none);
  call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
