// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAYMANAGER_HPP_
#define _GI_GDK_DISPLAYMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;

class DisplayManager;

namespace base {


#define GI_GDK_DISPLAYMANAGER_BASE base::DisplayManagerBase
class DisplayManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDisplayManager BaseObjectType;

DisplayManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_display_manager_get_type(); } 

// GdkDisplayManager* /*none*/ gdk_display_manager_get ();
// ::GdkDisplayManager* /*none*/ gdk_display_manager_get ();
static GI_INLINE_DECL Gdk::DisplayManager get () noexcept;

// GdkDisplay* /*none,nullable*/ gdk_display_manager_get_default_display (GdkDisplayManager* manager /*none*/);
// ::GdkDisplay* /*none,nullable*/ gdk_display_manager_get_default_display (::GdkDisplayManager* manager /*none*/);
GI_INLINE_DECL Gdk::Display get_default_display () noexcept;

// GSList* /*container*/ gdk_display_manager_list_displays (GdkDisplayManager* manager /*none*/);
// ::GSList* /*container*/ gdk_display_manager_list_displays (::GdkDisplayManager* manager /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::GdkDisplay*, gi::transfer_container_t> list_displays () noexcept;

// GdkDisplay* /*none,nullable*/ gdk_display_manager_open_display (GdkDisplayManager* manager /*none*/, const char* name /*none,nullable*/);
// ::GdkDisplay* /*none,nullable*/ gdk_display_manager_open_display (::GdkDisplayManager* manager /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL Gdk::Display open_display (const gi::cstring_v name) noexcept;
GI_INLINE_DECL Gdk::Display open_display () noexcept;

// void gdk_display_manager_set_default_display (GdkDisplayManager* manager /*none*/, GdkDisplay* display /*none*/);
// void gdk_display_manager_set_default_display (::GdkDisplayManager* manager /*none*/, ::GdkDisplay* display /*none*/);
GI_INLINE_DECL void set_default_display (Gdk::Display display) noexcept;

gi::property_proxy<Gdk::Display, base::DisplayManagerBase> property_default_display()
{ return gi::property_proxy<Gdk::Display, base::DisplayManagerBase> (*this, "default-display"); }
const gi::property_proxy<Gdk::Display, base::DisplayManagerBase> property_default_display() const
{ return gi::property_proxy<Gdk::Display, base::DisplayManagerBase> (*this, "default-display"); }

// (signal) void display-opened ( display /*none*/);
// (signal) void display-opened (::GdkDisplay* display /*none*/);
gi::signal_proxy<void(Gdk::DisplayManager, Gdk::Display display)> signal_display_opened()
{ return gi::signal_proxy<void(Gdk::DisplayManager, Gdk::Display display)> (*this, "display-opened"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/displaymanager_extra_def.hpp>)
#include <gdk/displaymanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/displaymanager_extra.hpp>)
#include <gdk/displaymanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DisplayManager : public GI_GDK_DISPLAYMANAGER_BASE
{ typedef GI_GDK_DISPLAYMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDisplayManager>
{ typedef Gdk::DisplayManager type; }; 

} // namespace repository

} // namespace gi

#endif
