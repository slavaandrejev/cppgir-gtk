// AUTO-GENERATED

#ifndef _GI_GLIB_MAPPEDFILE_HPP_
#define _GI_GLIB_MAPPEDFILE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;
class Bytes_Ref;
class MappedFile_Ref;

class MappedFile;

namespace base {


#define GI_GLIB_MAPPEDFILE_BASE base::MappedFileBase
class MappedFileBase : public gi::detail::GBoxedWrapperBase<MappedFileBase, ::GMappedFile>
{
typedef gi::detail::GBoxedWrapperBase<MappedFileBase, ::GMappedFile> super_type;
public:

MappedFileBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_mapped_file_get_type(); } 

// GMappedFile* /*full*/ g_mapped_file_new (const gchar* filename /*none*/, gboolean writable, GError ** error);
// ::GMappedFile* /*full*/ g_mapped_file_new (const char* filename /*none*/, gboolean writable, GError ** error);
static GI_INLINE_DECL GLib::MappedFile new_ (const gi::cstring_v filename, gboolean writable);
static GI_INLINE_DECL GLib::MappedFile new_ (const gi::cstring_v filename, gboolean writable, GLib::Error * _error) noexcept;

// GMappedFile* /*full*/ g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
// ::GMappedFile* /*full*/ g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
static GI_INLINE_DECL GLib::MappedFile new_from_fd (gint fd, gboolean writable);
static GI_INLINE_DECL GLib::MappedFile new_from_fd (gint fd, gboolean writable, GLib::Error * _error) noexcept;

// void g_mapped_file_free (GMappedFile* file /*none*/);
// void g_mapped_file_free (::GMappedFile* file /*none*/);
// IGNORE; marked ignore

// GBytes* /*full*/ g_mapped_file_get_bytes (GMappedFile* file /*none*/);
// ::GBytes* /*full*/ g_mapped_file_get_bytes (::GMappedFile* file /*none*/);
GI_INLINE_DECL GLib::Bytes get_bytes () noexcept;

// gchar* /*full*/ g_mapped_file_get_contents (GMappedFile* file /*none*/);
// char* /*full*/ g_mapped_file_get_contents (::GMappedFile* file /*none*/);
GI_INLINE_DECL gi::cstring get_contents () noexcept;

// gsize g_mapped_file_get_length (GMappedFile* file /*none*/);
// gsize g_mapped_file_get_length (::GMappedFile* file /*none*/);
GI_INLINE_DECL gsize get_length () noexcept;

// GMappedFile* /*full*/ g_mapped_file_ref (GMappedFile* file /*none*/);
// ::GMappedFile* /*full*/ g_mapped_file_ref (::GMappedFile* file /*none*/);
// IGNORE; marked ignore

// void g_mapped_file_unref (GMappedFile* file /*none*/);
// void g_mapped_file_unref (::GMappedFile* file /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra_def.hpp>)
#include <glib/mappedfile_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra.hpp>)
#include <glib/mappedfile_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MappedFile_Ref;

class MappedFile : public gi::detail::GBoxedWrapper<MappedFile, ::GMappedFile, GI_GLIB_MAPPEDFILE_BASE, MappedFile_Ref>
{ typedef gi::detail::GBoxedWrapper<MappedFile, ::GMappedFile, GI_GLIB_MAPPEDFILE_BASE, MappedFile_Ref> super_type; using super_type::super_type; };


class MappedFile_Ref : public gi::detail::GBoxedRefWrapper<MappedFile, ::GMappedFile, GI_GLIB_MAPPEDFILE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<MappedFile, ::GMappedFile, GI_GLIB_MAPPEDFILE_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMappedFile>
{ typedef GLib::MappedFile type; }; 

} // namespace repository

} // namespace gi

#endif
