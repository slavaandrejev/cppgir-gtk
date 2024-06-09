// AUTO-GENERATED

#ifndef _GI_GTK_BOOLFILTER_HPP_
#define _GI_GTK_BOOLFILTER_HPP_

#include "filter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class BoolFilter;

namespace base {


#define GI_GTK_BOOLFILTER_BASE base::BoolFilterBase
class BoolFilterBase : public Gtk::Filter
{
typedef Gtk::Filter super_type;
public:
typedef ::GtkBoolFilter BaseObjectType;

BoolFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_bool_filter_get_type(); } 

// GtkBoolFilter* /*full*/ gtk_bool_filter_new (GtkExpression* expression /*full,nullable*/);
// ::GtkBoolFilter* /*full*/ gtk_bool_filter_new ( expression /*full,nullable*/);
// SKIP; expression type  not supported

// GtkExpression* /*none,nullable*/ gtk_bool_filter_get_expression (GtkBoolFilter* self /*none*/);
//  /*none,nullable*/ gtk_bool_filter_get_expression (::GtkBoolFilter* self /*none*/);
// SKIP;  type  not supported

// gboolean gtk_bool_filter_get_invert (GtkBoolFilter* self /*none*/);
// gboolean gtk_bool_filter_get_invert (::GtkBoolFilter* self /*none*/);
GI_INLINE_DECL bool get_invert () noexcept;

// void gtk_bool_filter_set_expression (GtkBoolFilter* self /*none*/, GtkExpression* expression /*none,nullable*/);
// void gtk_bool_filter_set_expression (::GtkBoolFilter* self /*none*/,  expression /*none,nullable*/);
// SKIP; expression type  not supported

// void gtk_bool_filter_set_invert (GtkBoolFilter* self /*none*/, gboolean invert);
// void gtk_bool_filter_set_invert (::GtkBoolFilter* self /*none*/, gboolean invert);
GI_INLINE_DECL void set_invert (gboolean invert) noexcept;

gi::property_proxy<bool, base::BoolFilterBase> property_invert()
{ return gi::property_proxy<bool, base::BoolFilterBase> (*this, "invert"); }
const gi::property_proxy<bool, base::BoolFilterBase> property_invert() const
{ return gi::property_proxy<bool, base::BoolFilterBase> (*this, "invert"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/boolfilter_extra_def.hpp>)
#include <gtk/boolfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/boolfilter_extra.hpp>)
#include <gtk/boolfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BoolFilter : public GI_GTK_BOOLFILTER_BASE
{ typedef GI_GTK_BOOLFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBoolFilter>
{ typedef Gtk::BoolFilter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BoolFilterClassDef
{
typedef BoolFilterClassDef self;
public:
typedef Gtk::BoolFilter instance_type;
typedef ::GtkBoolFilterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BoolFilterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BoolFilterClass: public detail::ClassTemplate<Gtk::impl::internal::BoolFilterClassDef, Gtk::impl::internal::FilterClass>
{
friend class internal::BoolFilterClassDef;
typedef BoolFilterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BoolFilterClassDef, Gtk::impl::internal::FilterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct BoolFilterClassDef::TypeInitData
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

using BoolFilterImpl = detail::ObjectImpl<BoolFilter, internal::BoolFilterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
