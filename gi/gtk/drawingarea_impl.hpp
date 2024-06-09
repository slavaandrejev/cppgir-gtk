// AUTO-GENERATED

#ifndef _GI_GTK_DRAWINGAREA_IMPL_HPP_
#define _GI_GTK_DRAWINGAREA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_drawing_area_new ();
// ::GtkDrawingArea* /*none*/ gtk_drawing_area_new ();
Gtk::DrawingArea base::DrawingAreaBase::new_ () noexcept
{
  typedef ::GtkDrawingArea* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drawing_area_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int gtk_drawing_area_get_content_height (GtkDrawingArea* self /*none*/);
// gint gtk_drawing_area_get_content_height (::GtkDrawingArea* self /*none*/);
gint base::DrawingAreaBase::get_content_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkDrawingArea* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drawing_area_get_content_height;
  auto _temp_ret = call_wrap_v ((::GtkDrawingArea*) (gobj_()));
  return _temp_ret;
}

// int gtk_drawing_area_get_content_width (GtkDrawingArea* self /*none*/);
// gint gtk_drawing_area_get_content_width (::GtkDrawingArea* self /*none*/);
gint base::DrawingAreaBase::get_content_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkDrawingArea* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drawing_area_get_content_width;
  auto _temp_ret = call_wrap_v ((::GtkDrawingArea*) (gobj_()));
  return _temp_ret;
}

// void gtk_drawing_area_set_content_height (GtkDrawingArea* self /*none*/, int height);
// void gtk_drawing_area_set_content_height (::GtkDrawingArea* self /*none*/, gint height);
void base::DrawingAreaBase::set_content_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkDrawingArea* self, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drawing_area_set_content_height;
  auto height_to_c = height;
  call_wrap_v ((::GtkDrawingArea*) (gobj_()), (gint) (height_to_c));
}

// void gtk_drawing_area_set_content_width (GtkDrawingArea* self /*none*/, int width);
// void gtk_drawing_area_set_content_width (::GtkDrawingArea* self /*none*/, gint width);
void base::DrawingAreaBase::set_content_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkDrawingArea* self, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drawing_area_set_content_width;
  auto width_to_c = width;
  call_wrap_v ((::GtkDrawingArea*) (gobj_()), (gint) (width_to_c));
}

// void gtk_drawing_area_set_draw_func (GtkDrawingArea* self /*none*/, GtkDrawingAreaDrawFunc draw_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_drawing_area_set_draw_func (::GtkDrawingArea* self /*none*/, Gtk::DrawingAreaDrawFunc::cfunction_type draw_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
void base::DrawingAreaBase::set_draw_func (Gtk::DrawingAreaDrawFunc draw_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkDrawingArea* self, Gtk::DrawingAreaDrawFunc::cfunction_type draw_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_drawing_area_set_draw_func;
  auto draw_func_wrap_ = draw_func ? unwrap (std::move (draw_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkDrawingArea*) (gobj_()), (Gtk::DrawingAreaDrawFunc::cfunction_type) (draw_func_wrap_ ? &draw_func_wrap_->wrapper : nullptr), (void*) (draw_func_wrap_), (GLib::DestroyNotify::cfunction_type) (draw_func_wrap_ ? &draw_func_wrap_->destroy : nullptr));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra_def_impl.hpp>)
#include <gtk/drawingarea_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra_impl.hpp>)
#include <gtk/drawingarea_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void DrawingAreaClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkDrawingAreaClass *methods = (::GtkDrawingAreaClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.resize) methods->resize = (decltype (methods->resize)) detail::method_wrapper<self, void (*) (gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::resize_>;
}

// void DrawingArea::resize (GtkDrawingArea* area /*none*/, int width, int height);
// void DrawingArea::resize (::GtkDrawingArea* area /*none*/, gint width, gint height);
void DrawingAreaClass::resize_ (gint width, gint height) noexcept
{
  if (!get_struct_()->resize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkDrawingArea* area, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->resize;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkDrawingArea*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
