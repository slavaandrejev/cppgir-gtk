// AUTO-GENERATED

#ifndef _GI_GLIB_DATE_IMPL_HPP_
#define _GI_GLIB_DATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static guint _field_julian_days_get (const ::GDate* obj) { return (guint) obj->julian_days; }
// guint Date::julian_days (const ::GDate* obj /*none*/);
// guint Date::julian_days (const ::GDate* obj /*none*/);
guint base::DateBase::julian_days_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_julian_days_get;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

static void _field_julian_days_set (::GDate* obj, guint _value) { obj->julian_days = (decltype(obj->julian_days)) _value; }
//  Date::julian_days (::GDate* obj /*none*/, guint _value);
// void Date::julian_days (::GDate* obj /*none*/, guint _value);
void base::DateBase::julian_days_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDate* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_julian_days_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_julian_get (const ::GDate* obj) { return (guint) obj->julian; }
// guint Date::julian (const ::GDate* obj /*none*/);
// guint Date::julian (const ::GDate* obj /*none*/);
guint base::DateBase::julian_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_julian_get;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

static void _field_julian_set (::GDate* obj, guint _value) { obj->julian = (decltype(obj->julian)) _value; }
//  Date::julian (::GDate* obj /*none*/, guint _value);
// void Date::julian (::GDate* obj /*none*/, guint _value);
void base::DateBase::julian_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDate* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_julian_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_dmy_get (const ::GDate* obj) { return (guint) obj->dmy; }
// guint Date::dmy (const ::GDate* obj /*none*/);
// guint Date::dmy (const ::GDate* obj /*none*/);
guint base::DateBase::dmy_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dmy_get;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

static void _field_dmy_set (::GDate* obj, guint _value) { obj->dmy = (decltype(obj->dmy)) _value; }
//  Date::dmy (::GDate* obj /*none*/, guint _value);
// void Date::dmy (::GDate* obj /*none*/, guint _value);
void base::DateBase::dmy_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDate* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dmy_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_day_get (const ::GDate* obj) { return (guint) obj->day; }
// guint Date::day (const ::GDate* obj /*none*/);
// guint Date::day (const ::GDate* obj /*none*/);
guint base::DateBase::day_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_day_get;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

static void _field_day_set (::GDate* obj, guint _value) { obj->day = (decltype(obj->day)) _value; }
//  Date::day (::GDate* obj /*none*/, guint _value);
// void Date::day (::GDate* obj /*none*/, guint _value);
void base::DateBase::day_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDate* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_day_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_month_get (const ::GDate* obj) { return (guint) obj->month; }
// guint Date::month (const ::GDate* obj /*none*/);
// guint Date::month (const ::GDate* obj /*none*/);
guint base::DateBase::month_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_month_get;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

static void _field_month_set (::GDate* obj, guint _value) { obj->month = (decltype(obj->month)) _value; }
//  Date::month (::GDate* obj /*none*/, guint _value);
// void Date::month (::GDate* obj /*none*/, guint _value);
void base::DateBase::month_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDate* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_month_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_year_get (const ::GDate* obj) { return (guint) obj->year; }
// guint Date::year (const ::GDate* obj /*none*/);
// guint Date::year (const ::GDate* obj /*none*/);
guint base::DateBase::year_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_year_get;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

static void _field_year_set (::GDate* obj, guint _value) { obj->year = (decltype(obj->year)) _value; }
//  Date::year (::GDate* obj /*none*/, guint _value);
// void Date::year (::GDate* obj /*none*/, guint _value);
void base::DateBase::year_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDate* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_year_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (_value_to_c));
}

// GDate* /*full*/ g_date_new ();
// ::GDate* /*full*/ g_date_new ();
GLib::Date base::DateBase::new_ () noexcept
{
  typedef ::GDate* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDate* /*full*/ g_date_new_dmy (GDateDay day, GDateMonth month, GDateYear year);
// ::GDate* /*full*/ g_date_new_dmy (::GDateDay day, ::GDateMonth month, ::GDateYear year);
GLib::Date base::DateBase::new_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear year) noexcept
{
  typedef ::GDate* (*call_wrap_t) (::GDateDay day, ::GDateMonth month, ::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_new_dmy;
  auto year_to_c = year;
  auto month_to_c = gi::unwrap (month);
  auto day_to_c = day;
  auto _temp_ret = call_wrap_v ((::GDateDay) (day_to_c), (::GDateMonth) (month_to_c), (::GDateYear) (year_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDate* /*full*/ g_date_new_julian (guint32 julian_day);
// ::GDate* /*full*/ g_date_new_julian (guint32 julian_day);
GLib::Date base::DateBase::new_julian (guint32 julian_day) noexcept
{
  typedef ::GDate* (*call_wrap_t) (guint32 julian_day);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_new_julian;
  auto julian_day_to_c = julian_day;
  auto _temp_ret = call_wrap_v ((guint32) (julian_day_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_date_add_days (GDate* date /*none*/, guint n_days);
// void g_date_add_days (::GDate* date /*none*/, guint n_days);
void base::DateBase::add_days (guint n_days) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_days);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_add_days;
  auto n_days_to_c = n_days;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_days_to_c));
}

// void g_date_add_months (GDate* date /*none*/, guint n_months);
// void g_date_add_months (::GDate* date /*none*/, guint n_months);
void base::DateBase::add_months (guint n_months) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_months);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_add_months;
  auto n_months_to_c = n_months;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_months_to_c));
}

// void g_date_add_years (GDate* date /*none*/, guint n_years);
// void g_date_add_years (::GDate* date /*none*/, guint n_years);
void base::DateBase::add_years (guint n_years) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_years);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_add_years;
  auto n_years_to_c = n_years;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_years_to_c));
}

// void g_date_clamp (GDate* date /*none*/, const GDate* min_date /*none*/, const GDate* max_date /*none*/);
// void g_date_clamp (::GDate* date /*none*/, const ::GDate* min_date /*none*/, const ::GDate* max_date /*none*/);
void base::DateBase::clamp (const GLib::Date_Ref min_date, const GLib::Date_Ref max_date) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, const ::GDate* min_date, const ::GDate* max_date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_clamp;
  auto max_date_to_c = gi::unwrap (max_date, gi::transfer_none);
  auto min_date_to_c = gi::unwrap (min_date, gi::transfer_none);
  call_wrap_v ((::GDate*) (gobj_()), (const ::GDate*) (min_date_to_c), (const ::GDate*) (max_date_to_c));
}

// void g_date_clear (GDate* date /*none*/, guint n_dates);
// void g_date_clear (::GDate* date /*none*/, guint n_dates);
void base::DateBase::clear (guint n_dates) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_dates);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_clear;
  auto n_dates_to_c = n_dates;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_dates_to_c));
}

// gint g_date_compare (const GDate* lhs /*none*/, const GDate* rhs /*none*/);
// gint g_date_compare (const ::GDate* lhs /*none*/, const ::GDate* rhs /*none*/);
gint base::DateBase::compare (const GLib::Date_Ref rhs) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDate* lhs, const ::GDate* rhs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_compare;
  auto rhs_to_c = gi::unwrap (rhs, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()), (const ::GDate*) (rhs_to_c));
  return _temp_ret;
}

// GDate* /*full*/ g_date_copy (const GDate* date /*none*/);
// ::GDate* /*full*/ g_date_copy (const ::GDate* date /*none*/);
GLib::Date base::DateBase::copy () const noexcept
{
  typedef ::GDate* (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_copy;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gint g_date_days_between (const GDate* date1 /*none*/, const GDate* date2 /*none*/);
// gint g_date_days_between (const ::GDate* date1 /*none*/, const ::GDate* date2 /*none*/);
gint base::DateBase::days_between (const GLib::Date_Ref date2) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDate* date1, const ::GDate* date2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_days_between;
  auto date2_to_c = gi::unwrap (date2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()), (const ::GDate*) (date2_to_c));
  return _temp_ret;
}

// void g_date_free (GDate* date /*none*/);
// void g_date_free (::GDate* date /*none*/);
// IGNORE; marked ignore

// GDateDay g_date_get_day (const GDate* date /*none*/);
// ::GDateDay g_date_get_day (const ::GDate* date /*none*/);
GLib::DateDay base::DateBase::get_day () const noexcept
{
  typedef ::GDateDay (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_day;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// guint g_date_get_day_of_year (const GDate* date /*none*/);
// guint g_date_get_day_of_year (const ::GDate* date /*none*/);
guint base::DateBase::get_day_of_year () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_day_of_year;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// guint g_date_get_iso8601_week_of_year (const GDate* date /*none*/);
// guint g_date_get_iso8601_week_of_year (const ::GDate* date /*none*/);
guint base::DateBase::get_iso8601_week_of_year () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_iso8601_week_of_year;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// guint32 g_date_get_julian (const GDate* date /*none*/);
// guint32 g_date_get_julian (const ::GDate* date /*none*/);
guint32 base::DateBase::get_julian () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_julian;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// guint g_date_get_monday_week_of_year (const GDate* date /*none*/);
// guint g_date_get_monday_week_of_year (const ::GDate* date /*none*/);
guint base::DateBase::get_monday_week_of_year () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_monday_week_of_year;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// GDateMonth g_date_get_month (const GDate* date /*none*/);
// ::GDateMonth g_date_get_month (const ::GDate* date /*none*/);
GLib::DateMonth base::DateBase::get_month () const noexcept
{
  typedef ::GDateMonth (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_month;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_date_get_sunday_week_of_year (const GDate* date /*none*/);
// guint g_date_get_sunday_week_of_year (const ::GDate* date /*none*/);
guint base::DateBase::get_sunday_week_of_year () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_sunday_week_of_year;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// GDateWeekday g_date_get_weekday (const GDate* date /*none*/);
// ::GDateWeekday g_date_get_weekday (const ::GDate* date /*none*/);
GLib::DateWeekday base::DateBase::get_weekday () const noexcept
{
  typedef ::GDateWeekday (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_weekday;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDateYear g_date_get_year (const GDate* date /*none*/);
// ::GDateYear g_date_get_year (const ::GDate* date /*none*/);
GLib::DateYear base::DateBase::get_year () const noexcept
{
  typedef ::GDateYear (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_year;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// gboolean g_date_is_first_of_month (const GDate* date /*none*/);
// gboolean g_date_is_first_of_month (const ::GDate* date /*none*/);
bool base::DateBase::is_first_of_month () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_is_first_of_month;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// gboolean g_date_is_last_of_month (const GDate* date /*none*/);
// gboolean g_date_is_last_of_month (const ::GDate* date /*none*/);
bool base::DateBase::is_last_of_month () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_is_last_of_month;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// void g_date_order (GDate* date1 /*none*/, GDate* date2 /*none*/);
// void g_date_order (::GDate* date1 /*none*/, ::GDate* date2 /*none*/);
void base::DateBase::order (GLib::Date_Ref date2) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date1, ::GDate* date2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_order;
  auto date2_to_c = gi::unwrap (date2, gi::transfer_none);
  call_wrap_v ((::GDate*) (gobj_()), (::GDate*) (date2_to_c));
}

// void g_date_set_day (GDate* date /*none*/, GDateDay day);
// void g_date_set_day (::GDate* date /*none*/, ::GDateDay day);
void base::DateBase::set_day (::GDateDay day) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, ::GDateDay day);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_day;
  auto day_to_c = day;
  call_wrap_v ((::GDate*) (gobj_()), (::GDateDay) (day_to_c));
}

// void g_date_set_dmy (GDate* date /*none*/, GDateDay day, GDateMonth month, GDateYear y);
// void g_date_set_dmy (::GDate* date /*none*/, ::GDateDay day, ::GDateMonth month, ::GDateYear y);
void base::DateBase::set_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear y) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, ::GDateDay day, ::GDateMonth month, ::GDateYear y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_dmy;
  auto y_to_c = y;
  auto month_to_c = gi::unwrap (month);
  auto day_to_c = day;
  call_wrap_v ((::GDate*) (gobj_()), (::GDateDay) (day_to_c), (::GDateMonth) (month_to_c), (::GDateYear) (y_to_c));
}

// void g_date_set_julian (GDate* date /*none*/, guint32 julian_date);
// void g_date_set_julian (::GDate* date /*none*/, guint32 julian_date);
void base::DateBase::set_julian (guint32 julian_date) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint32 julian_date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_julian;
  auto julian_date_to_c = julian_date;
  call_wrap_v ((::GDate*) (gobj_()), (guint32) (julian_date_to_c));
}

// void g_date_set_month (GDate* date /*none*/, GDateMonth month);
// void g_date_set_month (::GDate* date /*none*/, ::GDateMonth month);
void base::DateBase::set_month (GLib::DateMonth month) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, ::GDateMonth month);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_month;
  auto month_to_c = gi::unwrap (month);
  call_wrap_v ((::GDate*) (gobj_()), (::GDateMonth) (month_to_c));
}

// void g_date_set_parse (GDate* date /*none*/, const gchar* str /*none*/);
// void g_date_set_parse (::GDate* date /*none*/, const char* str /*none*/);
void base::DateBase::set_parse (const gi::cstring_v str) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_parse;
  auto str_to_c = gi::unwrap (str, gi::transfer_none);
  call_wrap_v ((::GDate*) (gobj_()), (const char*) (str_to_c));
}

// void g_date_set_time (GDate* date /*none*/, GTime time_ /*none*/);
// void g_date_set_time (::GDate* date /*none*/,  time_ /*none*/);
// IGNORE; deprecated

// void g_date_set_time_t (GDate* date /*none*/, time_t timet);
// void g_date_set_time_t (::GDate* date /*none*/, glong timet);
void base::DateBase::set_time_t (glong timet) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, glong timet);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_time_t;
  auto timet_to_c = timet;
  call_wrap_v ((::GDate*) (gobj_()), (glong) (timet_to_c));
}

// void g_date_set_time_val (GDate* date /*none*/, GTimeVal* timeval /*none*/);
// void g_date_set_time_val (::GDate* date /*none*/,  timeval /*none*/);
// IGNORE; deprecated

// void g_date_set_year (GDate* date /*none*/, GDateYear year);
// void g_date_set_year (::GDate* date /*none*/, ::GDateYear year);
void base::DateBase::set_year (::GDateYear year) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, ::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_set_year;
  auto year_to_c = year;
  call_wrap_v ((::GDate*) (gobj_()), (::GDateYear) (year_to_c));
}

// void g_date_subtract_days (GDate* date /*none*/, guint n_days);
// void g_date_subtract_days (::GDate* date /*none*/, guint n_days);
void base::DateBase::subtract_days (guint n_days) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_days);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_subtract_days;
  auto n_days_to_c = n_days;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_days_to_c));
}

// void g_date_subtract_months (GDate* date /*none*/, guint n_months);
// void g_date_subtract_months (::GDate* date /*none*/, guint n_months);
void base::DateBase::subtract_months (guint n_months) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_months);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_subtract_months;
  auto n_months_to_c = n_months;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_months_to_c));
}

// void g_date_subtract_years (GDate* date /*none*/, guint n_years);
// void g_date_subtract_years (::GDate* date /*none*/, guint n_years);
void base::DateBase::subtract_years (guint n_years) noexcept
{
  typedef void (*call_wrap_t) (::GDate* date, guint n_years);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_subtract_years;
  auto n_years_to_c = n_years;
  call_wrap_v ((::GDate*) (gobj_()), (guint) (n_years_to_c));
}

// void g_date_to_struct_tm (const GDate* date /*none*/, tm* tm);
// void g_date_to_struct_tm (const ::GDate* date /*none*/, void* tm);
void base::DateBase::to_struct_tm (void* tm) const noexcept
{
  typedef void (*call_wrap_t) (const ::GDate* date, void* tm);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_to_struct_tm;
  auto tm_to_c = tm;
  call_wrap_v ((const ::GDate*) (gobj_()), (void*) (tm_to_c));
}

// gboolean g_date_valid (const GDate* date /*none*/);
// gboolean g_date_valid (const ::GDate* date /*none*/);
bool base::DateBase::valid () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid;
  auto _temp_ret = call_wrap_v ((const ::GDate*) (gobj_()));
  return _temp_ret;
}

// guint8 g_date_get_days_in_month (GDateMonth month, GDateYear year);
// guint8 g_date_get_days_in_month (::GDateMonth month, ::GDateYear year);
guint8 base::DateBase::get_days_in_month (GLib::DateMonth month, ::GDateYear year) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDateMonth month, ::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_days_in_month;
  auto year_to_c = year;
  auto month_to_c = gi::unwrap (month);
  auto _temp_ret = call_wrap_v ((::GDateMonth) (month_to_c), (::GDateYear) (year_to_c));
  return _temp_ret;
}

// guint8 g_date_get_monday_weeks_in_year (GDateYear year);
// guint8 g_date_get_monday_weeks_in_year (::GDateYear year);
guint8 base::DateBase::get_monday_weeks_in_year (::GDateYear year) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_monday_weeks_in_year;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((::GDateYear) (year_to_c));
  return _temp_ret;
}

// guint8 g_date_get_sunday_weeks_in_year (GDateYear year);
// guint8 g_date_get_sunday_weeks_in_year (::GDateYear year);
guint8 base::DateBase::get_sunday_weeks_in_year (::GDateYear year) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_get_sunday_weeks_in_year;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((::GDateYear) (year_to_c));
  return _temp_ret;
}

// gboolean g_date_is_leap_year (GDateYear year);
// gboolean g_date_is_leap_year (::GDateYear year);
bool base::DateBase::is_leap_year (::GDateYear year) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_is_leap_year;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((::GDateYear) (year_to_c));
  return _temp_ret;
}

// gsize g_date_strftime (gchar* s /*none*/, gsize slen, const gchar* format /*none*/, const GDate* date /*none*/);
// gsize g_date_strftime (char* s /*none*/, gsize slen, const char* format /*none*/, const ::GDate* date /*none*/);
gsize base::DateBase::strftime (gi::cstring_v s, gsize slen, const gi::cstring_v format, const GLib::Date_Ref date) noexcept
{
  typedef gsize (*call_wrap_t) (char* s, gsize slen, const char* format, const ::GDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_strftime;
  auto date_to_c = gi::unwrap (date, gi::transfer_none);
  auto format_to_c = gi::unwrap (format, gi::transfer_none);
  auto slen_to_c = slen;
  auto s_to_c = gi::unwrap (s, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((char*) (s_to_c), (gsize) (slen_to_c), (const char*) (format_to_c), (const ::GDate*) (date_to_c));
  return _temp_ret;
}

// gboolean g_date_valid_day (GDateDay day);
// gboolean g_date_valid_day (::GDateDay day);
bool base::DateBase::valid_day (::GDateDay day) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateDay day);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid_day;
  auto day_to_c = day;
  auto _temp_ret = call_wrap_v ((::GDateDay) (day_to_c));
  return _temp_ret;
}

// gboolean g_date_valid_dmy (GDateDay day, GDateMonth month, GDateYear year);
// gboolean g_date_valid_dmy (::GDateDay day, ::GDateMonth month, ::GDateYear year);
bool base::DateBase::valid_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear year) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateDay day, ::GDateMonth month, ::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid_dmy;
  auto year_to_c = year;
  auto month_to_c = gi::unwrap (month);
  auto day_to_c = day;
  auto _temp_ret = call_wrap_v ((::GDateDay) (day_to_c), (::GDateMonth) (month_to_c), (::GDateYear) (year_to_c));
  return _temp_ret;
}

// gboolean g_date_valid_julian (guint32 julian_date);
// gboolean g_date_valid_julian (guint32 julian_date);
bool base::DateBase::valid_julian (guint32 julian_date) noexcept
{
  typedef gboolean (*call_wrap_t) (guint32 julian_date);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid_julian;
  auto julian_date_to_c = julian_date;
  auto _temp_ret = call_wrap_v ((guint32) (julian_date_to_c));
  return _temp_ret;
}

// gboolean g_date_valid_month (GDateMonth month);
// gboolean g_date_valid_month (::GDateMonth month);
bool base::DateBase::valid_month (GLib::DateMonth month) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateMonth month);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid_month;
  auto month_to_c = gi::unwrap (month);
  auto _temp_ret = call_wrap_v ((::GDateMonth) (month_to_c));
  return _temp_ret;
}

// gboolean g_date_valid_weekday (GDateWeekday weekday);
// gboolean g_date_valid_weekday (::GDateWeekday weekday);
bool base::DateBase::valid_weekday (GLib::DateWeekday weekday) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateWeekday weekday);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid_weekday;
  auto weekday_to_c = gi::unwrap (weekday);
  auto _temp_ret = call_wrap_v ((::GDateWeekday) (weekday_to_c));
  return _temp_ret;
}

// gboolean g_date_valid_year (GDateYear year);
// gboolean g_date_valid_year (::GDateYear year);
bool base::DateBase::valid_year (::GDateYear year) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateYear year);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_date_valid_year;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((::GDateYear) (year_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/date_extra_def_impl.hpp>)
#include <glib/date_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/date_extra_impl.hpp>)
#include <glib/date_extra_impl.hpp>
#endif
#endif

#endif
