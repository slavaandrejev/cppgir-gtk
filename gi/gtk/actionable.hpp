// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONABLE_HPP_
#define _GI_GTK_ACTIONABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Actionable;

namespace base {


#define GI_GTK_ACTIONABLE_BASE base::ActionableBase
class ActionableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkActionable BaseObjectType;

ActionableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_actionable_get_type(); } 

// const char* /*none,nullable*/ gtk_actionable_get_action_name (GtkActionable* actionable /*none*/);
// const char* /*none,nullable*/ gtk_actionable_get_action_name (::GtkActionable* actionable /*none*/);
GI_INLINE_DECL gi::cstring_v get_action_name () noexcept;

// GVariant* /*none,nullable*/ gtk_actionable_get_action_target_value (GtkActionable* actionable /*none*/);
// ::GVariant* /*none,nullable*/ gtk_actionable_get_action_target_value (::GtkActionable* actionable /*none*/);
GI_INLINE_DECL GLib::Variant get_action_target_value () noexcept;

// void gtk_actionable_set_action_name (GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
// void gtk_actionable_set_action_name (::GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
GI_INLINE_DECL void set_action_name (const gi::cstring_v action_name) noexcept;
GI_INLINE_DECL void set_action_name () noexcept;

// void gtk_actionable_set_action_target (GtkActionable* actionable /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// void gtk_actionable_set_action_target (::GtkActionable* actionable /*none*/, const char* format_string /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void gtk_actionable_set_action_target_value (GtkActionable* actionable /*none*/, GVariant* target_value /*none,nullable*/);
// void gtk_actionable_set_action_target_value (::GtkActionable* actionable /*none*/, ::GVariant* target_value /*none,nullable*/);
GI_INLINE_DECL void set_action_target_value (GLib::Variant target_value) noexcept;
GI_INLINE_DECL void set_action_target_value () noexcept;

// void gtk_actionable_set_detailed_action_name (GtkActionable* actionable /*none*/, const char* detailed_action_name /*none*/);
// void gtk_actionable_set_detailed_action_name (::GtkActionable* actionable /*none*/, const char* detailed_action_name /*none*/);
GI_INLINE_DECL void set_detailed_action_name (const gi::cstring_v detailed_action_name) noexcept;

gi::property_proxy<gi::cstring, base::ActionableBase> property_action_name()
{ return gi::property_proxy<gi::cstring, base::ActionableBase> (*this, "action-name"); }
const gi::property_proxy<gi::cstring, base::ActionableBase> property_action_name() const
{ return gi::property_proxy<gi::cstring, base::ActionableBase> (*this, "action-name"); }

gi::property_proxy<GLib::Variant, base::ActionableBase> property_action_target()
{ return gi::property_proxy<GLib::Variant, base::ActionableBase> (*this, "action-target"); }
const gi::property_proxy<GLib::Variant, base::ActionableBase> property_action_target() const
{ return gi::property_proxy<GLib::Variant, base::ActionableBase> (*this, "action-target"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra_def.hpp>)
#include <gtk/actionable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra.hpp>)
#include <gtk/actionable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Actionable : public GI_GTK_ACTIONABLE_BASE
{ typedef GI_GTK_ACTIONABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActionable>
{ typedef Gtk::Actionable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ActionableInterfaceDef
{
typedef ActionableInterfaceDef self;
public:
typedef Gtk::Actionable instance_type;
typedef ::GtkActionableInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_action_name) = self;
using GI_MEMBER_CHECK_CONFLICT(get_action_target_value) = self;
using GI_MEMBER_CHECK_CONFLICT(set_action_name) = self;
using GI_MEMBER_CHECK_CONFLICT(set_action_target_value) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ActionableInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// const char* /*none,nullable*/ Actionable::get_action_name (GtkActionable* actionable /*none*/);
// const char* /*none,nullable*/ Actionable::get_action_name (::GtkActionable* actionable /*none*/);
virtual gi::cstring_v get_action_name_ () noexcept = 0;

// GVariant* /*none,nullable*/ Actionable::get_action_target_value (GtkActionable* actionable /*none*/);
// ::GVariant* /*none,nullable*/ Actionable::get_action_target_value (::GtkActionable* actionable /*none*/);
virtual GLib::Variant get_action_target_value_ () noexcept = 0;

// void Actionable::set_action_name (GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
// void Actionable::set_action_name (::GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
virtual void set_action_name_ (const gi::cstring_v action_name) noexcept = 0;

// void Actionable::set_action_target_value (GtkActionable* actionable /*none*/, GVariant* target_value /*none,nullable*/);
// void Actionable::set_action_target_value (::GtkActionable* actionable /*none*/, ::GVariant* target_value /*none,nullable*/);
virtual void set_action_target_value_ (GLib::Variant target_value) noexcept = 0;


};

using ActionableImpl = detail::InterfaceImpl<ActionableInterfaceDef>;

class ActionableInterfaceClassImpl: public detail::InterfaceClassImpl<ActionableImpl>
{
friend class internal::ActionableInterfaceDef;
typedef ActionableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionableImpl> super;

protected:
using super::super;

// const char* /*none,nullable*/ Actionable::get_action_name (GtkActionable* actionable /*none*/);
// const char* /*none,nullable*/ Actionable::get_action_name (::GtkActionable* actionable /*none*/);
GI_INLINE_DECL gi::cstring_v get_action_name_ () noexcept override;

// GVariant* /*none,nullable*/ Actionable::get_action_target_value (GtkActionable* actionable /*none*/);
// ::GVariant* /*none,nullable*/ Actionable::get_action_target_value (::GtkActionable* actionable /*none*/);
GI_INLINE_DECL GLib::Variant get_action_target_value_ () noexcept override;

// void Actionable::set_action_name (GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
// void Actionable::set_action_name (::GtkActionable* actionable /*none*/, const char* action_name /*none,nullable*/);
GI_INLINE_DECL void set_action_name_ (const gi::cstring_v action_name) noexcept override;

// void Actionable::set_action_target_value (GtkActionable* actionable /*none*/, GVariant* target_value /*none,nullable*/);
// void Actionable::set_action_target_value (::GtkActionable* actionable /*none*/, ::GVariant* target_value /*none,nullable*/);
GI_INLINE_DECL void set_action_target_value_ (GLib::Variant target_value) noexcept override;


};


struct ActionableInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ActionableInterfaceClassImpl, get_action_name)
  GI_MEMBER_DEFINE(ActionableInterfaceClassImpl, get_action_target_value)
  GI_MEMBER_DEFINE(ActionableInterfaceClassImpl, set_action_name)
  GI_MEMBER_DEFINE(ActionableInterfaceClassImpl, set_action_target_value)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_action_target_value),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_action_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_action_target_value)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
