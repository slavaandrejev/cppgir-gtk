// AUTO-GENERATED

#ifndef _GI_GIO_RESOLVER_HPP_
#define _GI_GIO_RESOLVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InetAddress;
class SrvTarget;
class SrvTarget_Ref;

class Resolver;

namespace base {


#define GI_GIO_RESOLVER_BASE base::ResolverBase
class ResolverBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GResolver BaseObjectType;

ResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_resolver_get_type(); } 

// void g_resolver_free_addresses (GList* addresses /*none*/);
// void g_resolver_free_addresses (::GList* addresses /*none*/);
static GI_INLINE_DECL void free_addresses (gi::CollectionParameter<GList, void*, gi::transfer_none_t> addresses) noexcept;

// void g_resolver_free_targets (GList* targets /*none*/);
// void g_resolver_free_targets (::GList* targets /*none*/);
static GI_INLINE_DECL void free_targets (gi::CollectionParameter<GList, void*, gi::transfer_none_t> targets) noexcept;

// GResolver* /*full*/ g_resolver_get_default ();
// ::GResolver* /*full*/ g_resolver_get_default ();
static GI_INLINE_DECL Gio::Resolver get_default () noexcept;

// FAILURE on g_resolver_records_from_res_query; No such node (<xmlattr>.transfer-ownership)
// unsigned g_resolver_get_timeout (GResolver* resolver /*none*/);
// guint g_resolver_get_timeout (::GResolver* resolver /*none*/);
GI_INLINE_DECL guint get_timeout () noexcept;

// gchar* /*full*/ g_resolver_lookup_by_address (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ g_resolver_lookup_by_address (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::cstring lookup_by_address (Gio::InetAddress address);
GI_INLINE_DECL gi::cstring lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::cstring lookup_by_address (Gio::InetAddress address, GLib::Error * _error) noexcept;

// void g_resolver_lookup_by_address_async (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_by_address_async (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_by_address_async (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_by_address_async (Gio::InetAddress address, Gio::AsyncReadyCallback callback) noexcept;

// gchar* /*full*/ g_resolver_lookup_by_address_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full*/ g_resolver_lookup_by_address_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring lookup_by_address_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::cstring lookup_by_address_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* /*full*/ g_resolver_lookup_by_name (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name (const gi::cstring_v hostname, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name (const gi::cstring_v hostname);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name (const gi::cstring_v hostname, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name (const gi::cstring_v hostname, GLib::Error * _error) noexcept;

// void g_resolver_lookup_by_name_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_by_name_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_by_name_async (const gi::cstring_v hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_by_name_async (const gi::cstring_v hostname, Gio::AsyncReadyCallback callback) noexcept;

// GList* /*full*/ g_resolver_lookup_by_name_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* /*full*/ g_resolver_lookup_by_name_with_flags (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name_with_flags (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, GLib::Error * _error) noexcept;

// void g_resolver_lookup_by_name_with_flags_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_by_name_with_flags_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_by_name_with_flags_async (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_by_name_with_flags_async (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GList* /*full*/ g_resolver_lookup_by_name_with_flags_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_by_name_with_flags_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* /*full*/ g_resolver_lookup_records (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_records (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, GLib::Error * _error) noexcept;

// void g_resolver_lookup_records_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_records_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_records_async (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_records_async (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::AsyncReadyCallback callback) noexcept;

// GList* /*full*/ g_resolver_lookup_records_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_records_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GList* /*full*/ g_resolver_lookup_service (GResolver* resolver /*none*/, const gchar* service /*none*/, const gchar* protocol /*none*/, const gchar* domain /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_service (::GResolver* resolver /*none*/, const char* service /*none*/, const char* protocol /*none*/, const char* domain /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain);
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, GLib::Error * _error) noexcept;

// void g_resolver_lookup_service_async (GResolver* resolver /*none*/, const gchar* service /*none*/, const gchar* protocol /*none*/, const gchar* domain /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_resolver_lookup_service_async (::GResolver* resolver /*none*/, const char* service /*none*/, const char* protocol /*none*/, const char* domain /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_service_async (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_service_async (const gi::cstring_v service, const gi::cstring_v protocol, const gi::cstring_v domain, Gio::AsyncReadyCallback callback) noexcept;

// GList* /*full*/ g_resolver_lookup_service_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ g_resolver_lookup_service_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_resolver_set_default (GResolver* resolver /*none*/);
// void g_resolver_set_default (::GResolver* resolver /*none*/);
GI_INLINE_DECL void set_default () noexcept;

// void g_resolver_set_timeout (GResolver* resolver /*none*/, unsigned timeout_ms);
// void g_resolver_set_timeout (::GResolver* resolver /*none*/, guint timeout_ms);
GI_INLINE_DECL void set_timeout (guint timeout_ms) noexcept;

gi::property_proxy<guint, base::ResolverBase> property_timeout()
{ return gi::property_proxy<guint, base::ResolverBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::ResolverBase> property_timeout() const
{ return gi::property_proxy<guint, base::ResolverBase> (*this, "timeout"); }

// (signal) void reload ();
// (signal) void reload ();
gi::signal_proxy<void(Gio::Resolver)> signal_reload()
{ return gi::signal_proxy<void(Gio::Resolver)> (*this, "reload"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resolver_extra_def.hpp>)
#include <gio/resolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resolver_extra.hpp>)
#include <gio/resolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Resolver : public GI_GIO_RESOLVER_BASE
{ typedef GI_GIO_RESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GResolver>
{ typedef Gio::Resolver type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ResolverClassDef
{
typedef ResolverClassDef self;
public:
typedef Gio::Resolver instance_type;
typedef ::GResolverClass class_type;

using GI_MEMBER_CHECK_CONFLICT(lookup_by_address) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_address_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_address_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_name) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_name_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_name_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_name_with_flags) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_name_with_flags_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_by_name_with_flags_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_records) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_records_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_records_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_service_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_service_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(reload) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ResolverClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gchar* /*full*/ Resolver::lookup_by_address (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ Resolver::lookup_by_address (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::cstring lookup_by_address_ (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Resolver::lookup_by_address_async (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_address_async (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_by_address_async_ (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gchar* /*full*/ Resolver::lookup_by_address_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full*/ Resolver::lookup_by_address_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::cstring lookup_by_address_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GList* /*full*/ Resolver::lookup_by_name (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_ (const gi::cstring_v hostname, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Resolver::lookup_by_name_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_name_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_by_name_async_ (const gi::cstring_v hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GList* /*full*/ Resolver::lookup_by_name_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GList* /*full*/ Resolver::lookup_by_name_with_flags (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_with_flags (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags_ (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Resolver::lookup_by_name_with_flags_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_name_with_flags_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_by_name_with_flags_async_ (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GList* /*full*/ Resolver::lookup_by_name_with_flags_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_with_flags_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GList* /*full*/ Resolver::lookup_records (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_records (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records_ (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void Resolver::lookup_records_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_records_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_records_async_ (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GList* /*full*/ Resolver::lookup_records_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_records_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Resolver::lookup_service_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_service_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_service_async_ (const gi::cstring_v rrname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GList* /*full*/ Resolver::lookup_service_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_service_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// void Resolver::reload (GResolver* resolver /*none*/);
// void Resolver::reload (::GResolver* resolver /*none*/);
virtual void reload_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ResolverClass: public detail::ClassTemplate<Gio::impl::internal::ResolverClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ResolverClassDef;
typedef ResolverClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ResolverClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gchar* /*full*/ Resolver::lookup_by_address (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char* /*full*/ Resolver::lookup_by_address (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::cstring lookup_by_address_ (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Resolver::lookup_by_address_async (GResolver* resolver /*none*/, GInetAddress* address /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_address_async (::GResolver* resolver /*none*/, ::GInetAddress* address /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_by_address_async_ (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gchar* /*full*/ Resolver::lookup_by_address_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char* /*full*/ Resolver::lookup_by_address_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::cstring lookup_by_address_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GList* /*full*/ Resolver::lookup_by_name (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_ (const gi::cstring_v hostname, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Resolver::lookup_by_name_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_name_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_by_name_async_ (const gi::cstring_v hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GList* /*full*/ Resolver::lookup_by_name_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GList* /*full*/ Resolver::lookup_by_name_with_flags (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_with_flags (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags_ (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Resolver::lookup_by_name_with_flags_async (GResolver* resolver /*none*/, const gchar* hostname /*none*/, GResolverNameLookupFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_by_name_with_flags_async (::GResolver* resolver /*none*/, const char* hostname /*none*/, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_by_name_with_flags_async_ (const gi::cstring_v hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GList* /*full*/ Resolver::lookup_by_name_with_flags_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_by_name_with_flags_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GInetAddress*, gi::transfer_full_t> lookup_by_name_with_flags_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GList* /*full*/ Resolver::lookup_records (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_records (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records_ (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void Resolver::lookup_records_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GResolverRecordType record_type, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_records_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GResolverRecordType record_type, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_records_async_ (const gi::cstring_v rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GList* /*full*/ Resolver::lookup_records_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_records_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GVariant*, gi::transfer_full_t> lookup_records_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Resolver::lookup_service_async (GResolver* resolver /*none*/, const gchar* rrname /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Resolver::lookup_service_async (::GResolver* resolver /*none*/, const char* rrname /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_service_async_ (const gi::cstring_v rrname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GList* /*full*/ Resolver::lookup_service_finish (GResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GList* /*full*/ Resolver::lookup_service_finish (::GResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<GList, ::GSrvTarget*, gi::transfer_full_t> lookup_service_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// void Resolver::reload (GResolver* resolver /*none*/);
// void Resolver::reload (::GResolver* resolver /*none*/);
GI_INLINE_DECL void reload_ () noexcept override;


};


struct ResolverClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_address)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_address_async)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_address_finish)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_name)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_name_async)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_name_finish)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_name_with_flags)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_name_with_flags_async)
  GI_MEMBER_DEFINE(ResolverClass, lookup_by_name_with_flags_finish)
  GI_MEMBER_DEFINE(ResolverClass, lookup_records)
  GI_MEMBER_DEFINE(ResolverClass, lookup_records_async)
  GI_MEMBER_DEFINE(ResolverClass, lookup_records_finish)
  GI_MEMBER_DEFINE(ResolverClass, lookup_service_async)
  GI_MEMBER_DEFINE(ResolverClass, lookup_service_finish)
  GI_MEMBER_DEFINE(ResolverClass, reload)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_address),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_address_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_address_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_name_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_name_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_name_with_flags),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_name_with_flags_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_by_name_with_flags_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_records),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_records_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_records_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_service_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_service_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, reload)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ResolverImpl = detail::ObjectImpl<Resolver, internal::ResolverClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
