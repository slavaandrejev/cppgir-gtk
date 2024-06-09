// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEACTIONGROUP_IMPL_HPP_
#define _GI_GIO_SIMPLEACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ActionGroup SimpleActionGroupBase::interface_ (gi::interface_tag<Gio::ActionGroup>)
{ return gi::wrap ((Gio::ActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SimpleActionGroupBase::operator Gio::ActionGroup ()
{ return interface_ (gi::interface_tag<Gio::ActionGroup>()); }

Gio::ActionMap SimpleActionGroupBase::interface_ (gi::interface_tag<Gio::ActionMap>)
{ return gi::wrap ((Gio::ActionMap::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SimpleActionGroupBase::operator Gio::ActionMap ()
{ return interface_ (gi::interface_tag<Gio::ActionMap>()); }

// GSimpleActionGroup* /*full*/ g_simple_action_group_new ();
// ::GSimpleActionGroup* /*full*/ g_simple_action_group_new ();
Gio::SimpleActionGroup base::SimpleActionGroupBase::new_ () noexcept
{
  typedef ::GSimpleActionGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_action_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_simple_action_group_add_entries (GSimpleActionGroup* simple /*none*/, const GActionEntry* entries /*none*/, gint n_entries, gpointer user_data);
// void g_simple_action_group_add_entries (::GSimpleActionGroup* simple /*none*/, const ::GActionEntry** entries /*none*/, gint n_entries, void* user_data);
// IGNORE; deprecated

// void g_simple_action_group_insert (GSimpleActionGroup* simple /*none*/, GAction* action /*none*/);
// void g_simple_action_group_insert (::GSimpleActionGroup* simple /*none*/, ::GAction* action /*none*/);
// IGNORE; deprecated

// GAction* /*none*/ g_simple_action_group_lookup (GSimpleActionGroup* simple /*none*/, const gchar* action_name /*none*/);
// ::GAction* /*none*/ g_simple_action_group_lookup (::GSimpleActionGroup* simple /*none*/, const char* action_name /*none*/);
// IGNORE; deprecated

// void g_simple_action_group_remove (GSimpleActionGroup* simple /*none*/, const gchar* action_name /*none*/);
// void g_simple_action_group_remove (::GSimpleActionGroup* simple /*none*/, const char* action_name /*none*/);
// IGNORE; deprecated


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleactiongroup_extra_def_impl.hpp>)
#include <gio/simpleactiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleactiongroup_extra_impl.hpp>)
#include <gio/simpleactiongroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SimpleActionGroupClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GSimpleActionGroupClass *methods = (::GSimpleActionGroupClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
