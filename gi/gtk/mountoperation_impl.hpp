// AUTO-GENERATED

#ifndef _GI_GTK_MOUNTOPERATION_IMPL_HPP_
#define _GI_GTK_MOUNTOPERATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GMountOperation* /*full*/ gtk_mount_operation_new (GtkWindow* parent /*none,nullable*/);
// ::GtkMountOperation* /*full*/ gtk_mount_operation_new (::GtkWindow* parent /*none,nullable*/);
Gtk::MountOperation base::MountOperationBase::new_ (Gtk::Window parent) noexcept
{
  typedef ::GtkMountOperation* (*call_wrap_t) (::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Gtk::MountOperation base::MountOperationBase::new_ () noexcept
{
  typedef ::GtkMountOperation* (*call_wrap_t) (::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_new;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkDisplay* /*none*/ gtk_mount_operation_get_display (GtkMountOperation* op /*none*/);
// ::GdkDisplay* /*none*/ gtk_mount_operation_get_display (::GtkMountOperation* op /*none*/);
Gdk::Display base::MountOperationBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mount_operation_get_display;
  auto _temp_ret = call_wrap_v ((::GtkMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GtkWindow* /*none,nullable*/ gtk_mount_operation_get_parent (GtkMountOperation* op /*none*/);
// ::GtkWindow* /*none,nullable*/ gtk_mount_operation_get_parent (::GtkMountOperation* op /*none*/);
Gtk::Window base::MountOperationBase::get_parent () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mount_operation_get_parent;
  auto _temp_ret = call_wrap_v ((::GtkMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_mount_operation_is_showing (GtkMountOperation* op /*none*/);
// gboolean gtk_mount_operation_is_showing (::GtkMountOperation* op /*none*/);
bool base::MountOperationBase::is_showing () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mount_operation_is_showing;
  auto _temp_ret = call_wrap_v ((::GtkMountOperation*) (gobj_()));
  return _temp_ret;
}

// void gtk_mount_operation_set_display (GtkMountOperation* op /*none*/, GdkDisplay* display /*none*/);
// void gtk_mount_operation_set_display (::GtkMountOperation* op /*none*/, ::GdkDisplay* display /*none*/);
void base::MountOperationBase::set_display (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GtkMountOperation* op, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mount_operation_set_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none);
  call_wrap_v ((::GtkMountOperation*) (gobj_()), (::GdkDisplay*) (display_to_c));
}

// void gtk_mount_operation_set_parent (GtkMountOperation* op /*none*/, GtkWindow* parent /*none,nullable*/);
// void gtk_mount_operation_set_parent (::GtkMountOperation* op /*none*/, ::GtkWindow* parent /*none,nullable*/);
void base::MountOperationBase::set_parent (Gtk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkMountOperation* op, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mount_operation_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none);
  call_wrap_v ((::GtkMountOperation*) (gobj_()), (::GtkWindow*) (parent_to_c));
}
void base::MountOperationBase::set_parent () noexcept
{
  typedef void (*call_wrap_t) (::GtkMountOperation* op, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_mount_operation_set_parent;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkMountOperation*) (gobj_()), (::GtkWindow*) (parent_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra_def_impl.hpp>)
#include <gtk/mountoperation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra_impl.hpp>)
#include <gtk/mountoperation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MountOperationClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkMountOperationClass *methods = (::GtkMountOperationClass *) class_struct;
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
