// AUTO-GENERATED

#ifndef _GI_GIO_TLSPASSWORD_HPP_
#define _GI_GIO_TLSPASSWORD_HPP_


namespace gi {

namespace repository {

namespace Gio {


class TlsPassword;

namespace base {


#define GI_GIO_TLSPASSWORD_BASE base::TlsPasswordBase
class TlsPasswordBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTlsPassword BaseObjectType;

TlsPasswordBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_password_get_type(); } 

// GTlsPassword* /*full*/ g_tls_password_new (GTlsPasswordFlags flags, const gchar* description /*none*/);
// ::GTlsPassword* /*full*/ g_tls_password_new (::GTlsPasswordFlags flags, const char* description /*none*/);
static GI_INLINE_DECL Gio::TlsPassword new_ (Gio::TlsPasswordFlags flags, const gi::cstring_v description) noexcept;

// const gchar* /*none*/ g_tls_password_get_description (GTlsPassword* password /*none*/);
// const char* /*none*/ g_tls_password_get_description (::GTlsPassword* password /*none*/);
GI_INLINE_DECL gi::cstring_v get_description () noexcept;

// GTlsPasswordFlags g_tls_password_get_flags (GTlsPassword* password /*none*/);
// ::GTlsPasswordFlags g_tls_password_get_flags (::GTlsPassword* password /*none*/);
GI_INLINE_DECL Gio::TlsPasswordFlags get_flags () noexcept;

// const guchar* /*none*/ g_tls_password_get_value (GTlsPassword* password /*none*/, gsize* length);
// const guint8* /*none*/ g_tls_password_get_value (::GTlsPassword* password /*none*/, gsize* length);
GI_INLINE_DECL gi::Collection<gi::DSpan, guint8, gi::transfer_none_t> get_value () noexcept;

// const gchar* /*none*/ g_tls_password_get_warning (GTlsPassword* password /*none*/);
// const char* /*none*/ g_tls_password_get_warning (::GTlsPassword* password /*none*/);
GI_INLINE_DECL gi::cstring_v get_warning () noexcept;

// void g_tls_password_set_description (GTlsPassword* password /*none*/, const gchar* description /*none*/);
// void g_tls_password_set_description (::GTlsPassword* password /*none*/, const char* description /*none*/);
GI_INLINE_DECL void set_description (const gi::cstring_v description) noexcept;

// void g_tls_password_set_flags (GTlsPassword* password /*none*/, GTlsPasswordFlags flags);
// void g_tls_password_set_flags (::GTlsPassword* password /*none*/, ::GTlsPasswordFlags flags);
GI_INLINE_DECL void set_flags (Gio::TlsPasswordFlags flags) noexcept;

// void g_tls_password_set_value (GTlsPassword* password /*none*/, const guchar* value /*none*/, gssize length);
// void g_tls_password_set_value (::GTlsPassword* password /*none*/, const guint8* value /*none*/, gssize length);
GI_INLINE_DECL void set_value (const guint8 * value, gssize length) noexcept;

// void g_tls_password_set_value_full (GTlsPassword* password /*none*/, guchar* value /*none*/, gssize length, GDestroyNotify destroy /*none,nullable*/);
// void g_tls_password_set_value_full (::GTlsPassword* password /*none*/, guint8* value /*none*/, gssize length, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info

// void g_tls_password_set_warning (GTlsPassword* password /*none*/, const gchar* warning /*none*/);
// void g_tls_password_set_warning (::GTlsPassword* password /*none*/, const char* warning /*none*/);
GI_INLINE_DECL void set_warning (const gi::cstring_v warning) noexcept;

gi::property_proxy<gi::cstring, base::TlsPasswordBase> property_description()
{ return gi::property_proxy<gi::cstring, base::TlsPasswordBase> (*this, "description"); }
const gi::property_proxy<gi::cstring, base::TlsPasswordBase> property_description() const
{ return gi::property_proxy<gi::cstring, base::TlsPasswordBase> (*this, "description"); }

gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> property_flags()
{ return gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> (*this, "flags"); }
const gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> property_flags() const
{ return gi::property_proxy<Gio::TlsPasswordFlags, base::TlsPasswordBase> (*this, "flags"); }

gi::property_proxy<gi::cstring, base::TlsPasswordBase> property_warning()
{ return gi::property_proxy<gi::cstring, base::TlsPasswordBase> (*this, "warning"); }
const gi::property_proxy<gi::cstring, base::TlsPasswordBase> property_warning() const
{ return gi::property_proxy<gi::cstring, base::TlsPasswordBase> (*this, "warning"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra_def.hpp>)
#include <gio/tlspassword_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra.hpp>)
#include <gio/tlspassword_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsPassword : public GI_GIO_TLSPASSWORD_BASE
{ typedef GI_GIO_TLSPASSWORD_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsPassword>
{ typedef Gio::TlsPassword type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsPasswordClassDef
{
typedef TlsPasswordClassDef self;
public:
typedef Gio::TlsPassword instance_type;
typedef ::GTlsPasswordClass class_type;

using GI_MEMBER_CHECK_CONFLICT(get_default_warning) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~TlsPasswordClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// const gchar* /*none*/ TlsPassword::get_default_warning (GTlsPassword* password /*none*/);
// const char* /*none*/ TlsPassword::get_default_warning (::GTlsPassword* password /*none*/);
virtual gi::cstring_v get_default_warning_ () noexcept = 0;

// const guchar* /*none*/ TlsPassword::get_value (GTlsPassword* password /*none*/, gsize* length);
// const guint8* /*none*/ TlsPassword::get_value (::GTlsPassword* password /*none*/, gsize* length);
// SKIP; virtual-method return array not supported

// void TlsPassword::set_value (GTlsPassword* password /*none*/, guchar* value /*none*/, gssize length, GDestroyNotify destroy /*none,nullable*/);
// void TlsPassword::set_value (::GTlsPassword* password /*none*/, guint8* value /*none*/, gssize length, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info


};

GI_CLASS_IMPL_BEGIN


class TlsPasswordClass: public detail::ClassTemplate<Gio::impl::internal::TlsPasswordClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::TlsPasswordClassDef;
typedef TlsPasswordClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsPasswordClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// const gchar* /*none*/ TlsPassword::get_default_warning (GTlsPassword* password /*none*/);
// const char* /*none*/ TlsPassword::get_default_warning (::GTlsPassword* password /*none*/);
GI_INLINE_DECL gi::cstring_v get_default_warning_ () noexcept override;

// const guchar* /*none*/ TlsPassword::get_value (GTlsPassword* password /*none*/, gsize* length);
// const guint8* /*none*/ TlsPassword::get_value (::GTlsPassword* password /*none*/, gsize* length);
// SKIP; virtual-method return array not supported

// void TlsPassword::set_value (GTlsPassword* password /*none*/, guchar* value /*none*/, gssize length, GDestroyNotify destroy /*none,nullable*/);
// void TlsPassword::set_value (::GTlsPassword* password /*none*/, guint8* value /*none*/, gssize length, GLib::DestroyNotify::cfunction_type destroy /*none,nullable*/);
// SKIP; callback misses closure info


};


struct TlsPasswordClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(TlsPasswordClass, get_default_warning)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_default_warning)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using TlsPasswordImpl = detail::ObjectImpl<TlsPassword, internal::TlsPasswordClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
