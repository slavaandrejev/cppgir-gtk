// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERCOMBO_HPP_
#define _GI_GTK_CELLRENDERERCOMBO_HPP_

#include "cellrenderertext.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreeIter_Ref;
class TreeModel;

class CellRendererCombo;

namespace base {


#define GI_GTK_CELLRENDERERCOMBO_BASE base::CellRendererComboBase
class CellRendererComboBase : public Gtk::CellRendererText
{
typedef Gtk::CellRendererText super_type;
public:
typedef ::GtkCellRendererCombo BaseObjectType;

CellRendererComboBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_combo_get_type(); } 

// GtkCellRenderer* /*none*/ gtk_cell_renderer_combo_new ();
// ::GtkCellRendererCombo* /*none*/ gtk_cell_renderer_combo_new ();
static GI_INLINE_DECL Gtk::CellRendererCombo new_ () noexcept;

gi::property_proxy<bool, base::CellRendererComboBase> property_has_entry()
{ return gi::property_proxy<bool, base::CellRendererComboBase> (*this, "has-entry"); }
const gi::property_proxy<bool, base::CellRendererComboBase> property_has_entry() const
{ return gi::property_proxy<bool, base::CellRendererComboBase> (*this, "has-entry"); }

gi::property_proxy<Gtk::TreeModel, base::CellRendererComboBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::CellRendererComboBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::CellRendererComboBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::CellRendererComboBase> (*this, "model"); }

gi::property_proxy<gint, base::CellRendererComboBase> property_text_column()
{ return gi::property_proxy<gint, base::CellRendererComboBase> (*this, "text-column"); }
const gi::property_proxy<gint, base::CellRendererComboBase> property_text_column() const
{ return gi::property_proxy<gint, base::CellRendererComboBase> (*this, "text-column"); }

// (signal) void changed (gchar* path_string /*none*/,  new_iter /*none*/);
// (signal) void changed (char* path_string /*none*/, ::GtkTreeIter* new_iter /*none*/);
gi::signal_proxy<void(Gtk::CellRendererCombo, gi::cstring_v path_string, Gtk::TreeIter_Ref new_iter)> signal_changed()
{ return gi::signal_proxy<void(Gtk::CellRendererCombo, gi::cstring_v path_string, Gtk::TreeIter_Ref new_iter)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderercombo_extra_def.hpp>)
#include <gtk/cellrenderercombo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderercombo_extra.hpp>)
#include <gtk/cellrenderercombo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererCombo : public GI_GTK_CELLRENDERERCOMBO_BASE
{ typedef GI_GTK_CELLRENDERERCOMBO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererCombo>
{ typedef Gtk::CellRendererCombo type; }; 

} // namespace repository

} // namespace gi

#endif
