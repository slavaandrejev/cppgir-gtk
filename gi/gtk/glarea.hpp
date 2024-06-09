// AUTO-GENERATED

#ifndef _GI_GTK_GLAREA_HPP_
#define _GI_GTK_GLAREA_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class GLArea;

namespace base {


#define GI_GTK_GLAREA_BASE base::GLAreaBase
class GLAreaBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkGLArea BaseObjectType;

GLAreaBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gl_area_get_type(); } 

// GtkWidget* /*none*/ gtk_gl_area_new ();
// ::GtkGLArea* /*none*/ gtk_gl_area_new ();
static GI_INLINE_DECL Gtk::GLArea new_ () noexcept;

// void gtk_gl_area_attach_buffers (GtkGLArea* area /*none*/);
// void gtk_gl_area_attach_buffers (::GtkGLArea* area /*none*/);
GI_INLINE_DECL void attach_buffers () noexcept;

// GdkGLAPI gtk_gl_area_get_allowed_apis (GtkGLArea* area /*none*/);
// ::GdkGLAPI gtk_gl_area_get_allowed_apis (::GtkGLArea* area /*none*/);
GI_INLINE_DECL Gdk::GLAPI_ get_allowed_apis () noexcept;

// GdkGLAPI gtk_gl_area_get_api (GtkGLArea* area /*none*/);
// ::GdkGLAPI gtk_gl_area_get_api (::GtkGLArea* area /*none*/);
GI_INLINE_DECL Gdk::GLAPI_ get_api () noexcept;

// gboolean gtk_gl_area_get_auto_render (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_auto_render (::GtkGLArea* area /*none*/);
GI_INLINE_DECL bool get_auto_render () noexcept;

// GdkGLContext* /*none,nullable*/ gtk_gl_area_get_context (GtkGLArea* area /*none*/);
// ::GdkGLContext* /*none,nullable*/ gtk_gl_area_get_context (::GtkGLArea* area /*none*/);
GI_INLINE_DECL Gdk::GLContext get_context () noexcept;

// GError* /*none,nullable*/ gtk_gl_area_get_error (GtkGLArea* area /*none*/);
// ::GError* /*none,nullable*/ gtk_gl_area_get_error (::GtkGLArea* area /*none*/);
GI_INLINE_DECL GLib::Error_Ref get_error () noexcept;

// gboolean gtk_gl_area_get_has_depth_buffer (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_has_depth_buffer (::GtkGLArea* area /*none*/);
GI_INLINE_DECL bool get_has_depth_buffer () noexcept;

// gboolean gtk_gl_area_get_has_stencil_buffer (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_has_stencil_buffer (::GtkGLArea* area /*none*/);
GI_INLINE_DECL bool get_has_stencil_buffer () noexcept;

// void gtk_gl_area_get_required_version (GtkGLArea* area /*none*/, int* major, int* minor);
// void gtk_gl_area_get_required_version (::GtkGLArea* area /*none*/, gint* major, gint* minor);
GI_INLINE_DECL void get_required_version (gint & major, gint & minor) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_required_version () noexcept;

// gboolean gtk_gl_area_get_use_es (GtkGLArea* area /*none*/);
// gboolean gtk_gl_area_get_use_es (::GtkGLArea* area /*none*/);
GI_INLINE_DECL bool get_use_es () noexcept;

// void gtk_gl_area_make_current (GtkGLArea* area /*none*/);
// void gtk_gl_area_make_current (::GtkGLArea* area /*none*/);
GI_INLINE_DECL void make_current () noexcept;

// void gtk_gl_area_queue_render (GtkGLArea* area /*none*/);
// void gtk_gl_area_queue_render (::GtkGLArea* area /*none*/);
GI_INLINE_DECL void queue_render () noexcept;

// void gtk_gl_area_set_allowed_apis (GtkGLArea* area /*none*/, GdkGLAPI apis);
// void gtk_gl_area_set_allowed_apis (::GtkGLArea* area /*none*/, ::GdkGLAPI apis);
GI_INLINE_DECL void set_allowed_apis (Gdk::GLAPI_ apis) noexcept;

// void gtk_gl_area_set_auto_render (GtkGLArea* area /*none*/, gboolean auto_render);
// void gtk_gl_area_set_auto_render (::GtkGLArea* area /*none*/, gboolean auto_render);
GI_INLINE_DECL void set_auto_render (gboolean auto_render) noexcept;

// void gtk_gl_area_set_error (GtkGLArea* area /*none*/, const GError* error /*none,nullable*/);
// void gtk_gl_area_set_error (::GtkGLArea* area /*none*/, const ::GError* error /*none,nullable*/);
GI_INLINE_DECL void set_error (const GLib::Error_Ref error) noexcept;
GI_INLINE_DECL void set_error () noexcept;

// void gtk_gl_area_set_has_depth_buffer (GtkGLArea* area /*none*/, gboolean has_depth_buffer);
// void gtk_gl_area_set_has_depth_buffer (::GtkGLArea* area /*none*/, gboolean has_depth_buffer);
GI_INLINE_DECL void set_has_depth_buffer (gboolean has_depth_buffer) noexcept;

// void gtk_gl_area_set_has_stencil_buffer (GtkGLArea* area /*none*/, gboolean has_stencil_buffer);
// void gtk_gl_area_set_has_stencil_buffer (::GtkGLArea* area /*none*/, gboolean has_stencil_buffer);
GI_INLINE_DECL void set_has_stencil_buffer (gboolean has_stencil_buffer) noexcept;

// void gtk_gl_area_set_required_version (GtkGLArea* area /*none*/, int major, int minor);
// void gtk_gl_area_set_required_version (::GtkGLArea* area /*none*/, gint major, gint minor);
GI_INLINE_DECL void set_required_version (gint major, gint minor) noexcept;

// void gtk_gl_area_set_use_es (GtkGLArea* area /*none*/, gboolean use_es);
// void gtk_gl_area_set_use_es (::GtkGLArea* area /*none*/, gboolean use_es);
GI_INLINE_DECL void set_use_es (gboolean use_es) noexcept;

gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> property_allowed_apis()
{ return gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> (*this, "allowed-apis"); }
const gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> property_allowed_apis() const
{ return gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> (*this, "allowed-apis"); }

gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> property_api()
{ return gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> (*this, "api"); }
const gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> property_api() const
{ return gi::property_proxy<Gdk::GLAPI_, base::GLAreaBase> (*this, "api"); }

gi::property_proxy<bool, base::GLAreaBase> property_auto_render()
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "auto-render"); }
const gi::property_proxy<bool, base::GLAreaBase> property_auto_render() const
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "auto-render"); }

gi::property_proxy<Gdk::GLContext, base::GLAreaBase> property_context()
{ return gi::property_proxy<Gdk::GLContext, base::GLAreaBase> (*this, "context"); }
const gi::property_proxy<Gdk::GLContext, base::GLAreaBase> property_context() const
{ return gi::property_proxy<Gdk::GLContext, base::GLAreaBase> (*this, "context"); }

gi::property_proxy<bool, base::GLAreaBase> property_has_depth_buffer()
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "has-depth-buffer"); }
const gi::property_proxy<bool, base::GLAreaBase> property_has_depth_buffer() const
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "has-depth-buffer"); }

gi::property_proxy<bool, base::GLAreaBase> property_has_stencil_buffer()
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "has-stencil-buffer"); }
const gi::property_proxy<bool, base::GLAreaBase> property_has_stencil_buffer() const
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "has-stencil-buffer"); }

gi::property_proxy<bool, base::GLAreaBase> property_use_es()
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "use-es"); }
const gi::property_proxy<bool, base::GLAreaBase> property_use_es() const
{ return gi::property_proxy<bool, base::GLAreaBase> (*this, "use-es"); }

// (signal)  /*full*/ create-context ();
// (signal) ::GdkGLContext* /*full*/ create-context ();
gi::signal_proxy<Gdk::GLContext(Gtk::GLArea)> signal_create_context()
{ return gi::signal_proxy<Gdk::GLContext(Gtk::GLArea)> (*this, "create-context"); }

// (signal) gboolean render ( context /*none*/);
// (signal) gboolean render (::GdkGLContext* context /*none*/);
gi::signal_proxy<bool(Gtk::GLArea, Gdk::GLContext context)> signal_render()
{ return gi::signal_proxy<bool(Gtk::GLArea, Gdk::GLContext context)> (*this, "render"); }

// (signal) void resize (gint width, gint height);
// (signal) void resize (gint width, gint height);
gi::signal_proxy<void(Gtk::GLArea, gint width, gint height)> signal_resize()
{ return gi::signal_proxy<void(Gtk::GLArea, gint width, gint height)> (*this, "resize"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/glarea_extra_def.hpp>)
#include <gtk/glarea_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/glarea_extra.hpp>)
#include <gtk/glarea_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GLArea : public GI_GTK_GLAREA_BASE
{ typedef GI_GTK_GLAREA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGLArea>
{ typedef Gtk::GLArea type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class GLAreaClassDef
{
typedef GLAreaClassDef self;
public:
typedef Gtk::GLArea instance_type;
typedef ::GtkGLAreaClass class_type;

using GI_MEMBER_CHECK_CONFLICT(render) = self;
using GI_MEMBER_CHECK_CONFLICT(resize) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~GLAreaClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean GLArea::render (GtkGLArea* area /*none*/, GdkGLContext* context /*none*/);
// gboolean GLArea::render (::GtkGLArea* area /*none*/, ::GdkGLContext* context /*none*/);
virtual bool render_ (Gdk::GLContext context) noexcept = 0;

// void GLArea::resize (GtkGLArea* area /*none*/, int width, int height);
// void GLArea::resize (::GtkGLArea* area /*none*/, gint width, gint height);
virtual void resize_ (gint width, gint height) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class GLAreaClass: public detail::ClassTemplate<Gtk::impl::internal::GLAreaClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::GLAreaClassDef;
typedef GLAreaClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::GLAreaClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean GLArea::render (GtkGLArea* area /*none*/, GdkGLContext* context /*none*/);
// gboolean GLArea::render (::GtkGLArea* area /*none*/, ::GdkGLContext* context /*none*/);
GI_INLINE_DECL bool render_ (Gdk::GLContext context) noexcept override;

// void GLArea::resize (GtkGLArea* area /*none*/, int width, int height);
// void GLArea::resize (::GtkGLArea* area /*none*/, gint width, gint height);
GI_INLINE_DECL void resize_ (gint width, gint height) noexcept override;


};


struct GLAreaClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(GLAreaClass, render)
  GI_MEMBER_DEFINE(GLAreaClass, resize)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, render),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, resize)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using GLAreaImpl = detail::ObjectImpl<GLArea, internal::GLAreaClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
