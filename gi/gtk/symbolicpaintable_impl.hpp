// AUTO-GENERATED

#ifndef _GI_GTK_SYMBOLICPAINTABLE_IMPL_HPP_
#define _GI_GTK_SYMBOLICPAINTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_symbolic_paintable_snapshot_symbolic (GtkSymbolicPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height, const GdkRGBA* colors /*none*/, gsize n_colors);
// void gtk_symbolic_paintable_snapshot_symbolic (::GtkSymbolicPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height, const ::GdkRGBA** colors /*none*/, gsize n_colors);
// SKIP; colors in boxed array not supported (depth 1)


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/symbolicpaintable_extra_def_impl.hpp>)
#include <gtk/symbolicpaintable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/symbolicpaintable_extra_impl.hpp>)
#include <gtk/symbolicpaintable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SymbolicPaintableInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkSymbolicPaintableInterface *methods = (::GtkSymbolicPaintableInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

// void SymbolicPaintable::snapshot_symbolic (GtkSymbolicPaintable* paintable /*none*/, GdkSnapshot* snapshot /*none*/, double width, double height, const GdkRGBA* colors /*none*/, gsize n_colors);
// void SymbolicPaintable::snapshot_symbolic (::GtkSymbolicPaintable* paintable /*none*/, ::GdkSnapshot* snapshot /*none*/, gdouble width, gdouble height, const ::GdkRGBA** colors /*none*/, gsize n_colors);
// SKIP; colors in boxed array not supported (depth 1)

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
