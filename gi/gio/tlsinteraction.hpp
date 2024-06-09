// AUTO-GENERATED

#ifndef _GI_GIO_TLSINTERACTION_HPP_
#define _GI_GIO_TLSINTERACTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class TlsConnection;
class TlsPassword;

class TlsInteraction;

namespace base {


#define GI_GIO_TLSINTERACTION_BASE base::TlsInteractionBase
class TlsInteractionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTlsInteraction BaseObjectType;

TlsInteractionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_interaction_get_type(); } 

// GTlsInteractionResult g_tls_interaction_ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password (Gio::TlsPassword password);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsInteractionResult ask_password (Gio::TlsPassword password, GLib::Error * _error) noexcept;

// void g_tls_interaction_ask_password_async (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_interaction_ask_password_async (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void ask_password_async (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void ask_password_async (Gio::TlsPassword password, Gio::AsyncReadyCallback callback) noexcept;

// GTlsInteractionResult g_tls_interaction_ask_password_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_ask_password_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GTlsInteractionResult g_tls_interaction_invoke_ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_invoke_ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult invoke_ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsInteractionResult invoke_ask_password (Gio::TlsPassword password);
GI_INLINE_DECL Gio::TlsInteractionResult invoke_ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsInteractionResult invoke_ask_password (Gio::TlsPassword password, GLib::Error * _error) noexcept;

// GTlsInteractionResult g_tls_interaction_invoke_request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_invoke_request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsInteractionResult invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags);
GI_INLINE_DECL Gio::TlsInteractionResult invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsInteractionResult invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, GLib::Error * _error) noexcept;

// GTlsInteractionResult g_tls_interaction_request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, GLib::Error * _error) noexcept;

// void g_tls_interaction_request_certificate_async (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_tls_interaction_request_certificate_async (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void request_certificate_async (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void request_certificate_async (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GTlsInteractionResult g_tls_interaction_request_certificate_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_request_certificate_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsinteraction_extra_def.hpp>)
#include <gio/tlsinteraction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsinteraction_extra.hpp>)
#include <gio/tlsinteraction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsInteraction : public GI_GIO_TLSINTERACTION_BASE
{ typedef GI_GIO_TLSINTERACTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsInteraction>
{ typedef Gio::TlsInteraction type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsInteractionClassDef
{
typedef TlsInteractionClassDef self;
public:
typedef Gio::TlsInteraction instance_type;
typedef ::GTlsInteractionClass class_type;

using GI_MEMBER_CHECK_CONFLICT(ask_password) = self;
using GI_MEMBER_CHECK_CONFLICT(ask_password_async) = self;
using GI_MEMBER_CHECK_CONFLICT(ask_password_finish) = self;
using GI_MEMBER_CHECK_CONFLICT(request_certificate) = self;
using GI_MEMBER_CHECK_CONFLICT(request_certificate_async) = self;
using GI_MEMBER_CHECK_CONFLICT(request_certificate_finish) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TlsInteractionClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GTlsInteractionResult TlsInteraction::ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::TlsInteractionResult ask_password_ (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsInteraction::ask_password_async (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsInteraction::ask_password_async (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void ask_password_async_ (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GTlsInteractionResult TlsInteraction::ask_password_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::TlsInteractionResult ask_password_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;

// GTlsInteractionResult TlsInteraction::request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
virtual Gio::TlsInteractionResult request_certificate_ (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) = 0;

// void TlsInteraction::request_certificate_async (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsInteraction::request_certificate_async (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
virtual void request_certificate_async_ (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept = 0;

// GTlsInteractionResult TlsInteraction::request_certificate_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
virtual Gio::TlsInteractionResult request_certificate_finish_ (Gio::AsyncResult result, GLib::Error * _error) = 0;


};

GI_CLASS_IMPL_BEGIN


class TlsInteractionClass: public detail::ClassTemplate<Gio::impl::internal::TlsInteractionClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TlsInteractionClassDef;
typedef TlsInteractionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsInteractionClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GTlsInteractionResult TlsInteraction::ask_password (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password_ (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsInteraction::ask_password_async (GTlsInteraction* interaction /*none*/, GTlsPassword* password /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsInteraction::ask_password_async (::GTlsInteraction* interaction /*none*/, ::GTlsPassword* password /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void ask_password_async_ (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GTlsInteractionResult TlsInteraction::ask_password_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult ask_password_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;

// GTlsInteractionResult TlsInteraction::request_certificate (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate_ (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) override;

// void TlsInteraction::request_certificate_async (GTlsInteraction* interaction /*none*/, GTlsConnection* connection /*none*/, GTlsCertificateRequestFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void TlsInteraction::request_certificate_async (::GTlsInteraction* interaction /*none*/, ::GTlsConnection* connection /*none*/, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void request_certificate_async_ (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept override;

// GTlsInteractionResult TlsInteraction::request_certificate_finish (GTlsInteraction* interaction /*none*/, GAsyncResult* result /*none*/, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate_finish (::GTlsInteraction* interaction /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
GI_INLINE_DECL Gio::TlsInteractionResult request_certificate_finish_ (Gio::AsyncResult result, GLib::Error * _error) override;


};


struct TlsInteractionClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TlsInteractionClass, ask_password)
  GI_MEMBER_DEFINE(TlsInteractionClass, ask_password_async)
  GI_MEMBER_DEFINE(TlsInteractionClass, ask_password_finish)
  GI_MEMBER_DEFINE(TlsInteractionClass, request_certificate)
  GI_MEMBER_DEFINE(TlsInteractionClass, request_certificate_async)
  GI_MEMBER_DEFINE(TlsInteractionClass, request_certificate_finish)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ask_password),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ask_password_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, ask_password_finish),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, request_certificate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, request_certificate_async),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, request_certificate_finish)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TlsInteractionImpl = detail::ObjectImpl<TlsInteraction, internal::TlsInteractionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
