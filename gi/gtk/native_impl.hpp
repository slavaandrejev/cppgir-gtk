// AUTO-GENERATED

#ifndef _GI_GTK_NATIVE_IMPL_HPP_
#define _GI_GTK_NATIVE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkNative* /*none,nullable*/ gtk_native_get_for_surface (GdkSurface* surface /*none*/);
// ::GtkNative* /*none,nullable*/ gtk_native_get_for_surface (::GdkSurface* surface /*none*/);
Gtk::Native base::NativeBase::get_for_surface (Gdk::Surface surface) noexcept
{
  typedef ::GtkNative* (*call_wrap_t) (::GdkSurface* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_get_for_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkSurface*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GskRenderer* /*none*/ gtk_native_get_renderer (GtkNative* self /*none*/);
// ::GskRenderer* /*none*/ gtk_native_get_renderer (::GtkNative* self /*none*/);
Gsk::Renderer base::NativeBase::get_renderer () noexcept
{
  typedef ::GskRenderer* (*call_wrap_t) (::GtkNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_get_renderer;
  auto _temp_ret = call_wrap_v ((::GtkNative*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkSurface* /*none*/ gtk_native_get_surface (GtkNative* self /*none*/);
// ::GdkSurface* /*none*/ gtk_native_get_surface (::GtkNative* self /*none*/);
Gdk::Surface base::NativeBase::get_surface () noexcept
{
  typedef ::GdkSurface* (*call_wrap_t) (::GtkNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_get_surface;
  auto _temp_ret = call_wrap_v ((::GtkNative*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_native_get_surface_transform (GtkNative* self /*none*/, double* x, double* y);
// void gtk_native_get_surface_transform (::GtkNative* self /*none*/, gdouble* x, gdouble* y);
void base::NativeBase::get_surface_transform (gdouble & x, gdouble & y) noexcept
{
  typedef void (*call_wrap_t) (::GtkNative* self, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_get_surface_transform;
  gdouble y_o {};
  gdouble x_o {};
  call_wrap_v ((::GtkNative*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
}
std::tuple<gdouble, gdouble> base::NativeBase::get_surface_transform () noexcept
{
  typedef void (*call_wrap_t) (::GtkNative* self, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_get_surface_transform;
  gdouble y_o {};
  gdouble x_o {};
  call_wrap_v ((::GtkNative*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  auto &&tmp_return_1 = x_o;
  auto &&tmp_return_2 = y_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_native_realize (GtkNative* self /*none*/);
// void gtk_native_realize (::GtkNative* self /*none*/);
void base::NativeBase::realize () noexcept
{
  typedef void (*call_wrap_t) (::GtkNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_realize;
  call_wrap_v ((::GtkNative*) (gobj_()));
}

// void gtk_native_unrealize (GtkNative* self /*none*/);
// void gtk_native_unrealize (::GtkNative* self /*none*/);
void base::NativeBase::unrealize () noexcept
{
  typedef void (*call_wrap_t) (::GtkNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_native_unrealize;
  call_wrap_v ((::GtkNative*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/native_extra_def_impl.hpp>)
#include <gtk/native_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/native_extra_impl.hpp>)
#include <gtk/native_extra_impl.hpp>
#endif
#endif

#endif
