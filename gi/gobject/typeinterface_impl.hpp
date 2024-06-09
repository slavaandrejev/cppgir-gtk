// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINTERFACE_IMPL_HPP_
#define _GI_GOBJECT_TYPEINTERFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// gpointer /*none*/ g_type_interface_peek_parent (gpointer g_iface /*none*/);
// ::GTypeInterface* /*none*/ g_type_interface_peek_parent (::GTypeInterface* g_iface /*none*/);
GObject::TypeInterface_Ref base::TypeInterfaceBase::peek_parent () noexcept
{
  typedef ::GTypeInterface* (*call_wrap_t) (::GTypeInterface* g_iface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interface_peek_parent;
  auto _temp_ret = call_wrap_v ((::GTypeInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void g_type_interface_add_prerequisite (GType interface_type, GType prerequisite_type);
// void g_type_interface_add_prerequisite (GType interface_type, GType prerequisite_type);
void base::TypeInterfaceBase::add_prerequisite (GType interface_type, GType prerequisite_type) noexcept
{
  typedef void (*call_wrap_t) (GType interface_type, GType prerequisite_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interface_add_prerequisite;
  auto prerequisite_type_to_c = prerequisite_type;
  auto interface_type_to_c = interface_type;
  call_wrap_v ((GType) (interface_type_to_c), (GType) (prerequisite_type_to_c));
}

// GTypePlugin* /*none*/ g_type_interface_get_plugin (GType instance_type, GType interface_type);
// ::GTypePlugin* /*none*/ g_type_interface_get_plugin (GType instance_type, GType interface_type);
GObject::TypePlugin base::TypeInterfaceBase::get_plugin (GType instance_type, GType interface_type) noexcept
{
  typedef ::GTypePlugin* (*call_wrap_t) (GType instance_type, GType interface_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interface_get_plugin;
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  auto _temp_ret = call_wrap_v ((GType) (instance_type_to_c), (GType) (interface_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType g_type_interface_instantiatable_prerequisite (GType interface_type);
// GType g_type_interface_instantiatable_prerequisite (GType interface_type);
GType base::TypeInterfaceBase::instantiatable_prerequisite (GType interface_type) noexcept
{
  typedef GType (*call_wrap_t) (GType interface_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interface_instantiatable_prerequisite;
  auto interface_type_to_c = interface_type;
  auto _temp_ret = call_wrap_v ((GType) (interface_type_to_c));
  return _temp_ret;
}

// gpointer /*none*/ g_type_interface_peek (gpointer instance_class /*none*/, GType iface_type);
// ::GTypeInterface* /*none*/ g_type_interface_peek (::GTypeClass* instance_class /*none*/, GType iface_type);
GObject::TypeInterface_Ref base::TypeInterfaceBase::peek (GObject::TypeClass_Ref instance_class, GType iface_type) noexcept
{
  typedef ::GTypeInterface* (*call_wrap_t) (::GTypeClass* instance_class, GType iface_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interface_peek;
  auto iface_type_to_c = iface_type;
  auto instance_class_to_c = gi::unwrap (instance_class, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (instance_class_to_c), (GType) (iface_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GType* /*full*/ g_type_interface_prerequisites (GType interface_type, guint* n_prerequisites);
// GType* /*full*/ g_type_interface_prerequisites (GType interface_type, guint* n_prerequisites);
gi::Collection<gi::DSpan, GType, gi::transfer_full_t> base::TypeInterfaceBase::prerequisites (GType interface_type) noexcept
{
  typedef GType* (*call_wrap_t) (GType interface_type, guint* n_prerequisites);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_type_interface_prerequisites;
  auto interface_type_to_c = interface_type;
  guint n_prerequisites;
  auto _ret_o = call_wrap_v ((GType) (interface_type_to_c), (guint*) (&n_prerequisites));
  gi::Collection<gi::DSpan, GType, gi::transfer_full_t> _temp_ret;
  _temp_ret = gi::wrap_to<gi::Collection<gi::DSpan, GType, gi::transfer_full_t>>(_ret_o, n_prerequisites, gi::transfer_full);
  return _temp_ret;
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinterface_extra_def_impl.hpp>)
#include <gobject/typeinterface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinterface_extra_impl.hpp>)
#include <gobject/typeinterface_extra_impl.hpp>
#endif
#endif

#endif
