// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONNECTABLE_HPP_
#define _GI_GIO_SOCKETCONNECTABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class SocketAddressEnumerator;

class SocketConnectable;

namespace base {


#define GI_GIO_SOCKETCONNECTABLE_BASE base::SocketConnectableBase
class SocketConnectableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GSocketConnectable BaseObjectType;

SocketConnectableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_connectable_get_type(); } 

// GSocketAddressEnumerator* /*full*/ g_socket_connectable_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ g_socket_connectable_enumerate (::GSocketConnectable* connectable /*none*/);
GI_INLINE_DECL Gio::SocketAddressEnumerator enumerate () noexcept;

// GSocketAddressEnumerator* /*full*/ g_socket_connectable_proxy_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ g_socket_connectable_proxy_enumerate (::GSocketConnectable* connectable /*none*/);
GI_INLINE_DECL Gio::SocketAddressEnumerator proxy_enumerate () noexcept;

// gchar* /*full*/ g_socket_connectable_to_string (GSocketConnectable* connectable /*none*/);
// char* /*full*/ g_socket_connectable_to_string (::GSocketConnectable* connectable /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketconnectable_extra_def.hpp>)
#include <gio/socketconnectable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketconnectable_extra.hpp>)
#include <gio/socketconnectable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketConnectable : public GI_GIO_SOCKETCONNECTABLE_BASE
{ typedef GI_GIO_SOCKETCONNECTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketConnectable>
{ typedef Gio::SocketConnectable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketConnectableIfaceDef
{
typedef SocketConnectableIfaceDef self;
public:
typedef Gio::SocketConnectable instance_type;
typedef ::GSocketConnectableIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(enumerate) = self;
using GI_MEMBER_CHECK_CONFLICT(proxy_enumerate) = self;
using GI_MEMBER_CHECK_CONFLICT(to_string) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SocketConnectableIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GSocketAddressEnumerator* /*full*/ SocketConnectable::enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ SocketConnectable::enumerate (::GSocketConnectable* connectable /*none*/);
virtual Gio::SocketAddressEnumerator enumerate_ () noexcept = 0;

// GSocketAddressEnumerator* /*full*/ SocketConnectable::proxy_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ SocketConnectable::proxy_enumerate (::GSocketConnectable* connectable /*none*/);
virtual Gio::SocketAddressEnumerator proxy_enumerate_ () noexcept = 0;

// gchar* /*full*/ SocketConnectable::to_string (GSocketConnectable* connectable /*none*/);
// char* /*full*/ SocketConnectable::to_string (::GSocketConnectable* connectable /*none*/);
virtual gi::cstring to_string_ () noexcept = 0;


};

using SocketConnectableImpl = detail::InterfaceImpl<SocketConnectableIfaceDef>;

class SocketConnectableIfaceClassImpl: public detail::InterfaceClassImpl<SocketConnectableImpl>
{
friend class internal::SocketConnectableIfaceDef;
typedef SocketConnectableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<SocketConnectableImpl> super;

protected:
using super::super;

// GSocketAddressEnumerator* /*full*/ SocketConnectable::enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ SocketConnectable::enumerate (::GSocketConnectable* connectable /*none*/);
GI_INLINE_DECL Gio::SocketAddressEnumerator enumerate_ () noexcept override;

// GSocketAddressEnumerator* /*full*/ SocketConnectable::proxy_enumerate (GSocketConnectable* connectable /*none*/);
// ::GSocketAddressEnumerator* /*full*/ SocketConnectable::proxy_enumerate (::GSocketConnectable* connectable /*none*/);
GI_INLINE_DECL Gio::SocketAddressEnumerator proxy_enumerate_ () noexcept override;

// gchar* /*full*/ SocketConnectable::to_string (GSocketConnectable* connectable /*none*/);
// char* /*full*/ SocketConnectable::to_string (::GSocketConnectable* connectable /*none*/);
GI_INLINE_DECL gi::cstring to_string_ () noexcept override;


};


struct SocketConnectableIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SocketConnectableIfaceClassImpl, enumerate)
  GI_MEMBER_DEFINE(SocketConnectableIfaceClassImpl, proxy_enumerate)
  GI_MEMBER_DEFINE(SocketConnectableIfaceClassImpl, to_string)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, enumerate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, proxy_enumerate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, to_string)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
