// AUTO-GENERATED

#ifndef _GI_GIO_NOTIFICATION_IMPL_HPP_
#define _GI_GIO_NOTIFICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GNotification* /*full*/ g_notification_new (const gchar* title /*none*/);
// ::GNotification* /*full*/ g_notification_new (const char* title /*none*/);
Gio::Notification base::NotificationBase::new_ (const gi::cstring_v title) noexcept
{
  typedef ::GNotification* (*call_wrap_t) (const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) g_notification_new;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_notification_add_button (GNotification* notification /*none*/, const gchar* label /*none*/, const gchar* detailed_action /*none*/);
// void g_notification_add_button (::GNotification* notification /*none*/, const char* label /*none*/, const char* detailed_action /*none*/);
void base::NotificationBase::add_button (const gi::cstring_v label, const gi::cstring_v detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* label, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_add_button;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (label_to_c), (const char*) (detailed_action_to_c));
}

// void g_notification_add_button_with_target (GNotification* notification /*none*/, const gchar* label /*none*/, const gchar* action /*none*/, const gchar* target_format /*none,nullable*/,  ..._ /*none*/);
// void g_notification_add_button_with_target (::GNotification* notification /*none*/, const char* label /*none*/, const char* action /*none*/, const char* target_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by add_button_with_target_value, varargs not supported

// void g_notification_add_button_with_target_value (GNotification* notification /*none*/, const gchar* label /*none*/, const gchar* action /*none*/, GVariant* target /*none,nullable*/);
// void g_notification_add_button_with_target_value (::GNotification* notification /*none*/, const char* label /*none*/, const char* action /*none*/, ::GVariant* target /*none,nullable*/);
void base::NotificationBase::add_button_with_target (const gi::cstring_v label, const gi::cstring_v action, GLib::Variant target) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* label, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_add_button_with_target_value;
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (label_to_c), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}
void base::NotificationBase::add_button_with_target (const gi::cstring_v label, const gi::cstring_v action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* label, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_add_button_with_target_value;
  auto target_to_c = nullptr;
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (label_to_c), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}

// void g_notification_set_body (GNotification* notification /*none*/, const gchar* body /*none,nullable*/);
// void g_notification_set_body (::GNotification* notification /*none*/, const char* body /*none,nullable*/);
void base::NotificationBase::set_body (const gi::cstring_v body) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_body;
  auto body_to_c = gi::unwrap (body, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (body_to_c));
}
void base::NotificationBase::set_body () noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* body);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_body;
  auto body_to_c = nullptr;
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (body_to_c));
}

// void g_notification_set_category (GNotification* notification /*none*/, const gchar* category /*none,nullable*/);
// void g_notification_set_category (::GNotification* notification /*none*/, const char* category /*none,nullable*/);
void base::NotificationBase::set_category (const gi::cstring_v category) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* category);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_category;
  auto category_to_c = gi::unwrap (category, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (category_to_c));
}
void base::NotificationBase::set_category () noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* category);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_category;
  auto category_to_c = nullptr;
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (category_to_c));
}

// void g_notification_set_default_action (GNotification* notification /*none*/, const gchar* detailed_action /*none*/);
// void g_notification_set_default_action (::GNotification* notification /*none*/, const char* detailed_action /*none*/);
void base::NotificationBase::set_default_action (const gi::cstring_v detailed_action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* detailed_action);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_default_action;
  auto detailed_action_to_c = gi::unwrap (detailed_action, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (detailed_action_to_c));
}

// void g_notification_set_default_action_and_target (GNotification* notification /*none*/, const gchar* action /*none*/, const gchar* target_format /*none,nullable*/,  ..._ /*none*/);
// void g_notification_set_default_action_and_target (::GNotification* notification /*none*/, const char* action /*none*/, const char* target_format /*none,nullable*/,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by set_default_action_and_target_value, varargs not supported

// void g_notification_set_default_action_and_target_value (GNotification* notification /*none*/, const gchar* action /*none*/, GVariant* target /*none,nullable*/);
// void g_notification_set_default_action_and_target_value (::GNotification* notification /*none*/, const char* action /*none*/, ::GVariant* target /*none,nullable*/);
void base::NotificationBase::set_default_action_and_target (const gi::cstring_v action, GLib::Variant target) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_default_action_and_target_value;
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}
void base::NotificationBase::set_default_action_and_target (const gi::cstring_v action) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* action, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_default_action_and_target_value;
  auto target_to_c = nullptr;
  auto action_to_c = gi::unwrap (action, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (action_to_c), (::GVariant*) (target_to_c));
}

// void g_notification_set_icon (GNotification* notification /*none*/, GIcon* icon /*none*/);
// void g_notification_set_icon (::GNotification* notification /*none*/, ::GIcon* icon /*none*/);
void base::NotificationBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void g_notification_set_priority (GNotification* notification /*none*/, GNotificationPriority priority);
// void g_notification_set_priority (::GNotification* notification /*none*/, ::GNotificationPriority priority);
void base::NotificationBase::set_priority (Gio::NotificationPriority priority) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, ::GNotificationPriority priority);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_priority;
  auto priority_to_c = gi::unwrap (priority);
  call_wrap_v ((::GNotification*) (gobj_()), (::GNotificationPriority) (priority_to_c));
}

// void g_notification_set_title (GNotification* notification /*none*/, const gchar* title /*none*/);
// void g_notification_set_title (::GNotification* notification /*none*/, const char* title /*none*/);
void base::NotificationBase::set_title (const gi::cstring_v title) noexcept
{
  typedef void (*call_wrap_t) (::GNotification* notification, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_notification_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none);
  call_wrap_v ((::GNotification*) (gobj_()), (const char*) (title_to_c));
}

// void g_notification_set_urgent (GNotification* notification /*none*/, gboolean urgent);
// void g_notification_set_urgent (::GNotification* notification /*none*/, gboolean urgent);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/notification_extra_def_impl.hpp>)
#include <gio/notification_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/notification_extra_impl.hpp>)
#include <gio/notification_extra_impl.hpp>
#endif
#endif

#endif
