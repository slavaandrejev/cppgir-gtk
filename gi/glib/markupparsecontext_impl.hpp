// AUTO-GENERATED

#ifndef _GI_GLIB_MARKUPPARSECONTEXT_IMPL_HPP_
#define _GI_GLIB_MARKUPPARSECONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GMarkupParseContext* /*full*/ g_markup_parse_context_new (const GMarkupParser* parser /*none*/, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify /*none*/);
// ::GMarkupParseContext* /*full*/ g_markup_parse_context_new (const ::GMarkupParser* parser /*none*/, ::GMarkupParseFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_dnotify /*none*/);
// SKIP; callback misses closure info

// gboolean g_markup_parse_context_end_parse (GMarkupParseContext* context /*none*/, GError ** error);
// gboolean g_markup_parse_context_end_parse (::GMarkupParseContext* context /*none*/, GError ** error);
bool base::MarkupParseContextBase::end_parse ()
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_end_parse;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MarkupParseContextBase::end_parse (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_end_parse;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_markup_parse_context_free (GMarkupParseContext* context /*none*/);
// void g_markup_parse_context_free (::GMarkupParseContext* context /*none*/);
// IGNORE; marked ignore

// const gchar* /*none*/ g_markup_parse_context_get_element (GMarkupParseContext* context /*none*/);
// const char* /*none*/ g_markup_parse_context_get_element (::GMarkupParseContext* context /*none*/);
gi::cstring_v base::MarkupParseContextBase::get_element () noexcept
{
  typedef const char* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_get_element;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const GSList* /*none*/ g_markup_parse_context_get_element_stack (GMarkupParseContext* context /*none*/);
// const ::GSList* /*none*/ g_markup_parse_context_get_element_stack (::GMarkupParseContext* context /*none*/);
gi::Collection<GSList, char*, gi::transfer_none_t> base::MarkupParseContextBase::get_element_stack () noexcept
{
  typedef const ::GSList* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_get_element_stack;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// void g_markup_parse_context_get_position (GMarkupParseContext* context /*none*/, gint* line_number, gint* char_number);
// void g_markup_parse_context_get_position (::GMarkupParseContext* context /*none*/, gint* line_number, gint* char_number);
void base::MarkupParseContextBase::get_position (gint * line_number, gint * char_number) noexcept
{
  typedef void (*call_wrap_t) (::GMarkupParseContext* context, gint* line_number, gint* char_number);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_get_position;
  gint char_number_o {};
  gint line_number_o {};
  call_wrap_v ((::GMarkupParseContext*) (gobj_()), (gint*) (line_number ? &line_number_o : nullptr), (gint*) (char_number ? &char_number_o : nullptr));
  if (char_number) *char_number = char_number_o;
  if (line_number) *line_number = line_number_o;
}
std::tuple<gint, gint> base::MarkupParseContextBase::get_position () noexcept
{
  typedef void (*call_wrap_t) (::GMarkupParseContext* context, gint* line_number, gint* char_number);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_get_position;
  gint char_number_o {};
  gint line_number_o {};
  call_wrap_v ((::GMarkupParseContext*) (gobj_()), (gint*) (&line_number_o), (gint*) (&char_number_o));
  auto &&tmp_return_1 = line_number_o;
  auto &&tmp_return_2 = char_number_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gpointer g_markup_parse_context_get_user_data (GMarkupParseContext* context /*none*/);
// void* g_markup_parse_context_get_user_data (::GMarkupParseContext* context /*none*/);
gpointer base::MarkupParseContextBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_get_user_data;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return _temp_ret;
}

// gboolean g_markup_parse_context_parse (GMarkupParseContext* context /*none*/, const gchar* text /*none*/, gssize text_len, GError ** error);
// gboolean g_markup_parse_context_parse (::GMarkupParseContext* context /*none*/, const char* text /*none*/, gssize text_len, GError ** error);
bool base::MarkupParseContextBase::parse (const gi::cstring_v text, gssize text_len)
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, const char* text, gssize text_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_parse;
  auto text_len_to_c = text_len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), (const char*) (text_to_c), (gssize) (text_len_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MarkupParseContextBase::parse (const gi::cstring_v text, gssize text_len, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, const char* text, gssize text_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_parse;
  auto text_len_to_c = text_len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()), (const char*) (text_to_c), (gssize) (text_len_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gpointer g_markup_parse_context_pop (GMarkupParseContext* context /*none*/);
// void* g_markup_parse_context_pop (::GMarkupParseContext* context /*none*/);
gpointer base::MarkupParseContextBase::pop () noexcept
{
  typedef void* (*call_wrap_t) (::GMarkupParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_pop;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (gobj_()));
  return _temp_ret;
}

// void g_markup_parse_context_push (GMarkupParseContext* context /*none*/, const GMarkupParser* parser /*none*/, gpointer user_data);
// void g_markup_parse_context_push (::GMarkupParseContext* context /*none*/, const ::GMarkupParser* parser /*none*/, void* user_data);
void base::MarkupParseContextBase::push (const GLib::MarkupParser_Ref parser, void* user_data) noexcept
{
  typedef void (*call_wrap_t) (::GMarkupParseContext* context, const ::GMarkupParser* parser, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_markup_parse_context_push;
  auto user_data_to_c = user_data;
  auto parser_to_c = gi::unwrap (parser, gi::transfer_none);
  call_wrap_v ((::GMarkupParseContext*) (gobj_()), (const ::GMarkupParser*) (parser_to_c), (void*) (user_data_to_c));
}

// GMarkupParseContext* /*full*/ g_markup_parse_context_ref (GMarkupParseContext* context /*none*/);
// ::GMarkupParseContext* /*full*/ g_markup_parse_context_ref (::GMarkupParseContext* context /*none*/);
// IGNORE; marked ignore

// void g_markup_parse_context_unref (GMarkupParseContext* context /*none*/);
// void g_markup_parse_context_unref (::GMarkupParseContext* context /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra_def_impl.hpp>)
#include <glib/markupparsecontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/markupparsecontext_extra_impl.hpp>)
#include <glib/markupparsecontext_extra_impl.hpp>
#endif
#endif

#endif
