// AUTO-GENERATED

#ifndef _GI_GTK_SPINNER_HPP_
#define _GI_GTK_SPINNER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Spinner;

namespace base {


#define GI_GTK_SPINNER_BASE base::SpinnerBase
class SpinnerBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSpinner BaseObjectType;

SpinnerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_spinner_get_type(); } 

// GtkWidget* /*none*/ gtk_spinner_new ();
// ::GtkSpinner* /*none*/ gtk_spinner_new ();
static GI_INLINE_DECL Gtk::Spinner new_ () noexcept;

// gboolean gtk_spinner_get_spinning (GtkSpinner* spinner /*none*/);
// gboolean gtk_spinner_get_spinning (::GtkSpinner* spinner /*none*/);
GI_INLINE_DECL bool get_spinning () noexcept;

// void gtk_spinner_set_spinning (GtkSpinner* spinner /*none*/, gboolean spinning);
// void gtk_spinner_set_spinning (::GtkSpinner* spinner /*none*/, gboolean spinning);
GI_INLINE_DECL void set_spinning (gboolean spinning) noexcept;

// void gtk_spinner_start (GtkSpinner* spinner /*none*/);
// void gtk_spinner_start (::GtkSpinner* spinner /*none*/);
GI_INLINE_DECL void start () noexcept;

// void gtk_spinner_stop (GtkSpinner* spinner /*none*/);
// void gtk_spinner_stop (::GtkSpinner* spinner /*none*/);
GI_INLINE_DECL void stop () noexcept;

gi::property_proxy<bool, base::SpinnerBase> property_spinning()
{ return gi::property_proxy<bool, base::SpinnerBase> (*this, "spinning"); }
const gi::property_proxy<bool, base::SpinnerBase> property_spinning() const
{ return gi::property_proxy<bool, base::SpinnerBase> (*this, "spinning"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra_def.hpp>)
#include <gtk/spinner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra.hpp>)
#include <gtk/spinner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Spinner : public GI_GTK_SPINNER_BASE
{ typedef GI_GTK_SPINNER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSpinner>
{ typedef Gtk::Spinner type; }; 

} // namespace repository

} // namespace gi

#endif
