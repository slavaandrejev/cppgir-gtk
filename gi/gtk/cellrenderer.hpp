// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERER_HPP_
#define _GI_GTK_CELLRENDERER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CellEditable;
class Requisition;
class Requisition_Ref;
class Widget;

class CellRenderer;

namespace base {


#define GI_GTK_CELLRENDERER_BASE base::CellRendererBase
class CellRendererBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkCellRenderer BaseObjectType;

CellRendererBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_get_type(); } 

// gboolean gtk_cell_renderer_activate (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean gtk_cell_renderer_activate (::GtkCellRenderer* cell /*none*/,  event /*none*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_get_aligned_area (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkCellRendererState flags, const GdkRectangle* cell_area /*none*/, GdkRectangle* aligned_area /*none,out,ca*/);
// void gtk_cell_renderer_get_aligned_area (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* aligned_area /*none,out,ca*/);
GI_INLINE_DECL void get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle & aligned_area) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_aligned_area (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area) noexcept;

// void gtk_cell_renderer_get_alignment (GtkCellRenderer* cell /*none*/, float* xalign, float* yalign);
// void gtk_cell_renderer_get_alignment (::GtkCellRenderer* cell /*none*/, gfloat* xalign, gfloat* yalign);
GI_INLINE_DECL void get_alignment (gfloat * xalign, gfloat * yalign) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat> get_alignment () noexcept;

// void gtk_cell_renderer_get_fixed_size (GtkCellRenderer* cell /*none*/, int* width, int* height);
// void gtk_cell_renderer_get_fixed_size (::GtkCellRenderer* cell /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_fixed_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_fixed_size () noexcept;

// gboolean gtk_cell_renderer_get_is_expanded (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_is_expanded (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL bool get_is_expanded () noexcept;

// gboolean gtk_cell_renderer_get_is_expander (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_is_expander (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL bool get_is_expander () noexcept;

// void gtk_cell_renderer_get_padding (GtkCellRenderer* cell /*none*/, int* xpad, int* ypad);
// void gtk_cell_renderer_get_padding (::GtkCellRenderer* cell /*none*/, gint* xpad, gint* ypad);
GI_INLINE_DECL void get_padding (gint * xpad, gint * ypad) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_padding () noexcept;

// void gtk_cell_renderer_get_preferred_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void gtk_cell_renderer_get_preferred_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void get_preferred_height (Gtk::Widget widget, gint * minimum_size, gint * natural_size) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height (Gtk::Widget widget) noexcept;

// void gtk_cell_renderer_get_preferred_height_for_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void gtk_cell_renderer_get_preferred_height_for_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width (Gtk::Widget widget, gint width, gint * minimum_height, gint * natural_height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height_for_width (Gtk::Widget widget, gint width) noexcept;

// void gtk_cell_renderer_get_preferred_size (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkRequisition* minimum_size /*none,out,opt,ca*/, GtkRequisition* natural_size /*none,out,opt,ca*/);
// void gtk_cell_renderer_get_preferred_size (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkRequisition* minimum_size /*none,out,opt,ca*/, ::GtkRequisition* natural_size /*none,out,opt,ca*/);
GI_INLINE_DECL void get_preferred_size (Gtk::Widget widget, Gtk::Requisition * minimum_size, Gtk::Requisition * natural_size) noexcept;
GI_INLINE_DECL std::tuple<Gtk::Requisition, Gtk::Requisition> get_preferred_size (Gtk::Widget widget) noexcept;

// void gtk_cell_renderer_get_preferred_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void gtk_cell_renderer_get_preferred_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void get_preferred_width (Gtk::Widget widget, gint * minimum_size, gint * natural_size) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width (Gtk::Widget widget) noexcept;

// void gtk_cell_renderer_get_preferred_width_for_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void gtk_cell_renderer_get_preferred_width_for_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height (Gtk::Widget widget, gint height, gint * minimum_width, gint * natural_width) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width_for_height (Gtk::Widget widget, gint height) noexcept;

// GtkSizeRequestMode gtk_cell_renderer_get_request_mode (GtkCellRenderer* cell /*none*/);
// ::GtkSizeRequestMode gtk_cell_renderer_get_request_mode (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// gboolean gtk_cell_renderer_get_sensitive (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_sensitive (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL bool get_sensitive () noexcept;

// GtkStateFlags gtk_cell_renderer_get_state (GtkCellRenderer* cell /*none,nullable*/, GtkWidget* widget /*none,nullable*/, GtkCellRendererState cell_state);
// ::GtkStateFlags gtk_cell_renderer_get_state (::GtkCellRenderer* cell /*none,nullable*/, ::GtkWidget* widget /*none,nullable*/, ::GtkCellRendererState cell_state);
GI_INLINE_DECL Gtk::StateFlags get_state (Gtk::Widget widget, Gtk::CellRendererState cell_state) noexcept;
GI_INLINE_DECL Gtk::StateFlags get_state (Gtk::CellRendererState cell_state) noexcept;

// gboolean gtk_cell_renderer_get_visible (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_get_visible (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL bool get_visible () noexcept;

// gboolean gtk_cell_renderer_is_activatable (GtkCellRenderer* cell /*none*/);
// gboolean gtk_cell_renderer_is_activatable (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL bool is_activatable () noexcept;

// void gtk_cell_renderer_set_alignment (GtkCellRenderer* cell /*none*/, float xalign, float yalign);
// void gtk_cell_renderer_set_alignment (::GtkCellRenderer* cell /*none*/, gfloat xalign, gfloat yalign);
GI_INLINE_DECL void set_alignment (gfloat xalign, gfloat yalign) noexcept;

// void gtk_cell_renderer_set_fixed_size (GtkCellRenderer* cell /*none*/, int width, int height);
// void gtk_cell_renderer_set_fixed_size (::GtkCellRenderer* cell /*none*/, gint width, gint height);
GI_INLINE_DECL void set_fixed_size (gint width, gint height) noexcept;

// void gtk_cell_renderer_set_is_expanded (GtkCellRenderer* cell /*none*/, gboolean is_expanded);
// void gtk_cell_renderer_set_is_expanded (::GtkCellRenderer* cell /*none*/, gboolean is_expanded);
GI_INLINE_DECL void set_is_expanded (gboolean is_expanded) noexcept;

// void gtk_cell_renderer_set_is_expander (GtkCellRenderer* cell /*none*/, gboolean is_expander);
// void gtk_cell_renderer_set_is_expander (::GtkCellRenderer* cell /*none*/, gboolean is_expander);
GI_INLINE_DECL void set_is_expander (gboolean is_expander) noexcept;

// void gtk_cell_renderer_set_padding (GtkCellRenderer* cell /*none*/, int xpad, int ypad);
// void gtk_cell_renderer_set_padding (::GtkCellRenderer* cell /*none*/, gint xpad, gint ypad);
GI_INLINE_DECL void set_padding (gint xpad, gint ypad) noexcept;

// void gtk_cell_renderer_set_sensitive (GtkCellRenderer* cell /*none*/, gboolean sensitive);
// void gtk_cell_renderer_set_sensitive (::GtkCellRenderer* cell /*none*/, gboolean sensitive);
GI_INLINE_DECL void set_sensitive (gboolean sensitive) noexcept;

// void gtk_cell_renderer_set_visible (GtkCellRenderer* cell /*none*/, gboolean visible);
// void gtk_cell_renderer_set_visible (::GtkCellRenderer* cell /*none*/, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

// void gtk_cell_renderer_snapshot (GtkCellRenderer* cell /*none*/, GtkSnapshot* snapshot /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// void gtk_cell_renderer_snapshot (::GtkCellRenderer* cell /*none*/,  snapshot /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; snapshot type  not supported

// GtkCellEditable* /*none,nullable*/ gtk_cell_renderer_start_editing (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none,nullable*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// ::GtkCellEditable* /*none,nullable*/ gtk_cell_renderer_start_editing (::GtkCellRenderer* cell /*none*/,  event /*none,nullable*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void gtk_cell_renderer_stop_editing (GtkCellRenderer* cell /*none*/, gboolean canceled);
// void gtk_cell_renderer_stop_editing (::GtkCellRenderer* cell /*none*/, gboolean canceled);
GI_INLINE_DECL void stop_editing (gboolean canceled) noexcept;

gi::property_proxy_write<gi::cstring, base::CellRendererBase> property_cell_background()
{ return gi::property_proxy_write<gi::cstring, base::CellRendererBase> (*this, "cell-background"); }

gi::property_proxy<Gdk::RGBA, base::CellRendererBase> property_cell_background_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererBase> (*this, "cell-background-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::CellRendererBase> property_cell_background_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererBase> (*this, "cell-background-rgba"); }

gi::property_proxy<bool, base::CellRendererBase> property_cell_background_set()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "cell-background-set"); }
const gi::property_proxy<bool, base::CellRendererBase> property_cell_background_set() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "cell-background-set"); }

gi::property_proxy<bool, base::CellRendererBase> property_editing()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "editing"); }
const gi::property_proxy<bool, base::CellRendererBase> property_editing() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "editing"); }

gi::property_proxy<gint, base::CellRendererBase> property_height()
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "height"); }
const gi::property_proxy<gint, base::CellRendererBase> property_height() const
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "height"); }

gi::property_proxy<bool, base::CellRendererBase> property_is_expanded()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expanded"); }
const gi::property_proxy<bool, base::CellRendererBase> property_is_expanded() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expanded"); }

gi::property_proxy<bool, base::CellRendererBase> property_is_expander()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expander"); }
const gi::property_proxy<bool, base::CellRendererBase> property_is_expander() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "is-expander"); }

gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> property_mode()
{ return gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> (*this, "mode"); }
const gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> property_mode() const
{ return gi::property_proxy<Gtk::CellRendererMode, base::CellRendererBase> (*this, "mode"); }

gi::property_proxy<bool, base::CellRendererBase> property_sensitive()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "sensitive"); }
const gi::property_proxy<bool, base::CellRendererBase> property_sensitive() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "sensitive"); }

gi::property_proxy<bool, base::CellRendererBase> property_visible()
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "visible"); }
const gi::property_proxy<bool, base::CellRendererBase> property_visible() const
{ return gi::property_proxy<bool, base::CellRendererBase> (*this, "visible"); }

gi::property_proxy<gint, base::CellRendererBase> property_width()
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "width"); }
const gi::property_proxy<gint, base::CellRendererBase> property_width() const
{ return gi::property_proxy<gint, base::CellRendererBase> (*this, "width"); }

gi::property_proxy<gfloat, base::CellRendererBase> property_xalign()
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::CellRendererBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "xalign"); }

gi::property_proxy<guint, base::CellRendererBase> property_xpad()
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "xpad"); }
const gi::property_proxy<guint, base::CellRendererBase> property_xpad() const
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "xpad"); }

gi::property_proxy<gfloat, base::CellRendererBase> property_yalign()
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::CellRendererBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::CellRendererBase> (*this, "yalign"); }

gi::property_proxy<guint, base::CellRendererBase> property_ypad()
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "ypad"); }
const gi::property_proxy<guint, base::CellRendererBase> property_ypad() const
{ return gi::property_proxy<guint, base::CellRendererBase> (*this, "ypad"); }

// (signal) void editing-canceled ();
// (signal) void editing-canceled ();
gi::signal_proxy<void(Gtk::CellRenderer)> signal_editing_canceled()
{ return gi::signal_proxy<void(Gtk::CellRenderer)> (*this, "editing-canceled"); }

// (signal) void editing-started ( editable /*none*/, gchar* path /*none*/);
// (signal) void editing-started (::GtkCellEditable* editable /*none*/, char* path /*none*/);
gi::signal_proxy<void(Gtk::CellRenderer, Gtk::CellEditable editable, gi::cstring_v path)> signal_editing_started()
{ return gi::signal_proxy<void(Gtk::CellRenderer, Gtk::CellEditable editable, gi::cstring_v path)> (*this, "editing-started"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra_def.hpp>)
#include <gtk/cellrenderer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderer_extra.hpp>)
#include <gtk/cellrenderer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRenderer : public GI_GTK_CELLRENDERER_BASE
{ typedef GI_GTK_CELLRENDERER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRenderer>
{ typedef Gtk::CellRenderer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererClassDef
{
typedef CellRendererClassDef self;
public:
typedef Gtk::CellRenderer instance_type;
typedef ::GtkCellRendererClass class_type;

using GI_MEMBER_CHECK_CONFLICT(editing_canceled) = self;
using GI_MEMBER_CHECK_CONFLICT(editing_started) = self;
using GI_MEMBER_CHECK_CONFLICT(get_aligned_area) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_height) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_height_for_width) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_width) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preferred_width_for_height) = self;
using GI_MEMBER_CHECK_CONFLICT(get_request_mode) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~CellRendererClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean CellRenderer::activate (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean CellRenderer::activate (::GtkCellRenderer* cell /*none*/,  event /*none*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void CellRenderer::editing_canceled (GtkCellRenderer* cell /*none*/);
// void CellRenderer::editing_canceled (::GtkCellRenderer* cell /*none*/);
virtual void editing_canceled_ () noexcept = 0;

// void CellRenderer::editing_started (GtkCellRenderer* cell /*none*/, GtkCellEditable* editable /*none*/, const char* path /*none*/);
// void CellRenderer::editing_started (::GtkCellRenderer* cell /*none*/, ::GtkCellEditable* editable /*none*/, const char* path /*none*/);
virtual void editing_started_ (Gtk::CellEditable editable, const gi::cstring_v path) noexcept = 0;

// void CellRenderer::get_aligned_area (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkCellRendererState flags, const GdkRectangle* cell_area /*none*/, GdkRectangle* aligned_area /*none,out,ca*/);
// void CellRenderer::get_aligned_area (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* aligned_area /*none,out,ca*/);
virtual void get_aligned_area_ (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle_Ref aligned_area) noexcept = 0;

// void CellRenderer::get_preferred_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void CellRenderer::get_preferred_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
virtual void get_preferred_height_ (Gtk::Widget widget, gint & minimum_size, gint & natural_size) noexcept = 0;

// void CellRenderer::get_preferred_height_for_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void CellRenderer::get_preferred_height_for_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
virtual void get_preferred_height_for_width_ (Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height) noexcept = 0;

// void CellRenderer::get_preferred_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void CellRenderer::get_preferred_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
virtual void get_preferred_width_ (Gtk::Widget widget, gint & minimum_size, gint & natural_size) noexcept = 0;

// void CellRenderer::get_preferred_width_for_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void CellRenderer::get_preferred_width_for_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
virtual void get_preferred_width_for_height_ (Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width) noexcept = 0;

// GtkSizeRequestMode CellRenderer::get_request_mode (GtkCellRenderer* cell /*none*/);
// ::GtkSizeRequestMode CellRenderer::get_request_mode (::GtkCellRenderer* cell /*none*/);
virtual Gtk::SizeRequestMode get_request_mode_ () noexcept = 0;

// void CellRenderer::snapshot (GtkCellRenderer* cell /*none*/, GtkSnapshot* snapshot /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// void CellRenderer::snapshot (::GtkCellRenderer* cell /*none*/,  snapshot /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; snapshot type  not supported

// GtkCellEditable* /*none,nullable*/ CellRenderer::start_editing (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none,nullable*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// ::GtkCellEditable* /*none,nullable*/ CellRenderer::start_editing (::GtkCellRenderer* cell /*none*/,  event /*none,nullable*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported


};

GI_CLASS_IMPL_BEGIN


class CellRendererClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
friend class internal::CellRendererClassDef;
typedef CellRendererClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean CellRenderer::activate (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// gboolean CellRenderer::activate (::GtkCellRenderer* cell /*none*/,  event /*none*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported

// void CellRenderer::editing_canceled (GtkCellRenderer* cell /*none*/);
// void CellRenderer::editing_canceled (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL void editing_canceled_ () noexcept override;

// void CellRenderer::editing_started (GtkCellRenderer* cell /*none*/, GtkCellEditable* editable /*none*/, const char* path /*none*/);
// void CellRenderer::editing_started (::GtkCellRenderer* cell /*none*/, ::GtkCellEditable* editable /*none*/, const char* path /*none*/);
GI_INLINE_DECL void editing_started_ (Gtk::CellEditable editable, const gi::cstring_v path) noexcept override;

// void CellRenderer::get_aligned_area (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, GtkCellRendererState flags, const GdkRectangle* cell_area /*none*/, GdkRectangle* aligned_area /*none,out,ca*/);
// void CellRenderer::get_aligned_area (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, ::GtkCellRendererState flags, const ::GdkRectangle* cell_area /*none*/, ::GdkRectangle* aligned_area /*none,out,ca*/);
GI_INLINE_DECL void get_aligned_area_ (Gtk::Widget widget, Gtk::CellRendererState flags, const Gdk::Rectangle_Ref cell_area, Gdk::Rectangle_Ref aligned_area) noexcept override;

// void CellRenderer::get_preferred_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void CellRenderer::get_preferred_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void get_preferred_height_ (Gtk::Widget widget, gint & minimum_size, gint & natural_size) noexcept override;

// void CellRenderer::get_preferred_height_for_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int width, int* minimum_height, int* natural_height);
// void CellRenderer::get_preferred_height_for_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width_ (Gtk::Widget widget, gint width, gint & minimum_height, gint & natural_height) noexcept override;

// void CellRenderer::get_preferred_width (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int* minimum_size, int* natural_size);
// void CellRenderer::get_preferred_width (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint* minimum_size, gint* natural_size);
GI_INLINE_DECL void get_preferred_width_ (Gtk::Widget widget, gint & minimum_size, gint & natural_size) noexcept override;

// void CellRenderer::get_preferred_width_for_height (GtkCellRenderer* cell /*none*/, GtkWidget* widget /*none*/, int height, int* minimum_width, int* natural_width);
// void CellRenderer::get_preferred_width_for_height (::GtkCellRenderer* cell /*none*/, ::GtkWidget* widget /*none*/, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height_ (Gtk::Widget widget, gint height, gint & minimum_width, gint & natural_width) noexcept override;

// GtkSizeRequestMode CellRenderer::get_request_mode (GtkCellRenderer* cell /*none*/);
// ::GtkSizeRequestMode CellRenderer::get_request_mode (::GtkCellRenderer* cell /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ () noexcept override;

// void CellRenderer::snapshot (GtkCellRenderer* cell /*none*/, GtkSnapshot* snapshot /*none*/, GtkWidget* widget /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// void CellRenderer::snapshot (::GtkCellRenderer* cell /*none*/,  snapshot /*none*/, ::GtkWidget* widget /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; snapshot type  not supported

// GtkCellEditable* /*none,nullable*/ CellRenderer::start_editing (GtkCellRenderer* cell /*none*/, GdkEvent* event /*none,nullable*/, GtkWidget* widget /*none*/, const char* path /*none*/, const GdkRectangle* background_area /*none*/, const GdkRectangle* cell_area /*none*/, GtkCellRendererState flags);
// ::GtkCellEditable* /*none,nullable*/ CellRenderer::start_editing (::GtkCellRenderer* cell /*none*/,  event /*none,nullable*/, ::GtkWidget* widget /*none*/, const char* path /*none*/, const ::GdkRectangle* background_area /*none*/, const ::GdkRectangle* cell_area /*none*/, ::GtkCellRendererState flags);
// SKIP; event type  not supported


};


struct CellRendererClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(CellRendererClass, editing_canceled)
  GI_MEMBER_DEFINE(CellRendererClass, editing_started)
  GI_MEMBER_DEFINE(CellRendererClass, get_aligned_area)
  GI_MEMBER_DEFINE(CellRendererClass, get_preferred_height)
  GI_MEMBER_DEFINE(CellRendererClass, get_preferred_height_for_width)
  GI_MEMBER_DEFINE(CellRendererClass, get_preferred_width)
  GI_MEMBER_DEFINE(CellRendererClass, get_preferred_width_for_height)
  GI_MEMBER_DEFINE(CellRendererClass, get_request_mode)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, editing_canceled),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, editing_started),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_aligned_area),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_height),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_height_for_width),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_width),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preferred_width_for_height),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_request_mode)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using CellRendererImpl = detail::ObjectImpl<CellRenderer, internal::CellRendererClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
