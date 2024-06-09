// AUTO-GENERATED

#ifndef _GI_GTK_DRAGICON_HPP_
#define _GI_GTK_DRAGICON_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Native;
class Root;
class Widget;

class DragIcon;

namespace base {


#define GI_GTK_DRAGICON_BASE base::DragIconBase
class DragIconBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkDragIcon BaseObjectType;

DragIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drag_icon_get_type(); } 

GI_INLINE_DECL Gtk::Native interface_ (gi::interface_tag<Gtk::Native>);

GI_INLINE_DECL operator Gtk::Native ();

GI_INLINE_DECL Gtk::Root interface_ (gi::interface_tag<Gtk::Root>);

GI_INLINE_DECL operator Gtk::Root ();

// GtkWidget* /*full,nullable*/ gtk_drag_icon_create_widget_for_value (const GValue* value /*none*/);
// ::GtkWidget* /*full,nullable*/ gtk_drag_icon_create_widget_for_value (const ::GValue* value /*none*/);
static GI_INLINE_DECL Gtk::Widget create_widget_for_value (const GObject::Value_Ref value) noexcept;

// GtkWidget* /*none*/ gtk_drag_icon_get_for_drag (GdkDrag* drag /*none*/);
// ::GtkWidget* /*none*/ gtk_drag_icon_get_for_drag (::GdkDrag* drag /*none*/);
static GI_INLINE_DECL Gtk::Widget get_for_drag (Gdk::Drag drag) noexcept;

// void gtk_drag_icon_set_from_paintable (GdkDrag* drag /*none*/, GdkPaintable* paintable /*none*/, int hot_x, int hot_y);
// void gtk_drag_icon_set_from_paintable (::GdkDrag* drag /*none*/, ::GdkPaintable* paintable /*none*/, gint hot_x, gint hot_y);
static GI_INLINE_DECL void set_from_paintable (Gdk::Drag drag, Gdk::Paintable paintable, gint hot_x, gint hot_y) noexcept;

// GtkWidget* /*none,nullable*/ gtk_drag_icon_get_child (GtkDragIcon* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_drag_icon_get_child (::GtkDragIcon* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// void gtk_drag_icon_set_child (GtkDragIcon* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_drag_icon_set_child (::GtkDragIcon* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

gi::property_proxy<Gtk::Widget, base::DragIconBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::DragIconBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::DragIconBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::DragIconBase> (*this, "child"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dragicon_extra_def.hpp>)
#include <gtk/dragicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dragicon_extra.hpp>)
#include <gtk/dragicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DragIcon : public GI_GTK_DRAGICON_BASE
{ typedef GI_GTK_DRAGICON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDragIcon>
{ typedef Gtk::DragIcon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DragIconClassDef
{
typedef DragIconClassDef self;
public:
typedef Gtk::DragIcon instance_type;
typedef ::GtkDragIconClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DragIconClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DragIconClass: public detail::ClassTemplate<Gtk::impl::internal::DragIconClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::DragIconClassDef;
typedef DragIconClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DragIconClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct DragIconClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using DragIconImpl = detail::ObjectImpl<DragIcon, internal::DragIconClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
