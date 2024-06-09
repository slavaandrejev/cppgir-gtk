// AUTO-GENERATED

#ifndef _GI_GLIB_HMAC_HPP_
#define _GI_GLIB_HMAC_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Hmac_Ref;

class Hmac;

namespace base {


#define GI_GLIB_HMAC_BASE base::HmacBase
class HmacBase : public gi::detail::GBoxedWrapperBase<HmacBase, ::GHmac>
{
typedef gi::detail::GBoxedWrapperBase<HmacBase, ::GHmac> super_type;
public:

HmacBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_hmac_get_type(); } 

// GHmac* /*full,nullable*/ g_hmac_new (GChecksumType digest_type, const guchar* key /*none*/, gsize key_len);
// ::GHmac* /*full,nullable*/ g_hmac_new (::GChecksumType digest_type, const guint8* key /*none*/, gsize key_len);
static GI_INLINE_DECL GLib::Hmac new_ (GLib::ChecksumType digest_type, const guint8 * key, gsize key_len) noexcept;

// GHmac* /*full*/ g_hmac_copy (const GHmac* hmac /*none*/);
// ::GHmac* /*full*/ g_hmac_copy (const ::GHmac* hmac /*none*/);
GI_INLINE_DECL GLib::Hmac copy () const noexcept;

// void g_hmac_get_digest (GHmac* hmac /*none*/, guint8* buffer /*none*/, gsize* digest_len);
// void g_hmac_get_digest (::GHmac* hmac /*none*/, guint8* buffer /*none*/, gsize* digest_len);
GI_INLINE_DECL void get_digest (const guint8 * buffer, gsize digest_len) noexcept;

// const gchar* /*none*/ g_hmac_get_string (GHmac* hmac /*none*/);
// const char* /*none*/ g_hmac_get_string (::GHmac* hmac /*none*/);
GI_INLINE_DECL gi::cstring_v get_string () noexcept;

// GHmac* /*full*/ g_hmac_ref (GHmac* hmac /*none*/);
// ::GHmac* /*full*/ g_hmac_ref (::GHmac* hmac /*none*/);
// IGNORE; marked ignore

// void g_hmac_unref (GHmac* hmac /*full*/);
// void g_hmac_unref (::GHmac* hmac /*full*/);
// IGNORE; marked ignore

// void g_hmac_update (GHmac* hmac /*none*/, const guchar* data /*none*/, gssize length);
// void g_hmac_update (::GHmac* hmac /*none*/, const guint8* data /*none*/, gssize length);
GI_INLINE_DECL void update (const guint8 * data, gssize length) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hmac_extra_def.hpp>)
#include <glib/hmac_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hmac_extra.hpp>)
#include <glib/hmac_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Hmac_Ref;

class Hmac : public gi::detail::GBoxedWrapper<Hmac, ::GHmac, GI_GLIB_HMAC_BASE, Hmac_Ref>
{ typedef gi::detail::GBoxedWrapper<Hmac, ::GHmac, GI_GLIB_HMAC_BASE, Hmac_Ref> super_type; using super_type::super_type; };


class Hmac_Ref : public gi::detail::GBoxedRefWrapper<Hmac, ::GHmac, GI_GLIB_HMAC_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Hmac, ::GHmac, GI_GLIB_HMAC_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GHmac>
{ typedef GLib::Hmac type; }; 

} // namespace repository

} // namespace gi

#endif
