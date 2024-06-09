// AUTO-GENERATED

#ifndef _GI_GTK_ROOT_HPP_
#define _GI_GTK_ROOT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Root;

namespace base {


#define GI_GTK_ROOT_BASE base::RootBase
class RootBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkRoot BaseObjectType;

RootBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_root_get_type(); } 

// GdkDisplay* /*none*/ gtk_root_get_display (GtkRoot* self /*none*/);
// ::GdkDisplay* /*none*/ gtk_root_get_display (::GtkRoot* self /*none*/);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GtkWidget* /*none,nullable*/ gtk_root_get_focus (GtkRoot* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_root_get_focus (::GtkRoot* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_focus () noexcept;

// void gtk_root_set_focus (GtkRoot* self /*none*/, GtkWidget* focus /*none,nullable*/);
// void gtk_root_set_focus (::GtkRoot* self /*none*/, ::GtkWidget* focus /*none,nullable*/);
GI_INLINE_DECL void set_focus (Gtk::Widget focus) noexcept;
GI_INLINE_DECL void set_focus () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/root_extra_def.hpp>)
#include <gtk/root_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/root_extra.hpp>)
#include <gtk/root_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Root : public GI_GTK_ROOT_BASE
{ typedef GI_GTK_ROOT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRoot>
{ typedef Gtk::Root type; }; 

} // namespace repository

} // namespace gi

#endif
