// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONMAP_HPP_
#define _GI_GIO_ACTIONMAP_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Action;
class ActionEntry;
class ActionEntry_Ref;

class ActionMap;

namespace base {


#define GI_GIO_ACTIONMAP_BASE base::ActionMapBase
class ActionMapBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GActionMap BaseObjectType;

ActionMapBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_action_map_get_type(); } 

// void g_action_map_add_action (GActionMap* action_map /*none*/, GAction* action /*none*/);
// void g_action_map_add_action (::GActionMap* action_map /*none*/, ::GAction* action /*none*/);
GI_INLINE_DECL void add_action (Gio::Action action) noexcept;

// void g_action_map_add_action_entries (GActionMap* action_map /*none*/, const GActionEntry* entries /*none*/, gint n_entries, gpointer user_data);
// void g_action_map_add_action_entries (::GActionMap* action_map /*none*/, const ::GActionEntry** entries /*none*/, gint n_entries, void* user_data);
// SKIP; entries in boxed array not supported (depth 1)

// GAction* /*none,nullable*/ g_action_map_lookup_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// ::GAction* /*none,nullable*/ g_action_map_lookup_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL Gio::Action lookup_action (const gi::cstring_v action_name) noexcept;

// void g_action_map_remove_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// void g_action_map_remove_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void remove_action (const gi::cstring_v action_name) noexcept;

// void g_action_map_remove_action_entries (GActionMap* action_map /*none*/, const GActionEntry* entries /*none*/, gint n_entries);
// void g_action_map_remove_action_entries (::GActionMap* action_map /*none*/, const ::GActionEntry** entries /*none*/, gint n_entries);
// SKIP; entries in boxed array not supported (depth 1)

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actionmap_extra_def.hpp>)
#include <gio/actionmap_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actionmap_extra.hpp>)
#include <gio/actionmap_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ActionMap : public GI_GIO_ACTIONMAP_BASE
{ typedef GI_GIO_ACTIONMAP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GActionMap>
{ typedef Gio::ActionMap type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ActionMapInterfaceDef
{
typedef ActionMapInterfaceDef self;
public:
typedef Gio::ActionMap instance_type;
typedef ::GActionMapInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(add_action) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_action) = self;
using GI_MEMBER_CHECK_CONFLICT(remove_action) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ActionMapInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ActionMap::add_action (GActionMap* action_map /*none*/, GAction* action /*none*/);
// void ActionMap::add_action (::GActionMap* action_map /*none*/, ::GAction* action /*none*/);
virtual void add_action_ (Gio::Action action) noexcept = 0;

// GAction* /*none,nullable*/ ActionMap::lookup_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// ::GAction* /*none,nullable*/ ActionMap::lookup_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
virtual Gio::Action lookup_action_ (const gi::cstring_v action_name) noexcept = 0;

// void ActionMap::remove_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// void ActionMap::remove_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
virtual void remove_action_ (const gi::cstring_v action_name) noexcept = 0;


};

using ActionMapImpl = detail::InterfaceImpl<ActionMapInterfaceDef>;

class ActionMapInterfaceClassImpl: public detail::InterfaceClassImpl<ActionMapImpl>
{
friend class internal::ActionMapInterfaceDef;
typedef ActionMapInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionMapImpl> super;

protected:
using super::super;

// void ActionMap::add_action (GActionMap* action_map /*none*/, GAction* action /*none*/);
// void ActionMap::add_action (::GActionMap* action_map /*none*/, ::GAction* action /*none*/);
GI_INLINE_DECL void add_action_ (Gio::Action action) noexcept override;

// GAction* /*none,nullable*/ ActionMap::lookup_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// ::GAction* /*none,nullable*/ ActionMap::lookup_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL Gio::Action lookup_action_ (const gi::cstring_v action_name) noexcept override;

// void ActionMap::remove_action (GActionMap* action_map /*none*/, const gchar* action_name /*none*/);
// void ActionMap::remove_action (::GActionMap* action_map /*none*/, const char* action_name /*none*/);
GI_INLINE_DECL void remove_action_ (const gi::cstring_v action_name) noexcept override;


};


struct ActionMapInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ActionMapInterfaceClassImpl, add_action)
  GI_MEMBER_DEFINE(ActionMapInterfaceClassImpl, lookup_action)
  GI_MEMBER_DEFINE(ActionMapInterfaceClassImpl, remove_action)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_action),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_action),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, remove_action)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
