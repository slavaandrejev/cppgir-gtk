// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFMODULEPATTERN_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFMODULEPATTERN_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

static char* _field_prefix_get (const ::GdkPixbufModulePattern* obj) { return (char*) obj->prefix; }
// char* /*none*/ PixbufModulePattern::prefix (const ::GdkPixbufModulePattern* obj /*none*/);
// char* /*none*/ PixbufModulePattern::prefix (const ::GdkPixbufModulePattern* obj /*none*/);
gi::cstring_v base::PixbufModulePatternBase::prefix_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufModulePattern* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_prefix_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufModulePattern*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static char* _field_mask_get (const ::GdkPixbufModulePattern* obj) { return (char*) obj->mask; }
// char* /*none*/ PixbufModulePattern::mask (const ::GdkPixbufModulePattern* obj /*none*/);
// char* /*none*/ PixbufModulePattern::mask (const ::GdkPixbufModulePattern* obj /*none*/);
gi::cstring_v base::PixbufModulePatternBase::mask_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufModulePattern* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mask_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufModulePattern*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static gint _field_relevance_get (const ::GdkPixbufModulePattern* obj) { return (gint) obj->relevance; }
// gint PixbufModulePattern::relevance (const ::GdkPixbufModulePattern* obj /*none*/);
// gint PixbufModulePattern::relevance (const ::GdkPixbufModulePattern* obj /*none*/);
gint base::PixbufModulePatternBase::relevance_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkPixbufModulePattern* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_relevance_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufModulePattern*) (gobj_()));
  return _temp_ret;
}

static void _field_relevance_set (::GdkPixbufModulePattern* obj, gint _value) { obj->relevance = (decltype(obj->relevance)) _value; }
//  PixbufModulePattern::relevance (::GdkPixbufModulePattern* obj /*none*/, gint _value);
// void PixbufModulePattern::relevance (::GdkPixbufModulePattern* obj /*none*/, gint _value);
void base::PixbufModulePatternBase::relevance_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbufModulePattern* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_relevance_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkPixbufModulePattern*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodulepattern_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufmodulepattern_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodulepattern_extra_impl.hpp>)
#include <gdkpixbuf/pixbufmodulepattern_extra_impl.hpp>
#endif
#endif

#endif
