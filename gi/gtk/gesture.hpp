// AUTO-GENERATED

#ifndef _GI_GTK_GESTURE_HPP_
#define _GI_GTK_GESTURE_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Gesture;

namespace base {


#define GI_GTK_GESTURE_BASE base::GestureBase
class GestureBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkGesture BaseObjectType;

GestureBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_get_type(); } 

// gboolean gtk_gesture_get_bounding_box (GtkGesture* gesture /*none*/, GdkRectangle* rect /*none,out,ca*/);
// gboolean gtk_gesture_get_bounding_box (::GtkGesture* gesture /*none*/, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL bool get_bounding_box (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_bounding_box () noexcept;

// gboolean gtk_gesture_get_bounding_box_center (GtkGesture* gesture /*none*/, double* x, double* y);
// gboolean gtk_gesture_get_bounding_box_center (::GtkGesture* gesture /*none*/, gdouble* x, gdouble* y);
GI_INLINE_DECL bool get_bounding_box_center (gdouble & x, gdouble & y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_bounding_box_center () noexcept;

// GdkDevice* /*none,nullable*/ gtk_gesture_get_device (GtkGesture* gesture /*none*/);
// ::GdkDevice* /*none,nullable*/ gtk_gesture_get_device (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL Gdk::Device get_device () noexcept;

// GList* /*container*/ gtk_gesture_get_group (GtkGesture* gesture /*none*/);
// ::GList* /*container*/ gtk_gesture_get_group (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkGesture*, gi::transfer_container_t> get_group () noexcept;

// GdkEvent* /*none,nullable*/ gtk_gesture_get_last_event (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none,nullable*/);
//  /*none,nullable*/ gtk_gesture_get_last_event (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none,nullable*/);
// SKIP;  type  not supported

// GdkEventSequence* /*none,nullable*/ gtk_gesture_get_last_updated_sequence (GtkGesture* gesture /*none*/);
// ::GdkEventSequence* /*none,nullable*/ gtk_gesture_get_last_updated_sequence (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL Gdk::EventSequence_Ref get_last_updated_sequence () noexcept;

// gboolean gtk_gesture_get_point (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none,nullable*/, double* x, double* y);
// gboolean gtk_gesture_get_point (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none,nullable*/, gdouble* x, gdouble* y);
GI_INLINE_DECL bool get_point (Gdk::EventSequence_Ref sequence, gdouble * x, gdouble * y) noexcept;
GI_INLINE_DECL bool get_point (gdouble * x, gdouble * y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_point (Gdk::EventSequence_Ref sequence) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_point () noexcept;

// GtkEventSequenceState gtk_gesture_get_sequence_state (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none*/);
// ::GtkEventSequenceState gtk_gesture_get_sequence_state (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none*/);
GI_INLINE_DECL Gtk::EventSequenceState get_sequence_state (Gdk::EventSequence_Ref sequence) noexcept;

// GList* /*container*/ gtk_gesture_get_sequences (GtkGesture* gesture /*none*/);
// ::GList* /*container*/ gtk_gesture_get_sequences (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GdkEventSequence*, gi::transfer_container_t> get_sequences () noexcept;

// void gtk_gesture_group (GtkGesture* group_gesture /*none*/, GtkGesture* gesture /*none*/);
// void gtk_gesture_group (::GtkGesture* group_gesture /*none*/, ::GtkGesture* gesture /*none*/);
GI_INLINE_DECL void group (Gtk::Gesture gesture) noexcept;

// gboolean gtk_gesture_handles_sequence (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none,nullable*/);
// gboolean gtk_gesture_handles_sequence (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none,nullable*/);
GI_INLINE_DECL bool handles_sequence (Gdk::EventSequence_Ref sequence) noexcept;
GI_INLINE_DECL bool handles_sequence () noexcept;

// gboolean gtk_gesture_is_active (GtkGesture* gesture /*none*/);
// gboolean gtk_gesture_is_active (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL bool is_active () noexcept;

// gboolean gtk_gesture_is_grouped_with (GtkGesture* gesture /*none*/, GtkGesture* other /*none*/);
// gboolean gtk_gesture_is_grouped_with (::GtkGesture* gesture /*none*/, ::GtkGesture* other /*none*/);
GI_INLINE_DECL bool is_grouped_with (Gtk::Gesture other) noexcept;

// gboolean gtk_gesture_is_recognized (GtkGesture* gesture /*none*/);
// gboolean gtk_gesture_is_recognized (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL bool is_recognized () noexcept;

// gboolean gtk_gesture_set_sequence_state (GtkGesture* gesture /*none*/, GdkEventSequence* sequence /*none*/, GtkEventSequenceState state);
// gboolean gtk_gesture_set_sequence_state (::GtkGesture* gesture /*none*/, ::GdkEventSequence* sequence /*none*/, ::GtkEventSequenceState state);
GI_INLINE_DECL bool set_sequence_state (Gdk::EventSequence_Ref sequence, Gtk::EventSequenceState state) noexcept;

// gboolean gtk_gesture_set_state (GtkGesture* gesture /*none*/, GtkEventSequenceState state);
// gboolean gtk_gesture_set_state (::GtkGesture* gesture /*none*/, ::GtkEventSequenceState state);
GI_INLINE_DECL bool set_state (Gtk::EventSequenceState state) noexcept;

// void gtk_gesture_ungroup (GtkGesture* gesture /*none*/);
// void gtk_gesture_ungroup (::GtkGesture* gesture /*none*/);
GI_INLINE_DECL void ungroup () noexcept;

gi::property_proxy<guint, base::GestureBase> property_n_points()
{ return gi::property_proxy<guint, base::GestureBase> (*this, "n-points"); }
const gi::property_proxy<guint, base::GestureBase> property_n_points() const
{ return gi::property_proxy<guint, base::GestureBase> (*this, "n-points"); }

// (signal) void begin ( sequence /*none,nullable*/);
// (signal) void begin (::GdkEventSequence* sequence /*none,nullable*/);
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> signal_begin()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> (*this, "begin"); }

// (signal) void cancel ( sequence /*none,nullable*/);
// (signal) void cancel (::GdkEventSequence* sequence /*none,nullable*/);
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> signal_cancel()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> (*this, "cancel"); }

// (signal) void end ( sequence /*none,nullable*/);
// (signal) void end (::GdkEventSequence* sequence /*none,nullable*/);
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> signal_end()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> (*this, "end"); }

// (signal) void sequence-state-changed ( sequence /*none,nullable*/,  state);
// (signal) void sequence-state-changed (::GdkEventSequence* sequence /*none,nullable*/, ::GtkEventSequenceState state);
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence, Gtk::EventSequenceState state)> signal_sequence_state_changed()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence, Gtk::EventSequenceState state)> (*this, "sequence-state-changed"); }

// (signal) void update ( sequence /*none,nullable*/);
// (signal) void update (::GdkEventSequence* sequence /*none,nullable*/);
gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> signal_update()
{ return gi::signal_proxy<void(Gtk::Gesture, Gdk::EventSequence_Ref sequence)> (*this, "update"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra_def.hpp>)
#include <gtk/gesture_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra.hpp>)
#include <gtk/gesture_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Gesture : public GI_GTK_GESTURE_BASE
{ typedef GI_GTK_GESTURE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGesture>
{ typedef Gtk::Gesture type; }; 

} // namespace repository

} // namespace gi

#endif
