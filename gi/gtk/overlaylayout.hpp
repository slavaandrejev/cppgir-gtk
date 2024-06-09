// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAYLAYOUT_HPP_
#define _GI_GTK_OVERLAYLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class OverlayLayout;

namespace base {


#define GI_GTK_OVERLAYLAYOUT_BASE base::OverlayLayoutBase
class OverlayLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkOverlayLayout BaseObjectType;

OverlayLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_overlay_layout_get_type(); } 

// GtkLayoutManager* /*full*/ gtk_overlay_layout_new ();
// ::GtkOverlayLayout* /*full*/ gtk_overlay_layout_new ();
static GI_INLINE_DECL Gtk::OverlayLayout new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlaylayout_extra_def.hpp>)
#include <gtk/overlaylayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlaylayout_extra.hpp>)
#include <gtk/overlaylayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class OverlayLayout : public GI_GTK_OVERLAYLAYOUT_BASE
{ typedef GI_GTK_OVERLAYLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkOverlayLayout>
{ typedef Gtk::OverlayLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class OverlayLayoutClassDef
{
typedef OverlayLayoutClassDef self;
public:
typedef Gtk::OverlayLayout instance_type;
typedef ::GtkOverlayLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~OverlayLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OverlayLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::OverlayLayoutClassDef, Gtk::impl::internal::LayoutManagerClass>
{
friend class internal::OverlayLayoutClassDef;
typedef OverlayLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::OverlayLayoutClassDef, Gtk::impl::internal::LayoutManagerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct OverlayLayoutClassDef::TypeInitData
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

using OverlayLayoutImpl = detail::ObjectImpl<OverlayLayout, internal::OverlayLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
