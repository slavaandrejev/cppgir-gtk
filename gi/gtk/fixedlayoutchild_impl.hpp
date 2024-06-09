// AUTO-GENERATED

#ifndef _GI_GTK_FIXEDLAYOUTCHILD_IMPL_HPP_
#define _GI_GTK_FIXEDLAYOUTCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GskTransform* /*none,nullable*/ gtk_fixed_layout_child_get_transform (GtkFixedLayoutChild* child /*none*/);
// ::GskTransform* /*none,nullable*/ gtk_fixed_layout_child_get_transform (::GtkFixedLayoutChild* child /*none*/);
Gsk::Transform_Ref base::FixedLayoutChildBase::get_transform () noexcept
{
  typedef ::GskTransform* (*call_wrap_t) (::GtkFixedLayoutChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_layout_child_get_transform;
  auto _temp_ret = call_wrap_v ((::GtkFixedLayoutChild*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_fixed_layout_child_set_transform (GtkFixedLayoutChild* child /*none*/, GskTransform* transform /*none*/);
// void gtk_fixed_layout_child_set_transform (::GtkFixedLayoutChild* child /*none*/, ::GskTransform* transform /*none*/);
void base::FixedLayoutChildBase::set_transform (Gsk::Transform_Ref transform) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixedLayoutChild* child, ::GskTransform* transform);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_fixed_layout_child_set_transform;
  auto transform_to_c = gi::unwrap (transform, gi::transfer_none);
  call_wrap_v ((::GtkFixedLayoutChild*) (gobj_()), (::GskTransform*) (transform_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixedlayoutchild_extra_def_impl.hpp>)
#include <gtk/fixedlayoutchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixedlayoutchild_extra_impl.hpp>)
#include <gtk/fixedlayoutchild_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FixedLayoutChildClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFixedLayoutChildClass *methods = (::GtkFixedLayoutChildClass *) class_struct;
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
