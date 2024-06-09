// AUTO-GENERATED

#ifndef _GI_GDK_CONTENTFORMATS_IMPL_HPP_
#define _GI_GDK_CONTENTFORMATS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkContentFormats* /*full*/ gdk_content_formats_new (const char** mime_types /*none,nullable*/, guint n_mime_types);
// ::GdkContentFormats* /*full*/ gdk_content_formats_new (const char** mime_types /*none,nullable*/, guint n_mime_types);
Gdk::ContentFormats base::ContentFormatsBase::new_ (gi::CollectionParameter<gi::DSpan, char*, gi::transfer_none_t> mime_types) noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (const char** mime_types, guint n_mime_types);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_content_formats_new;
  auto mime_types_w = unwrap (std::move(mime_types), gi::transfer_none);
  auto mime_types_to_c = mime_types_w;
  auto _temp_ret = call_wrap_v ((const char**) (mime_types_to_c), (guint) (mime_types._size()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_formats_new_for_gtype (GType type);
// ::GdkContentFormats* /*full*/ gdk_content_formats_new_for_gtype (GType type);
Gdk::ContentFormats base::ContentFormatsBase::new_for_gtype (GType type) noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_content_formats_new_for_gtype;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean gdk_content_formats_contain_gtype (const GdkContentFormats* formats /*none*/, GType type);
// gboolean gdk_content_formats_contain_gtype (const ::GdkContentFormats* formats /*none*/, GType type);
bool base::ContentFormatsBase::contain_gtype (GType type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkContentFormats* formats, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_contain_gtype;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// gboolean gdk_content_formats_contain_mime_type (const GdkContentFormats* formats /*none*/, const char* mime_type /*none*/);
// gboolean gdk_content_formats_contain_mime_type (const ::GdkContentFormats* formats /*none*/, const char* mime_type /*none*/);
bool base::ContentFormatsBase::contain_mime_type (const gi::cstring_v mime_type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkContentFormats* formats, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_contain_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (const char*) (mime_type_to_c));
  return _temp_ret;
}

// const GType* /*none,nullable*/ gdk_content_formats_get_gtypes (const GdkContentFormats* formats /*none*/, gsize* n_gtypes);
// const GType* /*none,nullable*/ gdk_content_formats_get_gtypes (const ::GdkContentFormats* formats /*none*/, gsize* n_gtypes);
gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t> base::ContentFormatsBase::get_gtypes (gsize * n_gtypes) const noexcept
{
  typedef const GType* (*call_wrap_t) (const ::GdkContentFormats* formats, gsize* n_gtypes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_get_gtypes;
  gsize n_gtypes_o {};
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (gsize*) (n_gtypes ? &n_gtypes_o : nullptr));
  if (n_gtypes) *n_gtypes = n_gtypes_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}
std::tuple<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>, gsize> base::ContentFormatsBase::get_gtypes () const noexcept
{
  typedef const GType* (*call_wrap_t) (const ::GdkContentFormats* formats, gsize* n_gtypes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_get_gtypes;
  gsize n_gtypes_o {};
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (gsize*) (&n_gtypes_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, GType, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = n_gtypes_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const char* const* /*none,nullable*/ gdk_content_formats_get_mime_types (const GdkContentFormats* formats /*none*/, gsize* n_mime_types);
// const char** /*none,nullable*/ gdk_content_formats_get_mime_types (const ::GdkContentFormats* formats /*none*/, gsize* n_mime_types);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::ContentFormatsBase::get_mime_types (gsize * n_mime_types) const noexcept
{
  typedef const char** (*call_wrap_t) (const ::GdkContentFormats* formats, gsize* n_mime_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_get_mime_types;
  gsize n_mime_types_o {};
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (gsize*) (n_mime_types ? &n_mime_types_o : nullptr));
  if (n_mime_types) *n_mime_types = n_mime_types_o;
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}
std::tuple<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>, gsize> base::ContentFormatsBase::get_mime_types () const noexcept
{
  typedef const char** (*call_wrap_t) (const ::GdkContentFormats* formats, gsize* n_mime_types);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_get_mime_types;
  gsize n_mime_types_o {};
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (gsize*) (&n_mime_types_o));
  auto &&tmp_return_1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
  auto &&tmp_return_2 = n_mime_types_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean gdk_content_formats_match (const GdkContentFormats* first /*none*/, const GdkContentFormats* second /*none*/);
// gboolean gdk_content_formats_match (const ::GdkContentFormats* first /*none*/, const ::GdkContentFormats* second /*none*/);
bool base::ContentFormatsBase::match (const Gdk::ContentFormats_Ref second) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkContentFormats* first, const ::GdkContentFormats* second);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_match;
  auto second_to_c = gi::unwrap (second, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (const ::GdkContentFormats*) (second_to_c));
  return _temp_ret;
}

// GType gdk_content_formats_match_gtype (const GdkContentFormats* first /*none*/, const GdkContentFormats* second /*none*/);
// GType gdk_content_formats_match_gtype (const ::GdkContentFormats* first /*none*/, const ::GdkContentFormats* second /*none*/);
GType base::ContentFormatsBase::match_gtype (const Gdk::ContentFormats_Ref second) const noexcept
{
  typedef GType (*call_wrap_t) (const ::GdkContentFormats* first, const ::GdkContentFormats* second);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_match_gtype;
  auto second_to_c = gi::unwrap (second, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (const ::GdkContentFormats*) (second_to_c));
  return _temp_ret;
}

// const char* /*none,nullable*/ gdk_content_formats_match_mime_type (const GdkContentFormats* first /*none*/, const GdkContentFormats* second /*none*/);
// const char* /*none,nullable*/ gdk_content_formats_match_mime_type (const ::GdkContentFormats* first /*none*/, const ::GdkContentFormats* second /*none*/);
gi::cstring_v base::ContentFormatsBase::match_mime_type (const Gdk::ContentFormats_Ref second) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GdkContentFormats* first, const ::GdkContentFormats* second);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_match_mime_type;
  auto second_to_c = gi::unwrap (second, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const ::GdkContentFormats*) (gobj_()), (const ::GdkContentFormats*) (second_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gdk_content_formats_print (GdkContentFormats* formats /*none*/, GString* string /*none*/);
// void gdk_content_formats_print (::GdkContentFormats* formats /*none*/, ::GString* string /*none*/);
void base::ContentFormatsBase::print (GLib::String_Ref string) noexcept
{
  typedef void (*call_wrap_t) (::GdkContentFormats* formats, ::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_print;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  call_wrap_v ((::GdkContentFormats*) (gobj_()), (::GString*) (string_to_c));
}

// GdkContentFormats* /*full*/ gdk_content_formats_ref (GdkContentFormats* formats /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_ref (::GdkContentFormats* formats /*none*/);
// IGNORE; marked ignore

// char* /*full*/ gdk_content_formats_to_string (GdkContentFormats* formats /*none*/);
// char* /*full*/ gdk_content_formats_to_string (::GdkContentFormats* formats /*none*/);
gi::cstring base::ContentFormatsBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_to_string;
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_formats_union (GdkContentFormats* first /*full*/, const GdkContentFormats* second /*none*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union (::GdkContentFormats* first /*full*/, const ::GdkContentFormats* second /*none*/);
Gdk::ContentFormats base::ContentFormatsBase::union_ (const Gdk::ContentFormats_Ref second) noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormats* first, const ::GdkContentFormats* second);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_union;
  auto second_to_c = gi::unwrap (second, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (gobj_()), (const ::GdkContentFormats*) (second_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_gtypes (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_gtypes (::GdkContentFormats* formats /*full*/);
Gdk::ContentFormats base::ContentFormatsBase::union_deserialize_gtypes () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_union_deserialize_gtypes;
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_mime_types (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_deserialize_mime_types (::GdkContentFormats* formats /*full*/);
Gdk::ContentFormats base::ContentFormatsBase::union_deserialize_mime_types () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_union_deserialize_mime_types;
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_gtypes (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_gtypes (::GdkContentFormats* formats /*full*/);
Gdk::ContentFormats base::ContentFormatsBase::union_serialize_gtypes () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_union_serialize_gtypes;
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_mime_types (GdkContentFormats* formats /*full*/);
// ::GdkContentFormats* /*full*/ gdk_content_formats_union_serialize_mime_types (::GdkContentFormats* formats /*full*/);
Gdk::ContentFormats base::ContentFormatsBase::union_serialize_mime_types () noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (::GdkContentFormats* formats);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_union_serialize_mime_types;
  auto _temp_ret = call_wrap_v ((::GdkContentFormats*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void gdk_content_formats_unref (GdkContentFormats* formats /*none*/);
// void gdk_content_formats_unref (::GdkContentFormats* formats /*none*/);
// IGNORE; marked ignore

// GdkContentFormats* /*full,nullable*/ gdk_content_formats_parse (const char* string /*none*/);
// ::GdkContentFormats* /*full,nullable*/ gdk_content_formats_parse (const char* string /*none*/);
Gdk::ContentFormats base::ContentFormatsBase::parse (const gi::cstring_v string) noexcept
{
  typedef ::GdkContentFormats* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gdk_content_formats_parse;
  auto string_to_c = gi::unwrap (string, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/contentformats_extra_def_impl.hpp>)
#include <gdk/contentformats_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/contentformats_extra_impl.hpp>)
#include <gdk/contentformats_extra_impl.hpp>
#endif
#endif

#endif
