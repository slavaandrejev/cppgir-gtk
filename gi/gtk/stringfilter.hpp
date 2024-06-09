// AUTO-GENERATED

#ifndef _GI_GTK_STRINGFILTER_HPP_
#define _GI_GTK_STRINGFILTER_HPP_

#include "filter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class StringFilter;

namespace base {


#define GI_GTK_STRINGFILTER_BASE base::StringFilterBase
class StringFilterBase : public Gtk::Filter
{
typedef Gtk::Filter super_type;
public:
typedef ::GtkStringFilter BaseObjectType;

StringFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_string_filter_get_type(); } 

// GtkStringFilter* /*full*/ gtk_string_filter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkStringFilter* /*full*/ gtk_string_filter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkExpression* /*none,nullable*/ gtk_string_filter_get_expression (GtkStringFilter* self /*none*/);
//  /*none,nullable*/ gtk_string_filter_get_expression (::GtkStringFilter* self /*none*/);
// SKIP;  type  not supported

// gboolean gtk_string_filter_get_ignore_case (GtkStringFilter* self /*none*/);
// gboolean gtk_string_filter_get_ignore_case (::GtkStringFilter* self /*none*/);
GI_INLINE_DECL bool get_ignore_case () noexcept;

// GtkStringFilterMatchMode gtk_string_filter_get_match_mode (GtkStringFilter* self /*none*/);
// ::GtkStringFilterMatchMode gtk_string_filter_get_match_mode (::GtkStringFilter* self /*none*/);
GI_INLINE_DECL Gtk::StringFilterMatchMode get_match_mode () noexcept;

// const char* /*none,nullable*/ gtk_string_filter_get_search (GtkStringFilter* self /*none*/);
// const char* /*none,nullable*/ gtk_string_filter_get_search (::GtkStringFilter* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_search () noexcept;

// void gtk_string_filter_set_expression (GtkStringFilter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_string_filter_set_expression (::GtkStringFilter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_string_filter_set_ignore_case (GtkStringFilter* self /*none*/, gboolean ignore_case);
// void gtk_string_filter_set_ignore_case (::GtkStringFilter* self /*none*/, gboolean ignore_case);
GI_INLINE_DECL void set_ignore_case (gboolean ignore_case) noexcept;

// void gtk_string_filter_set_match_mode (GtkStringFilter* self /*none*/, GtkStringFilterMatchMode mode);
// void gtk_string_filter_set_match_mode (::GtkStringFilter* self /*none*/, ::GtkStringFilterMatchMode mode);
GI_INLINE_DECL void set_match_mode (Gtk::StringFilterMatchMode mode) noexcept;

// void gtk_string_filter_set_search (GtkStringFilter* self /*none*/, const char* search /*none,nullable*/);
// void gtk_string_filter_set_search (::GtkStringFilter* self /*none*/, const char* search /*none,nullable*/);
GI_INLINE_DECL void set_search (const gi::cstring_v search) noexcept;
GI_INLINE_DECL void set_search () noexcept;

gi::property_proxy<bool, base::StringFilterBase> property_ignore_case()
{ return gi::property_proxy<bool, base::StringFilterBase> (*this, "ignore-case"); }
const gi::property_proxy<bool, base::StringFilterBase> property_ignore_case() const
{ return gi::property_proxy<bool, base::StringFilterBase> (*this, "ignore-case"); }

gi::property_proxy<Gtk::StringFilterMatchMode, base::StringFilterBase> property_match_mode()
{ return gi::property_proxy<Gtk::StringFilterMatchMode, base::StringFilterBase> (*this, "match-mode"); }
const gi::property_proxy<Gtk::StringFilterMatchMode, base::StringFilterBase> property_match_mode() const
{ return gi::property_proxy<Gtk::StringFilterMatchMode, base::StringFilterBase> (*this, "match-mode"); }

gi::property_proxy<gi::cstring, base::StringFilterBase> property_search()
{ return gi::property_proxy<gi::cstring, base::StringFilterBase> (*this, "search"); }
const gi::property_proxy<gi::cstring, base::StringFilterBase> property_search() const
{ return gi::property_proxy<gi::cstring, base::StringFilterBase> (*this, "search"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stringfilter_extra_def.hpp>)
#include <gtk/stringfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stringfilter_extra.hpp>)
#include <gtk/stringfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StringFilter : public GI_GTK_STRINGFILTER_BASE
{ typedef GI_GTK_STRINGFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStringFilter>
{ typedef Gtk::StringFilter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StringFilterClassDef
{
typedef StringFilterClassDef self;
public:
typedef Gtk::StringFilter instance_type;
typedef ::GtkStringFilterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~StringFilterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StringFilterClass: public detail::ClassTemplate<Gtk::impl::internal::StringFilterClassDef, Gtk::impl::internal::FilterClass>
{
friend class internal::StringFilterClassDef;
typedef StringFilterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StringFilterClassDef, Gtk::impl::internal::FilterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct StringFilterClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using StringFilterImpl = detail::ObjectImpl<StringFilter, internal::StringFilterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
