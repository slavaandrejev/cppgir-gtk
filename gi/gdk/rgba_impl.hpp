// AUTO-GENERATED

#ifndef _GI_GDK_RGBA_IMPL_HPP_
#define _GI_GDK_RGBA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static gfloat _field_red_get (const ::GdkRGBA* obj) { return (gfloat) obj->red; }
// gfloat RGBA::red (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::red (const ::GdkRGBA* obj /*none*/);
gfloat base::RGBABase::red_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_red_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_red_set (::GdkRGBA* obj, gfloat _value) { obj->red = (decltype(obj->red)) _value; }
//  RGBA::red (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::red (::GdkRGBA* obj /*none*/, gfloat _value);
void base::RGBABase::red_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_red_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_green_get (const ::GdkRGBA* obj) { return (gfloat) obj->green; }
// gfloat RGBA::green (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::green (const ::GdkRGBA* obj /*none*/);
gfloat base::RGBABase::green_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_green_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_green_set (::GdkRGBA* obj, gfloat _value) { obj->green = (decltype(obj->green)) _value; }
//  RGBA::green (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::green (::GdkRGBA* obj /*none*/, gfloat _value);
void base::RGBABase::green_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_green_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_blue_get (const ::GdkRGBA* obj) { return (gfloat) obj->blue; }
// gfloat RGBA::blue (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::blue (const ::GdkRGBA* obj /*none*/);
gfloat base::RGBABase::blue_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_blue_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_blue_set (::GdkRGBA* obj, gfloat _value) { obj->blue = (decltype(obj->blue)) _value; }
//  RGBA::blue (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::blue (::GdkRGBA* obj /*none*/, gfloat _value);
void base::RGBABase::blue_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_blue_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gfloat) (_value_to_c));
}

static gfloat _field_alpha_get (const ::GdkRGBA* obj) { return (gfloat) obj->alpha; }
// gfloat RGBA::alpha (const ::GdkRGBA* obj /*none*/);
// gfloat RGBA::alpha (const ::GdkRGBA* obj /*none*/);
gfloat base::RGBABase::alpha_ () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GdkRGBA* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_alpha_get;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

static void _field_alpha_set (::GdkRGBA* obj, gfloat _value) { obj->alpha = (decltype(obj->alpha)) _value; }
//  RGBA::alpha (::GdkRGBA* obj /*none*/, gfloat _value);
// void RGBA::alpha (::GdkRGBA* obj /*none*/, gfloat _value);
void base::RGBABase::alpha_ (gfloat _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkRGBA* obj, gfloat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_alpha_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkRGBA*) (gobj_()), (gfloat) (_value_to_c));
}

// GdkRGBA* /*full*/ gdk_rgba_copy (const GdkRGBA* rgba /*none*/);
// ::GdkRGBA* /*full*/ gdk_rgba_copy (const ::GdkRGBA* rgba /*none*/);
Gdk::RGBA base::RGBABase::copy () const noexcept
{
  typedef ::GdkRGBA* (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_copy;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_rgba_equal (gconstpointer p1 /*none*/, gconstpointer p2 /*none*/);
// gboolean gdk_rgba_equal (const ::GdkRGBA* p1 /*none*/, const ::GdkRGBA* p2 /*none*/);
bool base::RGBABase::equal (const Gdk::RGBA_Ref p2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRGBA* p1, const ::GdkRGBA* p2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_equal;
  auto p2_to_c = gi::unwrap (p2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()), (const ::GdkRGBA*) (p2_to_c));
  return _temp_ret;
}

// void gdk_rgba_free (GdkRGBA* rgba /*none*/);
// void gdk_rgba_free (::GdkRGBA* rgba /*none*/);
// IGNORE; marked ignore

// guint gdk_rgba_hash (gconstpointer p /*none*/);
// guint gdk_rgba_hash (const ::GdkRGBA* p /*none*/);
guint base::RGBABase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkRGBA* p);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_hash;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_rgba_is_clear (const GdkRGBA* rgba /*none*/);
// gboolean gdk_rgba_is_clear (const ::GdkRGBA* rgba /*none*/);
bool base::RGBABase::is_clear () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_is_clear;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_rgba_is_opaque (const GdkRGBA* rgba /*none*/);
// gboolean gdk_rgba_is_opaque (const ::GdkRGBA* rgba /*none*/);
bool base::RGBABase::is_opaque () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_is_opaque;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_rgba_parse (GdkRGBA* rgba /*none*/, const char* spec /*none*/);
// gboolean gdk_rgba_parse (::GdkRGBA* rgba /*none*/, const char* spec /*none*/);
bool base::RGBABase::parse (const gi::cstring_v spec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkRGBA* rgba, const char* spec);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_parse;
  auto spec_to_c = gi::unwrap (spec, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkRGBA*) (gobj_()), (const char*) (spec_to_c));
  return _temp_ret;
}

// char* /*full*/ gdk_rgba_to_string (const GdkRGBA* rgba /*none*/);
// char* /*full*/ gdk_rgba_to_string (const ::GdkRGBA* rgba /*none*/);
gi::cstring base::RGBABase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_rgba_to_string;
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra_def_impl.hpp>)
#include <gdk/rgba_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra_impl.hpp>)
#include <gdk/rgba_extra_impl.hpp>
#endif
#endif

#endif
