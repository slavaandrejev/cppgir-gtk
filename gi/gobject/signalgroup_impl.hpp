// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALGROUP_IMPL_HPP_
#define _GI_GOBJECT_SIGNALGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// GSignalGroup* /*full*/ g_signal_group_new (GType target_type);
// ::GSignalGroup* /*full*/ g_signal_group_new (GType target_type);
GObject::SignalGroup base::SignalGroupBase::new_ (GType target_type) noexcept
{
  typedef ::GSignalGroup* (*call_wrap_t) (GType target_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_group_new;
  auto target_type_to_c = target_type;
  auto _temp_ret = call_wrap_v ((GType) (target_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_signal_group_block (GSignalGroup* self /*none*/);
// void g_signal_group_block (::GSignalGroup* self /*none*/);
void base::SignalGroupBase::block () noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_group_block;
  call_wrap_v ((::GSignalGroup*) (gobj_()));
}

// void g_signal_group_connect (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data);
// void g_signal_group_connect (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_after (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data);
// void g_signal_group_connect_after (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_closure (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GClosure* closure /*none*/, gboolean after);
// void g_signal_group_connect_closure (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/, ::GClosure* closure /*none*/, gboolean after);
void base::SignalGroupBase::connect_closure (const gi::cstring_v detailed_signal, GObject::Closure_Ref closure, gboolean after) noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self, const char* detailed_signal, ::GClosure* closure, gboolean after);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_group_connect_closure;
  auto after_to_c = after;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none);
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none);
  call_wrap_v ((::GSignalGroup*) (gobj_()), (const char*) (detailed_signal_to_c), (::GClosure*) (closure_to_c), (gboolean) (after_to_c));
}

// void g_signal_group_connect_data (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data, GClosureNotify notify /*none*/, GConnectFlags flags);
// void g_signal_group_connect_data (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data,  notify /*none*/, ::GConnectFlags flags);
// SKIP; notify type  not supported, c_handler type  not supported

// void g_signal_group_connect_object (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer object, GConnectFlags flags);
// void g_signal_group_connect_object (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* object, ::GConnectFlags flags);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_swapped (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data);
// void g_signal_group_connect_swapped (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data);
// SKIP; c_handler type  not supported

// gpointer /*full,nullable*/ g_signal_group_dup_target (GSignalGroup* self /*none*/);
// ::GObject* /*full,nullable*/ g_signal_group_dup_target (::GSignalGroup* self /*none*/);
GObject::Object base::SignalGroupBase::dup_target () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GSignalGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_group_dup_target;
  auto _temp_ret = call_wrap_v ((::GSignalGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_signal_group_set_target (GSignalGroup* self /*none*/, gpointer target /*none,nullable*/);
// void g_signal_group_set_target (::GSignalGroup* self /*none*/, ::GObject* target /*none,nullable*/);
void base::SignalGroupBase::set_target (GObject::Object target) noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self, ::GObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_group_set_target;
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  call_wrap_v ((::GSignalGroup*) (gobj_()), (::GObject*) (target_to_c));
}
void base::SignalGroupBase::set_target () noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self, ::GObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_group_set_target;
  auto target_to_c = nullptr;
  call_wrap_v ((::GSignalGroup*) (gobj_()), (::GObject*) (target_to_c));
}

// void g_signal_group_unblock (GSignalGroup* self /*none*/);
// void g_signal_group_unblock (::GSignalGroup* self /*none*/);
void base::SignalGroupBase::unblock () noexcept
{
  typedef void (*call_wrap_t) (::GSignalGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_signal_group_unblock;
  call_wrap_v ((::GSignalGroup*) (gobj_()));
}




} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra_def_impl.hpp>)
#include <gobject/signalgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra_impl.hpp>)
#include <gobject/signalgroup_extra_impl.hpp>
#endif
#endif

#endif
