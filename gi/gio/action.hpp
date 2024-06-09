// AUTO-GENERATED

#ifndef _GI_GIO_ACTION_HPP_
#define _GI_GIO_ACTION_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Action;

namespace base {


#define GI_GIO_ACTION_BASE base::ActionBase
class ActionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GAction BaseObjectType;

ActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_action_get_type(); } 

// gboolean g_action_name_is_valid (const gchar* action_name /*none*/);
// gboolean g_action_name_is_valid (const char* action_name /*none*/);
static GI_INLINE_DECL bool name_is_valid (const gi::cstring_v action_name) noexcept;

// gboolean g_action_parse_detailed_name (const gchar* detailed_name /*none*/, gchar** action_name /*full,out,opt*/, GVariant** target_value /*full,out,opt,nullable*/, GError ** error);
// gboolean g_action_parse_detailed_name (const char* detailed_name /*none*/, char** action_name /*full,out,opt*/, ::GVariant** target_value /*full,out,opt,nullable*/, GError ** error);
static GI_INLINE_DECL bool parse_detailed_name (const gi::cstring_v detailed_name, gi::cstring * action_name, GLib::Variant * target_value);
static GI_INLINE_DECL bool parse_detailed_name (const gi::cstring_v detailed_name, gi::cstring * action_name, GLib::Variant * target_value, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, gi::cstring, GLib::Variant> parse_detailed_name (const gi::cstring_v detailed_name);
static GI_INLINE_DECL std::tuple<bool, gi::cstring, GLib::Variant> parse_detailed_name (const gi::cstring_v detailed_name, GLib::Error * _error) noexcept;

// gchar* /*full*/ g_action_print_detailed_name (const gchar* action_name /*none*/, GVariant* target_value /*none,nullable*/);
// char* /*full*/ g_action_print_detailed_name (const char* action_name /*none*/, ::GVariant* target_value /*none,nullable*/);
static GI_INLINE_DECL gi::cstring print_detailed_name (const gi::cstring_v action_name, GLib::Variant target_value) noexcept;
static GI_INLINE_DECL gi::cstring print_detailed_name (const gi::cstring_v action_name) noexcept;

// void g_action_activate (GAction* action /*none*/, GVariant* parameter /*none,nullable*/);
// void g_action_activate (::GAction* action /*none*/, ::GVariant* parameter /*none,nullable*/);
GI_INLINE_DECL void activate (GLib::Variant parameter) noexcept;
GI_INLINE_DECL void activate () noexcept;

// void g_action_change_state (GAction* action /*none*/, GVariant* value /*none*/);
// void g_action_change_state (::GAction* action /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void change_state (GLib::Variant value) noexcept;

// gboolean g_action_get_enabled (GAction* action /*none*/);
// gboolean g_action_get_enabled (::GAction* action /*none*/);
GI_INLINE_DECL bool get_enabled () noexcept;

// const gchar* /*none*/ g_action_get_name (GAction* action /*none*/);
// const char* /*none*/ g_action_get_name (::GAction* action /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const GVariantType* /*none,nullable*/ g_action_get_parameter_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_get_parameter_type (::GAction* action /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_parameter_type () noexcept;

// GVariant* /*full,nullable*/ g_action_get_state (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ g_action_get_state (::GAction* action /*none*/);
GI_INLINE_DECL GLib::Variant get_state () noexcept;

// GVariant* /*full,nullable*/ g_action_get_state_hint (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ g_action_get_state_hint (::GAction* action /*none*/);
GI_INLINE_DECL GLib::Variant get_state_hint () noexcept;

// const GVariantType* /*none,nullable*/ g_action_get_state_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ g_action_get_state_type (::GAction* action /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_state_type () noexcept;

gi::property_proxy<bool, base::ActionBase> property_enabled()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::ActionBase> property_enabled() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "enabled"); }

gi::property_proxy<gi::cstring, base::ActionBase> property_name()
{ return gi::property_proxy<gi::cstring, base::ActionBase> (*this, "name"); }
const gi::property_proxy<gi::cstring, base::ActionBase> property_name() const
{ return gi::property_proxy<gi::cstring, base::ActionBase> (*this, "name"); }

gi::property_proxy<GLib::VariantType, base::ActionBase> property_parameter_type()
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "parameter-type"); }
const gi::property_proxy<GLib::VariantType, base::ActionBase> property_parameter_type() const
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "parameter-type"); }

gi::property_proxy<GLib::Variant, base::ActionBase> property_state()
{ return gi::property_proxy<GLib::Variant, base::ActionBase> (*this, "state"); }
const gi::property_proxy<GLib::Variant, base::ActionBase> property_state() const
{ return gi::property_proxy<GLib::Variant, base::ActionBase> (*this, "state"); }

gi::property_proxy<GLib::VariantType, base::ActionBase> property_state_type()
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "state-type"); }
const gi::property_proxy<GLib::VariantType, base::ActionBase> property_state_type() const
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "state-type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/action_extra_def.hpp>)
#include <gio/action_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/action_extra.hpp>)
#include <gio/action_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Action : public GI_GIO_ACTION_BASE
{ typedef GI_GIO_ACTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAction>
{ typedef Gio::Action type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ActionInterfaceDef
{
typedef ActionInterfaceDef self;
public:
typedef Gio::Action instance_type;
typedef ::GActionInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(activate) = self;
using GI_MEMBER_CHECK_CONFLICT(change_state) = self;
using GI_MEMBER_CHECK_CONFLICT(get_enabled) = self;
using GI_MEMBER_CHECK_CONFLICT(get_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_parameter_type) = self;
using GI_MEMBER_CHECK_CONFLICT(get_state) = self;
using GI_MEMBER_CHECK_CONFLICT(get_state_hint) = self;
using GI_MEMBER_CHECK_CONFLICT(get_state_type) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ActionInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Action::activate (GAction* action /*none*/, GVariant* parameter /*none,nullable*/);
// void Action::activate (::GAction* action /*none*/, ::GVariant* parameter /*none,nullable*/);
virtual void activate_ (GLib::Variant parameter) noexcept = 0;

// void Action::change_state (GAction* action /*none*/, GVariant* value /*none*/);
// void Action::change_state (::GAction* action /*none*/, ::GVariant* value /*none*/);
virtual void change_state_ (GLib::Variant value) noexcept = 0;

// gboolean Action::get_enabled (GAction* action /*none*/);
// gboolean Action::get_enabled (::GAction* action /*none*/);
virtual bool get_enabled_ () noexcept = 0;

// const gchar* /*none*/ Action::get_name (GAction* action /*none*/);
// const char* /*none*/ Action::get_name (::GAction* action /*none*/);
virtual gi::cstring_v get_name_ () noexcept = 0;

// const GVariantType* /*none,nullable*/ Action::get_parameter_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ Action::get_parameter_type (::GAction* action /*none*/);
virtual GLib::VariantType_Ref get_parameter_type_ () noexcept = 0;

// GVariant* /*full,nullable*/ Action::get_state (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ Action::get_state (::GAction* action /*none*/);
virtual GLib::Variant get_state_ () noexcept = 0;

// GVariant* /*full,nullable*/ Action::get_state_hint (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ Action::get_state_hint (::GAction* action /*none*/);
virtual GLib::Variant get_state_hint_ () noexcept = 0;

// const GVariantType* /*none,nullable*/ Action::get_state_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ Action::get_state_type (::GAction* action /*none*/);
virtual GLib::VariantType_Ref get_state_type_ () noexcept = 0;


};

using ActionImpl = detail::InterfaceImpl<ActionInterfaceDef>;

class ActionInterfaceClassImpl: public detail::InterfaceClassImpl<ActionImpl>
{
friend class internal::ActionInterfaceDef;
typedef ActionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionImpl> super;

protected:
using super::super;

// void Action::activate (GAction* action /*none*/, GVariant* parameter /*none,nullable*/);
// void Action::activate (::GAction* action /*none*/, ::GVariant* parameter /*none,nullable*/);
GI_INLINE_DECL void activate_ (GLib::Variant parameter) noexcept override;

// void Action::change_state (GAction* action /*none*/, GVariant* value /*none*/);
// void Action::change_state (::GAction* action /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void change_state_ (GLib::Variant value) noexcept override;

// gboolean Action::get_enabled (GAction* action /*none*/);
// gboolean Action::get_enabled (::GAction* action /*none*/);
GI_INLINE_DECL bool get_enabled_ () noexcept override;

// const gchar* /*none*/ Action::get_name (GAction* action /*none*/);
// const char* /*none*/ Action::get_name (::GAction* action /*none*/);
GI_INLINE_DECL gi::cstring_v get_name_ () noexcept override;

// const GVariantType* /*none,nullable*/ Action::get_parameter_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ Action::get_parameter_type (::GAction* action /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_parameter_type_ () noexcept override;

// GVariant* /*full,nullable*/ Action::get_state (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ Action::get_state (::GAction* action /*none*/);
GI_INLINE_DECL GLib::Variant get_state_ () noexcept override;

// GVariant* /*full,nullable*/ Action::get_state_hint (GAction* action /*none*/);
// ::GVariant* /*full,nullable*/ Action::get_state_hint (::GAction* action /*none*/);
GI_INLINE_DECL GLib::Variant get_state_hint_ () noexcept override;

// const GVariantType* /*none,nullable*/ Action::get_state_type (GAction* action /*none*/);
// const ::GVariantType* /*none,nullable*/ Action::get_state_type (::GAction* action /*none*/);
GI_INLINE_DECL GLib::VariantType_Ref get_state_type_ () noexcept override;


};


struct ActionInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, activate)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, change_state)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, get_enabled)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, get_name)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, get_parameter_type)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, get_state)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, get_state_hint)
  GI_MEMBER_DEFINE(ActionInterfaceClassImpl, get_state_type)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, change_state),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_enabled),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_parameter_type),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_state),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_state_hint),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_state_type)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
