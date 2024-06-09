// AUTO-GENERATED

#ifndef _GI_GTK_LAYOUTCHILD_HPP_
#define _GI_GTK_LAYOUTCHILD_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class LayoutManager;
class Widget;

class LayoutChild;

namespace base {


#define GI_GTK_LAYOUTCHILD_BASE base::LayoutChildBase
class LayoutChildBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkLayoutChild BaseObjectType;

LayoutChildBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_layout_child_get_type(); } 

// GtkWidget* /*none*/ gtk_layout_child_get_child_widget (GtkLayoutChild* layout_child /*none*/);
// ::GtkWidget* /*none*/ gtk_layout_child_get_child_widget (::GtkLayoutChild* layout_child /*none*/);
GI_INLINE_DECL Gtk::Widget get_child_widget () noexcept;

// GtkLayoutManager* /*none*/ gtk_layout_child_get_layout_manager (GtkLayoutChild* layout_child /*none*/);
// ::GtkLayoutManager* /*none*/ gtk_layout_child_get_layout_manager (::GtkLayoutChild* layout_child /*none*/);
GI_INLINE_DECL Gtk::LayoutManager get_layout_manager () noexcept;

gi::property_proxy<Gtk::Widget, base::LayoutChildBase> property_child_widget()
{ return gi::property_proxy<Gtk::Widget, base::LayoutChildBase> (*this, "child-widget"); }
const gi::property_proxy<Gtk::Widget, base::LayoutChildBase> property_child_widget() const
{ return gi::property_proxy<Gtk::Widget, base::LayoutChildBase> (*this, "child-widget"); }

gi::property_proxy<Gtk::LayoutManager, base::LayoutChildBase> property_layout_manager()
{ return gi::property_proxy<Gtk::LayoutManager, base::LayoutChildBase> (*this, "layout-manager"); }
const gi::property_proxy<Gtk::LayoutManager, base::LayoutChildBase> property_layout_manager() const
{ return gi::property_proxy<Gtk::LayoutManager, base::LayoutChildBase> (*this, "layout-manager"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/layoutchild_extra_def.hpp>)
#include <gtk/layoutchild_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/layoutchild_extra.hpp>)
#include <gtk/layoutchild_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LayoutChild : public GI_GTK_LAYOUTCHILD_BASE
{ typedef GI_GTK_LAYOUTCHILD_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLayoutChild>
{ typedef Gtk::LayoutChild type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LayoutChildClassDef
{
typedef LayoutChildClassDef self;
public:
typedef Gtk::LayoutChild instance_type;
typedef ::GtkLayoutChildClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~LayoutChildClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LayoutChildClass: public detail::ClassTemplate<Gtk::impl::internal::LayoutChildClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::LayoutChildClassDef;
typedef LayoutChildClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LayoutChildClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct LayoutChildClassDef::TypeInitData
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

using LayoutChildImpl = detail::ObjectImpl<LayoutChild, internal::LayoutChildClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
