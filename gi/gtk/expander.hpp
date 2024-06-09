// AUTO-GENERATED

#ifndef _GI_GTK_EXPANDER_HPP_
#define _GI_GTK_EXPANDER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Expander;

namespace base {


#define GI_GTK_EXPANDER_BASE base::ExpanderBase
class ExpanderBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkExpander BaseObjectType;

ExpanderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_expander_get_type(); } 

// GtkWidget* /*none*/ gtk_expander_new (const char* label /*none,nullable*/);
// ::GtkExpander* /*none*/ gtk_expander_new (const char* label /*none,nullable*/);
static GI_INLINE_DECL Gtk::Expander new_ (const gi::cstring_v label) noexcept;
static GI_INLINE_DECL Gtk::Expander new_ () noexcept;

// GtkWidget* /*none*/ gtk_expander_new_with_mnemonic (const char* label /*none,nullable*/);
// ::GtkExpander* /*none*/ gtk_expander_new_with_mnemonic (const char* label /*none,nullable*/);
static GI_INLINE_DECL Gtk::Expander new_with_mnemonic (const gi::cstring_v label) noexcept;
static GI_INLINE_DECL Gtk::Expander new_with_mnemonic () noexcept;

// GtkWidget* /*none,nullable*/ gtk_expander_get_child (GtkExpander* expander /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_expander_get_child (::GtkExpander* expander /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_expander_get_expanded (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_expanded (::GtkExpander* expander /*none*/);
GI_INLINE_DECL bool get_expanded () noexcept;

// const char* /*none,nullable*/ gtk_expander_get_label (GtkExpander* expander /*none*/);
// const char* /*none,nullable*/ gtk_expander_get_label (::GtkExpander* expander /*none*/);
GI_INLINE_DECL gi::cstring_v get_label () noexcept;

// GtkWidget* /*none,nullable*/ gtk_expander_get_label_widget (GtkExpander* expander /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_expander_get_label_widget (::GtkExpander* expander /*none*/);
GI_INLINE_DECL Gtk::Widget get_label_widget () noexcept;

// gboolean gtk_expander_get_resize_toplevel (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_resize_toplevel (::GtkExpander* expander /*none*/);
GI_INLINE_DECL bool get_resize_toplevel () noexcept;

// gboolean gtk_expander_get_use_markup (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_use_markup (::GtkExpander* expander /*none*/);
GI_INLINE_DECL bool get_use_markup () noexcept;

// gboolean gtk_expander_get_use_underline (GtkExpander* expander /*none*/);
// gboolean gtk_expander_get_use_underline (::GtkExpander* expander /*none*/);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_expander_set_child (GtkExpander* expander /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_expander_set_child (::GtkExpander* expander /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_expander_set_expanded (GtkExpander* expander /*none*/, gboolean expanded);
// void gtk_expander_set_expanded (::GtkExpander* expander /*none*/, gboolean expanded);
GI_INLINE_DECL void set_expanded (gboolean expanded) noexcept;

// void gtk_expander_set_label (GtkExpander* expander /*none*/, const char* label /*none,nullable*/);
// void gtk_expander_set_label (::GtkExpander* expander /*none*/, const char* label /*none,nullable*/);
GI_INLINE_DECL void set_label (const gi::cstring_v label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void gtk_expander_set_label_widget (GtkExpander* expander /*none*/, GtkWidget* label_widget /*none,nullable*/);
// void gtk_expander_set_label_widget (::GtkExpander* expander /*none*/, ::GtkWidget* label_widget /*none,nullable*/);
GI_INLINE_DECL void set_label_widget (Gtk::Widget label_widget) noexcept;
GI_INLINE_DECL void set_label_widget () noexcept;

// void gtk_expander_set_resize_toplevel (GtkExpander* expander /*none*/, gboolean resize_toplevel);
// void gtk_expander_set_resize_toplevel (::GtkExpander* expander /*none*/, gboolean resize_toplevel);
GI_INLINE_DECL void set_resize_toplevel (gboolean resize_toplevel) noexcept;

// void gtk_expander_set_use_markup (GtkExpander* expander /*none*/, gboolean use_markup);
// void gtk_expander_set_use_markup (::GtkExpander* expander /*none*/, gboolean use_markup);
GI_INLINE_DECL void set_use_markup (gboolean use_markup) noexcept;

// void gtk_expander_set_use_underline (GtkExpander* expander /*none*/, gboolean use_underline);
// void gtk_expander_set_use_underline (::GtkExpander* expander /*none*/, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<Gtk::Widget, base::ExpanderBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::ExpanderBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::ExpanderBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::ExpanderBase> (*this, "child"); }

gi::property_proxy<bool, base::ExpanderBase> property_expanded()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "expanded"); }
const gi::property_proxy<bool, base::ExpanderBase> property_expanded() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "expanded"); }

gi::property_proxy<gi::cstring, base::ExpanderBase> property_label()
{ return gi::property_proxy<gi::cstring, base::ExpanderBase> (*this, "label"); }
const gi::property_proxy<gi::cstring, base::ExpanderBase> property_label() const
{ return gi::property_proxy<gi::cstring, base::ExpanderBase> (*this, "label"); }

gi::property_proxy<Gtk::Widget, base::ExpanderBase> property_label_widget()
{ return gi::property_proxy<Gtk::Widget, base::ExpanderBase> (*this, "label-widget"); }
const gi::property_proxy<Gtk::Widget, base::ExpanderBase> property_label_widget() const
{ return gi::property_proxy<Gtk::Widget, base::ExpanderBase> (*this, "label-widget"); }

gi::property_proxy<bool, base::ExpanderBase> property_resize_toplevel()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "resize-toplevel"); }
const gi::property_proxy<bool, base::ExpanderBase> property_resize_toplevel() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "resize-toplevel"); }

gi::property_proxy<bool, base::ExpanderBase> property_use_markup()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::ExpanderBase> property_use_markup() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-markup"); }

gi::property_proxy<bool, base::ExpanderBase> property_use_underline()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ExpanderBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-underline"); }

// (signal) void activate ();
// (signal) void activate ();
gi::signal_proxy<void(Gtk::Expander)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Expander)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expander_extra_def.hpp>)
#include <gtk/expander_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expander_extra.hpp>)
#include <gtk/expander_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Expander : public GI_GTK_EXPANDER_BASE
{ typedef GI_GTK_EXPANDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkExpander>
{ typedef Gtk::Expander type; }; 

} // namespace repository

} // namespace gi

#endif
