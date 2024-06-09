// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFOLIST_HPP_
#define _GI_GIO_FILEATTRIBUTEINFOLIST_HPP_


namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfo;
class FileAttributeInfoList_Ref;
class FileAttributeInfo_Ref;

class FileAttributeInfoList;

namespace base {


#define GI_GIO_FILEATTRIBUTEINFOLIST_BASE base::FileAttributeInfoListBase
class FileAttributeInfoListBase : public gi::detail::GBoxedWrapperBase<FileAttributeInfoListBase, ::GFileAttributeInfoList>
{
typedef gi::detail::GBoxedWrapperBase<FileAttributeInfoListBase, ::GFileAttributeInfoList> super_type;
public:

FileAttributeInfoListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_file_attribute_info_list_get_type(); } 

// ::GFileAttributeInfo* /*none*/ FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj /*none*/);
// ::GFileAttributeInfo* /*none*/ FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj /*none*/);
GI_INLINE_DECL Gio::FileAttributeInfo_Ref infos_ () const noexcept;

// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj /*none*/);
// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj /*none*/);
GI_INLINE_DECL gint n_infos_ () const noexcept;

//  FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj /*none*/, gint _value);
// void FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj /*none*/, gint _value);
GI_INLINE_DECL void n_infos_ (gint _value) noexcept;

// GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_new ();
// ::GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_new ();
static GI_INLINE_DECL Gio::FileAttributeInfoList new_ () noexcept;

// void g_file_attribute_info_list_add (GFileAttributeInfoList* list /*none*/, const char* name /*none*/, GFileAttributeType type, GFileAttributeInfoFlags flags);
// void g_file_attribute_info_list_add (::GFileAttributeInfoList* list /*none*/, const char* name /*none*/, ::GFileAttributeType type, ::GFileAttributeInfoFlags flags);
GI_INLINE_DECL void add (const gi::cstring_v name, Gio::FileAttributeType type, Gio::FileAttributeInfoFlags flags) noexcept;

// GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_dup (GFileAttributeInfoList* list /*none*/);
// ::GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_dup (::GFileAttributeInfoList* list /*none*/);
GI_INLINE_DECL Gio::FileAttributeInfoList dup () noexcept;

// const GFileAttributeInfo* /*none*/ g_file_attribute_info_list_lookup (GFileAttributeInfoList* list /*none*/, const char* name /*none*/);
// const ::GFileAttributeInfo* /*none*/ g_file_attribute_info_list_lookup (::GFileAttributeInfoList* list /*none*/, const char* name /*none*/);
GI_INLINE_DECL Gio::FileAttributeInfo_Ref lookup (const gi::cstring_v name) noexcept;

// GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_ref (GFileAttributeInfoList* list /*none*/);
// ::GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_ref (::GFileAttributeInfoList* list /*none*/);
// IGNORE; marked ignore

// void g_file_attribute_info_list_unref (GFileAttributeInfoList* list /*none*/);
// void g_file_attribute_info_list_unref (::GFileAttributeInfoList* list /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra_def.hpp>)
#include <gio/fileattributeinfolist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra.hpp>)
#include <gio/fileattributeinfolist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfoList_Ref;

class FileAttributeInfoList : public gi::detail::GBoxedWrapper<FileAttributeInfoList, ::GFileAttributeInfoList, GI_GIO_FILEATTRIBUTEINFOLIST_BASE, FileAttributeInfoList_Ref>
{ typedef gi::detail::GBoxedWrapper<FileAttributeInfoList, ::GFileAttributeInfoList, GI_GIO_FILEATTRIBUTEINFOLIST_BASE, FileAttributeInfoList_Ref> super_type; using super_type::super_type; };


class FileAttributeInfoList_Ref : public gi::detail::GBoxedRefWrapper<FileAttributeInfoList, ::GFileAttributeInfoList, GI_GIO_FILEATTRIBUTEINFOLIST_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FileAttributeInfoList, ::GFileAttributeInfoList, GI_GIO_FILEATTRIBUTEINFOLIST_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileAttributeInfoList>
{ typedef Gio::FileAttributeInfoList type; }; 

} // namespace repository

} // namespace gi

#endif
