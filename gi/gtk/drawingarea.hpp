// AUTO-GENERATED

#ifndef _GI_GTK_DRAWINGAREA_HPP_
#define _GI_GTK_DRAWINGAREA_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class DrawingArea;

namespace base {


#define GI_GTK_DRAWINGAREA_BASE base::DrawingAreaBase
class DrawingAreaBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkDrawingArea BaseObjectType;

DrawingAreaBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drawing_area_get_type(); } 

// GtkWidget* /*none*/ gtk_drawing_area_new ();
// ::GtkDrawingArea* /*none*/ gtk_drawing_area_new ();
static GI_INLINE_DECL Gtk::DrawingArea new_ () noexcept;

// int gtk_drawing_area_get_content_height (GtkDrawingArea* self /*none*/);
// gint gtk_drawing_area_get_content_height (::GtkDrawingArea* self /*none*/);
GI_INLINE_DECL gint get_content_height () noexcept;

// int gtk_drawing_area_get_content_width (GtkDrawingArea* self /*none*/);
// gint gtk_drawing_area_get_content_width (::GtkDrawingArea* self /*none*/);
GI_INLINE_DECL gint get_content_width () noexcept;

// void gtk_drawing_area_set_content_height (GtkDrawingArea* self /*none*/, int height);
// void gtk_drawing_area_set_content_height (::GtkDrawingArea* self /*none*/, gint height);
GI_INLINE_DECL void set_content_height (gint height) noexcept;

// void gtk_drawing_area_set_content_width (GtkDrawingArea* self /*none*/, int width);
// void gtk_drawing_area_set_content_width (::GtkDrawingArea* self /*none*/, gint width);
GI_INLINE_DECL void set_content_width (gint width) noexcept;

// void gtk_drawing_area_set_draw_func (GtkDrawingArea* self /*none*/, GtkDrawingAreaDrawFunc draw_func /*none,nullable*/, gpointer user_data, GDestroyNotify destroy /*none*/);
// void gtk_drawing_area_set_draw_func (::GtkDrawingArea* self /*none*/, Gtk::DrawingAreaDrawFunc::cfunction_type draw_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type destroy /*none*/);
GI_INLINE_DECL void set_draw_func (Gtk::DrawingAreaDrawFunc draw_func) noexcept;

gi::property_proxy<gint, base::DrawingAreaBase> property_content_height()
{ return gi::property_proxy<gint, base::DrawingAreaBase> (*this, "content-height"); }
const gi::property_proxy<gint, base::DrawingAreaBase> property_content_height() const
{ return gi::property_proxy<gint, base::DrawingAreaBase> (*this, "content-height"); }

gi::property_proxy<gint, base::DrawingAreaBase> property_content_width()
{ return gi::property_proxy<gint, base::DrawingAreaBase> (*this, "content-width"); }
const gi::property_proxy<gint, base::DrawingAreaBase> property_content_width() const
{ return gi::property_proxy<gint, base::DrawingAreaBase> (*this, "content-width"); }

// (signal) void resize (gint width, gint height);
// (signal) void resize (gint width, gint height);
gi::signal_proxy<void(Gtk::DrawingArea, gint width, gint height)> signal_resize()
{ return gi::signal_proxy<void(Gtk::DrawingArea, gint width, gint height)> (*this, "resize"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra_def.hpp>)
#include <gtk/drawingarea_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra.hpp>)
#include <gtk/drawingarea_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DrawingArea : public GI_GTK_DRAWINGAREA_BASE
{ typedef GI_GTK_DRAWINGAREA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDrawingArea>
{ typedef Gtk::DrawingArea type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DrawingAreaClassDef
{
typedef DrawingAreaClassDef self;
public:
typedef Gtk::DrawingArea instance_type;
typedef ::GtkDrawingAreaClass class_type;

using GI_MEMBER_CHECK_CONFLICT(resize) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DrawingAreaClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DrawingArea::resize (GtkDrawingArea* area /*none*/, int width, int height);
// void DrawingArea::resize (::GtkDrawingArea* area /*none*/, gint width, gint height);
virtual void resize_ (gint width, gint height) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DrawingAreaClass: public detail::ClassTemplate<Gtk::impl::internal::DrawingAreaClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::DrawingAreaClassDef;
typedef DrawingAreaClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DrawingAreaClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void DrawingArea::resize (GtkDrawingArea* area /*none*/, int width, int height);
// void DrawingArea::resize (::GtkDrawingArea* area /*none*/, gint width, gint height);
GI_INLINE_DECL void resize_ (gint width, gint height) noexcept override;


};


struct DrawingAreaClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(DrawingAreaClass, resize)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, resize)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DrawingAreaImpl = detail::ObjectImpl<DrawingArea, internal::DrawingAreaClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
