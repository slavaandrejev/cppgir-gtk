// AUTO-GENERATED

#ifndef _GI_GIO_UNIXCONNECTION_HPP_
#define _GI_GIO_UNIXCONNECTION_HPP_

#include "socketconnection.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Credentials;

class UnixConnection;

namespace base {


#define GI_GIO_UNIXCONNECTION_BASE base::UnixConnectionBase
class UnixConnectionBase : public Gio::SocketConnection
{
typedef Gio::SocketConnection super_type;
public:
typedef ::GUnixConnection BaseObjectType;

UnixConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_connection_get_type(); } 

// GCredentials* /*full*/ g_unix_connection_receive_credentials (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GCredentials* /*full*/ g_unix_connection_receive_credentials (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::Credentials receive_credentials (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::Credentials receive_credentials ();
GI_INLINE_DECL Gio::Credentials receive_credentials (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::Credentials receive_credentials (GLib::Error * _error) noexcept;

// void g_unix_connection_receive_credentials_async (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_unix_connection_receive_credentials_async (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void receive_credentials_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void receive_credentials_async (Gio::AsyncReadyCallback callback) noexcept;

// GCredentials* /*full*/ g_unix_connection_receive_credentials_finish (GUnixConnection* connection /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GCredentials* /*full*/ g_unix_connection_receive_credentials_finish (::GUnixConnection* connection /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::Credentials receive_credentials_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::Credentials receive_credentials_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gint g_unix_connection_receive_fd (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gint g_unix_connection_receive_fd (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gint receive_fd (Gio::Cancellable cancellable);
GI_INLINE_DECL gint receive_fd ();
GI_INLINE_DECL gint receive_fd (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint receive_fd (GLib::Error * _error) noexcept;

// gboolean g_unix_connection_send_credentials (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_unix_connection_send_credentials (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool send_credentials (Gio::Cancellable cancellable);
GI_INLINE_DECL bool send_credentials ();
GI_INLINE_DECL bool send_credentials (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool send_credentials (GLib::Error * _error) noexcept;

// void g_unix_connection_send_credentials_async (GUnixConnection* connection /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_unix_connection_send_credentials_async (::GUnixConnection* connection /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void send_credentials_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void send_credentials_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_unix_connection_send_credentials_finish (GUnixConnection* connection /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_unix_connection_send_credentials_finish (::GUnixConnection* connection /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL bool send_credentials_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool send_credentials_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_unix_connection_send_fd (GUnixConnection* connection /*none*/, gint fd, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean g_unix_connection_send_fd (::GUnixConnection* connection /*none*/, gint fd, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool send_fd (gint fd, Gio::Cancellable cancellable);
GI_INLINE_DECL bool send_fd (gint fd);
GI_INLINE_DECL bool send_fd (gint fd, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool send_fd (gint fd, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixconnection_extra_def.hpp>)
#include <gio/unixconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixconnection_extra.hpp>)
#include <gio/unixconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixConnection : public GI_GIO_UNIXCONNECTION_BASE
{ typedef GI_GIO_UNIXCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixConnection>
{ typedef Gio::UnixConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixConnectionClassDef
{
typedef UnixConnectionClassDef self;
public:
typedef Gio::UnixConnection instance_type;
typedef ::GUnixConnectionClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~UnixConnectionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixConnectionClass: public detail::ClassTemplate<Gio::impl::internal::UnixConnectionClassDef, Gio::impl::internal::SocketConnectionClass>
{
friend class internal::UnixConnectionClassDef;
typedef UnixConnectionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixConnectionClassDef, Gio::impl::internal::SocketConnectionClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct UnixConnectionClassDef::TypeInitData
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

using UnixConnectionImpl = detail::ObjectImpl<UnixConnection, internal::UnixConnectionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
