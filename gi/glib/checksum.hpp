// AUTO-GENERATED

#ifndef _GI_GLIB_CHECKSUM_HPP_
#define _GI_GLIB_CHECKSUM_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Checksum_Ref;

class Checksum;

namespace base {


#define GI_GLIB_CHECKSUM_BASE base::ChecksumBase
class ChecksumBase : public gi::detail::GBoxedWrapperBase<ChecksumBase, ::GChecksum>
{
typedef gi::detail::GBoxedWrapperBase<ChecksumBase, ::GChecksum> super_type;
public:

ChecksumBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_checksum_get_type(); } 

// GChecksum* /*full,nullable*/ g_checksum_new (GChecksumType checksum_type);
// ::GChecksum* /*full,nullable*/ g_checksum_new (::GChecksumType checksum_type);
static GI_INLINE_DECL GLib::Checksum new_ (GLib::ChecksumType checksum_type) noexcept;

// GChecksum* /*full*/ g_checksum_copy (const GChecksum* checksum /*none*/);
// ::GChecksum* /*full*/ g_checksum_copy (const ::GChecksum* checksum /*none*/);
GI_INLINE_DECL GLib::Checksum copy () const noexcept;

// void g_checksum_free (GChecksum* checksum /*none*/);
// void g_checksum_free (::GChecksum* checksum /*none*/);
// IGNORE; marked ignore

// void g_checksum_get_digest (GChecksum* checksum /*none*/, guint8* buffer /*none*/, gsize* digest_len);
// void g_checksum_get_digest (::GChecksum* checksum /*none*/, guint8* buffer /*none*/, gsize* digest_len);
GI_INLINE_DECL void get_digest (const guint8 * buffer, gsize digest_len) noexcept;

// const gchar* /*none*/ g_checksum_get_string (GChecksum* checksum /*none*/);
// const char* /*none*/ g_checksum_get_string (::GChecksum* checksum /*none*/);
GI_INLINE_DECL gi::cstring_v get_string () noexcept;

// void g_checksum_reset (GChecksum* checksum /*none*/);
// void g_checksum_reset (::GChecksum* checksum /*none*/);
GI_INLINE_DECL void reset () noexcept;

// void g_checksum_update (GChecksum* checksum /*none*/, const guchar* data /*none*/, gssize length);
// void g_checksum_update (::GChecksum* checksum /*none*/, const guint8* data /*none*/, gssize length);
GI_INLINE_DECL void update (const guint8 * data, gssize length) noexcept;

// gssize g_checksum_type_get_length (GChecksumType checksum_type);
// gssize g_checksum_type_get_length (::GChecksumType checksum_type);
static GI_INLINE_DECL gssize type_get_length (GLib::ChecksumType checksum_type) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/checksum_extra_def.hpp>)
#include <glib/checksum_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/checksum_extra.hpp>)
#include <glib/checksum_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Checksum_Ref;

class Checksum : public gi::detail::GBoxedWrapper<Checksum, ::GChecksum, GI_GLIB_CHECKSUM_BASE, Checksum_Ref>
{ typedef gi::detail::GBoxedWrapper<Checksum, ::GChecksum, GI_GLIB_CHECKSUM_BASE, Checksum_Ref> super_type; using super_type::super_type; };


class Checksum_Ref : public gi::detail::GBoxedRefWrapper<Checksum, ::GChecksum, GI_GLIB_CHECKSUM_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Checksum, ::GChecksum, GI_GLIB_CHECKSUM_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GChecksum>
{ typedef GLib::Checksum type; }; 

} // namespace repository

} // namespace gi

#endif
