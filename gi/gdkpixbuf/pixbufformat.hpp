// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFFORMAT_HPP_
#define _GI_GDKPIXBUF_PIXBUFFORMAT_HPP_


namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufFormat_Ref;
class PixbufModulePattern;
class PixbufModulePattern_Ref;

class PixbufFormat;

namespace base {


#define GI_GDKPIXBUF_PIXBUFFORMAT_BASE base::PixbufFormatBase
class PixbufFormatBase : public gi::detail::GBoxedWrapperBase<PixbufFormatBase, ::GdkPixbufFormat>
{
typedef gi::detail::GBoxedWrapperBase<PixbufFormatBase, ::GdkPixbufFormat> super_type;
public:

PixbufFormatBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_pixbuf_format_get_type(); } 

// char* /*none*/ PixbufFormat::name (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::name (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL gi::cstring_v name_ () const noexcept;

// ::GdkPixbufModulePattern* /*none*/ PixbufFormat::signature (const ::GdkPixbufFormat* obj /*none*/);
// ::GdkPixbufModulePattern* /*none*/ PixbufFormat::signature (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL GdkPixbuf::PixbufModulePattern_Ref signature_ () const noexcept;

// char* /*none*/ PixbufFormat::domain (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::domain (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL gi::cstring_v domain_ () const noexcept;

// char* /*none*/ PixbufFormat::description (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::description (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL gi::cstring_v description_ () const noexcept;

// guint32 PixbufFormat::flags (const ::GdkPixbufFormat* obj /*none*/);
// guint32 PixbufFormat::flags (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL guint32 flags_ () const noexcept;

//  PixbufFormat::flags (::GdkPixbufFormat* obj /*none*/, guint32 _value);
// void PixbufFormat::flags (::GdkPixbufFormat* obj /*none*/, guint32 _value);
GI_INLINE_DECL void flags_ (guint32 _value) noexcept;

// gboolean PixbufFormat::disabled (const ::GdkPixbufFormat* obj /*none*/);
// gboolean PixbufFormat::disabled (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL bool disabled_ () const noexcept;

//  PixbufFormat::disabled (::GdkPixbufFormat* obj /*none*/, gboolean _value);
// void PixbufFormat::disabled (::GdkPixbufFormat* obj /*none*/, gboolean _value);
GI_INLINE_DECL void disabled_ (gboolean _value) noexcept;

// char* /*none*/ PixbufFormat::license (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::license (const ::GdkPixbufFormat* obj /*none*/);
GI_INLINE_DECL gi::cstring_v license_ () const noexcept;

// GdkPixbufFormat* /*full*/ gdk_pixbuf_format_copy (const GdkPixbufFormat* format /*none*/);
// ::GdkPixbufFormat* /*full*/ gdk_pixbuf_format_copy (const ::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL GdkPixbuf::PixbufFormat copy () const noexcept;

// void gdk_pixbuf_format_free (GdkPixbufFormat* format /*none*/);
// void gdk_pixbuf_format_free (::GdkPixbufFormat* format /*none*/);
// IGNORE; marked ignore

// gchar* /*full*/ gdk_pixbuf_format_get_description (GdkPixbufFormat* format /*none*/);
// char* /*full*/ gdk_pixbuf_format_get_description (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL gi::cstring get_description () noexcept;

// gchar** /*full*/ gdk_pixbuf_format_get_extensions (GdkPixbufFormat* format /*none*/);
// char** /*full*/ gdk_pixbuf_format_get_extensions (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_extensions () noexcept;

// gchar* /*full*/ gdk_pixbuf_format_get_license (GdkPixbufFormat* format /*none*/);
// char* /*full*/ gdk_pixbuf_format_get_license (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL gi::cstring get_license () noexcept;

// gchar** /*full*/ gdk_pixbuf_format_get_mime_types (GdkPixbufFormat* format /*none*/);
// char** /*full*/ gdk_pixbuf_format_get_mime_types (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_mime_types () noexcept;

// gchar* /*full*/ gdk_pixbuf_format_get_name (GdkPixbufFormat* format /*none*/);
// char* /*full*/ gdk_pixbuf_format_get_name (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL gi::cstring get_name () noexcept;

// gboolean gdk_pixbuf_format_is_disabled (GdkPixbufFormat* format /*none*/);
// gboolean gdk_pixbuf_format_is_disabled (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL bool is_disabled () noexcept;

// gboolean gdk_pixbuf_format_is_save_option_supported (GdkPixbufFormat* format /*none*/, const gchar* option_key /*none*/);
// gboolean gdk_pixbuf_format_is_save_option_supported (::GdkPixbufFormat* format /*none*/, const char* option_key /*none*/);
GI_INLINE_DECL bool is_save_option_supported (const gi::cstring_v option_key) noexcept;

// gboolean gdk_pixbuf_format_is_scalable (GdkPixbufFormat* format /*none*/);
// gboolean gdk_pixbuf_format_is_scalable (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL bool is_scalable () noexcept;

// gboolean gdk_pixbuf_format_is_writable (GdkPixbufFormat* format /*none*/);
// gboolean gdk_pixbuf_format_is_writable (::GdkPixbufFormat* format /*none*/);
GI_INLINE_DECL bool is_writable () noexcept;

// void gdk_pixbuf_format_set_disabled (GdkPixbufFormat* format /*none*/, gboolean disabled);
// void gdk_pixbuf_format_set_disabled (::GdkPixbufFormat* format /*none*/, gboolean disabled);
GI_INLINE_DECL void set_disabled (gboolean disabled) noexcept;

}; // class

} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufformat_extra_def.hpp>)
#include <gdkpixbuf/pixbufformat_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufformat_extra.hpp>)
#include <gdkpixbuf/pixbufformat_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GdkPixbuf {

class PixbufFormat_Ref;

class PixbufFormat : public gi::detail::GBoxedWrapper<PixbufFormat, ::GdkPixbufFormat, GI_GDKPIXBUF_PIXBUFFORMAT_BASE, PixbufFormat_Ref>
{ typedef gi::detail::GBoxedWrapper<PixbufFormat, ::GdkPixbufFormat, GI_GDKPIXBUF_PIXBUFFORMAT_BASE, PixbufFormat_Ref> super_type; using super_type::super_type; };


class PixbufFormat_Ref : public gi::detail::GBoxedRefWrapper<PixbufFormat, ::GdkPixbufFormat, GI_GDKPIXBUF_PIXBUFFORMAT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PixbufFormat, ::GdkPixbufFormat, GI_GDKPIXBUF_PIXBUFFORMAT_BASE> super_type; using super_type::super_type; };

} // namespace GdkPixbuf

template<> struct declare_cpptype_of<::GdkPixbufFormat>
{ typedef GdkPixbuf::PixbufFormat type; }; 

} // namespace repository

} // namespace gi

#endif
