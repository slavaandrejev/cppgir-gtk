// AUTO-GENERATED

#ifndef _GI_GDK_FILELIST_HPP_
#define _GI_GDK_FILELIST_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class FileList_Ref;

class FileList;

namespace base {


#define GI_GDK_FILELIST_BASE base::FileListBase
class FileListBase : public gi::detail::GBoxedWrapperBase<FileListBase, ::GdkFileList>
{
typedef gi::detail::GBoxedWrapperBase<FileListBase, ::GdkFileList> super_type;
public:

FileListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_file_list_get_type(); } 

// GdkFileList* /*full*/ gdk_file_list_new_from_array (GFile** files /*none*/, gsize n_files);
// ::GdkFileList* /*full*/ gdk_file_list_new_from_array (::GFile** files /*none*/, gsize n_files);
static GI_INLINE_DECL Gdk::FileList new_from_array (gi::CollectionParameter<gi::DSpan, ::GFile*, gi::transfer_none_t> files) noexcept;

// GdkFileList* /*full*/ gdk_file_list_new_from_list (GSList* files /*none*/);
// ::GdkFileList* /*full*/ gdk_file_list_new_from_list (::GSList* files /*none*/);
static GI_INLINE_DECL Gdk::FileList new_from_list (gi::CollectionParameter<GSList, ::GFile*, gi::transfer_none_t> files) noexcept;

// GSList* /*container*/ gdk_file_list_get_files (GdkFileList* file_list /*none*/);
// ::GSList* /*container*/ gdk_file_list_get_files (::GdkFileList* file_list /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::GFile*, gi::transfer_container_t> get_files () noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/filelist_extra_def.hpp>)
#include <gdk/filelist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/filelist_extra.hpp>)
#include <gdk/filelist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class FileList_Ref;

class FileList : public gi::detail::GBoxedWrapper<FileList, ::GdkFileList, GI_GDK_FILELIST_BASE, FileList_Ref>
{ typedef gi::detail::GBoxedWrapper<FileList, ::GdkFileList, GI_GDK_FILELIST_BASE, FileList_Ref> super_type; using super_type::super_type; };


class FileList_Ref : public gi::detail::GBoxedRefWrapper<FileList, ::GdkFileList, GI_GDK_FILELIST_BASE>
{ typedef gi::detail::GBoxedRefWrapper<FileList, ::GdkFileList, GI_GDK_FILELIST_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkFileList>
{ typedef Gdk::FileList type; }; 

} // namespace repository

} // namespace gi

#endif
