// AUTO-GENERATED

#ifndef _GI_GLIB_MARKUPPARSECONTEXT_HPP_
#define _GI_GLIB_MARKUPPARSECONTEXT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MarkupParseContext_Ref;
class MarkupParser;
class MarkupParser_Ref;

class MarkupParseContext;

namespace base {


#define GI_GLIB_MARKUPPARSECONTEXT_BASE base::MarkupParseContextBase
class MarkupParseContextBase : public gi::detail::GBoxedWrapperBase<MarkupParseContextBase, ::GMarkupParseContext>
{
typedef gi::detail::GBoxedWrapperBase<MarkupParseContextBase, ::GMarkupParseContext> super_type;
public:

MarkupParseContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_markup_parse_context_get_type(); } 

// GMarkupParseContext* /*full*/ g_markup_parse_context_new (const GMarkupParser* parser /*none*/, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify /*none*/);
// ::GMarkupParseContext* /*full*/ g_markup_parse_context_new (const ::GMarkupParser* parser /*none*/, ::GMarkupParseFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_dnotify /*none*/);
// SKIP; callback misses closure info

// gboolean g_markup_parse_context_end_parse (GMarkupParseContext* context /*none*/, GError ** error);
// gboolean g_markup_parse_context_end_parse (::GMarkupParseContext* context /*none*/, GError ** error);
GI_INLINE_DECL bool end_parse ();
GI_INLINE_DECL bool end_parse (GLib::Error * _error) noexcept;

// void g_markup_parse_context_free (GMarkupParseContext* context /*none*/);
// void g_markup_parse_context_free (::GMarkupParseContext* context /*none*/);
// IGNORE; marked ignore

// const gchar* /*none*/ g_markup_parse_context_get_element (GMarkupParseContext* context /*none*/);
// const char* /*none*/ g_markup_parse_context_get_element (::GMarkupParseContext* context /*none*/);
GI_INLINE_DECL gi::cstring_v get_element () noexcept;

// const GSList* /*none*/ g_markup_parse_context_get_element_stack (GMarkupParseContext* context /*none*/);
// const ::GSList* /*none*/ g_markup_parse_context_get_element_stack (::GMarkupParseContext* context /*none*/);
GI_INLINE_DECL gi::Collection<GSList, char*, gi::transfer_none_t> get_element_stack () noexcept;

// void g_markup_parse_context_get_position (GMarkupParseContext* context /*none*/, gint* line_number, gint* char_number);
// void g_markup_parse_context_get_position (::GMarkupParseContext* context /*none*/, gint* line_number, gint* char_number);
GI_INLINE_DECL void get_position (gint * line_number, gint * char_number) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_position () noexcept;

// gpointer g_markup_parse_context_get_user_data (GMarkupParseContext* context /*none*/);
// void* g_markup_parse_context_get_user_data (::GMarkupParseContext* context /*none*/);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// gboolean g_markup_parse_context_parse (GMarkupParseContext* context /*none*/, const gchar* text /*none*/, gssize text_len, GError ** error);
// gboolean g_markup_parse_context_parse (::GMarkupParseContext* context /*none*/, const char* text /*none*/, gssize text_len, GError ** error);
GI_INLINE_DECL bool parse (const gi::cstring_v text, gssize text_len);
GI_INLINE_DECL bool parse (const gi::cstring_v text, gssize text_len, GLib::Error * _error) noexcept;

// gpointer g_markup_parse_context_pop (GMarkupParseContext* context /*none*/);
// void* g_markup_parse_context_pop (::GMarkupParseContext* context /*none*/);
GI_INLINE_DECL gpointer pop () noexcept;

// void g_markup_parse_context_push (GMarkupParseContext* context /*none*/, const GMarkupParser* parser /*none*/, gpointer user_data);
// void g_markup_parse_context_push (::GMarkupParseContext* context /*none*/, const ::GMarkupParser* parser /*none*/, void* user_data);
GI_INLINE_DECL void push (const GLib::MarkupParser_Ref parser, void* user_data) noexcept;

// GMarkupParseContext* /*full*/ g_markup_parse_context_ref (GMarkupParseContext* context /*none*/);
// ::GMarkupParseContext* /*full*/ g_markup_parse_context_ref (::GMarkupParseContext* context /*none*/);
// IGNORE; marked ignore

// void g_markup_parse_context_unref (GMarkupParseContext* context /*none*/);
// void g_markup_parse_context_unref (::GMarkupParseContext* context /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra_def.hpp>)
#include <glib/markupparsecontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra.hpp>)
#include <glib/markupparsecontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MarkupParseContext_Ref;

class MarkupParseContext : public gi::detail::GBoxedWrapper<MarkupParseContext, ::GMarkupParseContext, GI_GLIB_MARKUPPARSECONTEXT_BASE, MarkupParseContext_Ref>
{ typedef gi::detail::GBoxedWrapper<MarkupParseContext, ::GMarkupParseContext, GI_GLIB_MARKUPPARSECONTEXT_BASE, MarkupParseContext_Ref> super_type; using super_type::super_type; };


class MarkupParseContext_Ref : public gi::detail::GBoxedRefWrapper<MarkupParseContext, ::GMarkupParseContext, GI_GLIB_MARKUPPARSECONTEXT_BASE>
{ typedef gi::detail::GBoxedRefWrapper<MarkupParseContext, ::GMarkupParseContext, GI_GLIB_MARKUPPARSECONTEXT_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMarkupParseContext>
{ typedef GLib::MarkupParseContext type; }; 

} // namespace repository

} // namespace gi

#endif
