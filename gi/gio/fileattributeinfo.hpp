// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFO_HPP_
#define _GI_GIO_FILEATTRIBUTEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfo_Ref;

class FileAttributeInfo;

namespace base {


#define GI_GIO_FILEATTRIBUTEINFO_BASE base::FileAttributeInfoBase
class FileAttributeInfoBase : public gi::detail::CBoxedWrapperBase<FileAttributeInfoBase, ::GFileAttributeInfo>
{
typedef gi::detail::CBoxedWrapperBase<FileAttributeInfoBase, ::GFileAttributeInfo> super_type;
public:

FileAttributeInfoBase (std::nullptr_t = nullptr) : super_type() {}

// char* /*none*/ FileAttributeInfo::name (const ::GFileAttributeInfo* obj /*none*/);
// char* /*none*/ FileAttributeInfo::name (const ::GFileAttributeInfo* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// ::GFileAttributeType FileAttributeInfo::type (const ::GFileAttributeInfo* obj /*none*/);
// ::GFileAttributeType FileAttributeInfo::type (const ::GFileAttributeInfo* obj /*none*/);
GI_INLINE_DECL Gio::FileAttributeType type_ () const noexcept;

//  FileAttributeInfo::type (::GFileAttributeInfo* obj /*none*/, ::GFileAttributeType _value);
// void FileAttributeInfo::type (::GFileAttributeInfo* obj /*none*/, ::GFileAttributeType _value);
GI_INLINE_DECL void type_ (Gio::FileAttributeType _value) noexcept;

// ::GFileAttributeInfoFlags FileAttributeInfo::flags (const ::GFileAttributeInfo* obj /*none*/);
// ::GFileAttributeInfoFlags FileAttributeInfo::flags (const ::GFileAttributeInfo* obj /*none*/);
GI_INLINE_DECL Gio::FileAttributeInfoFlags flags_ () const noexcept;

//  FileAttributeInfo::flags (::GFileAttributeInfo* obj /*none*/, ::GFileAttributeInfoFlags _value);
// void FileAttributeInfo::flags (::GFileAttributeInfo* obj /*none*/, ::GFileAttributeInfoFlags _value);
GI_INLINE_DECL void flags_ (Gio::FileAttributeInfoFlags _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfo_extra_def.hpp>)
#include <gio/fileattributeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfo_extra.hpp>)
#include <gio/fileattributeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfo_Ref;

class FileAttributeInfo : public gi::detail::CBoxedWrapper<FileAttributeInfo, ::GFileAttributeInfo, GI_GIO_FILEATTRIBUTEINFO_BASE, FileAttributeInfo_Ref>
{ typedef gi::detail::CBoxedWrapper<FileAttributeInfo, ::GFileAttributeInfo, GI_GIO_FILEATTRIBUTEINFO_BASE, FileAttributeInfo_Ref> super_type; using super_type::super_type; };


class FileAttributeInfo_Ref : public gi::detail::CBoxedRefWrapper<FileAttributeInfo, ::GFileAttributeInfo, GI_GIO_FILEATTRIBUTEINFO_BASE>
{ typedef gi::detail::CBoxedRefWrapper<FileAttributeInfo, ::GFileAttributeInfo, GI_GIO_FILEATTRIBUTEINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileAttributeInfo>
{ typedef Gio::FileAttributeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
