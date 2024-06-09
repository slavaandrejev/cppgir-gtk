// AUTO-GENERATED

#ifndef _GI_GLIB_DATETIME_HPP_
#define _GI_GLIB_DATETIME_HPP_


namespace gi {

namespace repository {

namespace GLib {

class DateTime_Ref;
class TimeZone;
class TimeZone_Ref;

class DateTime;

namespace base {


#define GI_GLIB_DATETIME_BASE base::DateTimeBase
class DateTimeBase : public gi::detail::GBoxedWrapperBase<DateTimeBase, ::GDateTime>
{
typedef gi::detail::GBoxedWrapperBase<DateTimeBase, ::GDateTime> super_type;
public:

DateTimeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_date_time_get_type(); } 

// GDateTime* /*full,nullable*/ g_date_time_new (GTimeZone* tz /*none*/, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* /*full,nullable*/ g_date_time_new (::GTimeZone* tz /*none*/, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL GLib::DateTime new_ (GLib::TimeZone_Ref tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_from_iso8601 (const gchar* text /*none*/, GTimeZone* default_tz /*none,nullable*/);
// ::GDateTime* /*full,nullable*/ g_date_time_new_from_iso8601 (const char* text /*none*/, ::GTimeZone* default_tz /*none,nullable*/);
static GI_INLINE_DECL GLib::DateTime new_from_iso8601 (const gi::cstring_v text, GLib::TimeZone_Ref default_tz) noexcept;
static GI_INLINE_DECL GLib::DateTime new_from_iso8601 (const gi::cstring_v text) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_from_timeval_local (const GTimeVal* tv /*none*/);
// ::GDateTime* /*full,nullable*/ g_date_time_new_from_timeval_local (const  tv /*none*/);
// IGNORE; deprecated

// GDateTime* /*full,nullable*/ g_date_time_new_from_timeval_utc (const GTimeVal* tv /*none*/);
// ::GDateTime* /*full,nullable*/ g_date_time_new_from_timeval_utc (const  tv /*none*/);
// IGNORE; deprecated

// GDateTime* /*full,nullable*/ g_date_time_new_from_unix_local (gint64 t);
// ::GDateTime* /*full,nullable*/ g_date_time_new_from_unix_local (gint64 t);
static GI_INLINE_DECL GLib::DateTime new_from_unix_local (gint64 t) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_from_unix_local_usec (gint64 usecs);
// ::GDateTime* /*full,nullable*/ g_date_time_new_from_unix_local_usec (gint64 usecs);
static GI_INLINE_DECL GLib::DateTime new_from_unix_local_usec (gint64 usecs) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_from_unix_utc (gint64 t);
// ::GDateTime* /*full,nullable*/ g_date_time_new_from_unix_utc (gint64 t);
static GI_INLINE_DECL GLib::DateTime new_from_unix_utc (gint64 t) noexcept;

// GDateTime* /*full*/ g_date_time_new_from_unix_utc_usec (gint64 usecs);
// ::GDateTime* /*full*/ g_date_time_new_from_unix_utc_usec (gint64 usecs);
static GI_INLINE_DECL GLib::DateTime new_from_unix_utc_usec (gint64 usecs) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* /*full,nullable*/ g_date_time_new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL GLib::DateTime new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_now (GTimeZone* tz /*none*/);
// ::GDateTime* /*full,nullable*/ g_date_time_new_now (::GTimeZone* tz /*none*/);
static GI_INLINE_DECL GLib::DateTime new_now (GLib::TimeZone_Ref tz) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_now_local ();
// ::GDateTime* /*full,nullable*/ g_date_time_new_now_local ();
static GI_INLINE_DECL GLib::DateTime new_now_local () noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_now_utc ();
// ::GDateTime* /*full,nullable*/ g_date_time_new_now_utc ();
static GI_INLINE_DECL GLib::DateTime new_now_utc () noexcept;

// GDateTime* /*full,nullable*/ g_date_time_new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* /*full,nullable*/ g_date_time_new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL GLib::DateTime new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add (GDateTime* datetime /*none*/, GTimeSpan timespan);
// ::GDateTime* /*full,nullable*/ g_date_time_add (::GDateTime* datetime /*none*/, ::GTimeSpan timespan);
GI_INLINE_DECL GLib::DateTime add (::GTimeSpan timespan) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_days (GDateTime* datetime /*none*/, gint days);
// ::GDateTime* /*full,nullable*/ g_date_time_add_days (::GDateTime* datetime /*none*/, gint days);
GI_INLINE_DECL GLib::DateTime add_days (gint days) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_full (GDateTime* datetime /*none*/, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
// ::GDateTime* /*full,nullable*/ g_date_time_add_full (::GDateTime* datetime /*none*/, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
GI_INLINE_DECL GLib::DateTime add_full (gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_hours (GDateTime* datetime /*none*/, gint hours);
// ::GDateTime* /*full,nullable*/ g_date_time_add_hours (::GDateTime* datetime /*none*/, gint hours);
GI_INLINE_DECL GLib::DateTime add_hours (gint hours) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_minutes (GDateTime* datetime /*none*/, gint minutes);
// ::GDateTime* /*full,nullable*/ g_date_time_add_minutes (::GDateTime* datetime /*none*/, gint minutes);
GI_INLINE_DECL GLib::DateTime add_minutes (gint minutes) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_months (GDateTime* datetime /*none*/, gint months);
// ::GDateTime* /*full,nullable*/ g_date_time_add_months (::GDateTime* datetime /*none*/, gint months);
GI_INLINE_DECL GLib::DateTime add_months (gint months) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_seconds (GDateTime* datetime /*none*/, gdouble seconds);
// ::GDateTime* /*full,nullable*/ g_date_time_add_seconds (::GDateTime* datetime /*none*/, gdouble seconds);
GI_INLINE_DECL GLib::DateTime add_seconds (gdouble seconds) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_weeks (GDateTime* datetime /*none*/, gint weeks);
// ::GDateTime* /*full,nullable*/ g_date_time_add_weeks (::GDateTime* datetime /*none*/, gint weeks);
GI_INLINE_DECL GLib::DateTime add_weeks (gint weeks) noexcept;

// GDateTime* /*full,nullable*/ g_date_time_add_years (GDateTime* datetime /*none*/, gint years);
// ::GDateTime* /*full,nullable*/ g_date_time_add_years (::GDateTime* datetime /*none*/, gint years);
GI_INLINE_DECL GLib::DateTime add_years (gint years) noexcept;

// gint g_date_time_compare (gconstpointer dt1 /*none*/, gconstpointer dt2 /*none*/);
// gint g_date_time_compare (const ::GDateTime* dt1 /*none*/, const ::GDateTime* dt2 /*none*/);
GI_INLINE_DECL gint compare (const GLib::DateTime_Ref dt2) const noexcept;

// GTimeSpan g_date_time_difference (GDateTime* end /*none*/, GDateTime* begin /*none*/);
// ::GTimeSpan g_date_time_difference (::GDateTime* end /*none*/, ::GDateTime* begin /*none*/);
GI_INLINE_DECL GLib::TimeSpan difference (GLib::DateTime_Ref begin) noexcept;

// gboolean g_date_time_equal (gconstpointer dt1 /*none*/, gconstpointer dt2 /*none*/);
// gboolean g_date_time_equal (const ::GDateTime* dt1 /*none*/, const ::GDateTime* dt2 /*none*/);
GI_INLINE_DECL bool equal (const GLib::DateTime_Ref dt2) const noexcept;

// gchar* /*full,nullable*/ g_date_time_format (GDateTime* datetime /*none*/, const gchar* format /*none*/);
// char* /*full,nullable*/ g_date_time_format (::GDateTime* datetime /*none*/, const char* format /*none*/);
GI_INLINE_DECL gi::cstring format (const gi::cstring_v format) noexcept;

// gchar* /*full,nullable*/ g_date_time_format_iso8601 (GDateTime* datetime /*none*/);
// char* /*full,nullable*/ g_date_time_format_iso8601 (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gi::cstring format_iso8601 () noexcept;

// gint g_date_time_get_day_of_month (GDateTime* datetime /*none*/);
// gint g_date_time_get_day_of_month (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_day_of_month () noexcept;

// gint g_date_time_get_day_of_week (GDateTime* datetime /*none*/);
// gint g_date_time_get_day_of_week (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_day_of_week () noexcept;

// gint g_date_time_get_day_of_year (GDateTime* datetime /*none*/);
// gint g_date_time_get_day_of_year (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_day_of_year () noexcept;

// gint g_date_time_get_hour (GDateTime* datetime /*none*/);
// gint g_date_time_get_hour (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_hour () noexcept;

// gint g_date_time_get_microsecond (GDateTime* datetime /*none*/);
// gint g_date_time_get_microsecond (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_microsecond () noexcept;

// gint g_date_time_get_minute (GDateTime* datetime /*none*/);
// gint g_date_time_get_minute (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_minute () noexcept;

// gint g_date_time_get_month (GDateTime* datetime /*none*/);
// gint g_date_time_get_month (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_month () noexcept;

// gint g_date_time_get_second (GDateTime* datetime /*none*/);
// gint g_date_time_get_second (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_second () noexcept;

// gdouble g_date_time_get_seconds (GDateTime* datetime /*none*/);
// gdouble g_date_time_get_seconds (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gdouble get_seconds () noexcept;

// GTimeZone* /*none*/ g_date_time_get_timezone (GDateTime* datetime /*none*/);
// ::GTimeZone* /*none*/ g_date_time_get_timezone (::GDateTime* datetime /*none*/);
GI_INLINE_DECL GLib::TimeZone_Ref get_timezone () noexcept;

// const gchar* /*none*/ g_date_time_get_timezone_abbreviation (GDateTime* datetime /*none*/);
// const char* /*none*/ g_date_time_get_timezone_abbreviation (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gi::cstring_v get_timezone_abbreviation () noexcept;

// GTimeSpan g_date_time_get_utc_offset (GDateTime* datetime /*none*/);
// ::GTimeSpan g_date_time_get_utc_offset (::GDateTime* datetime /*none*/);
GI_INLINE_DECL GLib::TimeSpan get_utc_offset () noexcept;

// gint g_date_time_get_week_numbering_year (GDateTime* datetime /*none*/);
// gint g_date_time_get_week_numbering_year (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_week_numbering_year () noexcept;

// gint g_date_time_get_week_of_year (GDateTime* datetime /*none*/);
// gint g_date_time_get_week_of_year (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_week_of_year () noexcept;

// gint g_date_time_get_year (GDateTime* datetime /*none*/);
// gint g_date_time_get_year (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint get_year () noexcept;

// void g_date_time_get_ymd (GDateTime* datetime /*none*/, gint* year, gint* month, gint* day);
// void g_date_time_get_ymd (::GDateTime* datetime /*none*/, gint* year, gint* month, gint* day);
GI_INLINE_DECL void get_ymd (gint * year, gint * month, gint * day) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint> get_ymd () noexcept;

// guint g_date_time_hash (gconstpointer datetime /*none*/);
// guint g_date_time_hash (const ::GDateTime* datetime /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_date_time_is_daylight_savings (GDateTime* datetime /*none*/);
// gboolean g_date_time_is_daylight_savings (::GDateTime* datetime /*none*/);
GI_INLINE_DECL bool is_daylight_savings () noexcept;

// GDateTime* /*full*/ g_date_time_ref (GDateTime* datetime /*none*/);
// ::GDateTime* /*full*/ g_date_time_ref (::GDateTime* datetime /*none*/);
// IGNORE; marked ignore

// GDateTime* /*full,nullable*/ g_date_time_to_local (GDateTime* datetime /*none*/);
// ::GDateTime* /*full,nullable*/ g_date_time_to_local (::GDateTime* datetime /*none*/);
GI_INLINE_DECL GLib::DateTime to_local () noexcept;

// gboolean g_date_time_to_timeval (GDateTime* datetime /*none*/, GTimeVal* tv /*none*/);
// gboolean g_date_time_to_timeval (::GDateTime* datetime /*none*/,  tv /*none*/);
// IGNORE; deprecated

// GDateTime* /*full,nullable*/ g_date_time_to_timezone (GDateTime* datetime /*none*/, GTimeZone* tz /*none*/);
// ::GDateTime* /*full,nullable*/ g_date_time_to_timezone (::GDateTime* datetime /*none*/, ::GTimeZone* tz /*none*/);
GI_INLINE_DECL GLib::DateTime to_timezone (GLib::TimeZone_Ref tz) noexcept;

// gint64 g_date_time_to_unix (GDateTime* datetime /*none*/);
// gint64 g_date_time_to_unix (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint64 to_unix () noexcept;

// gint64 g_date_time_to_unix_usec (GDateTime* datetime /*none*/);
// gint64 g_date_time_to_unix_usec (::GDateTime* datetime /*none*/);
GI_INLINE_DECL gint64 to_unix_usec () noexcept;

// GDateTime* /*full,nullable*/ g_date_time_to_utc (GDateTime* datetime /*none*/);
// ::GDateTime* /*full,nullable*/ g_date_time_to_utc (::GDateTime* datetime /*none*/);
GI_INLINE_DECL GLib::DateTime to_utc () noexcept;

// void g_date_time_unref (GDateTime* datetime /*none*/);
// void g_date_time_unref (::GDateTime* datetime /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/datetime_extra_def.hpp>)
#include <glib/datetime_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/datetime_extra.hpp>)
#include <glib/datetime_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class DateTime_Ref;

class DateTime : public gi::detail::GBoxedWrapper<DateTime, ::GDateTime, GI_GLIB_DATETIME_BASE, DateTime_Ref>
{ typedef gi::detail::GBoxedWrapper<DateTime, ::GDateTime, GI_GLIB_DATETIME_BASE, DateTime_Ref> super_type; using super_type::super_type; };


class DateTime_Ref : public gi::detail::GBoxedRefWrapper<DateTime, ::GDateTime, GI_GLIB_DATETIME_BASE>
{ typedef gi::detail::GBoxedRefWrapper<DateTime, ::GDateTime, GI_GLIB_DATETIME_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GDateTime>
{ typedef GLib::DateTime type; }; 

} // namespace repository

} // namespace gi

#endif
