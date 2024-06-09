// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWGROUP_HPP_
#define _GI_GTK_WINDOWGROUP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class WindowGroup;

namespace base {


#define GI_GTK_WINDOWGROUP_BASE base::WindowGroupBase
class WindowGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkWindowGroup BaseObjectType;

WindowGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_window_group_get_type(); } 

// GtkWindowGroup* /*full*/ gtk_window_group_new ();
// ::GtkWindowGroup* /*full*/ gtk_window_group_new ();
static GI_INLINE_DECL Gtk::WindowGroup new_ () noexcept;

// void gtk_window_group_add_window (GtkWindowGroup* window_group /*none*/, GtkWindow* window /*none*/);
// void gtk_window_group_add_window (::GtkWindowGroup* window_group /*none*/, ::GtkWindow* window /*none*/);
GI_INLINE_DECL void add_window (Gtk::Window window) noexcept;

// GList* /*container*/ gtk_window_group_list_windows (GtkWindowGroup* window_group /*none*/);
// ::GList* /*container*/ gtk_window_group_list_windows (::GtkWindowGroup* window_group /*none*/);
GI_INLINE_DECL gi::Collection<GList, ::GtkWindow*, gi::transfer_container_t> list_windows () noexcept;

// void gtk_window_group_remove_window (GtkWindowGroup* window_group /*none*/, GtkWindow* window /*none*/);
// void gtk_window_group_remove_window (::GtkWindowGroup* window_group /*none*/, ::GtkWindow* window /*none*/);
GI_INLINE_DECL void remove_window (Gtk::Window window) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowgroup_extra_def.hpp>)
#include <gtk/windowgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowgroup_extra.hpp>)
#include <gtk/windowgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WindowGroup : public GI_GTK_WINDOWGROUP_BASE
{ typedef GI_GTK_WINDOWGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWindowGroup>
{ typedef Gtk::WindowGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WindowGroupClassDef
{
typedef WindowGroupClassDef self;
public:
typedef Gtk::WindowGroup instance_type;
typedef ::GtkWindowGroupClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~WindowGroupClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowGroupClass: public detail::ClassTemplate<Gtk::impl::internal::WindowGroupClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::WindowGroupClassDef;
typedef WindowGroupClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WindowGroupClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct WindowGroupClassDef::TypeInitData
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

using WindowGroupImpl = detail::ObjectImpl<WindowGroup, internal::WindowGroupClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
