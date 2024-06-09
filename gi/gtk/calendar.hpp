// AUTO-GENERATED

#ifndef _GI_GTK_CALENDAR_HPP_
#define _GI_GTK_CALENDAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Calendar;

namespace base {


#define GI_GTK_CALENDAR_BASE base::CalendarBase
class CalendarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkCalendar BaseObjectType;

CalendarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_calendar_get_type(); } 

// GtkWidget* /*none*/ gtk_calendar_new ();
// ::GtkCalendar* /*none*/ gtk_calendar_new ();
static GI_INLINE_DECL Gtk::Calendar new_ () noexcept;

// void gtk_calendar_clear_marks (GtkCalendar* calendar /*none*/);
// void gtk_calendar_clear_marks (::GtkCalendar* calendar /*none*/);
GI_INLINE_DECL void clear_marks () noexcept;

// GDateTime* /*full*/ gtk_calendar_get_date (GtkCalendar* self /*none*/);
// ::GDateTime* /*full*/ gtk_calendar_get_date (::GtkCalendar* self /*none*/);
GI_INLINE_DECL GLib::DateTime get_date () noexcept;

// gboolean gtk_calendar_get_day_is_marked (GtkCalendar* calendar /*none*/, guint day);
// gboolean gtk_calendar_get_day_is_marked (::GtkCalendar* calendar /*none*/, guint day);
GI_INLINE_DECL bool get_day_is_marked (guint day) noexcept;

// gboolean gtk_calendar_get_show_day_names (GtkCalendar* self /*none*/);
// gboolean gtk_calendar_get_show_day_names (::GtkCalendar* self /*none*/);
GI_INLINE_DECL bool get_show_day_names () noexcept;

// gboolean gtk_calendar_get_show_heading (GtkCalendar* self /*none*/);
// gboolean gtk_calendar_get_show_heading (::GtkCalendar* self /*none*/);
GI_INLINE_DECL bool get_show_heading () noexcept;

// gboolean gtk_calendar_get_show_week_numbers (GtkCalendar* self /*none*/);
// gboolean gtk_calendar_get_show_week_numbers (::GtkCalendar* self /*none*/);
GI_INLINE_DECL bool get_show_week_numbers () noexcept;

// void gtk_calendar_mark_day (GtkCalendar* calendar /*none*/, guint day);
// void gtk_calendar_mark_day (::GtkCalendar* calendar /*none*/, guint day);
GI_INLINE_DECL void mark_day (guint day) noexcept;

// void gtk_calendar_select_day (GtkCalendar* self /*none*/, GDateTime* date /*none*/);
// void gtk_calendar_select_day (::GtkCalendar* self /*none*/, ::GDateTime* date /*none*/);
GI_INLINE_DECL void select_day (GLib::DateTime_Ref date) noexcept;

// void gtk_calendar_set_show_day_names (GtkCalendar* self /*none*/, gboolean value);
// void gtk_calendar_set_show_day_names (::GtkCalendar* self /*none*/, gboolean value);
GI_INLINE_DECL void set_show_day_names (gboolean value) noexcept;

// void gtk_calendar_set_show_heading (GtkCalendar* self /*none*/, gboolean value);
// void gtk_calendar_set_show_heading (::GtkCalendar* self /*none*/, gboolean value);
GI_INLINE_DECL void set_show_heading (gboolean value) noexcept;

// void gtk_calendar_set_show_week_numbers (GtkCalendar* self /*none*/, gboolean value);
// void gtk_calendar_set_show_week_numbers (::GtkCalendar* self /*none*/, gboolean value);
GI_INLINE_DECL void set_show_week_numbers (gboolean value) noexcept;

// void gtk_calendar_unmark_day (GtkCalendar* calendar /*none*/, guint day);
// void gtk_calendar_unmark_day (::GtkCalendar* calendar /*none*/, guint day);
GI_INLINE_DECL void unmark_day (guint day) noexcept;

gi::property_proxy<gint, base::CalendarBase> property_day()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "day"); }
const gi::property_proxy<gint, base::CalendarBase> property_day() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "day"); }

gi::property_proxy<gint, base::CalendarBase> property_month()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "month"); }
const gi::property_proxy<gint, base::CalendarBase> property_month() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "month"); }

gi::property_proxy<bool, base::CalendarBase> property_show_day_names()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-day-names"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_day_names() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-day-names"); }

gi::property_proxy<bool, base::CalendarBase> property_show_heading()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-heading"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_heading() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-heading"); }

gi::property_proxy<bool, base::CalendarBase> property_show_week_numbers()
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-week-numbers"); }
const gi::property_proxy<bool, base::CalendarBase> property_show_week_numbers() const
{ return gi::property_proxy<bool, base::CalendarBase> (*this, "show-week-numbers"); }

gi::property_proxy<gint, base::CalendarBase> property_year()
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "year"); }
const gi::property_proxy<gint, base::CalendarBase> property_year() const
{ return gi::property_proxy<gint, base::CalendarBase> (*this, "year"); }

// (signal) void day-selected ();
// (signal) void day-selected ();
gi::signal_proxy<void(Gtk::Calendar)> signal_day_selected()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "day-selected"); }

// (signal) void next-month ();
// (signal) void next-month ();
gi::signal_proxy<void(Gtk::Calendar)> signal_next_month()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "next-month"); }

// (signal) void next-year ();
// (signal) void next-year ();
gi::signal_proxy<void(Gtk::Calendar)> signal_next_year()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "next-year"); }

// (signal) void prev-month ();
// (signal) void prev-month ();
gi::signal_proxy<void(Gtk::Calendar)> signal_prev_month()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "prev-month"); }

// (signal) void prev-year ();
// (signal) void prev-year ();
gi::signal_proxy<void(Gtk::Calendar)> signal_prev_year()
{ return gi::signal_proxy<void(Gtk::Calendar)> (*this, "prev-year"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra_def.hpp>)
#include <gtk/calendar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/calendar_extra.hpp>)
#include <gtk/calendar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Calendar : public GI_GTK_CALENDAR_BASE
{ typedef GI_GTK_CALENDAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCalendar>
{ typedef Gtk::Calendar type; }; 

} // namespace repository

} // namespace gi

#endif
