// AUTO-GENERATED

#ifndef _GI_GIO_NOTIFICATION_HPP_
#define _GI_GIO_NOTIFICATION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;

class Notification;

namespace base {


#define GI_GIO_NOTIFICATION_BASE base::NotificationBase
class NotificationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GNotification BaseObjectType;

NotificationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_notification_get_type(); } 

// GNotification* /*full*/ g_notification_new (const gchar* title /*none*/);
// ::GNotification* /*full*/ g_notification_new (const char* title /*none*/);
static GI_INLINE_DECL Gio::Notification new_ (const gi::cstring_v title) noexcept;

// void g_notification_add_button (GNotification* notification /*none*/, const gchar* label /*none*/, const gchar* detailed_action /*none*/);
// void g_notification_add_button (::GNotification* notification /*none*/, const char* label /*none*/, const char* detailed_action /*none*/);
GI_INLINE_DECL void add_button (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept;

// void g_notification_add_button_with_target (GNotification* notification /*none*/, const gchar* label /*none*/, const gchar* action /*none*/, const gchar* target_format /*none,nullable*/,  ..._ /*none*/);
// void g_notification_add_button_with_target (::GNotification* notification /*none*/, const char* label /*none*/, const char* action /*none*/, const char* target_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by add_button_with_target_value, varargs not supported

// void g_notification_add_button_with_target_value (GNotification* notification /*none*/, const gchar* label /*none*/, const gchar* action /*none*/, GVariant* target /*none,nullable*/);
// void g_notification_add_button_with_target_value (::GNotification* notification /*none*/, const char* label /*none*/, const char* action /*none*/, ::GVariant* target /*none,nullable*/);
GI_INLINE_DECL void add_button_with_target (const gi::cstring_v label, const gi::cstring_v action, GLib::Variant target) noexcept;
GI_INLINE_DECL void add_button_with_target (const gi::cstring_v label, const gi::cstring_v action) noexcept;

// void g_notification_set_body (GNotification* notification /*none*/, const gchar* body /*none,nullable*/);
// void g_notification_set_body (::GNotification* notification /*none*/, const char* body /*none,nullable*/);
GI_INLINE_DECL void set_body (const gi::cstring_v body) noexcept;
GI_INLINE_DECL void set_body () noexcept;

// void g_notification_set_category (GNotification* notification /*none*/, const gchar* category /*none,nullable*/);
// void g_notification_set_category (::GNotification* notification /*none*/, const char* category /*none,nullable*/);
GI_INLINE_DECL void set_category (const gi::cstring_v category) noexcept;
GI_INLINE_DECL void set_category () noexcept;

// void g_notification_set_default_action (GNotification* notification /*none*/, const gchar* detailed_action /*none*/);
// void g_notification_set_default_action (::GNotification* notification /*none*/, const char* detailed_action /*none*/);
GI_INLINE_DECL void set_default_action (const gi::cstring_v detailed_action) noexcept;

// void g_notification_set_default_action_and_target (GNotification* notification /*none*/, const gchar* action /*none*/, const gchar* target_format /*none,nullable*/,  ..._ /*none*/);
// void g_notification_set_default_action_and_target (::GNotification* notification /*none*/, const char* action /*none*/, const char* target_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_default_action_and_target_value, varargs not supported

// void g_notification_set_default_action_and_target_value (GNotification* notification /*none*/, const gchar* action /*none*/, GVariant* target /*none,nullable*/);
// void g_notification_set_default_action_and_target_value (::GNotification* notification /*none*/, const char* action /*none*/, ::GVariant* target /*none,nullable*/);
GI_INLINE_DECL void set_default_action_and_target (const gi::cstring_v action, GLib::Variant target) noexcept;
GI_INLINE_DECL void set_default_action_and_target (const gi::cstring_v action) noexcept;

// void g_notification_set_icon (GNotification* notification /*none*/, GIcon* icon /*none*/);
// void g_notification_set_icon (::GNotification* notification /*none*/, ::GIcon* icon /*none*/);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;

// void g_notification_set_priority (GNotification* notification /*none*/, GNotificationPriority priority);
// void g_notification_set_priority (::GNotification* notification /*none*/, ::GNotificationPriority priority);
GI_INLINE_DECL void set_priority (Gio::NotificationPriority priority) noexcept;

// void g_notification_set_title (GNotification* notification /*none*/, const gchar* title /*none*/);
// void g_notification_set_title (::GNotification* notification /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void g_notification_set_urgent (GNotification* notification /*none*/, gboolean urgent);
// void g_notification_set_urgent (::GNotification* notification /*none*/, gboolean urgent);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/notification_extra_def.hpp>)
#include <gio/notification_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/notification_extra.hpp>)
#include <gio/notification_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Notification : public GI_GIO_NOTIFICATION_BASE
{ typedef GI_GIO_NOTIFICATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNotification>
{ typedef Gio::Notification type; }; 

} // namespace repository

} // namespace gi

#endif
