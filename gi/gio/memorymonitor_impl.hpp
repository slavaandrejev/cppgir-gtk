// AUTO-GENERATED

#ifndef _GI_GIO_MEMORYMONITOR_IMPL_HPP_
#define _GI_GIO_MEMORYMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GMemoryMonitor* /*full*/ g_memory_monitor_dup_default ();
// ::GMemoryMonitor* /*full*/ g_memory_monitor_dup_default ();
Gio::MemoryMonitor base::MemoryMonitorBase::dup_default () noexcept
{
  typedef ::GMemoryMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_memory_monitor_dup_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/memorymonitor_extra_def_impl.hpp>)
#include <gio/memorymonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/memorymonitor_extra_impl.hpp>)
#include <gio/memorymonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MemoryMonitorInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GMemoryMonitorInterface *methods = (::GMemoryMonitorInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.low_memory_warning) methods->low_memory_warning = (decltype (methods->low_memory_warning)) detail::method_wrapper<self, void (*) (Gio::MemoryMonitorWarningLevel level), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::low_memory_warning_>;
}

// void MemoryMonitor::low_memory_warning (GMemoryMonitor* monitor /*none*/, GMemoryMonitorWarningLevel level);
// void MemoryMonitor::low_memory_warning (::GMemoryMonitor* monitor /*none*/, ::GMemoryMonitorWarningLevel level);
void MemoryMonitorInterfaceClassImpl::low_memory_warning_ (Gio::MemoryMonitorWarningLevel level) noexcept
{
  if (!get_struct_()->low_memory_warning) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMemoryMonitor* monitor, ::GMemoryMonitorWarningLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->low_memory_warning;
  auto level_to_c = gi::unwrap (level);
  call_wrap_v ((::GMemoryMonitor*) (gobj_()), (::GMemoryMonitorWarningLevel) (level_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
