// AUTO-GENERATED

#ifndef _GI_GIO_STATICRESOURCE_HPP_
#define _GI_GIO_STATICRESOURCE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Resource;
class Resource_Ref;
class StaticResource_Ref;

class StaticResource;

namespace base {


#define GI_GIO_STATICRESOURCE_BASE base::StaticResourceBase
class StaticResourceBase : public gi::detail::CBoxedWrapperBase<StaticResourceBase, ::GStaticResource>
{
typedef gi::detail::CBoxedWrapperBase<StaticResourceBase, ::GStaticResource> super_type;
public:

StaticResourceBase (std::nullptr_t = nullptr) : super_type() {}

// void g_static_resource_fini (GStaticResource* static_resource /*none*/);
// void g_static_resource_fini (::GStaticResource* static_resource /*none*/);
GI_INLINE_DECL void fini () noexcept;

// GResource* /*none*/ g_static_resource_get_resource (GStaticResource* static_resource /*none*/);
// ::GResource* /*none*/ g_static_resource_get_resource (::GStaticResource* static_resource /*none*/);
GI_INLINE_DECL Gio::Resource_Ref get_resource () noexcept;

// void g_static_resource_init (GStaticResource* static_resource /*none*/);
// void g_static_resource_init (::GStaticResource* static_resource /*none*/);
GI_INLINE_DECL void init () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/staticresource_extra_def.hpp>)
#include <gio/staticresource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/staticresource_extra.hpp>)
#include <gio/staticresource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class StaticResource_Ref;

class StaticResource : public gi::detail::CBoxedWrapper<StaticResource, ::GStaticResource, GI_GIO_STATICRESOURCE_BASE, StaticResource_Ref>
{ typedef gi::detail::CBoxedWrapper<StaticResource, ::GStaticResource, GI_GIO_STATICRESOURCE_BASE, StaticResource_Ref> super_type; using super_type::super_type; };


class StaticResource_Ref : public gi::detail::CBoxedRefWrapper<StaticResource, ::GStaticResource, GI_GIO_STATICRESOURCE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<StaticResource, ::GStaticResource, GI_GIO_STATICRESOURCE_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GStaticResource>
{ typedef Gio::StaticResource type; }; 

} // namespace repository

} // namespace gi

#endif
