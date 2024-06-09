// AUTO-GENERATED

#ifndef _GI_GTK_DROPTARGETASYNC_HPP_
#define _GI_GTK_DROPTARGETASYNC_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class DropTargetAsync;

namespace base {


#define GI_GTK_DROPTARGETASYNC_BASE base::DropTargetAsyncBase
class DropTargetAsyncBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkDropTargetAsync BaseObjectType;

DropTargetAsyncBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drop_target_async_get_type(); } 

// GtkDropTargetAsync* /*full*/ gtk_drop_target_async_new (GdkContentFormats* formats /*full,nullable*/, GdkDragAction actions);
// ::GtkDropTargetAsync* /*full*/ gtk_drop_target_async_new (::GdkContentFormats* formats /*full,nullable*/, ::GdkDragAction actions);
static GI_INLINE_DECL Gtk::DropTargetAsync new_ (Gdk::ContentFormats formats, Gdk::DragAction actions) noexcept;
static GI_INLINE_DECL Gtk::DropTargetAsync new_ (Gdk::DragAction actions) noexcept;

// GdkDragAction gtk_drop_target_async_get_actions (GtkDropTargetAsync* self /*none*/);
// ::GdkDragAction gtk_drop_target_async_get_actions (::GtkDropTargetAsync* self /*none*/);
GI_INLINE_DECL Gdk::DragAction get_actions () noexcept;

// GdkContentFormats* /*full,nullable*/ gtk_drop_target_async_get_formats (GtkDropTargetAsync* self /*none*/);
// ::GdkContentFormats* /*full,nullable*/ gtk_drop_target_async_get_formats (::GtkDropTargetAsync* self /*none*/);
GI_INLINE_DECL Gdk::ContentFormats get_formats () noexcept;

// void gtk_drop_target_async_reject_drop (GtkDropTargetAsync* self /*none*/, GdkDrop* drop /*none*/);
// void gtk_drop_target_async_reject_drop (::GtkDropTargetAsync* self /*none*/, ::GdkDrop* drop /*none*/);
GI_INLINE_DECL void reject_drop (Gdk::Drop drop) noexcept;

// void gtk_drop_target_async_set_actions (GtkDropTargetAsync* self /*none*/, GdkDragAction actions);
// void gtk_drop_target_async_set_actions (::GtkDropTargetAsync* self /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void set_actions (Gdk::DragAction actions) noexcept;

// void gtk_drop_target_async_set_formats (GtkDropTargetAsync* self /*none*/, GdkContentFormats* formats /*none,nullable*/);
// void gtk_drop_target_async_set_formats (::GtkDropTargetAsync* self /*none*/, ::GdkContentFormats* formats /*none,nullable*/);
GI_INLINE_DECL void set_formats (Gdk::ContentFormats_Ref formats) noexcept;
GI_INLINE_DECL void set_formats () noexcept;

gi::property_proxy<Gdk::DragAction, base::DropTargetAsyncBase> property_actions()
{ return gi::property_proxy<Gdk::DragAction, base::DropTargetAsyncBase> (*this, "actions"); }
const gi::property_proxy<Gdk::DragAction, base::DropTargetAsyncBase> property_actions() const
{ return gi::property_proxy<Gdk::DragAction, base::DropTargetAsyncBase> (*this, "actions"); }

gi::property_proxy<Gdk::ContentFormats, base::DropTargetAsyncBase> property_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::DropTargetAsyncBase> (*this, "formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::DropTargetAsyncBase> property_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::DropTargetAsyncBase> (*this, "formats"); }

// (signal) gboolean accept ( drop /*none*/);
// (signal) gboolean accept (::GdkDrop* drop /*none*/);
gi::signal_proxy<bool(Gtk::DropTargetAsync, Gdk::Drop drop)> signal_accept()
{ return gi::signal_proxy<bool(Gtk::DropTargetAsync, Gdk::Drop drop)> (*this, "accept"); }

// (signal)  drag-enter ( drop /*none*/, gdouble x, gdouble y);
// (signal) ::GdkDragAction drag-enter (::GdkDrop* drop /*none*/, gdouble x, gdouble y);
gi::signal_proxy<Gdk::DragAction(Gtk::DropTargetAsync, Gdk::Drop drop, gdouble x, gdouble y)> signal_drag_enter()
{ return gi::signal_proxy<Gdk::DragAction(Gtk::DropTargetAsync, Gdk::Drop drop, gdouble x, gdouble y)> (*this, "drag-enter"); }

// (signal) void drag-leave ( drop /*none*/);
// (signal) void drag-leave (::GdkDrop* drop /*none*/);
gi::signal_proxy<void(Gtk::DropTargetAsync, Gdk::Drop drop)> signal_drag_leave()
{ return gi::signal_proxy<void(Gtk::DropTargetAsync, Gdk::Drop drop)> (*this, "drag-leave"); }

// (signal)  drag-motion ( drop /*none*/, gdouble x, gdouble y);
// (signal) ::GdkDragAction drag-motion (::GdkDrop* drop /*none*/, gdouble x, gdouble y);
gi::signal_proxy<Gdk::DragAction(Gtk::DropTargetAsync, Gdk::Drop drop, gdouble x, gdouble y)> signal_drag_motion()
{ return gi::signal_proxy<Gdk::DragAction(Gtk::DropTargetAsync, Gdk::Drop drop, gdouble x, gdouble y)> (*this, "drag-motion"); }

// (signal) gboolean drop ( drop /*none*/, gdouble x, gdouble y);
// (signal) gboolean drop (::GdkDrop* drop /*none*/, gdouble x, gdouble y);
gi::signal_proxy<bool(Gtk::DropTargetAsync, Gdk::Drop drop, gdouble x, gdouble y)> signal_drop()
{ return gi::signal_proxy<bool(Gtk::DropTargetAsync, Gdk::Drop drop, gdouble x, gdouble y)> (*this, "drop"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/droptargetasync_extra_def.hpp>)
#include <gtk/droptargetasync_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/droptargetasync_extra.hpp>)
#include <gtk/droptargetasync_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DropTargetAsync : public GI_GTK_DROPTARGETASYNC_BASE
{ typedef GI_GTK_DROPTARGETASYNC_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDropTargetAsync>
{ typedef Gtk::DropTargetAsync type; }; 

} // namespace repository

} // namespace gi

#endif
