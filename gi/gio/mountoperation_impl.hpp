// AUTO-GENERATED

#ifndef _GI_GIO_MOUNTOPERATION_IMPL_HPP_
#define _GI_GIO_MOUNTOPERATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GMountOperation* /*full*/ g_mount_operation_new ();
// ::GMountOperation* /*full*/ g_mount_operation_new ();
Gio::MountOperation base::MountOperationBase::new_ () noexcept
{
  typedef ::GMountOperation* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_mount_operation_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_mount_operation_get_anonymous (GMountOperation* op /*none*/);
// gboolean g_mount_operation_get_anonymous (::GMountOperation* op /*none*/);
bool base::MountOperationBase::get_anonymous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_anonymous;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return _temp_ret;
}

// int g_mount_operation_get_choice (GMountOperation* op /*none*/);
// gint g_mount_operation_get_choice (::GMountOperation* op /*none*/);
gint base::MountOperationBase::get_choice () noexcept
{
  typedef gint (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_choice;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_mount_operation_get_domain (GMountOperation* op /*none*/);
// const char* /*none,nullable*/ g_mount_operation_get_domain (::GMountOperation* op /*none*/);
gi::cstring_v base::MountOperationBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_domain;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_mount_operation_get_is_tcrypt_hidden_volume (GMountOperation* op /*none*/);
// gboolean g_mount_operation_get_is_tcrypt_hidden_volume (::GMountOperation* op /*none*/);
bool base::MountOperationBase::get_is_tcrypt_hidden_volume () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_is_tcrypt_hidden_volume;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return _temp_ret;
}

// gboolean g_mount_operation_get_is_tcrypt_system_volume (GMountOperation* op /*none*/);
// gboolean g_mount_operation_get_is_tcrypt_system_volume (::GMountOperation* op /*none*/);
bool base::MountOperationBase::get_is_tcrypt_system_volume () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_is_tcrypt_system_volume;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_mount_operation_get_password (GMountOperation* op /*none*/);
// const char* /*none,nullable*/ g_mount_operation_get_password (::GMountOperation* op /*none*/);
gi::cstring_v base::MountOperationBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_password;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GPasswordSave g_mount_operation_get_password_save (GMountOperation* op /*none*/);
// ::GPasswordSave g_mount_operation_get_password_save (::GMountOperation* op /*none*/);
Gio::PasswordSave base::MountOperationBase::get_password_save () noexcept
{
  typedef ::GPasswordSave (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_password_save;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_mount_operation_get_pim (GMountOperation* op /*none*/);
// guint g_mount_operation_get_pim (::GMountOperation* op /*none*/);
guint base::MountOperationBase::get_pim () noexcept
{
  typedef guint (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_pim;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return _temp_ret;
}

// const char* /*none,nullable*/ g_mount_operation_get_username (GMountOperation* op /*none*/);
// const char* /*none,nullable*/ g_mount_operation_get_username (::GMountOperation* op /*none*/);
gi::cstring_v base::MountOperationBase::get_username () noexcept
{
  typedef const char* (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_get_username;
  auto _temp_ret = call_wrap_v ((::GMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_mount_operation_reply (GMountOperation* op /*none*/, GMountOperationResult result);
// void g_mount_operation_reply (::GMountOperation* op /*none*/, ::GMountOperationResult result);
void base::MountOperationBase::reply (Gio::MountOperationResult result) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, ::GMountOperationResult result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_reply;
  auto result_to_c = gi::unwrap (result);
  call_wrap_v ((::GMountOperation*) (gobj_()), (::GMountOperationResult) (result_to_c));
}

// void g_mount_operation_set_anonymous (GMountOperation* op /*none*/, gboolean anonymous);
// void g_mount_operation_set_anonymous (::GMountOperation* op /*none*/, gboolean anonymous);
void base::MountOperationBase::set_anonymous (gboolean anonymous) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, gboolean anonymous);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_anonymous;
  auto anonymous_to_c = anonymous;
  call_wrap_v ((::GMountOperation*) (gobj_()), (gboolean) (anonymous_to_c));
}

// void g_mount_operation_set_choice (GMountOperation* op /*none*/, int choice);
// void g_mount_operation_set_choice (::GMountOperation* op /*none*/, gint choice);
void base::MountOperationBase::set_choice (gint choice) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, gint choice);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_choice;
  auto choice_to_c = choice;
  call_wrap_v ((::GMountOperation*) (gobj_()), (gint) (choice_to_c));
}

// void g_mount_operation_set_domain (GMountOperation* op /*none*/, const char* domain /*none,nullable*/);
// void g_mount_operation_set_domain (::GMountOperation* op /*none*/, const char* domain /*none,nullable*/);
void base::MountOperationBase::set_domain (const gi::cstring_v domain) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_domain;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none);
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (domain_to_c));
}
void base::MountOperationBase::set_domain () noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_domain;
  auto domain_to_c = nullptr;
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (domain_to_c));
}

// void g_mount_operation_set_is_tcrypt_hidden_volume (GMountOperation* op /*none*/, gboolean hidden_volume);
// void g_mount_operation_set_is_tcrypt_hidden_volume (::GMountOperation* op /*none*/, gboolean hidden_volume);
void base::MountOperationBase::set_is_tcrypt_hidden_volume (gboolean hidden_volume) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, gboolean hidden_volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_is_tcrypt_hidden_volume;
  auto hidden_volume_to_c = hidden_volume;
  call_wrap_v ((::GMountOperation*) (gobj_()), (gboolean) (hidden_volume_to_c));
}

// void g_mount_operation_set_is_tcrypt_system_volume (GMountOperation* op /*none*/, gboolean system_volume);
// void g_mount_operation_set_is_tcrypt_system_volume (::GMountOperation* op /*none*/, gboolean system_volume);
void base::MountOperationBase::set_is_tcrypt_system_volume (gboolean system_volume) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, gboolean system_volume);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_is_tcrypt_system_volume;
  auto system_volume_to_c = system_volume;
  call_wrap_v ((::GMountOperation*) (gobj_()), (gboolean) (system_volume_to_c));
}

// void g_mount_operation_set_password (GMountOperation* op /*none*/, const char* password /*none,nullable*/);
// void g_mount_operation_set_password (::GMountOperation* op /*none*/, const char* password /*none,nullable*/);
void base::MountOperationBase::set_password (const gi::cstring_v password) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none);
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (password_to_c));
}
void base::MountOperationBase::set_password () noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_password;
  auto password_to_c = nullptr;
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (password_to_c));
}

// void g_mount_operation_set_password_save (GMountOperation* op /*none*/, GPasswordSave save);
// void g_mount_operation_set_password_save (::GMountOperation* op /*none*/, ::GPasswordSave save);
void base::MountOperationBase::set_password_save (Gio::PasswordSave save) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, ::GPasswordSave save);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_password_save;
  auto save_to_c = gi::unwrap (save);
  call_wrap_v ((::GMountOperation*) (gobj_()), (::GPasswordSave) (save_to_c));
}

// void g_mount_operation_set_pim (GMountOperation* op /*none*/, guint pim);
// void g_mount_operation_set_pim (::GMountOperation* op /*none*/, guint pim);
void base::MountOperationBase::set_pim (guint pim) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, guint pim);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_pim;
  auto pim_to_c = pim;
  call_wrap_v ((::GMountOperation*) (gobj_()), (guint) (pim_to_c));
}

// void g_mount_operation_set_username (GMountOperation* op /*none*/, const char* username /*none,nullable*/);
// void g_mount_operation_set_username (::GMountOperation* op /*none*/, const char* username /*none,nullable*/);
void base::MountOperationBase::set_username (const gi::cstring_v username) noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* username);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_username;
  auto username_to_c = gi::unwrap (username, gi::transfer_none);
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (username_to_c));
}
void base::MountOperationBase::set_username () noexcept
{
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* username);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_operation_set_username;
  auto username_to_c = nullptr;
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (username_to_c));
}








} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mountoperation_extra_def_impl.hpp>)
#include <gio/mountoperation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mountoperation_extra_impl.hpp>)
#include <gio/mountoperation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MountOperationClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GMountOperationClass *methods = (::GMountOperationClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.aborted) methods->aborted = (decltype (methods->aborted)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::aborted_>;
  if (init_data.ask_password) methods->ask_password = (decltype (methods->ask_password)) detail::method_wrapper<self, void (*) (const gi::cstring_v message, const gi::cstring_v default_user, const gi::cstring_v default_domain, Gio::AskPasswordFlags flags), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::ask_password_>;
  if (init_data.reply) methods->reply = (decltype (methods->reply)) detail::method_wrapper<self, void (*) (Gio::MountOperationResult result), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::reply_>;
  if (init_data.show_unmount_progress) methods->show_unmount_progress = (decltype (methods->show_unmount_progress)) detail::method_wrapper<self, void (*) (const gi::cstring_v message, gint64 time_left, gint64 bytes_left), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::show_unmount_progress_>;
}

// void MountOperation::aborted (GMountOperation* op /*none*/);
// void MountOperation::aborted (::GMountOperation* op /*none*/);
void MountOperationClass::aborted_ () noexcept
{
  if (!get_struct_()->aborted) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->aborted;
  call_wrap_v ((::GMountOperation*) (gobj_()));
}

// void MountOperation::ask_password (GMountOperation* op /*none*/, const char* message /*none*/, const char* default_user /*none*/, const char* default_domain /*none*/, GAskPasswordFlags flags);
// void MountOperation::ask_password (::GMountOperation* op /*none*/, const char* message /*none*/, const char* default_user /*none*/, const char* default_domain /*none*/, ::GAskPasswordFlags flags);
void MountOperationClass::ask_password_ (const gi::cstring_v message, const gi::cstring_v default_user, const gi::cstring_v default_domain, Gio::AskPasswordFlags flags) noexcept
{
  if (!get_struct_()->ask_password) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* message, const char* default_user, const char* default_domain, ::GAskPasswordFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ask_password;
  auto flags_to_c = gi::unwrap (flags);
  auto default_domain_to_c = gi::unwrap (default_domain, gi::transfer_none);
  auto default_user_to_c = gi::unwrap (default_user, gi::transfer_none);
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (message_to_c), (const char*) (default_user_to_c), (const char*) (default_domain_to_c), (::GAskPasswordFlags) (flags_to_c));
}

// void MountOperation::ask_question (GMountOperation* op /*none*/, const char* message /*none*/, const char** choices /*none*/);
// void MountOperation::ask_question (::GMountOperation* op /*none*/, const char* message /*none*/, const char** choices /*none*/);
// IGNORE; marked ignore

// void MountOperation::reply (GMountOperation* op /*none*/, GMountOperationResult result);
// void MountOperation::reply (::GMountOperation* op /*none*/, ::GMountOperationResult result);
void MountOperationClass::reply_ (Gio::MountOperationResult result) noexcept
{
  if (!get_struct_()->reply) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMountOperation* op, ::GMountOperationResult result);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reply;
  auto result_to_c = gi::unwrap (result);
  call_wrap_v ((::GMountOperation*) (gobj_()), (::GMountOperationResult) (result_to_c));
}

// void MountOperation::show_processes (GMountOperation* op /*none*/, const gchar* message /*none*/, GArray* processes /*none*/, const gchar** choices /*none*/);
// void MountOperation::show_processes (::GMountOperation* op /*none*/, const char* message /*none*/,  processes /*none*/, const char** choices /*none*/);
// SKIP; processes type  not supported

// void MountOperation::show_unmount_progress (GMountOperation* op /*none*/, const gchar* message /*none*/, gint64 time_left, gint64 bytes_left);
// void MountOperation::show_unmount_progress (::GMountOperation* op /*none*/, const char* message /*none*/, gint64 time_left, gint64 bytes_left);
void MountOperationClass::show_unmount_progress_ (const gi::cstring_v message, gint64 time_left, gint64 bytes_left) noexcept
{
  if (!get_struct_()->show_unmount_progress) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMountOperation* op, const char* message, gint64 time_left, gint64 bytes_left);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show_unmount_progress;
  auto bytes_left_to_c = bytes_left;
  auto time_left_to_c = time_left;
  auto message_to_c = gi::unwrap (message, gi::transfer_none);
  call_wrap_v ((::GMountOperation*) (gobj_()), (const char*) (message_to_c), (gint64) (time_left_to_c), (gint64) (bytes_left_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
