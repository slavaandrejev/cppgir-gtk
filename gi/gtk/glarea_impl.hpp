// AUTO-GENERATED

#ifndef _GI_GTK_GLAREA_IMPL_HPP_
#define _GI_GTK_GLAREA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* /*none*/ gtk_gl_area_new ();
// ::GtkGLArea* /*none*/ gtk_gl_area_new ();
Gtk::GLArea base::GLAreaBase::new_ () noexcept
{
  typedef ::GtkGLArea* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gl_area_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_gl_area_attach_buffers (GtkGLArea* area /*none*/);
// void gtk_gl_area_attach_buffers (::GtkGLArea* area /*none*/);
void base::GLAreaBase::attach_buffers () noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_attach_buffers;
  call_wrap_v ((::GtkGLArea*) (gobj_()));
}

// GdkGLAPI gtk_gl_area_get_allowed_apis (GtkGLArea* area /*none*/);
// ::GdkGLAPI gtk_gl_area_get_allowed_apis (::GtkGLArea* area /*none*/);
Gdk::GLAPI_ base::GLAreaBase::get_allowed_apis () noexcept
{
  typedef ::GdkGLAPI (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_allowed_apis;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkGLAPI gtk_gl_area_get_api (GtkGLArea* area /*none*/);
// ::GdkGLAPI gtk_gl_area_get_api (::GtkGLArea* area /*none*/);
Gdk::GLAPI_ base::GLAreaBase::get_api () noexcept
{
  typedef ::GdkGLAPI (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_api;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_gl_area_get_auto_render (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_auto_render (::GtkGLArea* area /*none*/);
bool base::GLAreaBase::get_auto_render () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_auto_render;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return _temp_ret;
}

// GdkGLContext* /*none,nullable*/ gtk_gl_area_get_context (GtkGLArea* area /*none*/);
// ::GdkGLContext* /*none,nullable*/ gtk_gl_area_get_context (::GtkGLArea* area /*none*/);
Gdk::GLContext base::GLAreaBase::get_context () noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_context;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GError* /*none,nullable*/ gtk_gl_area_get_error (GtkGLArea* area /*none*/);
// ::GError* /*none,nullable*/ gtk_gl_area_get_error (::GtkGLArea* area /*none*/);
GLib::Error_Ref base::GLAreaBase::get_error () noexcept
{
  typedef ::GError* (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_error;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean gtk_gl_area_get_has_depth_buffer (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_has_depth_buffer (::GtkGLArea* area /*none*/);
bool base::GLAreaBase::get_has_depth_buffer () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_has_depth_buffer;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_gl_area_get_has_stencil_buffer (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_has_stencil_buffer (::GtkGLArea* area /*none*/);
bool base::GLAreaBase::get_has_stencil_buffer () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_has_stencil_buffer;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return _temp_ret;
}

// void gtk_gl_area_get_required_version (GtkGLArea* area /*none*/, int* major, int* minor);
// void gtk_gl_area_get_required_version (::GtkGLArea* area /*none*/, gint* major, gint* minor);
void base::GLAreaBase::get_required_version (gint & major, gint & minor) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gint* major, gint* minor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_required_version;
  gint minor_o {};
  gint major_o {};
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gint*) (&major_o), (gint*) (&minor_o));
  minor = minor_o;
  major = major_o;
}
std::tuple<gint, gint> base::GLAreaBase::get_required_version () noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gint* major, gint* minor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_required_version;
  gint minor_o {};
  gint major_o {};
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gint*) (&major_o), (gint*) (&minor_o));
  auto &&tmp_return_1 = major_o;
  auto &&tmp_return_2 = minor_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gtk_gl_area_get_use_es (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_use_es (::GtkGLArea* area /*none*/);
bool base::GLAreaBase::get_use_es () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_get_use_es;
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()));
  return _temp_ret;
}

// void gtk_gl_area_make_current (GtkGLArea* area /*none*/);
// void gtk_gl_area_make_current (::GtkGLArea* area /*none*/);
void base::GLAreaBase::make_current () noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_make_current;
  call_wrap_v ((::GtkGLArea*) (gobj_()));
}

// void gtk_gl_area_queue_render (GtkGLArea* area /*none*/);
// void gtk_gl_area_queue_render (::GtkGLArea* area /*none*/);
void base::GLAreaBase::queue_render () noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_queue_render;
  call_wrap_v ((::GtkGLArea*) (gobj_()));
}

// void gtk_gl_area_set_allowed_apis (GtkGLArea* area /*none*/, GdkGLAPI apis);
// void gtk_gl_area_set_allowed_apis (::GtkGLArea* area /*none*/, ::GdkGLAPI apis);
void base::GLAreaBase::set_allowed_apis (Gdk::GLAPI_ apis) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, ::GdkGLAPI apis);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_allowed_apis;
  auto apis_to_c = gi::unwrap (apis);
  call_wrap_v ((::GtkGLArea*) (gobj_()), (::GdkGLAPI) (apis_to_c));
}

// void gtk_gl_area_set_auto_render (GtkGLArea* area /*none*/, gboolean auto_render);
// void gtk_gl_area_set_auto_render (::GtkGLArea* area /*none*/, gboolean auto_render);
void base::GLAreaBase::set_auto_render (gboolean auto_render) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gboolean auto_render);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_auto_render;
  auto auto_render_to_c = auto_render;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gboolean) (auto_render_to_c));
}

// void gtk_gl_area_set_error (GtkGLArea* area /*none*/, const GError* error /*none,nullable*/);
// void gtk_gl_area_set_error (::GtkGLArea* area /*none*/, const ::GError* error /*none,nullable*/);
void base::GLAreaBase::set_error (const GLib::Error_Ref error) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none);
  call_wrap_v ((::GtkGLArea*) (gobj_()), (const ::GError*) (error_to_c));
}
void base::GLAreaBase::set_error () noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_error;
  auto error_to_c = nullptr;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (const ::GError*) (error_to_c));
}

// void gtk_gl_area_set_has_depth_buffer (GtkGLArea* area /*none*/, gboolean has_depth_buffer);
// void gtk_gl_area_set_has_depth_buffer (::GtkGLArea* area /*none*/, gboolean has_depth_buffer);
void base::GLAreaBase::set_has_depth_buffer (gboolean has_depth_buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gboolean has_depth_buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_has_depth_buffer;
  auto has_depth_buffer_to_c = has_depth_buffer;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gboolean) (has_depth_buffer_to_c));
}

// void gtk_gl_area_set_has_stencil_buffer (GtkGLArea* area /*none*/, gboolean has_stencil_buffer);
// void gtk_gl_area_set_has_stencil_buffer (::GtkGLArea* area /*none*/, gboolean has_stencil_buffer);
void base::GLAreaBase::set_has_stencil_buffer (gboolean has_stencil_buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gboolean has_stencil_buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_has_stencil_buffer;
  auto has_stencil_buffer_to_c = has_stencil_buffer;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gboolean) (has_stencil_buffer_to_c));
}

// void gtk_gl_area_set_required_version (GtkGLArea* area /*none*/, int major, int minor);
// void gtk_gl_area_set_required_version (::GtkGLArea* area /*none*/, gint major, gint minor);
void base::GLAreaBase::set_required_version (gint major, gint minor) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gint major, gint minor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_required_version;
  auto minor_to_c = minor;
  auto major_to_c = major;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gint) (major_to_c), (gint) (minor_to_c));
}

// void gtk_gl_area_set_use_es (GtkGLArea* area /*none*/, gboolean use_es);
// void gtk_gl_area_set_use_es (::GtkGLArea* area /*none*/, gboolean use_es);
void base::GLAreaBase::set_use_es (gboolean use_es) noexcept
{
  typedef void (*call_wrap_t) (::GtkGLArea* area, gboolean use_es);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_gl_area_set_use_es;
  auto use_es_to_c = use_es;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gboolean) (use_es_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/glarea_extra_def_impl.hpp>)
#include <gtk/glarea_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/glarea_extra_impl.hpp>)
#include <gtk/glarea_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void GLAreaClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkGLAreaClass *methods = (::GtkGLAreaClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.render) methods->render = (decltype (methods->render)) detail::method_wrapper<self, bool (*) (Gdk::GLContext context), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::render_>;
  if (init_data.resize) methods->resize = (decltype (methods->resize)) detail::method_wrapper<self, void (*) (gint width, gint height), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::resize_>;
}

// gboolean GLArea::render (GtkGLArea* area /*none*/, GdkGLContext* context /*none*/);
// gboolean GLArea::render (::GtkGLArea* area /*none*/, ::GdkGLContext* context /*none*/);
bool GLAreaClass::render_ (Gdk::GLContext context) noexcept
{
  if (!get_struct_()->render) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GtkGLArea* area, ::GdkGLContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkGLArea*) (gobj_()), (::GdkGLContext*) (context_to_c));
  return _temp_ret;
}

// void GLArea::resize (GtkGLArea* area /*none*/, int width, int height);
// void GLArea::resize (::GtkGLArea* area /*none*/, gint width, gint height);
void GLAreaClass::resize_ (gint width, gint height) noexcept
{
  if (!get_struct_()->resize) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkGLArea* area, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->resize;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkGLArea*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
