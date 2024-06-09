// AUTO-GENERATED

#ifndef _GI_GLIB_PATHBUF_HPP_
#define _GI_GLIB_PATHBUF_HPP_


namespace gi {

namespace repository {

namespace GLib {

class PathBuf_Ref;

class PathBuf;

namespace base {


#define GI_GLIB_PATHBUF_BASE base::PathBufBase
class PathBufBase : public gi::detail::CBoxedWrapperBase<PathBufBase, ::GPathBuf>
{
typedef gi::detail::CBoxedWrapperBase<PathBufBase, ::GPathBuf> super_type;
public:

PathBufBase (std::nullptr_t = nullptr) : super_type() {}

// void g_path_buf_clear (GPathBuf* buf /*none*/);
// void g_path_buf_clear (::GPathBuf* buf /*none*/);
GI_INLINE_DECL void clear () noexcept;

// char* /*full,nullable*/ g_path_buf_clear_to_path (GPathBuf* buf /*none*/);
// char* /*full,nullable*/ g_path_buf_clear_to_path (::GPathBuf* buf /*none*/);
GI_INLINE_DECL gi::cstring clear_to_path () noexcept;

// GPathBuf* /*full*/ g_path_buf_copy (GPathBuf* buf /*none*/);
// ::GPathBuf* /*full*/ g_path_buf_copy (::GPathBuf* buf /*none*/);
GI_INLINE_DECL GLib::PathBuf copy () noexcept;

// void g_path_buf_free (GPathBuf* buf /*full*/);
// void g_path_buf_free (::GPathBuf* buf /*full*/);
// IGNORE; marked ignore

// char* /*full,nullable*/ g_path_buf_free_to_path (GPathBuf* buf /*full*/);
// char* /*full,nullable*/ g_path_buf_free_to_path (::GPathBuf* buf /*full*/);
GI_INLINE_DECL gi::cstring free_to_path () noexcept;

// GPathBuf* /*none*/ g_path_buf_init (GPathBuf* buf /*none*/);
// ::GPathBuf* /*none*/ g_path_buf_init (::GPathBuf* buf /*none*/);
GI_INLINE_DECL GLib::PathBuf_Ref init () noexcept;

// GPathBuf* /*none*/ g_path_buf_init_from_path (GPathBuf* buf /*none*/, const char* path /*none,nullable*/);
// ::GPathBuf* /*none*/ g_path_buf_init_from_path (::GPathBuf* buf /*none*/, const char* path /*none,nullable*/);
GI_INLINE_DECL GLib::PathBuf_Ref init_from_path (const gi::cstring_v path) noexcept;
GI_INLINE_DECL GLib::PathBuf_Ref init_from_path () noexcept;

// gboolean g_path_buf_pop (GPathBuf* buf /*none*/);
// gboolean g_path_buf_pop (::GPathBuf* buf /*none*/);
GI_INLINE_DECL bool pop () noexcept;

// GPathBuf* /*none*/ g_path_buf_push (GPathBuf* buf /*none*/, const char* path /*none*/);
// ::GPathBuf* /*none*/ g_path_buf_push (::GPathBuf* buf /*none*/, const char* path /*none*/);
GI_INLINE_DECL GLib::PathBuf_Ref push (const gi::cstring_v path) noexcept;

// gboolean g_path_buf_set_extension (GPathBuf* buf /*none*/, const char* extension /*none,nullable*/);
// gboolean g_path_buf_set_extension (::GPathBuf* buf /*none*/, const char* extension /*none,nullable*/);
GI_INLINE_DECL bool set_extension (const gi::cstring_v extension) noexcept;
GI_INLINE_DECL bool set_extension () noexcept;

// gboolean g_path_buf_set_filename (GPathBuf* buf /*none*/, const char* file_name /*none*/);
// gboolean g_path_buf_set_filename (::GPathBuf* buf /*none*/, const char* file_name /*none*/);
GI_INLINE_DECL bool set_filename (const gi::cstring_v file_name) noexcept;

// char* /*full,nullable*/ g_path_buf_to_path (GPathBuf* buf /*none*/);
// char* /*full,nullable*/ g_path_buf_to_path (::GPathBuf* buf /*none*/);
GI_INLINE_DECL gi::cstring to_path () noexcept;

// gboolean g_path_buf_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_path_buf_equal (const void* v1, const void* v2);
static GI_INLINE_DECL bool equal (const void* v1, const void* v2) noexcept;

// GPathBuf* /*full*/ g_path_buf_new ();
// ::GPathBuf* /*full*/ g_path_buf_new ();
static GI_INLINE_DECL GLib::PathBuf new_ () noexcept;

// GPathBuf* /*full*/ g_path_buf_new_from_path (const char* path /*none,nullable*/);
// ::GPathBuf* /*full*/ g_path_buf_new_from_path (const char* path /*none,nullable*/);
static GI_INLINE_DECL GLib::PathBuf new_from_path (const gi::cstring_v path) noexcept;
static GI_INLINE_DECL GLib::PathBuf new_from_path () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/pathbuf_extra_def.hpp>)
#include <glib/pathbuf_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/pathbuf_extra.hpp>)
#include <glib/pathbuf_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class PathBuf_Ref;

class PathBuf : public gi::detail::CBoxedWrapper<PathBuf, ::GPathBuf, GI_GLIB_PATHBUF_BASE, PathBuf_Ref>
{ typedef gi::detail::CBoxedWrapper<PathBuf, ::GPathBuf, GI_GLIB_PATHBUF_BASE, PathBuf_Ref> super_type; using super_type::super_type; };


class PathBuf_Ref : public gi::detail::CBoxedRefWrapper<PathBuf, ::GPathBuf, GI_GLIB_PATHBUF_BASE>
{ typedef gi::detail::CBoxedRefWrapper<PathBuf, ::GPathBuf, GI_GLIB_PATHBUF_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GPathBuf>
{ typedef GLib::PathBuf type; }; 

} // namespace repository

} // namespace gi

#endif
