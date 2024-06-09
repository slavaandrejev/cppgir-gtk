// AUTO-GENERATED

#ifndef _GI_GIO_SRVTARGET_IMPL_HPP_
#define _GI_GIO_SRVTARGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSrvTarget* /*full*/ g_srv_target_new (const gchar* hostname /*none*/, guint16 port, guint16 priority, guint16 weight);
// ::GSrvTarget* /*full*/ g_srv_target_new (const char* hostname /*none*/, guint16 port, guint16 priority, guint16 weight);
Gio::SrvTarget base::SrvTargetBase::new_ (const gi::cstring_v hostname, guint16 port, guint16 priority, guint16 weight) noexcept
{
  typedef ::GSrvTarget* (*call_wrap_t) (const char* hostname, guint16 port, guint16 priority, guint16 weight);
  call_wrap_t call_wrap_v = (call_wrap_t) g_srv_target_new;
  auto weight_to_c = weight;
  auto priority_to_c = priority;
  auto port_to_c = port;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c), (guint16) (port_to_c), (guint16) (priority_to_c), (guint16) (weight_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSrvTarget* /*full*/ g_srv_target_copy (GSrvTarget* target /*none*/);
// ::GSrvTarget* /*full*/ g_srv_target_copy (::GSrvTarget* target /*none*/);
Gio::SrvTarget base::SrvTargetBase::copy () noexcept
{
  typedef ::GSrvTarget* (*call_wrap_t) (::GSrvTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_srv_target_copy;
  auto _temp_ret = call_wrap_v ((::GSrvTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_srv_target_free (GSrvTarget* target /*none*/);
// void g_srv_target_free (::GSrvTarget* target /*none*/);
// IGNORE; marked ignore

// const gchar* /*none*/ g_srv_target_get_hostname (GSrvTarget* target /*none*/);
// const char* /*none*/ g_srv_target_get_hostname (::GSrvTarget* target /*none*/);
gi::cstring_v base::SrvTargetBase::get_hostname () noexcept
{
  typedef const char* (*call_wrap_t) (::GSrvTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_srv_target_get_hostname;
  auto _temp_ret = call_wrap_v ((::GSrvTarget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint16 g_srv_target_get_port (GSrvTarget* target /*none*/);
// guint16 g_srv_target_get_port (::GSrvTarget* target /*none*/);
guint16 base::SrvTargetBase::get_port () noexcept
{
  typedef guint16 (*call_wrap_t) (::GSrvTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_srv_target_get_port;
  auto _temp_ret = call_wrap_v ((::GSrvTarget*) (gobj_()));
  return _temp_ret;
}

// guint16 g_srv_target_get_priority (GSrvTarget* target /*none*/);
// guint16 g_srv_target_get_priority (::GSrvTarget* target /*none*/);
guint16 base::SrvTargetBase::get_priority () noexcept
{
  typedef guint16 (*call_wrap_t) (::GSrvTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_srv_target_get_priority;
  auto _temp_ret = call_wrap_v ((::GSrvTarget*) (gobj_()));
  return _temp_ret;
}

// guint16 g_srv_target_get_weight (GSrvTarget* target /*none*/);
// guint16 g_srv_target_get_weight (::GSrvTarget* target /*none*/);
guint16 base::SrvTargetBase::get_weight () noexcept
{
  typedef guint16 (*call_wrap_t) (::GSrvTarget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_srv_target_get_weight;
  auto _temp_ret = call_wrap_v ((::GSrvTarget*) (gobj_()));
  return _temp_ret;
}

// GList* /*full*/ g_srv_target_list_sort (GList* targets /*none*/);
// ::GList* /*full*/ g_srv_target_list_sort (::GList* targets /*none*/);
gi::Collection<GList, void*, gi::transfer_full_t> base::SrvTargetBase::list_sort (gi::CollectionParameter<GList, void*, gi::transfer_none_t> targets) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GList* targets);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_srv_target_list_sort;
  auto targets_w = unwrap (std::move(targets), gi::transfer_none);
  auto targets_to_c = targets_w;
  auto _temp_ret = call_wrap_v ((::GList*) (targets_to_c));
  return gi::wrap_to<gi::Collection<GList, void*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/srvtarget_extra_def_impl.hpp>)
#include <gio/srvtarget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/srvtarget_extra_impl.hpp>)
#include <gio/srvtarget_extra_impl.hpp>
#endif
#endif

#endif
