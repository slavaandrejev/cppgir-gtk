// AUTO-GENERATED

#ifndef _GI_GOBJECT_BINDINGGROUP_IMPL_HPP_
#define _GI_GOBJECT_BINDINGGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// GBindingGroup* /*full*/ g_binding_group_new ();
// ::GBindingGroup* /*full*/ g_binding_group_new ();
GObject::BindingGroup base::BindingGroupBase::new_ () noexcept
{
  typedef ::GBindingGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_binding_group_bind (GBindingGroup* self /*none*/, const gchar* source_property /*none*/, gpointer target /*none*/, const gchar* target_property /*none*/, GBindingFlags flags);
// void g_binding_group_bind (::GBindingGroup* self /*none*/, const char* source_property /*none*/, ::GObject* target /*none*/, const char* target_property /*none*/, ::GBindingFlags flags);
void base::BindingGroupBase::bind (const gi::cstring_v source_property, GObject::Object target, const gi::cstring_v target_property, GObject::BindingFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_group_bind;
  auto flags_to_c = gi::unwrap (flags);
  auto target_property_to_c = gi::unwrap (target_property, gi::transfer_none);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto source_property_to_c = gi::unwrap (source_property, gi::transfer_none);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (const char*) (source_property_to_c), (::GObject*) (target_to_c), (const char*) (target_property_to_c), (::GBindingFlags) (flags_to_c));
}

// void g_binding_group_bind_full (GBindingGroup* self /*none*/, const gchar* source_property /*none*/, gpointer target /*none*/, const gchar* target_property /*none*/, GBindingFlags flags, GBindingTransformFunc transform_to /*none,nullable*/, GBindingTransformFunc transform_from /*none,nullable*/, gpointer user_data, GDestroyNotify user_data_destroy /*none*/);
// void g_binding_group_bind_full (::GBindingGroup* self /*none*/, const char* source_property /*none*/, ::GObject* target /*none*/, const char* target_property /*none*/, ::GBindingFlags flags, GObject::BindingTransformFunc::cfunction_type transform_to /*none,nullable*/, GObject::BindingTransformFunc::cfunction_type transform_from /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy /*none*/);
// SKIP; callback misses closure info

// void g_binding_group_bind_with_closures (GBindingGroup* self /*none*/, const gchar* source_property /*none*/, gpointer target /*none*/, const gchar* target_property /*none*/, GBindingFlags flags, GClosure* transform_to /*none,nullable*/, GClosure* transform_from /*none,nullable*/);
// void g_binding_group_bind_with_closures (::GBindingGroup* self /*none*/, const char* source_property /*none*/, ::GObject* target /*none*/, const char* target_property /*none*/, ::GBindingFlags flags, ::GClosure* transform_to /*none,nullable*/, ::GClosure* transform_from /*none,nullable*/);
void base::BindingGroupBase::bind_full (const gi::cstring_v source_property, GObject::Object target, const gi::cstring_v target_property, GObject::BindingFlags flags, GObject::Closure_Ref transform_to, GObject::Closure_Ref transform_from) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, ::GClosure* transform_to, ::GClosure* transform_from);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_group_bind_with_closures;
  auto transform_from_to_c = gi::unwrap (transform_from, gi::transfer_none);
  auto transform_to_to_c = gi::unwrap (transform_to, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto target_property_to_c = gi::unwrap (target_property, gi::transfer_none);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto source_property_to_c = gi::unwrap (source_property, gi::transfer_none);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (const char*) (source_property_to_c), (::GObject*) (target_to_c), (const char*) (target_property_to_c), (::GBindingFlags) (flags_to_c), (::GClosure*) (transform_to_to_c), (::GClosure*) (transform_from_to_c));
}
void base::BindingGroupBase::bind_full (const gi::cstring_v source_property, GObject::Object target, const gi::cstring_v target_property, GObject::BindingFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, ::GClosure* transform_to, ::GClosure* transform_from);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_group_bind_with_closures;
  auto transform_from_to_c = nullptr;
  auto transform_to_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto target_property_to_c = gi::unwrap (target_property, gi::transfer_none);
  auto target_to_c = gi::unwrap (target, gi::transfer_none);
  auto source_property_to_c = gi::unwrap (source_property, gi::transfer_none);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (const char*) (source_property_to_c), (::GObject*) (target_to_c), (const char*) (target_property_to_c), (::GBindingFlags) (flags_to_c), (::GClosure*) (transform_to_to_c), (::GClosure*) (transform_from_to_c));
}

// gpointer /*none,nullable*/ g_binding_group_dup_source (GBindingGroup* self /*none*/);
// ::GObject* /*none,nullable*/ g_binding_group_dup_source (::GBindingGroup* self /*none*/);
GObject::Object base::BindingGroupBase::dup_source () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GBindingGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_group_dup_source;
  auto _temp_ret = call_wrap_v ((::GBindingGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_binding_group_set_source (GBindingGroup* self /*none*/, gpointer source /*none,nullable*/);
// void g_binding_group_set_source (::GBindingGroup* self /*none*/, ::GObject* source /*none,nullable*/);
void base::BindingGroupBase::set_source (GObject::Object source) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, ::GObject* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_group_set_source;
  auto source_to_c = gi::unwrap (source, gi::transfer_none);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (::GObject*) (source_to_c));
}
void base::BindingGroupBase::set_source () noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, ::GObject* source);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_binding_group_set_source;
  auto source_to_c = nullptr;
  call_wrap_v ((::GBindingGroup*) (gobj_()), (::GObject*) (source_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra_def_impl.hpp>)
#include <gobject/bindinggroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra_impl.hpp>)
#include <gobject/bindinggroup_extra_impl.hpp>
#endif
#endif

#endif
