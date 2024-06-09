// AUTO-GENERATED

#ifndef _GI_GIO_APPINFO_HPP_
#define _GI_GIO_APPINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppLaunchContext;
class AsyncResult;
class Cancellable;
class File;
class Icon;

class AppInfo;

namespace base {


#define GI_GIO_APPINFO_BASE base::AppInfoBase
class AppInfoBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GAppInfo BaseObjectType;

AppInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_app_info_get_type(); } 

// GAppInfo* /*full*/ g_app_info_create_from_commandline (const char* commandline /*none*/, const char* application_name /*none,nullable*/, GAppInfoCreateFlags flags, GError ** error);
// ::GAppInfo* /*full*/ g_app_info_create_from_commandline (const char* commandline /*none*/, const char* application_name /*none,nullable*/, ::GAppInfoCreateFlags flags, GError ** error);
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const gi::cstring_v commandline, const gi::cstring_v application_name, Gio::AppInfoCreateFlags flags);
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const gi::cstring_v commandline, Gio::AppInfoCreateFlags flags);
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const gi::cstring_v commandline, const gi::cstring_v application_name, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const gi::cstring_v commandline, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept;

// GList* /*full*/ g_app_info_get_all ();
// ::GList* /*full*/ g_app_info_get_all ();
static GI_INLINE_DECL gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> get_all () noexcept;

// GList* /*full*/ g_app_info_get_all_for_type (const char* content_type /*none*/);
// ::GList* /*full*/ g_app_info_get_all_for_type (const char* content_type /*none*/);
static GI_INLINE_DECL gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> get_all_for_type (const gi::cstring_v content_type) noexcept;

// GAppInfo* /*full,nullable*/ g_app_info_get_default_for_type (const char* content_type /*none*/, gboolean must_support_uris);
// ::GAppInfo* /*full,nullable*/ g_app_info_get_default_for_type (const char* content_type /*none*/, gboolean must_support_uris);
static GI_INLINE_DECL Gio::AppInfo get_default_for_type (const gi::cstring_v content_type, gboolean must_support_uris) noexcept;

// void g_app_info_get_default_for_type_async (const char* content_type /*none*/, gboolean must_support_uris, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_get_default_for_type_async (const char* content_type /*none*/, gboolean must_support_uris, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void get_default_for_type_async (const gi::cstring_v content_type, gboolean must_support_uris, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void get_default_for_type_async (const gi::cstring_v content_type, gboolean must_support_uris, Gio::AsyncReadyCallback callback) noexcept;

// GAppInfo* /*full*/ g_app_info_get_default_for_type_finish (GAsyncResult* result /*none*/, GError ** error);
// ::GAppInfo* /*full*/ g_app_info_get_default_for_type_finish (::GAsyncResult* result /*none*/, GError ** error);
static GI_INLINE_DECL Gio::AppInfo get_default_for_type_finish (Gio::AsyncResult result);
static GI_INLINE_DECL Gio::AppInfo get_default_for_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GAppInfo* /*full,nullable*/ g_app_info_get_default_for_uri_scheme (const char* uri_scheme /*none*/);
// ::GAppInfo* /*full,nullable*/ g_app_info_get_default_for_uri_scheme (const char* uri_scheme /*none*/);
static GI_INLINE_DECL Gio::AppInfo get_default_for_uri_scheme (const gi::cstring_v uri_scheme) noexcept;

// void g_app_info_get_default_for_uri_scheme_async (const char* uri_scheme /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_get_default_for_uri_scheme_async (const char* uri_scheme /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void get_default_for_uri_scheme_async (const gi::cstring_v uri_scheme, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void get_default_for_uri_scheme_async (const gi::cstring_v uri_scheme, Gio::AsyncReadyCallback callback) noexcept;

// GAppInfo* /*full*/ g_app_info_get_default_for_uri_scheme_finish (GAsyncResult* result /*none*/, GError ** error);
// ::GAppInfo* /*full*/ g_app_info_get_default_for_uri_scheme_finish (::GAsyncResult* result /*none*/, GError ** error);
static GI_INLINE_DECL Gio::AppInfo get_default_for_uri_scheme_finish (Gio::AsyncResult result);
static GI_INLINE_DECL Gio::AppInfo get_default_for_uri_scheme_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* /*full*/ g_app_info_get_fallback_for_type (const gchar* content_type /*none*/);
// ::GList* /*full*/ g_app_info_get_fallback_for_type (const char* content_type /*none*/);
static GI_INLINE_DECL gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> get_fallback_for_type (const gi::cstring_v content_type) noexcept;

// GList* /*full*/ g_app_info_get_recommended_for_type (const gchar* content_type /*none*/);
// ::GList* /*full*/ g_app_info_get_recommended_for_type (const char* content_type /*none*/);
static GI_INLINE_DECL gi::Collection<GList, ::GAppInfo*, gi::transfer_full_t> get_recommended_for_type (const gi::cstring_v content_type) noexcept;

// gboolean g_app_info_launch_default_for_uri (const char* uri /*none*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean g_app_info_launch_default_for_uri (const char* uri /*none*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
static GI_INLINE_DECL bool launch_default_for_uri (const gi::cstring_v uri, Gio::AppLaunchContext context);
static GI_INLINE_DECL bool launch_default_for_uri (const gi::cstring_v uri);
static GI_INLINE_DECL bool launch_default_for_uri (const gi::cstring_v uri, Gio::AppLaunchContext context, GLib::Error * _error) noexcept;
static GI_INLINE_DECL bool launch_default_for_uri (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// void g_app_info_launch_default_for_uri_async (const char* uri /*none*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_launch_default_for_uri_async (const char* uri /*none*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void launch_default_for_uri_async (const gi::cstring_v uri, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void launch_default_for_uri_async (const gi::cstring_v uri, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_app_info_launch_default_for_uri_finish (GAsyncResult* result /*none*/, GError ** error);
// gboolean g_app_info_launch_default_for_uri_finish (::GAsyncResult* result /*none*/, GError ** error);
static GI_INLINE_DECL bool launch_default_for_uri_finish (Gio::AsyncResult result);
static GI_INLINE_DECL bool launch_default_for_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_app_info_reset_type_associations (const char* content_type /*none*/);
// void g_app_info_reset_type_associations (const char* content_type /*none*/);
static GI_INLINE_DECL void reset_type_associations (const gi::cstring_v content_type) noexcept;

// gboolean g_app_info_add_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_add_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool add_supports_type (const gi::cstring_v content_type);
GI_INLINE_DECL bool add_supports_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_can_delete (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_can_delete (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool can_delete () noexcept;

// gboolean g_app_info_can_remove_supports_type (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_can_remove_supports_type (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool can_remove_supports_type () noexcept;

// gboolean g_app_info_delete (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_delete (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool delete_ () noexcept;

// GAppInfo* /*full*/ g_app_info_dup (GAppInfo* appinfo /*none*/);
// ::GAppInfo* /*full*/ g_app_info_dup (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL Gio::AppInfo dup () noexcept;

// gboolean g_app_info_equal (GAppInfo* appinfo1 /*none*/, GAppInfo* appinfo2 /*none*/);
// gboolean g_app_info_equal (::GAppInfo* appinfo1 /*none*/, ::GAppInfo* appinfo2 /*none*/);
GI_INLINE_DECL bool equal (Gio::AppInfo appinfo2) noexcept;

// const char* /*none,nullable*/ g_app_info_get_commandline (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ g_app_info_get_commandline (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_commandline () noexcept;

// const char* /*none,nullable*/ g_app_info_get_description (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ g_app_info_get_description (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// const char* /*none*/ g_app_info_get_display_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ g_app_info_get_display_name (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_display_name () noexcept;

// const char* /*none*/ g_app_info_get_executable (GAppInfo* appinfo /*none*/);
// const char* /*none*/ g_app_info_get_executable (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_executable () noexcept;

// GIcon* /*none,nullable*/ g_app_info_get_icon (GAppInfo* appinfo /*none*/);
// ::GIcon* /*none,nullable*/ g_app_info_get_icon (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// const char* /*none,nullable*/ g_app_info_get_id (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ g_app_info_get_id (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_id () noexcept;

// const char* /*none*/ g_app_info_get_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ g_app_info_get_name (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const char** /*none*/ g_app_info_get_supported_types (GAppInfo* appinfo /*none*/);
// const char** /*none*/ g_app_info_get_supported_types (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_types () noexcept;

// gboolean g_app_info_launch (GAppInfo* appinfo /*none*/, GList* files /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean g_app_info_launch (::GAppInfo* appinfo /*none*/, ::GList* files /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context);
GI_INLINE_DECL bool launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files);
GI_INLINE_DECL bool launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch (gi::CollectionParameter<GList, ::GFile*, gi::transfer_none_t> files, GLib::Error * _error) noexcept;

// gboolean g_app_info_launch_uris (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean g_app_info_launch_uris (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context);
GI_INLINE_DECL bool launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris);
GI_INLINE_DECL bool launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch_uris (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::Error * _error) noexcept;

// void g_app_info_launch_uris_async (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_app_info_launch_uris_async (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void launch_uris_async (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void launch_uris_async (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_app_info_launch_uris_finish (GAppInfo* appinfo /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_app_info_launch_uris_finish (::GAppInfo* appinfo /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool launch_uris_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool launch_uris_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_app_info_remove_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_remove_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool remove_supports_type (const gi::cstring_v content_type);
GI_INLINE_DECL bool remove_supports_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_set_as_default_for_extension (GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
// gboolean g_app_info_set_as_default_for_extension (::GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
GI_INLINE_DECL bool set_as_default_for_extension (const gi::cstring_v extension);
GI_INLINE_DECL bool set_as_default_for_extension (const gi::cstring_v extension, GLib::Error * _error) noexcept;

// gboolean g_app_info_set_as_default_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_set_as_default_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool set_as_default_for_type (const gi::cstring_v content_type);
GI_INLINE_DECL bool set_as_default_for_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_set_as_last_used_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean g_app_info_set_as_last_used_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool set_as_last_used_for_type (const gi::cstring_v content_type);
GI_INLINE_DECL bool set_as_last_used_for_type (const gi::cstring_v content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_should_show (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_should_show (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool should_show () noexcept;

// gboolean g_app_info_supports_files (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_supports_files (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool supports_files () noexcept;

// gboolean g_app_info_supports_uris (GAppInfo* appinfo /*none*/);
// gboolean g_app_info_supports_uris (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool supports_uris () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra_def.hpp>)
#include <gio/appinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra.hpp>)
#include <gio/appinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AppInfo : public GI_GIO_APPINFO_BASE
{ typedef GI_GIO_APPINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAppInfo>
{ typedef Gio::AppInfo type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class AppInfoIfaceDef
{
typedef AppInfoIfaceDef self;
public:
typedef Gio::AppInfo instance_type;
typedef ::GAppInfoIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(add_supports_type) = self;
using GI_MEMBER_CHECK_CONFLICT(can_delete) = self;
using GI_MEMBER_CHECK_CONFLICT(can_remove_supports_type) = self;
using GI_MEMBER_CHECK_CONFLICT(do_delete) = self;
using GI_MEMBER_CHECK_CONFLICT(dup) = self;
using GI_MEMBER_CHECK_CONFLICT(equal) = self;
using GI_MEMBER_CHECK_CONFLICT(get_commandline) = self;
using GI_MEMBER_CHECK_CONFLICT(get_description) = self;
using GI_MEMBER_CHECK_CONFLICT(get_display_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_executable) = self;
using GI_MEMBER_CHECK_CONFLICT(get_icon) = self;
using GI_MEMBER_CHECK_CONFLICT(get_id) = self;
using GI_MEMBER_CHECK_CONFLICT(get_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_supported_types) = self;
using GI_MEMBER_CHECK_CONFLICT(launch) = self;
using GI_MEMBER_CHECK_CONFLICT(launch_uris) = self;
using GI_MEMBER_CHECK_CONFLICT(launch_uris_async) = self;
using GI_MEMBER_CHECK_CONFLICT(launch_uris_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(remove_supports_type) = self;
using GI_MEMBER_CHECK_CONFLICT(set_as_default_for_extension) = self;
using GI_MEMBER_CHECK_CONFLICT(set_as_default_for_type) = self;
using GI_MEMBER_CHECK_CONFLICT(set_as_last_used_for_type) = self;
using GI_MEMBER_CHECK_CONFLICT(should_show) = self;
using GI_MEMBER_CHECK_CONFLICT(supports_files) = self;
using GI_MEMBER_CHECK_CONFLICT(supports_uris) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AppInfoIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean AppInfo::add_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::add_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
virtual bool add_supports_type_ (const gi::cstring_v content_type, GLib::Error * _error) = 0;

// gboolean AppInfo::can_delete (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::can_delete (::GAppInfo* appinfo /*none*/);
virtual bool can_delete_ () noexcept = 0;

// gboolean AppInfo::can_remove_supports_type (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::can_remove_supports_type (::GAppInfo* appinfo /*none*/);
virtual bool can_remove_supports_type_ () noexcept = 0;

// gboolean AppInfo::do_delete (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::do_delete (::GAppInfo* appinfo /*none*/);
virtual bool do_delete_ () noexcept = 0;

// GAppInfo* /*full*/ AppInfo::dup (GAppInfo* appinfo /*none*/);
// ::GAppInfo* /*full*/ AppInfo::dup (::GAppInfo* appinfo /*none*/);
virtual Gio::AppInfo dup_ () noexcept = 0;

// gboolean AppInfo::equal (GAppInfo* appinfo1 /*none*/, GAppInfo* appinfo2 /*none*/);
// gboolean AppInfo::equal (::GAppInfo* appinfo1 /*none*/, ::GAppInfo* appinfo2 /*none*/);
virtual bool equal_ (Gio::AppInfo appinfo2) noexcept = 0;

// const char* /*none,nullable*/ AppInfo::get_commandline (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_commandline (::GAppInfo* appinfo /*none*/);
virtual gi::cstring_v get_commandline_ () noexcept = 0;

// const char* /*none,nullable*/ AppInfo::get_description (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_description (::GAppInfo* appinfo /*none*/);
virtual gi::cstring_v get_description_ () noexcept = 0;

// const char* /*none*/ AppInfo::get_display_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_display_name (::GAppInfo* appinfo /*none*/);
virtual gi::cstring_v get_display_name_ () noexcept = 0;

// const char* /*none*/ AppInfo::get_executable (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_executable (::GAppInfo* appinfo /*none*/);
virtual gi::cstring_v get_executable_ () noexcept = 0;

// GIcon* /*none,nullable*/ AppInfo::get_icon (GAppInfo* appinfo /*none*/);
// ::GIcon* /*none,nullable*/ AppInfo::get_icon (::GAppInfo* appinfo /*none*/);
virtual Gio::Icon get_icon_ () noexcept = 0;

// const char* /*none,nullable*/ AppInfo::get_id (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_id (::GAppInfo* appinfo /*none*/);
virtual gi::cstring_v get_id_ () noexcept = 0;

// const char* /*none*/ AppInfo::get_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_name (::GAppInfo* appinfo /*none*/);
virtual gi::cstring_v get_name_ () noexcept = 0;

// const char** /*none*/ AppInfo::get_supported_types (GAppInfo* appinfo /*none*/);
// const char** /*none*/ AppInfo::get_supported_types (::GAppInfo* appinfo /*none*/);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_types_ () noexcept = 0;

// gboolean AppInfo::launch (GAppInfo* appinfo /*none*/, GList* files /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean AppInfo::launch (::GAppInfo* appinfo /*none*/, ::GList* files /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
virtual bool launch_ (gi::Collection<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context, GLib::Error * _error) = 0;

// gboolean AppInfo::launch_uris (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean AppInfo::launch_uris (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
virtual bool launch_uris_ (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, GLib::Error * _error) = 0;

// void AppInfo::launch_uris_async (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void AppInfo::launch_uris_async (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void launch_uris_async_ (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean AppInfo::launch_uris_finish (GAppInfo* appinfo /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean AppInfo::launch_uris_finish (::GAppInfo* appinfo /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool launch_uris_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean AppInfo::remove_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::remove_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
virtual bool remove_supports_type_ (const gi::cstring_v content_type, GLib::Error * _error) = 0;

// gboolean AppInfo::set_as_default_for_extension (GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
// gboolean AppInfo::set_as_default_for_extension (::GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
virtual bool set_as_default_for_extension_ (const gi::cstring_v extension, GLib::Error * _error) = 0;

// gboolean AppInfo::set_as_default_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::set_as_default_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
virtual bool set_as_default_for_type_ (const gi::cstring_v content_type, GLib::Error * _error) = 0;

// gboolean AppInfo::set_as_last_used_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::set_as_last_used_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
virtual bool set_as_last_used_for_type_ (const gi::cstring_v content_type, GLib::Error * _error) = 0;

// gboolean AppInfo::should_show (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::should_show (::GAppInfo* appinfo /*none*/);
virtual bool should_show_ () noexcept = 0;

// gboolean AppInfo::supports_files (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::supports_files (::GAppInfo* appinfo /*none*/);
virtual bool supports_files_ () noexcept = 0;

// gboolean AppInfo::supports_uris (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::supports_uris (::GAppInfo* appinfo /*none*/);
virtual bool supports_uris_ () noexcept = 0;


};

using AppInfoImpl = detail::InterfaceImpl<AppInfoIfaceDef>;

class AppInfoIfaceClassImpl: public detail::InterfaceClassImpl<AppInfoImpl>
{
friend class internal::AppInfoIfaceDef;
typedef AppInfoIfaceClassImpl self;
typedef detail::InterfaceClassImpl<AppInfoImpl> super;

protected:
using super::super;

// gboolean AppInfo::add_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::add_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool add_supports_type_ (const gi::cstring_v content_type, GLib::Error * _error) override;

// gboolean AppInfo::can_delete (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::can_delete (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool can_delete_ () noexcept override;

// gboolean AppInfo::can_remove_supports_type (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::can_remove_supports_type (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool can_remove_supports_type_ () noexcept override;

// gboolean AppInfo::do_delete (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::do_delete (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool do_delete_ () noexcept override;

// GAppInfo* /*full*/ AppInfo::dup (GAppInfo* appinfo /*none*/);
// ::GAppInfo* /*full*/ AppInfo::dup (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL Gio::AppInfo dup_ () noexcept override;

// gboolean AppInfo::equal (GAppInfo* appinfo1 /*none*/, GAppInfo* appinfo2 /*none*/);
// gboolean AppInfo::equal (::GAppInfo* appinfo1 /*none*/, ::GAppInfo* appinfo2 /*none*/);
GI_INLINE_DECL bool equal_ (Gio::AppInfo appinfo2) noexcept override;

// const char* /*none,nullable*/ AppInfo::get_commandline (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_commandline (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_commandline_ () noexcept override;

// const char* /*none,nullable*/ AppInfo::get_description (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_description (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_description_ () noexcept override;

// const char* /*none*/ AppInfo::get_display_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_display_name (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_display_name_ () noexcept override;

// const char* /*none*/ AppInfo::get_executable (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_executable (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_executable_ () noexcept override;

// GIcon* /*none,nullable*/ AppInfo::get_icon (GAppInfo* appinfo /*none*/);
// ::GIcon* /*none,nullable*/ AppInfo::get_icon (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// const char* /*none,nullable*/ AppInfo::get_id (GAppInfo* appinfo /*none*/);
// const char* /*none,nullable*/ AppInfo::get_id (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_id_ () noexcept override;

// const char* /*none*/ AppInfo::get_name (GAppInfo* appinfo /*none*/);
// const char* /*none*/ AppInfo::get_name (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::cstring_v get_name_ () noexcept override;

// const char** /*none*/ AppInfo::get_supported_types (GAppInfo* appinfo /*none*/);
// const char** /*none*/ AppInfo::get_supported_types (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_types_ () noexcept override;

// gboolean AppInfo::launch (GAppInfo* appinfo /*none*/, GList* files /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean AppInfo::launch (::GAppInfo* appinfo /*none*/, ::GList* files /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool launch_ (gi::Collection<GList, ::GFile*, gi::transfer_none_t> files, Gio::AppLaunchContext context, GLib::Error * _error) override;

// gboolean AppInfo::launch_uris (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GError ** error);
// gboolean AppInfo::launch_uris (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool launch_uris_ (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, GLib::Error * _error) override;

// void AppInfo::launch_uris_async (GAppInfo* appinfo /*none*/, GList* uris /*none,nullable*/, GAppLaunchContext* context /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void AppInfo::launch_uris_async (::GAppInfo* appinfo /*none*/, ::GList* uris /*none,nullable*/, ::GAppLaunchContext* context /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void launch_uris_async_ (gi::Collection<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean AppInfo::launch_uris_finish (GAppInfo* appinfo /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean AppInfo::launch_uris_finish (::GAppInfo* appinfo /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool launch_uris_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean AppInfo::remove_supports_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::remove_supports_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool remove_supports_type_ (const gi::cstring_v content_type, GLib::Error * _error) override;

// gboolean AppInfo::set_as_default_for_extension (GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
// gboolean AppInfo::set_as_default_for_extension (::GAppInfo* appinfo /*none*/, const char* extension /*none*/, GError ** error);
GI_INLINE_DECL bool set_as_default_for_extension_ (const gi::cstring_v extension, GLib::Error * _error) override;

// gboolean AppInfo::set_as_default_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::set_as_default_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool set_as_default_for_type_ (const gi::cstring_v content_type, GLib::Error * _error) override;

// gboolean AppInfo::set_as_last_used_for_type (GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
// gboolean AppInfo::set_as_last_used_for_type (::GAppInfo* appinfo /*none*/, const char* content_type /*none*/, GError ** error);
GI_INLINE_DECL bool set_as_last_used_for_type_ (const gi::cstring_v content_type, GLib::Error * _error) override;

// gboolean AppInfo::should_show (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::should_show (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool should_show_ () noexcept override;

// gboolean AppInfo::supports_files (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::supports_files (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool supports_files_ () noexcept override;

// gboolean AppInfo::supports_uris (GAppInfo* appinfo /*none*/);
// gboolean AppInfo::supports_uris (::GAppInfo* appinfo /*none*/);
GI_INLINE_DECL bool supports_uris_ () noexcept override;


};


struct AppInfoIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, add_supports_type)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, can_delete)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, can_remove_supports_type)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, do_delete)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, dup)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, equal)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_commandline)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_description)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_display_name)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_executable)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_icon)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_id)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_name)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, get_supported_types)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, launch)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, launch_uris)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, launch_uris_async)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, launch_uris_finish)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, remove_supports_type)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, set_as_default_for_extension)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, set_as_default_for_type)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, set_as_last_used_for_type)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, should_show)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, supports_files)
  GI_MEMBER_DEFINE(AppInfoIfaceClassImpl, supports_uris)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_supports_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_delete),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, can_remove_supports_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, do_delete),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, dup),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, equal),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_commandline),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_description),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_display_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_executable),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_icon),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_supported_types),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launch),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launch_uris),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launch_uris_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, launch_uris_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remove_supports_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_as_default_for_extension),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_as_default_for_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_as_last_used_for_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, should_show),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, supports_files),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, supports_uris)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
