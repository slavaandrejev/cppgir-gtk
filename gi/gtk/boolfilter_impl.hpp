// AUTO-GENERATED

#ifndef _GI_GTK_BOOLFILTER_IMPL_HPP_
#define _GI_GTK_BOOLFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkBoolFilter* /*full*/ gtk_bool_filter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkBoolFilter* /*full*/ gtk_bool_filter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkExpression* /*none,nullable*/ gtk_bool_filter_get_expression (GtkBoolFilter* self /*none*/);
//  /*none,nullable*/ gtk_bool_filter_get_expression (::GtkBoolFilter* self /*none*/);
// SKIP;  type  not supported

// gboolean gtk_bool_filter_get_invert (GtkBoolFilter* self /*none*/);
// gboolean gtk_bool_filter_get_invert (::GtkBoolFilter* self /*none*/);
bool base::BoolFilterBase::get_invert () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBoolFilter* self);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bool_filter_get_invert;
  auto _temp_ret = call_wrap_v ((::GtkBoolFilter*) (gobj_()));
  return _temp_ret;
}

// void gtk_bool_filter_set_expression (GtkBoolFilter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_bool_filter_set_expression (::GtkBoolFilter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_bool_filter_set_invert (GtkBoolFilter* self /*none*/, gboolean invert);
// void gtk_bool_filter_set_invert (::GtkBoolFilter* self /*none*/, gboolean invert);
void base::BoolFilterBase::set_invert (gboolean invert) noexcept
{
  typedef void (*call_wrap_t) (::GtkBoolFilter* self, gboolean invert);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_bool_filter_set_invert;
  auto invert_to_c = invert;
  call_wrap_v ((::GtkBoolFilter*) (gobj_()), (gboolean) (invert_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/boolfilter_extra_def_impl.hpp>)
#include <gtk/boolfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/boolfilter_extra_impl.hpp>)
#include <gtk/boolfilter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BoolFilterClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::GtkBoolFilterClass *methods = (::GtkBoolFilterClass *) class_struct;
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
