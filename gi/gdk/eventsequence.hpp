// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSEQUENCE_HPP_
#define _GI_GDK_EVENTSEQUENCE_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class EventSequence;

namespace base {


#define GI_GDK_EVENTSEQUENCE_BASE base::EventSequenceBase
class EventSequenceBase : public gi::detail::GBoxedWrapperBase<EventSequenceBase, ::GdkEventSequence>
{
typedef gi::detail::GBoxedWrapperBase<EventSequenceBase, ::GdkEventSequence> super_type;
public:

EventSequenceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_event_sequence_get_type(); } 

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventsequence_extra_def.hpp>)
#include <gdk/eventsequence_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventsequence_extra.hpp>)
#include <gdk/eventsequence_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class EventSequence_Ref;

class EventSequence : public gi::detail::GBoxedWrapper<EventSequence, ::GdkEventSequence, GI_GDK_EVENTSEQUENCE_BASE, EventSequence_Ref>
{ typedef gi::detail::GBoxedWrapper<EventSequence, ::GdkEventSequence, GI_GDK_EVENTSEQUENCE_BASE, EventSequence_Ref> super_type; using super_type::super_type; };


class EventSequence_Ref : public gi::detail::GBoxedRefWrapper<EventSequence, ::GdkEventSequence, GI_GDK_EVENTSEQUENCE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<EventSequence, ::GdkEventSequence, GI_GDK_EVENTSEQUENCE_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkEventSequence>
{ typedef Gdk::EventSequence type; }; 

} // namespace repository

} // namespace gi

#endif
