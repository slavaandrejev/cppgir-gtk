// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERTOGGLE_HPP_
#define _GI_GTK_CELLRENDERERTOGGLE_HPP_

#include "cellrenderer.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellRendererToggle;

namespace base {


#define GI_GTK_CELLRENDERERTOGGLE_BASE base::CellRendererToggleBase
class CellRendererToggleBase : public Gtk::CellRenderer
{
typedef Gtk::CellRenderer super_type;
public:
typedef ::GtkCellRendererToggle BaseObjectType;

CellRendererToggleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_toggle_get_type(); } 

// GtkCellRenderer* /*none*/ gtk_cell_renderer_toggle_new ();
// ::GtkCellRendererToggle* /*none*/ gtk_cell_renderer_toggle_new ();
static GI_INLINE_DECL Gtk::CellRendererToggle new_ () noexcept;

// gboolean gtk_cell_renderer_toggle_get_activatable (GtkCellRendererToggle* toggle /*none*/);
// gboolean gtk_cell_renderer_toggle_get_activatable (::GtkCellRendererToggle* toggle /*none*/);
GI_INLINE_DECL bool get_activatable () noexcept;

// gboolean gtk_cell_renderer_toggle_get_active (GtkCellRendererToggle* toggle /*none*/);
// gboolean gtk_cell_renderer_toggle_get_active (::GtkCellRendererToggle* toggle /*none*/);
GI_INLINE_DECL bool get_active () noexcept;

// gboolean gtk_cell_renderer_toggle_get_radio (GtkCellRendererToggle* toggle /*none*/);
// gboolean gtk_cell_renderer_toggle_get_radio (::GtkCellRendererToggle* toggle /*none*/);
GI_INLINE_DECL bool get_radio () noexcept;

// void gtk_cell_renderer_toggle_set_activatable (GtkCellRendererToggle* toggle /*none*/, gboolean setting);
// void gtk_cell_renderer_toggle_set_activatable (::GtkCellRendererToggle* toggle /*none*/, gboolean setting);
GI_INLINE_DECL void set_activatable (gboolean setting) noexcept;

// void gtk_cell_renderer_toggle_set_active (GtkCellRendererToggle* toggle /*none*/, gboolean setting);
// void gtk_cell_renderer_toggle_set_active (::GtkCellRendererToggle* toggle /*none*/, gboolean setting);
GI_INLINE_DECL void set_active (gboolean setting) noexcept;

// void gtk_cell_renderer_toggle_set_radio (GtkCellRendererToggle* toggle /*none*/, gboolean radio);
// void gtk_cell_renderer_toggle_set_radio (::GtkCellRendererToggle* toggle /*none*/, gboolean radio);
GI_INLINE_DECL void set_radio (gboolean radio) noexcept;

gi::property_proxy<bool, base::CellRendererToggleBase> property_activatable()
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "activatable"); }
const gi::property_proxy<bool, base::CellRendererToggleBase> property_activatable() const
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "activatable"); }

gi::property_proxy<bool, base::CellRendererToggleBase> property_active()
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "active"); }
const gi::property_proxy<bool, base::CellRendererToggleBase> property_active() const
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "active"); }

gi::property_proxy<bool, base::CellRendererToggleBase> property_inconsistent()
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "inconsistent"); }
const gi::property_proxy<bool, base::CellRendererToggleBase> property_inconsistent() const
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "inconsistent"); }

gi::property_proxy<bool, base::CellRendererToggleBase> property_radio()
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "radio"); }
const gi::property_proxy<bool, base::CellRendererToggleBase> property_radio() const
{ return gi::property_proxy<bool, base::CellRendererToggleBase> (*this, "radio"); }

// (signal) void toggled (gchar* path /*none*/);
// (signal) void toggled (char* path /*none*/);
gi::signal_proxy<void(Gtk::CellRendererToggle, gi::cstring_v path)> signal_toggled()
{ return gi::signal_proxy<void(Gtk::CellRendererToggle, gi::cstring_v path)> (*this, "toggled"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertoggle_extra_def.hpp>)
#include <gtk/cellrenderertoggle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertoggle_extra.hpp>)
#include <gtk/cellrenderertoggle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererToggle : public GI_GTK_CELLRENDERERTOGGLE_BASE
{ typedef GI_GTK_CELLRENDERERTOGGLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererToggle>
{ typedef Gtk::CellRendererToggle type; }; 

} // namespace repository

} // namespace gi

#endif
