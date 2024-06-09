// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEPROXYRESOLVER_HPP_
#define _GI_GIO_SIMPLEPROXYRESOLVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ProxyResolver;

class SimpleProxyResolver;

namespace base {


#define GI_GIO_SIMPLEPROXYRESOLVER_BASE base::SimpleProxyResolverBase
class SimpleProxyResolverBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSimpleProxyResolver BaseObjectType;

SimpleProxyResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_proxy_resolver_get_type(); } 

GI_INLINE_DECL Gio::ProxyResolver interface_ (gi::interface_tag<Gio::ProxyResolver>);

GI_INLINE_DECL operator Gio::ProxyResolver ();

// GProxyResolver* /*full*/ g_simple_proxy_resolver_new (const gchar* default_proxy /*none,nullable*/, gchar** ignore_hosts /*none,nullable*/);
// ::GProxyResolver* /*full*/ g_simple_proxy_resolver_new (const char* default_proxy /*none,nullable*/, char** ignore_hosts /*none,nullable*/);
static GI_INLINE_DECL Gio::ProxyResolver new_ (const gi::cstring_v default_proxy, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> ignore_hosts) noexcept;
static GI_INLINE_DECL Gio::ProxyResolver new_ (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> ignore_hosts) noexcept;

// void g_simple_proxy_resolver_set_default_proxy (GSimpleProxyResolver* resolver /*none*/, const gchar* default_proxy /*none,nullable*/);
// void g_simple_proxy_resolver_set_default_proxy (::GSimpleProxyResolver* resolver /*none*/, const char* default_proxy /*none,nullable*/);
GI_INLINE_DECL void set_default_proxy (const gi::cstring_v default_proxy) noexcept;
GI_INLINE_DECL void set_default_proxy () noexcept;

// void g_simple_proxy_resolver_set_ignore_hosts (GSimpleProxyResolver* resolver /*none*/, gchar** ignore_hosts /*none*/);
// void g_simple_proxy_resolver_set_ignore_hosts (::GSimpleProxyResolver* resolver /*none*/, char** ignore_hosts /*none*/);
GI_INLINE_DECL void set_ignore_hosts (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> ignore_hosts) noexcept;

// void g_simple_proxy_resolver_set_uri_proxy (GSimpleProxyResolver* resolver /*none*/, const gchar* uri_scheme /*none*/, const gchar* proxy /*none*/);
// void g_simple_proxy_resolver_set_uri_proxy (::GSimpleProxyResolver* resolver /*none*/, const char* uri_scheme /*none*/, const char* proxy /*none*/);
GI_INLINE_DECL void set_uri_proxy (const gi::cstring_v uri_scheme, const gi::cstring_v proxy) noexcept;

gi::property_proxy<gi::cstring, base::SimpleProxyResolverBase> property_default_proxy()
{ return gi::property_proxy<gi::cstring, base::SimpleProxyResolverBase> (*this, "default-proxy"); }
const gi::property_proxy<gi::cstring, base::SimpleProxyResolverBase> property_default_proxy() const
{ return gi::property_proxy<gi::cstring, base::SimpleProxyResolverBase> (*this, "default-proxy"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra_def.hpp>)
#include <gio/simpleproxyresolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra.hpp>)
#include <gio/simpleproxyresolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleProxyResolver : public GI_GIO_SIMPLEPROXYRESOLVER_BASE
{ typedef GI_GIO_SIMPLEPROXYRESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleProxyResolver>
{ typedef Gio::SimpleProxyResolver type; }; 

} // namespace repository

} // namespace gi

#include "proxyresolver.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SimpleProxyResolverClassDef
{
typedef SimpleProxyResolverClassDef self;
public:
typedef Gio::SimpleProxyResolver instance_type;
typedef ::GSimpleProxyResolverClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SimpleProxyResolverClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SimpleProxyResolverClass: public detail::ClassTemplate<Gio::impl::internal::SimpleProxyResolverClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ProxyResolverInterfaceClassImpl>
{
friend class internal::SimpleProxyResolverClassDef;
typedef SimpleProxyResolverClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SimpleProxyResolverClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ProxyResolverInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ProxyResolverInterfaceClassImpl GProxyResolverInterface_type;



};


struct SimpleProxyResolverClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SimpleProxyResolverImpl = detail::ObjectImpl<SimpleProxyResolver, internal::SimpleProxyResolverClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
