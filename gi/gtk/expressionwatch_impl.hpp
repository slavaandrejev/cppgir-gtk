// AUTO-GENERATED

#ifndef _GI_GTK_EXPRESSIONWATCH_IMPL_HPP_
#define _GI_GTK_EXPRESSIONWATCH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_expression_watch_evaluate (GtkExpressionWatch* watch /*none*/, GValue* value /*none*/);
// gboolean gtk_expression_watch_evaluate (::GtkExpressionWatch* watch /*none*/, ::GValue* value /*none*/);
bool base::ExpressionWatchBase::evaluate (GObject::Value_Ref value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpressionWatch* watch, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expression_watch_evaluate;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GtkExpressionWatch*) (gobj_()), (::GValue*) (value_to_c));
  return _temp_ret;
}

// GtkExpressionWatch* /*full*/ gtk_expression_watch_ref (GtkExpressionWatch* watch /*none*/);
// ::GtkExpressionWatch* /*full*/ gtk_expression_watch_ref (::GtkExpressionWatch* watch /*none*/);
// IGNORE; marked ignore

// void gtk_expression_watch_unref (GtkExpressionWatch* watch /*full*/);
// void gtk_expression_watch_unref (::GtkExpressionWatch* watch /*full*/);
// IGNORE; marked ignore

// void gtk_expression_watch_unwatch (GtkExpressionWatch* watch /*none*/);
// void gtk_expression_watch_unwatch (::GtkExpressionWatch* watch /*none*/);
void base::ExpressionWatchBase::unwatch () noexcept
{
  typedef void (*call_wrap_t) (::GtkExpressionWatch* watch);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_expression_watch_unwatch;
  call_wrap_v ((::GtkExpressionWatch*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expressionwatch_extra_def_impl.hpp>)
#include <gtk/expressionwatch_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expressionwatch_extra_impl.hpp>)
#include <gtk/expressionwatch_extra_impl.hpp>
#endif
#endif

#endif
