// AUTO-GENERATED

#ifndef _GI_GDK_MONITOR_HPP_
#define _GI_GDK_MONITOR_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;
class Rectangle;
class Rectangle_Ref;

class Monitor;

namespace base {


#define GI_GDK_MONITOR_BASE base::MonitorBase
class MonitorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkMonitor BaseObjectType;

MonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_monitor_get_type(); } 

// const char* /*none,nullable*/ gdk_monitor_get_connector (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_connector (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gi::cstring_v get_connector () noexcept;

// const char* /*none,nullable*/ gdk_monitor_get_description (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_description (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// GdkDisplay* /*none*/ gdk_monitor_get_display (GdkMonitor* monitor /*none*/);
// ::GdkDisplay* /*none*/ gdk_monitor_get_display (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// void gdk_monitor_get_geometry (GdkMonitor* monitor /*none*/, GdkRectangle* geometry /*none,out,ca*/);
// void gdk_monitor_get_geometry (::GdkMonitor* monitor /*none*/, ::GdkRectangle* geometry /*none,out,ca*/);
GI_INLINE_DECL void get_geometry (Gdk::Rectangle & geometry) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_geometry () noexcept;

// int gdk_monitor_get_height_mm (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_height_mm (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gint get_height_mm () noexcept;

// const char* /*none,nullable*/ gdk_monitor_get_manufacturer (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_manufacturer (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gi::cstring_v get_manufacturer () noexcept;

// const char* /*none,nullable*/ gdk_monitor_get_model (GdkMonitor* monitor /*none*/);
// const char* /*none,nullable*/ gdk_monitor_get_model (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gi::cstring_v get_model () noexcept;

// int gdk_monitor_get_refresh_rate (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_refresh_rate (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gint get_refresh_rate () noexcept;

// int gdk_monitor_get_scale_factor (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_scale_factor (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gint get_scale_factor () noexcept;

// GdkSubpixelLayout gdk_monitor_get_subpixel_layout (GdkMonitor* monitor /*none*/);
// ::GdkSubpixelLayout gdk_monitor_get_subpixel_layout (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL Gdk::SubpixelLayout get_subpixel_layout () noexcept;

// int gdk_monitor_get_width_mm (GdkMonitor* monitor /*none*/);
// gint gdk_monitor_get_width_mm (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL gint get_width_mm () noexcept;

// gboolean gdk_monitor_is_valid (GdkMonitor* monitor /*none*/);
// gboolean gdk_monitor_is_valid (::GdkMonitor* monitor /*none*/);
GI_INLINE_DECL bool is_valid () noexcept;

gi::property_proxy<gi::cstring, base::MonitorBase> property_connector()
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "connector"); }
const gi::property_proxy<gi::cstring, base::MonitorBase> property_connector() const
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "connector"); }

gi::property_proxy<gi::cstring, base::MonitorBase> property_description()
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "description"); }
const gi::property_proxy<gi::cstring, base::MonitorBase> property_description() const
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "description"); }

gi::property_proxy<Gdk::Display, base::MonitorBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::MonitorBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::MonitorBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::MonitorBase> (*this, "display"); }

gi::property_proxy<Gdk::Rectangle, base::MonitorBase> property_geometry()
{ return gi::property_proxy<Gdk::Rectangle, base::MonitorBase> (*this, "geometry"); }
const gi::property_proxy<Gdk::Rectangle, base::MonitorBase> property_geometry() const
{ return gi::property_proxy<Gdk::Rectangle, base::MonitorBase> (*this, "geometry"); }

gi::property_proxy<gint, base::MonitorBase> property_height_mm()
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "height-mm"); }
const gi::property_proxy<gint, base::MonitorBase> property_height_mm() const
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "height-mm"); }

gi::property_proxy<gi::cstring, base::MonitorBase> property_manufacturer()
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "manufacturer"); }
const gi::property_proxy<gi::cstring, base::MonitorBase> property_manufacturer() const
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "manufacturer"); }

gi::property_proxy<gi::cstring, base::MonitorBase> property_model()
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "model"); }
const gi::property_proxy<gi::cstring, base::MonitorBase> property_model() const
{ return gi::property_proxy<gi::cstring, base::MonitorBase> (*this, "model"); }

gi::property_proxy<gint, base::MonitorBase> property_refresh_rate()
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "refresh-rate"); }
const gi::property_proxy<gint, base::MonitorBase> property_refresh_rate() const
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "refresh-rate"); }

gi::property_proxy<gint, base::MonitorBase> property_scale_factor()
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "scale-factor"); }
const gi::property_proxy<gint, base::MonitorBase> property_scale_factor() const
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "scale-factor"); }

gi::property_proxy<Gdk::SubpixelLayout, base::MonitorBase> property_subpixel_layout()
{ return gi::property_proxy<Gdk::SubpixelLayout, base::MonitorBase> (*this, "subpixel-layout"); }
const gi::property_proxy<Gdk::SubpixelLayout, base::MonitorBase> property_subpixel_layout() const
{ return gi::property_proxy<Gdk::SubpixelLayout, base::MonitorBase> (*this, "subpixel-layout"); }

gi::property_proxy<bool, base::MonitorBase> property_valid()
{ return gi::property_proxy<bool, base::MonitorBase> (*this, "valid"); }
const gi::property_proxy<bool, base::MonitorBase> property_valid() const
{ return gi::property_proxy<bool, base::MonitorBase> (*this, "valid"); }

gi::property_proxy<gint, base::MonitorBase> property_width_mm()
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "width-mm"); }
const gi::property_proxy<gint, base::MonitorBase> property_width_mm() const
{ return gi::property_proxy<gint, base::MonitorBase> (*this, "width-mm"); }

// (signal) void invalidate ();
// (signal) void invalidate ();
gi::signal_proxy<void(Gdk::Monitor)> signal_invalidate()
{ return gi::signal_proxy<void(Gdk::Monitor)> (*this, "invalidate"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/monitor_extra_def.hpp>)
#include <gdk/monitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/monitor_extra.hpp>)
#include <gdk/monitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Monitor : public GI_GDK_MONITOR_BASE
{ typedef GI_GDK_MONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkMonitor>
{ typedef Gdk::Monitor type; }; 

} // namespace repository

} // namespace gi

#endif
