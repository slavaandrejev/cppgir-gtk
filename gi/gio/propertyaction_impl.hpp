// AUTO-GENERATED

#ifndef _GI_GIO_PROPERTYACTION_IMPL_HPP_
#define _GI_GIO_PROPERTYACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Action PropertyActionBase::interface_ (gi::interface_tag<Gio::Action>)
{ return gi::wrap ((Gio::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

PropertyActionBase::operator Gio::Action ()
{ return interface_ (gi::interface_tag<Gio::Action>()); }

// GPropertyAction* /*full*/ g_property_action_new (const gchar* name /*none*/, gpointer object /*none*/, const gchar* property_name /*none*/);
// ::GPropertyAction* /*full*/ g_property_action_new (const char* name /*none*/, ::GObject* object /*none*/, const char* property_name /*none*/);
Gio::PropertyAction base::PropertyActionBase::new_ (const gi::cstring_v name, GObject::Object object, const gi::cstring_v property_name) noexcept
{
  typedef ::GPropertyAction* (*call_wrap_t) (const char* name, ::GObject* object, const char* property_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_property_action_new;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none);
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GObject*) (object_to_c), (const char*) (property_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/propertyaction_extra_def_impl.hpp>)
#include <gio/propertyaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/propertyaction_extra_impl.hpp>)
#include <gio/propertyaction_extra_impl.hpp>
#endif
#endif

#endif
