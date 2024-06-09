// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONTROLMESSAGE_IMPL_HPP_
#define _GI_GIO_SOCKETCONTROLMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketControlMessage* /*full,nullable*/ g_socket_control_message_deserialize (int level, int type, gsize size, gpointer data /*none*/);
// ::GSocketControlMessage* /*full,nullable*/ g_socket_control_message_deserialize (gint level, gint type, gsize size, guint8* data /*none*/);
Gio::SocketControlMessage base::SocketControlMessageBase::deserialize (gint level, gint type, gsize size, const guint8 * data) noexcept
{
  typedef ::GSocketControlMessage* (*call_wrap_t) (gint level, gint type, gsize size, guint8* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_control_message_deserialize;
  auto data_to_c = data;
  auto type_to_c = type;
  auto level_to_c = level;
  auto _temp_ret = call_wrap_v ((gint) (level_to_c), (gint) (type_to_c), (gsize) (size), (guint8*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// int g_socket_control_message_get_level (GSocketControlMessage* message /*none*/);
// gint g_socket_control_message_get_level (::GSocketControlMessage* message /*none*/);
gint base::SocketControlMessageBase::get_level () noexcept
{
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_control_message_get_level;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// int g_socket_control_message_get_msg_type (GSocketControlMessage* message /*none*/);
// gint g_socket_control_message_get_msg_type (::GSocketControlMessage* message /*none*/);
gint base::SocketControlMessageBase::get_msg_type () noexcept
{
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_control_message_get_msg_type;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// gsize g_socket_control_message_get_size (GSocketControlMessage* message /*none*/);
// gsize g_socket_control_message_get_size (::GSocketControlMessage* message /*none*/);
gsize base::SocketControlMessageBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_control_message_get_size;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// void g_socket_control_message_serialize (GSocketControlMessage* message /*none*/, gpointer data);
// void g_socket_control_message_serialize (::GSocketControlMessage* message /*none*/, void* data);
void base::SocketControlMessageBase::serialize (void* data) noexcept
{
  typedef void (*call_wrap_t) (::GSocketControlMessage* message, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_socket_control_message_serialize;
  auto data_to_c = data;
  call_wrap_v ((::GSocketControlMessage*) (gobj_()), (void*) (data_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketcontrolmessage_extra_def_impl.hpp>)
#include <gio/socketcontrolmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketcontrolmessage_extra_impl.hpp>)
#include <gio/socketcontrolmessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketControlMessageClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSocketControlMessageClass *methods = (::GSocketControlMessageClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_level) methods->get_level = (decltype (methods->get_level)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_level_>;
  if (init_data.get_size) methods->get_size = (decltype (methods->get_size)) detail::method_wrapper<self, gsize (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_size_>;
  if (init_data.get_type) methods->get_type = (decltype (methods->get_type)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_type_>;
  if (init_data.serialize) methods->serialize = (decltype (methods->serialize)) detail::method_wrapper<self, void (*) (void* data), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::serialize_>;
}

// int SocketControlMessage::get_level (GSocketControlMessage* message /*none*/);
// gint SocketControlMessage::get_level (::GSocketControlMessage* message /*none*/);
gint SocketControlMessageClass::get_level_ () noexcept
{
  if (!get_struct_()->get_level) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_level;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// gsize SocketControlMessage::get_size (GSocketControlMessage* message /*none*/);
// gsize SocketControlMessage::get_size (::GSocketControlMessage* message /*none*/);
gsize SocketControlMessageClass::get_size_ () noexcept
{
  if (!get_struct_()->get_size) { g_critical ("no method in class struct"); return {}; }
  typedef gsize (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_size;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// int SocketControlMessage::get_type (GSocketControlMessage* message /*none*/);
// gint SocketControlMessage::get_type (::GSocketControlMessage* message /*none*/);
gint SocketControlMessageClass::get_type_ () noexcept
{
  if (!get_struct_()->get_type) { g_critical ("no method in class struct"); return {}; }
  typedef gint (*call_wrap_t) (::GSocketControlMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_type;
  auto _temp_ret = call_wrap_v ((::GSocketControlMessage*) (gobj_()));
  return _temp_ret;
}

// void SocketControlMessage::serialize (GSocketControlMessage* message /*none*/, gpointer data);
// void SocketControlMessage::serialize (::GSocketControlMessage* message /*none*/, void* data);
void SocketControlMessageClass::serialize_ (void* data) noexcept
{
  if (!get_struct_()->serialize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GSocketControlMessage* message, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->serialize;
  auto data_to_c = data;
  call_wrap_v ((::GSocketControlMessage*) (gobj_()), (void*) (data_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
