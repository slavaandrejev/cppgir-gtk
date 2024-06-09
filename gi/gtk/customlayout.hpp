// AUTO-GENERATED

#ifndef _GI_GTK_CUSTOMLAYOUT_HPP_
#define _GI_GTK_CUSTOMLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CustomLayout;

namespace base {


#define GI_GTK_CUSTOMLAYOUT_BASE base::CustomLayoutBase
class CustomLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkCustomLayout BaseObjectType;

CustomLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_custom_layout_get_type(); } 

// GtkLayoutManager* /*full*/ gtk_custom_layout_new (GtkCustomRequestModeFunc request_mode /*none,nullable*/, GtkCustomMeasureFunc measure /*none*/, GtkCustomAllocateFunc allocate /*none*/);
// ::GtkCustomLayout* /*full*/ gtk_custom_layout_new ( request_mode /*none,nullable*/,  measure /*none*/,  allocate /*none*/);
// SKIP; allocate type  not supported, measure type  not supported, request_mode type  not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/customlayout_extra_def.hpp>)
#include <gtk/customlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/customlayout_extra.hpp>)
#include <gtk/customlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CustomLayout : public GI_GTK_CUSTOMLAYOUT_BASE
{ typedef GI_GTK_CUSTOMLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCustomLayout>
{ typedef Gtk::CustomLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CustomLayoutClassDef
{
typedef CustomLayoutClassDef self;
public:
typedef Gtk::CustomLayout instance_type;
typedef ::GtkCustomLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CustomLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CustomLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::CustomLayoutClassDef, Gtk::impl::internal::LayoutManagerClass>
{
friend class internal::CustomLayoutClassDef;
typedef CustomLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CustomLayoutClassDef, Gtk::impl::internal::LayoutManagerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct CustomLayoutClassDef::TypeInitData
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

using CustomLayoutImpl = detail::ObjectImpl<CustomLayout, internal::CustomLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
