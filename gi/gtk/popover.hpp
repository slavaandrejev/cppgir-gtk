// AUTO-GENERATED

#ifndef _GI_GTK_POPOVER_HPP_
#define _GI_GTK_POPOVER_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Native;
class ShortcutManager;
class Widget;

class Popover;

namespace base {


#define GI_GTK_POPOVER_BASE base::PopoverBase
class PopoverBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkPopover BaseObjectType;

PopoverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_popover_get_type(); } 

GI_INLINE_DECL Gtk::Native interface_ (gi::interface_tag<Gtk::Native>);

GI_INLINE_DECL operator Gtk::Native ();

GI_INLINE_DECL Gtk::ShortcutManager interface_ (gi::interface_tag<Gtk::ShortcutManager>);

GI_INLINE_DECL operator Gtk::ShortcutManager ();

// GtkWidget* /*none*/ gtk_popover_new ();
// ::GtkPopover* /*none*/ gtk_popover_new ();
static GI_INLINE_DECL Gtk::Popover new_ () noexcept;

// gboolean gtk_popover_get_autohide (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_autohide (::GtkPopover* popover /*none*/);
GI_INLINE_DECL bool get_autohide () noexcept;

// gboolean gtk_popover_get_cascade_popdown (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_cascade_popdown (::GtkPopover* popover /*none*/);
GI_INLINE_DECL bool get_cascade_popdown () noexcept;

// GtkWidget* /*none,nullable*/ gtk_popover_get_child (GtkPopover* popover /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_popover_get_child (::GtkPopover* popover /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// gboolean gtk_popover_get_has_arrow (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_has_arrow (::GtkPopover* popover /*none*/);
GI_INLINE_DECL bool get_has_arrow () noexcept;

// gboolean gtk_popover_get_mnemonics_visible (GtkPopover* popover /*none*/);
// gboolean gtk_popover_get_mnemonics_visible (::GtkPopover* popover /*none*/);
GI_INLINE_DECL bool get_mnemonics_visible () noexcept;

// void gtk_popover_get_offset (GtkPopover* popover /*none*/, int* x_offset, int* y_offset);
// void gtk_popover_get_offset (::GtkPopover* popover /*none*/, gint* x_offset, gint* y_offset);
GI_INLINE_DECL void get_offset (gint * x_offset, gint * y_offset) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_offset () noexcept;

// gboolean gtk_popover_get_pointing_to (GtkPopover* popover /*none*/, GdkRectangle* rect /*none,out,ca*/);
// gboolean gtk_popover_get_pointing_to (::GtkPopover* popover /*none*/, ::GdkRectangle* rect /*none,out,ca*/);
GI_INLINE_DECL bool get_pointing_to (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_pointing_to () noexcept;

// GtkPositionType gtk_popover_get_position (GtkPopover* popover /*none*/);
// ::GtkPositionType gtk_popover_get_position (::GtkPopover* popover /*none*/);
GI_INLINE_DECL Gtk::PositionType get_position () noexcept;

// void gtk_popover_popdown (GtkPopover* popover /*none*/);
// void gtk_popover_popdown (::GtkPopover* popover /*none*/);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_popover_popup (GtkPopover* popover /*none*/);
// void gtk_popover_popup (::GtkPopover* popover /*none*/);
GI_INLINE_DECL void popup () noexcept;

// void gtk_popover_present (GtkPopover* popover /*none*/);
// void gtk_popover_present (::GtkPopover* popover /*none*/);
GI_INLINE_DECL void present () noexcept;

// void gtk_popover_set_autohide (GtkPopover* popover /*none*/, gboolean autohide);
// void gtk_popover_set_autohide (::GtkPopover* popover /*none*/, gboolean autohide);
GI_INLINE_DECL void set_autohide (gboolean autohide) noexcept;

// void gtk_popover_set_cascade_popdown (GtkPopover* popover /*none*/, gboolean cascade_popdown);
// void gtk_popover_set_cascade_popdown (::GtkPopover* popover /*none*/, gboolean cascade_popdown);
GI_INLINE_DECL void set_cascade_popdown (gboolean cascade_popdown) noexcept;

// void gtk_popover_set_child (GtkPopover* popover /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_popover_set_child (::GtkPopover* popover /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

// void gtk_popover_set_default_widget (GtkPopover* popover /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_popover_set_default_widget (::GtkPopover* popover /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_default_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_default_widget () noexcept;

// void gtk_popover_set_has_arrow (GtkPopover* popover /*none*/, gboolean has_arrow);
// void gtk_popover_set_has_arrow (::GtkPopover* popover /*none*/, gboolean has_arrow);
GI_INLINE_DECL void set_has_arrow (gboolean has_arrow) noexcept;

// void gtk_popover_set_mnemonics_visible (GtkPopover* popover /*none*/, gboolean mnemonics_visible);
// void gtk_popover_set_mnemonics_visible (::GtkPopover* popover /*none*/, gboolean mnemonics_visible);
GI_INLINE_DECL void set_mnemonics_visible (gboolean mnemonics_visible) noexcept;

// void gtk_popover_set_offset (GtkPopover* popover /*none*/, int x_offset, int y_offset);
// void gtk_popover_set_offset (::GtkPopover* popover /*none*/, gint x_offset, gint y_offset);
GI_INLINE_DECL void set_offset (gint x_offset, gint y_offset) noexcept;

// void gtk_popover_set_pointing_to (GtkPopover* popover /*none*/, const GdkRectangle* rect /*none,nullable*/);
// void gtk_popover_set_pointing_to (::GtkPopover* popover /*none*/, const ::GdkRectangle* rect /*none,nullable*/);
GI_INLINE_DECL void set_pointing_to (const Gdk::Rectangle_Ref rect) noexcept;
GI_INLINE_DECL void set_pointing_to () noexcept;

// void gtk_popover_set_position (GtkPopover* popover /*none*/, GtkPositionType position);
// void gtk_popover_set_position (::GtkPopover* popover /*none*/, ::GtkPositionType position);
GI_INLINE_DECL void set_position (Gtk::PositionType position) noexcept;

gi::property_proxy<bool, base::PopoverBase> property_autohide()
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "autohide"); }
const gi::property_proxy<bool, base::PopoverBase> property_autohide() const
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "autohide"); }

gi::property_proxy<bool, base::PopoverBase> property_cascade_popdown()
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "cascade-popdown"); }
const gi::property_proxy<bool, base::PopoverBase> property_cascade_popdown() const
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "cascade-popdown"); }

gi::property_proxy<Gtk::Widget, base::PopoverBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::PopoverBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::PopoverBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::PopoverBase> (*this, "child"); }

gi::property_proxy<Gtk::Widget, base::PopoverBase> property_default_widget()
{ return gi::property_proxy<Gtk::Widget, base::PopoverBase> (*this, "default-widget"); }
const gi::property_proxy<Gtk::Widget, base::PopoverBase> property_default_widget() const
{ return gi::property_proxy<Gtk::Widget, base::PopoverBase> (*this, "default-widget"); }

gi::property_proxy<bool, base::PopoverBase> property_has_arrow()
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "has-arrow"); }
const gi::property_proxy<bool, base::PopoverBase> property_has_arrow() const
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "has-arrow"); }

gi::property_proxy<bool, base::PopoverBase> property_mnemonics_visible()
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "mnemonics-visible"); }
const gi::property_proxy<bool, base::PopoverBase> property_mnemonics_visible() const
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "mnemonics-visible"); }

gi::property_proxy<Gdk::Rectangle, base::PopoverBase> property_pointing_to()
{ return gi::property_proxy<Gdk::Rectangle, base::PopoverBase> (*this, "pointing-to"); }
const gi::property_proxy<Gdk::Rectangle, base::PopoverBase> property_pointing_to() const
{ return gi::property_proxy<Gdk::Rectangle, base::PopoverBase> (*this, "pointing-to"); }

gi::property_proxy<Gtk::PositionType, base::PopoverBase> property_position()
{ return gi::property_proxy<Gtk::PositionType, base::PopoverBase> (*this, "position"); }
const gi::property_proxy<Gtk::PositionType, base::PopoverBase> property_position() const
{ return gi::property_proxy<Gtk::PositionType, base::PopoverBase> (*this, "position"); }

// (signal) void activate-default ();
// (signal) void activate-default ();
gi::signal_proxy<void(Gtk::Popover)> signal_activate_default()
{ return gi::signal_proxy<void(Gtk::Popover)> (*this, "activate-default"); }

// (signal) void closed ();
// (signal) void closed ();
gi::signal_proxy<void(Gtk::Popover)> signal_closed()
{ return gi::signal_proxy<void(Gtk::Popover)> (*this, "closed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popover_extra_def.hpp>)
#include <gtk/popover_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popover_extra.hpp>)
#include <gtk/popover_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Popover : public GI_GTK_POPOVER_BASE
{ typedef GI_GTK_POPOVER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPopover>
{ typedef Gtk::Popover type; }; 

} // namespace repository

} // namespace gi

#include "shortcutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PopoverClassDef
{
typedef PopoverClassDef self;
public:
typedef Gtk::Popover instance_type;
typedef ::GtkPopoverClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate_default) = self;
using GI_MEMBER_CHECK_CONFLICT(closed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~PopoverClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Popover::activate_default (GtkPopover* popover /*none*/);
// void Popover::activate_default (::GtkPopover* popover /*none*/);
virtual void activate_default_ () noexcept = 0;

// void Popover::closed (GtkPopover* popover /*none*/);
// void Popover::closed (::GtkPopover* popover /*none*/);
virtual void closed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PopoverClass: public detail::ClassTemplate<Gtk::impl::internal::PopoverClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ShortcutManagerInterfaceClassImpl>
{
friend class internal::PopoverClassDef;
typedef PopoverClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PopoverClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ShortcutManagerInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ShortcutManagerInterfaceClassImpl GtkShortcutManagerInterface_type;


// void Popover::activate_default (GtkPopover* popover /*none*/);
// void Popover::activate_default (::GtkPopover* popover /*none*/);
GI_INLINE_DECL void activate_default_ () noexcept override;

// void Popover::closed (GtkPopover* popover /*none*/);
// void Popover::closed (::GtkPopover* popover /*none*/);
GI_INLINE_DECL void closed_ () noexcept override;


};


struct PopoverClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(PopoverClass, activate_default)
  GI_MEMBER_DEFINE(PopoverClass, closed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate_default),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, closed)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using PopoverImpl = detail::ObjectImpl<Popover, internal::PopoverClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
