// AUTO-GENERATED

#ifndef _GI_GTK_PROGRESSBAR_HPP_
#define _GI_GTK_PROGRESSBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccessibleRange;
class Orientable;

class ProgressBar;

namespace base {


#define GI_GTK_PROGRESSBAR_BASE base::ProgressBarBase
class ProgressBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkProgressBar BaseObjectType;

ProgressBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_progress_bar_get_type(); } 

GI_INLINE_DECL Gtk::AccessibleRange interface_ (gi::interface_tag<Gtk::AccessibleRange>);

GI_INLINE_DECL operator Gtk::AccessibleRange ();

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_progress_bar_new ();
// ::GtkProgressBar* /*none*/ gtk_progress_bar_new ();
static GI_INLINE_DECL Gtk::ProgressBar new_ () noexcept;

// PangoEllipsizeMode gtk_progress_bar_get_ellipsize (GtkProgressBar* pbar /*none*/);
// ::PangoEllipsizeMode gtk_progress_bar_get_ellipsize (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// double gtk_progress_bar_get_fraction (GtkProgressBar* pbar /*none*/);
// gdouble gtk_progress_bar_get_fraction (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL gdouble get_fraction () noexcept;

// gboolean gtk_progress_bar_get_inverted (GtkProgressBar* pbar /*none*/);
// gboolean gtk_progress_bar_get_inverted (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL bool get_inverted () noexcept;

// double gtk_progress_bar_get_pulse_step (GtkProgressBar* pbar /*none*/);
// gdouble gtk_progress_bar_get_pulse_step (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL gdouble get_pulse_step () noexcept;

// gboolean gtk_progress_bar_get_show_text (GtkProgressBar* pbar /*none*/);
// gboolean gtk_progress_bar_get_show_text (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL bool get_show_text () noexcept;

// const char* /*none,nullable*/ gtk_progress_bar_get_text (GtkProgressBar* pbar /*none*/);
// const char* /*none,nullable*/ gtk_progress_bar_get_text (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// void gtk_progress_bar_pulse (GtkProgressBar* pbar /*none*/);
// void gtk_progress_bar_pulse (::GtkProgressBar* pbar /*none*/);
GI_INLINE_DECL void pulse () noexcept;

// void gtk_progress_bar_set_ellipsize (GtkProgressBar* pbar /*none*/, PangoEllipsizeMode mode);
// void gtk_progress_bar_set_ellipsize (::GtkProgressBar* pbar /*none*/, ::PangoEllipsizeMode mode);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode mode) noexcept;

// void gtk_progress_bar_set_fraction (GtkProgressBar* pbar /*none*/, double fraction);
// void gtk_progress_bar_set_fraction (::GtkProgressBar* pbar /*none*/, gdouble fraction);
GI_INLINE_DECL void set_fraction (gdouble fraction) noexcept;

// void gtk_progress_bar_set_inverted (GtkProgressBar* pbar /*none*/, gboolean inverted);
// void gtk_progress_bar_set_inverted (::GtkProgressBar* pbar /*none*/, gboolean inverted);
GI_INLINE_DECL void set_inverted (gboolean inverted) noexcept;

// void gtk_progress_bar_set_pulse_step (GtkProgressBar* pbar /*none*/, double fraction);
// void gtk_progress_bar_set_pulse_step (::GtkProgressBar* pbar /*none*/, gdouble fraction);
GI_INLINE_DECL void set_pulse_step (gdouble fraction) noexcept;

// void gtk_progress_bar_set_show_text (GtkProgressBar* pbar /*none*/, gboolean show_text);
// void gtk_progress_bar_set_show_text (::GtkProgressBar* pbar /*none*/, gboolean show_text);
GI_INLINE_DECL void set_show_text (gboolean show_text) noexcept;

// void gtk_progress_bar_set_text (GtkProgressBar* pbar /*none*/, const char* text /*none,nullable*/);
// void gtk_progress_bar_set_text (::GtkProgressBar* pbar /*none*/, const char* text /*none,nullable*/);
GI_INLINE_DECL void set_text (const gi::cstring_v text) noexcept;
GI_INLINE_DECL void set_text () noexcept;

gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> property_ellipsize()
{ return gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> (*this, "ellipsize"); }
const gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> property_ellipsize() const
{ return gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> (*this, "ellipsize"); }

gi::property_proxy<gdouble, base::ProgressBarBase> property_fraction()
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "fraction"); }
const gi::property_proxy<gdouble, base::ProgressBarBase> property_fraction() const
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "fraction"); }

gi::property_proxy<bool, base::ProgressBarBase> property_inverted()
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::ProgressBarBase> property_inverted() const
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "inverted"); }

gi::property_proxy<gdouble, base::ProgressBarBase> property_pulse_step()
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "pulse-step"); }
const gi::property_proxy<gdouble, base::ProgressBarBase> property_pulse_step() const
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "pulse-step"); }

gi::property_proxy<bool, base::ProgressBarBase> property_show_text()
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "show-text"); }
const gi::property_proxy<bool, base::ProgressBarBase> property_show_text() const
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "show-text"); }

gi::property_proxy<gi::cstring, base::ProgressBarBase> property_text()
{ return gi::property_proxy<gi::cstring, base::ProgressBarBase> (*this, "text"); }
const gi::property_proxy<gi::cstring, base::ProgressBarBase> property_text() const
{ return gi::property_proxy<gi::cstring, base::ProgressBarBase> (*this, "text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/progressbar_extra_def.hpp>)
#include <gtk/progressbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/progressbar_extra.hpp>)
#include <gtk/progressbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ProgressBar : public GI_GTK_PROGRESSBAR_BASE
{ typedef GI_GTK_PROGRESSBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkProgressBar>
{ typedef Gtk::ProgressBar type; }; 

} // namespace repository

} // namespace gi

#endif
