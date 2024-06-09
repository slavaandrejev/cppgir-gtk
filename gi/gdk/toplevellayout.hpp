// AUTO-GENERATED

#ifndef _GI_GDK_TOPLEVELLAYOUT_HPP_
#define _GI_GDK_TOPLEVELLAYOUT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Monitor;
class ToplevelLayout_Ref;

class ToplevelLayout;

namespace base {


#define GI_GDK_TOPLEVELLAYOUT_BASE base::ToplevelLayoutBase
class ToplevelLayoutBase : public gi::detail::GBoxedWrapperBase<ToplevelLayoutBase, ::GdkToplevelLayout>
{
typedef gi::detail::GBoxedWrapperBase<ToplevelLayoutBase, ::GdkToplevelLayout> super_type;
public:

ToplevelLayoutBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_toplevel_layout_get_type(); } 

// GdkToplevelLayout* /*full*/ gdk_toplevel_layout_new ();
// ::GdkToplevelLayout* /*full*/ gdk_toplevel_layout_new ();
static GI_INLINE_DECL Gdk::ToplevelLayout new_ () noexcept;

// GdkToplevelLayout* /*full*/ gdk_toplevel_layout_copy (GdkToplevelLayout* layout /*none*/);
// ::GdkToplevelLayout* /*full*/ gdk_toplevel_layout_copy (::GdkToplevelLayout* layout /*none*/);
GI_INLINE_DECL Gdk::ToplevelLayout copy () noexcept;

// gboolean gdk_toplevel_layout_equal (GdkToplevelLayout* layout /*none*/, GdkToplevelLayout* other /*none*/);
// gboolean gdk_toplevel_layout_equal (::GdkToplevelLayout* layout /*none*/, ::GdkToplevelLayout* other /*none*/);
GI_INLINE_DECL bool equal (Gdk::ToplevelLayout_Ref other) noexcept;

// gboolean gdk_toplevel_layout_get_fullscreen (GdkToplevelLayout* layout /*none*/, gboolean* fullscreen);
// gboolean gdk_toplevel_layout_get_fullscreen (::GdkToplevelLayout* layout /*none*/, gboolean* fullscreen);
GI_INLINE_DECL bool get_fullscreen (bool & fullscreen) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> get_fullscreen () noexcept;

// GdkMonitor* /*none,nullable*/ gdk_toplevel_layout_get_fullscreen_monitor (GdkToplevelLayout* layout /*none*/);
// ::GdkMonitor* /*none,nullable*/ gdk_toplevel_layout_get_fullscreen_monitor (::GdkToplevelLayout* layout /*none*/);
GI_INLINE_DECL Gdk::Monitor get_fullscreen_monitor () noexcept;

// gboolean gdk_toplevel_layout_get_maximized (GdkToplevelLayout* layout /*none*/, gboolean* maximized);
// gboolean gdk_toplevel_layout_get_maximized (::GdkToplevelLayout* layout /*none*/, gboolean* maximized);
GI_INLINE_DECL bool get_maximized (bool & maximized) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> get_maximized () noexcept;

// gboolean gdk_toplevel_layout_get_resizable (GdkToplevelLayout* layout /*none*/);
// gboolean gdk_toplevel_layout_get_resizable (::GdkToplevelLayout* layout /*none*/);
GI_INLINE_DECL bool get_resizable () noexcept;

// GdkToplevelLayout* /*full*/ gdk_toplevel_layout_ref (GdkToplevelLayout* layout /*none*/);
// ::GdkToplevelLayout* /*full*/ gdk_toplevel_layout_ref (::GdkToplevelLayout* layout /*none*/);
// IGNORE; marked ignore

// void gdk_toplevel_layout_set_fullscreen (GdkToplevelLayout* layout /*none*/, gboolean fullscreen, GdkMonitor* monitor /*none,nullable*/);
// void gdk_toplevel_layout_set_fullscreen (::GdkToplevelLayout* layout /*none*/, gboolean fullscreen, ::GdkMonitor* monitor /*none,nullable*/);
GI_INLINE_DECL void set_fullscreen (gboolean fullscreen, Gdk::Monitor monitor) noexcept;
GI_INLINE_DECL void set_fullscreen (gboolean fullscreen) noexcept;

// void gdk_toplevel_layout_set_maximized (GdkToplevelLayout* layout /*none*/, gboolean maximized);
// void gdk_toplevel_layout_set_maximized (::GdkToplevelLayout* layout /*none*/, gboolean maximized);
GI_INLINE_DECL void set_maximized (gboolean maximized) noexcept;

// void gdk_toplevel_layout_set_resizable (GdkToplevelLayout* layout /*none*/, gboolean resizable);
// void gdk_toplevel_layout_set_resizable (::GdkToplevelLayout* layout /*none*/, gboolean resizable);
GI_INLINE_DECL void set_resizable (gboolean resizable) noexcept;

// void gdk_toplevel_layout_unref (GdkToplevelLayout* layout /*none*/);
// void gdk_toplevel_layout_unref (::GdkToplevelLayout* layout /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/toplevellayout_extra_def.hpp>)
#include <gdk/toplevellayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/toplevellayout_extra.hpp>)
#include <gdk/toplevellayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ToplevelLayout_Ref;

class ToplevelLayout : public gi::detail::GBoxedWrapper<ToplevelLayout, ::GdkToplevelLayout, GI_GDK_TOPLEVELLAYOUT_BASE, ToplevelLayout_Ref>
{ typedef gi::detail::GBoxedWrapper<ToplevelLayout, ::GdkToplevelLayout, GI_GDK_TOPLEVELLAYOUT_BASE, ToplevelLayout_Ref> super_type; using super_type::super_type; };


class ToplevelLayout_Ref : public gi::detail::GBoxedRefWrapper<ToplevelLayout, ::GdkToplevelLayout, GI_GDK_TOPLEVELLAYOUT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ToplevelLayout, ::GdkToplevelLayout, GI_GDK_TOPLEVELLAYOUT_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkToplevelLayout>
{ typedef Gdk::ToplevelLayout type; }; 

} // namespace repository

} // namespace gi

#endif
