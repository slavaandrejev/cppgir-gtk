// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAYLAYOUTCHILD_HPP_
#define _GI_GTK_OVERLAYLAYOUTCHILD_HPP_

#include "layoutchild.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class OverlayLayoutChild;

namespace base {


#define GI_GTK_OVERLAYLAYOUTCHILD_BASE base::OverlayLayoutChildBase
class OverlayLayoutChildBase : public Gtk::LayoutChild
{
typedef Gtk::LayoutChild super_type;
public:
typedef ::GtkOverlayLayoutChild BaseObjectType;

OverlayLayoutChildBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_overlay_layout_child_get_type(); } 

// gboolean gtk_overlay_layout_child_get_clip_overlay (GtkOverlayLayoutChild* child /*none*/);
// gboolean gtk_overlay_layout_child_get_clip_overlay (::GtkOverlayLayoutChild* child /*none*/);
GI_INLINE_DECL bool get_clip_overlay () noexcept;

// gboolean gtk_overlay_layout_child_get_measure (GtkOverlayLayoutChild* child /*none*/);
// gboolean gtk_overlay_layout_child_get_measure (::GtkOverlayLayoutChild* child /*none*/);
GI_INLINE_DECL bool get_measure () noexcept;

// void gtk_overlay_layout_child_set_clip_overlay (GtkOverlayLayoutChild* child /*none*/, gboolean clip_overlay);
// void gtk_overlay_layout_child_set_clip_overlay (::GtkOverlayLayoutChild* child /*none*/, gboolean clip_overlay);
GI_INLINE_DECL void set_clip_overlay (gboolean clip_overlay) noexcept;

// void gtk_overlay_layout_child_set_measure (GtkOverlayLayoutChild* child /*none*/, gboolean measure);
// void gtk_overlay_layout_child_set_measure (::GtkOverlayLayoutChild* child /*none*/, gboolean measure);
GI_INLINE_DECL void set_measure (gboolean measure) noexcept;

gi::property_proxy<bool, base::OverlayLayoutChildBase> property_clip_overlay()
{ return gi::property_proxy<bool, base::OverlayLayoutChildBase> (*this, "clip-overlay"); }
const gi::property_proxy<bool, base::OverlayLayoutChildBase> property_clip_overlay() const
{ return gi::property_proxy<bool, base::OverlayLayoutChildBase> (*this, "clip-overlay"); }

gi::property_proxy<bool, base::OverlayLayoutChildBase> property_measure()
{ return gi::property_proxy<bool, base::OverlayLayoutChildBase> (*this, "measure"); }
const gi::property_proxy<bool, base::OverlayLayoutChildBase> property_measure() const
{ return gi::property_proxy<bool, base::OverlayLayoutChildBase> (*this, "measure"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlaylayoutchild_extra_def.hpp>)
#include <gtk/overlaylayoutchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlaylayoutchild_extra.hpp>)
#include <gtk/overlaylayoutchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class OverlayLayoutChild : public GI_GTK_OVERLAYLAYOUTCHILD_BASE
{ typedef GI_GTK_OVERLAYLAYOUTCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkOverlayLayoutChild>
{ typedef Gtk::OverlayLayoutChild type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class OverlayLayoutChildClassDef
{
typedef OverlayLayoutChildClassDef self;
public:
typedef Gtk::OverlayLayoutChild instance_type;
typedef ::GtkOverlayLayoutChildClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~OverlayLayoutChildClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OverlayLayoutChildClass: public detail::ClassTemplate<Gtk::impl::internal::OverlayLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass>
{
friend class internal::OverlayLayoutChildClassDef;
typedef OverlayLayoutChildClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::OverlayLayoutChildClassDef, Gtk::impl::internal::LayoutChildClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct OverlayLayoutChildClassDef::TypeInitData
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

using OverlayLayoutChildImpl = detail::ObjectImpl<OverlayLayoutChild, internal::OverlayLayoutChildClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
