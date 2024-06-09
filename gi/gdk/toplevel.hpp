// AUTO-GENERATED

#ifndef _GI_GDK_TOPLEVEL_HPP_
#define _GI_GDK_TOPLEVEL_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Surface;
class Texture;
class ToplevelLayout;
class ToplevelLayout_Ref;

class Toplevel;

namespace base {


#define GI_GDK_TOPLEVEL_BASE base::ToplevelBase
class ToplevelBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GdkToplevel BaseObjectType;

ToplevelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_toplevel_get_type(); } 

// void gdk_toplevel_begin_move (GdkToplevel* toplevel /*none*/, GdkDevice* device /*none*/, int button, double x, double y, guint32 timestamp);
// void gdk_toplevel_begin_move (::GdkToplevel* toplevel /*none*/, ::GdkDevice* device /*none*/, gint button, gdouble x, gdouble y, guint32 timestamp);
GI_INLINE_DECL void begin_move (Gdk::Device device, gint button, gdouble x, gdouble y, guint32 timestamp) noexcept;

// void gdk_toplevel_begin_resize (GdkToplevel* toplevel /*none*/, GdkSurfaceEdge edge, GdkDevice* device /*none,nullable*/, int button, double x, double y, guint32 timestamp);
// void gdk_toplevel_begin_resize (::GdkToplevel* toplevel /*none*/, ::GdkSurfaceEdge edge, ::GdkDevice* device /*none,nullable*/, gint button, gdouble x, gdouble y, guint32 timestamp);
GI_INLINE_DECL void begin_resize (Gdk::SurfaceEdge edge, Gdk::Device device, gint button, gdouble x, gdouble y, guint32 timestamp) noexcept;
GI_INLINE_DECL void begin_resize (Gdk::SurfaceEdge edge, gint button, gdouble x, gdouble y, guint32 timestamp) noexcept;

// void gdk_toplevel_focus (GdkToplevel* toplevel /*none*/, guint32 timestamp);
// void gdk_toplevel_focus (::GdkToplevel* toplevel /*none*/, guint32 timestamp);
GI_INLINE_DECL void focus (guint32 timestamp) noexcept;

// GdkToplevelState gdk_toplevel_get_state (GdkToplevel* toplevel /*none*/);
// ::GdkToplevelState gdk_toplevel_get_state (::GdkToplevel* toplevel /*none*/);
GI_INLINE_DECL Gdk::ToplevelState get_state () noexcept;

// void gdk_toplevel_inhibit_system_shortcuts (GdkToplevel* toplevel /*none*/, GdkEvent* event /*none,nullable*/);
// void gdk_toplevel_inhibit_system_shortcuts (::GdkToplevel* toplevel /*none*/,  event /*none,nullable*/);
// SKIP; event type  not supported

// gboolean gdk_toplevel_lower (GdkToplevel* toplevel /*none*/);
// gboolean gdk_toplevel_lower (::GdkToplevel* toplevel /*none*/);
GI_INLINE_DECL bool lower () noexcept;

// gboolean gdk_toplevel_minimize (GdkToplevel* toplevel /*none*/);
// gboolean gdk_toplevel_minimize (::GdkToplevel* toplevel /*none*/);
GI_INLINE_DECL bool minimize () noexcept;

// void gdk_toplevel_present (GdkToplevel* toplevel /*none*/, GdkToplevelLayout* layout /*none*/);
// void gdk_toplevel_present (::GdkToplevel* toplevel /*none*/, ::GdkToplevelLayout* layout /*none*/);
GI_INLINE_DECL void present (Gdk::ToplevelLayout_Ref layout) noexcept;

// void gdk_toplevel_restore_system_shortcuts (GdkToplevel* toplevel /*none*/);
// void gdk_toplevel_restore_system_shortcuts (::GdkToplevel* toplevel /*none*/);
GI_INLINE_DECL void restore_system_shortcuts () noexcept;

// void gdk_toplevel_set_decorated (GdkToplevel* toplevel /*none*/, gboolean decorated);
// void gdk_toplevel_set_decorated (::GdkToplevel* toplevel /*none*/, gboolean decorated);
GI_INLINE_DECL void set_decorated (gboolean decorated) noexcept;

// void gdk_toplevel_set_deletable (GdkToplevel* toplevel /*none*/, gboolean deletable);
// void gdk_toplevel_set_deletable (::GdkToplevel* toplevel /*none*/, gboolean deletable);
GI_INLINE_DECL void set_deletable (gboolean deletable) noexcept;

// void gdk_toplevel_set_icon_list (GdkToplevel* toplevel /*none*/, GList* surfaces /*none*/);
// void gdk_toplevel_set_icon_list (::GdkToplevel* toplevel /*none*/, ::GList* surfaces /*none*/);
GI_INLINE_DECL void set_icon_list (gi::CollectionParameter<GList, ::GdkTexture*, gi::transfer_none_t> surfaces) noexcept;

// void gdk_toplevel_set_modal (GdkToplevel* toplevel /*none*/, gboolean modal);
// void gdk_toplevel_set_modal (::GdkToplevel* toplevel /*none*/, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gdk_toplevel_set_startup_id (GdkToplevel* toplevel /*none*/, const char* startup_id /*none*/);
// void gdk_toplevel_set_startup_id (::GdkToplevel* toplevel /*none*/, const char* startup_id /*none*/);
GI_INLINE_DECL void set_startup_id (const gi::cstring_v startup_id) noexcept;

// void gdk_toplevel_set_title (GdkToplevel* toplevel /*none*/, const char* title /*none*/);
// void gdk_toplevel_set_title (::GdkToplevel* toplevel /*none*/, const char* title /*none*/);
GI_INLINE_DECL void set_title (const gi::cstring_v title) noexcept;

// void gdk_toplevel_set_transient_for (GdkToplevel* toplevel /*none*/, GdkSurface* parent /*none*/);
// void gdk_toplevel_set_transient_for (::GdkToplevel* toplevel /*none*/, ::GdkSurface* parent /*none*/);
GI_INLINE_DECL void set_transient_for (Gdk::Surface parent) noexcept;

// gboolean gdk_toplevel_show_window_menu (GdkToplevel* toplevel /*none*/, GdkEvent* event /*none*/);
// gboolean gdk_toplevel_show_window_menu (::GdkToplevel* toplevel /*none*/,  event /*none*/);
// SKIP; event type  not supported

// gboolean gdk_toplevel_supports_edge_constraints (GdkToplevel* toplevel /*none*/);
// gboolean gdk_toplevel_supports_edge_constraints (::GdkToplevel* toplevel /*none*/);
GI_INLINE_DECL bool supports_edge_constraints () noexcept;

// gboolean gdk_toplevel_titlebar_gesture (GdkToplevel* toplevel /*none*/, GdkTitlebarGesture gesture);
// gboolean gdk_toplevel_titlebar_gesture (::GdkToplevel* toplevel /*none*/, ::GdkTitlebarGesture gesture);
GI_INLINE_DECL bool titlebar_gesture (Gdk::TitlebarGesture gesture) noexcept;

gi::property_proxy<bool, base::ToplevelBase> property_decorated()
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "decorated"); }
const gi::property_proxy<bool, base::ToplevelBase> property_decorated() const
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "decorated"); }

gi::property_proxy<bool, base::ToplevelBase> property_deletable()
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "deletable"); }
const gi::property_proxy<bool, base::ToplevelBase> property_deletable() const
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "deletable"); }

gi::property_proxy<Gdk::FullscreenMode, base::ToplevelBase> property_fullscreen_mode()
{ return gi::property_proxy<Gdk::FullscreenMode, base::ToplevelBase> (*this, "fullscreen-mode"); }
const gi::property_proxy<Gdk::FullscreenMode, base::ToplevelBase> property_fullscreen_mode() const
{ return gi::property_proxy<Gdk::FullscreenMode, base::ToplevelBase> (*this, "fullscreen-mode"); }

gi::property_proxy<gpointer, base::ToplevelBase> property_icon_list()
{ return gi::property_proxy<gpointer, base::ToplevelBase> (*this, "icon-list"); }
const gi::property_proxy<gpointer, base::ToplevelBase> property_icon_list() const
{ return gi::property_proxy<gpointer, base::ToplevelBase> (*this, "icon-list"); }

gi::property_proxy<bool, base::ToplevelBase> property_modal()
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "modal"); }
const gi::property_proxy<bool, base::ToplevelBase> property_modal() const
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "modal"); }

gi::property_proxy<bool, base::ToplevelBase> property_shortcuts_inhibited()
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "shortcuts-inhibited"); }
const gi::property_proxy<bool, base::ToplevelBase> property_shortcuts_inhibited() const
{ return gi::property_proxy<bool, base::ToplevelBase> (*this, "shortcuts-inhibited"); }

gi::property_proxy<gi::cstring, base::ToplevelBase> property_startup_id()
{ return gi::property_proxy<gi::cstring, base::ToplevelBase> (*this, "startup-id"); }
const gi::property_proxy<gi::cstring, base::ToplevelBase> property_startup_id() const
{ return gi::property_proxy<gi::cstring, base::ToplevelBase> (*this, "startup-id"); }

gi::property_proxy<Gdk::ToplevelState, base::ToplevelBase> property_state()
{ return gi::property_proxy<Gdk::ToplevelState, base::ToplevelBase> (*this, "state"); }
const gi::property_proxy<Gdk::ToplevelState, base::ToplevelBase> property_state() const
{ return gi::property_proxy<Gdk::ToplevelState, base::ToplevelBase> (*this, "state"); }

gi::property_proxy<gi::cstring, base::ToplevelBase> property_title()
{ return gi::property_proxy<gi::cstring, base::ToplevelBase> (*this, "title"); }
const gi::property_proxy<gi::cstring, base::ToplevelBase> property_title() const
{ return gi::property_proxy<gi::cstring, base::ToplevelBase> (*this, "title"); }

gi::property_proxy<Gdk::Surface, base::ToplevelBase> property_transient_for()
{ return gi::property_proxy<Gdk::Surface, base::ToplevelBase> (*this, "transient-for"); }
const gi::property_proxy<Gdk::Surface, base::ToplevelBase> property_transient_for() const
{ return gi::property_proxy<Gdk::Surface, base::ToplevelBase> (*this, "transient-for"); }

// (signal) void compute-size ( size /*none*/);
// (signal) void compute-size ( size /*none*/);
// SKIP; size type  not supported

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/toplevel_extra_def.hpp>)
#include <gdk/toplevel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/toplevel_extra.hpp>)
#include <gdk/toplevel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Toplevel : public GI_GDK_TOPLEVEL_BASE
{ typedef GI_GDK_TOPLEVEL_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkToplevel>
{ typedef Gdk::Toplevel type; }; 

} // namespace repository

} // namespace gi

#endif
