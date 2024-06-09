// AUTO-GENERATED

#ifndef _GI_GTK_STACK_HPP_
#define _GI_GTK_STACK_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class SelectionModel;
class StackPage;
class Widget;

class Stack;

namespace base {


#define GI_GTK_STACK_BASE base::StackBase
class StackBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkStack BaseObjectType;

StackBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_stack_get_type(); } 

// GtkWidget* /*none*/ gtk_stack_new ();
// ::GtkStack* /*none*/ gtk_stack_new ();
static GI_INLINE_DECL Gtk::Stack new_ () noexcept;

// GtkStackPage* /*none*/ gtk_stack_add_child (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// ::GtkStackPage* /*none*/ gtk_stack_add_child (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::StackPage add_child (Gtk::Widget child) noexcept;

// GtkStackPage* /*none*/ gtk_stack_add_named (GtkStack* stack /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/);
// ::GtkStackPage* /*none*/ gtk_stack_add_named (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL Gtk::StackPage add_named (Gtk::Widget child, const gi::cstring_v name) noexcept;
GI_INLINE_DECL Gtk::StackPage add_named (Gtk::Widget child) noexcept;

// GtkStackPage* /*none*/ gtk_stack_add_titled (GtkStack* stack /*none*/, GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
// ::GtkStackPage* /*none*/ gtk_stack_add_titled (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/, const char* name /*none,nullable*/, const char* title /*none*/);
GI_INLINE_DECL Gtk::StackPage add_titled (Gtk::Widget child, const gi::cstring_v name, const gi::cstring_v title) noexcept;
GI_INLINE_DECL Gtk::StackPage add_titled (Gtk::Widget child, const gi::cstring_v title) noexcept;

// GtkWidget* /*none,nullable*/ gtk_stack_get_child_by_name (GtkStack* stack /*none*/, const char* name /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_stack_get_child_by_name (::GtkStack* stack /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gtk::Widget get_child_by_name (const gi::cstring_v name) noexcept;

// gboolean gtk_stack_get_hhomogeneous (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_hhomogeneous (::GtkStack* stack /*none*/);
GI_INLINE_DECL bool get_hhomogeneous () noexcept;

// gboolean gtk_stack_get_interpolate_size (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_interpolate_size (::GtkStack* stack /*none*/);
GI_INLINE_DECL bool get_interpolate_size () noexcept;

// GtkStackPage* /*none*/ gtk_stack_get_page (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// ::GtkStackPage* /*none*/ gtk_stack_get_page (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::StackPage get_page (Gtk::Widget child) noexcept;

// GtkSelectionModel* /*full*/ gtk_stack_get_pages (GtkStack* stack /*none*/);
// ::GtkSelectionModel* /*full*/ gtk_stack_get_pages (::GtkStack* stack /*none*/);
GI_INLINE_DECL Gtk::SelectionModel get_pages () noexcept;

// guint gtk_stack_get_transition_duration (GtkStack* stack /*none*/);
// guint gtk_stack_get_transition_duration (::GtkStack* stack /*none*/);
GI_INLINE_DECL guint get_transition_duration () noexcept;

// gboolean gtk_stack_get_transition_running (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_transition_running (::GtkStack* stack /*none*/);
GI_INLINE_DECL bool get_transition_running () noexcept;

// GtkStackTransitionType gtk_stack_get_transition_type (GtkStack* stack /*none*/);
// ::GtkStackTransitionType gtk_stack_get_transition_type (::GtkStack* stack /*none*/);
GI_INLINE_DECL Gtk::StackTransitionType get_transition_type () noexcept;

// gboolean gtk_stack_get_vhomogeneous (GtkStack* stack /*none*/);
// gboolean gtk_stack_get_vhomogeneous (::GtkStack* stack /*none*/);
GI_INLINE_DECL bool get_vhomogeneous () noexcept;

// GtkWidget* /*none,nullable*/ gtk_stack_get_visible_child (GtkStack* stack /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_stack_get_visible_child (::GtkStack* stack /*none*/);
GI_INLINE_DECL Gtk::Widget get_visible_child () noexcept;

// const char* /*none,nullable*/ gtk_stack_get_visible_child_name (GtkStack* stack /*none*/);
// const char* /*none,nullable*/ gtk_stack_get_visible_child_name (::GtkStack* stack /*none*/);
GI_INLINE_DECL gi::cstring_v get_visible_child_name () noexcept;

// void gtk_stack_remove (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// void gtk_stack_remove (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget child) noexcept;

// void gtk_stack_set_hhomogeneous (GtkStack* stack /*none*/, gboolean hhomogeneous);
// void gtk_stack_set_hhomogeneous (::GtkStack* stack /*none*/, gboolean hhomogeneous);
GI_INLINE_DECL void set_hhomogeneous (gboolean hhomogeneous) noexcept;

// void gtk_stack_set_interpolate_size (GtkStack* stack /*none*/, gboolean interpolate_size);
// void gtk_stack_set_interpolate_size (::GtkStack* stack /*none*/, gboolean interpolate_size);
GI_INLINE_DECL void set_interpolate_size (gboolean interpolate_size) noexcept;

// void gtk_stack_set_transition_duration (GtkStack* stack /*none*/, guint duration);
// void gtk_stack_set_transition_duration (::GtkStack* stack /*none*/, guint duration);
GI_INLINE_DECL void set_transition_duration (guint duration) noexcept;

// void gtk_stack_set_transition_type (GtkStack* stack /*none*/, GtkStackTransitionType transition);
// void gtk_stack_set_transition_type (::GtkStack* stack /*none*/, ::GtkStackTransitionType transition);
GI_INLINE_DECL void set_transition_type (Gtk::StackTransitionType transition) noexcept;

// void gtk_stack_set_vhomogeneous (GtkStack* stack /*none*/, gboolean vhomogeneous);
// void gtk_stack_set_vhomogeneous (::GtkStack* stack /*none*/, gboolean vhomogeneous);
GI_INLINE_DECL void set_vhomogeneous (gboolean vhomogeneous) noexcept;

// void gtk_stack_set_visible_child (GtkStack* stack /*none*/, GtkWidget* child /*none*/);
// void gtk_stack_set_visible_child (::GtkStack* stack /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL void set_visible_child (Gtk::Widget child) noexcept;

// void gtk_stack_set_visible_child_full (GtkStack* stack /*none*/, const char* name /*none*/, GtkStackTransitionType transition);
// void gtk_stack_set_visible_child_full (::GtkStack* stack /*none*/, const char* name /*none*/, ::GtkStackTransitionType transition);
GI_INLINE_DECL void set_visible_child_full (const gi::cstring_v name, Gtk::StackTransitionType transition) noexcept;

// void gtk_stack_set_visible_child_name (GtkStack* stack /*none*/, const char* name /*none*/);
// void gtk_stack_set_visible_child_name (::GtkStack* stack /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_visible_child_name (const gi::cstring_v name) noexcept;

gi::property_proxy<bool, base::StackBase> property_hhomogeneous()
{ return gi::property_proxy<bool, base::StackBase> (*this, "hhomogeneous"); }
const gi::property_proxy<bool, base::StackBase> property_hhomogeneous() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "hhomogeneous"); }

gi::property_proxy<bool, base::StackBase> property_interpolate_size()
{ return gi::property_proxy<bool, base::StackBase> (*this, "interpolate-size"); }
const gi::property_proxy<bool, base::StackBase> property_interpolate_size() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "interpolate-size"); }

gi::property_proxy<Gtk::SelectionModel, base::StackBase> property_pages()
{ return gi::property_proxy<Gtk::SelectionModel, base::StackBase> (*this, "pages"); }
const gi::property_proxy<Gtk::SelectionModel, base::StackBase> property_pages() const
{ return gi::property_proxy<Gtk::SelectionModel, base::StackBase> (*this, "pages"); }

gi::property_proxy<guint, base::StackBase> property_transition_duration()
{ return gi::property_proxy<guint, base::StackBase> (*this, "transition-duration"); }
const gi::property_proxy<guint, base::StackBase> property_transition_duration() const
{ return gi::property_proxy<guint, base::StackBase> (*this, "transition-duration"); }

gi::property_proxy<bool, base::StackBase> property_transition_running()
{ return gi::property_proxy<bool, base::StackBase> (*this, "transition-running"); }
const gi::property_proxy<bool, base::StackBase> property_transition_running() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "transition-running"); }

gi::property_proxy<Gtk::StackTransitionType, base::StackBase> property_transition_type()
{ return gi::property_proxy<Gtk::StackTransitionType, base::StackBase> (*this, "transition-type"); }
const gi::property_proxy<Gtk::StackTransitionType, base::StackBase> property_transition_type() const
{ return gi::property_proxy<Gtk::StackTransitionType, base::StackBase> (*this, "transition-type"); }

gi::property_proxy<bool, base::StackBase> property_vhomogeneous()
{ return gi::property_proxy<bool, base::StackBase> (*this, "vhomogeneous"); }
const gi::property_proxy<bool, base::StackBase> property_vhomogeneous() const
{ return gi::property_proxy<bool, base::StackBase> (*this, "vhomogeneous"); }

gi::property_proxy<Gtk::Widget, base::StackBase> property_visible_child()
{ return gi::property_proxy<Gtk::Widget, base::StackBase> (*this, "visible-child"); }
const gi::property_proxy<Gtk::Widget, base::StackBase> property_visible_child() const
{ return gi::property_proxy<Gtk::Widget, base::StackBase> (*this, "visible-child"); }

gi::property_proxy<gi::cstring, base::StackBase> property_visible_child_name()
{ return gi::property_proxy<gi::cstring, base::StackBase> (*this, "visible-child-name"); }
const gi::property_proxy<gi::cstring, base::StackBase> property_visible_child_name() const
{ return gi::property_proxy<gi::cstring, base::StackBase> (*this, "visible-child-name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stack_extra_def.hpp>)
#include <gtk/stack_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stack_extra.hpp>)
#include <gtk/stack_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Stack : public GI_GTK_STACK_BASE
{ typedef GI_GTK_STACK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStack>
{ typedef Gtk::Stack type; }; 

} // namespace repository

} // namespace gi

#endif
