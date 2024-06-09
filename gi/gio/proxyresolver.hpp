// AUTO-GENERATED

#ifndef _GI_GIO_PROXYRESOLVER_HPP_
#define _GI_GIO_PROXYRESOLVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class ProxyResolver;

namespace base {


#define GI_GIO_PROXYRESOLVER_BASE base::ProxyResolverBase
class ProxyResolverBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GProxyResolver BaseObjectType;

ProxyResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_proxy_resolver_get_type(); } 

// GProxyResolver* /*none*/ g_proxy_resolver_get_default ();
// ::GProxyResolver* /*none*/ g_proxy_resolver_get_default ();
static GI_INLINE_DECL Gio::ProxyResolver get_default () noexcept;

// gboolean g_proxy_resolver_is_supported (GProxyResolver* resolver /*none*/);
// gboolean g_proxy_resolver_is_supported (::GProxyResolver* resolver /*none*/);
GI_INLINE_DECL bool is_supported () noexcept;

// gchar** /*full*/ g_proxy_resolver_lookup (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ g_proxy_resolver_lookup (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup (const gi::cstring_v uri, Gio::Cancellable cancellable);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup (const gi::cstring_v uri);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup (const gi::cstring_v uri, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup (const gi::cstring_v uri, GLib::Error * _error) noexcept;

// void g_proxy_resolver_lookup_async (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_proxy_resolver_lookup_async (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_async (const gi::cstring_v uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_async (const gi::cstring_v uri, Gio::AsyncReadyCallback callback) noexcept;

// gchar** /*full*/ g_proxy_resolver_lookup_finish (GProxyResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ g_proxy_resolver_lookup_finish (::GProxyResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup_finish (Gio::AsyncResult result);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra_def.hpp>)
#include <gio/proxyresolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra.hpp>)
#include <gio/proxyresolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ProxyResolver : public GI_GIO_PROXYRESOLVER_BASE
{ typedef GI_GIO_PROXYRESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GProxyResolver>
{ typedef Gio::ProxyResolver type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ProxyResolverInterfaceDef
{
typedef ProxyResolverInterfaceDef self;
public:
typedef Gio::ProxyResolver instance_type;
typedef ::GProxyResolverInterface interface_type;

using GI_MEMBER_CHECK_CONFLICT(is_supported) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_async) = self;
using GI_MEMBER_CHECK_CONFLICT(lookup_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ProxyResolverInterfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean ProxyResolver::is_supported (GProxyResolver* resolver /*none*/);
// gboolean ProxyResolver::is_supported (::GProxyResolver* resolver /*none*/);
virtual bool is_supported_ () noexcept = 0;

// gchar** /*full*/ ProxyResolver::lookup (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ ProxyResolver::lookup (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup_ (const gi::cstring_v uri, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void ProxyResolver::lookup_async (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void ProxyResolver::lookup_async (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void lookup_async_ (const gi::cstring_v uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// gchar** /*full*/ ProxyResolver::lookup_finish (GProxyResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ ProxyResolver::lookup_finish (::GProxyResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

using ProxyResolverImpl = detail::InterfaceImpl<ProxyResolverInterfaceDef>;

class ProxyResolverInterfaceClassImpl: public detail::InterfaceClassImpl<ProxyResolverImpl>
{
friend class internal::ProxyResolverInterfaceDef;
typedef ProxyResolverInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ProxyResolverImpl> super;

protected:
using super::super;

// gboolean ProxyResolver::is_supported (GProxyResolver* resolver /*none*/);
// gboolean ProxyResolver::is_supported (::GProxyResolver* resolver /*none*/);
GI_INLINE_DECL bool is_supported_ () noexcept override;

// gchar** /*full*/ ProxyResolver::lookup (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ ProxyResolver::lookup (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup_ (const gi::cstring_v uri, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void ProxyResolver::lookup_async (GProxyResolver* resolver /*none*/, const gchar* uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void ProxyResolver::lookup_async (::GProxyResolver* resolver /*none*/, const char* uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void lookup_async_ (const gi::cstring_v uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// gchar** /*full*/ ProxyResolver::lookup_finish (GProxyResolver* resolver /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ ProxyResolver::lookup_finish (::GProxyResolver* resolver /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> lookup_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct ProxyResolverInterfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(ProxyResolverInterfaceClassImpl, is_supported)
  GI_MEMBER_DEFINE(ProxyResolverInterfaceClassImpl, lookup)
  GI_MEMBER_DEFINE(ProxyResolverInterfaceClassImpl, lookup_async)
  GI_MEMBER_DEFINE(ProxyResolverInterfaceClassImpl, lookup_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, is_supported),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, lookup_finish)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
