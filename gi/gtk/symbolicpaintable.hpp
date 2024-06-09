// AUTO-GENERATED

#ifndef _GI_GTK_SYMBOLICPAINTABLE_HPP_
#define _GI_GTK_SYMBOLICPAINTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class SymbolicPaintable;

namespace base {


#define GI_GTK_SYMBOLICPAINTABLE_BASE base::SymbolicPaintableBase
class SymbolicPaintableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkSymbolicPaintable BaseObjectType;

SymbolicPaintableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_symbolic_paintable_get_type(); } 

// void gtk_symbolic_paintable_snapshot_symbolic (GtkSymbolicPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height, const GdkRGBA* colors /*none*/, gsize n_colors);
// void gtk_symbolic_paintable_snapshot_symbolic (::GtkSymbolicPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height, const ::GdkRGBA** colors /*none*/, gsize n_colors);
// SKIP; colors in boxed array not supported (depth 1)

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/symbolicpaintable_extra_def.hpp>)
#include <gtk/symbolicpaintable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/symbolicpaintable_extra.hpp>)
#include <gtk/symbolicpaintable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SymbolicPaintable : public GI_GTK_SYMBOLICPAINTABLE_BASE
{ typedef GI_GTK_SYMBOLICPAINTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSymbolicPaintable>
{ typedef Gtk::SymbolicPaintable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SymbolicPaintableInterfaceDef
{
typedef SymbolicPaintableInterfaceDef self;
public:
typedef Gtk::SymbolicPaintable instance_type;
typedef ::GtkSymbolicPaintableInterface interface_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SymbolicPaintableInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void SymbolicPaintable::snapshot_symbolic (GtkSymbolicPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height, const GdkRGBA* colors /*none*/, gsize n_colors);
// void SymbolicPaintable::snapshot_symbolic (::GtkSymbolicPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height, const ::GdkRGBA** colors /*none*/, gsize n_colors);
// SKIP; colors in boxed array not supported (depth 1)


};

using SymbolicPaintableImpl = detail::InterfaceImpl<SymbolicPaintableInterfaceDef>;

class SymbolicPaintableInterfaceClassImpl: public detail::InterfaceClassImpl<SymbolicPaintableImpl>
{
friend class internal::SymbolicPaintableInterfaceDef;
typedef SymbolicPaintableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<SymbolicPaintableImpl> super;

protected:
using super::super;

// void SymbolicPaintable::snapshot_symbolic (GtkSymbolicPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height, const GdkRGBA* colors /*none*/, gsize n_colors);
// void SymbolicPaintable::snapshot_symbolic (::GtkSymbolicPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height, const ::GdkRGBA** colors /*none*/, gsize n_colors);
// SKIP; colors in boxed array not supported (depth 1)


};


struct SymbolicPaintableInterfaceDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
