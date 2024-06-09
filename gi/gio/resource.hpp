// AUTO-GENERATED

#ifndef _GI_GIO_RESOURCE_HPP_
#define _GI_GIO_RESOURCE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class InputStream;
class Resource_Ref;

class Resource;

namespace base {


#define GI_GIO_RESOURCE_BASE base::ResourceBase
class ResourceBase : public gi::detail::GBoxedWrapperBase<ResourceBase, ::GResource>
{
typedef gi::detail::GBoxedWrapperBase<ResourceBase, ::GResource> super_type;
public:

ResourceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_resource_get_type(); } 

// GResource* /*full*/ g_resource_new_from_data (GBytes* data /*none*/, GError ** error);
// ::GResource* /*full*/ g_resource_new_from_data (::GBytes* data /*none*/, GError ** error);
static GI_INLINE_DECL Gio::Resource new_from_data (GLib::Bytes_Ref data);
static GI_INLINE_DECL Gio::Resource new_from_data (GLib::Bytes_Ref data, GLib::Error * _error) noexcept;

// void g_resources_register (GResource* resource /*none*/);
// void g_resources_register (::GResource* resource /*none*/);
GI_INLINE_DECL void _register () noexcept;

// void g_resources_unregister (GResource* resource /*none*/);
// void g_resources_unregister (::GResource* resource /*none*/);
GI_INLINE_DECL void _unregister () noexcept;

// char** /*full*/ g_resource_enumerate_children (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// char** /*full*/ g_resource_enumerate_children (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> enumerate_children (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// gboolean g_resource_get_info (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resource_get_info (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
GI_INLINE_DECL bool get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags);
GI_INLINE_DECL bool get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize, guint32> get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL std::tuple<bool, gsize, guint32> get_info (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GBytes* /*full*/ g_resource_lookup_data (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* /*full*/ g_resource_lookup_data (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL GLib::Bytes lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL GLib::Bytes lookup_data (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GInputStream* /*full*/ g_resource_open_stream (GResource* resource /*none*/, const char* path /*none*/, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* /*full*/ g_resource_open_stream (::GResource* resource /*none*/, const char* path /*none*/, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL Gio::InputStream open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL Gio::InputStream open_stream (const gi::cstring_v path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GResource* /*full*/ g_resource_ref (GResource* resource /*none*/);
// ::GResource* /*full*/ g_resource_ref (::GResource* resource /*none*/);
// IGNORE; marked ignore

// void g_resource_unref (GResource* resource /*none*/);
// void g_resource_unref (::GResource* resource /*none*/);
// IGNORE; marked ignore

// GResource* /*full*/ g_resource_load (const gchar* filename /*none*/, GError ** error);
// ::GResource* /*full*/ g_resource_load (const char* filename /*none*/, GError ** error);
static GI_INLINE_DECL Gio::Resource load (const gi::cstring_v filename);
static GI_INLINE_DECL Gio::Resource load (const gi::cstring_v filename, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resource_extra_def.hpp>)
#include <gio/resource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resource_extra.hpp>)
#include <gio/resource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Resource_Ref;

class Resource : public gi::detail::GBoxedWrapper<Resource, ::GResource, GI_GIO_RESOURCE_BASE, Resource_Ref>
{ typedef gi::detail::GBoxedWrapper<Resource, ::GResource, GI_GIO_RESOURCE_BASE, Resource_Ref> super_type; using super_type::super_type; };


class Resource_Ref : public gi::detail::GBoxedRefWrapper<Resource, ::GResource, GI_GIO_RESOURCE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Resource, ::GResource, GI_GIO_RESOURCE_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GResource>
{ typedef Gio::Resource type; }; 

} // namespace repository

} // namespace gi

#endif
