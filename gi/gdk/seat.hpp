// AUTO-GENERATED

#ifndef _GI_GDK_SEAT_HPP_
#define _GI_GDK_SEAT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class DeviceTool;
class Display;

class Seat;

namespace base {


#define GI_GDK_SEAT_BASE base::SeatBase
class SeatBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkSeat BaseObjectType;

SeatBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_seat_get_type(); } 

// GdkSeatCapabilities gdk_seat_get_capabilities (GdkSeat* seat /*none*/);
// ::GdkSeatCapabilities gdk_seat_get_capabilities (::GdkSeat* seat /*none*/);
GI_INLINE_DECL Gdk::SeatCapabilities get_capabilities () noexcept;

// GList* /*container*/ gdk_seat_get_devices (GdkSeat* seat /*none*/, GdkSeatCapabilities capabilities);
// ::GList* /*container*/ gdk_seat_get_devices (::GdkSeat* seat /*none*/, ::GdkSeatCapabilities capabilities);
GI_INLINE_DECL gi::Collection<GList, ::GdkDevice*, gi::transfer_container_t> get_devices (Gdk::SeatCapabilities capabilities) noexcept;

// GdkDisplay* /*none*/ gdk_seat_get_display (GdkSeat* seat /*none*/);
// ::GdkDisplay* /*none*/ gdk_seat_get_display (::GdkSeat* seat /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkDevice* /*none,nullable*/ gdk_seat_get_keyboard (GdkSeat* seat /*none*/);
// ::GdkDevice* /*none,nullable*/ gdk_seat_get_keyboard (::GdkSeat* seat /*none*/);
GI_INLINE_DECL Gdk::Device get_keyboard () noexcept;

// GdkDevice* /*none,nullable*/ gdk_seat_get_pointer (GdkSeat* seat /*none*/);
// ::GdkDevice* /*none,nullable*/ gdk_seat_get_pointer (::GdkSeat* seat /*none*/);
GI_INLINE_DECL Gdk::Device get_pointer () noexcept;

// GList* /*container*/ gdk_seat_get_tools (GdkSeat* seat /*none*/);
// ::GList* /*container*/ gdk_seat_get_tools (::GdkSeat* seat /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GdkDeviceTool*, gi::transfer_container_t> get_tools () noexcept;

gi::property_proxy<Gdk::Display, base::SeatBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::SeatBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::SeatBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::SeatBase> (*this, "display"); }

// (signal) void device-added ( device /*none*/);
// (signal) void device-added (::GdkDevice* device /*none*/);
gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> signal_device_added()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> (*this, "device-added"); }

// (signal) void device-removed ( device /*none*/);
// (signal) void device-removed (::GdkDevice* device /*none*/);
gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> signal_device_removed()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::Device device)> (*this, "device-removed"); }

// (signal) void tool-added ( tool /*none*/);
// (signal) void tool-added (::GdkDeviceTool* tool /*none*/);
gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> signal_tool_added()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> (*this, "tool-added"); }

// (signal) void tool-removed ( tool /*none*/);
// (signal) void tool-removed (::GdkDeviceTool* tool /*none*/);
gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> signal_tool_removed()
{ return gi::signal_proxy<void(Gdk::Seat, Gdk::DeviceTool tool)> (*this, "tool-removed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/seat_extra_def.hpp>)
#include <gdk/seat_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/seat_extra.hpp>)
#include <gdk/seat_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Seat : public GI_GDK_SEAT_BASE
{ typedef GI_GDK_SEAT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkSeat>
{ typedef Gdk::Seat type; }; 

} // namespace repository

} // namespace gi

#endif
