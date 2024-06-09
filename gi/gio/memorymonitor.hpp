// AUTO-GENERATED

#ifndef _GI_GIO_MEMORYMONITOR_HPP_
#define _GI_GIO_MEMORYMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {


class MemoryMonitor;

namespace base {


#define GI_GIO_MEMORYMONITOR_BASE base::MemoryMonitorBase
class MemoryMonitorBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GMemoryMonitor BaseObjectType;

MemoryMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_memory_monitor_get_type(); } 

// GMemoryMonitor* /*full*/ g_memory_monitor_dup_default ();
// ::GMemoryMonitor* /*full*/ g_memory_monitor_dup_default ();
static GI_INLINE_DECL Gio::MemoryMonitor dup_default () noexcept;

// (signal) void low-memory-warning ( level);
// (signal) void low-memory-warning (::GMemoryMonitorWarningLevel level);
gi::signal_proxy<void(Gio::MemoryMonitor, Gio::MemoryMonitorWarningLevel level)> signal_low_memory_warning()
{ return gi::signal_proxy<void(Gio::MemoryMonitor, Gio::MemoryMonitorWarningLevel level)> (*this, "low-memory-warning"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/memorymonitor_extra_def.hpp>)
#include <gio/memorymonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/memorymonitor_extra.hpp>)
#include <gio/memorymonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MemoryMonitor : public GI_GIO_MEMORYMONITOR_BASE
{ typedef GI_GIO_MEMORYMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMemoryMonitor>
{ typedef Gio::MemoryMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MemoryMonitorInterfaceDef
{
typedef MemoryMonitorInterfaceDef self;
public:
typedef Gio::MemoryMonitor instance_type;
typedef ::GMemoryMonitorInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(low_memory_warning) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MemoryMonitorInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void MemoryMonitor::low_memory_warning (GMemoryMonitor* monitor /*none*/, GMemoryMonitorWarningLevel level);
// void MemoryMonitor::low_memory_warning (::GMemoryMonitor* monitor /*none*/, ::GMemoryMonitorWarningLevel level);
virtual void low_memory_warning_ (Gio::MemoryMonitorWarningLevel level) noexcept = 0;


};

using MemoryMonitorImpl = detail::InterfaceImpl<MemoryMonitorInterfaceDef>;

class MemoryMonitorInterfaceClassImpl: public detail::InterfaceClassImpl<MemoryMonitorImpl>
{
friend class internal::MemoryMonitorInterfaceDef;
typedef MemoryMonitorInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<MemoryMonitorImpl> super;

protected:
using super::super;

// void MemoryMonitor::low_memory_warning (GMemoryMonitor* monitor /*none*/, GMemoryMonitorWarningLevel level);
// void MemoryMonitor::low_memory_warning (::GMemoryMonitor* monitor /*none*/, ::GMemoryMonitorWarningLevel level);
GI_INLINE_DECL void low_memory_warning_ (Gio::MemoryMonitorWarningLevel level) noexcept override;


};


struct MemoryMonitorInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(MemoryMonitorInterfaceClassImpl, low_memory_warning)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, low_memory_warning)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
