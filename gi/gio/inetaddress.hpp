// AUTO-GENERATED

#ifndef _GI_GIO_INETADDRESS_HPP_
#define _GI_GIO_INETADDRESS_HPP_


namespace gi {

namespace repository {

namespace Gio {


class InetAddress;

namespace base {


#define GI_GIO_INETADDRESS_BASE base::InetAddressBase
class InetAddressBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GInetAddress BaseObjectType;

InetAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_inet_address_get_type(); } 

// GInetAddress* /*full*/ g_inet_address_new_any (GSocketFamily family);
// ::GInetAddress* /*full*/ g_inet_address_new_any (::GSocketFamily family);
static GI_INLINE_DECL Gio::InetAddress new_any (Gio::SocketFamily family) noexcept;

// GInetAddress* /*full*/ g_inet_address_new_from_bytes ( bytes /*none*/, GSocketFamily family);
// ::GInetAddress* /*full*/ g_inet_address_new_from_bytes (* bytes /*none*/, ::GSocketFamily family);
// SKIP; inconsistent array info

// GInetAddress* /*full,nullable*/ g_inet_address_new_from_string (const gchar* string /*none*/);
// ::GInetAddress* /*full,nullable*/ g_inet_address_new_from_string (const char* string /*none*/);
static GI_INLINE_DECL Gio::InetAddress new_from_string (const gi::cstring_v string) noexcept;

// GInetAddress* /*full*/ g_inet_address_new_loopback (GSocketFamily family);
// ::GInetAddress* /*full*/ g_inet_address_new_loopback (::GSocketFamily family);
static GI_INLINE_DECL Gio::InetAddress new_loopback (Gio::SocketFamily family) noexcept;

// gboolean g_inet_address_equal (GInetAddress* address /*none*/, GInetAddress* other_address /*none*/);
// gboolean g_inet_address_equal (::GInetAddress* address /*none*/, ::GInetAddress* other_address /*none*/);
GI_INLINE_DECL bool equal (Gio::InetAddress other_address) noexcept;

// GSocketFamily g_inet_address_get_family (GInetAddress* address /*none*/);
// ::GSocketFamily g_inet_address_get_family (::GInetAddress* address /*none*/);
GI_INLINE_DECL Gio::SocketFamily get_family () noexcept;

// gboolean g_inet_address_get_is_any (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_any (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_any () noexcept;

// gboolean g_inet_address_get_is_link_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_link_local (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_link_local () noexcept;

// gboolean g_inet_address_get_is_loopback (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_loopback (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_loopback () noexcept;

// gboolean g_inet_address_get_is_mc_global (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_global (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_mc_global () noexcept;

// gboolean g_inet_address_get_is_mc_link_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_link_local (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_mc_link_local () noexcept;

// gboolean g_inet_address_get_is_mc_node_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_node_local (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_mc_node_local () noexcept;

// gboolean g_inet_address_get_is_mc_org_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_org_local (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_mc_org_local () noexcept;

// gboolean g_inet_address_get_is_mc_site_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_mc_site_local (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_mc_site_local () noexcept;

// gboolean g_inet_address_get_is_multicast (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_multicast (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_multicast () noexcept;

// gboolean g_inet_address_get_is_site_local (GInetAddress* address /*none*/);
// gboolean g_inet_address_get_is_site_local (::GInetAddress* address /*none*/);
GI_INLINE_DECL bool get_is_site_local () noexcept;

// gsize g_inet_address_get_native_size (GInetAddress* address /*none*/);
// gsize g_inet_address_get_native_size (::GInetAddress* address /*none*/);
GI_INLINE_DECL gsize get_native_size () noexcept;

// const guint8* g_inet_address_to_bytes (GInetAddress* address /*none*/);
// const guint8 g_inet_address_to_bytes (::GInetAddress* address /*none*/);
// IGNORE; not introspectable, inconsistent  return pointer depth (1 vs 0)

// gchar* /*full*/ g_inet_address_to_string (GInetAddress* address /*none*/);
// char* /*full*/ g_inet_address_to_string (::GInetAddress* address /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

gi::property_proxy<gpointer, base::InetAddressBase> property_bytes()
{ return gi::property_proxy<gpointer, base::InetAddressBase> (*this, "bytes"); }
const gi::property_proxy<gpointer, base::InetAddressBase> property_bytes() const
{ return gi::property_proxy<gpointer, base::InetAddressBase> (*this, "bytes"); }

gi::property_proxy<Gio::SocketFamily, base::InetAddressBase> property_family()
{ return gi::property_proxy<Gio::SocketFamily, base::InetAddressBase> (*this, "family"); }
const gi::property_proxy<Gio::SocketFamily, base::InetAddressBase> property_family() const
{ return gi::property_proxy<Gio::SocketFamily, base::InetAddressBase> (*this, "family"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_any()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-any"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_any() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-any"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_link_local()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-link-local"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_link_local() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-link-local"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_loopback()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-loopback"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_loopback() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-loopback"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_mc_global()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-global"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_mc_global() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-global"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_mc_link_local()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-link-local"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_mc_link_local() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-link-local"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_mc_node_local()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-node-local"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_mc_node_local() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-node-local"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_mc_org_local()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-org-local"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_mc_org_local() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-org-local"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_mc_site_local()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-site-local"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_mc_site_local() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-mc-site-local"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_multicast()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-multicast"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_multicast() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-multicast"); }

gi::property_proxy<bool, base::InetAddressBase> property_is_site_local()
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-site-local"); }
const gi::property_proxy<bool, base::InetAddressBase> property_is_site_local() const
{ return gi::property_proxy<bool, base::InetAddressBase> (*this, "is-site-local"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inetaddress_extra_def.hpp>)
#include <gio/inetaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inetaddress_extra.hpp>)
#include <gio/inetaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InetAddress : public GI_GIO_INETADDRESS_BASE
{ typedef GI_GIO_INETADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInetAddress>
{ typedef Gio::InetAddress type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class InetAddressClassDef
{
typedef InetAddressClassDef self;
public:
typedef Gio::InetAddress instance_type;
typedef ::GInetAddressClass class_type;

using GI_MEMBER_CHECK_CONFLICT(to_string) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~InetAddressClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gchar* /*full*/ InetAddress::to_string (GInetAddress* address /*none*/);
// char* /*full*/ InetAddress::to_string (::GInetAddress* address /*none*/);
virtual gi::cstring to_string_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class InetAddressClass: public detail::ClassTemplate<Gio::impl::internal::InetAddressClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::InetAddressClassDef;
typedef InetAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::InetAddressClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gchar* /*full*/ InetAddress::to_string (GInetAddress* address /*none*/);
// char* /*full*/ InetAddress::to_string (::GInetAddress* address /*none*/);
GI_INLINE_DECL gi::cstring to_string_ () noexcept override;


};


struct InetAddressClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(InetAddressClass, to_string)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, to_string)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using InetAddressImpl = detail::ObjectImpl<InetAddress, internal::InetAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
