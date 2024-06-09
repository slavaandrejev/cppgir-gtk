// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWCONTROLS_HPP_
#define _GI_GTK_WINDOWCONTROLS_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class WindowControls;

namespace base {


#define GI_GTK_WINDOWCONTROLS_BASE base::WindowControlsBase
class WindowControlsBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkWindowControls BaseObjectType;

WindowControlsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_window_controls_get_type(); } 

// GtkWidget* /*none*/ gtk_window_controls_new (GtkPackType side);
// ::GtkWindowControls* /*none*/ gtk_window_controls_new (::GtkPackType side);
static GI_INLINE_DECL Gtk::WindowControls new_ (Gtk::PackType side) noexcept;

// const char* /*none,nullable*/ gtk_window_controls_get_decoration_layout (GtkWindowControls* self /*none*/);
// const char* /*none,nullable*/ gtk_window_controls_get_decoration_layout (::GtkWindowControls* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_decoration_layout () noexcept;

// gboolean gtk_window_controls_get_empty (GtkWindowControls* self /*none*/);
// gboolean gtk_window_controls_get_empty (::GtkWindowControls* self /*none*/);
GI_INLINE_DECL bool get_empty () noexcept;

// GtkPackType gtk_window_controls_get_side (GtkWindowControls* self /*none*/);
// ::GtkPackType gtk_window_controls_get_side (::GtkWindowControls* self /*none*/);
GI_INLINE_DECL Gtk::PackType get_side () noexcept;

// void gtk_window_controls_set_decoration_layout (GtkWindowControls* self /*none*/, const char* layout /*none,nullable*/);
// void gtk_window_controls_set_decoration_layout (::GtkWindowControls* self /*none*/, const char* layout /*none,nullable*/);
GI_INLINE_DECL void set_decoration_layout (const gi::cstring_v layout) noexcept;
GI_INLINE_DECL void set_decoration_layout () noexcept;

// void gtk_window_controls_set_side (GtkWindowControls* self /*none*/, GtkPackType side);
// void gtk_window_controls_set_side (::GtkWindowControls* self /*none*/, ::GtkPackType side);
GI_INLINE_DECL void set_side (Gtk::PackType side) noexcept;

gi::property_proxy<gi::cstring, base::WindowControlsBase> property_decoration_layout()
{ return gi::property_proxy<gi::cstring, base::WindowControlsBase> (*this, "decoration-layout"); }
const gi::property_proxy<gi::cstring, base::WindowControlsBase> property_decoration_layout() const
{ return gi::property_proxy<gi::cstring, base::WindowControlsBase> (*this, "decoration-layout"); }

gi::property_proxy<bool, base::WindowControlsBase> property_empty()
{ return gi::property_proxy<bool, base::WindowControlsBase> (*this, "empty"); }
const gi::property_proxy<bool, base::WindowControlsBase> property_empty() const
{ return gi::property_proxy<bool, base::WindowControlsBase> (*this, "empty"); }

gi::property_proxy<Gtk::PackType, base::WindowControlsBase> property_side()
{ return gi::property_proxy<Gtk::PackType, base::WindowControlsBase> (*this, "side"); }
const gi::property_proxy<Gtk::PackType, base::WindowControlsBase> property_side() const
{ return gi::property_proxy<Gtk::PackType, base::WindowControlsBase> (*this, "side"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowcontrols_extra_def.hpp>)
#include <gtk/windowcontrols_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowcontrols_extra.hpp>)
#include <gtk/windowcontrols_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WindowControls : public GI_GTK_WINDOWCONTROLS_BASE
{ typedef GI_GTK_WINDOWCONTROLS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWindowControls>
{ typedef Gtk::WindowControls type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WindowControlsClassDef
{
typedef WindowControlsClassDef self;
public:
typedef Gtk::WindowControls instance_type;
typedef ::GtkWindowControlsClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WindowControlsClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowControlsClass: public detail::ClassTemplate<Gtk::impl::internal::WindowControlsClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::WindowControlsClassDef;
typedef WindowControlsClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WindowControlsClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct WindowControlsClassDef::TypeInitData
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

using WindowControlsImpl = detail::ObjectImpl<WindowControls, internal::WindowControlsClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
