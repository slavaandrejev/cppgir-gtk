// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTFORMATSBUILDER_HPP_
#define _GI_GDK_CONTENTFORMATSBUILDER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ContentFormats;
class ContentFormatsBuilder_Ref;
class ContentFormats_Ref;

class ContentFormatsBuilder;

namespace base {


#define GI_GDK_CONTENTFORMATSBUILDER_BASE base::ContentFormatsBuilderBase
class ContentFormatsBuilderBase : public gi::detail::GBoxedWrapperBase<ContentFormatsBuilderBase, ::GdkContentFormatsBuilder>
{
typedef gi::detail::GBoxedWrapperBase<ContentFormatsBuilderBase, ::GdkContentFormatsBuilder> super_type;
public:

ContentFormatsBuilderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_content_formats_builder_get_type(); } 

// GdkContentFormatsBuilder* /*full*/ gdk_content_formats_builder_new ();
// ::GdkContentFormatsBuilder* /*full*/ gdk_content_formats_builder_new ();
static GI_INLINE_DECL Gdk::ContentFormatsBuilder new_ () noexcept;

// void gdk_content_formats_builder_add_formats (GdkContentFormatsBuilder* builder /*none*/, const GdkContentFormats* formats /*none*/);
// void gdk_content_formats_builder_add_formats (::GdkContentFormatsBuilder* builder /*none*/, const ::GdkContentFormats* formats /*none*/);
GI_INLINE_DECL void add_formats (const Gdk::ContentFormats_Ref formats) noexcept;

// void gdk_content_formats_builder_add_gtype (GdkContentFormatsBuilder* builder /*none*/, GType type);
// void gdk_content_formats_builder_add_gtype (::GdkContentFormatsBuilder* builder /*none*/, GType type);
GI_INLINE_DECL void add_gtype (GType type) noexcept;

// void gdk_content_formats_builder_add_mime_type (GdkContentFormatsBuilder* builder /*none*/, const char* mime_type /*none*/);
// void gdk_content_formats_builder_add_mime_type (::GdkContentFormatsBuilder* builder /*none*/, const char* mime_type /*none*/);
GI_INLINE_DECL void add_mime_type (const gi::cstring_v mime_type) noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_builder_free_to_formats (GdkContentFormatsBuilder* builder /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_builder_free_to_formats (::GdkContentFormatsBuilder* builder /*none*/);
GI_INLINE_DECL Gdk::ContentFormats free_to_formats () noexcept;

// GdkContentFormatsBuilder* /*none*/ gdk_content_formats_builder_ref (GdkContentFormatsBuilder* builder /*none*/);
// ::GdkContentFormatsBuilder* /*none*/ gdk_content_formats_builder_ref (::GdkContentFormatsBuilder* builder /*none*/);
// IGNORE; marked ignore

// GdkContentFormats* /*full*/ gdk_content_formats_builder_to_formats (GdkContentFormatsBuilder* builder /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_builder_to_formats (::GdkContentFormatsBuilder* builder /*none*/);
GI_INLINE_DECL Gdk::ContentFormats to_formats () noexcept;

// void gdk_content_formats_builder_unref (GdkContentFormatsBuilder* builder /*none*/);
// void gdk_content_formats_builder_unref (::GdkContentFormatsBuilder* builder /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentformatsbuilder_extra_def.hpp>)
#include <gdk/contentformatsbuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentformatsbuilder_extra.hpp>)
#include <gdk/contentformatsbuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ContentFormatsBuilder_Ref;

class ContentFormatsBuilder : public gi::detail::GBoxedWrapper<ContentFormatsBuilder, ::GdkContentFormatsBuilder, GI_GDK_CONTENTFORMATSBUILDER_BASE, ContentFormatsBuilder_Ref>
{ typedef gi::detail::GBoxedWrapper<ContentFormatsBuilder, ::GdkContentFormatsBuilder, GI_GDK_CONTENTFORMATSBUILDER_BASE, ContentFormatsBuilder_Ref> super_type; using super_type::super_type; };


class ContentFormatsBuilder_Ref : public gi::detail::GBoxedRefWrapper<ContentFormatsBuilder, ::GdkContentFormatsBuilder, GI_GDK_CONTENTFORMATSBUILDER_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ContentFormatsBuilder, ::GdkContentFormatsBuilder, GI_GDK_CONTENTFORMATSBUILDER_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkContentFormatsBuilder>
{ typedef Gdk::ContentFormatsBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
