// AUTO-GENERATED

#ifndef _GI_GLIB_MAINCONTEXT_HPP_
#define _GI_GLIB_MAINCONTEXT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Cond;
class Cond_Ref;
class MainContext_Ref;
class PollFD;
class PollFD_Ref;
class Source;
class SourceFuncs;
class SourceFuncs_Ref;
class Source_Ref;

class MainContext;

namespace base {


#define GI_GLIB_MAINCONTEXT_BASE base::MainContextBase
class MainContextBase : public gi::detail::GBoxedWrapperBase<MainContextBase, ::GMainContext>
{
typedef gi::detail::GBoxedWrapperBase<MainContextBase, ::GMainContext> super_type;
public:

MainContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_main_context_get_type(); } 

// GMainContext* /*full*/ g_main_context_new ();
// ::GMainContext* /*full*/ g_main_context_new ();
static GI_INLINE_DECL GLib::MainContext new_ () noexcept;

// GMainContext* /*full*/ g_main_context_new_with_flags (GMainContextFlags flags);
// ::GMainContext* /*full*/ g_main_context_new_with_flags (::GMainContextFlags flags);
static GI_INLINE_DECL GLib::MainContext new_with_flags (GLib::MainContextFlags flags) noexcept;

// gboolean g_main_context_acquire (GMainContext* context /*none,nullable*/);
// gboolean g_main_context_acquire (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL bool acquire () noexcept;

// void g_main_context_add_poll (GMainContext* context /*none,nullable*/, GPollFD* fd /*none*/, gint priority);
// void g_main_context_add_poll (::GMainContext* context /*none,nullable*/, ::GPollFD* fd /*none*/, gint priority);
GI_INLINE_DECL void add_poll (GLib::PollFD_Ref fd, gint priority) noexcept;

// gboolean g_main_context_check (GMainContext* context /*none,nullable*/, gint max_priority, GPollFD* fds /*none*/, gint n_fds);
// gboolean g_main_context_check (::GMainContext* context /*none,nullable*/, gint max_priority, ::GPollFD** fds /*none*/, gint n_fds);
// SKIP; fds in boxed array not supported (depth 1)

// void g_main_context_dispatch (GMainContext* context /*none,nullable*/);
// void g_main_context_dispatch (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL void dispatch () noexcept;

// GSource* /*none*/ g_main_context_find_source_by_funcs_user_data (GMainContext* context /*none,nullable*/, GSourceFuncs* funcs /*none*/, gpointer user_data);
// ::GSource* /*none*/ g_main_context_find_source_by_funcs_user_data (::GMainContext* context /*none,nullable*/, ::GSourceFuncs* funcs /*none*/, void* user_data);
GI_INLINE_DECL GLib::Source_Ref find_source_by_funcs_user_data (GLib::SourceFuncs_Ref funcs, void* user_data) noexcept;

// GSource* /*none*/ g_main_context_find_source_by_id (GMainContext* context /*none,nullable*/, guint source_id);
// ::GSource* /*none*/ g_main_context_find_source_by_id (::GMainContext* context /*none,nullable*/, guint source_id);
GI_INLINE_DECL GLib::Source_Ref find_source_by_id (guint source_id) noexcept;

// GSource* /*none*/ g_main_context_find_source_by_user_data (GMainContext* context /*none,nullable*/, gpointer user_data);
// ::GSource* /*none*/ g_main_context_find_source_by_user_data (::GMainContext* context /*none,nullable*/, void* user_data);
GI_INLINE_DECL GLib::Source_Ref find_source_by_user_data (void* user_data) noexcept;

// FAILURE on g_main_context_get_poll_func; No such node (<xmlattr>.transfer-ownership)
// void g_main_context_invoke (GMainContext* context /*none,nullable*/, GSourceFunc function /*none*/, gpointer data);
// void g_main_context_invoke (::GMainContext* context /*none,nullable*/, GLib::SourceFunc::cfunction_type function /*none*/, void* data);
// IGNORE; not introspectable, callback misses scope info

// void g_main_context_invoke_full (GMainContext* context /*none,nullable*/, gint priority, GSourceFunc function /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// void g_main_context_invoke_full (::GMainContext* context /*none,nullable*/, gint priority, GLib::SourceFunc::cfunction_type function /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
GI_INLINE_DECL void invoke_full (gint priority, GLib::SourceFunc function) noexcept;

// gboolean g_main_context_is_owner (GMainContext* context /*none,nullable*/);
// gboolean g_main_context_is_owner (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL bool is_owner () noexcept;

// gboolean g_main_context_iteration (GMainContext* context /*none,nullable*/, gboolean may_block);
// gboolean g_main_context_iteration (::GMainContext* context /*none,nullable*/, gboolean may_block);
GI_INLINE_DECL bool iteration (gboolean may_block) noexcept;

// gboolean g_main_context_pending (GMainContext* context /*none,nullable*/);
// gboolean g_main_context_pending (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL bool pending () noexcept;

// void g_main_context_pop_thread_default (GMainContext* context /*none,nullable*/);
// void g_main_context_pop_thread_default (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL void pop_thread_default () noexcept;

// gboolean g_main_context_prepare (GMainContext* context /*none,nullable*/, gint* priority);
// gboolean g_main_context_prepare (::GMainContext* context /*none,nullable*/, gint* priority);
GI_INLINE_DECL bool prepare (gint * priority) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> prepare () noexcept;

// void g_main_context_push_thread_default (GMainContext* context /*none,nullable*/);
// void g_main_context_push_thread_default (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL void push_thread_default () noexcept;

// gint g_main_context_query (GMainContext* context /*none,nullable*/, gint max_priority, gint* timeout_, GPollFD* fds /*none,out,ca*/, gint n_fds);
// gint g_main_context_query (::GMainContext* context /*none,nullable*/, gint max_priority, gint* timeout_, ::GPollFD** fds /*none,out,ca*/, gint n_fds);
// SKIP; fds out boxed array not supported (depth 1)

// GMainContext* /*full*/ g_main_context_ref (GMainContext* context /*none*/);
// ::GMainContext* /*full*/ g_main_context_ref (::GMainContext* context /*none*/);
// IGNORE; marked ignore

// void g_main_context_release (GMainContext* context /*none,nullable*/);
// void g_main_context_release (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL void release () noexcept;

// void g_main_context_remove_poll (GMainContext* context /*none,nullable*/, GPollFD* fd /*none*/);
// void g_main_context_remove_poll (::GMainContext* context /*none,nullable*/, ::GPollFD* fd /*none*/);
GI_INLINE_DECL void remove_poll (GLib::PollFD_Ref fd) noexcept;

// void g_main_context_set_poll_func (GMainContext* context /*none,nullable*/, GPollFunc func /*none*/);
// void g_main_context_set_poll_func (::GMainContext* context /*none,nullable*/,  func /*none*/);
// IGNORE; not introspectable, func type  not supported

// void g_main_context_unref (GMainContext* context /*none*/);
// void g_main_context_unref (::GMainContext* context /*none*/);
// IGNORE; marked ignore

// gboolean g_main_context_wait (GMainContext* context /*none,nullable*/, GCond* cond /*none*/, GMutex* mutex /*none*/);
// gboolean g_main_context_wait (::GMainContext* context /*none,nullable*/, ::GCond* cond /*none*/,  mutex /*none*/);
// IGNORE; deprecated

// void g_main_context_wakeup (GMainContext* context /*none,nullable*/);
// void g_main_context_wakeup (::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL void wakeup () noexcept;

// GMainContext* /*none*/ g_main_context_default ();
// ::GMainContext* /*none*/ g_main_context_default ();
static GI_INLINE_DECL GLib::MainContext_Ref default_ () noexcept;

// GMainContext* /*none,nullable*/ g_main_context_get_thread_default ();
// ::GMainContext* /*none,nullable*/ g_main_context_get_thread_default ();
static GI_INLINE_DECL GLib::MainContext_Ref get_thread_default () noexcept;

// GMainContext* /*full*/ g_main_context_ref_thread_default ();
// ::GMainContext* /*full*/ g_main_context_ref_thread_default ();
static GI_INLINE_DECL GLib::MainContext ref_thread_default () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/maincontext_extra_def.hpp>)
#include <glib/maincontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/maincontext_extra.hpp>)
#include <glib/maincontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MainContext_Ref;

class MainContext : public gi::detail::GBoxedWrapper<MainContext, ::GMainContext, GI_GLIB_MAINCONTEXT_BASE, MainContext_Ref>
{ typedef gi::detail::GBoxedWrapper<MainContext, ::GMainContext, GI_GLIB_MAINCONTEXT_BASE, MainContext_Ref> super_type; using super_type::super_type; };


class MainContext_Ref : public gi::detail::GBoxedRefWrapper<MainContext, ::GMainContext, GI_GLIB_MAINCONTEXT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<MainContext, ::GMainContext, GI_GLIB_MAINCONTEXT_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMainContext>
{ typedef GLib::MainContext type; }; 

} // namespace repository

} // namespace gi

#endif
