// AUTO-GENERATED

#ifndef _GI_GIO_FILEENUMERATOR_HPP_
#define _GI_GIO_FILEENUMERATOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class File;
class FileInfo;

class FileEnumerator;

namespace base {


#define GI_GIO_FILEENUMERATOR_BASE base::FileEnumeratorBase
class FileEnumeratorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFileEnumerator BaseObjectType;

FileEnumeratorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_enumerator_get_type(); } 

// gboolean g_file_enumerator_close (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_enumerator_close (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_file_enumerator_close_async (GFileEnumerator* enumerator /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_enumerator_close_async (::GFileEnumerator* enumerator /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_enumerator_close_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_file_enumerator_close_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* /*full*/ g_file_enumerator_get_child (GFileEnumerator* enumerator /*none*/, GFileInfo* info /*none*/);
// ::GFile* /*full*/ g_file_enumerator_get_child (::GFileEnumerator* enumerator /*none*/, ::GFileInfo* info /*none*/);
GI_INLINE_DECL Gio::File get_child (Gio::FileInfo info) noexcept;

// GFile* /*none*/ g_file_enumerator_get_container (GFileEnumerator* enumerator /*none*/);
// ::GFile* /*none*/ g_file_enumerator_get_container (::GFileEnumerator* enumerator /*none*/);
GI_INLINE_DECL Gio::File get_container () noexcept;

// gboolean g_file_enumerator_has_pending (GFileEnumerator* enumerator /*none*/);
// gboolean g_file_enumerator_has_pending (::GFileEnumerator* enumerator /*none*/);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_file_enumerator_is_closed (GFileEnumerator* enumerator /*none*/);
// gboolean g_file_enumerator_is_closed (::GFileEnumerator* enumerator /*none*/);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_file_enumerator_iterate (GFileEnumerator* direnum /*none*/, GFileInfo** out_info /*none,out,opt*/, GFile** out_child /*none,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_file_enumerator_iterate (::GFileEnumerator* direnum /*none*/, ::GFileInfo** out_info /*none,out,opt*/, ::GFile** out_child /*none,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable);
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child);
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate ();
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate (GLib::Error * _error) noexcept;

// GFileInfo* /*full,nullable*/ g_file_enumerator_next_file (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full,nullable*/ g_file_enumerator_next_file (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo next_file (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo next_file ();
GI_INLINE_DECL Gio::FileInfo next_file (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo next_file (GLib::Error * _error) noexcept;

// void g_file_enumerator_next_files_async (GFileEnumerator* enumerator /*none*/, int num_files, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_file_enumerator_next_files_async (::GFileEnumerator* enumerator /*none*/, gint num_files, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void next_files_async (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void next_files_async (gint num_files, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GList* /*full*/ g_file_enumerator_next_files_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_file_enumerator_next_files_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> next_files_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> next_files_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_enumerator_set_pending (GFileEnumerator* enumerator /*none*/, gboolean pending);
// void g_file_enumerator_set_pending (::GFileEnumerator* enumerator /*none*/, gboolean pending);
GI_INLINE_DECL void set_pending (gboolean pending) noexcept;

gi::property_proxy_write<Gio::File, base::FileEnumeratorBase> property_container()
{ return gi::property_proxy_write<Gio::File, base::FileEnumeratorBase> (*this, "container"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra_def.hpp>)
#include <gio/fileenumerator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra.hpp>)
#include <gio/fileenumerator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileEnumerator : public GI_GIO_FILEENUMERATOR_BASE
{ typedef GI_GIO_FILEENUMERATOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileEnumerator>
{ typedef Gio::FileEnumerator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileEnumeratorClassDef
{
typedef FileEnumeratorClassDef self;
public:
typedef Gio::FileEnumerator instance_type;
typedef ::GFileEnumeratorClass class_type;

using GI_MEMBER_CHECK_CONFLICT(close_async) = self;
using GI_MEMBER_CHECK_CONFLICT(close_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(close_fn) = self;
using GI_MEMBER_CHECK_CONFLICT(next_file) = self;
using GI_MEMBER_CHECK_CONFLICT(next_files_async) = self;
using GI_MEMBER_CHECK_CONFLICT(next_files_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FileEnumeratorClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FileEnumerator::close_async (GFileEnumerator* enumerator /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileEnumerator::close_async (::GFileEnumerator* enumerator /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gboolean FileEnumerator::close_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean FileEnumerator::close_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// gboolean FileEnumerator::close_fn (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileEnumerator::close_fn (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// GFileInfo* /*full,nullable*/ FileEnumerator::next_file (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full,nullable*/ FileEnumerator::next_file (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::FileInfo next_file_ (Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void FileEnumerator::next_files_async (GFileEnumerator* enumerator /*none*/, int num_files, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileEnumerator::next_files_async (::GFileEnumerator* enumerator /*none*/, gint num_files, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void next_files_async_ (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GList* /*full*/ FileEnumerator::next_files_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ FileEnumerator::next_files_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> next_files_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class FileEnumeratorClass: public detail::ClassTemplate<Gio::impl::internal::FileEnumeratorClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FileEnumeratorClassDef;
typedef FileEnumeratorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileEnumeratorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void FileEnumerator::close_async (GFileEnumerator* enumerator /*none*/, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileEnumerator::close_async (::GFileEnumerator* enumerator /*none*/, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void close_async_ (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gboolean FileEnumerator::close_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean FileEnumerator::close_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool close_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// gboolean FileEnumerator::close_fn (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean FileEnumerator::close_fn (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool close_fn_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// GFileInfo* /*full,nullable*/ FileEnumerator::next_file (GFileEnumerator* enumerator /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GFileInfo* /*full,nullable*/ FileEnumerator::next_file (::GFileEnumerator* enumerator /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::FileInfo next_file_ (Gio::Cancellable cancellable, GLib::Error * _error) override;

// void FileEnumerator::next_files_async (GFileEnumerator* enumerator /*none*/, int num_files, int io_priority, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void FileEnumerator::next_files_async (::GFileEnumerator* enumerator /*none*/, gint num_files, gint io_priority, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void next_files_async_ (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GList* /*full*/ FileEnumerator::next_files_finish (GFileEnumerator* enumerator /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ FileEnumerator::next_files_finish (::GFileEnumerator* enumerator /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GFileInfo*, gi::transfer_full_t> next_files_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct FileEnumeratorClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FileEnumeratorClass, close_async)
  GI_MEMBER_DEFINE(FileEnumeratorClass, close_finish)
  GI_MEMBER_DEFINE(FileEnumeratorClass, close_fn)
  GI_MEMBER_DEFINE(FileEnumeratorClass, next_file)
  GI_MEMBER_DEFINE(FileEnumeratorClass, next_files_async)
  GI_MEMBER_DEFINE(FileEnumeratorClass, next_files_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, close_fn),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, next_file),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, next_files_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, next_files_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FileEnumeratorImpl = detail::ObjectImpl<FileEnumerator, internal::FileEnumeratorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
