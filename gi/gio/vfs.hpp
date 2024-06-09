// AUTO-GENERATED

#ifndef _GI_GIO_VFS_HPP_
#define _GI_GIO_VFS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class File;
class FileAttributeInfoList;
class FileAttributeInfoList_Ref;
class FileAttributeMatcher;
class FileAttributeMatcher_Ref;
class FileInfo;

class Vfs;

namespace base {


#define GI_GIO_VFS_BASE base::VfsBase
class VfsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GVfs BaseObjectType;

VfsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_vfs_get_type(); } 

// GVfs* /*none*/ g_vfs_get_default ();
// ::GVfs* /*none*/ g_vfs_get_default ();
static GI_INLINE_DECL Gio::Vfs get_default () noexcept;

// GVfs* /*none*/ g_vfs_get_local ();
// ::GVfs* /*none*/ g_vfs_get_local ();
static GI_INLINE_DECL Gio::Vfs get_local () noexcept;

// GFile* /*full*/ g_vfs_get_file_for_path (GVfs* vfs /*none*/, const char* path /*none*/);
// ::GFile* /*full*/ g_vfs_get_file_for_path (::GVfs* vfs /*none*/, const char* path /*none*/);
GI_INLINE_DECL Gio::File get_file_for_path (const gi::cstring_v path) noexcept;

// GFile* /*full*/ g_vfs_get_file_for_uri (GVfs* vfs /*none*/, const char* uri /*none*/);
// ::GFile* /*full*/ g_vfs_get_file_for_uri (::GVfs* vfs /*none*/, const char* uri /*none*/);
GI_INLINE_DECL Gio::File get_file_for_uri (const gi::cstring_v uri) noexcept;

// const gchar* const* /*none*/ g_vfs_get_supported_uri_schemes (GVfs* vfs /*none*/);
// const char** /*none*/ g_vfs_get_supported_uri_schemes (::GVfs* vfs /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_uri_schemes () noexcept;

// gboolean g_vfs_is_active (GVfs* vfs /*none*/);
// gboolean g_vfs_is_active (::GVfs* vfs /*none*/);
GI_INLINE_DECL bool is_active () noexcept;

// GFile* /*full*/ g_vfs_parse_name (GVfs* vfs /*none*/, const char* parse_name /*none*/);
// ::GFile* /*full*/ g_vfs_parse_name (::GVfs* vfs /*none*/, const char* parse_name /*none*/);
GI_INLINE_DECL Gio::File parse_name (const gi::cstring_v parse_name) noexcept;

// gboolean g_vfs_register_uri_scheme (GVfs* vfs /*none*/, const char* scheme /*none*/, GVfsFileLookupFunc uri_func /*none,nullable*/, gpointer uri_data, GDestroyNotify uri_destroy /*none,nullable*/, GVfsFileLookupFunc parse_name_func /*none,nullable*/, gpointer parse_name_data, GDestroyNotify parse_name_destroy /*none,nullable*/);
// gboolean g_vfs_register_uri_scheme (::GVfs* vfs /*none*/, const char* scheme /*none*/, Gio::VfsFileLookupFunc::cfunction_type uri_func /*none,nullable*/, void* uri_data, GLib::DestroyNotify::cfunction_type uri_destroy /*none,nullable*/, Gio::VfsFileLookupFunc::cfunction_type parse_name_func /*none,nullable*/, void* parse_name_data, GLib::DestroyNotify::cfunction_type parse_name_destroy /*none,nullable*/);
GI_INLINE_DECL bool register_uri_scheme (const gi::cstring_v scheme, Gio::VfsFileLookupFunc uri_func, Gio::VfsFileLookupFunc parse_name_func) noexcept;

// gboolean g_vfs_unregister_uri_scheme (GVfs* vfs /*none*/, const char* scheme /*none*/);
// gboolean g_vfs_unregister_uri_scheme (::GVfs* vfs /*none*/, const char* scheme /*none*/);
GI_INLINE_DECL bool unregister_uri_scheme (const gi::cstring_v scheme) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/vfs_extra_def.hpp>)
#include <gio/vfs_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/vfs_extra.hpp>)
#include <gio/vfs_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Vfs : public GI_GIO_VFS_BASE
{ typedef GI_GIO_VFS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GVfs>
{ typedef Gio::Vfs type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class VfsClassDef
{
typedef VfsClassDef self;
public:
typedef Gio::Vfs instance_type;
typedef ::GVfsClass class_type;

using GI_MEMBER_CHECK_CONFLICT(add_writable_namespaces) = self;
using GI_MEMBER_CHECK_CONFLICT(get_file_for_path) = self;
using GI_MEMBER_CHECK_CONFLICT(get_file_for_uri) = self;
using GI_MEMBER_CHECK_CONFLICT(get_supported_uri_schemes) = self;
using GI_MEMBER_CHECK_CONFLICT(is_active) = self;
using GI_MEMBER_CHECK_CONFLICT(local_file_moved) = self;
using GI_MEMBER_CHECK_CONFLICT(local_file_removed) = self;
using GI_MEMBER_CHECK_CONFLICT(local_file_set_attributes) = self;
using GI_MEMBER_CHECK_CONFLICT(parse_name) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~VfsClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Vfs::add_writable_namespaces (GVfs* vfs /*none*/, GFileAttributeInfoList* list /*none*/);
// void Vfs::add_writable_namespaces (::GVfs* vfs /*none*/, ::GFileAttributeInfoList* list /*none*/);
virtual void add_writable_namespaces_ (Gio::FileAttributeInfoList_Ref list) noexcept = 0;

// GFile* /*full*/ Vfs::get_file_for_path (GVfs* vfs /*none*/, const char* path /*none*/);
// ::GFile* /*full*/ Vfs::get_file_for_path (::GVfs* vfs /*none*/, const char* path /*none*/);
virtual Gio::File get_file_for_path_ (const gi::cstring_v path) noexcept = 0;

// GFile* /*full*/ Vfs::get_file_for_uri (GVfs* vfs /*none*/, const char* uri /*none*/);
// ::GFile* /*full*/ Vfs::get_file_for_uri (::GVfs* vfs /*none*/, const char* uri /*none*/);
virtual Gio::File get_file_for_uri_ (const gi::cstring_v uri) noexcept = 0;

// const gchar* const* /*none*/ Vfs::get_supported_uri_schemes (GVfs* vfs /*none*/);
// const char** /*none*/ Vfs::get_supported_uri_schemes (::GVfs* vfs /*none*/);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_uri_schemes_ () noexcept = 0;

// gboolean Vfs::is_active (GVfs* vfs /*none*/);
// gboolean Vfs::is_active (::GVfs* vfs /*none*/);
virtual bool is_active_ () noexcept = 0;

// void Vfs::local_file_add_info (GVfs* vfs /*none*/, const char* filename /*none*/, guint64 device, GFileAttributeMatcher* attribute_matcher /*none*/, GFileInfo* info /*none*/, GCancellable* cancellable /*none,nullable*/, gpointer* extra_data, GDestroyNotify* free_extra_data /*none*/);
// void Vfs::local_file_add_info (::GVfs* vfs /*none*/, const char* filename /*none*/, guint64 device, ::GFileAttributeMatcher* attribute_matcher /*none*/, ::GFileInfo* info /*none*/, ::GCancellable* cancellable /*none,nullable*/, void* extra_data, GLib::DestroyNotify::cfunction_type free_extra_data /*none*/);
// SKIP; inconsistent free_extra_data in pointer depth (1 vs 0), inconsistent extra_data in pointer depth (2 vs 1)

// void Vfs::local_file_moved (GVfs* vfs /*none*/, const char* source /*none*/, const char* dest /*none*/);
// void Vfs::local_file_moved (::GVfs* vfs /*none*/, const char* source /*none*/, const char* dest /*none*/);
virtual void local_file_moved_ (const gi::cstring_v source, const gi::cstring_v dest) noexcept = 0;

// void Vfs::local_file_removed (GVfs* vfs /*none*/, const char* filename /*none*/);
// void Vfs::local_file_removed (::GVfs* vfs /*none*/, const char* filename /*none*/);
virtual void local_file_removed_ (const gi::cstring_v filename) noexcept = 0;

// gboolean Vfs::local_file_set_attributes (GVfs* vfs /*none*/, const char* filename /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Vfs::local_file_set_attributes (::GVfs* vfs /*none*/, const char* filename /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool local_file_set_attributes_ (const gi::cstring_v filename, Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GFile* /*full*/ Vfs::parse_name (GVfs* vfs /*none*/, const char* parse_name /*none*/);
// ::GFile* /*full*/ Vfs::parse_name (::GVfs* vfs /*none*/, const char* parse_name /*none*/);
virtual Gio::File parse_name_ (const gi::cstring_v parse_name) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class VfsClass: public detail::ClassTemplate<Gio::impl::internal::VfsClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::VfsClassDef;
typedef VfsClass self;
typedef detail::ClassTemplate<Gio::impl::internal::VfsClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Vfs::add_writable_namespaces (GVfs* vfs /*none*/, GFileAttributeInfoList* list /*none*/);
// void Vfs::add_writable_namespaces (::GVfs* vfs /*none*/, ::GFileAttributeInfoList* list /*none*/);
GI_INLINE_DECL void add_writable_namespaces_ (Gio::FileAttributeInfoList_Ref list) noexcept override;

// GFile* /*full*/ Vfs::get_file_for_path (GVfs* vfs /*none*/, const char* path /*none*/);
// ::GFile* /*full*/ Vfs::get_file_for_path (::GVfs* vfs /*none*/, const char* path /*none*/);
GI_INLINE_DECL Gio::File get_file_for_path_ (const gi::cstring_v path) noexcept override;

// GFile* /*full*/ Vfs::get_file_for_uri (GVfs* vfs /*none*/, const char* uri /*none*/);
// ::GFile* /*full*/ Vfs::get_file_for_uri (::GVfs* vfs /*none*/, const char* uri /*none*/);
GI_INLINE_DECL Gio::File get_file_for_uri_ (const gi::cstring_v uri) noexcept override;

// const gchar* const* /*none*/ Vfs::get_supported_uri_schemes (GVfs* vfs /*none*/);
// const char** /*none*/ Vfs::get_supported_uri_schemes (::GVfs* vfs /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_uri_schemes_ () noexcept override;

// gboolean Vfs::is_active (GVfs* vfs /*none*/);
// gboolean Vfs::is_active (::GVfs* vfs /*none*/);
GI_INLINE_DECL bool is_active_ () noexcept override;

// void Vfs::local_file_add_info (GVfs* vfs /*none*/, const char* filename /*none*/, guint64 device, GFileAttributeMatcher* attribute_matcher /*none*/, GFileInfo* info /*none*/, GCancellable* cancellable /*none,nullable*/, gpointer* extra_data, GDestroyNotify* free_extra_data /*none*/);
// void Vfs::local_file_add_info (::GVfs* vfs /*none*/, const char* filename /*none*/, guint64 device, ::GFileAttributeMatcher* attribute_matcher /*none*/, ::GFileInfo* info /*none*/, ::GCancellable* cancellable /*none,nullable*/, void* extra_data, GLib::DestroyNotify::cfunction_type free_extra_data /*none*/);
// SKIP; inconsistent free_extra_data in pointer depth (1 vs 0), inconsistent extra_data in pointer depth (2 vs 1)

// void Vfs::local_file_moved (GVfs* vfs /*none*/, const char* source /*none*/, const char* dest /*none*/);
// void Vfs::local_file_moved (::GVfs* vfs /*none*/, const char* source /*none*/, const char* dest /*none*/);
GI_INLINE_DECL void local_file_moved_ (const gi::cstring_v source, const gi::cstring_v dest) noexcept override;

// void Vfs::local_file_removed (GVfs* vfs /*none*/, const char* filename /*none*/);
// void Vfs::local_file_removed (::GVfs* vfs /*none*/, const char* filename /*none*/);
GI_INLINE_DECL void local_file_removed_ (const gi::cstring_v filename) noexcept override;

// gboolean Vfs::local_file_set_attributes (GVfs* vfs /*none*/, const char* filename /*none*/, GFileInfo* info /*none*/, GFileQueryInfoFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean Vfs::local_file_set_attributes (::GVfs* vfs /*none*/, const char* filename /*none*/, ::GFileInfo* info /*none*/, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool local_file_set_attributes_ (const gi::cstring_v filename, Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// GFile* /*full*/ Vfs::parse_name (GVfs* vfs /*none*/, const char* parse_name /*none*/);
// ::GFile* /*full*/ Vfs::parse_name (::GVfs* vfs /*none*/, const char* parse_name /*none*/);
GI_INLINE_DECL Gio::File parse_name_ (const gi::cstring_v parse_name) noexcept override;


};


struct VfsClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(VfsClass, add_writable_namespaces)
  GI_MEMBER_DEFINE(VfsClass, get_file_for_path)
  GI_MEMBER_DEFINE(VfsClass, get_file_for_uri)
  GI_MEMBER_DEFINE(VfsClass, get_supported_uri_schemes)
  GI_MEMBER_DEFINE(VfsClass, is_active)
  GI_MEMBER_DEFINE(VfsClass, local_file_moved)
  GI_MEMBER_DEFINE(VfsClass, local_file_removed)
  GI_MEMBER_DEFINE(VfsClass, local_file_set_attributes)
  GI_MEMBER_DEFINE(VfsClass, parse_name)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, add_writable_namespaces),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_file_for_path),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_file_for_uri),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_supported_uri_schemes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_active),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, local_file_moved),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, local_file_removed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, local_file_set_attributes),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, parse_name)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using VfsImpl = detail::ObjectImpl<Vfs, internal::VfsClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
