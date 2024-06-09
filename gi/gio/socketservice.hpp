// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETSERVICE_HPP_
#define _GI_GIO_SOCKETSERVICE_HPP_

#include "socketlistener.hpp"

namespace gi {

namespace repository {

namespace Gio {

class SocketConnection;

class SocketService;

namespace base {


#define GI_GIO_SOCKETSERVICE_BASE base::SocketServiceBase
class SocketServiceBase : public Gio::SocketListener
{
typedef Gio::SocketListener super_type;
public:
typedef ::GSocketService BaseObjectType;

SocketServiceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_service_get_type(); } 

// GSocketService* /*full*/ g_socket_service_new ();
// ::GSocketService* /*full*/ g_socket_service_new ();
static GI_INLINE_DECL Gio::SocketService new_ () noexcept;

// gboolean g_socket_service_is_active (GSocketService* service /*none*/);
// gboolean g_socket_service_is_active (::GSocketService* service /*none*/);
GI_INLINE_DECL bool is_active () noexcept;

// void g_socket_service_start (GSocketService* service /*none*/);
// void g_socket_service_start (::GSocketService* service /*none*/);
GI_INLINE_DECL void start () noexcept;

// void g_socket_service_stop (GSocketService* service /*none*/);
// void g_socket_service_stop (::GSocketService* service /*none*/);
GI_INLINE_DECL void stop () noexcept;

gi::property_proxy<bool, base::SocketServiceBase> property_active()
{ return gi::property_proxy<bool, base::SocketServiceBase> (*this, "active"); }
const gi::property_proxy<bool, base::SocketServiceBase> property_active() const
{ return gi::property_proxy<bool, base::SocketServiceBase> (*this, "active"); }

// (signal) gboolean incoming ( connection /*none*/,  source_object /*none,nullable*/);
// (signal) gboolean incoming (::GSocketConnection* connection /*none*/, ::GObject* source_object /*none,nullable*/);
gi::signal_proxy<bool(Gio::SocketService, Gio::SocketConnection connection, GObject::Object source_object)> signal_incoming()
{ return gi::signal_proxy<bool(Gio::SocketService, Gio::SocketConnection connection, GObject::Object source_object)> (*this, "incoming"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketservice_extra_def.hpp>)
#include <gio/socketservice_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketservice_extra.hpp>)
#include <gio/socketservice_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketService : public GI_GIO_SOCKETSERVICE_BASE
{ typedef GI_GIO_SOCKETSERVICE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketService>
{ typedef Gio::SocketService type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketServiceClassDef
{
typedef SocketServiceClassDef self;
public:
typedef Gio::SocketService instance_type;
typedef ::GSocketServiceClass class_type;

using GI_MEMBER_CHECK_CONFLICT(incoming) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SocketServiceClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean SocketService::incoming (GSocketService* service /*none*/, GSocketConnection* connection /*none*/, GObject* source_object /*none*/);
// gboolean SocketService::incoming (::GSocketService* service /*none*/, ::GSocketConnection* connection /*none*/, ::GObject* source_object /*none*/);
virtual bool incoming_ (Gio::SocketConnection connection, GObject::Object source_object) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketServiceClass: public detail::ClassTemplate<Gio::impl::internal::SocketServiceClassDef, Gio::impl::internal::SocketListenerClass>
{
friend class internal::SocketServiceClassDef;
typedef SocketServiceClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketServiceClassDef, Gio::impl::internal::SocketListenerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean SocketService::incoming (GSocketService* service /*none*/, GSocketConnection* connection /*none*/, GObject* source_object /*none*/);
// gboolean SocketService::incoming (::GSocketService* service /*none*/, ::GSocketConnection* connection /*none*/, ::GObject* source_object /*none*/);
GI_INLINE_DECL bool incoming_ (Gio::SocketConnection connection, GObject::Object source_object) noexcept override;


};


struct SocketServiceClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(SocketServiceClass, incoming)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, incoming)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SocketServiceImpl = detail::ObjectImpl<SocketService, internal::SocketServiceClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
