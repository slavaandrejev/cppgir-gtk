// AUTO-GENERATED

#ifndef _GI_GLIB_STRING_HPP_
#define _GI_GLIB_STRING_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;
class Bytes_Ref;
class String_Ref;

class String;

namespace base {


#define GI_GLIB_STRING_BASE base::StringBase
class StringBase : public gi::detail::GBoxedWrapperBase<StringBase, ::GString>
{
typedef gi::detail::GBoxedWrapperBase<StringBase, ::GString> super_type;
public:

StringBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_gstring_get_type(); } 

// char* /*none*/ String::str (const ::GString* obj /*none*/);
// char* /*none*/ String::str (const ::GString* obj /*none*/);
GI_INLINE_DECL gi::cstring_v str_ () const noexcept;

// gsize String::len (const ::GString* obj /*none*/);
// gsize String::len (const ::GString* obj /*none*/);
GI_INLINE_DECL gsize len_ () const noexcept;

//  String::len (::GString* obj /*none*/, gsize _value);
// void String::len (::GString* obj /*none*/, gsize _value);
GI_INLINE_DECL void len_ (gsize _value) noexcept;

// gsize String::allocated_len (const ::GString* obj /*none*/);
// gsize String::allocated_len (const ::GString* obj /*none*/);
GI_INLINE_DECL gsize allocated_len_ () const noexcept;

//  String::allocated_len (::GString* obj /*none*/, gsize _value);
// void String::allocated_len (::GString* obj /*none*/, gsize _value);
GI_INLINE_DECL void allocated_len_ (gsize _value) noexcept;

// GString* /*full*/ g_string_new (const gchar* init /*none,nullable*/);
// ::GString* /*full*/ g_string_new (const char* init /*none,nullable*/);
static GI_INLINE_DECL GLib::String new_ (const gi::cstring_v init) noexcept;
static GI_INLINE_DECL GLib::String new_ () noexcept;

// GString* /*full*/ g_string_new_len (const gchar* init /*none*/, gssize len);
// ::GString* /*full*/ g_string_new_len (const char* init /*none*/, gssize len);
static GI_INLINE_DECL GLib::String new_len (const gi::cstring_v init, gssize len) noexcept;

// GString* /*full*/ g_string_new_take (gchar* init /*full,nullable*/);
// ::GString* /*full*/ g_string_new_take (char* init /*full,nullable*/);
static GI_INLINE_DECL GLib::String new_take (gi::cstring init) noexcept;
static GI_INLINE_DECL GLib::String new_take () noexcept;

// GString* /*full*/ g_string_sized_new (gsize dfl_size);
// ::GString* /*full*/ g_string_sized_new (gsize dfl_size);
static GI_INLINE_DECL GLib::String sized_new (gsize dfl_size) noexcept;

// GString* /*none*/ g_string_append (GString* string /*none*/, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_append (::GString* string /*none*/, const char* val /*none*/);
GI_INLINE_DECL GLib::String_Ref append (const gi::cstring_v val) noexcept;

// GString* /*none*/ g_string_append_c (GString* string /*none*/, gchar c);
// ::GString* /*none*/ g_string_append_c (::GString* string /*none*/, gchar c);
GI_INLINE_DECL GLib::String_Ref append_c (gchar c) noexcept;

// GString* /*none*/ g_string_append_len (GString* string /*none*/, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_append_len (::GString* string /*none*/, const char* val /*none*/, gssize len);
GI_INLINE_DECL GLib::String_Ref append_len (const gi::cstring_v val, gssize len) noexcept;

// void g_string_append_printf (GString* string /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_string_append_printf (::GString* string /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// GString* /*none*/ g_string_append_unichar (GString* string /*none*/, gunichar wc);
// ::GString* /*none*/ g_string_append_unichar (::GString* string /*none*/, gunichar wc);
GI_INLINE_DECL GLib::String_Ref append_unichar (gunichar wc) noexcept;

// GString* /*none*/ g_string_append_uri_escaped (GString* string /*none*/, const gchar* unescaped /*none*/, const gchar* reserved_chars_allowed /*none*/, gboolean allow_utf8);
// ::GString* /*none*/ g_string_append_uri_escaped (::GString* string /*none*/, const char* unescaped /*none*/, const char* reserved_chars_allowed /*none*/, gboolean allow_utf8);
GI_INLINE_DECL GLib::String_Ref append_uri_escaped (const gi::cstring_v unescaped, const gi::cstring_v reserved_chars_allowed, gboolean allow_utf8) noexcept;

// void g_string_append_vprintf (GString* string /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// void g_string_append_vprintf (::GString* string /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

// GString* /*none*/ g_string_ascii_down (GString* string /*none*/);
// ::GString* /*none*/ g_string_ascii_down (::GString* string /*none*/);
GI_INLINE_DECL GLib::String_Ref ascii_down () noexcept;

// GString* /*none*/ g_string_ascii_up (GString* string /*none*/);
// ::GString* /*none*/ g_string_ascii_up (::GString* string /*none*/);
GI_INLINE_DECL GLib::String_Ref ascii_up () noexcept;

// GString* /*none*/ g_string_assign (GString* string /*none*/, const gchar* rval /*none*/);
// ::GString* /*none*/ g_string_assign (::GString* string /*none*/, const char* rval /*none*/);
GI_INLINE_DECL GLib::String_Ref assign (const gi::cstring_v rval) noexcept;

// GString* /*none*/ g_string_down (GString* string /*none*/);
// ::GString* /*none*/ g_string_down (::GString* string /*none*/);
// IGNORE; deprecated

// gboolean g_string_equal (const GString* v /*none*/, const GString* v2 /*none*/);
// gboolean g_string_equal (const ::GString* v /*none*/, const ::GString* v2 /*none*/);
GI_INLINE_DECL bool equal (const GLib::String_Ref v2) const noexcept;

// GString* /*none*/ g_string_erase (GString* string /*none*/, gssize pos, gssize len);
// ::GString* /*none*/ g_string_erase (::GString* string /*none*/, gssize pos, gssize len);
GI_INLINE_DECL GLib::String_Ref erase (gssize pos, gssize len) noexcept;

// gchar* /*full,nullable*/ g_string_free (GString* string /*full*/, gboolean free_segment);
// char* /*full,nullable*/ g_string_free (::GString* string /*full*/, gboolean free_segment);
// IGNORE; marked ignore

// gchar* /*full*/ g_string_free_and_steal (GString* string /*full*/);
// char* /*full*/ g_string_free_and_steal (::GString* string /*full*/);
GI_INLINE_DECL gi::cstring free_and_steal () noexcept;

// GBytes* /*full*/ g_string_free_to_bytes (GString* string /*full*/);
// ::GBytes* /*full*/ g_string_free_to_bytes (::GString* string /*full*/);
GI_INLINE_DECL GLib::Bytes free_to_bytes () noexcept;

// guint g_string_hash (const GString* str /*none*/);
// guint g_string_hash (const ::GString* str /*none*/);
GI_INLINE_DECL guint hash () const noexcept;

// GString* /*none*/ g_string_insert (GString* string /*none*/, gssize pos, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_insert (::GString* string /*none*/, gssize pos, const char* val /*none*/);
GI_INLINE_DECL GLib::String_Ref insert (gssize pos, const gi::cstring_v val) noexcept;

// GString* /*none*/ g_string_insert_c (GString* string /*none*/, gssize pos, gchar c);
// ::GString* /*none*/ g_string_insert_c (::GString* string /*none*/, gssize pos, gchar c);
GI_INLINE_DECL GLib::String_Ref insert_c (gssize pos, gchar c) noexcept;

// GString* /*none*/ g_string_insert_len (GString* string /*none*/, gssize pos, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_insert_len (::GString* string /*none*/, gssize pos, const char* val /*none*/, gssize len);
GI_INLINE_DECL GLib::String_Ref insert_len (gssize pos, const gi::cstring_v val, gssize len) noexcept;

// GString* /*none*/ g_string_insert_unichar (GString* string /*none*/, gssize pos, gunichar wc);
// ::GString* /*none*/ g_string_insert_unichar (::GString* string /*none*/, gssize pos, gunichar wc);
GI_INLINE_DECL GLib::String_Ref insert_unichar (gssize pos, gunichar wc) noexcept;

// GString* /*none*/ g_string_overwrite (GString* string /*none*/, gsize pos, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_overwrite (::GString* string /*none*/, gsize pos, const char* val /*none*/);
GI_INLINE_DECL GLib::String_Ref overwrite (gsize pos, const gi::cstring_v val) noexcept;

// GString* /*none*/ g_string_overwrite_len (GString* string /*none*/, gsize pos, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_overwrite_len (::GString* string /*none*/, gsize pos, const char* val /*none*/, gssize len);
GI_INLINE_DECL GLib::String_Ref overwrite_len (gsize pos, const gi::cstring_v val, gssize len) noexcept;

// GString* /*none*/ g_string_prepend (GString* string /*none*/, const gchar* val /*none*/);
// ::GString* /*none*/ g_string_prepend (::GString* string /*none*/, const char* val /*none*/);
GI_INLINE_DECL GLib::String_Ref prepend (const gi::cstring_v val) noexcept;

// GString* /*none*/ g_string_prepend_c (GString* string /*none*/, gchar c);
// ::GString* /*none*/ g_string_prepend_c (::GString* string /*none*/, gchar c);
GI_INLINE_DECL GLib::String_Ref prepend_c (gchar c) noexcept;

// GString* /*none*/ g_string_prepend_len (GString* string /*none*/, const gchar* val /*none*/, gssize len);
// ::GString* /*none*/ g_string_prepend_len (::GString* string /*none*/, const char* val /*none*/, gssize len);
GI_INLINE_DECL GLib::String_Ref prepend_len (const gi::cstring_v val, gssize len) noexcept;

// GString* /*none*/ g_string_prepend_unichar (GString* string /*none*/, gunichar wc);
// ::GString* /*none*/ g_string_prepend_unichar (::GString* string /*none*/, gunichar wc);
GI_INLINE_DECL GLib::String_Ref prepend_unichar (gunichar wc) noexcept;

// void g_string_printf (GString* string /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_string_printf (::GString* string /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// guint g_string_replace (GString* string /*none*/, const gchar* find /*none*/, const gchar* replace /*none*/, guint limit);
// guint g_string_replace (::GString* string /*none*/, const char* find /*none*/, const char* replace /*none*/, guint limit);
GI_INLINE_DECL guint replace (const gi::cstring_v find, const gi::cstring_v replace, guint limit) noexcept;

// GString* /*none*/ g_string_set_size (GString* string /*none*/, gsize len);
// ::GString* /*none*/ g_string_set_size (::GString* string /*none*/, gsize len);
GI_INLINE_DECL GLib::String_Ref set_size (gsize len) noexcept;

// GString* /*none*/ g_string_truncate (GString* string /*none*/, gsize len);
// ::GString* /*none*/ g_string_truncate (::GString* string /*none*/, gsize len);
GI_INLINE_DECL GLib::String_Ref truncate (gsize len) noexcept;

// GString* /*none*/ g_string_up (GString* string /*none*/);
// ::GString* /*none*/ g_string_up (::GString* string /*none*/);
// IGNORE; deprecated

// void g_string_vprintf (GString* string /*none*/, const gchar* format /*none*/, va_list args /*none*/);
// void g_string_vprintf (::GString* string /*none*/, const char* format /*none*/,  args /*none*/);
// IGNORE; not introspectable, args type  not supported

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/string_extra_def.hpp>)
#include <glib/string_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/string_extra.hpp>)
#include <glib/string_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class String_Ref;

class String : public gi::detail::GBoxedWrapper<String, ::GString, GI_GLIB_STRING_BASE, String_Ref>
{ typedef gi::detail::GBoxedWrapper<String, ::GString, GI_GLIB_STRING_BASE, String_Ref> super_type; using super_type::super_type; };


class String_Ref : public gi::detail::GBoxedRefWrapper<String, ::GString, GI_GLIB_STRING_BASE>
{ typedef gi::detail::GBoxedRefWrapper<String, ::GString, GI_GLIB_STRING_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GString>
{ typedef GLib::String type; }; 

} // namespace repository

} // namespace gi

#endif
