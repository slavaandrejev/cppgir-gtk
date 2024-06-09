// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLERANGE_HPP_
#define _GI_GTK_ACCESSIBLERANGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class AccessibleRange;

namespace base {


#define GI_GTK_ACCESSIBLERANGE_BASE base::AccessibleRangeBase
class AccessibleRangeBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkAccessibleRange BaseObjectType;

AccessibleRangeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accessible_range_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessiblerange_extra_def.hpp>)
#include <gtk/accessiblerange_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessiblerange_extra.hpp>)
#include <gtk/accessiblerange_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleRange : public GI_GTK_ACCESSIBLERANGE_BASE
{ typedef GI_GTK_ACCESSIBLERANGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccessibleRange>
{ typedef Gtk::AccessibleRange type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccessibleRangeInterfaceDef
{
typedef AccessibleRangeInterfaceDef self;
public:
typedef Gtk::AccessibleRange instance_type;
typedef ::GtkAccessibleRangeInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(set_current_value) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~AccessibleRangeInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean AccessibleRange::set_current_value (GtkAccessibleRange* self /*none*/, double value);
// gboolean AccessibleRange::set_current_value (::GtkAccessibleRange* self /*none*/, gdouble value);
virtual bool set_current_value_ (gdouble value) noexcept = 0;


};

using AccessibleRangeImpl = detail::InterfaceImpl<AccessibleRangeInterfaceDef>;

class AccessibleRangeInterfaceClassImpl: public detail::InterfaceClassImpl<AccessibleRangeImpl>
{
friend class internal::AccessibleRangeInterfaceDef;
typedef AccessibleRangeInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<AccessibleRangeImpl> super;

protected:
using super::super;

// gboolean AccessibleRange::set_current_value (GtkAccessibleRange* self /*none*/, double value);
// gboolean AccessibleRange::set_current_value (::GtkAccessibleRange* self /*none*/, gdouble value);
GI_INLINE_DECL bool set_current_value_ (gdouble value) noexcept override;


};


struct AccessibleRangeInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(AccessibleRangeInterfaceClassImpl, set_current_value)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_current_value)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
