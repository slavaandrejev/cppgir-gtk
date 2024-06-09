// AUTO-GENERATED

#ifndef _GI_GTK_RECENTINFO_HPP_
#define _GI_GTK_RECENTINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class RecentInfo_Ref;

class RecentInfo;

namespace base {


#define GI_GTK_RECENTINFO_BASE base::RecentInfoBase
class RecentInfoBase : public gi::detail::GBoxedWrapperBase<RecentInfoBase, ::GtkRecentInfo>
{
typedef gi::detail::GBoxedWrapperBase<RecentInfoBase, ::GtkRecentInfo> super_type;
public:

RecentInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_recent_info_get_type(); } 

// GAppInfo* /*full,nullable*/ gtk_recent_info_create_app_info (GtkRecentInfo* info /*none*/, const char* app_name /*none,nullable*/, GError ** error);
// ::GAppInfo* /*full,nullable*/ gtk_recent_info_create_app_info (::GtkRecentInfo* info /*none*/, const char* app_name /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::AppInfo create_app_info (const gi::cstring_v app_name);
GI_INLINE_DECL Gio::AppInfo create_app_info ();
GI_INLINE_DECL Gio::AppInfo create_app_info (const gi::cstring_v app_name, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::AppInfo create_app_info (GLib::Error * _error) noexcept;

// gboolean gtk_recent_info_exists (GtkRecentInfo* info /*none*/);
// gboolean gtk_recent_info_exists (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL bool exists () noexcept;

// GDateTime* /*none*/ gtk_recent_info_get_added (GtkRecentInfo* info /*none*/);
// ::GDateTime* /*none*/ gtk_recent_info_get_added (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime_Ref get_added () noexcept;

// int gtk_recent_info_get_age (GtkRecentInfo* info /*none*/);
// gint gtk_recent_info_get_age (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gint get_age () noexcept;

// gboolean gtk_recent_info_get_application_info (GtkRecentInfo* info /*none*/, const char* app_name /*none*/, const char** app_exec /*none,out*/, guint* count, GDateTime** stamp /*none,out*/);
// gboolean gtk_recent_info_get_application_info (::GtkRecentInfo* info /*none*/, const char* app_name /*none*/, const char** app_exec /*none,out*/, guint* count, ::GDateTime** stamp /*none,out*/);
GI_INLINE_DECL bool get_application_info (const gi::cstring_v app_name, gi::cstring_v & app_exec, guint & count, GLib::DateTime_Ref & stamp) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring_v, guint, GLib::DateTime_Ref> get_application_info (const gi::cstring_v app_name) noexcept;

// char** /*full*/ gtk_recent_info_get_applications (GtkRecentInfo* info /*none*/, gsize* length);
// char** /*full*/ gtk_recent_info_get_applications (::GtkRecentInfo* info /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_applications (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_applications () noexcept;

// const char* /*none*/ gtk_recent_info_get_description (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_description (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// const char* /*none*/ gtk_recent_info_get_display_name (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_display_name (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_display_name () noexcept;

// GIcon* /*full,nullable*/ gtk_recent_info_get_gicon (GtkRecentInfo* info /*none*/);
// ::GIcon* /*full,nullable*/ gtk_recent_info_get_gicon (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL Gio::Icon get_gicon () noexcept;

// char** /*full*/ gtk_recent_info_get_groups (GtkRecentInfo* info /*none*/, gsize* length);
// char** /*full*/ gtk_recent_info_get_groups (::GtkRecentInfo* info /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_groups (gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_groups () noexcept;

// const char* /*none*/ gtk_recent_info_get_mime_type (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_mime_type (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_mime_type () noexcept;

// GDateTime* /*none*/ gtk_recent_info_get_modified (GtkRecentInfo* info /*none*/);
// ::GDateTime* /*none*/ gtk_recent_info_get_modified (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime_Ref get_modified () noexcept;

// gboolean gtk_recent_info_get_private_hint (GtkRecentInfo* info /*none*/);
// gboolean gtk_recent_info_get_private_hint (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL bool get_private_hint () noexcept;

// char* /*full*/ gtk_recent_info_get_short_name (GtkRecentInfo* info /*none*/);
// char* /*full*/ gtk_recent_info_get_short_name (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring get_short_name () noexcept;

// const char* /*none*/ gtk_recent_info_get_uri (GtkRecentInfo* info /*none*/);
// const char* /*none*/ gtk_recent_info_get_uri (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_uri () noexcept;

// char* /*full,nullable*/ gtk_recent_info_get_uri_display (GtkRecentInfo* info /*none*/);
// char* /*full,nullable*/ gtk_recent_info_get_uri_display (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring get_uri_display () noexcept;

// GDateTime* /*none*/ gtk_recent_info_get_visited (GtkRecentInfo* info /*none*/);
// ::GDateTime* /*none*/ gtk_recent_info_get_visited (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL GLib::DateTime_Ref get_visited () noexcept;

// gboolean gtk_recent_info_has_application (GtkRecentInfo* info /*none*/, const char* app_name /*none*/);
// gboolean gtk_recent_info_has_application (::GtkRecentInfo* info /*none*/, const char* app_name /*none*/);
GI_INLINE_DECL bool has_application (const gi::cstring_v app_name) noexcept;

// gboolean gtk_recent_info_has_group (GtkRecentInfo* info /*none*/, const char* group_name /*none*/);
// gboolean gtk_recent_info_has_group (::GtkRecentInfo* info /*none*/, const char* group_name /*none*/);
GI_INLINE_DECL bool has_group (const gi::cstring_v group_name) noexcept;

// gboolean gtk_recent_info_is_local (GtkRecentInfo* info /*none*/);
// gboolean gtk_recent_info_is_local (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL bool is_local () noexcept;

// char* /*full*/ gtk_recent_info_last_application (GtkRecentInfo* info /*none*/);
// char* /*full*/ gtk_recent_info_last_application (::GtkRecentInfo* info /*none*/);
GI_INLINE_DECL gi::cstring last_application () noexcept;

// gboolean gtk_recent_info_match (GtkRecentInfo* info_a /*none*/, GtkRecentInfo* info_b /*none*/);
// gboolean gtk_recent_info_match (::GtkRecentInfo* info_a /*none*/, ::GtkRecentInfo* info_b /*none*/);
GI_INLINE_DECL bool match (Gtk::RecentInfo_Ref info_b) noexcept;

// GtkRecentInfo* /*full*/ gtk_recent_info_ref (GtkRecentInfo* info /*none*/);
// ::GtkRecentInfo* /*full*/ gtk_recent_info_ref (::GtkRecentInfo* info /*none*/);
// IGNORE; marked ignore

// void gtk_recent_info_unref (GtkRecentInfo* info /*none*/);
// void gtk_recent_info_unref (::GtkRecentInfo* info /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra_def.hpp>)
#include <gtk/recentinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra.hpp>)
#include <gtk/recentinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentInfo_Ref;

class RecentInfo : public gi::detail::GBoxedWrapper<RecentInfo, ::GtkRecentInfo, GI_GTK_RECENTINFO_BASE, RecentInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<RecentInfo, ::GtkRecentInfo, GI_GTK_RECENTINFO_BASE, RecentInfo_Ref> super_type; using super_type::super_type; };


class RecentInfo_Ref : public gi::detail::GBoxedRefWrapper<RecentInfo, ::GtkRecentInfo, GI_GTK_RECENTINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<RecentInfo, ::GtkRecentInfo, GI_GTK_RECENTINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentInfo>
{ typedef Gtk::RecentInfo type; }; 

} // namespace repository

} // namespace gi

#endif
