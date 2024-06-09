// AUTO-GENERATED

#ifndef _GI_GTK_WIDGETPAINTABLE_HPP_
#define _GI_GTK_WIDGETPAINTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class WidgetPaintable;

namespace base {


#define GI_GTK_WIDGETPAINTABLE_BASE base::WidgetPaintableBase
class WidgetPaintableBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkWidgetPaintable BaseObjectType;

WidgetPaintableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_widget_paintable_get_type(); } 

GI_INLINE_DECL Gdk::Paintable interface_ (gi::interface_tag<Gdk::Paintable>);

GI_INLINE_DECL operator Gdk::Paintable ();

// GdkPaintable* /*full*/ gtk_widget_paintable_new (GtkWidget* widget /*none,nullable*/);
// ::GtkWidgetPaintable* /*full*/ gtk_widget_paintable_new (::GtkWidget* widget /*none,nullable*/);
static GI_INLINE_DECL Gtk::WidgetPaintable new_ (Gtk::Widget widget) noexcept;
static GI_INLINE_DECL Gtk::WidgetPaintable new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_widget_paintable_get_widget (GtkWidgetPaintable* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_widget_paintable_get_widget (::GtkWidgetPaintable* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void gtk_widget_paintable_set_widget (GtkWidgetPaintable* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_widget_paintable_set_widget (::GtkWidgetPaintable* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_widget () noexcept;

gi::property_proxy<Gtk::Widget, base::WidgetPaintableBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::WidgetPaintableBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::WidgetPaintableBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::WidgetPaintableBase> (*this, "widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widgetpaintable_extra_def.hpp>)
#include <gtk/widgetpaintable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widgetpaintable_extra.hpp>)
#include <gtk/widgetpaintable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WidgetPaintable : public GI_GTK_WIDGETPAINTABLE_BASE
{ typedef GI_GTK_WIDGETPAINTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWidgetPaintable>
{ typedef Gtk::WidgetPaintable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WidgetPaintableClassDef
{
typedef WidgetPaintableClassDef self;
public:
typedef Gtk::WidgetPaintable instance_type;
typedef ::GtkWidgetPaintableClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WidgetPaintableClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WidgetPaintableClass: public detail::ClassTemplate<Gtk::impl::internal::WidgetPaintableClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl>
{
friend class internal::WidgetPaintableClassDef;
typedef WidgetPaintableClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WidgetPaintableClassDef, GObject::impl::internal::ObjectClass, Gdk::impl::internal::PaintableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gdk::impl::internal::PaintableInterfaceClassImpl GdkPaintableInterface_type;



};


struct WidgetPaintableClassDef::TypeInitData
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

using WidgetPaintableImpl = detail::ObjectImpl<WidgetPaintable, internal::WidgetPaintableClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
