// AUTO-GENERATED

#ifndef _GI_GTK_CUSTOMFILTER_HPP_
#define _GI_GTK_CUSTOMFILTER_HPP_

#include "filter.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CustomFilter;

namespace base {


#define GI_GTK_CUSTOMFILTER_BASE base::CustomFilterBase
class CustomFilterBase : public Gtk::Filter
{
typedef Gtk::Filter super_type;
public:
typedef ::GtkCustomFilter BaseObjectType;

CustomFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_custom_filter_get_type(); } 

// GtkCustomFilter* /*full*/ gtk_custom_filter_new (GtkCustomFilterFunc match_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// ::GtkCustomFilter* /*full*/ gtk_custom_filter_new (Gtk::CustomFilterFunc::cfunction_type match_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
static GI_INLINE_DECL Gtk::CustomFilter new_ (Gtk::CustomFilterFunc match_func) noexcept;

// void gtk_custom_filter_set_filter_func (GtkCustomFilter* self /*none*/, GtkCustomFilterFunc match_func /*none,nullable*/, gpointer user_data, GDestroyNotify user_destroy /*none*/);
// void gtk_custom_filter_set_filter_func (::GtkCustomFilter* self /*none*/, Gtk::CustomFilterFunc::cfunction_type match_func /*none,nullable*/, void* user_data, GLib::DestroyNotify::cfunction_type user_destroy /*none*/);
GI_INLINE_DECL void set_filter_func (Gtk::CustomFilterFunc match_func) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/customfilter_extra_def.hpp>)
#include <gtk/customfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/customfilter_extra.hpp>)
#include <gtk/customfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CustomFilter : public GI_GTK_CUSTOMFILTER_BASE
{ typedef GI_GTK_CUSTOMFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCustomFilter>
{ typedef Gtk::CustomFilter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CustomFilterClassDef
{
typedef CustomFilterClassDef self;
public:
typedef Gtk::CustomFilter instance_type;
typedef ::GtkCustomFilterClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CustomFilterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CustomFilterClass: public detail::ClassTemplate<Gtk::impl::internal::CustomFilterClassDef, Gtk::impl::internal::FilterClass>
{
friend class internal::CustomFilterClassDef;
typedef CustomFilterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CustomFilterClassDef, Gtk::impl::internal::FilterClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct CustomFilterClassDef::TypeInitData
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

using CustomFilterImpl = detail::ObjectImpl<CustomFilter, internal::CustomFilterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
