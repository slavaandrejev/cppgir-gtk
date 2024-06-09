// AUTO-GENERATED

#ifndef _GI_GDK_PAINTABLE_HPP_
#define _GI_GDK_PAINTABLE_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Snapshot;

class Paintable;

namespace base {


#define GI_GDK_PAINTABLE_BASE base::PaintableBase
class PaintableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GdkPaintable BaseObjectType;

PaintableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_paintable_get_type(); } 

// GdkPaintable* /*full*/ gdk_paintable_new_empty (int intrinsic_width, int intrinsic_height);
// ::GdkPaintable* /*full*/ gdk_paintable_new_empty (gint intrinsic_width, gint intrinsic_height);
static GI_INLINE_DECL Gdk::Paintable new_empty (gint intrinsic_width, gint intrinsic_height) noexcept;

// void gdk_paintable_compute_concrete_size (GdkPaintable* paintable /*none*/, double specified_width, double specified_height, double default_width, double default_height, double* concrete_width, double* concrete_height);
// void gdk_paintable_compute_concrete_size (::GdkPaintable* paintable /*none*/, gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height, gdouble* concrete_width, gdouble* concrete_height);
GI_INLINE_DECL void compute_concrete_size (gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height, gdouble & concrete_width, gdouble & concrete_height) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> compute_concrete_size (gdouble specified_width, gdouble specified_height, gdouble default_width, gdouble default_height) noexcept;

// GdkPaintable* /*full*/ gdk_paintable_get_current_image (GdkPaintable* paintable /*none*/);
// ::GdkPaintable* /*full*/ gdk_paintable_get_current_image (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL Gdk::Paintable get_current_image () noexcept;

// GdkPaintableFlags gdk_paintable_get_flags (GdkPaintable* paintable /*none*/);
// ::GdkPaintableFlags gdk_paintable_get_flags (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL Gdk::PaintableFlags get_flags () noexcept;

// double gdk_paintable_get_intrinsic_aspect_ratio (GdkPaintable* paintable /*none*/);
// gdouble gdk_paintable_get_intrinsic_aspect_ratio (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL gdouble get_intrinsic_aspect_ratio () noexcept;

// int gdk_paintable_get_intrinsic_height (GdkPaintable* paintable /*none*/);
// gint gdk_paintable_get_intrinsic_height (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL gint get_intrinsic_height () noexcept;

// int gdk_paintable_get_intrinsic_width (GdkPaintable* paintable /*none*/);
// gint gdk_paintable_get_intrinsic_width (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL gint get_intrinsic_width () noexcept;

// void gdk_paintable_invalidate_contents (GdkPaintable* paintable /*none*/);
// void gdk_paintable_invalidate_contents (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL void invalidate_contents () noexcept;

// void gdk_paintable_invalidate_size (GdkPaintable* paintable /*none*/);
// void gdk_paintable_invalidate_size (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL void invalidate_size () noexcept;

// void gdk_paintable_snapshot (GdkPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height);
// void gdk_paintable_snapshot (::GdkPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height);
GI_INLINE_DECL void snapshot (Gdk::Snapshot snapshot, gdouble width, gdouble height) noexcept;

// (signal) void invalidate-contents ();
// (signal) void invalidate-contents ();
gi::signal_proxy<void(Gdk::Paintable)> signal_invalidate_contents()
{ return gi::signal_proxy<void(Gdk::Paintable)> (*this, "invalidate-contents"); }

// (signal) void invalidate-size ();
// (signal) void invalidate-size ();
gi::signal_proxy<void(Gdk::Paintable)> signal_invalidate_size()
{ return gi::signal_proxy<void(Gdk::Paintable)> (*this, "invalidate-size"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/paintable_extra_def.hpp>)
#include <gdk/paintable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/paintable_extra.hpp>)
#include <gdk/paintable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Paintable : public GI_GDK_PAINTABLE_BASE
{ typedef GI_GDK_PAINTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkPaintable>
{ typedef Gdk::Paintable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

namespace impl {

namespace internal {


class PaintableInterfaceDef
{
typedef PaintableInterfaceDef self;
public:
typedef Gdk::Paintable instance_type;
typedef ::GdkPaintableInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(get_current_image) = self;
using GI_MEMBER_CHECK_CONFLICT(get_flags) = self;
using GI_MEMBER_CHECK_CONFLICT(get_intrinsic_aspect_ratio) = self;
using GI_MEMBER_CHECK_CONFLICT(get_intrinsic_height) = self;
using GI_MEMBER_CHECK_CONFLICT(get_intrinsic_width) = self;
using GI_MEMBER_CHECK_CONFLICT(snapshot) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PaintableInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GdkPaintable* /*full*/ Paintable::get_current_image (GdkPaintable* paintable /*none*/);
// ::GdkPaintable* /*full*/ Paintable::get_current_image (::GdkPaintable* paintable /*none*/);
virtual Gdk::Paintable get_current_image_ () noexcept = 0;

// GdkPaintableFlags Paintable::get_flags (GdkPaintable* paintable /*none*/);
// ::GdkPaintableFlags Paintable::get_flags (::GdkPaintable* paintable /*none*/);
virtual Gdk::PaintableFlags get_flags_ () noexcept = 0;

// double Paintable::get_intrinsic_aspect_ratio (GdkPaintable* paintable /*none*/);
// gdouble Paintable::get_intrinsic_aspect_ratio (::GdkPaintable* paintable /*none*/);
virtual gdouble get_intrinsic_aspect_ratio_ () noexcept = 0;

// int Paintable::get_intrinsic_height (GdkPaintable* paintable /*none*/);
// gint Paintable::get_intrinsic_height (::GdkPaintable* paintable /*none*/);
virtual gint get_intrinsic_height_ () noexcept = 0;

// int Paintable::get_intrinsic_width (GdkPaintable* paintable /*none*/);
// gint Paintable::get_intrinsic_width (::GdkPaintable* paintable /*none*/);
virtual gint get_intrinsic_width_ () noexcept = 0;

// void Paintable::snapshot (GdkPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height);
// void Paintable::snapshot (::GdkPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height);
virtual void snapshot_ (Gdk::Snapshot snapshot, gdouble width, gdouble height) noexcept = 0;


};

using PaintableImpl = detail::InterfaceImpl<PaintableInterfaceDef>;

class PaintableInterfaceClassImpl: public detail::InterfaceClassImpl<PaintableImpl>
{
friend class internal::PaintableInterfaceDef;
typedef PaintableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PaintableImpl> super;

protected:
using super::super;

// GdkPaintable* /*full*/ Paintable::get_current_image (GdkPaintable* paintable /*none*/);
// ::GdkPaintable* /*full*/ Paintable::get_current_image (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL Gdk::Paintable get_current_image_ () noexcept override;

// GdkPaintableFlags Paintable::get_flags (GdkPaintable* paintable /*none*/);
// ::GdkPaintableFlags Paintable::get_flags (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL Gdk::PaintableFlags get_flags_ () noexcept override;

// double Paintable::get_intrinsic_aspect_ratio (GdkPaintable* paintable /*none*/);
// gdouble Paintable::get_intrinsic_aspect_ratio (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL gdouble get_intrinsic_aspect_ratio_ () noexcept override;

// int Paintable::get_intrinsic_height (GdkPaintable* paintable /*none*/);
// gint Paintable::get_intrinsic_height (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL gint get_intrinsic_height_ () noexcept override;

// int Paintable::get_intrinsic_width (GdkPaintable* paintable /*none*/);
// gint Paintable::get_intrinsic_width (::GdkPaintable* paintable /*none*/);
GI_INLINE_DECL gint get_intrinsic_width_ () noexcept override;

// void Paintable::snapshot (GdkPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height);
// void Paintable::snapshot (::GdkPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height);
GI_INLINE_DECL void snapshot_ (Gdk::Snapshot snapshot, gdouble width, gdouble height) noexcept override;


};


struct PaintableInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(PaintableInterfaceClassImpl, get_current_image)
  GI_MEMBER_DEFINE(PaintableInterfaceClassImpl, get_flags)
  GI_MEMBER_DEFINE(PaintableInterfaceClassImpl, get_intrinsic_aspect_ratio)
  GI_MEMBER_DEFINE(PaintableInterfaceClassImpl, get_intrinsic_height)
  GI_MEMBER_DEFINE(PaintableInterfaceClassImpl, get_intrinsic_width)
  GI_MEMBER_DEFINE(PaintableInterfaceClassImpl, snapshot)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_current_image),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_flags),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_intrinsic_aspect_ratio),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_intrinsic_height),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_intrinsic_width),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, snapshot)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
