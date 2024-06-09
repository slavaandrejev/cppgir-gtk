// AUTO-GENERATED

#ifndef _GI_GTK_LEVELBAR_HPP_
#define _GI_GTK_LEVELBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleRange;
class Orientable;

class LevelBar;

namespace base {


#define GI_GTK_LEVELBAR_BASE base::LevelBarBase
class LevelBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkLevelBar BaseObjectType;

LevelBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_level_bar_get_type(); } 

GI_INLINE_DECL Gtk::AccessibleRange interface_ (gi::interface_tag<Gtk::AccessibleRange>);

GI_INLINE_DECL operator Gtk::AccessibleRange ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_level_bar_new ();
// ::GtkLevelBar* /*none*/ gtk_level_bar_new ();
static GI_INLINE_DECL Gtk::LevelBar new_ () noexcept;

// GtkWidget* /*none*/ gtk_level_bar_new_for_interval (double min_value, double max_value);
// ::GtkLevelBar* /*none*/ gtk_level_bar_new_for_interval (gdouble min_value, gdouble max_value);
static GI_INLINE_DECL Gtk::LevelBar new_for_interval (gdouble min_value, gdouble max_value) noexcept;

// void gtk_level_bar_add_offset_value (GtkLevelBar* self /*none*/, const char* name /*none*/, double value);
// void gtk_level_bar_add_offset_value (::GtkLevelBar* self /*none*/, const char* name /*none*/, gdouble value);
GI_INLINE_DECL void add_offset_value (const gi::cstring_v name, gdouble value) noexcept;

// gboolean gtk_level_bar_get_inverted (GtkLevelBar* self /*none*/);
// gboolean gtk_level_bar_get_inverted (::GtkLevelBar* self /*none*/);
GI_INLINE_DECL bool get_inverted () noexcept;

// double gtk_level_bar_get_max_value (GtkLevelBar* self /*none*/);
// gdouble gtk_level_bar_get_max_value (::GtkLevelBar* self /*none*/);
GI_INLINE_DECL gdouble get_max_value () noexcept;

// double gtk_level_bar_get_min_value (GtkLevelBar* self /*none*/);
// gdouble gtk_level_bar_get_min_value (::GtkLevelBar* self /*none*/);
GI_INLINE_DECL gdouble get_min_value () noexcept;

// GtkLevelBarMode gtk_level_bar_get_mode (GtkLevelBar* self /*none*/);
// ::GtkLevelBarMode gtk_level_bar_get_mode (::GtkLevelBar* self /*none*/);
GI_INLINE_DECL Gtk::LevelBarMode get_mode () noexcept;

// gboolean gtk_level_bar_get_offset_value (GtkLevelBar* self /*none*/, const char* name /*none,nullable*/, double* value);
// gboolean gtk_level_bar_get_offset_value (::GtkLevelBar* self /*none*/, const char* name /*none,nullable*/, gdouble* value);
GI_INLINE_DECL bool get_offset_value (const gi::cstring_v name, gdouble & value) noexcept;
GI_INLINE_DECL bool get_offset_value (gdouble & value) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_offset_value (const gi::cstring_v name) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_offset_value () noexcept;

// double gtk_level_bar_get_value (GtkLevelBar* self /*none*/);
// gdouble gtk_level_bar_get_value (::GtkLevelBar* self /*none*/);
GI_INLINE_DECL gdouble get_value () noexcept;

// void gtk_level_bar_remove_offset_value (GtkLevelBar* self /*none*/, const char* name /*none,nullable*/);
// void gtk_level_bar_remove_offset_value (::GtkLevelBar* self /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void remove_offset_value (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void remove_offset_value () noexcept;

// void gtk_level_bar_set_inverted (GtkLevelBar* self /*none*/, gboolean inverted);
// void gtk_level_bar_set_inverted (::GtkLevelBar* self /*none*/, gboolean inverted);
GI_INLINE_DECL void set_inverted (gboolean inverted) noexcept;

// void gtk_level_bar_set_max_value (GtkLevelBar* self /*none*/, double value);
// void gtk_level_bar_set_max_value (::GtkLevelBar* self /*none*/, gdouble value);
GI_INLINE_DECL void set_max_value (gdouble value) noexcept;

// void gtk_level_bar_set_min_value (GtkLevelBar* self /*none*/, double value);
// void gtk_level_bar_set_min_value (::GtkLevelBar* self /*none*/, gdouble value);
GI_INLINE_DECL void set_min_value (gdouble value) noexcept;

// void gtk_level_bar_set_mode (GtkLevelBar* self /*none*/, GtkLevelBarMode mode);
// void gtk_level_bar_set_mode (::GtkLevelBar* self /*none*/, ::GtkLevelBarMode mode);
GI_INLINE_DECL void set_mode (Gtk::LevelBarMode mode) noexcept;

// void gtk_level_bar_set_value (GtkLevelBar* self /*none*/, double value);
// void gtk_level_bar_set_value (::GtkLevelBar* self /*none*/, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

gi::property_proxy<bool, base::LevelBarBase> property_inverted()
{ return gi::property_proxy<bool, base::LevelBarBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::LevelBarBase> property_inverted() const
{ return gi::property_proxy<bool, base::LevelBarBase> (*this, "inverted"); }

gi::property_proxy<gdouble, base::LevelBarBase> property_max_value()
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "max-value"); }
const gi::property_proxy<gdouble, base::LevelBarBase> property_max_value() const
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "max-value"); }

gi::property_proxy<gdouble, base::LevelBarBase> property_min_value()
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "min-value"); }
const gi::property_proxy<gdouble, base::LevelBarBase> property_min_value() const
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "min-value"); }

gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> property_mode()
{ return gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> (*this, "mode"); }
const gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> property_mode() const
{ return gi::property_proxy<Gtk::LevelBarMode, base::LevelBarBase> (*this, "mode"); }

gi::property_proxy<gdouble, base::LevelBarBase> property_value()
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::LevelBarBase> property_value() const
{ return gi::property_proxy<gdouble, base::LevelBarBase> (*this, "value"); }

// (signal) void offset-changed (gchar* name /*none*/);
// (signal) void offset-changed (char* name /*none*/);
gi::signal_proxy<void(Gtk::LevelBar, gi::cstring_v name)> signal_offset_changed()
{ return gi::signal_proxy<void(Gtk::LevelBar, gi::cstring_v name)> (*this, "offset-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/levelbar_extra_def.hpp>)
#include <gtk/levelbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/levelbar_extra.hpp>)
#include <gtk/levelbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LevelBar : public GI_GTK_LEVELBAR_BASE
{ typedef GI_GTK_LEVELBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLevelBar>
{ typedef Gtk::LevelBar type; }; 

} // namespace repository

} // namespace gi

#endif
