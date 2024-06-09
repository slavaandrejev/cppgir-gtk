// AUTO-GENERATED

#ifndef _GI_GTK_DRAGSOURCE_HPP_
#define _GI_GTK_DRAGSOURCE_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class DragSource;

namespace base {


#define GI_GTK_DRAGSOURCE_BASE base::DragSourceBase
class DragSourceBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkDragSource BaseObjectType;

DragSourceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drag_source_get_type(); } 

// GtkDragSource* /*full*/ gtk_drag_source_new ();
// ::GtkDragSource* /*full*/ gtk_drag_source_new ();
static GI_INLINE_DECL Gtk::DragSource new_ () noexcept;

// void gtk_drag_source_drag_cancel (GtkDragSource* source /*none*/);
// void gtk_drag_source_drag_cancel (::GtkDragSource* source /*none*/);
GI_INLINE_DECL void drag_cancel () noexcept;

// GdkDragAction gtk_drag_source_get_actions (GtkDragSource* source /*none*/);
// ::GdkDragAction gtk_drag_source_get_actions (::GtkDragSource* source /*none*/);
GI_INLINE_DECL Gdk::DragAction get_actions () noexcept;

// GdkContentProvider* /*none,nullable*/ gtk_drag_source_get_content (GtkDragSource* source /*none*/);
// ::GdkContentProvider* /*none,nullable*/ gtk_drag_source_get_content (::GtkDragSource* source /*none*/);
GI_INLINE_DECL Gdk::ContentProvider get_content () noexcept;

// GdkDrag* /*none,nullable*/ gtk_drag_source_get_drag (GtkDragSource* source /*none*/);
// ::GdkDrag* /*none,nullable*/ gtk_drag_source_get_drag (::GtkDragSource* source /*none*/);
GI_INLINE_DECL Gdk::Drag get_drag () noexcept;

// void gtk_drag_source_set_actions (GtkDragSource* source /*none*/, GdkDragAction actions);
// void gtk_drag_source_set_actions (::GtkDragSource* source /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void set_actions (Gdk::DragAction actions) noexcept;

// void gtk_drag_source_set_content (GtkDragSource* source /*none*/, GdkContentProvider* content /*none,nullable*/);
// void gtk_drag_source_set_content (::GtkDragSource* source /*none*/, ::GdkContentProvider* content /*none,nullable*/);
GI_INLINE_DECL void set_content (Gdk::ContentProvider content) noexcept;
GI_INLINE_DECL void set_content () noexcept;

// void gtk_drag_source_set_icon (GtkDragSource* source /*none*/, GdkPaintable* paintable /*none,nullable*/, int hot_x, int hot_y);
// void gtk_drag_source_set_icon (::GtkDragSource* source /*none*/, ::GdkPaintable* paintable /*none,nullable*/, gint hot_x, gint hot_y);
GI_INLINE_DECL void set_icon (Gdk::Paintable paintable, gint hot_x, gint hot_y) noexcept;
GI_INLINE_DECL void set_icon (gint hot_x, gint hot_y) noexcept;

gi::property_proxy<Gdk::DragAction, base::DragSourceBase> property_actions()
{ return gi::property_proxy<Gdk::DragAction, base::DragSourceBase> (*this, "actions"); }
const gi::property_proxy<Gdk::DragAction, base::DragSourceBase> property_actions() const
{ return gi::property_proxy<Gdk::DragAction, base::DragSourceBase> (*this, "actions"); }

gi::property_proxy<Gdk::ContentProvider, base::DragSourceBase> property_content()
{ return gi::property_proxy<Gdk::ContentProvider, base::DragSourceBase> (*this, "content"); }
const gi::property_proxy<Gdk::ContentProvider, base::DragSourceBase> property_content() const
{ return gi::property_proxy<Gdk::ContentProvider, base::DragSourceBase> (*this, "content"); }

// (signal) void drag-begin ( drag /*none*/);
// (signal) void drag-begin (::GdkDrag* drag /*none*/);
gi::signal_proxy<void(Gtk::DragSource, Gdk::Drag drag)> signal_drag_begin()
{ return gi::signal_proxy<void(Gtk::DragSource, Gdk::Drag drag)> (*this, "drag-begin"); }

// (signal) gboolean drag-cancel ( drag /*none*/,  reason);
// (signal) gboolean drag-cancel (::GdkDrag* drag /*none*/, ::GdkDragCancelReason reason);
gi::signal_proxy<bool(Gtk::DragSource, Gdk::Drag drag, Gdk::DragCancelReason reason)> signal_drag_cancel()
{ return gi::signal_proxy<bool(Gtk::DragSource, Gdk::Drag drag, Gdk::DragCancelReason reason)> (*this, "drag-cancel"); }

// (signal) void drag-end ( drag /*none*/, gboolean delete_data);
// (signal) void drag-end (::GdkDrag* drag /*none*/, gboolean delete_data);
gi::signal_proxy<void(Gtk::DragSource, Gdk::Drag drag, gboolean delete_data)> signal_drag_end()
{ return gi::signal_proxy<void(Gtk::DragSource, Gdk::Drag drag, gboolean delete_data)> (*this, "drag-end"); }

// (signal)  /*full,nullable*/ prepare (gdouble x, gdouble y);
// (signal) ::GdkContentProvider* /*full,nullable*/ prepare (gdouble x, gdouble y);
gi::signal_proxy<Gdk::ContentProvider(Gtk::DragSource, gdouble x, gdouble y)> signal_prepare()
{ return gi::signal_proxy<Gdk::ContentProvider(Gtk::DragSource, gdouble x, gdouble y)> (*this, "prepare"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/dragsource_extra_def.hpp>)
#include <gtk/dragsource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/dragsource_extra.hpp>)
#include <gtk/dragsource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DragSource : public GI_GTK_DRAGSOURCE_BASE
{ typedef GI_GTK_DRAGSOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDragSource>
{ typedef Gtk::DragSource type; }; 

} // namespace repository

} // namespace gi

#endif
