// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFFORMAT_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFFORMAT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

static char* _field_name_get (const ::GdkPixbufFormat* obj) { return (char*) obj->name; }
// char* /*none*/ PixbufFormat::name (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::name (const ::GdkPixbufFormat* obj /*none*/);
gi::cstring_v base::PixbufFormatBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static ::GdkPixbufModulePattern* _field_signature_get (const ::GdkPixbufFormat* obj) { return (::GdkPixbufModulePattern*) obj->signature; }
// ::GdkPixbufModulePattern* /*none*/ PixbufFormat::signature (const ::GdkPixbufFormat* obj /*none*/);
// ::GdkPixbufModulePattern* /*none*/ PixbufFormat::signature (const ::GdkPixbufFormat* obj /*none*/);
GdkPixbuf::PixbufModulePattern_Ref base::PixbufFormatBase::signature_ () const noexcept
{
  typedef ::GdkPixbufModulePattern* (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signature_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static char* _field_domain_get (const ::GdkPixbufFormat* obj) { return (char*) obj->domain; }
// char* /*none*/ PixbufFormat::domain (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::domain (const ::GdkPixbufFormat* obj /*none*/);
gi::cstring_v base::PixbufFormatBase::domain_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_domain_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static char* _field_description_get (const ::GdkPixbufFormat* obj) { return (char*) obj->description; }
// char* /*none*/ PixbufFormat::description (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::description (const ::GdkPixbufFormat* obj /*none*/);
gi::cstring_v base::PixbufFormatBase::description_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_description_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static guint32 _field_flags_get (const ::GdkPixbufFormat* obj) { return (guint32) obj->flags; }
// guint32 PixbufFormat::flags (const ::GdkPixbufFormat* obj /*none*/);
// guint32 PixbufFormat::flags (const ::GdkPixbufFormat* obj /*none*/);
guint32 base::PixbufFormatBase::flags_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GdkPixbufFormat* obj, guint32 _value) { obj->flags = (decltype(obj->flags)) _value; }
//  PixbufFormat::flags (::GdkPixbufFormat* obj /*none*/, guint32 _value);
// void PixbufFormat::flags (::GdkPixbufFormat* obj /*none*/, guint32 _value);
void base::PixbufFormatBase::flags_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufFormat* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkPixbufFormat*) (gobj_()), (guint32) (_value_to_c));
}

static gboolean _field_disabled_get (const ::GdkPixbufFormat* obj) { return (gboolean) obj->disabled; }
// gboolean PixbufFormat::disabled (const ::GdkPixbufFormat* obj /*none*/);
// gboolean PixbufFormat::disabled (const ::GdkPixbufFormat* obj /*none*/);
bool base::PixbufFormatBase::disabled_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_disabled_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return _temp_ret;
}

static void _field_disabled_set (::GdkPixbufFormat* obj, gboolean _value) { obj->disabled = (decltype(obj->disabled)) _value; }
//  PixbufFormat::disabled (::GdkPixbufFormat* obj /*none*/, gboolean _value);
// void PixbufFormat::disabled (::GdkPixbufFormat* obj /*none*/, gboolean _value);
void base::PixbufFormatBase::disabled_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufFormat* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_disabled_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkPixbufFormat*) (gobj_()), (gboolean) (_value_to_c));
}

static char* _field_license_get (const ::GdkPixbufFormat* obj) { return (char*) obj->license; }
// char* /*none*/ PixbufFormat::license (const ::GdkPixbufFormat* obj /*none*/);
// char* /*none*/ PixbufFormat::license (const ::GdkPixbufFormat* obj /*none*/);
gi::cstring_v base::PixbufFormatBase::license_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufFormat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_license_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GdkPixbufFormat* /*full*/ gdk_pixbuf_format_copy (const GdkPixbufFormat* format /*none*/);
// ::GdkPixbufFormat* /*full*/ gdk_pixbuf_format_copy (const ::GdkPixbufFormat* format /*none*/);
GdkPixbuf::PixbufFormat base::PixbufFormatBase::copy () const noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (const ::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_copy;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_pixbuf_format_free (GdkPixbufFormat* format /*none*/);
// void gdk_pixbuf_format_free (::GdkPixbufFormat* format /*none*/);
// IGNORE; marked ignore

// gchar* /*full*/ gdk_pixbuf_format_get_description (GdkPixbufFormat* format /*none*/);
// char* /*full*/ gdk_pixbuf_format_get_description (::GdkPixbufFormat* format /*none*/);
gi::cstring base::PixbufFormatBase::get_description () noexcept
{
  typedef char* (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_get_description;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ gdk_pixbuf_format_get_extensions (GdkPixbufFormat* format /*none*/);
// char** /*full*/ gdk_pixbuf_format_get_extensions (::GdkPixbufFormat* format /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::PixbufFormatBase::get_extensions () noexcept
{
  typedef char** (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_get_extensions;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ gdk_pixbuf_format_get_license (GdkPixbufFormat* format /*none*/);
// char* /*full*/ gdk_pixbuf_format_get_license (::GdkPixbufFormat* format /*none*/);
gi::cstring base::PixbufFormatBase::get_license () noexcept
{
  typedef char* (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_get_license;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ gdk_pixbuf_format_get_mime_types (GdkPixbufFormat* format /*none*/);
// char** /*full*/ gdk_pixbuf_format_get_mime_types (::GdkPixbufFormat* format /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::PixbufFormatBase::get_mime_types () noexcept
{
  typedef char** (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_get_mime_types;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar* /*full*/ gdk_pixbuf_format_get_name (GdkPixbufFormat* format /*none*/);
// char* /*full*/ gdk_pixbuf_format_get_name (::GdkPixbufFormat* format /*none*/);
gi::cstring base::PixbufFormatBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_get_name;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_pixbuf_format_is_disabled (GdkPixbufFormat* format /*none*/);
// gboolean gdk_pixbuf_format_is_disabled (::GdkPixbufFormat* format /*none*/);
bool base::PixbufFormatBase::is_disabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_is_disabled;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_pixbuf_format_is_save_option_supported (GdkPixbufFormat* format /*none*/, const gchar* option_key /*none*/);
// gboolean gdk_pixbuf_format_is_save_option_supported (::GdkPixbufFormat* format /*none*/, const char* option_key /*none*/);
bool base::PixbufFormatBase::is_save_option_supported (const gi::cstring_v option_key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufFormat* format, const char* option_key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_is_save_option_supported;
  auto option_key_to_c = gi::unwrap (option_key, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()), (const char*) (option_key_to_c));
  return _temp_ret;
}

// gboolean gdk_pixbuf_format_is_scalable (GdkPixbufFormat* format /*none*/);
// gboolean gdk_pixbuf_format_is_scalable (::GdkPixbufFormat* format /*none*/);
bool base::PixbufFormatBase::is_scalable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_is_scalable;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_pixbuf_format_is_writable (GdkPixbufFormat* format /*none*/);
// gboolean gdk_pixbuf_format_is_writable (::GdkPixbufFormat* format /*none*/);
bool base::PixbufFormatBase::is_writable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkPixbufFormat* format);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_is_writable;
  auto _temp_ret = call_wrap_v ((::GdkPixbufFormat*) (gobj_()));
  return _temp_ret;
}

// void gdk_pixbuf_format_set_disabled (GdkPixbufFormat* format /*none*/, gboolean disabled);
// void gdk_pixbuf_format_set_disabled (::GdkPixbufFormat* format /*none*/, gboolean disabled);
void base::PixbufFormatBase::set_disabled (gboolean disabled) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufFormat* format, gboolean disabled);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_pixbuf_format_set_disabled;
  auto disabled_to_c = disabled;
  call_wrap_v ((::GdkPixbufFormat*) (gobj_()), (gboolean) (disabled_to_c));
}


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufformat_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufformat_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufformat_extra_impl.hpp>)
#include <gdkpixbuf/pixbufformat_extra_impl.hpp>
#endif
#endif

#endif
