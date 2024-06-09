// AUTO-GENERATED

#ifndef _GI_GTK_EXPRESSIONWATCH_HPP_
#define _GI_GTK_EXPRESSIONWATCH_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ExpressionWatch_Ref;

class ExpressionWatch;

namespace base {


#define GI_GTK_EXPRESSIONWATCH_BASE base::ExpressionWatchBase
class ExpressionWatchBase : public gi::detail::GBoxedWrapperBase<ExpressionWatchBase, ::GtkExpressionWatch>
{
typedef gi::detail::GBoxedWrapperBase<ExpressionWatchBase, ::GtkExpressionWatch> super_type;
public:

ExpressionWatchBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_expression_watch_get_type(); } 

// gboolean gtk_expression_watch_evaluate (GtkExpressionWatch* watch /*none*/, GValue* value /*none*/);
// gboolean gtk_expression_watch_evaluate (::GtkExpressionWatch* watch /*none*/, ::GValue* value /*none*/);
GI_INLINE_DECL bool evaluate (GObject::Value_Ref value) noexcept;

// GtkExpressionWatch* /*full*/ gtk_expression_watch_ref (GtkExpressionWatch* watch /*none*/);
// ::GtkExpressionWatch* /*full*/ gtk_expression_watch_ref (::GtkExpressionWatch* watch /*none*/);
// IGNORE; marked ignore

// void gtk_expression_watch_unref (GtkExpressionWatch* watch /*full*/);
// void gtk_expression_watch_unref (::GtkExpressionWatch* watch /*full*/);
// IGNORE; marked ignore

// void gtk_expression_watch_unwatch (GtkExpressionWatch* watch /*none*/);
// void gtk_expression_watch_unwatch (::GtkExpressionWatch* watch /*none*/);
GI_INLINE_DECL void unwatch () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expressionwatch_extra_def.hpp>)
#include <gtk/expressionwatch_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expressionwatch_extra.hpp>)
#include <gtk/expressionwatch_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ExpressionWatch_Ref;

class ExpressionWatch : public gi::detail::GBoxedWrapper<ExpressionWatch, ::GtkExpressionWatch, GI_GTK_EXPRESSIONWATCH_BASE, ExpressionWatch_Ref>
{ typedef gi::detail::GBoxedWrapper<ExpressionWatch, ::GtkExpressionWatch, GI_GTK_EXPRESSIONWATCH_BASE, ExpressionWatch_Ref> super_type; using super_type::super_type; };


class ExpressionWatch_Ref : public gi::detail::GBoxedRefWrapper<ExpressionWatch, ::GtkExpressionWatch, GI_GTK_EXPRESSIONWATCH_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ExpressionWatch, ::GtkExpressionWatch, GI_GTK_EXPRESSIONWATCH_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkExpressionWatch>
{ typedef Gtk::ExpressionWatch type; }; 

} // namespace repository

} // namespace gi

#endif
