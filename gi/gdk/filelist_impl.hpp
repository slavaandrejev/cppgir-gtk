// AUTO-GENERATED

#ifndef _GI_GDK_FILELIST_IMPL_HPP_
#define _GI_GDK_FILELIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkFileList* /*full*/ gdk_file_list_new_from_array (GFile** files /*none*/, gsize n_files);
// ::GdkFileList* /*full*/ gdk_file_list_new_from_array (::GFile** files /*none*/, gsize n_files);
Gdk::FileList base::FileListBase::new_from_array (gi::CollectionParameter<gi::DSpan, ::GFile*, gi::transfer_none_t> files) noexcept
{
  typedef ::GdkFileList* (*call_wrap_t) (::GFile** files, gsize n_files);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_file_list_new_from_array;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  auto _temp_ret = call_wrap_v ((::GFile**) (files_to_c), (gsize) (files._size()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkFileList* /*full*/ gdk_file_list_new_from_list (GSList* files /*none*/);
// ::GdkFileList* /*full*/ gdk_file_list_new_from_list (::GSList* files /*none*/);
Gdk::FileList base::FileListBase::new_from_list (gi::CollectionParameter<GSList, ::GFile*, gi::transfer_none_t> files) noexcept
{
  typedef ::GdkFileList* (*call_wrap_t) (::GSList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_file_list_new_from_list;
  auto files_w = unwrap (std::move(files), gi::transfer_none);
  auto files_to_c = files_w;
  auto _temp_ret = call_wrap_v ((::GSList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSList* /*container*/ gdk_file_list_get_files (GdkFileList* file_list /*none*/);
// ::GSList* /*container*/ gdk_file_list_get_files (::GdkFileList* file_list /*none*/);
gi::Collection<GSList, ::GFile*, gi::transfer_container_t> base::FileListBase::get_files () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GdkFileList* file_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_file_list_get_files;
  auto _temp_ret = call_wrap_v ((::GdkFileList*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, ::GFile*, gi::transfer_container_t>>(_temp_ret, gi::transfer_container);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/filelist_extra_def_impl.hpp>)
#include <gdk/filelist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/filelist_extra_impl.hpp>)
#include <gdk/filelist_extra_impl.hpp>
#endif
#endif

#endif
