// AUTO-GENERATED

#ifndef _GI_GTK_FIXEDLAYOUT_IMPL_HPP_
#define _GI_GTK_FIXEDLAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkLayoutManager* /*full*/ gtk_fixed_layout_new ();
// ::GtkFixedLayout* /*full*/ gtk_fixed_layout_new ();
Gtk::FixedLayout base::FixedLayoutBase::new_ () noexcept
{
  typedef ::GtkFixedLayout* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_fixed_layout_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixedlayout_extra_def_impl.hpp>)
#include <gtk/fixedlayout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixedlayout_extra_impl.hpp>)
#include <gtk/fixedlayout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FixedLayoutClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFixedLayoutClass *methods = (::GtkFixedLayoutClass *) class_struct;
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
