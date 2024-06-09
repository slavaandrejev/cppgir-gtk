// AUTO-GENERATED

#ifndef _GI_GDK__ENUMS_HPP_
#define _GI_GDK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

enum class AxisUse : std::underlying_type<GdkAxisUse>::type {
  IGNORE_ = GDK_AXIS_IGNORE,
  X_ = GDK_AXIS_X,
  Y_ = GDK_AXIS_Y,
  DELTA_X_ = GDK_AXIS_DELTA_X,
  DELTA_Y_ = GDK_AXIS_DELTA_Y,
  PRESSURE_ = GDK_AXIS_PRESSURE,
  XTILT_ = GDK_AXIS_XTILT,
  YTILT_ = GDK_AXIS_YTILT,
  WHEEL_ = GDK_AXIS_WHEEL,
  DISTANCE_ = GDK_AXIS_DISTANCE,
  ROTATION_ = GDK_AXIS_ROTATION,
  SLIDER_ = GDK_AXIS_SLIDER,
  LAST_ = GDK_AXIS_LAST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::AxisUse>
{ typedef GdkAxisUse type; }; 
template<> struct declare_cpptype_of<GdkAxisUse>
{ typedef Gdk::AxisUse type; }; 

template<> struct declare_gtype_of<Gdk::AxisUse>
{ static GType get_type() { return gdk_axis_use_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class CrossingMode : std::underlying_type<GdkCrossingMode>::type {
  NORMAL_ = GDK_CROSSING_NORMAL,
  GRAB_ = GDK_CROSSING_GRAB,
  UNGRAB_ = GDK_CROSSING_UNGRAB,
  GTK_GRAB_ = GDK_CROSSING_GTK_GRAB,
  GTK_UNGRAB_ = GDK_CROSSING_GTK_UNGRAB,
  STATE_CHANGED_ = GDK_CROSSING_STATE_CHANGED,
  TOUCH_BEGIN_ = GDK_CROSSING_TOUCH_BEGIN,
  TOUCH_END_ = GDK_CROSSING_TOUCH_END,
  DEVICE_SWITCH_ = GDK_CROSSING_DEVICE_SWITCH,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::CrossingMode>
{ typedef GdkCrossingMode type; }; 
template<> struct declare_cpptype_of<GdkCrossingMode>
{ typedef Gdk::CrossingMode type; }; 

template<> struct declare_gtype_of<Gdk::CrossingMode>
{ static GType get_type() { return gdk_crossing_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DevicePadFeature : std::underlying_type<GdkDevicePadFeature>::type {
  BUTTON_ = GDK_DEVICE_PAD_FEATURE_BUTTON,
  RING_ = GDK_DEVICE_PAD_FEATURE_RING,
  STRIP_ = GDK_DEVICE_PAD_FEATURE_STRIP,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DevicePadFeature>
{ typedef GdkDevicePadFeature type; }; 
template<> struct declare_cpptype_of<GdkDevicePadFeature>
{ typedef Gdk::DevicePadFeature type; }; 

template<> struct declare_gtype_of<Gdk::DevicePadFeature>
{ static GType get_type() { return gdk_device_pad_feature_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DeviceToolType : std::underlying_type<GdkDeviceToolType>::type {
  UNKNOWN_ = GDK_DEVICE_TOOL_TYPE_UNKNOWN,
  PEN_ = GDK_DEVICE_TOOL_TYPE_PEN,
  ERASER_ = GDK_DEVICE_TOOL_TYPE_ERASER,
  BRUSH_ = GDK_DEVICE_TOOL_TYPE_BRUSH,
  PENCIL_ = GDK_DEVICE_TOOL_TYPE_PENCIL,
  AIRBRUSH_ = GDK_DEVICE_TOOL_TYPE_AIRBRUSH,
  MOUSE_ = GDK_DEVICE_TOOL_TYPE_MOUSE,
  LENS_ = GDK_DEVICE_TOOL_TYPE_LENS,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DeviceToolType>
{ typedef GdkDeviceToolType type; }; 
template<> struct declare_cpptype_of<GdkDeviceToolType>
{ typedef Gdk::DeviceToolType type; }; 

template<> struct declare_gtype_of<Gdk::DeviceToolType>
{ static GType get_type() { return gdk_device_tool_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DragCancelReason : std::underlying_type<GdkDragCancelReason>::type {
  NO_TARGET_ = GDK_DRAG_CANCEL_NO_TARGET,
  USER_CANCELLED_ = GDK_DRAG_CANCEL_USER_CANCELLED,
  ERROR_ = GDK_DRAG_CANCEL_ERROR,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DragCancelReason>
{ typedef GdkDragCancelReason type; }; 
template<> struct declare_cpptype_of<GdkDragCancelReason>
{ typedef Gdk::DragCancelReason type; }; 

template<> struct declare_gtype_of<Gdk::DragCancelReason>
{ static GType get_type() { return gdk_drag_cancel_reason_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class EventType : std::underlying_type<GdkEventType>::type {
  DELETE_ = GDK_DELETE,
  MOTION_NOTIFY_ = GDK_MOTION_NOTIFY,
  BUTTON_PRESS_ = GDK_BUTTON_PRESS,
  BUTTON_RELEASE_ = GDK_BUTTON_RELEASE,
  KEY_PRESS_ = GDK_KEY_PRESS,
  KEY_RELEASE_ = GDK_KEY_RELEASE,
  ENTER_NOTIFY_ = GDK_ENTER_NOTIFY,
  LEAVE_NOTIFY_ = GDK_LEAVE_NOTIFY,
  FOCUS_CHANGE_ = GDK_FOCUS_CHANGE,
  PROXIMITY_IN_ = GDK_PROXIMITY_IN,
  PROXIMITY_OUT_ = GDK_PROXIMITY_OUT,
  DRAG_ENTER_ = GDK_DRAG_ENTER,
  DRAG_LEAVE_ = GDK_DRAG_LEAVE,
  DRAG_MOTION_ = GDK_DRAG_MOTION,
  DROP_START_ = GDK_DROP_START,
  SCROLL_ = GDK_SCROLL,
  GRAB_BROKEN_ = GDK_GRAB_BROKEN,
  TOUCH_BEGIN_ = GDK_TOUCH_BEGIN,
  TOUCH_UPDATE_ = GDK_TOUCH_UPDATE,
  TOUCH_END_ = GDK_TOUCH_END,
  TOUCH_CANCEL_ = GDK_TOUCH_CANCEL,
  TOUCHPAD_SWIPE_ = GDK_TOUCHPAD_SWIPE,
  TOUCHPAD_PINCH_ = GDK_TOUCHPAD_PINCH,
  PAD_BUTTON_PRESS_ = GDK_PAD_BUTTON_PRESS,
  PAD_BUTTON_RELEASE_ = GDK_PAD_BUTTON_RELEASE,
  PAD_RING_ = GDK_PAD_RING,
  PAD_STRIP_ = GDK_PAD_STRIP,
  PAD_GROUP_MODE_ = GDK_PAD_GROUP_MODE,
  TOUCHPAD_HOLD_ = GDK_TOUCHPAD_HOLD,
  EVENT_LAST_ = GDK_EVENT_LAST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::EventType>
{ typedef GdkEventType type; }; 
template<> struct declare_cpptype_of<GdkEventType>
{ typedef Gdk::EventType type; }; 

template<> struct declare_gtype_of<Gdk::EventType>
{ static GType get_type() { return gdk_event_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class FullscreenMode : std::underlying_type<GdkFullscreenMode>::type {
  CURRENT_MONITOR_ = GDK_FULLSCREEN_ON_CURRENT_MONITOR,
  ALL_MONITORS_ = GDK_FULLSCREEN_ON_ALL_MONITORS,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::FullscreenMode>
{ typedef GdkFullscreenMode type; }; 
template<> struct declare_cpptype_of<GdkFullscreenMode>
{ typedef Gdk::FullscreenMode type; }; 

template<> struct declare_gtype_of<Gdk::FullscreenMode>
{ static GType get_type() { return gdk_fullscreen_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class GLError : std::underlying_type<GdkGLError>::type {
  NOT_AVAILABLE_ = GDK_GL_ERROR_NOT_AVAILABLE,
  UNSUPPORTED_FORMAT_ = GDK_GL_ERROR_UNSUPPORTED_FORMAT,
  UNSUPPORTED_PROFILE_ = GDK_GL_ERROR_UNSUPPORTED_PROFILE,
  COMPILATION_FAILED_ = GDK_GL_ERROR_COMPILATION_FAILED,
  LINK_FAILED_ = GDK_GL_ERROR_LINK_FAILED,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::GLError>
{ typedef GdkGLError type; }; 
template<> struct declare_cpptype_of<GdkGLError>
{ typedef Gdk::GLError type; }; 

template<> struct declare_gtype_of<Gdk::GLError>
{ static GType get_type() { return gdk_gl_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class Gravity : std::underlying_type<GdkGravity>::type {
  NORTH_WEST_ = GDK_GRAVITY_NORTH_WEST,
  NORTH_ = GDK_GRAVITY_NORTH,
  NORTH_EAST_ = GDK_GRAVITY_NORTH_EAST,
  WEST_ = GDK_GRAVITY_WEST,
  CENTER_ = GDK_GRAVITY_CENTER,
  EAST_ = GDK_GRAVITY_EAST,
  SOUTH_WEST_ = GDK_GRAVITY_SOUTH_WEST,
  SOUTH_ = GDK_GRAVITY_SOUTH,
  SOUTH_EAST_ = GDK_GRAVITY_SOUTH_EAST,
  STATIC_ = GDK_GRAVITY_STATIC,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::Gravity>
{ typedef GdkGravity type; }; 
template<> struct declare_cpptype_of<GdkGravity>
{ typedef Gdk::Gravity type; }; 

template<> struct declare_gtype_of<Gdk::Gravity>
{ static GType get_type() { return gdk_gravity_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class InputSource : std::underlying_type<GdkInputSource>::type {
  MOUSE_ = GDK_SOURCE_MOUSE,
  PEN_ = GDK_SOURCE_PEN,
  KEYBOARD_ = GDK_SOURCE_KEYBOARD,
  TOUCHSCREEN_ = GDK_SOURCE_TOUCHSCREEN,
  TOUCHPAD_ = GDK_SOURCE_TOUCHPAD,
  TRACKPOINT_ = GDK_SOURCE_TRACKPOINT,
  TABLET_PAD_ = GDK_SOURCE_TABLET_PAD,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::InputSource>
{ typedef GdkInputSource type; }; 
template<> struct declare_cpptype_of<GdkInputSource>
{ typedef Gdk::InputSource type; }; 

template<> struct declare_gtype_of<Gdk::InputSource>
{ static GType get_type() { return gdk_input_source_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class KeyMatch : std::underlying_type<GdkKeyMatch>::type {
  NONE_ = GDK_KEY_MATCH_NONE,
  PARTIAL_ = GDK_KEY_MATCH_PARTIAL,
  EXACT_ = GDK_KEY_MATCH_EXACT,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::KeyMatch>
{ typedef GdkKeyMatch type; }; 
template<> struct declare_cpptype_of<GdkKeyMatch>
{ typedef Gdk::KeyMatch type; }; 

template<> struct declare_gtype_of<Gdk::KeyMatch>
{ static GType get_type() { return gdk_key_match_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class MemoryFormat : std::underlying_type<GdkMemoryFormat>::type {
  B8G8R8A8_PREMULTIPLIED_ = GDK_MEMORY_B8G8R8A8_PREMULTIPLIED,
  A8R8G8B8_PREMULTIPLIED_ = GDK_MEMORY_A8R8G8B8_PREMULTIPLIED,
  R8G8B8A8_PREMULTIPLIED_ = GDK_MEMORY_R8G8B8A8_PREMULTIPLIED,
  B8G8R8A8_ = GDK_MEMORY_B8G8R8A8,
  A8R8G8B8_ = GDK_MEMORY_A8R8G8B8,
  R8G8B8A8_ = GDK_MEMORY_R8G8B8A8,
  A8B8G8R8_ = GDK_MEMORY_A8B8G8R8,
  R8G8B8_ = GDK_MEMORY_R8G8B8,
  B8G8R8_ = GDK_MEMORY_B8G8R8,
  R16G16B16_ = GDK_MEMORY_R16G16B16,
  R16G16B16A16_PREMULTIPLIED_ = GDK_MEMORY_R16G16B16A16_PREMULTIPLIED,
  R16G16B16A16_ = GDK_MEMORY_R16G16B16A16,
  R16G16B16_FLOAT_ = GDK_MEMORY_R16G16B16_FLOAT,
  R16G16B16A16_FLOAT_PREMULTIPLIED_ = GDK_MEMORY_R16G16B16A16_FLOAT_PREMULTIPLIED,
  R16G16B16A16_FLOAT_ = GDK_MEMORY_R16G16B16A16_FLOAT,
  R32G32B32_FLOAT_ = GDK_MEMORY_R32G32B32_FLOAT,
  R32G32B32A32_FLOAT_PREMULTIPLIED_ = GDK_MEMORY_R32G32B32A32_FLOAT_PREMULTIPLIED,
  R32G32B32A32_FLOAT_ = GDK_MEMORY_R32G32B32A32_FLOAT,
  G8A8_PREMULTIPLIED_ = GDK_MEMORY_G8A8_PREMULTIPLIED,
  G8A8_ = GDK_MEMORY_G8A8,
  G8_ = GDK_MEMORY_G8,
  G16A16_PREMULTIPLIED_ = GDK_MEMORY_G16A16_PREMULTIPLIED,
  G16A16_ = GDK_MEMORY_G16A16,
  G16_ = GDK_MEMORY_G16,
  A8_ = GDK_MEMORY_A8,
  A16_ = GDK_MEMORY_A16,
  A16_FLOAT_ = GDK_MEMORY_A16_FLOAT,
  A32_FLOAT_ = GDK_MEMORY_A32_FLOAT,
  N_FORMATS_ = GDK_MEMORY_N_FORMATS,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::MemoryFormat>
{ typedef GdkMemoryFormat type; }; 
template<> struct declare_cpptype_of<GdkMemoryFormat>
{ typedef Gdk::MemoryFormat type; }; 

template<> struct declare_gtype_of<Gdk::MemoryFormat>
{ static GType get_type() { return gdk_memory_format_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class NotifyType : std::underlying_type<GdkNotifyType>::type {
  ANCESTOR_ = GDK_NOTIFY_ANCESTOR,
  VIRTUAL_ = GDK_NOTIFY_VIRTUAL,
  INFERIOR_ = GDK_NOTIFY_INFERIOR,
  NONLINEAR_ = GDK_NOTIFY_NONLINEAR,
  NONLINEAR_VIRTUAL_ = GDK_NOTIFY_NONLINEAR_VIRTUAL,
  UNKNOWN_ = GDK_NOTIFY_UNKNOWN,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::NotifyType>
{ typedef GdkNotifyType type; }; 
template<> struct declare_cpptype_of<GdkNotifyType>
{ typedef Gdk::NotifyType type; }; 

template<> struct declare_gtype_of<Gdk::NotifyType>
{ static GType get_type() { return gdk_notify_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ScrollDirection : std::underlying_type<GdkScrollDirection>::type {
  UP_ = GDK_SCROLL_UP,
  DOWN_ = GDK_SCROLL_DOWN,
  LEFT_ = GDK_SCROLL_LEFT,
  RIGHT_ = GDK_SCROLL_RIGHT,
  SMOOTH_ = GDK_SCROLL_SMOOTH,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ScrollDirection>
{ typedef GdkScrollDirection type; }; 
template<> struct declare_cpptype_of<GdkScrollDirection>
{ typedef Gdk::ScrollDirection type; }; 

template<> struct declare_gtype_of<Gdk::ScrollDirection>
{ static GType get_type() { return gdk_scroll_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ScrollUnit : std::underlying_type<GdkScrollUnit>::type {
  WHEEL_ = GDK_SCROLL_UNIT_WHEEL,
  SURFACE_ = GDK_SCROLL_UNIT_SURFACE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ScrollUnit>
{ typedef GdkScrollUnit type; }; 
template<> struct declare_cpptype_of<GdkScrollUnit>
{ typedef Gdk::ScrollUnit type; }; 

template<> struct declare_gtype_of<Gdk::ScrollUnit>
{ static GType get_type() { return gdk_scroll_unit_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class SubpixelLayout : std::underlying_type<GdkSubpixelLayout>::type {
  UNKNOWN_ = GDK_SUBPIXEL_LAYOUT_UNKNOWN,
  NONE_ = GDK_SUBPIXEL_LAYOUT_NONE,
  HORIZONTAL_RGB_ = GDK_SUBPIXEL_LAYOUT_HORIZONTAL_RGB,
  HORIZONTAL_BGR_ = GDK_SUBPIXEL_LAYOUT_HORIZONTAL_BGR,
  VERTICAL_RGB_ = GDK_SUBPIXEL_LAYOUT_VERTICAL_RGB,
  VERTICAL_BGR_ = GDK_SUBPIXEL_LAYOUT_VERTICAL_BGR,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::SubpixelLayout>
{ typedef GdkSubpixelLayout type; }; 
template<> struct declare_cpptype_of<GdkSubpixelLayout>
{ typedef Gdk::SubpixelLayout type; }; 

template<> struct declare_gtype_of<Gdk::SubpixelLayout>
{ static GType get_type() { return gdk_subpixel_layout_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class SurfaceEdge : std::underlying_type<GdkSurfaceEdge>::type {
  NORTH_WEST_ = GDK_SURFACE_EDGE_NORTH_WEST,
  NORTH_ = GDK_SURFACE_EDGE_NORTH,
  NORTH_EAST_ = GDK_SURFACE_EDGE_NORTH_EAST,
  WEST_ = GDK_SURFACE_EDGE_WEST,
  EAST_ = GDK_SURFACE_EDGE_EAST,
  SOUTH_WEST_ = GDK_SURFACE_EDGE_SOUTH_WEST,
  SOUTH_ = GDK_SURFACE_EDGE_SOUTH,
  SOUTH_EAST_ = GDK_SURFACE_EDGE_SOUTH_EAST,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::SurfaceEdge>
{ typedef GdkSurfaceEdge type; }; 
template<> struct declare_cpptype_of<GdkSurfaceEdge>
{ typedef Gdk::SurfaceEdge type; }; 

template<> struct declare_gtype_of<Gdk::SurfaceEdge>
{ static GType get_type() { return gdk_surface_edge_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class TextureError : std::underlying_type<GdkTextureError>::type {
  TOO_LARGE_ = GDK_TEXTURE_ERROR_TOO_LARGE,
  CORRUPT_IMAGE_ = GDK_TEXTURE_ERROR_CORRUPT_IMAGE,
  UNSUPPORTED_CONTENT_ = GDK_TEXTURE_ERROR_UNSUPPORTED_CONTENT,
  UNSUPPORTED_FORMAT_ = GDK_TEXTURE_ERROR_UNSUPPORTED_FORMAT,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::TextureError>
{ typedef GdkTextureError type; }; 
template<> struct declare_cpptype_of<GdkTextureError>
{ typedef Gdk::TextureError type; }; 

template<> struct declare_gtype_of<Gdk::TextureError>
{ static GType get_type() { return gdk_texture_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class TitlebarGesture : std::underlying_type<GdkTitlebarGesture>::type {
  DOUBLE_CLICK_ = GDK_TITLEBAR_GESTURE_DOUBLE_CLICK,
  RIGHT_CLICK_ = GDK_TITLEBAR_GESTURE_RIGHT_CLICK,
  MIDDLE_CLICK_ = GDK_TITLEBAR_GESTURE_MIDDLE_CLICK,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::TitlebarGesture>
{ typedef GdkTitlebarGesture type; }; 
template<> struct declare_cpptype_of<GdkTitlebarGesture>
{ typedef Gdk::TitlebarGesture type; }; 

template<> struct declare_gtype_of<Gdk::TitlebarGesture>
{ static GType get_type() { return gdk_titlebar_gesture_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class TouchpadGesturePhase : std::underlying_type<GdkTouchpadGesturePhase>::type {
  BEGIN_ = GDK_TOUCHPAD_GESTURE_PHASE_BEGIN,
  UPDATE_ = GDK_TOUCHPAD_GESTURE_PHASE_UPDATE,
  END_ = GDK_TOUCHPAD_GESTURE_PHASE_END,
  CANCEL_ = GDK_TOUCHPAD_GESTURE_PHASE_CANCEL,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::TouchpadGesturePhase>
{ typedef GdkTouchpadGesturePhase type; }; 
template<> struct declare_cpptype_of<GdkTouchpadGesturePhase>
{ typedef Gdk::TouchpadGesturePhase type; }; 

template<> struct declare_gtype_of<Gdk::TouchpadGesturePhase>
{ static GType get_type() { return gdk_touchpad_gesture_phase_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class VulkanError : std::underlying_type<GdkVulkanError>::type {
  UNSUPPORTED_ = GDK_VULKAN_ERROR_UNSUPPORTED,
  NOT_AVAILABLE_ = GDK_VULKAN_ERROR_NOT_AVAILABLE,
};

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::VulkanError>
{ typedef GdkVulkanError type; }; 
template<> struct declare_cpptype_of<GdkVulkanError>
{ typedef Gdk::VulkanError type; }; 

template<> struct declare_gtype_of<Gdk::VulkanError>
{ static GType get_type() { return gdk_vulkan_error_get_type(); } };


} // namespace repository

} // namespace gi


#endif
