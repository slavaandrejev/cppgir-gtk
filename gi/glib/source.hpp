// AUTO-GENERATED

#ifndef _GI_GLIB_SOURCE_HPP_
#define _GI_GLIB_SOURCE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MainContext;
class MainContext_Ref;
class PollFD;
class PollFD_Ref;
class SourceCallbackFuncs;
class SourceCallbackFuncs_Ref;
class SourceFuncs;
class SourceFuncs_Ref;
class Source_Ref;

class Source;

namespace base {


#define GI_GLIB_SOURCE_BASE base::SourceBase
class SourceBase : public gi::detail::GBoxedWrapperBase<SourceBase, ::GSource>
{
typedef gi::detail::GBoxedWrapperBase<SourceBase, ::GSource> super_type;
public:

SourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_source_get_type(); } 

// GSource* /*full*/ g_source_new (GSourceFuncs* source_funcs /*none*/, guint struct_size);
// ::GSource* /*full*/ g_source_new (::GSourceFuncs* source_funcs /*none*/, guint struct_size);
static GI_INLINE_DECL GLib::Source new_ (GLib::SourceFuncs_Ref source_funcs, guint struct_size) noexcept;

// void g_source_add_child_source (GSource* source /*none*/, GSource* child_source /*none*/);
// void g_source_add_child_source (::GSource* source /*none*/, ::GSource* child_source /*none*/);
GI_INLINE_DECL void add_child_source (GLib::Source_Ref child_source) noexcept;

// void g_source_add_poll (GSource* source /*none*/, GPollFD* fd /*none*/);
// void g_source_add_poll (::GSource* source /*none*/, ::GPollFD* fd /*none*/);
GI_INLINE_DECL void add_poll (GLib::PollFD_Ref fd) noexcept;

// gpointer g_source_add_unix_fd (GSource* source /*none*/, gint fd, GIOCondition events);
// void* g_source_add_unix_fd (::GSource* source /*none*/, gint fd, ::GIOCondition events);
GI_INLINE_DECL gpointer add_unix_fd (gint fd, GLib::IOCondition events) noexcept;

// guint g_source_attach (GSource* source /*none*/, GMainContext* context /*none,nullable*/);
// guint g_source_attach (::GSource* source /*none*/, ::GMainContext* context /*none,nullable*/);
GI_INLINE_DECL guint attach (GLib::MainContext_Ref context) noexcept;
GI_INLINE_DECL guint attach () noexcept;

// void g_source_destroy (GSource* source /*none*/);
// void g_source_destroy (::GSource* source /*none*/);
GI_INLINE_DECL void destroy () noexcept;

// gboolean g_source_get_can_recurse (GSource* source /*none*/);
// gboolean g_source_get_can_recurse (::GSource* source /*none*/);
GI_INLINE_DECL bool get_can_recurse () noexcept;

// GMainContext* /*none,nullable*/ g_source_get_context (GSource* source /*none*/);
// ::GMainContext* /*none,nullable*/ g_source_get_context (::GSource* source /*none*/);
GI_INLINE_DECL GLib::MainContext_Ref get_context () noexcept;

// void g_source_get_current_time (GSource* source /*none*/, GTimeVal* timeval /*none*/);
// void g_source_get_current_time (::GSource* source /*none*/,  timeval /*none*/);
// IGNORE; deprecated

// guint g_source_get_id (GSource* source /*none*/);
// guint g_source_get_id (::GSource* source /*none*/);
GI_INLINE_DECL guint get_id () noexcept;

// const char* /*none,nullable*/ g_source_get_name (GSource* source /*none*/);
// const char* /*none,nullable*/ g_source_get_name (::GSource* source /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// gint g_source_get_priority (GSource* source /*none*/);
// gint g_source_get_priority (::GSource* source /*none*/);
GI_INLINE_DECL gint get_priority () noexcept;

// gint64 g_source_get_ready_time (GSource* source /*none*/);
// gint64 g_source_get_ready_time (::GSource* source /*none*/);
GI_INLINE_DECL gint64 get_ready_time () noexcept;

// gint64 g_source_get_time (GSource* source /*none*/);
// gint64 g_source_get_time (::GSource* source /*none*/);
GI_INLINE_DECL gint64 get_time () noexcept;

// gboolean g_source_is_destroyed (GSource* source /*none*/);
// gboolean g_source_is_destroyed (::GSource* source /*none*/);
GI_INLINE_DECL bool is_destroyed () noexcept;

// void g_source_modify_unix_fd (GSource* source /*none*/, gpointer tag, GIOCondition new_events);
// void g_source_modify_unix_fd (::GSource* source /*none*/, void* tag, ::GIOCondition new_events);
GI_INLINE_DECL void modify_unix_fd (void* tag, GLib::IOCondition new_events) noexcept;

// GIOCondition g_source_query_unix_fd (GSource* source /*none*/, gpointer tag);
// ::GIOCondition g_source_query_unix_fd (::GSource* source /*none*/, void* tag);
GI_INLINE_DECL GLib::IOCondition query_unix_fd (void* tag) noexcept;

// GSource* /*full*/ g_source_ref (GSource* source /*none*/);
// ::GSource* /*full*/ g_source_ref (::GSource* source /*none*/);
// IGNORE; marked ignore

// void g_source_remove_child_source (GSource* source /*none*/, GSource* child_source /*none*/);
// void g_source_remove_child_source (::GSource* source /*none*/, ::GSource* child_source /*none*/);
GI_INLINE_DECL void remove_child_source (GLib::Source_Ref child_source) noexcept;

// void g_source_remove_poll (GSource* source /*none*/, GPollFD* fd /*none*/);
// void g_source_remove_poll (::GSource* source /*none*/, ::GPollFD* fd /*none*/);
GI_INLINE_DECL void remove_poll (GLib::PollFD_Ref fd) noexcept;

// void g_source_remove_unix_fd (GSource* source /*none*/, gpointer tag);
// void g_source_remove_unix_fd (::GSource* source /*none*/, void* tag);
GI_INLINE_DECL void remove_unix_fd (void* tag) noexcept;

// void g_source_set_callback (GSource* source /*none*/, GSourceFunc func /*none*/, gpointer data, GDestroyNotify notify /*none,nullable*/);
// void g_source_set_callback (::GSource* source /*none*/, GLib::SourceFunc::cfunction_type func /*none*/, void* data, GLib::DestroyNotify::cfunction_type notify /*none,nullable*/);
// IGNORE; marked ignore

// void g_source_set_callback_indirect (GSource* source /*none*/, gpointer callback_data, GSourceCallbackFuncs* callback_funcs /*none*/);
// void g_source_set_callback_indirect (::GSource* source /*none*/, void* callback_data, ::GSourceCallbackFuncs* callback_funcs /*none*/);
// IGNORE; marked ignore

// void g_source_set_can_recurse (GSource* source /*none*/, gboolean can_recurse);
// void g_source_set_can_recurse (::GSource* source /*none*/, gboolean can_recurse);
GI_INLINE_DECL void set_can_recurse (gboolean can_recurse) noexcept;

// void g_source_set_dispose_function (GSource* source /*none*/, GSourceDisposeFunc dispose /*none*/);
// void g_source_set_dispose_function (::GSource* source /*none*/,  dispose /*none*/);
// IGNORE; not introspectable, dispose type  not supported

// void g_source_set_funcs (GSource* source /*none*/, GSourceFuncs* funcs /*none*/);
// void g_source_set_funcs (::GSource* source /*none*/, ::GSourceFuncs* funcs /*none*/);
GI_INLINE_DECL void set_funcs (GLib::SourceFuncs_Ref funcs) noexcept;

// void g_source_set_name (GSource* source /*none*/, const char* name /*none*/);
// void g_source_set_name (::GSource* source /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_name (const gi::cstring_v name) noexcept;

// void g_source_set_priority (GSource* source /*none*/, gint priority);
// void g_source_set_priority (::GSource* source /*none*/, gint priority);
GI_INLINE_DECL void set_priority (gint priority) noexcept;

// void g_source_set_ready_time (GSource* source /*none*/, gint64 ready_time);
// void g_source_set_ready_time (::GSource* source /*none*/, gint64 ready_time);
GI_INLINE_DECL void set_ready_time (gint64 ready_time) noexcept;

// void g_source_set_static_name (GSource* source /*none*/, const char* name /*none*/);
// void g_source_set_static_name (::GSource* source /*none*/, const char* name /*none*/);
GI_INLINE_DECL void set_static_name (const gi::cstring_v name) noexcept;

// void g_source_unref (GSource* source /*none*/);
// void g_source_unref (::GSource* source /*none*/);
// IGNORE; marked ignore

// gboolean g_source_remove (guint tag);
// gboolean g_source_remove (guint tag);
static GI_INLINE_DECL bool remove (guint tag) noexcept;

// gboolean g_source_remove_by_funcs_user_data (GSourceFuncs* funcs /*none*/, gpointer user_data);
// gboolean g_source_remove_by_funcs_user_data (::GSourceFuncs* funcs /*none*/, void* user_data);
static GI_INLINE_DECL bool remove_by_funcs_user_data (GLib::SourceFuncs_Ref funcs, void* user_data) noexcept;

// gboolean g_source_remove_by_user_data (gpointer user_data);
// gboolean g_source_remove_by_user_data (void* user_data);
static GI_INLINE_DECL bool remove_by_user_data (void* user_data) noexcept;

// void g_source_set_name_by_id (guint tag, const char* name /*none*/);
// void g_source_set_name_by_id (guint tag, const char* name /*none*/);
static GI_INLINE_DECL void set_name_by_id (guint tag, const gi::cstring_v name) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/source_extra_def.hpp>)
#include <glib/source_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/source_extra.hpp>)
#include <glib/source_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Source_Ref;

class Source : public gi::detail::GBoxedWrapper<Source, ::GSource, GI_GLIB_SOURCE_BASE, Source_Ref>
{ typedef gi::detail::GBoxedWrapper<Source, ::GSource, GI_GLIB_SOURCE_BASE, Source_Ref> super_type; using super_type::super_type; };


class Source_Ref : public gi::detail::GBoxedRefWrapper<Source, ::GSource, GI_GLIB_SOURCE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Source, ::GSource, GI_GLIB_SOURCE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GSource>
{ typedef GLib::Source type; }; 

} // namespace repository

} // namespace gi

#endif
