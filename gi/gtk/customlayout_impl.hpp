// AUTO-GENERATED

#ifndef _GI_GTK_CUSTOMLAYOUT_IMPL_HPP_
#define _GI_GTK_CUSTOMLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkLayoutManager* /*full*/ gtk_custom_layout_new (GtkCustomRequestModeFunc request_mode /*none,nullable*/, GtkCustomMeasureFunc measure /*none*/, GtkCustomAllocateFunc allocate /*none*/);
// ::GtkCustomLayout* /*full*/ gtk_custom_layout_new ( request_mode /*none,nullable*/,  measure /*none*/,  allocate /*none*/);
// SKIP; allocate type  not supported, measure type  not supported, request_mode type  not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/customlayout_extra_def_impl.hpp>)
#include <gtk/customlayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/customlayout_extra_impl.hpp>)
#include <gtk/customlayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CustomLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkCustomLayoutClass *methods = (::GtkCustomLayoutClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
