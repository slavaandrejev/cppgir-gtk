// AUTO-GENERATED

#ifndef _GI_GTK_FIXED_HPP_
#define _GI_GTK_FIXED_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Fixed;

namespace base {


#define GI_GTK_FIXED_BASE base::FixedBase
class FixedBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkFixed BaseObjectType;

FixedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_fixed_get_type(); } 

// GtkWidget* /*none*/ gtk_fixed_new ();
// ::GtkFixed* /*none*/ gtk_fixed_new ();
static GI_INLINE_DECL Gtk::Fixed new_ () noexcept;

// void gtk_fixed_get_child_position (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, double* x, double* y);
// void gtk_fixed_get_child_position (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, gdouble* x, gdouble* y);
GI_INLINE_DECL void get_child_position (Gtk::Widget widget, gdouble & x, gdouble & y) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_child_position (Gtk::Widget widget) noexcept;

// GskTransform* /*none,nullable*/ gtk_fixed_get_child_transform (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/);
// ::GskTransform* /*none,nullable*/ gtk_fixed_get_child_transform (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gsk::Transform_Ref get_child_transform (Gtk::Widget widget) noexcept;

// void gtk_fixed_move (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, double x, double y);
// void gtk_fixed_move (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, gdouble x, gdouble y);
GI_INLINE_DECL void move (Gtk::Widget widget, gdouble x, gdouble y) noexcept;

// void gtk_fixed_put (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, double x, double y);
// void gtk_fixed_put (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, gdouble x, gdouble y);
GI_INLINE_DECL void put (Gtk::Widget widget, gdouble x, gdouble y) noexcept;

// void gtk_fixed_remove (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/);
// void gtk_fixed_remove (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL void remove (Gtk::Widget widget) noexcept;

// void gtk_fixed_set_child_transform (GtkFixed* fixed /*none*/, GtkWidget* widget /*none*/, GskTransform* transform /*none,nullable*/);
// void gtk_fixed_set_child_transform (::GtkFixed* fixed /*none*/, ::GtkWidget* widget /*none*/, ::GskTransform* transform /*none,nullable*/);
GI_INLINE_DECL void set_child_transform (Gtk::Widget widget, Gsk::Transform_Ref transform) noexcept;
GI_INLINE_DECL void set_child_transform (Gtk::Widget widget) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixed_extra_def.hpp>)
#include <gtk/fixed_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixed_extra.hpp>)
#include <gtk/fixed_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Fixed : public GI_GTK_FIXED_BASE
{ typedef GI_GTK_FIXED_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFixed>
{ typedef Gtk::Fixed type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FixedClassDef
{
typedef FixedClassDef self;
public:
typedef Gtk::Fixed instance_type;
typedef ::GtkFixedClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FixedClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FixedClass: public detail::ClassTemplate<Gtk::impl::internal::FixedClassDef, Gtk::impl::internal::WidgetClass>
{
friend class internal::FixedClassDef;
typedef FixedClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FixedClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct FixedClassDef::TypeInitData
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

using FixedImpl = detail::ObjectImpl<Fixed, internal::FixedClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
