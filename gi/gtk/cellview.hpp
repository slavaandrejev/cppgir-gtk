// AUTO-GENERATED

#ifndef _GI_GTK_CELLVIEW_HPP_
#define _GI_GTK_CELLVIEW_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellAreaContext;
class CellLayout;
class Orientable;
class TreeModel;
class TreePath;
class TreePath_Ref;

class CellView;

namespace base {


#define GI_GTK_CELLVIEW_BASE base::CellViewBase
class CellViewBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkCellView BaseObjectType;

CellViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_view_get_type(); } 

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_cell_view_new ();
// ::GtkCellView* /*none*/ gtk_cell_view_new ();
static GI_INLINE_DECL Gtk::CellView new_ () noexcept;

// GtkWidget* /*none*/ gtk_cell_view_new_with_context (GtkCellArea* area /*none*/, GtkCellAreaContext* context /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_context (::GtkCellArea* area /*none*/, ::GtkCellAreaContext* context /*none*/);
static GI_INLINE_DECL Gtk::CellView new_with_context (Gtk::CellArea area, Gtk::CellAreaContext context) noexcept;

// GtkWidget* /*none*/ gtk_cell_view_new_with_markup (const char* markup /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_markup (const char* markup /*none*/);
static GI_INLINE_DECL Gtk::CellView new_with_markup (const gi::cstring_v markup) noexcept;

// GtkWidget* /*none*/ gtk_cell_view_new_with_text (const char* text /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_text (const char* text /*none*/);
static GI_INLINE_DECL Gtk::CellView new_with_text (const gi::cstring_v text) noexcept;

// GtkWidget* /*none*/ gtk_cell_view_new_with_texture (GdkTexture* texture /*none*/);
// ::GtkCellView* /*none*/ gtk_cell_view_new_with_texture (::GdkTexture* texture /*none*/);
static GI_INLINE_DECL Gtk::CellView new_with_texture (Gdk::Texture texture) noexcept;

// GtkTreePath* /*full,nullable*/ gtk_cell_view_get_displayed_row (GtkCellView* cell_view /*none*/);
// ::GtkTreePath* /*full,nullable*/ gtk_cell_view_get_displayed_row (::GtkCellView* cell_view /*none*/);
GI_INLINE_DECL Gtk::TreePath get_displayed_row () noexcept;

// gboolean gtk_cell_view_get_draw_sensitive (GtkCellView* cell_view /*none*/);
// gboolean gtk_cell_view_get_draw_sensitive (::GtkCellView* cell_view /*none*/);
GI_INLINE_DECL bool get_draw_sensitive () noexcept;

// gboolean gtk_cell_view_get_fit_model (GtkCellView* cell_view /*none*/);
// gboolean gtk_cell_view_get_fit_model (::GtkCellView* cell_view /*none*/);
GI_INLINE_DECL bool get_fit_model () noexcept;

// GtkTreeModel* /*none,nullable*/ gtk_cell_view_get_model (GtkCellView* cell_view /*none*/);
// ::GtkTreeModel* /*none,nullable*/ gtk_cell_view_get_model (::GtkCellView* cell_view /*none*/);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// void gtk_cell_view_set_displayed_row (GtkCellView* cell_view /*none*/, GtkTreePath* path /*none,nullable*/);
// void gtk_cell_view_set_displayed_row (::GtkCellView* cell_view /*none*/, ::GtkTreePath* path /*none,nullable*/);
GI_INLINE_DECL void set_displayed_row (Gtk::TreePath_Ref path) noexcept;
GI_INLINE_DECL void set_displayed_row () noexcept;

// void gtk_cell_view_set_draw_sensitive (GtkCellView* cell_view /*none*/, gboolean draw_sensitive);
// void gtk_cell_view_set_draw_sensitive (::GtkCellView* cell_view /*none*/, gboolean draw_sensitive);
GI_INLINE_DECL void set_draw_sensitive (gboolean draw_sensitive) noexcept;

// void gtk_cell_view_set_fit_model (GtkCellView* cell_view /*none*/, gboolean fit_model);
// void gtk_cell_view_set_fit_model (::GtkCellView* cell_view /*none*/, gboolean fit_model);
GI_INLINE_DECL void set_fit_model (gboolean fit_model) noexcept;

// void gtk_cell_view_set_model (GtkCellView* cell_view /*none*/, GtkTreeModel* model /*none,nullable*/);
// void gtk_cell_view_set_model (::GtkCellView* cell_view /*none*/, ::GtkTreeModel* model /*none,nullable*/);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

gi::property_proxy<Gtk::CellArea, base::CellViewBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::CellViewBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::CellViewBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::CellViewBase> (*this, "cell-area"); }

gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> property_cell_area_context()
{ return gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> (*this, "cell-area-context"); }
const gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> property_cell_area_context() const
{ return gi::property_proxy<Gtk::CellAreaContext, base::CellViewBase> (*this, "cell-area-context"); }

gi::property_proxy<bool, base::CellViewBase> property_draw_sensitive()
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "draw-sensitive"); }
const gi::property_proxy<bool, base::CellViewBase> property_draw_sensitive() const
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "draw-sensitive"); }

gi::property_proxy<bool, base::CellViewBase> property_fit_model()
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "fit-model"); }
const gi::property_proxy<bool, base::CellViewBase> property_fit_model() const
{ return gi::property_proxy<bool, base::CellViewBase> (*this, "fit-model"); }

gi::property_proxy<Gtk::TreeModel, base::CellViewBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::CellViewBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::CellViewBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::CellViewBase> (*this, "model"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra_def.hpp>)
#include <gtk/cellview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra.hpp>)
#include <gtk/cellview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellView : public GI_GTK_CELLVIEW_BASE
{ typedef GI_GTK_CELLVIEW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellView>
{ typedef Gtk::CellView type; }; 

} // namespace repository

} // namespace gi

#endif
