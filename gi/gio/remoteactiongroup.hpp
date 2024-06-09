// AUTO-GENERATED

#ifndef _GI_GIO_REMOTEACTIONGROUP_HPP_
#define _GI_GIO_REMOTEACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gio {


class RemoteActionGroup;

namespace base {


#define GI_GIO_REMOTEACTIONGROUP_BASE base::RemoteActionGroupBase
class RemoteActionGroupBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GRemoteActionGroup BaseObjectType;

RemoteActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_remote_action_group_get_type(); } 

// void g_remote_action_group_activate_action_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/, GVariant* platform_data /*none*/);
// void g_remote_action_group_activate_action_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void activate_action_full (const gi::cstring_v action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept;
GI_INLINE_DECL void activate_action_full (const gi::cstring_v action_name, GLib::Variant platform_data) noexcept;

// void g_remote_action_group_change_action_state_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/, GVariant* platform_data /*none*/);
// void g_remote_action_group_change_action_state_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void change_action_state_full (const gi::cstring_v action_name, GLib::Variant value, GLib::Variant platform_data) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/remoteactiongroup_extra_def.hpp>)
#include <gio/remoteactiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/remoteactiongroup_extra.hpp>)
#include <gio/remoteactiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class RemoteActionGroup : public GI_GIO_REMOTEACTIONGROUP_BASE
{ typedef GI_GIO_REMOTEACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GRemoteActionGroup>
{ typedef Gio::RemoteActionGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class RemoteActionGroupInterfaceDef
{
typedef RemoteActionGroupInterfaceDef self;
public:
typedef Gio::RemoteActionGroup instance_type;
typedef ::GRemoteActionGroupInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(activate_action_full) = self;
using GI_MEMBER_CHECK_CONFLICT(change_action_state_full) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~RemoteActionGroupInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void RemoteActionGroup::activate_action_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/, GVariant* platform_data /*none*/);
// void RemoteActionGroup::activate_action_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/, ::GVariant* platform_data /*none*/);
virtual void activate_action_full_ (const gi::cstring_v action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept = 0;

// void RemoteActionGroup::change_action_state_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/, GVariant* platform_data /*none*/);
// void RemoteActionGroup::change_action_state_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/, ::GVariant* platform_data /*none*/);
virtual void change_action_state_full_ (const gi::cstring_v action_name, GLib::Variant value, GLib::Variant platform_data) noexcept = 0;


};

using RemoteActionGroupImpl = detail::InterfaceImpl<RemoteActionGroupInterfaceDef>;

class RemoteActionGroupInterfaceClassImpl: public detail::InterfaceClassImpl<RemoteActionGroupImpl>
{
friend class internal::RemoteActionGroupInterfaceDef;
typedef RemoteActionGroupInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<RemoteActionGroupImpl> super;

protected:
using super::super;

// void RemoteActionGroup::activate_action_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/, GVariant* platform_data /*none*/);
// void RemoteActionGroup::activate_action_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void activate_action_full_ (const gi::cstring_v action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept override;

// void RemoteActionGroup::change_action_state_full (GRemoteActionGroup* remote /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/, GVariant* platform_data /*none*/);
// void RemoteActionGroup::change_action_state_full (::GRemoteActionGroup* remote /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/, ::GVariant* platform_data /*none*/);
GI_INLINE_DECL void change_action_state_full_ (const gi::cstring_v action_name, GLib::Variant value, GLib::Variant platform_data) noexcept override;


};


struct RemoteActionGroupInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(RemoteActionGroupInterfaceClassImpl, activate_action_full)
  GI_MEMBER_DEFINE(RemoteActionGroupInterfaceClassImpl, change_action_state_full)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate_action_full),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, change_action_state_full)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
