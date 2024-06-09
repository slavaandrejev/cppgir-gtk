// AUTO-GENERATED

#ifndef _GI_GLIB_DATE_HPP_
#define _GI_GLIB_DATE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Date_Ref;

class Date;

namespace base {


#define GI_GLIB_DATE_BASE base::DateBase
class DateBase : public gi::detail::GBoxedWrapperBase<DateBase, ::GDate>
{
typedef gi::detail::GBoxedWrapperBase<DateBase, ::GDate> super_type;
public:

DateBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_date_get_type(); } 

// guint Date::julian_days (const ::GDate* obj /*none*/);
// guint Date::julian_days (const ::GDate* obj /*none*/);
GI_INLINE_DECL guint julian_days_ () const noexcept;

//  Date::julian_days (::GDate* obj /*none*/, guint _value);
// void Date::julian_days (::GDate* obj /*none*/, guint _value);
GI_INLINE_DECL void julian_days_ (guint _value) noexcept;

// guint Date::julian (const ::GDate* obj /*none*/);
// guint Date::julian (const ::GDate* obj /*none*/);
GI_INLINE_DECL guint julian_ () const noexcept;

//  Date::julian (::GDate* obj /*none*/, guint _value);
// void Date::julian (::GDate* obj /*none*/, guint _value);
GI_INLINE_DECL void julian_ (guint _value) noexcept;

// guint Date::dmy (const ::GDate* obj /*none*/);
// guint Date::dmy (const ::GDate* obj /*none*/);
GI_INLINE_DECL guint dmy_ () const noexcept;

//  Date::dmy (::GDate* obj /*none*/, guint _value);
// void Date::dmy (::GDate* obj /*none*/, guint _value);
GI_INLINE_DECL void dmy_ (guint _value) noexcept;

// guint Date::day (const ::GDate* obj /*none*/);
// guint Date::day (const ::GDate* obj /*none*/);
GI_INLINE_DECL guint day_ () const noexcept;

//  Date::day (::GDate* obj /*none*/, guint _value);
// void Date::day (::GDate* obj /*none*/, guint _value);
GI_INLINE_DECL void day_ (guint _value) noexcept;

// guint Date::month (const ::GDate* obj /*none*/);
// guint Date::month (const ::GDate* obj /*none*/);
GI_INLINE_DECL guint month_ () const noexcept;

//  Date::month (::GDate* obj /*none*/, guint _value);
// void Date::month (::GDate* obj /*none*/, guint _value);
GI_INLINE_DECL void month_ (guint _value) noexcept;

// guint Date::year (const ::GDate* obj /*none*/);
// guint Date::year (const ::GDate* obj /*none*/);
GI_INLINE_DECL guint year_ () const noexcept;

//  Date::year (::GDate* obj /*none*/, guint _value);
// void Date::year (::GDate* obj /*none*/, guint _value);
GI_INLINE_DECL void year_ (guint _value) noexcept;

// GDate* /*full*/ g_date_new ();
// ::GDate* /*full*/ g_date_new ();
static GI_INLINE_DECL GLib::Date new_ () noexcept;

// GDate* /*full*/ g_date_new_dmy (GDateDay day, GDateMonth month, GDateYear year);
// ::GDate* /*full*/ g_date_new_dmy (::GDateDay day, ::GDateMonth month, ::GDateYear year);
static GI_INLINE_DECL GLib::Date new_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear year) noexcept;

// GDate* /*full*/ g_date_new_julian (guint32 julian_day);
// ::GDate* /*full*/ g_date_new_julian (guint32 julian_day);
static GI_INLINE_DECL GLib::Date new_julian (guint32 julian_day) noexcept;

// void g_date_add_days (GDate* date /*none*/, guint n_days);
// void g_date_add_days (::GDate* date /*none*/, guint n_days);
GI_INLINE_DECL void add_days (guint n_days) noexcept;

// void g_date_add_months (GDate* date /*none*/, guint n_months);
// void g_date_add_months (::GDate* date /*none*/, guint n_months);
GI_INLINE_DECL void add_months (guint n_months) noexcept;

// void g_date_add_years (GDate* date /*none*/, guint n_years);
// void g_date_add_years (::GDate* date /*none*/, guint n_years);
GI_INLINE_DECL void add_years (guint n_years) noexcept;

// void g_date_clamp (GDate* date /*none*/, const GDate* min_date /*none*/, const GDate* max_date /*none*/);
// void g_date_clamp (::GDate* date /*none*/, const ::GDate* min_date /*none*/, const ::GDate* max_date /*none*/);
GI_INLINE_DECL void clamp (const GLib::Date_Ref min_date, const GLib::Date_Ref max_date) noexcept;

// void g_date_clear (GDate* date /*none*/, guint n_dates);
// void g_date_clear (::GDate* date /*none*/, guint n_dates);
GI_INLINE_DECL void clear (guint n_dates) noexcept;

// gint g_date_compare (const GDate* lhs /*none*/, const GDate* rhs /*none*/);
// gint g_date_compare (const ::GDate* lhs /*none*/, const ::GDate* rhs /*none*/);
GI_INLINE_DECL gint compare (const GLib::Date_Ref rhs) const noexcept;

// GDate* /*full*/ g_date_copy (const GDate* date /*none*/);
// ::GDate* /*full*/ g_date_copy (const ::GDate* date /*none*/);
GI_INLINE_DECL GLib::Date copy () const noexcept;

// gint g_date_days_between (const GDate* date1 /*none*/, const GDate* date2 /*none*/);
// gint g_date_days_between (const ::GDate* date1 /*none*/, const ::GDate* date2 /*none*/);
GI_INLINE_DECL gint days_between (const GLib::Date_Ref date2) const noexcept;

// void g_date_free (GDate* date /*none*/);
// void g_date_free (::GDate* date /*none*/);
// IGNORE; marked ignore

// GDateDay g_date_get_day (const GDate* date /*none*/);
// ::GDateDay g_date_get_day (const ::GDate* date /*none*/);
GI_INLINE_DECL GLib::DateDay get_day () const noexcept;

// guint g_date_get_day_of_year (const GDate* date /*none*/);
// guint g_date_get_day_of_year (const ::GDate* date /*none*/);
GI_INLINE_DECL guint get_day_of_year () const noexcept;

// guint g_date_get_iso8601_week_of_year (const GDate* date /*none*/);
// guint g_date_get_iso8601_week_of_year (const ::GDate* date /*none*/);
GI_INLINE_DECL guint get_iso8601_week_of_year () const noexcept;

// guint32 g_date_get_julian (const GDate* date /*none*/);
// guint32 g_date_get_julian (const ::GDate* date /*none*/);
GI_INLINE_DECL guint32 get_julian () const noexcept;

// guint g_date_get_monday_week_of_year (const GDate* date /*none*/);
// guint g_date_get_monday_week_of_year (const ::GDate* date /*none*/);
GI_INLINE_DECL guint get_monday_week_of_year () const noexcept;

// GDateMonth g_date_get_month (const GDate* date /*none*/);
// ::GDateMonth g_date_get_month (const ::GDate* date /*none*/);
GI_INLINE_DECL GLib::DateMonth get_month () const noexcept;

// guint g_date_get_sunday_week_of_year (const GDate* date /*none*/);
// guint g_date_get_sunday_week_of_year (const ::GDate* date /*none*/);
GI_INLINE_DECL guint get_sunday_week_of_year () const noexcept;

// GDateWeekday g_date_get_weekday (const GDate* date /*none*/);
// ::GDateWeekday g_date_get_weekday (const ::GDate* date /*none*/);
GI_INLINE_DECL GLib::DateWeekday get_weekday () const noexcept;

// GDateYear g_date_get_year (const GDate* date /*none*/);
// ::GDateYear g_date_get_year (const ::GDate* date /*none*/);
GI_INLINE_DECL GLib::DateYear get_year () const noexcept;

// gboolean g_date_is_first_of_month (const GDate* date /*none*/);
// gboolean g_date_is_first_of_month (const ::GDate* date /*none*/);
GI_INLINE_DECL bool is_first_of_month () const noexcept;

// gboolean g_date_is_last_of_month (const GDate* date /*none*/);
// gboolean g_date_is_last_of_month (const ::GDate* date /*none*/);
GI_INLINE_DECL bool is_last_of_month () const noexcept;

// void g_date_order (GDate* date1 /*none*/, GDate* date2 /*none*/);
// void g_date_order (::GDate* date1 /*none*/, ::GDate* date2 /*none*/);
GI_INLINE_DECL void order (GLib::Date_Ref date2) noexcept;

// void g_date_set_day (GDate* date /*none*/, GDateDay day);
// void g_date_set_day (::GDate* date /*none*/, ::GDateDay day);
GI_INLINE_DECL void set_day (::GDateDay day) noexcept;

// void g_date_set_dmy (GDate* date /*none*/, GDateDay day, GDateMonth month, GDateYear y);
// void g_date_set_dmy (::GDate* date /*none*/, ::GDateDay day, ::GDateMonth month, ::GDateYear y);
GI_INLINE_DECL void set_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear y) noexcept;

// void g_date_set_julian (GDate* date /*none*/, guint32 julian_date);
// void g_date_set_julian (::GDate* date /*none*/, guint32 julian_date);
GI_INLINE_DECL void set_julian (guint32 julian_date) noexcept;

// void g_date_set_month (GDate* date /*none*/, GDateMonth month);
// void g_date_set_month (::GDate* date /*none*/, ::GDateMonth month);
GI_INLINE_DECL void set_month (GLib::DateMonth month) noexcept;

// void g_date_set_parse (GDate* date /*none*/, const gchar* str /*none*/);
// void g_date_set_parse (::GDate* date /*none*/, const char* str /*none*/);
GI_INLINE_DECL void set_parse (const gi::cstring_v str) noexcept;

// void g_date_set_time (GDate* date /*none*/, GTime time_ /*none*/);
// void g_date_set_time (::GDate* date /*none*/,  time_ /*none*/);
// IGNORE; deprecated

// void g_date_set_time_t (GDate* date /*none*/, time_t timet);
// void g_date_set_time_t (::GDate* date /*none*/, glong timet);
GI_INLINE_DECL void set_time_t (glong timet) noexcept;

// void g_date_set_time_val (GDate* date /*none*/, GTimeVal* timeval /*none*/);
// void g_date_set_time_val (::GDate* date /*none*/,  timeval /*none*/);
// IGNORE; deprecated

// void g_date_set_year (GDate* date /*none*/, GDateYear year);
// void g_date_set_year (::GDate* date /*none*/, ::GDateYear year);
GI_INLINE_DECL void set_year (::GDateYear year) noexcept;

// void g_date_subtract_days (GDate* date /*none*/, guint n_days);
// void g_date_subtract_days (::GDate* date /*none*/, guint n_days);
GI_INLINE_DECL void subtract_days (guint n_days) noexcept;

// void g_date_subtract_months (GDate* date /*none*/, guint n_months);
// void g_date_subtract_months (::GDate* date /*none*/, guint n_months);
GI_INLINE_DECL void subtract_months (guint n_months) noexcept;

// void g_date_subtract_years (GDate* date /*none*/, guint n_years);
// void g_date_subtract_years (::GDate* date /*none*/, guint n_years);
GI_INLINE_DECL void subtract_years (guint n_years) noexcept;

// void g_date_to_struct_tm (const GDate* date /*none*/, tm* tm);
// void g_date_to_struct_tm (const ::GDate* date /*none*/, void* tm);
GI_INLINE_DECL void to_struct_tm (void* tm) const noexcept;

// gboolean g_date_valid (const GDate* date /*none*/);
// gboolean g_date_valid (const ::GDate* date /*none*/);
GI_INLINE_DECL bool valid () const noexcept;

// guint8 g_date_get_days_in_month (GDateMonth month, GDateYear year);
// guint8 g_date_get_days_in_month (::GDateMonth month, ::GDateYear year);
static GI_INLINE_DECL guint8 get_days_in_month (GLib::DateMonth month, ::GDateYear year) noexcept;

// guint8 g_date_get_monday_weeks_in_year (GDateYear year);
// guint8 g_date_get_monday_weeks_in_year (::GDateYear year);
static GI_INLINE_DECL guint8 get_monday_weeks_in_year (::GDateYear year) noexcept;

// guint8 g_date_get_sunday_weeks_in_year (GDateYear year);
// guint8 g_date_get_sunday_weeks_in_year (::GDateYear year);
static GI_INLINE_DECL guint8 get_sunday_weeks_in_year (::GDateYear year) noexcept;

// gboolean g_date_is_leap_year (GDateYear year);
// gboolean g_date_is_leap_year (::GDateYear year);
static GI_INLINE_DECL bool is_leap_year (::GDateYear year) noexcept;

// gsize g_date_strftime (gchar* s /*none*/, gsize slen, const gchar* format /*none*/, const GDate* date /*none*/);
// gsize g_date_strftime (char* s /*none*/, gsize slen, const char* format /*none*/, const ::GDate* date /*none*/);
static GI_INLINE_DECL gsize strftime (gi::cstring_v s, gsize slen, const gi::cstring_v format, const GLib::Date_Ref date) noexcept;

// gboolean g_date_valid_day (GDateDay day);
// gboolean g_date_valid_day (::GDateDay day);
static GI_INLINE_DECL bool valid_day (::GDateDay day) noexcept;

// gboolean g_date_valid_dmy (GDateDay day, GDateMonth month, GDateYear year);
// gboolean g_date_valid_dmy (::GDateDay day, ::GDateMonth month, ::GDateYear year);
static GI_INLINE_DECL bool valid_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear year) noexcept;

// gboolean g_date_valid_julian (guint32 julian_date);
// gboolean g_date_valid_julian (guint32 julian_date);
static GI_INLINE_DECL bool valid_julian (guint32 julian_date) noexcept;

// gboolean g_date_valid_month (GDateMonth month);
// gboolean g_date_valid_month (::GDateMonth month);
static GI_INLINE_DECL bool valid_month (GLib::DateMonth month) noexcept;

// gboolean g_date_valid_weekday (GDateWeekday weekday);
// gboolean g_date_valid_weekday (::GDateWeekday weekday);
static GI_INLINE_DECL bool valid_weekday (GLib::DateWeekday weekday) noexcept;

// gboolean g_date_valid_year (GDateYear year);
// gboolean g_date_valid_year (::GDateYear year);
static GI_INLINE_DECL bool valid_year (::GDateYear year) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/date_extra_def.hpp>)
#include <glib/date_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/date_extra.hpp>)
#include <glib/date_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Date_Ref;

class Date : public gi::detail::GBoxedWrapper<Date, ::GDate, GI_GLIB_DATE_BASE, Date_Ref>
{ typedef gi::detail::GBoxedWrapper<Date, ::GDate, GI_GLIB_DATE_BASE, Date_Ref> super_type; using super_type::super_type; };


class Date_Ref : public gi::detail::GBoxedRefWrapper<Date, ::GDate, GI_GLIB_DATE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Date, ::GDate, GI_GLIB_DATE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GDate>
{ typedef GLib::Date type; }; 

} // namespace repository

} // namespace gi

#endif
