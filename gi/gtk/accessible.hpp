// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLE_HPP_
#define _GI_GTK_ACCESSIBLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ATContext;

class Accessible;

namespace base {


#define GI_GTK_ACCESSIBLE_BASE base::AccessibleBase
class AccessibleBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkAccessible BaseObjectType;

AccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_get_type(); } 

// GtkAccessible* /*full,nullable*/ gtk_accessible_get_accessible_parent (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ gtk_accessible_get_accessible_parent (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_accessible_parent () noexcept;

// GtkAccessibleRole gtk_accessible_get_accessible_role (GtkAccessible* self /*none*/);
// ::GtkAccessibleRole gtk_accessible_get_accessible_role (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::AccessibleRole get_accessible_role () noexcept;

// GtkATContext* /*full*/ gtk_accessible_get_at_context (GtkAccessible* self /*none*/);
// ::GtkATContext* /*full*/ gtk_accessible_get_at_context (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::ATContext get_at_context () noexcept;

// gboolean gtk_accessible_get_bounds (GtkAccessible* self /*none*/, int* x, int* y, int* width, int* height);
// gboolean gtk_accessible_get_bounds (::GtkAccessible* self /*none*/, gint* x, gint* y, gint* width, gint* height);
GI_INLINE_DECL bool get_bounds (gint & x, gint & y, gint & width, gint & height) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint, gint, gint> get_bounds () noexcept;

// GtkAccessible* /*full,nullable*/ gtk_accessible_get_first_accessible_child (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ gtk_accessible_get_first_accessible_child (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_first_accessible_child () noexcept;

// GtkAccessible* /*full,nullable*/ gtk_accessible_get_next_accessible_sibling (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ gtk_accessible_get_next_accessible_sibling (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_next_accessible_sibling () noexcept;

// gboolean gtk_accessible_get_platform_state (GtkAccessible* self /*none*/, GtkAccessiblePlatformState state);
// gboolean gtk_accessible_get_platform_state (::GtkAccessible* self /*none*/, ::GtkAccessiblePlatformState state);
GI_INLINE_DECL bool get_platform_state (Gtk::AccessiblePlatformState state) noexcept;

// void gtk_accessible_reset_property (GtkAccessible* self /*none*/, GtkAccessibleProperty property);
// void gtk_accessible_reset_property (::GtkAccessible* self /*none*/, ::GtkAccessibleProperty property);
GI_INLINE_DECL void reset_property (Gtk::AccessibleProperty property) noexcept;

// void gtk_accessible_reset_relation (GtkAccessible* self /*none*/, GtkAccessibleRelation relation);
// void gtk_accessible_reset_relation (::GtkAccessible* self /*none*/, ::GtkAccessibleRelation relation);
GI_INLINE_DECL void reset_relation (Gtk::AccessibleRelation relation) noexcept;

// void gtk_accessible_reset_state (GtkAccessible* self /*none*/, GtkAccessibleState state);
// void gtk_accessible_reset_state (::GtkAccessible* self /*none*/, ::GtkAccessibleState state);
GI_INLINE_DECL void reset_state (Gtk::AccessibleState state) noexcept;

// void gtk_accessible_set_accessible_parent (GtkAccessible* self /*none*/, GtkAccessible* parent /*none,nullable*/, GtkAccessible* next_sibling /*none,nullable*/);
// void gtk_accessible_set_accessible_parent (::GtkAccessible* self /*none*/, ::GtkAccessible* parent /*none,nullable*/, ::GtkAccessible* next_sibling /*none,nullable*/);
GI_INLINE_DECL void set_accessible_parent (Gtk::Accessible parent, Gtk::Accessible next_sibling) noexcept;
GI_INLINE_DECL void set_accessible_parent () noexcept;

// void gtk_accessible_update_next_accessible_sibling (GtkAccessible* self /*none*/, GtkAccessible* new_sibling /*none,nullable*/);
// void gtk_accessible_update_next_accessible_sibling (::GtkAccessible* self /*none*/, ::GtkAccessible* new_sibling /*none,nullable*/);
GI_INLINE_DECL void update_next_accessible_sibling (Gtk::Accessible new_sibling) noexcept;
GI_INLINE_DECL void update_next_accessible_sibling () noexcept;

// void gtk_accessible_update_property (GtkAccessible* self /*none*/, GtkAccessibleProperty first_property,  ..._ /*none*/);
// void gtk_accessible_update_property (::GtkAccessible* self /*none*/, ::GtkAccessibleProperty first_property,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by update_property_value, varargs not supported

// void gtk_accessible_update_property_value (GtkAccessible* self /*none*/, int n_properties, GtkAccessibleProperty* properties /*none*/, const GValue* values /*none*/);
// void gtk_accessible_update_property_value (::GtkAccessible* self /*none*/, gint n_properties, ::GtkAccessibleProperty* properties /*none*/, const ::GValue** values /*none*/);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_accessible_update_relation (GtkAccessible* self /*none*/, GtkAccessibleRelation first_relation,  ..._ /*none*/);
// void gtk_accessible_update_relation (::GtkAccessible* self /*none*/, ::GtkAccessibleRelation first_relation,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by update_relation_value, varargs not supported

// void gtk_accessible_update_relation_value (GtkAccessible* self /*none*/, int n_relations, GtkAccessibleRelation* relations /*none*/, const GValue* values /*none*/);
// void gtk_accessible_update_relation_value (::GtkAccessible* self /*none*/, gint n_relations, ::GtkAccessibleRelation* relations /*none*/, const ::GValue** values /*none*/);
// SKIP; values in boxed array not supported (depth 1)

// void gtk_accessible_update_state (GtkAccessible* self /*none*/, GtkAccessibleState first_state,  ..._ /*none*/);
// void gtk_accessible_update_state (::GtkAccessible* self /*none*/, ::GtkAccessibleState first_state,  ..._ /*none*/);
// IGNORE; not introspectable; shadowed-by update_state_value, varargs not supported

// void gtk_accessible_update_state_value (GtkAccessible* self /*none*/, int n_states, GtkAccessibleState* states /*none*/, const GValue* values /*none*/);
// void gtk_accessible_update_state_value (::GtkAccessible* self /*none*/, gint n_states, ::GtkAccessibleState* states /*none*/, const ::GValue** values /*none*/);
// SKIP; values in boxed array not supported (depth 1)

gi::property_proxy<Gtk::AccessibleRole, base::AccessibleBase> property_accessible_role()
{ return gi::property_proxy<Gtk::AccessibleRole, base::AccessibleBase> (*this, "accessible-role"); }
const gi::property_proxy<Gtk::AccessibleRole, base::AccessibleBase> property_accessible_role() const
{ return gi::property_proxy<Gtk::AccessibleRole, base::AccessibleBase> (*this, "accessible-role"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra_def.hpp>)
#include <gtk/accessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra.hpp>)
#include <gtk/accessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Accessible : public GI_GTK_ACCESSIBLE_BASE
{ typedef GI_GTK_ACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessible>
{ typedef Gtk::Accessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccessibleInterfaceDef
{
typedef AccessibleInterfaceDef self;
public:
typedef Gtk::Accessible instance_type;
typedef ::GtkAccessibleInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_accessible_parent) = self;
using GI_MEMBER_CHECK_CONFLICT(get_at_context) = self;
using GI_MEMBER_CHECK_CONFLICT(get_bounds) = self;
using GI_MEMBER_CHECK_CONFLICT(get_first_accessible_child) = self;
using GI_MEMBER_CHECK_CONFLICT(get_next_accessible_sibling) = self;
using GI_MEMBER_CHECK_CONFLICT(get_platform_state) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AccessibleInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GtkAccessible* /*full,nullable*/ Accessible::get_accessible_parent (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_accessible_parent (::GtkAccessible* self /*none*/);
virtual Gtk::Accessible get_accessible_parent_ () noexcept = 0;

// GtkATContext* /*full,nullable*/ Accessible::get_at_context (GtkAccessible* self /*none*/);
// ::GtkATContext* /*full,nullable*/ Accessible::get_at_context (::GtkAccessible* self /*none*/);
virtual Gtk::ATContext get_at_context_ () noexcept = 0;

// gboolean Accessible::get_bounds (GtkAccessible* self /*none*/, int* x, int* y, int* width, int* height);
// gboolean Accessible::get_bounds (::GtkAccessible* self /*none*/, gint* x, gint* y, gint* width, gint* height);
virtual bool get_bounds_ (gint & x, gint & y, gint & width, gint & height) noexcept = 0;

// GtkAccessible* /*full,nullable*/ Accessible::get_first_accessible_child (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_first_accessible_child (::GtkAccessible* self /*none*/);
virtual Gtk::Accessible get_first_accessible_child_ () noexcept = 0;

// GtkAccessible* /*full,nullable*/ Accessible::get_next_accessible_sibling (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_next_accessible_sibling (::GtkAccessible* self /*none*/);
virtual Gtk::Accessible get_next_accessible_sibling_ () noexcept = 0;

// gboolean Accessible::get_platform_state (GtkAccessible* self /*none*/, GtkAccessiblePlatformState state);
// gboolean Accessible::get_platform_state (::GtkAccessible* self /*none*/, ::GtkAccessiblePlatformState state);
virtual bool get_platform_state_ (Gtk::AccessiblePlatformState state) noexcept = 0;


};

using AccessibleImpl = detail::InterfaceImpl<AccessibleInterfaceDef>;

class AccessibleInterfaceClassImpl: public detail::InterfaceClassImpl<AccessibleImpl>
{
friend class internal::AccessibleInterfaceDef;
typedef AccessibleInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<AccessibleImpl> super;

protected:
using super::super;

// GtkAccessible* /*full,nullable*/ Accessible::get_accessible_parent (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_accessible_parent (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_accessible_parent_ () noexcept override;

// GtkATContext* /*full,nullable*/ Accessible::get_at_context (GtkAccessible* self /*none*/);
// ::GtkATContext* /*full,nullable*/ Accessible::get_at_context (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::ATContext get_at_context_ () noexcept override;

// gboolean Accessible::get_bounds (GtkAccessible* self /*none*/, int* x, int* y, int* width, int* height);
// gboolean Accessible::get_bounds (::GtkAccessible* self /*none*/, gint* x, gint* y, gint* width, gint* height);
GI_INLINE_DECL bool get_bounds_ (gint & x, gint & y, gint & width, gint & height) noexcept override;

// GtkAccessible* /*full,nullable*/ Accessible::get_first_accessible_child (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_first_accessible_child (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_first_accessible_child_ () noexcept override;

// GtkAccessible* /*full,nullable*/ Accessible::get_next_accessible_sibling (GtkAccessible* self /*none*/);
// ::GtkAccessible* /*full,nullable*/ Accessible::get_next_accessible_sibling (::GtkAccessible* self /*none*/);
GI_INLINE_DECL Gtk::Accessible get_next_accessible_sibling_ () noexcept override;

// gboolean Accessible::get_platform_state (GtkAccessible* self /*none*/, GtkAccessiblePlatformState state);
// gboolean Accessible::get_platform_state (::GtkAccessible* self /*none*/, ::GtkAccessiblePlatformState state);
GI_INLINE_DECL bool get_platform_state_ (Gtk::AccessiblePlatformState state) noexcept override;


};


struct AccessibleInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(AccessibleInterfaceClassImpl, get_accessible_parent)
  GI_MEMBER_DEFINE(AccessibleInterfaceClassImpl, get_at_context)
  GI_MEMBER_DEFINE(AccessibleInterfaceClassImpl, get_bounds)
  GI_MEMBER_DEFINE(AccessibleInterfaceClassImpl, get_first_accessible_child)
  GI_MEMBER_DEFINE(AccessibleInterfaceClassImpl, get_next_accessible_sibling)
  GI_MEMBER_DEFINE(AccessibleInterfaceClassImpl, get_platform_state)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_accessible_parent),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_at_context),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_bounds),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_first_accessible_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_next_accessible_sibling),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_platform_state)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
