// AUTO-GENERATED

#ifndef _GI_GLIB_DIR_HPP_
#define _GI_GLIB_DIR_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Dir_Ref;

class Dir;

namespace base {


#define GI_GLIB_DIR_BASE base::DirBase
class DirBase : public gi::detail::GBoxedWrapperBase<DirBase, ::GDir>
{
typedef gi::detail::GBoxedWrapperBase<DirBase, ::GDir> super_type;
public:

DirBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_dir_get_type(); } 

// GDir* /*full*/ g_dir_open (const gchar* path /*none*/, guint flags, GError ** error);
// ::GDir* /*full*/ g_dir_open (const char* path /*none*/, guint flags, GError ** error);
static GI_INLINE_DECL GLib::Dir open (const gi::cstring_v path, guint flags);
static GI_INLINE_DECL GLib::Dir open (const gi::cstring_v path, guint flags, GLib::Error * _error) noexcept;

// void g_dir_close (GDir* dir /*full*/);
// void g_dir_close (::GDir* dir /*full*/);
GI_INLINE_DECL void close () noexcept;

// const gchar* /*none*/ g_dir_read_name (GDir* dir /*none*/);
// const char* /*none*/ g_dir_read_name (::GDir* dir /*none*/);
GI_INLINE_DECL gi::cstring_v read_name () noexcept;

// GDir* /*full*/ g_dir_ref (GDir* dir /*none*/);
// ::GDir* /*full*/ g_dir_ref (::GDir* dir /*none*/);
// IGNORE; marked ignore

// void g_dir_rewind (GDir* dir /*none*/);
// void g_dir_rewind (::GDir* dir /*none*/);
GI_INLINE_DECL void rewind () noexcept;

// void g_dir_unref (GDir* dir /*full*/);
// void g_dir_unref (::GDir* dir /*full*/);
// IGNORE; marked ignore

// gchar* /*full*/ g_dir_make_tmp (const gchar* tmpl /*none,nullable*/, GError ** error);
// char* /*full*/ g_dir_make_tmp (const char* tmpl /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::cstring make_tmp (const gi::cstring_v tmpl);
static GI_INLINE_DECL gi::cstring make_tmp ();
static GI_INLINE_DECL gi::cstring make_tmp (const gi::cstring_v tmpl, GLib::Error * _error) noexcept;
static GI_INLINE_DECL gi::cstring make_tmp (GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/dir_extra_def.hpp>)
#include <glib/dir_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/dir_extra.hpp>)
#include <glib/dir_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Dir_Ref;

class Dir : public gi::detail::GBoxedWrapper<Dir, ::GDir, GI_GLIB_DIR_BASE, Dir_Ref>
{ typedef gi::detail::GBoxedWrapper<Dir, ::GDir, GI_GLIB_DIR_BASE, Dir_Ref> super_type; using super_type::super_type; };


class Dir_Ref : public gi::detail::GBoxedRefWrapper<Dir, ::GDir, GI_GLIB_DIR_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Dir, ::GDir, GI_GLIB_DIR_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GDir>
{ typedef GLib::Dir type; }; 

} // namespace repository

} // namespace gi

#endif
