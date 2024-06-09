// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTFORMATSBUILDER_IMPL_HPP_
#define _GI_GDK_CONTENTFORMATSBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkContentFormatsBuilder* /*full*/ gdk_content_formats_builder_new ();
// ::GdkContentFormatsBuilder* /*full*/ gdk_content_formats_builder_new ();
Gdk::ContentFormatsBuilder base::ContentFormatsBuilderBase::new_ () noexcept
{
  typedef ::GdkContentFormatsBuilder* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_content_formats_builder_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_content_formats_builder_add_formats (GdkContentFormatsBuilder* builder /*none*/, const GdkContentFormats* formats /*none*/);
// void gdk_content_formats_builder_add_formats (::GdkContentFormatsBuilder* builder /*none*/, const ::GdkContentFormats* formats /*none*/);
void base::ContentFormatsBuilderBase::add_formats (const Gdk::ContentFormats_Ref formats) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentFormatsBuilder* builder, const ::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_builder_add_formats;
  auto formats_to_c = gi::unwrap (formats, gi::transfer_none);
  call_wrap_v ((::GdkContentFormatsBuilder*) (gobj_()), (const ::GdkContentFormats*) (formats_to_c));
}

// void gdk_content_formats_builder_add_gtype (GdkContentFormatsBuilder* builder /*none*/, GType type);
// void gdk_content_formats_builder_add_gtype (::GdkContentFormatsBuilder* builder /*none*/, GType type);
void base::ContentFormatsBuilderBase::add_gtype (GType type) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentFormatsBuilder* builder, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_builder_add_gtype;
  auto type_to_c = type;
  call_wrap_v ((::GdkContentFormatsBuilder*) (gobj_()), (GType) (type_to_c));
}

// void gdk_content_formats_builder_add_mime_type (GdkContentFormatsBuilder* builder /*none*/, const char* mime_type /*none*/);
// void gdk_content_formats_builder_add_mime_type (::GdkContentFormatsBuilder* builder /*none*/, const char* mime_type /*none*/);
void base::ContentFormatsBuilderBase::add_mime_type (const gi::cstring_v mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentFormatsBuilder* builder, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_builder_add_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  call_wrap_v ((::GdkContentFormatsBuilder*) (gobj_()), (const char*) (mime_type_to_c));
}

// GdkContentFormats* /*full*/ gdk_content_formats_builder_free_to_formats (GdkContentFormatsBuilder* builder /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_builder_free_to_formats (::GdkContentFormatsBuilder* builder /*none*/);
Gdk::ContentFormats base::ContentFormatsBuilderBase::free_to_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormatsBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_builder_free_to_formats;
  auto _temp_ret = call_wrap_v ((::GdkContentFormatsBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormatsBuilder* /*none*/ gdk_content_formats_builder_ref (GdkContentFormatsBuilder* builder /*none*/);
// ::GdkContentFormatsBuilder* /*none*/ gdk_content_formats_builder_ref (::GdkContentFormatsBuilder* builder /*none*/);
// IGNORE; marked ignore

// GdkContentFormats* /*full*/ gdk_content_formats_builder_to_formats (GdkContentFormatsBuilder* builder /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_builder_to_formats (::GdkContentFormatsBuilder* builder /*none*/);
Gdk::ContentFormats base::ContentFormatsBuilderBase::to_formats () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormatsBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_builder_to_formats;
  auto _temp_ret = call_wrap_v ((::GdkContentFormatsBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_content_formats_builder_unref (GdkContentFormatsBuilder* builder /*none*/);
// void gdk_content_formats_builder_unref (::GdkContentFormatsBuilder* builder /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentformatsbuilder_extra_def_impl.hpp>)
#include <gdk/contentformatsbuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentformatsbuilder_extra_impl.hpp>)
#include <gdk/contentformatsbuilder_extra_impl.hpp>
#endif
#endif

#endif
