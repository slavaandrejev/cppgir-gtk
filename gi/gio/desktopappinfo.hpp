// AUTO-GENERATED

#ifndef _GI_GIO_DESKTOPAPPINFO_HPP_
#define _GI_GIO_DESKTOPAPPINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppInfo;
class AppLaunchContext;

class DesktopAppInfo;

namespace base {


#define GI_GIO_DESKTOPAPPINFO_BASE base::DesktopAppInfoBase
class DesktopAppInfoBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDesktopAppInfo BaseObjectType;

DesktopAppInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_desktop_app_info_get_type(); } 

GI_INLINE_DECL Gio::AppInfo interface_ (gi::interface_tag<Gio::AppInfo>);

GI_INLINE_DECL operator Gio::AppInfo ();

// GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new (const char* desktop_id /*none*/);
// ::GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new (const char* desktop_id /*none*/);
static GI_INLINE_DECL Gio::DesktopAppInfo new_ (const gi::cstring_v desktop_id) noexcept;

// GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_filename (const char* filename /*none*/);
// ::GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_filename (const char* filename /*none*/);
static GI_INLINE_DECL Gio::DesktopAppInfo new_from_filename (const gi::cstring_v filename) noexcept;

// GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_keyfile (GKeyFile* key_file /*none*/);
// ::GDesktopAppInfo* /*full,nullable*/ g_desktop_app_info_new_from_keyfile (::GKeyFile* key_file /*none*/);
static GI_INLINE_DECL Gio::DesktopAppInfo new_from_keyfile (GLib::KeyFile_Ref key_file) noexcept;

// GList* /*full*/ g_desktop_app_info_get_implementations (const gchar* interface /*none*/);
// ::GList* /*full*/ g_desktop_app_info_get_implementations (const char* interface /*none*/);
static GI_INLINE_DECL gi::Collection<GList, ::GDesktopAppInfo*, gi::transfer_full_t> get_implementations (const gi::cstring_v interface) noexcept;

// gchar*** /*full*/ g_desktop_app_info_search (const gchar* search_string /*none*/);
// * /*full*/ g_desktop_app_info_search (const char* search_string /*none*/);
// SKIP; inconsistent list element info

// void g_desktop_app_info_set_desktop_env (const char* desktop_env /*none*/);
// void g_desktop_app_info_set_desktop_env (const char* desktop_env /*none*/);
// IGNORE; deprecated

// gchar* /*full*/ g_desktop_app_info_get_action_name (GDesktopAppInfo* info /*none*/, const gchar* action_name /*none*/);
// char* /*full*/ g_desktop_app_info_get_action_name (::GDesktopAppInfo* info /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL gi::cstring get_action_name (const gi::cstring_v action_name) noexcept;

// gboolean g_desktop_app_info_get_boolean (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// gboolean g_desktop_app_info_get_boolean (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool get_boolean (const gi::cstring_v key) noexcept;

// const char* /*none,nullable*/ g_desktop_app_info_get_categories (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_categories (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_categories () noexcept;

// const char* /*none,nullable*/ g_desktop_app_info_get_filename (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_filename (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_filename () noexcept;

// const char* /*none,nullable*/ g_desktop_app_info_get_generic_name (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_generic_name (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_generic_name () noexcept;

// gboolean g_desktop_app_info_get_is_hidden (GDesktopAppInfo* info /*none*/);
// gboolean g_desktop_app_info_get_is_hidden (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL bool get_is_hidden () noexcept;

// const char* const* /*none*/ g_desktop_app_info_get_keywords (GDesktopAppInfo* info /*none*/);
// const char** /*none*/ g_desktop_app_info_get_keywords (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_keywords () noexcept;

// char* /*full,nullable*/ g_desktop_app_info_get_locale_string (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// char* /*full,nullable*/ g_desktop_app_info_get_locale_string (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::cstring get_locale_string (const gi::cstring_v key) noexcept;

// gboolean g_desktop_app_info_get_nodisplay (GDesktopAppInfo* info /*none*/);
// gboolean g_desktop_app_info_get_nodisplay (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL bool get_nodisplay () noexcept;

// gboolean g_desktop_app_info_get_show_in (GDesktopAppInfo* info /*none*/, const gchar* desktop_env /*none,nullable*/);
// gboolean g_desktop_app_info_get_show_in (::GDesktopAppInfo* info /*none*/, const char* desktop_env /*none,nullable*/);
GI_INLINE_DECL bool get_show_in (const gi::cstring_v desktop_env) noexcept;
GI_INLINE_DECL bool get_show_in () noexcept;

// const char* /*none,nullable*/ g_desktop_app_info_get_startup_wm_class (GDesktopAppInfo* info /*none*/);
// const char* /*none,nullable*/ g_desktop_app_info_get_startup_wm_class (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL gi::cstring_v get_startup_wm_class () noexcept;

// char* /*full,nullable*/ g_desktop_app_info_get_string (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// char* /*full,nullable*/ g_desktop_app_info_get_string (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
GI_INLINE_DECL gi::cstring get_string (const gi::cstring_v key) noexcept;

// gchar** /*full*/ g_desktop_app_info_get_string_list (GDesktopAppInfo* info /*none*/, const char* key /*none*/, gsize* length);
// char** /*full*/ g_desktop_app_info_get_string_list (::GDesktopAppInfo* info /*none*/, const char* key /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_string_list (const gi::cstring_v key, gsize * length) noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>, gsize> get_string_list (const gi::cstring_v key) noexcept;

// gboolean g_desktop_app_info_has_key (GDesktopAppInfo* info /*none*/, const char* key /*none*/);
// gboolean g_desktop_app_info_has_key (::GDesktopAppInfo* info /*none*/, const char* key /*none*/);
GI_INLINE_DECL bool has_key (const gi::cstring_v key) noexcept;

// void g_desktop_app_info_launch_action (GDesktopAppInfo* info /*none*/, const gchar* action_name /*none*/, GAppLaunchContext* launch_context /*none,nullable*/);
// void g_desktop_app_info_launch_action (::GDesktopAppInfo* info /*none*/, const char* action_name /*none*/, ::GAppLaunchContext* launch_context /*none,nullable*/);
GI_INLINE_DECL void launch_action (const gi::cstring_v action_name, Gio::AppLaunchContext launch_context) noexcept;
GI_INLINE_DECL void launch_action (const gi::cstring_v action_name) noexcept;

// gboolean g_desktop_app_info_launch_uris_as_manager (GDesktopAppInfo* appinfo /*none*/, GList* uris /*none*/, GAppLaunchContext* launch_context /*none,nullable*/, GSpawnFlags spawn_flags, GSpawnChildSetupFunc user_setup /*none,nullable*/, gpointer user_setup_data, GDesktopAppLaunchCallback pid_callback /*none,nullable*/, gpointer pid_callback_data, GError ** error);
// gboolean g_desktop_app_info_launch_uris_as_manager (::GDesktopAppInfo* appinfo /*none*/, ::GList* uris /*none*/, ::GAppLaunchContext* launch_context /*none,nullable*/, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup /*none,nullable*/, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback /*none,nullable*/, void* pid_callback_data, GError ** error);
GI_INLINE_DECL bool launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback);
GI_INLINE_DECL bool launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback);
GI_INLINE_DECL bool launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch_uris_as_manager (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, GLib::Error * _error) noexcept;

// gboolean g_desktop_app_info_launch_uris_as_manager_with_fds (GDesktopAppInfo* appinfo /*none*/, GList* uris /*none*/, GAppLaunchContext* launch_context /*none,nullable*/, GSpawnFlags spawn_flags, GSpawnChildSetupFunc user_setup /*none,nullable*/, gpointer user_setup_data, GDesktopAppLaunchCallback pid_callback /*none,nullable*/, gpointer pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_desktop_app_info_launch_uris_as_manager_with_fds (::GDesktopAppInfo* appinfo /*none*/, ::GList* uris /*none*/, ::GAppLaunchContext* launch_context /*none,nullable*/, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup /*none,nullable*/, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback /*none,nullable*/, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (gi::CollectionParameter<GList, char*, gi::transfer_none_t> uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;

// const gchar* const* /*none*/ g_desktop_app_info_list_actions (GDesktopAppInfo* info /*none*/);
// const char** /*none*/ g_desktop_app_info_list_actions (::GDesktopAppInfo* info /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> list_actions () noexcept;

gi::property_proxy<gi::cstring, base::DesktopAppInfoBase> property_filename()
{ return gi::property_proxy<gi::cstring, base::DesktopAppInfoBase> (*this, "filename"); }
const gi::property_proxy<gi::cstring, base::DesktopAppInfoBase> property_filename() const
{ return gi::property_proxy<gi::cstring, base::DesktopAppInfoBase> (*this, "filename"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/desktopappinfo_extra_def.hpp>)
#include <gio/desktopappinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/desktopappinfo_extra.hpp>)
#include <gio/desktopappinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DesktopAppInfo : public GI_GIO_DESKTOPAPPINFO_BASE
{ typedef GI_GIO_DESKTOPAPPINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDesktopAppInfo>
{ typedef Gio::DesktopAppInfo type; }; 

} // namespace repository

} // namespace gi

#include "appinfo.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DesktopAppInfoClassDef
{
typedef DesktopAppInfoClassDef self;
public:
typedef Gio::DesktopAppInfo instance_type;
typedef ::GDesktopAppInfoClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DesktopAppInfoClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DesktopAppInfoClass: public detail::ClassTemplate<Gio::impl::internal::DesktopAppInfoClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AppInfoIfaceClassImpl>
{
friend class internal::DesktopAppInfoClassDef;
typedef DesktopAppInfoClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DesktopAppInfoClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AppInfoIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::AppInfoIfaceClassImpl GAppInfoIface_type;



};


struct DesktopAppInfoClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DesktopAppInfoImpl = detail::ObjectImpl<DesktopAppInfo, internal::DesktopAppInfoClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
