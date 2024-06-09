// AUTO-GENERATED

#ifndef _GI_GTK_STRINGFILTER_IMPL_HPP_
#define _GI_GTK_STRINGFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkStringFilter* /*full*/ gtk_string_filter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkStringFilter* /*full*/ gtk_string_filter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkExpression* /*none,nullable*/ gtk_string_filter_get_expression (GtkStringFilter* self /*none*/);
//  /*none,nullable*/ gtk_string_filter_get_expression (::GtkStringFilter* self /*none*/);
// SKIP;  type  not supported

// gboolean gtk_string_filter_get_ignore_case (GtkStringFilter* self /*none*/);
// gboolean gtk_string_filter_get_ignore_case (::GtkStringFilter* self /*none*/);
bool base::StringFilterBase::get_ignore_case () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStringFilter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_get_ignore_case;
  auto _temp_ret = call_wrap_v ((::GtkStringFilter*) (gobj_()));
  return _temp_ret;
}

// GtkStringFilterMatchMode gtk_string_filter_get_match_mode (GtkStringFilter* self /*none*/);
// ::GtkStringFilterMatchMode gtk_string_filter_get_match_mode (::GtkStringFilter* self /*none*/);
Gtk::StringFilterMatchMode base::StringFilterBase::get_match_mode () noexcept
{
  typedef ::GtkStringFilterMatchMode (*call_wrap_t) (::GtkStringFilter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_get_match_mode;
  auto _temp_ret = call_wrap_v ((::GtkStringFilter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* /*none,nullable*/ gtk_string_filter_get_search (GtkStringFilter* self /*none*/);
// const char* /*none,nullable*/ gtk_string_filter_get_search (::GtkStringFilter* self /*none*/);
gi::cstring_v base::StringFilterBase::get_search () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStringFilter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_get_search;
  auto _temp_ret = call_wrap_v ((::GtkStringFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void gtk_string_filter_set_expression (GtkStringFilter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_string_filter_set_expression (::GtkStringFilter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_string_filter_set_ignore_case (GtkStringFilter* self /*none*/, gboolean ignore_case);
// void gtk_string_filter_set_ignore_case (::GtkStringFilter* self /*none*/, gboolean ignore_case);
void base::StringFilterBase::set_ignore_case (gboolean ignore_case) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringFilter* self, gboolean ignore_case);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_set_ignore_case;
  auto ignore_case_to_c = ignore_case;
  call_wrap_v ((::GtkStringFilter*) (gobj_()), (gboolean) (ignore_case_to_c));
}

// void gtk_string_filter_set_match_mode (GtkStringFilter* self /*none*/, GtkStringFilterMatchMode mode);
// void gtk_string_filter_set_match_mode (::GtkStringFilter* self /*none*/, ::GtkStringFilterMatchMode mode);
void base::StringFilterBase::set_match_mode (Gtk::StringFilterMatchMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringFilter* self, ::GtkStringFilterMatchMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_set_match_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkStringFilter*) (gobj_()), (::GtkStringFilterMatchMode) (mode_to_c));
}

// void gtk_string_filter_set_search (GtkStringFilter* self /*none*/, const char* search /*none,nullable*/);
// void gtk_string_filter_set_search (::GtkStringFilter* self /*none*/, const char* search /*none,nullable*/);
void base::StringFilterBase::set_search (const gi::cstring_v search) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringFilter* self, const char* search);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_set_search;
  auto search_to_c = gi::unwrap (search, gi::transfer_none);
  call_wrap_v ((::GtkStringFilter*) (gobj_()), (const char*) (search_to_c));
}
void base::StringFilterBase::set_search () noexcept
{
  typedef void (*call_wrap_t) (::GtkStringFilter* self, const char* search);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_filter_set_search;
  auto search_to_c = nullptr;
  call_wrap_v ((::GtkStringFilter*) (gobj_()), (const char*) (search_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringfilter_extra_def_impl.hpp>)
#include <gtk/stringfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringfilter_extra_impl.hpp>)
#include <gtk/stringfilter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StringFilterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkStringFilterClass *methods = (::GtkStringFilterClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
