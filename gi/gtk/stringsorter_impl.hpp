// AUTO-GENERATED

#ifndef _GI_GTK_STRINGSORTER_IMPL_HPP_
#define _GI_GTK_STRINGSORTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkStringSorter* /*full*/ gtk_string_sorter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkStringSorter* /*full*/ gtk_string_sorter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkCollation gtk_string_sorter_get_collation (GtkStringSorter* self /*none*/);
// ::GtkCollation gtk_string_sorter_get_collation (::GtkStringSorter* self /*none*/);
Gtk::Collation base::StringSorterBase::get_collation () noexcept
{
  typedef ::GtkCollation (*call_wrap_t) (::GtkStringSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_sorter_get_collation;
  auto _temp_ret = call_wrap_v ((::GtkStringSorter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkExpression* /*none,nullable*/ gtk_string_sorter_get_expression (GtkStringSorter* self /*none*/);
//  /*none,nullable*/ gtk_string_sorter_get_expression (::GtkStringSorter* self /*none*/);
// SKIP;  type  not supported

// gboolean gtk_string_sorter_get_ignore_case (GtkStringSorter* self /*none*/);
// gboolean gtk_string_sorter_get_ignore_case (::GtkStringSorter* self /*none*/);
bool base::StringSorterBase::get_ignore_case () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStringSorter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_sorter_get_ignore_case;
  auto _temp_ret = call_wrap_v ((::GtkStringSorter*) (gobj_()));
  return _temp_ret;
}

// void gtk_string_sorter_set_collation (GtkStringSorter* self /*none*/, GtkCollation collation);
// void gtk_string_sorter_set_collation (::GtkStringSorter* self /*none*/, ::GtkCollation collation);
void base::StringSorterBase::set_collation (Gtk::Collation collation) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringSorter* self, ::GtkCollation collation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_sorter_set_collation;
  auto collation_to_c = gi::unwrap (collation);
  call_wrap_v ((::GtkStringSorter*) (gobj_()), (::GtkCollation) (collation_to_c));
}

// void gtk_string_sorter_set_expression (GtkStringSorter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_string_sorter_set_expression (::GtkStringSorter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_string_sorter_set_ignore_case (GtkStringSorter* self /*none*/, gboolean ignore_case);
// void gtk_string_sorter_set_ignore_case (::GtkStringSorter* self /*none*/, gboolean ignore_case);
void base::StringSorterBase::set_ignore_case (gboolean ignore_case) noexcept
{
  typedef void (*call_wrap_t) (::GtkStringSorter* self, gboolean ignore_case);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_string_sorter_set_ignore_case;
  auto ignore_case_to_c = ignore_case;
  call_wrap_v ((::GtkStringSorter*) (gobj_()), (gboolean) (ignore_case_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringsorter_extra_def_impl.hpp>)
#include <gtk/stringsorter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringsorter_extra_impl.hpp>)
#include <gtk/stringsorter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StringSorterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkStringSorterClass *methods = (::GtkStringSorterClass *) class_struct;
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
