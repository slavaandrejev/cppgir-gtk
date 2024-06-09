// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONGROUP_HPP_
#define _GI_GIO_ACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gio {


class ActionGroup;

namespace base {


#define GI_GIO_ACTIONGROUP_BASE base::ActionGroupBase
class ActionGroupBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GActionGroup BaseObjectType;

ActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_action_group_get_type(); } 

// void g_action_group_action_added (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void g_action_group_action_added (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void action_added (const gi::cstring_v action_name) noexcept;

// void g_action_group_action_enabled_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean enabled);
// void g_action_group_action_enabled_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean enabled);
GI_INLINE_DECL void action_enabled_changed (const gi::cstring_v action_name, gboolean enabled) noexcept;

// void g_action_group_action_removed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void g_action_group_action_removed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void action_removed (const gi::cstring_v action_name) noexcept;

// void g_action_group_action_state_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* state /*none*/);
// void g_action_group_action_state_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* state /*none*/);
GI_INLINE_DECL void action_state_changed (const gi::cstring_v action_name, GLib::Variant state) noexcept;

// void g_action_group_activate_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// void g_action_group_activate_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
GI_INLINE_DECL void activate_action (const gi::cstring_v action_name, GLib::Variant parameter) noexcept;
GI_INLINE_DECL void activate_action (const gi::cstring_v action_name) noexcept;

// void g_action_group_change_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/);
// void g_action_group_change_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void change_action_state (const gi::cstring_v action_name, GLib::Variant value) noexcept;

// gboolean g_action_group_get_action_enabled (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean g_action_group_get_action_enabled (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL bool get_action_enabled (const gi::cstring_v action_name) noexcept;

// const GVariantType* /*none,nullable*/ g_action_group_get_action_parameter_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_group_get_action_parameter_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_action_parameter_type (const gi::cstring_v action_name) noexcept;

// GVariant* /*full,nullable*/ g_action_group_get_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ g_action_group_get_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::Variant get_action_state (const gi::cstring_v action_name) noexcept;

// GVariant* /*full,nullable*/ g_action_group_get_action_state_hint (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ g_action_group_get_action_state_hint (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::Variant get_action_state_hint (const gi::cstring_v action_name) noexcept;

// const GVariantType* /*none,nullable*/ g_action_group_get_action_state_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_group_get_action_state_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_action_state_type (const gi::cstring_v action_name) noexcept;

// gboolean g_action_group_has_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean g_action_group_has_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL bool has_action (const gi::cstring_v action_name) noexcept;

// gchar** /*full*/ g_action_group_list_actions (GActionGroup* action_group /*none*/);
// char** /*full*/ g_action_group_list_actions (::GActionGroup* action_group /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_actions () noexcept;

// gboolean g_action_group_query_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean* enabled, const GVariantType** parameter_type /*none,out,opt*/, const GVariantType** state_type /*none,out,opt*/, GVariant** state_hint /*full,out,opt*/, GVariant** state /*full,out,opt*/);
// gboolean g_action_group_query_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean* enabled, const ::GVariantType** parameter_type /*none,out,opt*/, const ::GVariantType** state_type /*none,out,opt*/, ::GVariant** state_hint /*full,out,opt*/, ::GVariant** state /*full,out,opt*/);
GI_INLINE_DECL bool query_action (const gi::cstring_v action_name, bool & enabled, GLib::VariantType_Ref * parameter_type, GLib::VariantType_Ref * state_type, GLib::Variant * state_hint, GLib::Variant * state) noexcept;
GI_INLINE_DECL std::tuple<bool, bool, GLib::VariantType_Ref, GLib::VariantType_Ref, GLib::Variant, GLib::Variant> query_action (const gi::cstring_v action_name) noexcept;

// (signal) void action-added (gchar* action_name /*none*/);
// (signal) void action-added (char* action_name /*none*/);
gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name)> signal_action_added()
{ return gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name)> (*this, "action-added"); }

// (signal) void action-enabled-changed (gchar* action_name /*none*/, gboolean enabled);
// (signal) void action-enabled-changed (char* action_name /*none*/, gboolean enabled);
gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name, gboolean enabled)> signal_action_enabled_changed()
{ return gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name, gboolean enabled)> (*this, "action-enabled-changed"); }

// (signal) void action-removed (gchar* action_name /*none*/);
// (signal) void action-removed (char* action_name /*none*/);
gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name)> signal_action_removed()
{ return gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name)> (*this, "action-removed"); }

// (signal) void action-state-changed (gchar* action_name /*none*/,  value /*none*/);
// (signal) void action-state-changed (char* action_name /*none*/, ::GVariant* value /*none*/);
gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name, GLib::Variant value)> signal_action_state_changed()
{ return gi::signal_proxy<void(Gio::ActionGroup, gi::cstring_v action_name, GLib::Variant value)> (*this, "action-state-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra_def.hpp>)
#include <gio/actiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra.hpp>)
#include <gio/actiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ActionGroup : public GI_GIO_ACTIONGROUP_BASE
{ typedef GI_GIO_ACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GActionGroup>
{ typedef Gio::ActionGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ActionGroupInterfaceDef
{
typedef ActionGroupInterfaceDef self;
public:
typedef Gio::ActionGroup instance_type;
typedef ::GActionGroupInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(action_added) = self;
using GI_MEMBER_CHECK_CONFLICT(action_enabled_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(action_removed) = self;
using GI_MEMBER_CHECK_CONFLICT(action_state_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(activate_action) = self;
using GI_MEMBER_CHECK_CONFLICT(change_action_state) = self;
using GI_MEMBER_CHECK_CONFLICT(get_action_enabled) = self;
using GI_MEMBER_CHECK_CONFLICT(get_action_parameter_type) = self;
using GI_MEMBER_CHECK_CONFLICT(get_action_state) = self;
using GI_MEMBER_CHECK_CONFLICT(get_action_state_hint) = self;
using GI_MEMBER_CHECK_CONFLICT(get_action_state_type) = self;
using GI_MEMBER_CHECK_CONFLICT(has_action) = self;
using GI_MEMBER_CHECK_CONFLICT(list_actions) = self;
using GI_MEMBER_CHECK_CONFLICT(query_action) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ActionGroupInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ActionGroup::action_added (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void ActionGroup::action_added (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual void action_added_ (const gi::cstring_v action_name) noexcept = 0;

// void ActionGroup::action_enabled_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean enabled);
// void ActionGroup::action_enabled_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean enabled);
virtual void action_enabled_changed_ (const gi::cstring_v action_name, gboolean enabled) noexcept = 0;

// void ActionGroup::action_removed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void ActionGroup::action_removed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual void action_removed_ (const gi::cstring_v action_name) noexcept = 0;

// void ActionGroup::action_state_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* state /*none*/);
// void ActionGroup::action_state_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* state /*none*/);
virtual void action_state_changed_ (const gi::cstring_v action_name, GLib::Variant state) noexcept = 0;

// void ActionGroup::activate_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// void ActionGroup::activate_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
virtual void activate_action_ (const gi::cstring_v action_name, GLib::Variant parameter) noexcept = 0;

// void ActionGroup::change_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/);
// void ActionGroup::change_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/);
virtual void change_action_state_ (const gi::cstring_v action_name, GLib::Variant value) noexcept = 0;

// gboolean ActionGroup::get_action_enabled (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean ActionGroup::get_action_enabled (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual bool get_action_enabled_ (const gi::cstring_v action_name) noexcept = 0;

// const GVariantType* /*none,nullable*/ ActionGroup::get_action_parameter_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ ActionGroup::get_action_parameter_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual GLib::VariantType_Ref get_action_parameter_type_ (const gi::cstring_v action_name) noexcept = 0;

// GVariant* /*full,nullable*/ ActionGroup::get_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ ActionGroup::get_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual GLib::Variant get_action_state_ (const gi::cstring_v action_name) noexcept = 0;

// GVariant* /*full,nullable*/ ActionGroup::get_action_state_hint (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ ActionGroup::get_action_state_hint (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual GLib::Variant get_action_state_hint_ (const gi::cstring_v action_name) noexcept = 0;

// const GVariantType* /*none,nullable*/ ActionGroup::get_action_state_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ ActionGroup::get_action_state_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual GLib::VariantType_Ref get_action_state_type_ (const gi::cstring_v action_name) noexcept = 0;

// gboolean ActionGroup::has_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean ActionGroup::has_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
virtual bool has_action_ (const gi::cstring_v action_name) noexcept = 0;

// gchar** /*full*/ ActionGroup::list_actions (GActionGroup* action_group /*none*/);
// char** /*full*/ ActionGroup::list_actions (::GActionGroup* action_group /*none*/);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_actions_ () noexcept = 0;

// gboolean ActionGroup::query_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean* enabled, const GVariantType** parameter_type /*none,out,opt*/, const GVariantType** state_type /*none,out,opt*/, GVariant** state_hint /*full,out,opt*/, GVariant** state /*full,out,opt*/);
// gboolean ActionGroup::query_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean* enabled, const ::GVariantType** parameter_type /*none,out,opt*/, const ::GVariantType** state_type /*none,out,opt*/, ::GVariant** state_hint /*full,out,opt*/, ::GVariant** state /*full,out,opt*/);
virtual bool query_action_ (const gi::cstring_v action_name, bool & enabled, GLib::VariantType_Ref & parameter_type, GLib::VariantType_Ref & state_type, GLib::Variant & state_hint, GLib::Variant & state) noexcept = 0;


};

using ActionGroupImpl = detail::InterfaceImpl<ActionGroupInterfaceDef>;

class ActionGroupInterfaceClassImpl: public detail::InterfaceClassImpl<ActionGroupImpl>
{
friend class internal::ActionGroupInterfaceDef;
typedef ActionGroupInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionGroupImpl> super;

protected:
using super::super;

// void ActionGroup::action_added (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void ActionGroup::action_added (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void action_added_ (const gi::cstring_v action_name) noexcept override;

// void ActionGroup::action_enabled_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean enabled);
// void ActionGroup::action_enabled_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean enabled);
GI_INLINE_DECL void action_enabled_changed_ (const gi::cstring_v action_name, gboolean enabled) noexcept override;

// void ActionGroup::action_removed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// void ActionGroup::action_removed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void action_removed_ (const gi::cstring_v action_name) noexcept override;

// void ActionGroup::action_state_changed (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* state /*none*/);
// void ActionGroup::action_state_changed (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* state /*none*/);
GI_INLINE_DECL void action_state_changed_ (const gi::cstring_v action_name, GLib::Variant state) noexcept override;

// void ActionGroup::activate_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* parameter /*none,nullable*/);
// void ActionGroup::activate_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* parameter /*none,nullable*/);
GI_INLINE_DECL void activate_action_ (const gi::cstring_v action_name, GLib::Variant parameter) noexcept override;

// void ActionGroup::change_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, GVariant* value /*none*/);
// void ActionGroup::change_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void change_action_state_ (const gi::cstring_v action_name, GLib::Variant value) noexcept override;

// gboolean ActionGroup::get_action_enabled (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean ActionGroup::get_action_enabled (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL bool get_action_enabled_ (const gi::cstring_v action_name) noexcept override;

// const GVariantType* /*none,nullable*/ ActionGroup::get_action_parameter_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ ActionGroup::get_action_parameter_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_action_parameter_type_ (const gi::cstring_v action_name) noexcept override;

// GVariant* /*full,nullable*/ ActionGroup::get_action_state (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ ActionGroup::get_action_state (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::Variant get_action_state_ (const gi::cstring_v action_name) noexcept override;

// GVariant* /*full,nullable*/ ActionGroup::get_action_state_hint (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// ::GVariant* /*full,nullable*/ ActionGroup::get_action_state_hint (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::Variant get_action_state_hint_ (const gi::cstring_v action_name) noexcept override;

// const GVariantType* /*none,nullable*/ ActionGroup::get_action_state_type (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// const ::GVariantType* /*none,nullable*/ ActionGroup::get_action_state_type (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_action_state_type_ (const gi::cstring_v action_name) noexcept override;

// gboolean ActionGroup::has_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/);
// gboolean ActionGroup::has_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL bool has_action_ (const gi::cstring_v action_name) noexcept override;

// gchar** /*full*/ ActionGroup::list_actions (GActionGroup* action_group /*none*/);
// char** /*full*/ ActionGroup::list_actions (::GActionGroup* action_group /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> list_actions_ () noexcept override;

// gboolean ActionGroup::query_action (GActionGroup* action_group /*none*/, const gchar* action_name /*none*/, gboolean* enabled, const GVariantType** parameter_type /*none,out,opt*/, const GVariantType** state_type /*none,out,opt*/, GVariant** state_hint /*full,out,opt*/, GVariant** state /*full,out,opt*/);
// gboolean ActionGroup::query_action (::GActionGroup* action_group /*none*/, const char* action_name /*none*/, gboolean* enabled, const ::GVariantType** parameter_type /*none,out,opt*/, const ::GVariantType** state_type /*none,out,opt*/, ::GVariant** state_hint /*full,out,opt*/, ::GVariant** state /*full,out,opt*/);
GI_INLINE_DECL bool query_action_ (const gi::cstring_v action_name, bool & enabled, GLib::VariantType_Ref & parameter_type, GLib::VariantType_Ref & state_type, GLib::Variant & state_hint, GLib::Variant & state) noexcept override;


};


struct ActionGroupInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, action_added)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, action_enabled_changed)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, action_removed)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, action_state_changed)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, activate_action)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, change_action_state)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, get_action_enabled)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, get_action_parameter_type)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, get_action_state)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, get_action_state_hint)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, get_action_state_type)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, has_action)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, list_actions)
  GI_MEMBER_DEFINE(ActionGroupInterfaceClassImpl, query_action)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, action_added),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, action_enabled_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, action_removed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, action_state_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate_action),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, change_action_state),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_enabled),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_parameter_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_state),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_state_hint),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_state_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, has_action),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, list_actions),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, query_action)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
