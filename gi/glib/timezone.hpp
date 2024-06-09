// AUTO-GENERATED

#ifndef _GI_GLIB_TIMEZONE_HPP_
#define _GI_GLIB_TIMEZONE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class TimeZone_Ref;

class TimeZone;

namespace base {


#define GI_GLIB_TIMEZONE_BASE base::TimeZoneBase
class TimeZoneBase : public gi::detail::GBoxedWrapperBase<TimeZoneBase, ::GTimeZone>
{
typedef gi::detail::GBoxedWrapperBase<TimeZoneBase, ::GTimeZone> super_type;
public:

TimeZoneBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_time_zone_get_type(); } 

// GTimeZone* /*full*/ g_time_zone_new (const gchar* identifier /*none,nullable*/);
// ::GTimeZone* /*full*/ g_time_zone_new (const char* identifier /*none,nullable*/);
// IGNORE; deprecated

// GTimeZone* /*full,nullable*/ g_time_zone_new_identifier (const gchar* identifier /*none,nullable*/);
// ::GTimeZone* /*full,nullable*/ g_time_zone_new_identifier (const char* identifier /*none,nullable*/);
static GI_INLINE_DECL GLib::TimeZone new_identifier (const gi::cstring_v identifier) noexcept;
static GI_INLINE_DECL GLib::TimeZone new_identifier () noexcept;

// GTimeZone* /*full*/ g_time_zone_new_local ();
// ::GTimeZone* /*full*/ g_time_zone_new_local ();
static GI_INLINE_DECL GLib::TimeZone new_local () noexcept;

// GTimeZone* /*full*/ g_time_zone_new_offset (gint32 seconds);
// ::GTimeZone* /*full*/ g_time_zone_new_offset (gint32 seconds);
static GI_INLINE_DECL GLib::TimeZone new_offset (gint32 seconds) noexcept;

// GTimeZone* /*full*/ g_time_zone_new_utc ();
// ::GTimeZone* /*full*/ g_time_zone_new_utc ();
static GI_INLINE_DECL GLib::TimeZone new_utc () noexcept;

// gint g_time_zone_adjust_time (GTimeZone* tz /*none*/, GTimeType type, gint64* time_);
// gint g_time_zone_adjust_time (::GTimeZone* tz /*none*/, ::GTimeType type, gint64* time_);
GI_INLINE_DECL gint adjust_time (GLib::TimeType type, gint64 & time_) noexcept;

// gint g_time_zone_find_interval (GTimeZone* tz /*none*/, GTimeType type, gint64 time_);
// gint g_time_zone_find_interval (::GTimeZone* tz /*none*/, ::GTimeType type, gint64 time_);
GI_INLINE_DECL gint find_interval (GLib::TimeType type, gint64 time_) noexcept;

// const gchar* /*none*/ g_time_zone_get_abbreviation (GTimeZone* tz /*none*/, gint interval);
// const char* /*none*/ g_time_zone_get_abbreviation (::GTimeZone* tz /*none*/, gint interval);
GI_INLINE_DECL gi::cstring_v get_abbreviation (gint interval) noexcept;

// const gchar* /*none*/ g_time_zone_get_identifier (GTimeZone* tz /*none*/);
// const char* /*none*/ g_time_zone_get_identifier (::GTimeZone* tz /*none*/);
GI_INLINE_DECL gi::cstring_v get_identifier () noexcept;

// gint32 g_time_zone_get_offset (GTimeZone* tz /*none*/, gint interval);
// gint32 g_time_zone_get_offset (::GTimeZone* tz /*none*/, gint interval);
GI_INLINE_DECL gint32 get_offset (gint interval) noexcept;

// gboolean g_time_zone_is_dst (GTimeZone* tz /*none*/, gint interval);
// gboolean g_time_zone_is_dst (::GTimeZone* tz /*none*/, gint interval);
GI_INLINE_DECL bool is_dst (gint interval) noexcept;

// GTimeZone* /*full*/ g_time_zone_ref (GTimeZone* tz /*none*/);
// ::GTimeZone* /*full*/ g_time_zone_ref (::GTimeZone* tz /*none*/);
// IGNORE; marked ignore

// void g_time_zone_unref (GTimeZone* tz /*none*/);
// void g_time_zone_unref (::GTimeZone* tz /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/timezone_extra_def.hpp>)
#include <glib/timezone_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/timezone_extra.hpp>)
#include <glib/timezone_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class TimeZone_Ref;

class TimeZone : public gi::detail::GBoxedWrapper<TimeZone, ::GTimeZone, GI_GLIB_TIMEZONE_BASE, TimeZone_Ref>
{ typedef gi::detail::GBoxedWrapper<TimeZone, ::GTimeZone, GI_GLIB_TIMEZONE_BASE, TimeZone_Ref> super_type; using super_type::super_type; };


class TimeZone_Ref : public gi::detail::GBoxedRefWrapper<TimeZone, ::GTimeZone, GI_GLIB_TIMEZONE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<TimeZone, ::GTimeZone, GI_GLIB_TIMEZONE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTimeZone>
{ typedef GLib::TimeZone type; }; 

} // namespace repository

} // namespace gi

#endif
