// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEMATCHER_HPP_
#define _GI_GIO_FILEATTRIBUTEMATCHER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class FileAttributeMatcher_Ref;

class FileAttributeMatcher;

namespace base {


#define GI_GIO_FILEATTRIBUTEMATCHER_BASE base::FileAttributeMatcherBase
class FileAttributeMatcherBase : public gi::detail::GBoxedWrapperBase<FileAttributeMatcherBase, ::GFileAttributeMatcher>
{
typedef gi::detail::GBoxedWrapperBase<FileAttributeMatcherBase, ::GFileAttributeMatcher> super_type;
public:

FileAttributeMatcherBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_file_attribute_matcher_get_type(); } 

// GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_new (const char* attributes /*none*/);
// ::GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_new (const char* attributes /*none*/);
static GI_INLINE_DECL Gio::FileAttributeMatcher new_ (const gi::cstring_v attributes) noexcept;

// gboolean g_file_attribute_matcher_enumerate_namespace (GFileAttributeMatcher* matcher /*none*/, const char* ns /*none*/);
// gboolean g_file_attribute_matcher_enumerate_namespace (::GFileAttributeMatcher* matcher /*none*/, const char* ns /*none*/);
GI_INLINE_DECL bool enumerate_namespace (const gi::cstring_v ns) noexcept;

// const char* /*none,nullable*/ g_file_attribute_matcher_enumerate_next (GFileAttributeMatcher* matcher /*none*/);
// const char* /*none,nullable*/ g_file_attribute_matcher_enumerate_next (::GFileAttributeMatcher* matcher /*none*/);
GI_INLINE_DECL gi::cstring_v enumerate_next () noexcept;

// gboolean g_file_attribute_matcher_matches (GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
// gboolean g_file_attribute_matcher_matches (::GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL bool matches (const gi::cstring_v attribute) noexcept;

// gboolean g_file_attribute_matcher_matches_only (GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
// gboolean g_file_attribute_matcher_matches_only (::GFileAttributeMatcher* matcher /*none*/, const char* attribute /*none*/);
GI_INLINE_DECL bool matches_only (const gi::cstring_v attribute) noexcept;

// GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_ref (GFileAttributeMatcher* matcher /*none*/);
// ::GFileAttributeMatcher* /*full*/ g_file_attribute_matcher_ref (::GFileAttributeMatcher* matcher /*none*/);
// IGNORE; marked ignore

// GFileAttributeMatcher* /*full,nullable*/ g_file_attribute_matcher_subtract (GFileAttributeMatcher* matcher /*none,nullable*/, GFileAttributeMatcher* subtract /*none,nullable*/);
// ::GFileAttributeMatcher* /*full,nullable*/ g_file_attribute_matcher_subtract (::GFileAttributeMatcher* matcher /*none,nullable*/, ::GFileAttributeMatcher* subtract /*none,nullable*/);
GI_INLINE_DECL Gio::FileAttributeMatcher subtract (Gio::FileAttributeMatcher_Ref subtract) noexcept;
GI_INLINE_DECL Gio::FileAttributeMatcher subtract () noexcept;

// char* /*full*/ g_file_attribute_matcher_to_string (GFileAttributeMatcher* matcher /*none,nullable*/);
// char* /*full*/ g_file_attribute_matcher_to_string (::GFileAttributeMatcher* matcher /*none,nullable*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// void g_file_attribute_matcher_unref (GFileAttributeMatcher* matcher /*none*/);
// void g_file_attribute_matcher_unref (::GFileAttributeMatcher* matcher /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributematcher_extra_def.hpp>)
#include <gio/fileattributematcher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributematcher_extra.hpp>)
#include <gio/fileattributematcher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileAttributeMatcher_Ref;

class FileAttributeMatcher : public gi::detail::GBoxedWrapper<FileAttributeMatcher, ::GFileAttributeMatcher, GI_GIO_FILEATTRIBUTEMATCHER_BASE, FileAttributeMatcher_Ref>
{ typedef gi::detail::GBoxedWrapper<FileAttributeMatcher, ::GFileAttributeMatcher, GI_GIO_FILEATTRIBUTEMATCHER_BASE, FileAttributeMatcher_Ref> super_type; using super_type::super_type; };


class FileAttributeMatcher_Ref : public gi::detail::GBoxedRefWrapper<FileAttributeMatcher, ::GFileAttributeMatcher, GI_GIO_FILEATTRIBUTEMATCHER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FileAttributeMatcher, ::GFileAttributeMatcher, GI_GIO_FILEATTRIBUTEMATCHER_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileAttributeMatcher>
{ typedef Gio::FileAttributeMatcher type; }; 

} // namespace repository

} // namespace gi

#endif
