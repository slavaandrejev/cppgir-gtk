// AUTO-GENERATED

#ifndef _GI_GTK_DROPTARGET_HPP_
#define _GI_GTK_DROPTARGET_HPP_

#include "eventcontroller.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class DropTarget;

namespace base {


#define GI_GTK_DROPTARGET_BASE base::DropTargetBase
class DropTargetBase : public Gtk::EventController
{
typedef Gtk::EventController super_type;
public:
typedef ::GtkDropTarget BaseObjectType;

DropTargetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drop_target_get_type(); } 

// GtkDropTarget* /*full*/ gtk_drop_target_new (GType type, GdkDragAction actions);
// ::GtkDropTarget* /*full*/ gtk_drop_target_new (GType type, ::GdkDragAction actions);
static GI_INLINE_DECL Gtk::DropTarget new_ (GType type, Gdk::DragAction actions) noexcept;

// GdkDragAction gtk_drop_target_get_actions (GtkDropTarget* self /*none*/);
// ::GdkDragAction gtk_drop_target_get_actions (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL Gdk::DragAction get_actions () noexcept;

// GdkDrop* /*none,nullable*/ gtk_drop_target_get_current_drop (GtkDropTarget* self /*none*/);
// ::GdkDrop* /*none,nullable*/ gtk_drop_target_get_current_drop (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL Gdk::Drop get_current_drop () noexcept;

// GdkDrop* /*none,nullable*/ gtk_drop_target_get_drop (GtkDropTarget* self /*none*/);
// ::GdkDrop* /*none,nullable*/ gtk_drop_target_get_drop (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL Gdk::Drop get_drop () noexcept;

// GdkContentFormats* /*none,nullable*/ gtk_drop_target_get_formats (GtkDropTarget* self /*none*/);
// ::GdkContentFormats* /*none,nullable*/ gtk_drop_target_get_formats (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL Gdk::ContentFormats_Ref get_formats () noexcept;

// const GType* /*none,nullable*/ gtk_drop_target_get_gtypes (GtkDropTarget* self /*none*/, gsize* n_types);
// const GType* /*none,nullable*/ gtk_drop_target_get_gtypes (::GtkDropTarget* self /*none*/, gsize* n_types);
GI_INLINE_DECL gi::Collection<gi::DSpan, GType, gi::transfer_none_t> get_gtypes () noexcept;

// gboolean gtk_drop_target_get_preload (GtkDropTarget* self /*none*/);
// gboolean gtk_drop_target_get_preload (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL bool get_preload () noexcept;

// const GValue* /*none,nullable*/ gtk_drop_target_get_value (GtkDropTarget* self /*none*/);
// const ::GValue* /*none,nullable*/ gtk_drop_target_get_value (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL GObject::Value_Ref get_value () noexcept;

// void gtk_drop_target_reject (GtkDropTarget* self /*none*/);
// void gtk_drop_target_reject (::GtkDropTarget* self /*none*/);
GI_INLINE_DECL void reject () noexcept;

// void gtk_drop_target_set_actions (GtkDropTarget* self /*none*/, GdkDragAction actions);
// void gtk_drop_target_set_actions (::GtkDropTarget* self /*none*/, ::GdkDragAction actions);
GI_INLINE_DECL void set_actions (Gdk::DragAction actions) noexcept;

// void gtk_drop_target_set_gtypes (GtkDropTarget* self /*none*/, GType* types /*none,nullable*/, gsize n_types);
// void gtk_drop_target_set_gtypes (::GtkDropTarget* self /*none*/, GType* types /*none,nullable*/, gsize n_types);
GI_INLINE_DECL void set_gtypes (const GType * types, gsize n_types) noexcept;

// void gtk_drop_target_set_preload (GtkDropTarget* self /*none*/, gboolean preload);
// void gtk_drop_target_set_preload (::GtkDropTarget* self /*none*/, gboolean preload);
GI_INLINE_DECL void set_preload (gboolean preload) noexcept;

gi::property_proxy<Gdk::DragAction, base::DropTargetBase> property_actions()
{ return gi::property_proxy<Gdk::DragAction, base::DropTargetBase> (*this, "actions"); }
const gi::property_proxy<Gdk::DragAction, base::DropTargetBase> property_actions() const
{ return gi::property_proxy<Gdk::DragAction, base::DropTargetBase> (*this, "actions"); }

gi::property_proxy<Gdk::Drop, base::DropTargetBase> property_current_drop()
{ return gi::property_proxy<Gdk::Drop, base::DropTargetBase> (*this, "current-drop"); }
const gi::property_proxy<Gdk::Drop, base::DropTargetBase> property_current_drop() const
{ return gi::property_proxy<Gdk::Drop, base::DropTargetBase> (*this, "current-drop"); }

gi::property_proxy<Gdk::ContentFormats, base::DropTargetBase> property_formats()
{ return gi::property_proxy<Gdk::ContentFormats, base::DropTargetBase> (*this, "formats"); }
const gi::property_proxy<Gdk::ContentFormats, base::DropTargetBase> property_formats() const
{ return gi::property_proxy<Gdk::ContentFormats, base::DropTargetBase> (*this, "formats"); }

gi::property_proxy<bool, base::DropTargetBase> property_preload()
{ return gi::property_proxy<bool, base::DropTargetBase> (*this, "preload"); }
const gi::property_proxy<bool, base::DropTargetBase> property_preload() const
{ return gi::property_proxy<bool, base::DropTargetBase> (*this, "preload"); }

gi::property_proxy<GObject::Value, base::DropTargetBase> property_value()
{ return gi::property_proxy<GObject::Value, base::DropTargetBase> (*this, "value"); }
const gi::property_proxy<GObject::Value, base::DropTargetBase> property_value() const
{ return gi::property_proxy<GObject::Value, base::DropTargetBase> (*this, "value"); }

// (signal) gboolean accept ( drop /*none*/);
// (signal) gboolean accept (::GdkDrop* drop /*none*/);
gi::signal_proxy<bool(Gtk::DropTarget, Gdk::Drop drop)> signal_accept()
{ return gi::signal_proxy<bool(Gtk::DropTarget, Gdk::Drop drop)> (*this, "accept"); }

// (signal) gboolean drop ( value /*none*/, gdouble x, gdouble y);
// (signal) gboolean drop (::GValue* value /*none*/, gdouble x, gdouble y);
gi::signal_proxy<bool(Gtk::DropTarget, GObject::Value_Ref value, gdouble x, gdouble y)> signal_drop()
{ return gi::signal_proxy<bool(Gtk::DropTarget, GObject::Value_Ref value, gdouble x, gdouble y)> (*this, "drop"); }

// (signal)  enter (gdouble x, gdouble y);
// (signal) ::GdkDragAction enter (gdouble x, gdouble y);
gi::signal_proxy<Gdk::DragAction(Gtk::DropTarget, gdouble x, gdouble y)> signal_enter()
{ return gi::signal_proxy<Gdk::DragAction(Gtk::DropTarget, gdouble x, gdouble y)> (*this, "enter"); }

// (signal) void leave ();
// (signal) void leave ();
gi::signal_proxy<void(Gtk::DropTarget)> signal_leave()
{ return gi::signal_proxy<void(Gtk::DropTarget)> (*this, "leave"); }

// (signal)  motion (gdouble x, gdouble y);
// (signal) ::GdkDragAction motion (gdouble x, gdouble y);
gi::signal_proxy<Gdk::DragAction(Gtk::DropTarget, gdouble x, gdouble y)> signal_motion()
{ return gi::signal_proxy<Gdk::DragAction(Gtk::DropTarget, gdouble x, gdouble y)> (*this, "motion"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/droptarget_extra_def.hpp>)
#include <gtk/droptarget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/droptarget_extra.hpp>)
#include <gtk/droptarget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DropTarget : public GI_GTK_DROPTARGET_BASE
{ typedef GI_GTK_DROPTARGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDropTarget>
{ typedef Gtk::DropTarget type; }; 

} // namespace repository

} // namespace gi

#endif
