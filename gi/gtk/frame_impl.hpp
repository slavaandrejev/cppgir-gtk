// AUTO-GENERATED

#ifndef _GI_GTK_FRAME_IMPL_HPP_
#define _GI_GTK_FRAME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_frame_new (const char* label /*none,nullable*/);
// ::GtkFrame* /*none*/ gtk_frame_new (const char* label /*none,nullable*/);
Gtk::Frame base::FrameBase::new_ (const gi::cstring_v label) noexcept
{
  typedef ::GtkFrame* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Gtk::Frame base::FrameBase::new_ () noexcept
{
  typedef ::GtkFrame* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_new;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWidget* /*none,nullable*/ gtk_frame_get_child (GtkFrame* frame /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_frame_get_child (::GtkFrame* frame /*none*/);
Gtk::Widget base::FrameBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_get_child;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ gtk_frame_get_label (GtkFrame* frame /*none*/);
// const char* /*none,nullable*/ gtk_frame_get_label (::GtkFrame* frame /*none*/);
gi::cstring_v base::FrameBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_get_label;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// float gtk_frame_get_label_align (GtkFrame* frame /*none*/);
// gfloat gtk_frame_get_label_align (::GtkFrame* frame /*none*/);
gfloat base::FrameBase::get_label_align () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_get_label_align;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* /*none,nullable*/ gtk_frame_get_label_widget (GtkFrame* frame /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_frame_get_label_widget (::GtkFrame* frame /*none*/);
Gtk::Widget base::FrameBase::get_label_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_get_label_widget;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_frame_set_child (GtkFrame* frame /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_frame_set_child (::GtkFrame* frame /*none*/, ::GtkWidget* child /*none,nullable*/);
void base::FrameBase::set_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none);
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkWidget*) (child_to_c));
}
void base::FrameBase::set_child () noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_child;
  auto child_to_c = nullptr;
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_frame_set_label (GtkFrame* frame /*none*/, const char* label /*none,nullable*/);
// void gtk_frame_set_label (::GtkFrame* frame /*none*/, const char* label /*none,nullable*/);
void base::FrameBase::set_label (const gi::cstring_v label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none);
  call_wrap_v ((::GtkFrame*) (gobj_()), (const char*) (label_to_c));
}
void base::FrameBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkFrame*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_frame_set_label_align (GtkFrame* frame /*none*/, float xalign);
// void gtk_frame_set_label_align (::GtkFrame* frame /*none*/, gfloat xalign);
void base::FrameBase::set_label_align (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_label_align;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkFrame*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_frame_set_label_widget (GtkFrame* frame /*none*/, GtkWidget* label_widget /*none,nullable*/);
// void gtk_frame_set_label_widget (::GtkFrame* frame /*none*/, ::GtkWidget* label_widget /*none,nullable*/);
void base::FrameBase::set_label_widget (Gtk::Widget label_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_label_widget;
  auto label_widget_to_c = gi::unwrap (label_widget, gi::transfer_none);
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}
void base::FrameBase::set_label_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_frame_set_label_widget;
  auto label_widget_to_c = nullptr;
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/frame_extra_def_impl.hpp>)
#include <gtk/frame_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/frame_extra_impl.hpp>)
#include <gtk/frame_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FrameClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkFrameClass *methods = (::GtkFrameClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.compute_child_allocation) methods->compute_child_allocation = (decltype (methods->compute_child_allocation)) detail::method_wrapper<self, void (*) (Gtk::Allocation_Ref allocation), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::compute_child_allocation_>;
}

// void Frame::compute_child_allocation (GtkFrame* frame /*none*/, GtkAllocation* allocation /*none*/);
// void Frame::compute_child_allocation (::GtkFrame* frame /*none*/, ::GtkAllocation* allocation /*none*/);
void FrameClass::compute_child_allocation_ (Gtk::Allocation_Ref allocation) noexcept
{
  if (!get_struct_()->compute_child_allocation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->compute_child_allocation;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none);
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkAllocation*) (allocation_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
