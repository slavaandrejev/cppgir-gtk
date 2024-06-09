// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATOR_HPP_
#define _GI_GTK_SEPARATOR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;

class Separator;

namespace base {


#define GI_GTK_SEPARATOR_BASE base::SeparatorBase
class SeparatorBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSeparator BaseObjectType;

SeparatorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_separator_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* /*none*/ gtk_separator_new (GtkOrientation orientation);
// ::GtkSeparator* /*none*/ gtk_separator_new (::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::Separator new_ (Gtk::Orientation orientation) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separator_extra_def.hpp>)
#include <gtk/separator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separator_extra.hpp>)
#include <gtk/separator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Separator : public GI_GTK_SEPARATOR_BASE
{ typedef GI_GTK_SEPARATOR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSeparator>
{ typedef Gtk::Separator type; }; 

} // namespace repository

} // namespace gi

#endif
