// AUTO-GENERATED

#ifndef _GI_GLIB_HOOK_IMPL_HPP_
#define _GI_GLIB_HOOK_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static ::GHook* _field_next_get (const ::GHook* obj) { return (::GHook*) obj->next; }
// ::GHook* /*none*/ Hook::next (const ::GHook* obj /*none*/);
// ::GHook* /*none*/ Hook::next (const ::GHook* obj /*none*/);
GLib::Hook_Ref base::HookBase::next_ () const noexcept
{
  typedef ::GHook* (*call_wrap_t) (const ::GHook* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_get;
  auto _temp_ret = call_wrap_v ((const ::GHook*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GHook* _field_prev_get (const ::GHook* obj) { return (::GHook*) obj->prev; }
// ::GHook* /*none*/ Hook::prev (const ::GHook* obj /*none*/);
// ::GHook* /*none*/ Hook::prev (const ::GHook* obj /*none*/);
GLib::Hook_Ref base::HookBase::prev_ () const noexcept
{
  typedef ::GHook* (*call_wrap_t) (const ::GHook* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_prev_get;
  auto _temp_ret = call_wrap_v ((const ::GHook*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static guint _field_ref_count_get (const ::GHook* obj) { return (guint) obj->ref_count; }
// guint Hook::ref_count (const ::GHook* obj /*none*/);
// guint Hook::ref_count (const ::GHook* obj /*none*/);
guint base::HookBase::ref_count_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GHook* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GHook*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GHook* obj, guint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  Hook::ref_count (::GHook* obj /*none*/, guint _value);
// void Hook::ref_count (::GHook* obj /*none*/, guint _value);
void base::HookBase::ref_count_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GHook* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GHook*) (gobj_()), (guint) (_value_to_c));
}

static gulong _field_hook_id_get (const ::GHook* obj) { return (gulong) obj->hook_id; }
// gulong Hook::hook_id (const ::GHook* obj /*none*/);
// gulong Hook::hook_id (const ::GHook* obj /*none*/);
gulong base::HookBase::hook_id_ () const noexcept
{
  typedef gulong (*call_wrap_t) (const ::GHook* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hook_id_get;
  auto _temp_ret = call_wrap_v ((const ::GHook*) (gobj_()));
  return _temp_ret;
}

static void _field_hook_id_set (::GHook* obj, gulong _value) { obj->hook_id = (decltype(obj->hook_id)) _value; }
//  Hook::hook_id (::GHook* obj /*none*/, gulong _value);
// void Hook::hook_id (::GHook* obj /*none*/, gulong _value);
void base::HookBase::hook_id_ (gulong _value) noexcept
{
  typedef void (*call_wrap_t) (::GHook* obj, gulong _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hook_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GHook*) (gobj_()), (gulong) (_value_to_c));
}

static guint _field_flags_get (const ::GHook* obj) { return (guint) obj->flags; }
// guint Hook::flags (const ::GHook* obj /*none*/);
// guint Hook::flags (const ::GHook* obj /*none*/);
guint base::HookBase::flags_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GHook* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GHook*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GHook* obj, guint _value) { obj->flags = (decltype(obj->flags)) _value; }
//  Hook::flags (::GHook* obj /*none*/, guint _value);
// void Hook::flags (::GHook* obj /*none*/, guint _value);
void base::HookBase::flags_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GHook* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GHook*) (gobj_()), (guint) (_value_to_c));
}

// gint g_hook_compare_ids (GHook* new_hook /*none*/, GHook* sibling /*none*/);
// gint g_hook_compare_ids (::GHook* new_hook /*none*/, ::GHook* sibling /*none*/);
gint base::HookBase::compare_ids (GLib::Hook_Ref sibling) noexcept
{
  typedef gint (*call_wrap_t) (::GHook* new_hook, ::GHook* sibling);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hook_compare_ids;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GHook*) (gobj_()), (::GHook*) (sibling_to_c));
  return _temp_ret;
}

// FAILURE on g_hook_alloc; No such node (<xmlattr>.transfer-ownership)
// gboolean g_hook_destroy (GHookList* hook_list /*none*/, gulong hook_id);
// gboolean g_hook_destroy (::GHookList* hook_list /*none*/, gulong hook_id);
bool base::HookBase::destroy (GLib::HookList_Ref hook_list, gulong hook_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GHookList* hook_list, gulong hook_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hook_destroy;
  auto hook_id_to_c = hook_id;
  auto hook_list_to_c = gi::unwrap (hook_list, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GHookList*) (hook_list_to_c), (gulong) (hook_id_to_c));
  return _temp_ret;
}

// void g_hook_destroy_link (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_destroy_link (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
void base::HookBase::destroy_link (GLib::HookList_Ref hook_list, GLib::Hook_Ref hook) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, ::GHook* hook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hook_destroy_link;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  auto hook_list_to_c = gi::unwrap (hook_list, gi::transfer_none);
  call_wrap_v ((::GHookList*) (hook_list_to_c), (::GHook*) (hook_to_c));
}

// FAILURE on g_hook_find; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_data; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_func; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_func_data; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_first_valid; No such node (<xmlattr>.transfer-ownership)
// void g_hook_free (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_free (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
// IGNORE; marked ignore

// FAILURE on g_hook_get; No such node (<xmlattr>.transfer-ownership)
// void g_hook_insert_before (GHookList* hook_list /*none*/, GHook* sibling /*none,nullable*/, GHook* hook /*none*/);
// void g_hook_insert_before (::GHookList* hook_list /*none*/, ::GHook* sibling /*none,nullable*/, ::GHook* hook /*none*/);
void base::HookBase::insert_before (GLib::HookList_Ref hook_list, GLib::Hook_Ref sibling, GLib::Hook_Ref hook) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, ::GHook* sibling, ::GHook* hook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hook_insert_before;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none);
  auto hook_list_to_c = gi::unwrap (hook_list, gi::transfer_none);
  call_wrap_v ((::GHookList*) (hook_list_to_c), (::GHook*) (sibling_to_c), (::GHook*) (hook_to_c));
}
void base::HookBase::insert_before (GLib::HookList_Ref hook_list, GLib::Hook_Ref hook) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, ::GHook* sibling, ::GHook* hook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hook_insert_before;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  auto sibling_to_c = nullptr;
  auto hook_list_to_c = gi::unwrap (hook_list, gi::transfer_none);
  call_wrap_v ((::GHookList*) (hook_list_to_c), (::GHook*) (sibling_to_c), (::GHook*) (hook_to_c));
}

// void g_hook_insert_sorted (GHookList* hook_list /*none*/, GHook* hook /*none*/, GHookCompareFunc func /*none*/);
// void g_hook_insert_sorted (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/,  func /*none*/);
// SKIP; func type  not supported

// FAILURE on g_hook_next_valid; No such node (<xmlattr>.transfer-ownership)
// void g_hook_prepend (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_prepend (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
void base::HookBase::prepend (GLib::HookList_Ref hook_list, GLib::Hook_Ref hook) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, ::GHook* hook);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_hook_prepend;
  auto hook_to_c = gi::unwrap (hook, gi::transfer_none);
  auto hook_list_to_c = gi::unwrap (hook_list, gi::transfer_none);
  call_wrap_v ((::GHookList*) (hook_list_to_c), (::GHook*) (hook_to_c));
}

// FAILURE on g_hook_ref; No such node (<xmlattr>.transfer-ownership)
// void g_hook_unref (GHookList* hook_list /*none*/, GHook* hook /*none*/);
// void g_hook_unref (::GHookList* hook_list /*none*/, ::GHook* hook /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hook_extra_def_impl.hpp>)
#include <glib/hook_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hook_extra_impl.hpp>)
#include <glib/hook_extra_impl.hpp>
#endif
#endif

#endif
