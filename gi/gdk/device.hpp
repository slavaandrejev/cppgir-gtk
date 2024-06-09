// AUTO-GENERATED

#ifndef _GI_GDK_DEVICE_HPP_
#define _GI_GDK_DEVICE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class DeviceTool;
class Display;
class Seat;
class Surface;

class Device;

namespace base {


#define GI_GDK_DEVICE_BASE base::DeviceBase
class DeviceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDevice BaseObjectType;

DeviceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_device_get_type(); } 

// gboolean gdk_device_get_caps_lock_state (GdkDevice* device /*none*/);
// gboolean gdk_device_get_caps_lock_state (::GdkDevice* device /*none*/);
GI_INLINE_DECL bool get_caps_lock_state () noexcept;

// GdkDeviceTool* /*none,nullable*/ gdk_device_get_device_tool (GdkDevice* device /*none*/);
// ::GdkDeviceTool* /*none,nullable*/ gdk_device_get_device_tool (::GdkDevice* device /*none*/);
GI_INLINE_DECL Gdk::DeviceTool get_device_tool () noexcept;

// PangoDirection gdk_device_get_direction (GdkDevice* device /*none*/);
// ::PangoDirection gdk_device_get_direction (::GdkDevice* device /*none*/);
GI_INLINE_DECL Pango::Direction get_direction () noexcept;

// GdkDisplay* /*none*/ gdk_device_get_display (GdkDevice* device /*none*/);
// ::GdkDisplay* /*none*/ gdk_device_get_display (::GdkDevice* device /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// gboolean gdk_device_get_has_cursor (GdkDevice* device /*none*/);
// gboolean gdk_device_get_has_cursor (::GdkDevice* device /*none*/);
GI_INLINE_DECL bool get_has_cursor () noexcept;

// GdkModifierType gdk_device_get_modifier_state (GdkDevice* device /*none*/);
// ::GdkModifierType gdk_device_get_modifier_state (::GdkDevice* device /*none*/);
GI_INLINE_DECL Gdk::ModifierType get_modifier_state () noexcept;

// const char* /*none*/ gdk_device_get_name (GdkDevice* device /*none*/);
// const char* /*none*/ gdk_device_get_name (::GdkDevice* device /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gboolean gdk_device_get_num_lock_state (GdkDevice* device /*none*/);
// gboolean gdk_device_get_num_lock_state (::GdkDevice* device /*none*/);
GI_INLINE_DECL bool get_num_lock_state () noexcept;

// guint gdk_device_get_num_touches (GdkDevice* device /*none*/);
// guint gdk_device_get_num_touches (::GdkDevice* device /*none*/);
GI_INLINE_DECL guint get_num_touches () noexcept;

// const char* /*none,nullable*/ gdk_device_get_product_id (GdkDevice* device /*none*/);
// const char* /*none,nullable*/ gdk_device_get_product_id (::GdkDevice* device /*none*/);
GI_INLINE_DECL gi::cstring_v get_product_id () noexcept;

// gboolean gdk_device_get_scroll_lock_state (GdkDevice* device /*none*/);
// gboolean gdk_device_get_scroll_lock_state (::GdkDevice* device /*none*/);
GI_INLINE_DECL bool get_scroll_lock_state () noexcept;

// GdkSeat* /*none*/ gdk_device_get_seat (GdkDevice* device /*none*/);
// ::GdkSeat* /*none*/ gdk_device_get_seat (::GdkDevice* device /*none*/);
GI_INLINE_DECL Gdk::Seat get_seat () noexcept;

// GdkInputSource gdk_device_get_source (GdkDevice* device /*none*/);
// ::GdkInputSource gdk_device_get_source (::GdkDevice* device /*none*/);
GI_INLINE_DECL Gdk::InputSource get_source () noexcept;

// GdkSurface* /*none,nullable*/ gdk_device_get_surface_at_position (GdkDevice* device /*none*/, double* win_x, double* win_y);
// ::GdkSurface* /*none,nullable*/ gdk_device_get_surface_at_position (::GdkDevice* device /*none*/, gdouble* win_x, gdouble* win_y);
GI_INLINE_DECL Gdk::Surface get_surface_at_position (gdouble * win_x, gdouble * win_y) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Surface, gdouble, gdouble> get_surface_at_position () noexcept;

// guint32 gdk_device_get_timestamp (GdkDevice* device /*none*/);
// guint32 gdk_device_get_timestamp (::GdkDevice* device /*none*/);
GI_INLINE_DECL guint32 get_timestamp () noexcept;

// const char* /*none,nullable*/ gdk_device_get_vendor_id (GdkDevice* device /*none*/);
// const char* /*none,nullable*/ gdk_device_get_vendor_id (::GdkDevice* device /*none*/);
GI_INLINE_DECL gi::cstring_v get_vendor_id () noexcept;

// gboolean gdk_device_has_bidi_layouts (GdkDevice* device /*none*/);
// gboolean gdk_device_has_bidi_layouts (::GdkDevice* device /*none*/);
GI_INLINE_DECL bool has_bidi_layouts () noexcept;

gi::property_proxy<bool, base::DeviceBase> property_caps_lock_state()
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "caps-lock-state"); }
const gi::property_proxy<bool, base::DeviceBase> property_caps_lock_state() const
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "caps-lock-state"); }

gi::property_proxy<Pango::Direction, base::DeviceBase> property_direction()
{ return gi::property_proxy<Pango::Direction, base::DeviceBase> (*this, "direction"); }
const gi::property_proxy<Pango::Direction, base::DeviceBase> property_direction() const
{ return gi::property_proxy<Pango::Direction, base::DeviceBase> (*this, "direction"); }

gi::property_proxy<Gdk::Display, base::DeviceBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DeviceBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DeviceBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DeviceBase> (*this, "display"); }

gi::property_proxy<bool, base::DeviceBase> property_has_bidi_layouts()
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "has-bidi-layouts"); }
const gi::property_proxy<bool, base::DeviceBase> property_has_bidi_layouts() const
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "has-bidi-layouts"); }

gi::property_proxy<bool, base::DeviceBase> property_has_cursor()
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "has-cursor"); }
const gi::property_proxy<bool, base::DeviceBase> property_has_cursor() const
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "has-cursor"); }

gi::property_proxy<Gdk::ModifierType, base::DeviceBase> property_modifier_state()
{ return gi::property_proxy<Gdk::ModifierType, base::DeviceBase> (*this, "modifier-state"); }
const gi::property_proxy<Gdk::ModifierType, base::DeviceBase> property_modifier_state() const
{ return gi::property_proxy<Gdk::ModifierType, base::DeviceBase> (*this, "modifier-state"); }

gi::property_proxy<guint, base::DeviceBase> property_n_axes()
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "n-axes"); }
const gi::property_proxy<guint, base::DeviceBase> property_n_axes() const
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "n-axes"); }

gi::property_proxy<gi::cstring, base::DeviceBase> property_name()
{ return gi::property_proxy<gi::cstring, base::DeviceBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::DeviceBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::DeviceBase> (*this, "name"); }

gi::property_proxy<bool, base::DeviceBase> property_num_lock_state()
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "num-lock-state"); }
const gi::property_proxy<bool, base::DeviceBase> property_num_lock_state() const
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "num-lock-state"); }

gi::property_proxy<guint, base::DeviceBase> property_num_touches()
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "num-touches"); }
const gi::property_proxy<guint, base::DeviceBase> property_num_touches() const
{ return gi::property_proxy<guint, base::DeviceBase> (*this, "num-touches"); }

gi::property_proxy<gi::cstring, base::DeviceBase> property_product_id()
{ return gi::property_proxy<gi::cstring, base::DeviceBase> (*this, "product-id"); }
const gi::property_proxy<gi::cstring, base::DeviceBase> property_product_id() const
{ return gi::property_proxy<gi::cstring, base::DeviceBase> (*this, "product-id"); }

gi::property_proxy<bool, base::DeviceBase> property_scroll_lock_state()
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "scroll-lock-state"); }
const gi::property_proxy<bool, base::DeviceBase> property_scroll_lock_state() const
{ return gi::property_proxy<bool, base::DeviceBase> (*this, "scroll-lock-state"); }

gi::property_proxy<Gdk::Seat, base::DeviceBase> property_seat()
{ return gi::property_proxy<Gdk::Seat, base::DeviceBase> (*this, "seat"); }
const gi::property_proxy<Gdk::Seat, base::DeviceBase> property_seat() const
{ return gi::property_proxy<Gdk::Seat, base::DeviceBase> (*this, "seat"); }

gi::property_proxy<Gdk::InputSource, base::DeviceBase> property_source()
{ return gi::property_proxy<Gdk::InputSource, base::DeviceBase> (*this, "source"); }
const gi::property_proxy<Gdk::InputSource, base::DeviceBase> property_source() const
{ return gi::property_proxy<Gdk::InputSource, base::DeviceBase> (*this, "source"); }

gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> property_tool()
{ return gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> (*this, "tool"); }
const gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> property_tool() const
{ return gi::property_proxy<Gdk::DeviceTool, base::DeviceBase> (*this, "tool"); }

gi::property_proxy<gi::cstring, base::DeviceBase> property_vendor_id()
{ return gi::property_proxy<gi::cstring, base::DeviceBase> (*this, "vendor-id"); }
const gi::property_proxy<gi::cstring, base::DeviceBase> property_vendor_id() const
{ return gi::property_proxy<gi::cstring, base::DeviceBase> (*this, "vendor-id"); }

// (signal) void changed ();
// (signal) void changed ();
gi::signal_proxy<void(Gdk::Device)> signal_changed()
{ return gi::signal_proxy<void(Gdk::Device)> (*this, "changed"); }

// (signal) void tool-changed ( tool /*none*/);
// (signal) void tool-changed (::GdkDeviceTool* tool /*none*/);
gi::signal_proxy<void(Gdk::Device, Gdk::DeviceTool tool)> signal_tool_changed()
{ return gi::signal_proxy<void(Gdk::Device, Gdk::DeviceTool tool)> (*this, "tool-changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/device_extra_def.hpp>)
#include <gdk/device_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/device_extra.hpp>)
#include <gdk/device_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Device : public GI_GDK_DEVICE_BASE
{ typedef GI_GDK_DEVICE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDevice>
{ typedef Gdk::Device type; }; 

} // namespace repository

} // namespace gi

#endif
