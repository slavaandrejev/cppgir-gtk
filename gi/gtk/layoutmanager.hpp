// AUTO-GENERATED

#ifndef _GI_GTK_LAYOUTMANAGER_HPP_
#define _GI_GTK_LAYOUTMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class LayoutChild;
class Widget;

class LayoutManager;

namespace base {


#define GI_GTK_LAYOUTMANAGER_BASE base::LayoutManagerBase
class LayoutManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkLayoutManager BaseObjectType;

LayoutManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_layout_manager_get_type(); } 

// void gtk_layout_manager_allocate (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, int width, int height, int baseline);
// void gtk_layout_manager_allocate (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
GI_INLINE_DECL void allocate (Gtk::Widget widget, gint width, gint height, gint baseline) noexcept;

// GtkLayoutChild* /*none*/ gtk_layout_manager_get_layout_child (GtkLayoutManager* manager /*none*/, GtkWidget* child /*none*/);
// ::GtkLayoutChild* /*none*/ gtk_layout_manager_get_layout_child (::GtkLayoutManager* manager /*none*/, ::GtkWidget* child /*none*/);
GI_INLINE_DECL Gtk::LayoutChild get_layout_child (Gtk::Widget child) noexcept;

// GtkSizeRequestMode gtk_layout_manager_get_request_mode (GtkLayoutManager* manager /*none*/);
// ::GtkSizeRequestMode gtk_layout_manager_get_request_mode (::GtkLayoutManager* manager /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// GtkWidget* /*none,nullable*/ gtk_layout_manager_get_widget (GtkLayoutManager* manager /*none*/);
// ::GtkWidget* /*none,nullable*/ gtk_layout_manager_get_widget (::GtkLayoutManager* manager /*none*/);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void gtk_layout_manager_layout_changed (GtkLayoutManager* manager /*none*/);
// void gtk_layout_manager_layout_changed (::GtkLayoutManager* manager /*none*/);
GI_INLINE_DECL void layout_changed () noexcept;

// void gtk_layout_manager_measure (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void gtk_layout_manager_measure (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
GI_INLINE_DECL void measure (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size, gint * minimum, gint * natural, gint * minimum_baseline, gint * natural_baseline) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> measure (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/layoutmanager_extra_def.hpp>)
#include <gtk/layoutmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/layoutmanager_extra.hpp>)
#include <gtk/layoutmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LayoutManager : public GI_GTK_LAYOUTMANAGER_BASE
{ typedef GI_GTK_LAYOUTMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLayoutManager>
{ typedef Gtk::LayoutManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LayoutManagerClassDef
{
typedef LayoutManagerClassDef self;
public:
typedef Gtk::LayoutManager instance_type;
typedef ::GtkLayoutManagerClass class_type;

using GI_MEMBER_CHECK_CONFLICT(allocate) = self;
using GI_MEMBER_CHECK_CONFLICT(create_layout_child) = self;
using GI_MEMBER_CHECK_CONFLICT(get_request_mode) = self;
using GI_MEMBER_CHECK_CONFLICT(measure) = self;
using GI_MEMBER_CHECK_CONFLICT(root) = self;
using GI_MEMBER_CHECK_CONFLICT(unroot) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~LayoutManagerClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void LayoutManager::allocate (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, int width, int height, int baseline);
// void LayoutManager::allocate (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
virtual void allocate_ (Gtk::Widget widget, gint width, gint height, gint baseline) noexcept = 0;

// GtkLayoutChild* /*full*/ LayoutManager::create_layout_child (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkWidget* for_child /*none*/);
// ::GtkLayoutChild* /*full*/ LayoutManager::create_layout_child (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkWidget* for_child /*none*/);
virtual Gtk::LayoutChild create_layout_child_ (Gtk::Widget widget, Gtk::Widget for_child) noexcept = 0;

// GtkSizeRequestMode LayoutManager::get_request_mode (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode LayoutManager::get_request_mode (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/);
virtual Gtk::SizeRequestMode get_request_mode_ (Gtk::Widget widget) noexcept = 0;

// void LayoutManager::measure (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void LayoutManager::measure (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
virtual void measure_ (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline) noexcept = 0;

// void LayoutManager::root (GtkLayoutManager* manager /*none*/);
// void LayoutManager::root (::GtkLayoutManager* manager /*none*/);
virtual void root_ () noexcept = 0;

// void LayoutManager::unroot (GtkLayoutManager* manager /*none*/);
// void LayoutManager::unroot (::GtkLayoutManager* manager /*none*/);
virtual void unroot_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class LayoutManagerClass: public detail::ClassTemplate<Gtk::impl::internal::LayoutManagerClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::LayoutManagerClassDef;
typedef LayoutManagerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LayoutManagerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void LayoutManager::allocate (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, int width, int height, int baseline);
// void LayoutManager::allocate (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, gint width, gint height, gint baseline);
GI_INLINE_DECL void allocate_ (Gtk::Widget widget, gint width, gint height, gint baseline) noexcept override;

// GtkLayoutChild* /*full*/ LayoutManager::create_layout_child (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkWidget* for_child /*none*/);
// ::GtkLayoutChild* /*full*/ LayoutManager::create_layout_child (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkWidget* for_child /*none*/);
GI_INLINE_DECL Gtk::LayoutChild create_layout_child_ (Gtk::Widget widget, Gtk::Widget for_child) noexcept override;

// GtkSizeRequestMode LayoutManager::get_request_mode (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/);
// ::GtkSizeRequestMode LayoutManager::get_request_mode (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ (Gtk::Widget widget) noexcept override;

// void LayoutManager::measure (GtkLayoutManager* manager /*none*/, GtkWidget* widget /*none*/, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
// void LayoutManager::measure (::GtkLayoutManager* manager /*none*/, ::GtkWidget* widget /*none*/, ::GtkOrientation orientation, gint for_size, gint* minimum, gint* natural, gint* minimum_baseline, gint* natural_baseline);
GI_INLINE_DECL void measure_ (Gtk::Widget widget, Gtk::Orientation orientation, gint for_size, gint & minimum, gint & natural, gint & minimum_baseline, gint & natural_baseline) noexcept override;

// void LayoutManager::root (GtkLayoutManager* manager /*none*/);
// void LayoutManager::root (::GtkLayoutManager* manager /*none*/);
GI_INLINE_DECL void root_ () noexcept override;

// void LayoutManager::unroot (GtkLayoutManager* manager /*none*/);
// void LayoutManager::unroot (::GtkLayoutManager* manager /*none*/);
GI_INLINE_DECL void unroot_ () noexcept override;


};


struct LayoutManagerClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(LayoutManagerClass, allocate)
  GI_MEMBER_DEFINE(LayoutManagerClass, create_layout_child)
  GI_MEMBER_DEFINE(LayoutManagerClass, get_request_mode)
  GI_MEMBER_DEFINE(LayoutManagerClass, measure)
  GI_MEMBER_DEFINE(LayoutManagerClass, root)
  GI_MEMBER_DEFINE(LayoutManagerClass, unroot)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, allocate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, create_layout_child),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_request_mode),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, measure),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, root),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, unroot)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using LayoutManagerImpl = detail::ObjectImpl<LayoutManager, internal::LayoutManagerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
