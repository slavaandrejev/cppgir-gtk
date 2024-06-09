// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTFORMATS_HPP_
#define _GI_GDK_CONTENTFORMATS_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class ContentFormats_Ref;

class ContentFormats;

namespace base {


#define GI_GDK_CONTENTFORMATS_BASE base::ContentFormatsBase
class ContentFormatsBase : public gi::detail::GBoxedWrapperBase<ContentFormatsBase, ::GdkContentFormats>
{
typedef gi::detail::GBoxedWrapperBase<ContentFormatsBase, ::GdkContentFormats> super_type;
public:

ContentFormatsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_content_formats_get_type(); } 

// GdkContentFormats* /*full*/ gdk_content_formats_new (const char** mime_types /*none,nullable*/, guint n_mime_types);
// ::GdkContentFormats* /*full*/ gdk_content_formats_new (const char** mime_types /*none,nullable*/, guint n_mime_types);
static GI_INLINE_DECL Gdk::ContentFormats new_ (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> mime_types) noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_new_for_gtype (GType type);
// ::GdkContentFormats* /*full*/ gdk_content_formats_new_for_gtype (GType type);
static GI_INLINE_DECL Gdk::ContentFormats new_for_gtype (GType type) noexcept;

// gboolean gdk_content_formats_contain_gtype (const GdkContentFormats* formats /*none*/, GType type);
// gboolean gdk_content_formats_contain_gtype (const ::GdkContentFormats* formats /*none*/, GType type);
GI_INLINE_DECL bool contain_gtype (GType type) const noexcept;

// gboolean gdk_content_formats_contain_mime_type (const GdkContentFormats* formats /*none*/, const char* mime_type /*none*/);
// gboolean gdk_content_formats_contain_mime_type (const ::GdkContentFormats* formats /*none*/, const char* mime_type /*none*/);
GI_INLINE_DECL bool contain_mime_type (const gi::cstring_v mime_type) const noexcept;

// const GType* /*none,nullable*/ gdk_content_formats_get_gtypes (const GdkContentFormats* formats /*none*/, gsize* n_gtypes);
// const GType* /*none,nullable*/ gdk_content_formats_get_gtypes (const ::GdkContentFormats* formats /*none*/, gsize* n_gtypes);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t> get_gtypes (gsize * n_gtypes) const noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>, gsize> get_gtypes () const noexcept;

// const char* const* /*none,nullable*/ gdk_content_formats_get_mime_types (const GdkContentFormats* formats /*none*/, gsize* n_mime_types);
// const char** /*none,nullable*/ gdk_content_formats_get_mime_types (const ::GdkContentFormats* formats /*none*/, gsize* n_mime_types);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_mime_types (gsize * n_mime_types) const noexcept;
GI_INLINE_DECL std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>, gsize> get_mime_types () const noexcept;

// gboolean gdk_content_formats_match (const GdkContentFormats* first /*none*/, const GdkContentFormats* second /*none*/);
// gboolean gdk_content_formats_match (const ::GdkContentFormats* first /*none*/, const ::GdkContentFormats* second /*none*/);
GI_INLINE_DECL bool match (const Gdk::ContentFormats_Ref second) const noexcept;

// GType gdk_content_formats_match_gtype (const GdkContentFormats* first /*none*/, const GdkContentFormats* second /*none*/);
// GType gdk_content_formats_match_gtype (const ::GdkContentFormats* first /*none*/, const ::GdkContentFormats* second /*none*/);
GI_INLINE_DECL GType match_gtype (const Gdk::ContentFormats_Ref second) const noexcept;

// const char* /*none,nullable*/ gdk_content_formats_match_mime_type (const GdkContentFormats* first /*none*/, const GdkContentFormats* second /*none*/);
// const char* /*none,nullable*/ gdk_content_formats_match_mime_type (const ::GdkContentFormats* first /*none*/, const ::GdkContentFormats* second /*none*/);
GI_INLINE_DECL gi::cstring_v match_mime_type (const Gdk::ContentFormats_Ref second) const noexcept;

// void gdk_content_formats_print (GdkContentFormats* formats /*none*/, GString* string /*none*/);
// void gdk_content_formats_print (::GdkContentFormats* formats /*none*/, ::GString* string /*none*/);
GI_INLINE_DECL void print (GLib::String_Ref string) noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_ref (GdkContentFormats* formats /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_ref (::GdkContentFormats* formats /*none*/);
// IGNORE; marked ignore

// char* /*full*/ gdk_content_formats_to_string (GdkContentFormats* formats /*none*/);
// char* /*full*/ gdk_content_formats_to_string (::GdkContentFormats* formats /*none*/);
GI_INLINE_DECL gi::cstring to_string () noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_union (GdkContentFormats* first /*full*/, const GdkContentFormats* second /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union (::GdkContentFormats* first /*full*/, const ::GdkContentFormats* second /*none*/);
GI_INLINE_DECL Gdk::ContentFormats union_ (const Gdk::ContentFormats_Ref second) noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_gtypes (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_gtypes (::GdkContentFormats* formats /*full*/);
GI_INLINE_DECL Gdk::ContentFormats union_deserialize_gtypes () noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_mime_types (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_mime_types (::GdkContentFormats* formats /*full*/);
GI_INLINE_DECL Gdk::ContentFormats union_deserialize_mime_types () noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_gtypes (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_gtypes (::GdkContentFormats* formats /*full*/);
GI_INLINE_DECL Gdk::ContentFormats union_serialize_gtypes () noexcept;

// GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_mime_types (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_mime_types (::GdkContentFormats* formats /*full*/);
GI_INLINE_DECL Gdk::ContentFormats union_serialize_mime_types () noexcept;

// void gdk_content_formats_unref (GdkContentFormats* formats /*none*/);
// void gdk_content_formats_unref (::GdkContentFormats* formats /*none*/);
// IGNORE; marked ignore

// GdkContentFormats* /*full,nullable*/ gdk_content_formats_parse (const char* string /*none*/);
// ::GdkContentFormats* /*full,nullable*/ gdk_content_formats_parse (const char* string /*none*/);
static GI_INLINE_DECL Gdk::ContentFormats parse (const gi::cstring_v string) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentformats_extra_def.hpp>)
#include <gdk/contentformats_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentformats_extra.hpp>)
#include <gdk/contentformats_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class ContentFormats_Ref;

class ContentFormats : public gi::detail::GBoxedWrapper<ContentFormats, ::GdkContentFormats, GI_GDK_CONTENTFORMATS_BASE, ContentFormats_Ref>
{ typedef gi::detail::GBoxedWrapper<ContentFormats, ::GdkContentFormats, GI_GDK_CONTENTFORMATS_BASE, ContentFormats_Ref> super_type; using super_type::super_type; };


class ContentFormats_Ref : public gi::detail::GBoxedRefWrapper<ContentFormats, ::GdkContentFormats, GI_GDK_CONTENTFORMATS_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ContentFormats, ::GdkContentFormats, GI_GDK_CONTENTFORMATS_BASE> super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkContentFormats>
{ typedef Gdk::ContentFormats type; }; 

} // namespace repository

} // namespace gi

#endif
