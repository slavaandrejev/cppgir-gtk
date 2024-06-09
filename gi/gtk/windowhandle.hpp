// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWHANDLE_HPP_
#define _GI_GTK_WINDOWHANDLE_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class WindowHandle;

namespace base {


#define GI_GTK_WINDOWHANDLE_BASE base::WindowHandleBase
class WindowHandleBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkWindowHandle BaseObjectType;

WindowHandleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_window_handle_get_type(); } 

// GtkWidget* /*none*/ gtk_window_handle_new ();
// ::GtkWindowHandle* /*none*/ gtk_window_handle_new ();
static GI_INLINE_DECL Gtk::WindowHandle new_ () noexcept;

// GtkWidget* /*none,nullable*/ gtk_window_handle_get_child (GtkWindowHandle* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_window_handle_get_child (::GtkWindowHandle* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_child () noexcept;

// void gtk_window_handle_set_child (GtkWindowHandle* self /*none*/, GtkWidget* child /*none,nullable*/);
// void gtk_window_handle_set_child (::GtkWindowHandle* self /*none*/, ::GtkWidget* child /*none,nullable*/);
GI_INLINE_DECL void set_child (Gtk::Widget child) noexcept;
GI_INLINE_DECL void set_child () noexcept;

gi::property_proxy<Gtk::Widget, base::WindowHandleBase> property_child()
{ return gi::property_proxy<Gtk::Widget, base::WindowHandleBase> (*this, "child"); }
const gi::property_proxy<Gtk::Widget, base::WindowHandleBase> property_child() const
{ return gi::property_proxy<Gtk::Widget, base::WindowHandleBase> (*this, "child"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowhandle_extra_def.hpp>)
#include <gtk/windowhandle_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowhandle_extra.hpp>)
#include <gtk/windowhandle_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WindowHandle : public GI_GTK_WINDOWHANDLE_BASE
{ typedef GI_GTK_WINDOWHANDLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWindowHandle>
{ typedef Gtk::WindowHandle type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WindowHandleClassDef
{
typedef WindowHandleClassDef self;
public:
typedef Gtk::WindowHandle instance_type;
typedef ::GtkWindowHandleClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WindowHandleClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowHandleClass: public detail::ClassTemplate<Gtk::impl::internal::WindowHandleClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::WindowHandleClassDef;
typedef WindowHandleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WindowHandleClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct WindowHandleClassDef::TypeInitData
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

using WindowHandleImpl = detail::ObjectImpl<WindowHandle, internal::WindowHandleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
