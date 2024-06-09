// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONBAR_HPP_
#define _GI_GTK_ACTIONBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ActionBar;

namespace base {


#define GI_GTK_ACTIONBAR_BASE base::ActionBarBase
class ActionBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkActionBar BaseObjectType;

ActionBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_action_bar_get_type(); } 

// GtkWidget* /*none*/ gtk_action_bar_new ();
// ::GtkActionBar* /*none*/ gtk_action_bar_new ();
static GI_INLINE_DECL Gtk::ActionBar new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_action_bar_get_center_widget (GtkActionBar* action_bar /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_action_bar_get_center_widget (::GtkActionBar* action_bar /*none*/);
GI_INLINE_DECL Gtk::Widget get_center_widget () noexcept;

// gboolean gtk_action_bar_get_revealed (GtkActionBar* action_bar /*none*/);
// gboolean gtk_action_bar_get_revealed (::GtkActionBar* action_bar /*none*/);
GI_INLINE_DECL bool get_revealed () noexcept;

// void gtk_action_bar_pack_end (GtkActionBar* action_bar /*none*/, GtkWidget* child /*none*/);
// void gtk_action_bar_pack_end (::GtkActionBar* action_bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void pack_end (Gtk::Widget child) noexcept;

// void gtk_action_bar_pack_start (GtkActionBar* action_bar /*none*/, GtkWidget* child /*none*/);
// void gtk_action_bar_pack_start (::GtkActionBar* action_bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void pack_start (Gtk::Widget child) noexcept;

// void gtk_action_bar_remove (GtkActionBar* action_bar /*none*/, GtkWidget* child /*none*/);
// void gtk_action_bar_remove (::GtkActionBar* action_bar /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void gtk_action_bar_set_center_widget (GtkActionBar* action_bar /*none*/, GtkWidget* center_widget /*none,nullable*/);
// void gtk_action_bar_set_center_widget (::GtkActionBar* action_bar /*none*/, ::GtkWidget* center_widget /*none,nullable*/);
GI_INLINE_DECL void set_center_widget (Gtk::Widget center_widget) noexcept;
GI_INLINE_DECL void set_center_widget () noexcept;

// void gtk_action_bar_set_revealed (GtkActionBar* action_bar /*none*/, gboolean revealed);
// void gtk_action_bar_set_revealed (::GtkActionBar* action_bar /*none*/, gboolean revealed);
GI_INLINE_DECL void set_revealed (gboolean revealed) noexcept;

gi::property_proxy<bool, base::ActionBarBase> property_revealed()
{ return gi::property_proxy<bool, base::ActionBarBase> (*this, "revealed"); }
const gi::property_proxy<bool, base::ActionBarBase> property_revealed() const
{ return gi::property_proxy<bool, base::ActionBarBase> (*this, "revealed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionbar_extra_def.hpp>)
#include <gtk/actionbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionbar_extra.hpp>)
#include <gtk/actionbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ActionBar : public GI_GTK_ACTIONBAR_BASE
{ typedef GI_GTK_ACTIONBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActionBar>
{ typedef Gtk::ActionBar type; }; 

} // namespace repository

} // namespace gi

#endif
