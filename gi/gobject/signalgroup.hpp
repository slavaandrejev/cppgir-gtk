// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALGROUP_HPP_
#define _GI_GOBJECT_SIGNALGROUP_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class Closure;
class Closure_Ref;
class Object;

class SignalGroup;

namespace base {


#define GI_GOBJECT_SIGNALGROUP_BASE base::SignalGroupBase
class SignalGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSignalGroup BaseObjectType;

SignalGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_signal_group_get_type(); } 

// GSignalGroup* /*full*/ g_signal_group_new (GType target_type);
// ::GSignalGroup* /*full*/ g_signal_group_new (GType target_type);
static GI_INLINE_DECL GObject::SignalGroup new_ (GType target_type) noexcept;

// void g_signal_group_block (GSignalGroup* self /*none*/);
// void g_signal_group_block (::GSignalGroup* self /*none*/);
GI_INLINE_DECL void block () noexcept;

// void g_signal_group_connect (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data);
// void g_signal_group_connect (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_after (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data);
// void g_signal_group_connect_after (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_closure (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GClosure* closure /*none*/, gboolean after);
// void g_signal_group_connect_closure (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/, ::GClosure* closure /*none*/, gboolean after);
GI_INLINE_DECL void connect_closure (const gi::cstring_v detailed_signal, GObject::Closure_Ref closure, gboolean after) noexcept;

// void g_signal_group_connect_data (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data, GClosureNotify notify /*none*/, GConnectFlags flags);
// void g_signal_group_connect_data (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data,  notify /*none*/, ::GConnectFlags flags);
// SKIP; notify type  not supported, c_handler type  not supported

// void g_signal_group_connect_object (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer object, GConnectFlags flags);
// void g_signal_group_connect_object (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* object, ::GConnectFlags flags);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_group_connect_swapped (GSignalGroup* self /*none*/, const gchar* detailed_signal /*none*/, GCallback c_handler /*none*/, gpointer data);
// void g_signal_group_connect_swapped (::GSignalGroup* self /*none*/, const char* detailed_signal /*none*/,  c_handler /*none*/, void* data);
// SKIP; c_handler type  not supported

// gpointer /*full,nullable*/ g_signal_group_dup_target (GSignalGroup* self /*none*/);
// ::GObject* /*full,nullable*/ g_signal_group_dup_target (::GSignalGroup* self /*none*/);
GI_INLINE_DECL GObject::Object dup_target () noexcept;

// void g_signal_group_set_target (GSignalGroup* self /*none*/, gpointer target /*none,nullable*/);
// void g_signal_group_set_target (::GSignalGroup* self /*none*/, ::GObject* target /*none,nullable*/);
GI_INLINE_DECL void set_target (GObject::Object target) noexcept;
GI_INLINE_DECL void set_target () noexcept;

// void g_signal_group_unblock (GSignalGroup* self /*none*/);
// void g_signal_group_unblock (::GSignalGroup* self /*none*/);
GI_INLINE_DECL void unblock () noexcept;

gi::property_proxy<GObject::Object, base::SignalGroupBase> property_target()
{ return gi::property_proxy<GObject::Object, base::SignalGroupBase> (*this, "target"); }
const gi::property_proxy<GObject::Object, base::SignalGroupBase> property_target() const
{ return gi::property_proxy<GObject::Object, base::SignalGroupBase> (*this, "target"); }

gi::property_proxy<GType, base::SignalGroupBase> property_target_type()
{ return gi::property_proxy<GType, base::SignalGroupBase> (*this, "target-type"); }
const gi::property_proxy<GType, base::SignalGroupBase> property_target_type() const
{ return gi::property_proxy<GType, base::SignalGroupBase> (*this, "target-type"); }

// (signal) void bind ( instance /*none*/);
// (signal) void bind (::GObject* instance /*none*/);
gi::signal_proxy<void(GObject::SignalGroup, GObject::Object instance)> signal_bind()
{ return gi::signal_proxy<void(GObject::SignalGroup, GObject::Object instance)> (*this, "bind"); }

// (signal) void unbind ();
// (signal) void unbind ();
gi::signal_proxy<void(GObject::SignalGroup)> signal_unbind()
{ return gi::signal_proxy<void(GObject::SignalGroup)> (*this, "unbind"); }

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra_def.hpp>)
#include <gobject/signalgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalgroup_extra.hpp>)
#include <gobject/signalgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class SignalGroup : public GI_GOBJECT_SIGNALGROUP_BASE
{ typedef GI_GOBJECT_SIGNALGROUP_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GSignalGroup>
{ typedef GObject::SignalGroup type; }; 

} // namespace repository

} // namespace gi

#endif
