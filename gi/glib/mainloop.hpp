// AUTO-GENERATED

#ifndef _GI_GLIB_MAINLOOP_HPP_
#define _GI_GLIB_MAINLOOP_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MainContext;
class MainContext_Ref;
class MainLoop_Ref;

class MainLoop;

namespace base {


#define GI_GLIB_MAINLOOP_BASE base::MainLoopBase
class MainLoopBase : public gi::detail::GBoxedWrapperBase<MainLoopBase, ::GMainLoop>
{
typedef gi::detail::GBoxedWrapperBase<MainLoopBase, ::GMainLoop> super_type;
public:

MainLoopBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_main_loop_get_type(); } 

// GMainLoop* /*full*/ g_main_loop_new (GMainContext* context /*none,nullable*/, gboolean is_running);
// ::GMainLoop* /*full*/ g_main_loop_new (::GMainContext* context /*none,nullable*/, gboolean is_running);
static GI_INLINE_DECL GLib::MainLoop new_ (GLib::MainContext_Ref context, gboolean is_running) noexcept;
static GI_INLINE_DECL GLib::MainLoop new_ (gboolean is_running) noexcept;

// GMainContext* /*none*/ g_main_loop_get_context (GMainLoop* loop /*none*/);
// ::GMainContext* /*none*/ g_main_loop_get_context (::GMainLoop* loop /*none*/);
GI_INLINE_DECL GLib::MainContext_Ref get_context () noexcept;

// gboolean g_main_loop_is_running (GMainLoop* loop /*none*/);
// gboolean g_main_loop_is_running (::GMainLoop* loop /*none*/);
GI_INLINE_DECL bool is_running () noexcept;

// void g_main_loop_quit (GMainLoop* loop /*none*/);
// void g_main_loop_quit (::GMainLoop* loop /*none*/);
GI_INLINE_DECL void quit () noexcept;

// GMainLoop* /*full*/ g_main_loop_ref (GMainLoop* loop /*none*/);
// ::GMainLoop* /*full*/ g_main_loop_ref (::GMainLoop* loop /*none*/);
// IGNORE; marked ignore

// void g_main_loop_run (GMainLoop* loop /*none*/);
// void g_main_loop_run (::GMainLoop* loop /*none*/);
GI_INLINE_DECL void run () noexcept;

// void g_main_loop_unref (GMainLoop* loop /*none*/);
// void g_main_loop_unref (::GMainLoop* loop /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mainloop_extra_def.hpp>)
#include <glib/mainloop_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mainloop_extra.hpp>)
#include <glib/mainloop_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MainLoop_Ref;

class MainLoop : public gi::detail::GBoxedWrapper<MainLoop, ::GMainLoop, GI_GLIB_MAINLOOP_BASE, MainLoop_Ref>
{ typedef gi::detail::GBoxedWrapper<MainLoop, ::GMainLoop, GI_GLIB_MAINLOOP_BASE, MainLoop_Ref> super_type; using super_type::super_type; };


class MainLoop_Ref : public gi::detail::GBoxedRefWrapper<MainLoop, ::GMainLoop, GI_GLIB_MAINLOOP_BASE>
{ typedef gi::detail::GBoxedRefWrapper<MainLoop, ::GMainLoop, GI_GLIB_MAINLOOP_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMainLoop>
{ typedef GLib::MainLoop type; }; 

} // namespace repository

} // namespace gi

#endif
