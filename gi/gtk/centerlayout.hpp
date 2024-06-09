// AUTO-GENERATED

#ifndef _GI_GTK_CENTERLAYOUT_HPP_
#define _GI_GTK_CENTERLAYOUT_HPP_

#include "layoutmanager.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class CenterLayout;

namespace base {


#define GI_GTK_CENTERLAYOUT_BASE base::CenterLayoutBase
class CenterLayoutBase : public Gtk::LayoutManager
{
typedef Gtk::LayoutManager super_type;
public:
typedef ::GtkCenterLayout BaseObjectType;

CenterLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_center_layout_get_type(); } 

// GtkLayoutManager* /*full*/ gtk_center_layout_new ();
// ::GtkCenterLayout* /*full*/ gtk_center_layout_new ();
static GI_INLINE_DECL Gtk::CenterLayout new_ () noexcept;

// GtkBaselinePosition gtk_center_layout_get_baseline_position (GtkCenterLayout* self /*none*/);
// ::GtkBaselinePosition gtk_center_layout_get_baseline_position (::GtkCenterLayout* self /*none*/);
GI_INLINE_DECL Gtk::BaselinePosition get_baseline_position () noexcept;

// GtkWidget* /*none,nullable*/ gtk_center_layout_get_center_widget (GtkCenterLayout* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_layout_get_center_widget (::GtkCenterLayout* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_center_widget () noexcept;

// GtkWidget* /*none,nullable*/ gtk_center_layout_get_end_widget (GtkCenterLayout* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_layout_get_end_widget (::GtkCenterLayout* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_end_widget () noexcept;

// GtkOrientation gtk_center_layout_get_orientation (GtkCenterLayout* self /*none*/);
// ::GtkOrientation gtk_center_layout_get_orientation (::GtkCenterLayout* self /*none*/);
GI_INLINE_DECL Gtk::Orientation get_orientation () noexcept;

// gboolean gtk_center_layout_get_shrink_center_last (GtkCenterLayout* self /*none*/);
// gboolean gtk_center_layout_get_shrink_center_last (::GtkCenterLayout* self /*none*/);
GI_INLINE_DECL bool get_shrink_center_last () noexcept;

// GtkWidget* /*none,nullable*/ gtk_center_layout_get_start_widget (GtkCenterLayout* self /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_center_layout_get_start_widget (::GtkCenterLayout* self /*none*/);
GI_INLINE_DECL Gtk::Widget get_start_widget () noexcept;

// void gtk_center_layout_set_baseline_position (GtkCenterLayout* self /*none*/, GtkBaselinePosition baseline_position);
// void gtk_center_layout_set_baseline_position (::GtkCenterLayout* self /*none*/, ::GtkBaselinePosition baseline_position);
GI_INLINE_DECL void set_baseline_position (Gtk::BaselinePosition baseline_position) noexcept;

// void gtk_center_layout_set_center_widget (GtkCenterLayout* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_center_layout_set_center_widget (::GtkCenterLayout* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_center_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_center_widget () noexcept;

// void gtk_center_layout_set_end_widget (GtkCenterLayout* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_center_layout_set_end_widget (::GtkCenterLayout* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_end_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_end_widget () noexcept;

// void gtk_center_layout_set_orientation (GtkCenterLayout* self /*none*/, GtkOrientation orientation);
// void gtk_center_layout_set_orientation (::GtkCenterLayout* self /*none*/, ::GtkOrientation orientation);
GI_INLINE_DECL void set_orientation (Gtk::Orientation orientation) noexcept;

// void gtk_center_layout_set_shrink_center_last (GtkCenterLayout* self /*none*/, gboolean shrink_center_last);
// void gtk_center_layout_set_shrink_center_last (::GtkCenterLayout* self /*none*/, gboolean shrink_center_last);
GI_INLINE_DECL void set_shrink_center_last (gboolean shrink_center_last) noexcept;

// void gtk_center_layout_set_start_widget (GtkCenterLayout* self /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_center_layout_set_start_widget (::GtkCenterLayout* self /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_start_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_start_widget () noexcept;

gi::property_proxy<bool, base::CenterLayoutBase> property_shrink_center_last()
{ return gi::property_proxy<bool, base::CenterLayoutBase> (*this, "shrink-center-last"); }
const gi::property_proxy<bool, base::CenterLayoutBase> property_shrink_center_last() const
{ return gi::property_proxy<bool, base::CenterLayoutBase> (*this, "shrink-center-last"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/centerlayout_extra_def.hpp>)
#include <gtk/centerlayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/centerlayout_extra.hpp>)
#include <gtk/centerlayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CenterLayout : public GI_GTK_CENTERLAYOUT_BASE
{ typedef GI_GTK_CENTERLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCenterLayout>
{ typedef Gtk::CenterLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CenterLayoutClassDef
{
typedef CenterLayoutClassDef self;
public:
typedef Gtk::CenterLayout instance_type;
typedef ::GtkCenterLayoutClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~CenterLayoutClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CenterLayoutClass: public detail::ClassTemplate<Gtk::impl::internal::CenterLayoutClassDef, Gtk::impl::internal::LayoutManagerClass>
{
friend class internal::CenterLayoutClassDef;
typedef CenterLayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CenterLayoutClassDef, Gtk::impl::internal::LayoutManagerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct CenterLayoutClassDef::TypeInitData
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

using CenterLayoutImpl = detail::ObjectImpl<CenterLayout, internal::CenterLayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
