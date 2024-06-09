// AUTO-GENERATED

#ifndef _GI_GDK_TIMECOORD_HPP_
#define _GI_GDK_TIMECOORD_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class TimeCoord_Ref;

class TimeCoord;

namespace base {


#define GI_GDK_TIMECOORD_BASE base::TimeCoordBase
class TimeCoordBase : public gi::detail::CBoxedWrapperBase<TimeCoordBase, ::GdkTimeCoord>
{
typedef gi::detail::CBoxedWrapperBase<TimeCoordBase, ::GdkTimeCoord> super_type;
public:

TimeCoordBase (std::nullptr_t = nullptr) : super_type() {}

// guint32 TimeCoord::time (const ::GdkTimeCoord* obj /*none*/);
// guint32 TimeCoord::time (const ::GdkTimeCoord* obj /*none*/);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  TimeCoord::time (::GdkTimeCoord* obj /*none*/, guint32 _value);
// void TimeCoord::time (::GdkTimeCoord* obj /*none*/, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

// ::GdkAxisFlags TimeCoord::flags (const ::GdkTimeCoord* obj /*none*/);
// ::GdkAxisFlags TimeCoord::flags (const ::GdkTimeCoord* obj /*none*/);
GI_INLINE_DECL Gdk::AxisFlags flags_ () const noexcept;

//  TimeCoord::flags (::GdkTimeCoord* obj /*none*/, ::GdkAxisFlags _value);
// void TimeCoord::flags (::GdkTimeCoord* obj /*none*/, ::GdkAxisFlags _value);
GI_INLINE_DECL void flags_ (Gdk::AxisFlags _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/timecoord_extra_def.hpp>)
#include <gdk/timecoord_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/timecoord_extra.hpp>)
#include <gdk/timecoord_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class TimeCoord_Ref;

class TimeCoord : public gi::detail::CBoxedWrapper<TimeCoord, ::GdkTimeCoord, GI_GDK_TIMECOORD_BASE, TimeCoord_Ref>
{ typedef gi::detail::CBoxedWrapper<TimeCoord, ::GdkTimeCoord, GI_GDK_TIMECOORD_BASE, TimeCoord_Ref> super_type; using super_type::super_type; };


class TimeCoord_Ref : public gi::detail::CBoxedRefWrapper<TimeCoord, ::GdkTimeCoord, GI_GDK_TIMECOORD_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TimeCoord, ::GdkTimeCoord, GI_GDK_TIMECOORD_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkTimeCoord>
{ typedef Gdk::TimeCoord type; }; 

} // namespace repository

} // namespace gi

#endif
