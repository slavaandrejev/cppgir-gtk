// AUTO-GENERATED

#ifndef _GI_GDK__FLAGS_HPP_
#define _GI_GDK__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

enum class AnchorHints : std::underlying_type<GdkAnchorHints>::type {
  FLIP_X_ = GDK_ANCHOR_FLIP_X,
  FLIP_Y_ = GDK_ANCHOR_FLIP_Y,
  SLIDE_X_ = GDK_ANCHOR_SLIDE_X,
  SLIDE_Y_ = GDK_ANCHOR_SLIDE_Y,
  RESIZE_X_ = GDK_ANCHOR_RESIZE_X,
  RESIZE_Y_ = GDK_ANCHOR_RESIZE_Y,
  FLIP_ = GDK_ANCHOR_FLIP,
  SLIDE_ = GDK_ANCHOR_SLIDE,
  RESIZE_ = GDK_ANCHOR_RESIZE,
};

GI_FLAG_OPERATORS(AnchorHints)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::AnchorHints>
{ typedef GdkAnchorHints type; }; 
template<> struct declare_cpptype_of<GdkAnchorHints>
{ typedef Gdk::AnchorHints type; }; 

template<> struct declare_gtype_of<Gdk::AnchorHints>
{ static GType get_type() { return gdk_anchor_hints_get_type(); } };

template<> struct is_bitfield<Gdk::AnchorHints> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class AxisFlags : std::underlying_type<GdkAxisFlags>::type {
  X_ = GDK_AXIS_FLAG_X,
  Y_ = GDK_AXIS_FLAG_Y,
  DELTA_X_ = GDK_AXIS_FLAG_DELTA_X,
  DELTA_Y_ = GDK_AXIS_FLAG_DELTA_Y,
  PRESSURE_ = GDK_AXIS_FLAG_PRESSURE,
  XTILT_ = GDK_AXIS_FLAG_XTILT,
  YTILT_ = GDK_AXIS_FLAG_YTILT,
  WHEEL_ = GDK_AXIS_FLAG_WHEEL,
  DISTANCE_ = GDK_AXIS_FLAG_DISTANCE,
  ROTATION_ = GDK_AXIS_FLAG_ROTATION,
  SLIDER_ = GDK_AXIS_FLAG_SLIDER,
};

GI_FLAG_OPERATORS(AxisFlags)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::AxisFlags>
{ typedef GdkAxisFlags type; }; 
template<> struct declare_cpptype_of<GdkAxisFlags>
{ typedef Gdk::AxisFlags type; }; 

template<> struct declare_gtype_of<Gdk::AxisFlags>
{ static GType get_type() { return gdk_axis_flags_get_type(); } };

template<> struct is_bitfield<Gdk::AxisFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class DragAction : std::underlying_type<GdkDragAction>::type {
  COPY_ = GDK_ACTION_COPY,
  MOVE_ = GDK_ACTION_MOVE,
  LINK_ = GDK_ACTION_LINK,
  ASK_ = GDK_ACTION_ASK,
};

GI_FLAG_OPERATORS(DragAction)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::DragAction>
{ typedef GdkDragAction type; }; 
template<> struct declare_cpptype_of<GdkDragAction>
{ typedef Gdk::DragAction type; }; 

template<> struct declare_gtype_of<Gdk::DragAction>
{ static GType get_type() { return gdk_drag_action_get_type(); } };

template<> struct is_bitfield<Gdk::DragAction> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class FrameClockPhase : std::underlying_type<GdkFrameClockPhase>::type {
  NONE_ = GDK_FRAME_CLOCK_PHASE_NONE,
  FLUSH_EVENTS_ = GDK_FRAME_CLOCK_PHASE_FLUSH_EVENTS,
  BEFORE_PAINT_ = GDK_FRAME_CLOCK_PHASE_BEFORE_PAINT,
  UPDATE_ = GDK_FRAME_CLOCK_PHASE_UPDATE,
  LAYOUT_ = GDK_FRAME_CLOCK_PHASE_LAYOUT,
  PAINT_ = GDK_FRAME_CLOCK_PHASE_PAINT,
  RESUME_EVENTS_ = GDK_FRAME_CLOCK_PHASE_RESUME_EVENTS,
  AFTER_PAINT_ = GDK_FRAME_CLOCK_PHASE_AFTER_PAINT,
};

GI_FLAG_OPERATORS(FrameClockPhase)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::FrameClockPhase>
{ typedef GdkFrameClockPhase type; }; 
template<> struct declare_cpptype_of<GdkFrameClockPhase>
{ typedef Gdk::FrameClockPhase type; }; 

template<> struct declare_gtype_of<Gdk::FrameClockPhase>
{ static GType get_type() { return gdk_frame_clock_phase_get_type(); } };

template<> struct is_bitfield<Gdk::FrameClockPhase> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class GLAPI_ : std::underlying_type<GdkGLAPI>::type {
  GL_ = GDK_GL_API_GL,
  GLES_ = GDK_GL_API_GLES,
};

GI_FLAG_OPERATORS(GLAPI_)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::GLAPI_>
{ typedef GdkGLAPI type; }; 
template<> struct declare_cpptype_of<GdkGLAPI>
{ typedef Gdk::GLAPI_ type; }; 

template<> struct declare_gtype_of<Gdk::GLAPI_>
{ static GType get_type() { return gdk_gl_api_get_type(); } };

template<> struct is_bitfield<Gdk::GLAPI_> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ModifierType : std::underlying_type<GdkModifierType>::type {
  SHIFT_MASK_ = GDK_SHIFT_MASK,
  LOCK_MASK_ = GDK_LOCK_MASK,
  CONTROL_MASK_ = GDK_CONTROL_MASK,
  ALT_MASK_ = GDK_ALT_MASK,
  BUTTON1_MASK_ = GDK_BUTTON1_MASK,
  BUTTON2_MASK_ = GDK_BUTTON2_MASK,
  BUTTON3_MASK_ = GDK_BUTTON3_MASK,
  BUTTON4_MASK_ = GDK_BUTTON4_MASK,
  BUTTON5_MASK_ = GDK_BUTTON5_MASK,
  SUPER_MASK_ = GDK_SUPER_MASK,
  HYPER_MASK_ = GDK_HYPER_MASK,
  META_MASK_ = GDK_META_MASK,
};

GI_FLAG_OPERATORS(ModifierType)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ModifierType>
{ typedef GdkModifierType type; }; 
template<> struct declare_cpptype_of<GdkModifierType>
{ typedef Gdk::ModifierType type; }; 

template<> struct declare_gtype_of<Gdk::ModifierType>
{ static GType get_type() { return gdk_modifier_type_get_type(); } };

template<> struct is_bitfield<Gdk::ModifierType> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class PaintableFlags : std::underlying_type<GdkPaintableFlags>::type {
  SIZE_ = GDK_PAINTABLE_STATIC_SIZE,
  CONTENTS_ = GDK_PAINTABLE_STATIC_CONTENTS,
};

GI_FLAG_OPERATORS(PaintableFlags)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::PaintableFlags>
{ typedef GdkPaintableFlags type; }; 
template<> struct declare_cpptype_of<GdkPaintableFlags>
{ typedef Gdk::PaintableFlags type; }; 

template<> struct declare_gtype_of<Gdk::PaintableFlags>
{ static GType get_type() { return gdk_paintable_flags_get_type(); } };

template<> struct is_bitfield<Gdk::PaintableFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class SeatCapabilities : std::underlying_type<GdkSeatCapabilities>::type {
  NONE_ = GDK_SEAT_CAPABILITY_NONE,
  POINTER_ = GDK_SEAT_CAPABILITY_POINTER,
  TOUCH_ = GDK_SEAT_CAPABILITY_TOUCH,
  TABLET_STYLUS_ = GDK_SEAT_CAPABILITY_TABLET_STYLUS,
  KEYBOARD_ = GDK_SEAT_CAPABILITY_KEYBOARD,
  TABLET_PAD_ = GDK_SEAT_CAPABILITY_TABLET_PAD,
  ALL_POINTING_ = GDK_SEAT_CAPABILITY_ALL_POINTING,
  ALL_ = GDK_SEAT_CAPABILITY_ALL,
};

GI_FLAG_OPERATORS(SeatCapabilities)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::SeatCapabilities>
{ typedef GdkSeatCapabilities type; }; 
template<> struct declare_cpptype_of<GdkSeatCapabilities>
{ typedef Gdk::SeatCapabilities type; }; 

template<> struct declare_gtype_of<Gdk::SeatCapabilities>
{ static GType get_type() { return gdk_seat_capabilities_get_type(); } };

template<> struct is_bitfield<Gdk::SeatCapabilities> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

enum class ToplevelState : std::underlying_type<GdkToplevelState>::type {
  MINIMIZED_ = GDK_TOPLEVEL_STATE_MINIMIZED,
  MAXIMIZED_ = GDK_TOPLEVEL_STATE_MAXIMIZED,
  STICKY_ = GDK_TOPLEVEL_STATE_STICKY,
  FULLSCREEN_ = GDK_TOPLEVEL_STATE_FULLSCREEN,
  ABOVE_ = GDK_TOPLEVEL_STATE_ABOVE,
  BELOW_ = GDK_TOPLEVEL_STATE_BELOW,
  FOCUSED_ = GDK_TOPLEVEL_STATE_FOCUSED,
  TILED_ = GDK_TOPLEVEL_STATE_TILED,
  TOP_TILED_ = GDK_TOPLEVEL_STATE_TOP_TILED,
  TOP_RESIZABLE_ = GDK_TOPLEVEL_STATE_TOP_RESIZABLE,
  RIGHT_TILED_ = GDK_TOPLEVEL_STATE_RIGHT_TILED,
  RIGHT_RESIZABLE_ = GDK_TOPLEVEL_STATE_RIGHT_RESIZABLE,
  BOTTOM_TILED_ = GDK_TOPLEVEL_STATE_BOTTOM_TILED,
  BOTTOM_RESIZABLE_ = GDK_TOPLEVEL_STATE_BOTTOM_RESIZABLE,
  LEFT_TILED_ = GDK_TOPLEVEL_STATE_LEFT_TILED,
  LEFT_RESIZABLE_ = GDK_TOPLEVEL_STATE_LEFT_RESIZABLE,
  SUSPENDED_ = GDK_TOPLEVEL_STATE_SUSPENDED,
};

GI_FLAG_OPERATORS(ToplevelState)

} // namespace Gdk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gdk::ToplevelState>
{ typedef GdkToplevelState type; }; 
template<> struct declare_cpptype_of<GdkToplevelState>
{ typedef Gdk::ToplevelState type; }; 

template<> struct declare_gtype_of<Gdk::ToplevelState>
{ static GType get_type() { return gdk_toplevel_state_get_type(); } };

template<> struct is_bitfield<Gdk::ToplevelState> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
